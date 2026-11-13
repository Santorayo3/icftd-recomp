/* fn_00002cc8 - 1372 byte(s), 390 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002cc8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002cc8u): goto L_2CC8;
    case RC_ADDR(0x00002cccu): goto L_2CCC;
    case RC_ADDR(0x00002cd2u): goto L_2CD2;
    case RC_ADDR(0x00002cd6u): goto L_2CD6;
    case RC_ADDR(0x00002cdau): goto L_2CDA;
    case RC_ADDR(0x00002cdcu): goto L_2CDC;
    case RC_ADDR(0x00002ce0u): goto L_2CE0;
    case RC_ADDR(0x00002ce4u): goto L_2CE4;
    case RC_ADDR(0x00002ce8u): goto L_2CE8;
    case RC_ADDR(0x00002cecu): goto L_2CEC;
    case RC_ADDR(0x00002cf0u): goto L_2CF0;
    case RC_ADDR(0x00002cf2u): goto L_2CF2;
    case RC_ADDR(0x00002cf4u): goto L_2CF4;
    case RC_ADDR(0x00002cf6u): goto L_2CF6;
    case RC_ADDR(0x00002cf8u): goto L_2CF8;
    case RC_ADDR(0x00002cfcu): goto L_2CFC;
    case RC_ADDR(0x00002d00u): goto L_2D00;
    case RC_ADDR(0x00002d04u): goto L_2D04;
    case RC_ADDR(0x00002d06u): goto L_2D06;
    case RC_ADDR(0x00002d08u): goto L_2D08;
    case RC_ADDR(0x00002d0au): goto L_2D0A;
    case RC_ADDR(0x00002d0eu): goto L_2D0E;
    case RC_ADDR(0x00002d12u): goto L_2D12;
    case RC_ADDR(0x00002d16u): goto L_2D16;
    case RC_ADDR(0x00002d18u): goto L_2D18;
    case RC_ADDR(0x00002d1cu): goto L_2D1C;
    case RC_ADDR(0x00002d20u): goto L_2D20;
    case RC_ADDR(0x00002d22u): goto L_2D22;
    case RC_ADDR(0x00002d26u): goto L_2D26;
    case RC_ADDR(0x00002d2au): goto L_2D2A;
    case RC_ADDR(0x00002d2eu): goto L_2D2E;
    case RC_ADDR(0x00002d30u): goto L_2D30;
    case RC_ADDR(0x00002d34u): goto L_2D34;
    case RC_ADDR(0x00002d38u): goto L_2D38;
    case RC_ADDR(0x00002d3au): goto L_2D3A;
    case RC_ADDR(0x00002d3eu): goto L_2D3E;
    case RC_ADDR(0x00002d40u): goto L_2D40;
    case RC_ADDR(0x00002d42u): goto L_2D42;
    case RC_ADDR(0x00002d44u): goto L_2D44;
    case RC_ADDR(0x00002d48u): goto L_2D48;
    case RC_ADDR(0x00002d4cu): goto L_2D4C;
    case RC_ADDR(0x00002d50u): goto L_2D50;
    case RC_ADDR(0x00002d52u): goto L_2D52;
    case RC_ADDR(0x00002d54u): goto L_2D54;
    case RC_ADDR(0x00002d56u): goto L_2D56;
    case RC_ADDR(0x00002d5cu): goto L_2D5C;
    case RC_ADDR(0x00002d5eu): goto L_2D5E;
    case RC_ADDR(0x00002d64u): goto L_2D64;
    case RC_ADDR(0x00002d66u): goto L_2D66;
    case RC_ADDR(0x00002d6cu): goto L_2D6C;
    case RC_ADDR(0x00002d70u): goto L_2D70;
    case RC_ADDR(0x00002d72u): goto L_2D72;
    case RC_ADDR(0x00002d76u): goto L_2D76;
    case RC_ADDR(0x00002d7au): goto L_2D7A;
    case RC_ADDR(0x00002d7eu): goto L_2D7E;
    case RC_ADDR(0x00002d82u): goto L_2D82;
    case RC_ADDR(0x00002d86u): goto L_2D86;
    case RC_ADDR(0x00002d8au): goto L_2D8A;
    case RC_ADDR(0x00002d8eu): goto L_2D8E;
    case RC_ADDR(0x00002d92u): goto L_2D92;
    case RC_ADDR(0x00002d96u): goto L_2D96;
    case RC_ADDR(0x00002d9au): goto L_2D9A;
    case RC_ADDR(0x00002d9cu): goto L_2D9C;
    case RC_ADDR(0x00002da0u): goto L_2DA0;
    case RC_ADDR(0x00002da4u): goto L_2DA4;
    case RC_ADDR(0x00002da8u): goto L_2DA8;
    case RC_ADDR(0x00002dacu): goto L_2DAC;
    case RC_ADDR(0x00002daeu): goto L_2DAE;
    case RC_ADDR(0x00002db0u): goto L_2DB0;
    case RC_ADDR(0x00002db4u): goto L_2DB4;
    case RC_ADDR(0x00002db8u): goto L_2DB8;
    case RC_ADDR(0x00002dbcu): goto L_2DBC;
    case RC_ADDR(0x00002dbeu): goto L_2DBE;
    case RC_ADDR(0x00002dc2u): goto L_2DC2;
    case RC_ADDR(0x00002dc6u): goto L_2DC6;
    case RC_ADDR(0x00002dcau): goto L_2DCA;
    case RC_ADDR(0x00002dceu): goto L_2DCE;
    case RC_ADDR(0x00002dd0u): goto L_2DD0;
    case RC_ADDR(0x00002dd4u): goto L_2DD4;
    case RC_ADDR(0x00002dd8u): goto L_2DD8;
    case RC_ADDR(0x00002ddcu): goto L_2DDC;
    case RC_ADDR(0x00002de0u): goto L_2DE0;
    case RC_ADDR(0x00002de2u): goto L_2DE2;
    case RC_ADDR(0x00002de8u): goto L_2DE8;
    case RC_ADDR(0x00002deau): goto L_2DEA;
    case RC_ADDR(0x00002deeu): goto L_2DEE;
    case RC_ADDR(0x00002df2u): goto L_2DF2;
    case RC_ADDR(0x00002df6u): goto L_2DF6;
    case RC_ADDR(0x00002df8u): goto L_2DF8;
    case RC_ADDR(0x00002dfau): goto L_2DFA;
    case RC_ADDR(0x00002dfcu): goto L_2DFC;
    case RC_ADDR(0x00002dfeu): goto L_2DFE;
    case RC_ADDR(0x00002e02u): goto L_2E02;
    case RC_ADDR(0x00002e06u): goto L_2E06;
    case RC_ADDR(0x00002e0au): goto L_2E0A;
    case RC_ADDR(0x00002e0eu): goto L_2E0E;
    case RC_ADDR(0x00002e12u): goto L_2E12;
    case RC_ADDR(0x00002e16u): goto L_2E16;
    case RC_ADDR(0x00002e18u): goto L_2E18;
    case RC_ADDR(0x00002e1cu): goto L_2E1C;
    case RC_ADDR(0x00002e20u): goto L_2E20;
    case RC_ADDR(0x00002e22u): goto L_2E22;
    case RC_ADDR(0x00002e24u): goto L_2E24;
    case RC_ADDR(0x00002e28u): goto L_2E28;
    case RC_ADDR(0x00002e2cu): goto L_2E2C;
    case RC_ADDR(0x00002e30u): goto L_2E30;
    case RC_ADDR(0x00002e34u): goto L_2E34;
    case RC_ADDR(0x00002e36u): goto L_2E36;
    case RC_ADDR(0x00002e3au): goto L_2E3A;
    case RC_ADDR(0x00002e3eu): goto L_2E3E;
    case RC_ADDR(0x00002e42u): goto L_2E42;
    case RC_ADDR(0x00002e46u): goto L_2E46;
    case RC_ADDR(0x00002e48u): goto L_2E48;
    case RC_ADDR(0x00002e4cu): goto L_2E4C;
    case RC_ADDR(0x00002e50u): goto L_2E50;
    case RC_ADDR(0x00002e52u): goto L_2E52;
    case RC_ADDR(0x00002e58u): goto L_2E58;
    case RC_ADDR(0x00002e5cu): goto L_2E5C;
    case RC_ADDR(0x00002e5eu): goto L_2E5E;
    case RC_ADDR(0x00002e62u): goto L_2E62;
    case RC_ADDR(0x00002e66u): goto L_2E66;
    case RC_ADDR(0x00002e68u): goto L_2E68;
    case RC_ADDR(0x00002e6au): goto L_2E6A;
    case RC_ADDR(0x00002e6eu): goto L_2E6E;
    case RC_ADDR(0x00002e70u): goto L_2E70;
    case RC_ADDR(0x00002e74u): goto L_2E74;
    case RC_ADDR(0x00002e78u): goto L_2E78;
    case RC_ADDR(0x00002e7au): goto L_2E7A;
    case RC_ADDR(0x00002e7cu): goto L_2E7C;
    case RC_ADDR(0x00002e7eu): goto L_2E7E;
    case RC_ADDR(0x00002e82u): goto L_2E82;
    case RC_ADDR(0x00002e84u): goto L_2E84;
    case RC_ADDR(0x00002e86u): goto L_2E86;
    case RC_ADDR(0x00002e8au): goto L_2E8A;
    case RC_ADDR(0x00002e8cu): goto L_2E8C;
    case RC_ADDR(0x00002e8eu): goto L_2E8E;
    case RC_ADDR(0x00002e92u): goto L_2E92;
    case RC_ADDR(0x00002e96u): goto L_2E96;
    case RC_ADDR(0x00002e98u): goto L_2E98;
    case RC_ADDR(0x00002e9eu): goto L_2E9E;
    case RC_ADDR(0x00002ea0u): goto L_2EA0;
    case RC_ADDR(0x00002ea4u): goto L_2EA4;
    case RC_ADDR(0x00002ea8u): goto L_2EA8;
    case RC_ADDR(0x00002eacu): goto L_2EAC;
    case RC_ADDR(0x00002eb0u): goto L_2EB0;
    case RC_ADDR(0x00002eb2u): goto L_2EB2;
    case RC_ADDR(0x00002eb6u): goto L_2EB6;
    case RC_ADDR(0x00002ebau): goto L_2EBA;
    case RC_ADDR(0x00002ebeu): goto L_2EBE;
    case RC_ADDR(0x00002ec2u): goto L_2EC2;
    case RC_ADDR(0x00002ec4u): goto L_2EC4;
    case RC_ADDR(0x00002ec8u): goto L_2EC8;
    case RC_ADDR(0x00002eccu): goto L_2ECC;
    case RC_ADDR(0x00002eceu): goto L_2ECE;
    case RC_ADDR(0x00002ed0u): goto L_2ED0;
    case RC_ADDR(0x00002ed4u): goto L_2ED4;
    case RC_ADDR(0x00002ed8u): goto L_2ED8;
    case RC_ADDR(0x00002edcu): goto L_2EDC;
    case RC_ADDR(0x00002ee0u): goto L_2EE0;
    case RC_ADDR(0x00002ee4u): goto L_2EE4;
    case RC_ADDR(0x00002ee6u): goto L_2EE6;
    case RC_ADDR(0x00002eeau): goto L_2EEA;
    case RC_ADDR(0x00002eeeu): goto L_2EEE;
    case RC_ADDR(0x00002ef0u): goto L_2EF0;
    case RC_ADDR(0x00002ef4u): goto L_2EF4;
    case RC_ADDR(0x00002ef8u): goto L_2EF8;
    case RC_ADDR(0x00002efcu): goto L_2EFC;
    case RC_ADDR(0x00002f00u): goto L_2F00;
    case RC_ADDR(0x00002f02u): goto L_2F02;
    case RC_ADDR(0x00002f06u): goto L_2F06;
    case RC_ADDR(0x00002f0au): goto L_2F0A;
    case RC_ADDR(0x00002f0cu): goto L_2F0C;
    case RC_ADDR(0x00002f10u): goto L_2F10;
    case RC_ADDR(0x00002f12u): goto L_2F12;
    case RC_ADDR(0x00002f16u): goto L_2F16;
    case RC_ADDR(0x00002f1au): goto L_2F1A;
    case RC_ADDR(0x00002f1cu): goto L_2F1C;
    case RC_ADDR(0x00002f20u): goto L_2F20;
    case RC_ADDR(0x00002f22u): goto L_2F22;
    case RC_ADDR(0x00002f28u): goto L_2F28;
    case RC_ADDR(0x00002f2cu): goto L_2F2C;
    case RC_ADDR(0x00002f30u): goto L_2F30;
    case RC_ADDR(0x00002f34u): goto L_2F34;
    case RC_ADDR(0x00002f36u): goto L_2F36;
    case RC_ADDR(0x00002f38u): goto L_2F38;
    case RC_ADDR(0x00002f3cu): goto L_2F3C;
    case RC_ADDR(0x00002f40u): goto L_2F40;
    case RC_ADDR(0x00002f44u): goto L_2F44;
    case RC_ADDR(0x00002f46u): goto L_2F46;
    case RC_ADDR(0x00002f4cu): goto L_2F4C;
    case RC_ADDR(0x00002f4eu): goto L_2F4E;
    case RC_ADDR(0x00002f52u): goto L_2F52;
    case RC_ADDR(0x00002f56u): goto L_2F56;
    case RC_ADDR(0x00002f5au): goto L_2F5A;
    case RC_ADDR(0x00002f5eu): goto L_2F5E;
    case RC_ADDR(0x00002f60u): goto L_2F60;
    case RC_ADDR(0x00002f64u): goto L_2F64;
    case RC_ADDR(0x00002f68u): goto L_2F68;
    case RC_ADDR(0x00002f6au): goto L_2F6A;
    case RC_ADDR(0x00002f6eu): goto L_2F6E;
    case RC_ADDR(0x00002f72u): goto L_2F72;
    case RC_ADDR(0x00002f76u): goto L_2F76;
    case RC_ADDR(0x00002f7au): goto L_2F7A;
    case RC_ADDR(0x00002f7cu): goto L_2F7C;
    case RC_ADDR(0x00002f80u): goto L_2F80;
    case RC_ADDR(0x00002f84u): goto L_2F84;
    case RC_ADDR(0x00002f86u): goto L_2F86;
    case RC_ADDR(0x00002f8cu): goto L_2F8C;
    case RC_ADDR(0x00002f8eu): goto L_2F8E;
    case RC_ADDR(0x00002f92u): goto L_2F92;
    case RC_ADDR(0x00002f98u): goto L_2F98;
    case RC_ADDR(0x00002f9au): goto L_2F9A;
    case RC_ADDR(0x00002f9eu): goto L_2F9E;
    case RC_ADDR(0x00002fa2u): goto L_2FA2;
    case RC_ADDR(0x00002fa4u): goto L_2FA4;
    case RC_ADDR(0x00002fa6u): goto L_2FA6;
    case RC_ADDR(0x00002fa8u): goto L_2FA8;
    case RC_ADDR(0x00002faau): goto L_2FAA;
    case RC_ADDR(0x00002faeu): goto L_2FAE;
    case RC_ADDR(0x00002fb2u): goto L_2FB2;
    case RC_ADDR(0x00002fb6u): goto L_2FB6;
    case RC_ADDR(0x00002fbau): goto L_2FBA;
    case RC_ADDR(0x00002fbcu): goto L_2FBC;
    case RC_ADDR(0x00002fc0u): goto L_2FC0;
    case RC_ADDR(0x00002fc2u): goto L_2FC2;
    case RC_ADDR(0x00002fc6u): goto L_2FC6;
    case RC_ADDR(0x00002fcau): goto L_2FCA;
    case RC_ADDR(0x00002fccu): goto L_2FCC;
    case RC_ADDR(0x00002fd0u): goto L_2FD0;
    case RC_ADDR(0x00002fd4u): goto L_2FD4;
    case RC_ADDR(0x00002fdau): goto L_2FDA;
    case RC_ADDR(0x00002fdcu): goto L_2FDC;
    case RC_ADDR(0x00002fe2u): goto L_2FE2;
    case RC_ADDR(0x00002fe4u): goto L_2FE4;
    case RC_ADDR(0x00002feau): goto L_2FEA;
    case RC_ADDR(0x00002fecu): goto L_2FEC;
    case RC_ADDR(0x00002ff2u): goto L_2FF2;
    case RC_ADDR(0x00002ff4u): goto L_2FF4;
    case RC_ADDR(0x00002ff8u): goto L_2FF8;
    case RC_ADDR(0x00002ffcu): goto L_2FFC;
    case RC_ADDR(0x00003000u): goto L_3000;
    case RC_ADDR(0x00003002u): goto L_3002;
    case RC_ADDR(0x00003004u): goto L_3004;
    case RC_ADDR(0x00003008u): goto L_3008;
    case RC_ADDR(0x0000300cu): goto L_300C;
    case RC_ADDR(0x00003010u): goto L_3010;
    case RC_ADDR(0x00003012u): goto L_3012;
    case RC_ADDR(0x00003016u): goto L_3016;
    case RC_ADDR(0x0000301au): goto L_301A;
    case RC_ADDR(0x0000301eu): goto L_301E;
    case RC_ADDR(0x00003020u): goto L_3020;
    case RC_ADDR(0x00003024u): goto L_3024;
    case RC_ADDR(0x00003028u): goto L_3028;
    case RC_ADDR(0x0000302au): goto L_302A;
    case RC_ADDR(0x0000302eu): goto L_302E;
    case RC_ADDR(0x00003030u): goto L_3030;
    case RC_ADDR(0x00003032u): goto L_3032;
    case RC_ADDR(0x00003036u): goto L_3036;
    case RC_ADDR(0x00003038u): goto L_3038;
    case RC_ADDR(0x0000303au): goto L_303A;
    case RC_ADDR(0x0000303eu): goto L_303E;
    case RC_ADDR(0x00003044u): goto L_3044;
    case RC_ADDR(0x00003046u): goto L_3046;
    case RC_ADDR(0x0000304cu): goto L_304C;
    case RC_ADDR(0x0000304eu): goto L_304E;
    case RC_ADDR(0x00003054u): goto L_3054;
    case RC_ADDR(0x0000305au): goto L_305A;
    case RC_ADDR(0x0000305eu): goto L_305E;
    case RC_ADDR(0x00003062u): goto L_3062;
    case RC_ADDR(0x00003068u): goto L_3068;
    case RC_ADDR(0x0000306cu): goto L_306C;
    case RC_ADDR(0x00003070u): goto L_3070;
    case RC_ADDR(0x00003074u): goto L_3074;
    case RC_ADDR(0x00003078u): goto L_3078;
    case RC_ADDR(0x0000307au): goto L_307A;
    case RC_ADDR(0x00003080u): goto L_3080;
    case RC_ADDR(0x00003082u): goto L_3082;
    case RC_ADDR(0x00003088u): goto L_3088;
    case RC_ADDR(0x0000308au): goto L_308A;
    case RC_ADDR(0x00003090u): goto L_3090;
    case RC_ADDR(0x00003092u): goto L_3092;
    case RC_ADDR(0x00003096u): goto L_3096;
    case RC_ADDR(0x0000309au): goto L_309A;
    case RC_ADDR(0x0000309eu): goto L_309E;
    case RC_ADDR(0x000030a4u): goto L_30A4;
    case RC_ADDR(0x000030a6u): goto L_30A6;
    case RC_ADDR(0x000030acu): goto L_30AC;
    case RC_ADDR(0x000030aeu): goto L_30AE;
    case RC_ADDR(0x000030b2u): goto L_30B2;
    case RC_ADDR(0x000030b6u): goto L_30B6;
    case RC_ADDR(0x000030b8u): goto L_30B8;
    case RC_ADDR(0x000030beu): goto L_30BE;
    case RC_ADDR(0x000030c0u): goto L_30C0;
    case RC_ADDR(0x000030c6u): goto L_30C6;
    case RC_ADDR(0x000030ccu): goto L_30CC;
    case RC_ADDR(0x000030ceu): goto L_30CE;
    case RC_ADDR(0x000030d4u): goto L_30D4;
    case RC_ADDR(0x000030d6u): goto L_30D6;
    case RC_ADDR(0x000030dau): goto L_30DA;
    case RC_ADDR(0x000030deu): goto L_30DE;
    case RC_ADDR(0x000030e0u): goto L_30E0;
    case RC_ADDR(0x000030e6u): goto L_30E6;
    case RC_ADDR(0x000030e8u): goto L_30E8;
    case RC_ADDR(0x000030eeu): goto L_30EE;
    case RC_ADDR(0x000030f0u): goto L_30F0;
    case RC_ADDR(0x000030f4u): goto L_30F4;
    case RC_ADDR(0x000030f8u): goto L_30F8;
    case RC_ADDR(0x000030fau): goto L_30FA;
    case RC_ADDR(0x00003100u): goto L_3100;
    case RC_ADDR(0x00003102u): goto L_3102;
    case RC_ADDR(0x00003108u): goto L_3108;
    case RC_ADDR(0x0000310au): goto L_310A;
    case RC_ADDR(0x0000310eu): goto L_310E;
    case RC_ADDR(0x00003112u): goto L_3112;
    case RC_ADDR(0x00003114u): goto L_3114;
    case RC_ADDR(0x0000311au): goto L_311A;
    case RC_ADDR(0x0000311cu): goto L_311C;
    case RC_ADDR(0x00003122u): goto L_3122;
    case RC_ADDR(0x00003124u): goto L_3124;
    case RC_ADDR(0x00003128u): goto L_3128;
    case RC_ADDR(0x0000312cu): goto L_312C;
    case RC_ADDR(0x0000312eu): goto L_312E;
    case RC_ADDR(0x00003132u): goto L_3132;
    case RC_ADDR(0x00003136u): goto L_3136;
    case RC_ADDR(0x00003138u): goto L_3138;
    case RC_ADDR(0x0000313eu): goto L_313E;
    case RC_ADDR(0x00003140u): goto L_3140;
    case RC_ADDR(0x00003146u): goto L_3146;
    case RC_ADDR(0x00003148u): goto L_3148;
    case RC_ADDR(0x0000314eu): goto L_314E;
    case RC_ADDR(0x00003150u): goto L_3150;
    case RC_ADDR(0x00003154u): goto L_3154;
    case RC_ADDR(0x00003158u): goto L_3158;
    case RC_ADDR(0x0000315au): goto L_315A;
    case RC_ADDR(0x00003160u): goto L_3160;
    case RC_ADDR(0x00003162u): goto L_3162;
    case RC_ADDR(0x00003168u): goto L_3168;
    case RC_ADDR(0x0000316au): goto L_316A;
    case RC_ADDR(0x0000316eu): goto L_316E;
    case RC_ADDR(0x00003172u): goto L_3172;
    case RC_ADDR(0x00003174u): goto L_3174;
    case RC_ADDR(0x00003178u): goto L_3178;
    case RC_ADDR(0x0000317cu): goto L_317C;
    case RC_ADDR(0x0000317eu): goto L_317E;
    case RC_ADDR(0x00003180u): goto L_3180;
    case RC_ADDR(0x00003184u): goto L_3184;
    case RC_ADDR(0x00003186u): goto L_3186;
    case RC_ADDR(0x00003188u): goto L_3188;
    case RC_ADDR(0x0000318cu): goto L_318C;
    case RC_ADDR(0x00003192u): goto L_3192;
    case RC_ADDR(0x00003196u): goto L_3196;
    case RC_ADDR(0x0000319au): goto L_319A;
    case RC_ADDR(0x0000319cu): goto L_319C;
    case RC_ADDR(0x000031a0u): goto L_31A0;
    case RC_ADDR(0x000031a2u): goto L_31A2;
    case RC_ADDR(0x000031a6u): goto L_31A6;
    case RC_ADDR(0x000031aau): goto L_31AA;
    case RC_ADDR(0x000031acu): goto L_31AC;
    case RC_ADDR(0x000031b0u): goto L_31B0;
    case RC_ADDR(0x000031b2u): goto L_31B2;
    case RC_ADDR(0x000031b8u): goto L_31B8;
    case RC_ADDR(0x000031bcu): goto L_31BC;
    case RC_ADDR(0x000031c0u): goto L_31C0;
    case RC_ADDR(0x000031c2u): goto L_31C2;
    case RC_ADDR(0x000031c8u): goto L_31C8;
    case RC_ADDR(0x000031ccu): goto L_31CC;
    case RC_ADDR(0x000031ceu): goto L_31CE;
    case RC_ADDR(0x000031d0u): goto L_31D0;
    case RC_ADDR(0x000031d4u): goto L_31D4;
    case RC_ADDR(0x000031d8u): goto L_31D8;
    case RC_ADDR(0x000031fcu): goto L_31FC;
    case RC_ADDR(0x00003202u): goto L_3202;
    case RC_ADDR(0x00003204u): goto L_3204;
    case RC_ADDR(0x00003206u): goto L_3206;
    case RC_ADDR(0x0000320au): goto L_320A;
    case RC_ADDR(0x0000320eu): goto L_320E;
    case RC_ADDR(0x00003212u): goto L_3212;
    case RC_ADDR(0x00003214u): goto L_3214;
    case RC_ADDR(0x00003216u): goto L_3216;
    case RC_ADDR(0x0000321au): goto L_321A;
    case RC_ADDR(0x0000321eu): goto L_321E;
    case RC_ADDR(0x00003220u): goto L_3220;
    case RC_ADDR(0x00003224u): goto L_3224;
    case RC_ADDR(0x00003228u): goto L_3228;
    case RC_ADDR(0x0000322cu): goto L_322C;
    case RC_ADDR(0x0000322eu): goto L_322E;
    case RC_ADDR(0x00003232u): goto L_3232;
    case RC_ADDR(0x00003238u): goto L_3238;
    case RC_ADDR(0x0000323cu): goto L_323C;
    case RC_ADDR(0x00003240u): goto L_3240;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2CC8:
    /* 00002cc8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00002cc8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_2CCC:
    /* 00002ccc   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00002cccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CD2:
    /* 00002cd2   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00002cd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_2CD6:
    /* 00002cd6   4  beq 0000323c */
    c->pc = RC_ADDR(0x00002cd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_323C;

L_2CDA:
    /* 00002cda   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00002cdau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2CDC:
    /* 00002cdc   4  move.w (ffffcf80,A4),D0 */
    c->pc = RC_ADDR(0x00002cdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3080u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CE0:
    /* 00002ce0   4  bra 000031fc */
    c->pc = RC_ADDR(0x00002ce0u);
    rc_step(c, m, 10);
    goto L_31FC;

L_2CE4:
    /* 00002ce4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002ce4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CE8:
    /* 00002ce8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002ce8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2CEC:
    /* 00002cec   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002cecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002cf0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2CF0:
    /* 00002cf0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002cf0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2CF2:
    /* 00002cf2   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002cf2u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2CF4:
    /* 00002cf4   2  unlk A5 */
    c->pc = RC_ADDR(0x00002cf4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2CF6:
    /* 00002cf6   2  rts */
    c->pc = RC_ADDR(0x00002cf6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2CF8:
    /* 00002cf8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002cf8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CFC:
    /* 00002cfc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002cfcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D00:
    /* 00002d00   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002d00u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2D04:
    /* 00002d04   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002d04u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2D06:
    /* 00002d06   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002d06u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2D08:
    /* 00002d08   2  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002d08u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2D0A:
    /* 00002d0a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002d0au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D0E:
    /* 00002d0e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002d0eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D12:
    /* 00002d12   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002d12u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2D16:
    /* 00002d16   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002d16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2D18:
    /* 00002d18   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002d18u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D1C:
    /* 00002d1c   4  jsr (000064e2) */
    c->pc = RC_ADDR(0x00002d1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d20u));
    rc_depth++;
    c->pc = RC_ADDR(0x000064e2u);
    return;

L_2D20:
    /* 00002d20   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002d20u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2D22:
    /* 00002d22   4  bra 0000320e */
    c->pc = RC_ADDR(0x00002d22u);
    rc_step(c, m, 10);
    goto L_320E;

L_2D26:
    /* 00002d26   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002d26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D2A:
    /* 00002d2a   4  jsr (00008e56) */
    c->pc = RC_ADDR(0x00002d2au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008e56u);
    return;

L_2D2E:
    /* 00002d2e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002d2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2D30:
    /* 00002d30   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002d30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D34:
    /* 00002d34   4  jsr (000033f4) */
    c->pc = RC_ADDR(0x00002d34u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d38u));
    rc_depth++;
    c->pc = RC_ADDR(0x000033f4u);
    return;

L_2D38:
    /* 00002d38   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002d38u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2D3A:
    /* 00002d3a   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00002d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_2D3E:
    /* 00002d3e   2  beq 00002d44 */
    c->pc = RC_ADDR(0x00002d3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2D44;

L_2D40:
    /* 00002d40   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002d40u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2D42:
    /* 00002d42   2  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002d42u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2D44:
    /* 00002d44   4  move.w (ffffcf52,A4),-(A7) */
    c->pc = RC_ADDR(0x00002d44u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30aeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D48:
    /* 00002d48   4  move.w (ffffcf50,A4),-(A7) */
    c->pc = RC_ADDR(0x00002d48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D4C:
    /* 00002d4c   4  jsr (000018ba) */
    c->pc = RC_ADDR(0x00002d4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d50u));
    rc_depth++;
    c->pc = RC_ADDR(0x000018bau);
    return;

L_2D50:
    /* 00002d50   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002d50u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2D52:
    /* 00002d52   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002d52u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2D54:
    /* 00002d54   2  bne 00002d66 */
    c->pc = RC_ADDR(0x00002d54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2D66;

L_2D56:
    /* 00002d56   6  cmpi.w #7,(ffffcf50,A4) */
    c->pc = RC_ADDR(0x00002d56u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b0u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_2D5C:
    /* 00002d5c   2  bge 00002db4 */
    c->pc = RC_ADDR(0x00002d5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_2DB4;

L_2D5E:
    /* 00002d5e   6  cmpi.w #7,(ffff83cc,A4) */
    c->pc = RC_ADDR(0x00002d5eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_2D64:
    /* 00002d64   2  blt 00002db4 */
    c->pc = RC_ADDR(0x00002d64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_2DB4;

L_2D66:
    /* 00002d66   6  move.w #1,(ffffcf4c,A4) */
    c->pc = RC_ADDR(0x00002d66u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D6C:
    /* 00002d6c   4  tst.w (ffffcf4e,A4) */
    c->pc = RC_ADDR(0x00002d6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b2u));
    rc_set_nzvc(c, t0, RC_W);

L_2D70:
    /* 00002d70   2  beq 00002dae */
    c->pc = RC_ADDR(0x00002d70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2DAE;

L_2D72:
    /* 00002d72   4  jsr (ffff8032,A4) */
    c->pc = RC_ADDR(0x00002d72u);
    rc_step(c, m, 18);
    /* vector 8 */
    rc_push32(c, m, RC_ADDR(0x00002d76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000151au);
    return;

L_2D76:
    /* 00002d76   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002d76u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D7A:
    /* 00002d7a   4  pea (0000324d) */
    c->pc = RC_ADDR(0x00002d7au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000324du));

L_2D7E:
    /* 00002d7e   4  pea (00003244) */
    c->pc = RC_ADDR(0x00002d7eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003244u));

L_2D82:
    /* 00002d82   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00002d82u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00002d86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_2D86:
    /* 00002d86   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00002d86u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_2D8A:
    /* 00002d8a   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00002d8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D8E:
    /* 00002d8e   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x00002d8eu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_2D92:
    /* 00002d92   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00002d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D96:
    /* 00002d96   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00002d96u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_2D9A:
    /* 00002d9a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00002d9au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D9C:
    /* 00002d9c   4  lea (ffffcf90,A4),A0 */
    c->pc = RC_ADDR(0x00002d9cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3070u);

L_2DA0:
    /* 00002da0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002da0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DA4:
    /* 00002da4   4  pea (00003258) */
    c->pc = RC_ADDR(0x00002da4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003258u));

L_2DA8:
    /* 00002da8   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x00002da8u);
    rc_step(c, m, 18);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x00002dacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000010beu);
    return;

L_2DAC:
    /* 00002dac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002dacu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2DAE:
    /* 00002dae   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002daeu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2DB0:
    /* 00002db0   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002db0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2DB4:
    /* 00002db4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002db4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DB8:
    /* 00002db8   4  jsr (00008f54) */
    c->pc = RC_ADDR(0x00002db8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002dbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008f54u);
    return;

L_2DBC:
    /* 00002dbc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002dbcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2DBE:
    /* 00002dbe   4  bra 0000320e */
    c->pc = RC_ADDR(0x00002dbeu);
    rc_step(c, m, 10);
    goto L_320E;

L_2DC2:
    /* 00002dc2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002dc2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DC6:
    /* 00002dc6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002dc6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DCA:
    /* 00002dca   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002dcau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002dceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2DCE:
    /* 00002dce   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002dceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2DD0:
    /* 00002dd0   4  jsr (0000451a) */
    c->pc = RC_ADDR(0x00002dd0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002dd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000451au);
    return;

L_2DD4:
    /* 00002dd4   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002dd4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DD8:
    /* 00002dd8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002dd8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DDC:
    /* 00002ddc   4  jsr (00005824) */
    c->pc = RC_ADDR(0x00002ddcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002de0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005824u);
    return;

L_2DE0:
    /* 00002de0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002de0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2DE2:
    /* 00002de2   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00002de2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DE8:
    /* 00002de8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002de8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2DEA:
    /* 00002dea   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00002deau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2DEE:
    /* 00002dee   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x00002deeu);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DF2:
    /* 00002df2   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00002df2u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00002df6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_2DF6:
    /* 00002df6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002df6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2DF8:
    /* 00002df8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002df8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2DFA:
    /* 00002dfa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002dfau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2DFC:
    /* 00002dfc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002dfcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2DFE:
    /* 00002dfe   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002dfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2E02:
    /* 00002e02   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002e02u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2E06:
    /* 00002e06   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00002e06u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00002e0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_2E0A:
    /* 00002e0a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00002e0au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_2E0E:
    /* 00002e0e   4  jsr (00008cbc) */
    c->pc = RC_ADDR(0x00002e0eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002e12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008cbcu);
    return;

L_2E12:
    /* 00002e12   4  bra 0000320e */
    c->pc = RC_ADDR(0x00002e12u);
    rc_step(c, m, 10);
    goto L_320E;

L_2E16:
    /* 00002e16   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002e16u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2E18:
    /* 00002e18   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002e18u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2E1C:
    /* 00002e1c   4  jsr (00003264) */
    c->pc = RC_ADDR(0x00002e1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002e20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003264u);
    return;

L_2E20:
    /* 00002e20   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002e20u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2E22:
    /* 00002e22   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002e22u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2E24:
    /* 00002e24   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002e24u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2E28:
    /* 00002e28   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002e28u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E2C:
    /* 00002e2c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002e2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2E30:
    /* 00002e30   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002e30u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002e34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2E34:
    /* 00002e34   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002e34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2E36:
    /* 00002e36   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00002e36u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00002e3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_2E3A:
    /* 00002e3a   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002e3au);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002e3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_2E3E:
    /* 00002e3e   4  jsr (ffff80f8,A4) */
    c->pc = RC_ADDR(0x00002e3eu);
    rc_step(c, m, 18);
    /* vector 41 */
    rc_push32(c, m, RC_ADDR(0x00002e42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b4eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b46cu);
    return;

L_2E42:
    /* 00002e42   4  tst.w (fffffec6,A4) */
    c->pc = RC_ADDR(0x00002e42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x13au));
    rc_set_nzvc(c, t0, RC_W);

L_2E46:
    /* 00002e46   2  beq 00002e6a */
    c->pc = RC_ADDR(0x00002e46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E6A;

L_2E48:
    /* 00002e48   4  clr.w (fffffec6,A4) */
    c->pc = RC_ADDR(0x00002e48u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x13au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2E4C:
    /* 00002e4c   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00002e4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_2E50:
    /* 00002e50   2  beq 00002e5e */
    c->pc = RC_ADDR(0x00002e50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E5E;

L_2E52:
    /* 00002e52   6  move.w #1,(fffffe38,A4) */
    c->pc = RC_ADDR(0x00002e52u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E58:
    /* 00002e58   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00002e58u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2E5C:
    /* 00002e5c   2  bra 00002e68 */
    c->pc = RC_ADDR(0x00002e5cu);
    rc_step(c, m, 10);
    goto L_2E68;

L_2E5E:
    /* 00002e5e   4  move.w #f5,-(A7) */
    c->pc = RC_ADDR(0x00002e5eu);
    rc_step(c, m, 12);
    t0 = 0x000000f5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E62:
    /* 00002e62   4  jsr (00002c92) */
    c->pc = RC_ADDR(0x00002e62u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002e66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_2E66:
    /* 00002e66   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002e66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2E68:
    /* 00002e68   2  bra 00002e9e */
    c->pc = RC_ADDR(0x00002e68u);
    rc_step(c, m, 10);
    goto L_2E9E;

L_2E6A:
    /* 00002e6a   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00002e6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_2E6E:
    /* 00002e6e   2  beq 00002e8e */
    c->pc = RC_ADDR(0x00002e6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E8E;

L_2E70:
    /* 00002e70   4  move.w (ffffcf82,A4),-(A7) */
    c->pc = RC_ADDR(0x00002e70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E74:
    /* 00002e74   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00002e74u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00002e78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_2E78:
    /* 00002e78   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002e78u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2E7A:
    /* 00002e7a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002e7au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2E7C:
    /* 00002e7c   2  beq 00002e8c */
    c->pc = RC_ADDR(0x00002e7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E8C;

L_2E7E:
    /* 00002e7e   4  move.w (ffffcf82,A4),D0 */
    c->pc = RC_ADDR(0x00002e7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E82:
    /* 00002e82   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00002e82u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2E84:
    /* 00002e84   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00002e84u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E86:
    /* 00002e86   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00002e86u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00002e8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_2E8A:
    /* 00002e8a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002e8au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2E8C:
    /* 00002e8c   2  bra 00002e98 */
    c->pc = RC_ADDR(0x00002e8cu);
    rc_step(c, m, 10);
    goto L_2E98;

L_2E8E:
    /* 00002e8e   4  move.w #f5,-(A7) */
    c->pc = RC_ADDR(0x00002e8eu);
    rc_step(c, m, 12);
    t0 = 0x000000f5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E92:
    /* 00002e92   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00002e92u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00002e96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_2E96:
    /* 00002e96   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002e96u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2E98:
    /* 00002e98   6  move.w #1,(ffff83d6,A4) */
    c->pc = RC_ADDR(0x00002e98u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E9E:
    /* 00002e9e   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002e9eu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2EA0:
    /* 00002ea0   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002ea0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2EA4:
    /* 00002ea4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002ea4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2EA8:
    /* 00002ea8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002ea8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2EAC:
    /* 00002eac   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002eacu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002eb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2EB0:
    /* 00002eb0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002eb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2EB2:
    /* 00002eb2   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00002eb2u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00002eb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_2EB6:
    /* 00002eb6   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002eb6u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002ebau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_2EBA:
    /* 00002eba   4  jsr (ffff80fe,A4) */
    c->pc = RC_ADDR(0x00002ebau);
    rc_step(c, m, 18);
    /* vector 42 */
    rc_push32(c, m, RC_ADDR(0x00002ebeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b54u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000be34u);
    return;

L_2EBE:
    /* 00002ebe   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00002ebeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_2EC2:
    /* 00002ec2   2  bne 00002ece */
    c->pc = RC_ADDR(0x00002ec2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2ECE;

L_2EC4:
    /* 00002ec4   4  move.w #f9,-(A7) */
    c->pc = RC_ADDR(0x00002ec4u);
    rc_step(c, m, 12);
    t0 = 0x000000f9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2EC8:
    /* 00002ec8   4  jsr (00002c92) */
    c->pc = RC_ADDR(0x00002ec8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002eccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_2ECC:
    /* 00002ecc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002eccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2ECE:
    /* 00002ece   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002eceu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2ED0:
    /* 00002ed0   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002ed0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2ED4:
    /* 00002ed4   4  clr.w (ffff8532,A4) */
    c->pc = RC_ADDR(0x00002ed4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7aceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2ED8:
    /* 00002ed8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002ed8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2EDC:
    /* 00002edc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002edcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2EE0:
    /* 00002ee0   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002ee0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002ee4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2EE4:
    /* 00002ee4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002ee4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2EE6:
    /* 00002ee6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002ee6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2EEA:
    /* 00002eea   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00002eeau);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00002eeeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_2EEE:
    /* 00002eee   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002eeeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2EF0:
    /* 00002ef0   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00002ef0u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00002ef4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_2EF4:
    /* 00002ef4   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002ef4u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002ef8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_2EF8:
    /* 00002ef8   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00002ef8u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00002efcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bfcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001819au);
    return;

L_2EFC:
    /* 00002efc   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00002efcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_2F00:
    /* 00002f00   2  bne 00002f38 */
    c->pc = RC_ADDR(0x00002f00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2F38;

L_2F02:
    /* 00002f02   4  move.w (ffffcf86,A4),D0 */
    c->pc = RC_ADDR(0x00002f02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F06:
    /* 00002f06   4  mulu.w #5a0,D0 */
    c->pc = RC_ADDR(0x00002f06u);
    rc_step(c, m, 42);
    t0 = 0x000005a0u;
    rc_mulu(c, 0, t0);

L_2F0A:
    /* 00002f0a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00002f0au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F0C:
    /* 00002f0c   4  jsr (ffff807a,A4) */
    c->pc = RC_ADDR(0x00002f0cu);
    rc_step(c, m, 18);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x00002f10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000579cu);
    return;

L_2F10:
    /* 00002f10   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002f10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2F12:
    /* 00002f12   4  move.w (ffffcf86,A4),D0 */
    c->pc = RC_ADDR(0x00002f12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F16:
    /* 00002f16   4  mulu.w #18,D0 */
    c->pc = RC_ADDR(0x00002f16u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_mulu(c, 0, t0);

L_2F1A:
    /* 00002f1a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00002f1au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F1C:
    /* 00002f1c   4  jsr (0000903a) */
    c->pc = RC_ADDR(0x00002f1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002f20u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000903au);
    return;

L_2F20:
    /* 00002f20   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002f20u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2F22:
    /* 00002f22   6  move.w #8,(ffff83cc,A4) */
    c->pc = RC_ADDR(0x00002f22u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x7c34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F28:
    /* 00002f28   4  clr.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x00002f28u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F2C:
    /* 00002f2c   4  move.w #fd,-(A7) */
    c->pc = RC_ADDR(0x00002f2cu);
    rc_step(c, m, 12);
    t0 = 0x000000fdu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F30:
    /* 00002f30   4  jsr (00002c92) */
    c->pc = RC_ADDR(0x00002f30u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002f34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_2F34:
    /* 00002f34   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002f34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2F36:
    /* 00002f36   2  bra 00002f40 */
    c->pc = RC_ADDR(0x00002f36u);
    rc_step(c, m, 10);
    goto L_2F40;

L_2F38:
    /* 00002f38   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00002f38u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F3C:
    /* 00002f3c   4  clr.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00002f3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2F40:
    /* 00002f40   4  tst.w (ffff8430,A4) */
    c->pc = RC_ADDR(0x00002f40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bd0u));
    rc_set_nzvc(c, t0, RC_W);

L_2F44:
    /* 00002f44   2  bne 00002f4c */
    c->pc = RC_ADDR(0x00002f44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2F4C;

L_2F46:
    /* 00002f46   6  move.w (ffff83c8,A4),(ffff8430,A4) */
    c->pc = RC_ADDR(0x00002f46u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_wr16(c, m, (c->a[4] - 0x7bd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F4C:
    /* 00002f4c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002f4cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2F4E:
    /* 00002f4e   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002f4eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2F52:
    /* 00002f52   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002f52u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F56:
    /* 00002f56   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002f56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2F5A:
    /* 00002f5a   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002f5au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002f5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2F5E:
    /* 00002f5e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002f5eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2F60:
    /* 00002f60   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002f60u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2F64:
    /* 00002f64   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00002f64u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00002f68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_2F68:
    /* 00002f68   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002f68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2F6A:
    /* 00002f6a   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00002f6au);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00002f6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_2F6E:
    /* 00002f6e   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002f6eu);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002f72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_2F72:
    /* 00002f72   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00002f72u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F76:
    /* 00002f76   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x00002f76u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x00002f7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b96u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000107a6u);
    return;

L_2F7A:
    /* 00002f7a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002f7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2F7C:
    /* 00002f7c   4  move.w #27,-(A7) */
    c->pc = RC_ADDR(0x00002f7cu);
    rc_step(c, m, 12);
    t0 = 0x00000027u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F80:
    /* 00002f80   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00002f80u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00002f84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_2F84:
    /* 00002f84   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002f84u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2F86:
    /* 00002f86   6  move.w #1,(ffff851c,A4) */
    c->pc = RC_ADDR(0x00002f86u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ae4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F8C:
    /* 00002f8c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002f8cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2F8E:
    /* 00002f8e   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002f8eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2F92:
    /* 00002f92   6  cmpi.w #17,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00002f92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_2F98:
    /* 00002f98   2  beq 00002fae */
    c->pc = RC_ADDR(0x00002f98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2FAE;

L_2F9A:
    /* 00002f9a   4  move.w (ffffefe4,A4),-(A7) */
    c->pc = RC_ADDR(0x00002f9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2F9E:
    /* 00002f9e   4  jsr (00004bee) */
    c->pc = RC_ADDR(0x00002f9eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002fa2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004beeu);
    return;

L_2FA2:
    /* 00002fa2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002fa2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2FA4:
    /* 00002fa4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002fa4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2FA6:
    /* 00002fa6   2  bne 00002fae */
    c->pc = RC_ADDR(0x00002fa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2FAE;

L_2FA8:
    /* 00002fa8   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002fa8u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2FAA:
    /* 00002faa   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00002faau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_2FAE:
    /* 00002fae   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002faeu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2FB2:
    /* 00002fb2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002fb2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2FB6:
    /* 00002fb6   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002fb6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002fbau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2FBA:
    /* 00002fba   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002fbau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2FBC:
    /* 00002fbc   4  tst.w (fffff268,A4) */
    c->pc = RC_ADDR(0x00002fbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd98u));
    rc_set_nzvc(c, t0, RC_W);

L_2FC0:
    /* 00002fc0   2  beq 00002fcc */
    c->pc = RC_ADDR(0x00002fc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2FCC;

L_2FC2:
    /* 00002fc2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002fc2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2FC6:
    /* 00002fc6   4  jsr (00006f58) */
    c->pc = RC_ADDR(0x00002fc6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002fcau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006f58u);
    return;

L_2FCA:
    /* 00002fca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002fcau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2FCC:
    /* 00002fcc   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00002fccu);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00002fd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_2FD0:
    /* 00002fd0   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00002fd0u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x00002fd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_2FD4:
    /* 00002fd4   6  cmpi.w #5,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00002fd4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_2FDA:
    /* 00002fda   2  bcc 00002fe4 */
    c->pc = RC_ADDR(0x00002fdau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_2FE4;

L_2FDC:
    /* 00002fdc   6  cmpi.w #f,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00002fdcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_2FE2:
    /* 00002fe2   2  bne 00002ff4 */
    c->pc = RC_ADDR(0x00002fe2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2FF4;

L_2FE4:
    /* 00002fe4   6  cmpi.w #d,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00002fe4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x0000000du);

L_2FEA:
    /* 00002fea   2  bne 00003004 */
    c->pc = RC_ADDR(0x00002feau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3004;

L_2FEC:
    /* 00002fec   6  cmpi.w #11,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00002fecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_2FF2:
    /* 00002ff2   2  bne 00003004 */
    c->pc = RC_ADDR(0x00002ff2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3004;

L_2FF4:
    /* 00002ff4   4  clr.w (fffffeca,A4) */
    c->pc = RC_ADDR(0x00002ff4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x136u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2FF8:
    /* 00002ff8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002ff8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2FFC:
    /* 00002ffc   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00002ffcu);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00003000u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_3000:
    /* 00003000   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003000u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3002:
    /* 00003002   2  bra 0000303e */
    c->pc = RC_ADDR(0x00003002u);
    rc_step(c, m, 10);
    goto L_303E;

L_3004:
    /* 00003004   4  jsr (00008c5c) */
    c->pc = RC_ADDR(0x00003004u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003008u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008c5cu);
    return;

L_3008:
    /* 00003008   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x00003008u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0000300cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_300C:
    /* 0000300c   4  tst.w (ffff8430,A4) */
    c->pc = RC_ADDR(0x0000300cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bd0u));
    rc_set_nzvc(c, t0, RC_W);

L_3010:
    /* 00003010   2  bge 00003016 */
    c->pc = RC_ADDR(0x00003010u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3016;

L_3012:
    /* 00003012   4  clr.w (ffff8430,A4) */
    c->pc = RC_ADDR(0x00003012u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7bd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3016:
    /* 00003016   4  move.w #dc,-(A7) */
    c->pc = RC_ADDR(0x00003016u);
    rc_step(c, m, 12);
    t0 = 0x000000dcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_301A:
    /* 0000301a   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000301au);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0000301eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_301E:
    /* 0000301e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000301eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3020:
    /* 00003020   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003020u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3024:
    /* 00003024   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00003024u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00003028u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_3028:
    /* 00003028   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003028u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_302A:
    /* 0000302a   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000302au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_302E:
    /* 0000302e   2  bne 0000303e */
    c->pc = RC_ADDR(0x0000302eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_303E;

L_3030:
    /* 00003030   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003030u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3032:
    /* 00003032   4  jsr (00002c92) */
    c->pc = RC_ADDR(0x00003032u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003036u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_3036:
    /* 00003036   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003036u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3038:
    /* 00003038   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003038u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_303A:
    /* 0000303a   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x0000303au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_303E:
    /* 0000303e   6  cmpi.w #f,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x0000303eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_3044:
    /* 00003044   2  bne 0000305a */
    c->pc = RC_ADDR(0x00003044u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_305A;

L_3046:
    /* 00003046   6  cmpi.w #3,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00003046u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_304C:
    /* 0000304c   2  bne 0000305a */
    c->pc = RC_ADDR(0x0000304cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_305A;

L_304E:
    /* 0000304e   6  move.w #1,(ffff83d6,A4) */
    c->pc = RC_ADDR(0x0000304eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3054:
    /* 00003054   6  move.w #1,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003054u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_305A:
    /* 0000305a   4  tst.w (fffffeca,A4) */
    c->pc = RC_ADDR(0x0000305au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x136u));
    rc_set_nzvc(c, t0, RC_W);

L_305E:
    /* 0000305e   4  bne 00003186 */
    c->pc = RC_ADDR(0x0000305eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3186;

L_3062:
    /* 00003062   6  cmpi.w #f,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003062u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_3068:
    /* 00003068   4  beq 00003186 */
    c->pc = RC_ADDR(0x00003068u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3186;

L_306C:
    /* 0000306c   4  clr.w (ffff8532,A4) */
    c->pc = RC_ADDR(0x0000306cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7aceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3070:
    /* 00003070   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00003070u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3074:
    /* 00003074   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x00003074u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x00003078u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b96u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000107a6u);
    return;

L_3078:
    /* 00003078   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003078u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_307A:
    /* 0000307a   6  cmpi.w #21,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x0000307au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000021u);

L_3080:
    /* 00003080   2  bls 00003092 */
    c->pc = RC_ADDR(0x00003080u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_3092;

L_3082:
    /* 00003082   6  cmpi.w #26,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003082u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_3088:
    /* 00003088   2  bcc 00003092 */
    c->pc = RC_ADDR(0x00003088u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_3092;

L_308A:
    /* 0000308a   6  move.w #1,(ffff8518,A4) */
    c->pc = RC_ADDR(0x0000308au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ae8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3090:
    /* 00003090   2  bra 00003096 */
    c->pc = RC_ADDR(0x00003090u);
    rc_step(c, m, 10);
    goto L_3096;

L_3092:
    /* 00003092   4  clr.w (ffff8518,A4) */
    c->pc = RC_ADDR(0x00003092u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7ae8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3096:
    /* 00003096   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00003096u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_309A:
    /* 0000309a   4  beq 0000315a */
    c->pc = RC_ADDR(0x0000309au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_315A;

L_309E:
    /* 0000309e   6  cmpi.w #b,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x0000309eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_30A4:
    /* 000030a4   2  beq 000030ae */
    c->pc = RC_ADDR(0x000030a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_30AE;

L_30A6:
    /* 000030a6   6  cmpi.w #2,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000030a6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_30AC:
    /* 000030ac   2  bcc 000030b8 */
    c->pc = RC_ADDR(0x000030acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_30B8;

L_30AE:
    /* 000030ae   4  move.w #36,-(A7) */
    c->pc = RC_ADDR(0x000030aeu);
    rc_step(c, m, 12);
    t0 = 0x00000036u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30B2:
    /* 000030b2   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000030b2u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000030b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_30B6:
    /* 000030b6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000030b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_30B8:
    /* 000030b8   6  cmpi.w #19,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000030b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_30BE:
    /* 000030be   2  bne 000030c6 */
    c->pc = RC_ADDR(0x000030beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_30C6;

L_30C0:
    /* 000030c0   6  move.w #1,(ffff851a,A4) */
    c->pc = RC_ADDR(0x000030c0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ae6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_30C6:
    /* 000030c6   6  cmpi.w #5,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000030c6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_30CC:
    /* 000030cc   2  bne 000030e0 */
    c->pc = RC_ADDR(0x000030ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_30E0;

L_30CE:
    /* 000030ce   6  cmpi.w #6,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x000030ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_30D4:
    /* 000030d4   2  bne 000030e0 */
    c->pc = RC_ADDR(0x000030d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_30E0;

L_30D6:
    /* 000030d6   4  move.w #24,-(A7) */
    c->pc = RC_ADDR(0x000030d6u);
    rc_step(c, m, 12);
    t0 = 0x00000024u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30DA:
    /* 000030da   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000030dau);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000030deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_30DE:
    /* 000030de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000030deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_30E0:
    /* 000030e0   6  cmpi.w #11,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000030e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_30E6:
    /* 000030e6   2  bne 000030fa */
    c->pc = RC_ADDR(0x000030e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_30FA;

L_30E8:
    /* 000030e8   6  cmpi.w #6,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x000030e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_30EE:
    /* 000030ee   2  bne 000030fa */
    c->pc = RC_ADDR(0x000030eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_30FA;

L_30F0:
    /* 000030f0   4  move.w #25,-(A7) */
    c->pc = RC_ADDR(0x000030f0u);
    rc_step(c, m, 12);
    t0 = 0x00000025u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30F4:
    /* 000030f4   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x000030f4u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000030f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_30F8:
    /* 000030f8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000030f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_30FA:
    /* 000030fa   6  cmpi.w #11,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000030fau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_3100:
    /* 00003100   2  bne 00003114 */
    c->pc = RC_ADDR(0x00003100u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3114;

L_3102:
    /* 00003102   6  cmpi.w #4,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00003102u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_3108:
    /* 00003108   2  bne 00003114 */
    c->pc = RC_ADDR(0x00003108u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3114;

L_310A:
    /* 0000310a   4  move.w #26,-(A7) */
    c->pc = RC_ADDR(0x0000310au);
    rc_step(c, m, 12);
    t0 = 0x00000026u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_310E:
    /* 0000310e   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000310eu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00003112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_3112:
    /* 00003112   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003112u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3114:
    /* 00003114   6  cmpi.w #15,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003114u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000015u);

L_311A:
    /* 0000311a   2  bne 00003138 */
    c->pc = RC_ADDR(0x0000311au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3138;

L_311C:
    /* 0000311c   6  cmpi.w #5,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x0000311cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_3122:
    /* 00003122   2  bne 00003138 */
    c->pc = RC_ADDR(0x00003122u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3138;

L_3124:
    /* 00003124   4  move.w #37,-(A7) */
    c->pc = RC_ADDR(0x00003124u);
    rc_step(c, m, 12);
    t0 = 0x00000037u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3128:
    /* 00003128   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00003128u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0000312cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_312C:
    /* 0000312c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000312cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_312E:
    /* 0000312e   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000312eu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3132:
    /* 00003132   4  jsr (00007108) */
    c->pc = RC_ADDR(0x00003132u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003136u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007108u);
    return;

L_3136:
    /* 00003136   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003136u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3138:
    /* 00003138   6  cmpi.w #2,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003138u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_313E:
    /* 0000313e   2  bcs 00003148 */
    c->pc = RC_ADDR(0x0000313eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_3148;

L_3140:
    /* 00003140   6  cmpi.w #b,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003140u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_3146:
    /* 00003146   2  bne 00003150 */
    c->pc = RC_ADDR(0x00003146u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3150;

L_3148:
    /* 00003148   6  move.w #1,(ffff8532,A4) */
    c->pc = RC_ADDR(0x00003148u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7aceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_314E:
    /* 0000314e   2  bra 00003158 */
    c->pc = RC_ADDR(0x0000314eu);
    rc_step(c, m, 10);
    goto L_3158;

L_3150:
    /* 00003150   4  clr.w (ffff8b54,A4) */
    c->pc = RC_ADDR(0x00003150u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3154:
    /* 00003154   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00003154u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3158:
    /* 00003158   2  bra 00003186 */
    c->pc = RC_ADDR(0x00003158u);
    rc_step(c, m, 10);
    goto L_3186;

L_315A:
    /* 0000315a   6  cmpi.w #15,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x0000315au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000015u);

L_3160:
    /* 00003160   2  bne 0000317e */
    c->pc = RC_ADDR(0x00003160u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_317E;

L_3162:
    /* 00003162   6  cmpi.w #5,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00003162u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_3168:
    /* 00003168   2  bne 0000317e */
    c->pc = RC_ADDR(0x00003168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_317E;

L_316A:
    /* 0000316a   4  move.w #39,-(A7) */
    c->pc = RC_ADDR(0x0000316au);
    rc_step(c, m, 12);
    t0 = 0x00000039u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_316E:
    /* 0000316e   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000316eu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00003172u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_3172:
    /* 00003172   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003172u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3174:
    /* 00003174   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x00003174u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3178:
    /* 00003178   4  jsr (00007108) */
    c->pc = RC_ADDR(0x00003178u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000317cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007108u);
    return;

L_317C:
    /* 0000317c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000317cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_317E:
    /* 0000317e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000317eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3180:
    /* 00003180   4  jsr (00002c92) */
    c->pc = RC_ADDR(0x00003180u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003184u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_3184:
    /* 00003184   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003184u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3186:
    /* 00003186   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003186u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3188:
    /* 00003188   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00003188u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_318C:
    /* 0000318c   6  move.w #1,(fffff00a,A4) */
    c->pc = RC_ADDR(0x0000318cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xff6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3192:
    /* 00003192   4  move.w (ffffcf86,A4),D0 */
    c->pc = RC_ADDR(0x00003192u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3196:
    /* 00003196   4  mulu.w #5a0,D0 */
    c->pc = RC_ADDR(0x00003196u);
    rc_step(c, m, 42);
    t0 = 0x000005a0u;
    rc_mulu(c, 0, t0);

L_319A:
    /* 0000319a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000319au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_319C:
    /* 0000319c   4  jsr (ffff807a,A4) */
    c->pc = RC_ADDR(0x0000319cu);
    rc_step(c, m, 18);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x000031a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000579cu);
    return;

L_31A0:
    /* 000031a0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000031a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_31A2:
    /* 000031a2   4  move.w (ffffcf86,A4),D0 */
    c->pc = RC_ADDR(0x000031a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_31A6:
    /* 000031a6   4  mulu.w #18,D0 */
    c->pc = RC_ADDR(0x000031a6u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_mulu(c, 0, t0);

L_31AA:
    /* 000031aa   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000031aau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_31AC:
    /* 000031ac   4  jsr (0000903a) */
    c->pc = RC_ADDR(0x000031acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000031b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000903au);
    return;

L_31B0:
    /* 000031b0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000031b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_31B2:
    /* 000031b2   6  move.w #8,(ffff83cc,A4) */
    c->pc = RC_ADDR(0x000031b2u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x7c34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_31B8:
    /* 000031b8   4  clr.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x000031b8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_31BC:
    /* 000031bc   4  tst.w (ffff8430,A4) */
    c->pc = RC_ADDR(0x000031bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bd0u));
    rc_set_nzvc(c, t0, RC_W);

L_31C0:
    /* 000031c0   2  bne 000031c8 */
    c->pc = RC_ADDR(0x000031c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_31C8;

L_31C2:
    /* 000031c2   6  move.w (ffff83c8,A4),(ffff8430,A4) */
    c->pc = RC_ADDR(0x000031c2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_wr16(c, m, (c->a[4] - 0x7bd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_31C8:
    /* 000031c8   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x000031c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_31CC:
    /* 000031cc   2  bne 000031d4 */
    c->pc = RC_ADDR(0x000031ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_31D4;

L_31CE:
    /* 000031ce   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000031ceu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_31D0:
    /* 000031d0   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x000031d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_31D4:
    /* 000031d4   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000031d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_31D8:
    /* 000031d8   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x000031d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_31FC:
    /* 000031fc   6  cmp.l #10,D0 */
    c->pc = RC_ADDR(0x000031fcu);
    rc_step(c, m, 14);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3202:
    /* 00003202   2  bcc 000031c8 */
    c->pc = RC_ADDR(0x00003202u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_31C8; }

L_3204:
    /* 00003204   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00003204u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_3206:
    /* 00003206   4  move.w (000031dc),D0 */
    c->pc = RC_ADDR(0x00003206u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x000031dcu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_320A:
    /* 0000320a   4  jmp (0000320c) */
    c->pc = RC_ADDR(0x0000320au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000320cu) + t4);
    c->pc = t3;
    return;

L_320E:
    /* 0000320e   4  tst.w (ffffce2c,A4) */
    c->pc = RC_ADDR(0x0000320eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d4u));
    rc_set_nzvc(c, t0, RC_W);

L_3212:
    /* 00003212   2  beq 0000321a */
    c->pc = RC_ADDR(0x00003212u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_321A;

L_3214:
    /* 00003214   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003214u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3216:
    /* 00003216   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00003216u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

L_321A:
    /* 0000321a   4  tst.w (e,A5) */
    c->pc = RC_ADDR(0x0000321au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_321E:
    /* 0000321e   2  beq 00003232 */
    c->pc = RC_ADDR(0x0000321eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3232;

L_3220:
    /* 00003220   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003220u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3224:
    /* 00003224   4  move.l (ffffcf7c,A4),-(A7) */
    c->pc = RC_ADDR(0x00003224u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3084u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3228:
    /* 00003228   4  jsr (0000247a) */
    c->pc = RC_ADDR(0x00003228u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000322cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000247au);
    return;

L_322C:
    /* 0000322c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000322cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_322E:
    /* 0000322e   4  move.w D0,(c,A5) */
    c->pc = RC_ADDR(0x0000322eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3232:
    /* 00003232   6  move.w (e,A5),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003232u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3238:
    /* 00003238   4  bra 00002cd2 */
    c->pc = RC_ADDR(0x00003238u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CD2;

L_323C:
    /* 0000323c   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0000323cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3240:
    /* 00003240   4  bra 00002cf4 */
    c->pc = RC_ADDR(0x00003240u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CF4;

}
