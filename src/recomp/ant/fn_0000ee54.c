/* fn_0000ee54 - 1332 byte(s), 396 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ee54(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ee54u): goto L_EE54;
    case RC_ADDR(0x0000ee58u): goto L_EE58;
    case RC_ADDR(0x0000ee5eu): goto L_EE5E;
    case RC_ADDR(0x0000ee62u): goto L_EE62;
    case RC_ADDR(0x0000ee66u): goto L_EE66;
    case RC_ADDR(0x0000ee68u): goto L_EE68;
    case RC_ADDR(0x0000ee6cu): goto L_EE6C;
    case RC_ADDR(0x0000ee6eu): goto L_EE6E;
    case RC_ADDR(0x0000ee72u): goto L_EE72;
    case RC_ADDR(0x0000ee74u): goto L_EE74;
    case RC_ADDR(0x0000ee76u): goto L_EE76;
    case RC_ADDR(0x0000ee7au): goto L_EE7A;
    case RC_ADDR(0x0000ee7eu): goto L_EE7E;
    case RC_ADDR(0x0000ee80u): goto L_EE80;
    case RC_ADDR(0x0000ee84u): goto L_EE84;
    case RC_ADDR(0x0000ee88u): goto L_EE88;
    case RC_ADDR(0x0000ee8cu): goto L_EE8C;
    case RC_ADDR(0x0000ee8eu): goto L_EE8E;
    case RC_ADDR(0x0000ee92u): goto L_EE92;
    case RC_ADDR(0x0000ee94u): goto L_EE94;
    case RC_ADDR(0x0000ee98u): goto L_EE98;
    case RC_ADDR(0x0000ee9au): goto L_EE9A;
    case RC_ADDR(0x0000ee9eu): goto L_EE9E;
    case RC_ADDR(0x0000eea0u): goto L_EEA0;
    case RC_ADDR(0x0000eea4u): goto L_EEA4;
    case RC_ADDR(0x0000eea8u): goto L_EEA8;
    case RC_ADDR(0x0000eeaau): goto L_EEAA;
    case RC_ADDR(0x0000eeaeu): goto L_EEAE;
    case RC_ADDR(0x0000eeb0u): goto L_EEB0;
    case RC_ADDR(0x0000eeb4u): goto L_EEB4;
    case RC_ADDR(0x0000eeb6u): goto L_EEB6;
    case RC_ADDR(0x0000eebau): goto L_EEBA;
    case RC_ADDR(0x0000eebcu): goto L_EEBC;
    case RC_ADDR(0x0000eec0u): goto L_EEC0;
    case RC_ADDR(0x0000eec2u): goto L_EEC2;
    case RC_ADDR(0x0000eec4u): goto L_EEC4;
    case RC_ADDR(0x0000eec6u): goto L_EEC6;
    case RC_ADDR(0x0000eec8u): goto L_EEC8;
    case RC_ADDR(0x0000eecau): goto L_EECA;
    case RC_ADDR(0x0000eeccu): goto L_EECC;
    case RC_ADDR(0x0000eed0u): goto L_EED0;
    case RC_ADDR(0x0000eed8u): goto L_EED8;
    case RC_ADDR(0x0000eedau): goto L_EEDA;
    case RC_ADDR(0x0000eedeu): goto L_EEDE;
    case RC_ADDR(0x0000eee2u): goto L_EEE2;
    case RC_ADDR(0x0000eee4u): goto L_EEE4;
    case RC_ADDR(0x0000eee8u): goto L_EEE8;
    case RC_ADDR(0x0000eeecu): goto L_EEEC;
    case RC_ADDR(0x0000eef0u): goto L_EEF0;
    case RC_ADDR(0x0000eef4u): goto L_EEF4;
    case RC_ADDR(0x0000eef6u): goto L_EEF6;
    case RC_ADDR(0x0000eefau): goto L_EEFA;
    case RC_ADDR(0x0000eefeu): goto L_EEFE;
    case RC_ADDR(0x0000ef02u): goto L_EF02;
    case RC_ADDR(0x0000ef06u): goto L_EF06;
    case RC_ADDR(0x0000ef0au): goto L_EF0A;
    case RC_ADDR(0x0000ef0cu): goto L_EF0C;
    case RC_ADDR(0x0000ef10u): goto L_EF10;
    case RC_ADDR(0x0000ef14u): goto L_EF14;
    case RC_ADDR(0x0000ef18u): goto L_EF18;
    case RC_ADDR(0x0000ef1cu): goto L_EF1C;
    case RC_ADDR(0x0000ef20u): goto L_EF20;
    case RC_ADDR(0x0000ef22u): goto L_EF22;
    case RC_ADDR(0x0000ef26u): goto L_EF26;
    case RC_ADDR(0x0000ef28u): goto L_EF28;
    case RC_ADDR(0x0000ef2cu): goto L_EF2C;
    case RC_ADDR(0x0000ef2eu): goto L_EF2E;
    case RC_ADDR(0x0000ef32u): goto L_EF32;
    case RC_ADDR(0x0000ef36u): goto L_EF36;
    case RC_ADDR(0x0000ef38u): goto L_EF38;
    case RC_ADDR(0x0000ef3au): goto L_EF3A;
    case RC_ADDR(0x0000ef3eu): goto L_EF3E;
    case RC_ADDR(0x0000ef42u): goto L_EF42;
    case RC_ADDR(0x0000ef46u): goto L_EF46;
    case RC_ADDR(0x0000ef4au): goto L_EF4A;
    case RC_ADDR(0x0000ef4eu): goto L_EF4E;
    case RC_ADDR(0x0000ef50u): goto L_EF50;
    case RC_ADDR(0x0000ef52u): goto L_EF52;
    case RC_ADDR(0x0000ef56u): goto L_EF56;
    case RC_ADDR(0x0000ef58u): goto L_EF58;
    case RC_ADDR(0x0000ef5cu): goto L_EF5C;
    case RC_ADDR(0x0000ef60u): goto L_EF60;
    case RC_ADDR(0x0000ef62u): goto L_EF62;
    case RC_ADDR(0x0000ef64u): goto L_EF64;
    case RC_ADDR(0x0000ef68u): goto L_EF68;
    case RC_ADDR(0x0000ef6cu): goto L_EF6C;
    case RC_ADDR(0x0000ef70u): goto L_EF70;
    case RC_ADDR(0x0000ef74u): goto L_EF74;
    case RC_ADDR(0x0000ef78u): goto L_EF78;
    case RC_ADDR(0x0000ef7au): goto L_EF7A;
    case RC_ADDR(0x0000ef7eu): goto L_EF7E;
    case RC_ADDR(0x0000ef86u): goto L_EF86;
    case RC_ADDR(0x0000ef8au): goto L_EF8A;
    case RC_ADDR(0x0000ef8eu): goto L_EF8E;
    case RC_ADDR(0x0000ef92u): goto L_EF92;
    case RC_ADDR(0x0000ef94u): goto L_EF94;
    case RC_ADDR(0x0000ef96u): goto L_EF96;
    case RC_ADDR(0x0000ef9au): goto L_EF9A;
    case RC_ADDR(0x0000ef9cu): goto L_EF9C;
    case RC_ADDR(0x0000ef9eu): goto L_EF9E;
    case RC_ADDR(0x0000efa2u): goto L_EFA2;
    case RC_ADDR(0x0000efa6u): goto L_EFA6;
    case RC_ADDR(0x0000efaau): goto L_EFAA;
    case RC_ADDR(0x0000efacu): goto L_EFAC;
    case RC_ADDR(0x0000efb0u): goto L_EFB0;
    case RC_ADDR(0x0000efb2u): goto L_EFB2;
    case RC_ADDR(0x0000efb6u): goto L_EFB6;
    case RC_ADDR(0x0000efb8u): goto L_EFB8;
    case RC_ADDR(0x0000efbcu): goto L_EFBC;
    case RC_ADDR(0x0000efbeu): goto L_EFBE;
    case RC_ADDR(0x0000efc2u): goto L_EFC2;
    case RC_ADDR(0x0000efc4u): goto L_EFC4;
    case RC_ADDR(0x0000efc6u): goto L_EFC6;
    case RC_ADDR(0x0000efc8u): goto L_EFC8;
    case RC_ADDR(0x0000efcau): goto L_EFCA;
    case RC_ADDR(0x0000efccu): goto L_EFCC;
    case RC_ADDR(0x0000efceu): goto L_EFCE;
    case RC_ADDR(0x0000efd0u): goto L_EFD0;
    case RC_ADDR(0x0000efd2u): goto L_EFD2;
    case RC_ADDR(0x0000efd6u): goto L_EFD6;
    case RC_ADDR(0x0000efdau): goto L_EFDA;
    case RC_ADDR(0x0000efdeu): goto L_EFDE;
    case RC_ADDR(0x0000efe0u): goto L_EFE0;
    case RC_ADDR(0x0000efe4u): goto L_EFE4;
    case RC_ADDR(0x0000efe6u): goto L_EFE6;
    case RC_ADDR(0x0000efeau): goto L_EFEA;
    case RC_ADDR(0x0000efecu): goto L_EFEC;
    case RC_ADDR(0x0000eff0u): goto L_EFF0;
    case RC_ADDR(0x0000eff4u): goto L_EFF4;
    case RC_ADDR(0x0000eff8u): goto L_EFF8;
    case RC_ADDR(0x0000effau): goto L_EFFA;
    case RC_ADDR(0x0000effeu): goto L_EFFE;
    case RC_ADDR(0x0000f002u): goto L_F002;
    case RC_ADDR(0x0000f006u): goto L_F006;
    case RC_ADDR(0x0000f008u): goto L_F008;
    case RC_ADDR(0x0000f00au): goto L_F00A;
    case RC_ADDR(0x0000f00eu): goto L_F00E;
    case RC_ADDR(0x0000f014u): goto L_F014;
    case RC_ADDR(0x0000f018u): goto L_F018;
    case RC_ADDR(0x0000f01cu): goto L_F01C;
    case RC_ADDR(0x0000f01eu): goto L_F01E;
    case RC_ADDR(0x0000f022u): goto L_F022;
    case RC_ADDR(0x0000f026u): goto L_F026;
    case RC_ADDR(0x0000f028u): goto L_F028;
    case RC_ADDR(0x0000f02au): goto L_F02A;
    case RC_ADDR(0x0000f02eu): goto L_F02E;
    case RC_ADDR(0x0000f032u): goto L_F032;
    case RC_ADDR(0x0000f036u): goto L_F036;
    case RC_ADDR(0x0000f038u): goto L_F038;
    case RC_ADDR(0x0000f03cu): goto L_F03C;
    case RC_ADDR(0x0000f040u): goto L_F040;
    case RC_ADDR(0x0000f042u): goto L_F042;
    case RC_ADDR(0x0000f044u): goto L_F044;
    case RC_ADDR(0x0000f048u): goto L_F048;
    case RC_ADDR(0x0000f04cu): goto L_F04C;
    case RC_ADDR(0x0000f04eu): goto L_F04E;
    case RC_ADDR(0x0000f052u): goto L_F052;
    case RC_ADDR(0x0000f058u): goto L_F058;
    case RC_ADDR(0x0000f05cu): goto L_F05C;
    case RC_ADDR(0x0000f05eu): goto L_F05E;
    case RC_ADDR(0x0000f062u): goto L_F062;
    case RC_ADDR(0x0000f066u): goto L_F066;
    case RC_ADDR(0x0000f068u): goto L_F068;
    case RC_ADDR(0x0000f06au): goto L_F06A;
    case RC_ADDR(0x0000f06eu): goto L_F06E;
    case RC_ADDR(0x0000f072u): goto L_F072;
    case RC_ADDR(0x0000f076u): goto L_F076;
    case RC_ADDR(0x0000f078u): goto L_F078;
    case RC_ADDR(0x0000f07cu): goto L_F07C;
    case RC_ADDR(0x0000f080u): goto L_F080;
    case RC_ADDR(0x0000f082u): goto L_F082;
    case RC_ADDR(0x0000f084u): goto L_F084;
    case RC_ADDR(0x0000f088u): goto L_F088;
    case RC_ADDR(0x0000f08cu): goto L_F08C;
    case RC_ADDR(0x0000f08eu): goto L_F08E;
    case RC_ADDR(0x0000f092u): goto L_F092;
    case RC_ADDR(0x0000f098u): goto L_F098;
    case RC_ADDR(0x0000f09au): goto L_F09A;
    case RC_ADDR(0x0000f09eu): goto L_F09E;
    case RC_ADDR(0x0000f0a0u): goto L_F0A0;
    case RC_ADDR(0x0000f0a4u): goto L_F0A4;
    case RC_ADDR(0x0000f0a8u): goto L_F0A8;
    case RC_ADDR(0x0000f0aau): goto L_F0AA;
    case RC_ADDR(0x0000f0acu): goto L_F0AC;
    case RC_ADDR(0x0000f0b0u): goto L_F0B0;
    case RC_ADDR(0x0000f0b4u): goto L_F0B4;
    case RC_ADDR(0x0000f0b6u): goto L_F0B6;
    case RC_ADDR(0x0000f0bau): goto L_F0BA;
    case RC_ADDR(0x0000f0c0u): goto L_F0C0;
    case RC_ADDR(0x0000f0c2u): goto L_F0C2;
    case RC_ADDR(0x0000f0d4u): goto L_F0D4;
    case RC_ADDR(0x0000f0dau): goto L_F0DA;
    case RC_ADDR(0x0000f0dcu): goto L_F0DC;
    case RC_ADDR(0x0000f0deu): goto L_F0DE;
    case RC_ADDR(0x0000f0e2u): goto L_F0E2;
    case RC_ADDR(0x0000f0e6u): goto L_F0E6;
    case RC_ADDR(0x0000f0eau): goto L_F0EA;
    case RC_ADDR(0x0000f0ecu): goto L_F0EC;
    case RC_ADDR(0x0000f0f0u): goto L_F0F0;
    case RC_ADDR(0x0000f0f2u): goto L_F0F2;
    case RC_ADDR(0x0000f0f6u): goto L_F0F6;
    case RC_ADDR(0x0000f0fau): goto L_F0FA;
    case RC_ADDR(0x0000f0fcu): goto L_F0FC;
    case RC_ADDR(0x0000f100u): goto L_F100;
    case RC_ADDR(0x0000f102u): goto L_F102;
    case RC_ADDR(0x0000f106u): goto L_F106;
    case RC_ADDR(0x0000f108u): goto L_F108;
    case RC_ADDR(0x0000f10cu): goto L_F10C;
    case RC_ADDR(0x0000f110u): goto L_F110;
    case RC_ADDR(0x0000f114u): goto L_F114;
    case RC_ADDR(0x0000f116u): goto L_F116;
    case RC_ADDR(0x0000f11au): goto L_F11A;
    case RC_ADDR(0x0000f11eu): goto L_F11E;
    case RC_ADDR(0x0000f122u): goto L_F122;
    case RC_ADDR(0x0000f124u): goto L_F124;
    case RC_ADDR(0x0000f128u): goto L_F128;
    case RC_ADDR(0x0000f12au): goto L_F12A;
    case RC_ADDR(0x0000f12eu): goto L_F12E;
    case RC_ADDR(0x0000f132u): goto L_F132;
    case RC_ADDR(0x0000f136u): goto L_F136;
    case RC_ADDR(0x0000f138u): goto L_F138;
    case RC_ADDR(0x0000f13cu): goto L_F13C;
    case RC_ADDR(0x0000f13eu): goto L_F13E;
    case RC_ADDR(0x0000f142u): goto L_F142;
    case RC_ADDR(0x0000f146u): goto L_F146;
    case RC_ADDR(0x0000f14au): goto L_F14A;
    case RC_ADDR(0x0000f14eu): goto L_F14E;
    case RC_ADDR(0x0000f150u): goto L_F150;
    case RC_ADDR(0x0000f152u): goto L_F152;
    case RC_ADDR(0x0000f156u): goto L_F156;
    case RC_ADDR(0x0000f15au): goto L_F15A;
    case RC_ADDR(0x0000f15eu): goto L_F15E;
    case RC_ADDR(0x0000f162u): goto L_F162;
    case RC_ADDR(0x0000f164u): goto L_F164;
    case RC_ADDR(0x0000f168u): goto L_F168;
    case RC_ADDR(0x0000f170u): goto L_F170;
    case RC_ADDR(0x0000f174u): goto L_F174;
    case RC_ADDR(0x0000f178u): goto L_F178;
    case RC_ADDR(0x0000f17au): goto L_F17A;
    case RC_ADDR(0x0000f17eu): goto L_F17E;
    case RC_ADDR(0x0000f180u): goto L_F180;
    case RC_ADDR(0x0000f184u): goto L_F184;
    case RC_ADDR(0x0000f186u): goto L_F186;
    case RC_ADDR(0x0000f188u): goto L_F188;
    case RC_ADDR(0x0000f18cu): goto L_F18C;
    case RC_ADDR(0x0000f190u): goto L_F190;
    case RC_ADDR(0x0000f194u): goto L_F194;
    case RC_ADDR(0x0000f196u): goto L_F196;
    case RC_ADDR(0x0000f198u): goto L_F198;
    case RC_ADDR(0x0000f19cu): goto L_F19C;
    case RC_ADDR(0x0000f1a0u): goto L_F1A0;
    case RC_ADDR(0x0000f1a4u): goto L_F1A4;
    case RC_ADDR(0x0000f1a8u): goto L_F1A8;
    case RC_ADDR(0x0000f1aau): goto L_F1AA;
    case RC_ADDR(0x0000f1aeu): goto L_F1AE;
    case RC_ADDR(0x0000f1b0u): goto L_F1B0;
    case RC_ADDR(0x0000f1b2u): goto L_F1B2;
    case RC_ADDR(0x0000f1b6u): goto L_F1B6;
    case RC_ADDR(0x0000f1bau): goto L_F1BA;
    case RC_ADDR(0x0000f1beu): goto L_F1BE;
    case RC_ADDR(0x0000f1c2u): goto L_F1C2;
    case RC_ADDR(0x0000f1c4u): goto L_F1C4;
    case RC_ADDR(0x0000f1c8u): goto L_F1C8;
    case RC_ADDR(0x0000f1cau): goto L_F1CA;
    case RC_ADDR(0x0000f1ceu): goto L_F1CE;
    case RC_ADDR(0x0000f1d2u): goto L_F1D2;
    case RC_ADDR(0x0000f1d6u): goto L_F1D6;
    case RC_ADDR(0x0000f1d8u): goto L_F1D8;
    case RC_ADDR(0x0000f1dcu): goto L_F1DC;
    case RC_ADDR(0x0000f1deu): goto L_F1DE;
    case RC_ADDR(0x0000f1e2u): goto L_F1E2;
    case RC_ADDR(0x0000f1e4u): goto L_F1E4;
    case RC_ADDR(0x0000f1e8u): goto L_F1E8;
    case RC_ADDR(0x0000f1ecu): goto L_F1EC;
    case RC_ADDR(0x0000f1eeu): goto L_F1EE;
    case RC_ADDR(0x0000f1f2u): goto L_F1F2;
    case RC_ADDR(0x0000f1f6u): goto L_F1F6;
    case RC_ADDR(0x0000f1fau): goto L_F1FA;
    case RC_ADDR(0x0000f1feu): goto L_F1FE;
    case RC_ADDR(0x0000f200u): goto L_F200;
    case RC_ADDR(0x0000f202u): goto L_F202;
    case RC_ADDR(0x0000f206u): goto L_F206;
    case RC_ADDR(0x0000f20cu): goto L_F20C;
    case RC_ADDR(0x0000f210u): goto L_F210;
    case RC_ADDR(0x0000f212u): goto L_F212;
    case RC_ADDR(0x0000f216u): goto L_F216;
    case RC_ADDR(0x0000f21cu): goto L_F21C;
    case RC_ADDR(0x0000f220u): goto L_F220;
    case RC_ADDR(0x0000f222u): goto L_F222;
    case RC_ADDR(0x0000f226u): goto L_F226;
    case RC_ADDR(0x0000f22cu): goto L_F22C;
    case RC_ADDR(0x0000f22eu): goto L_F22E;
    case RC_ADDR(0x0000f232u): goto L_F232;
    case RC_ADDR(0x0000f234u): goto L_F234;
    case RC_ADDR(0x0000f238u): goto L_F238;
    case RC_ADDR(0x0000f23cu): goto L_F23C;
    case RC_ADDR(0x0000f240u): goto L_F240;
    case RC_ADDR(0x0000f242u): goto L_F242;
    case RC_ADDR(0x0000f244u): goto L_F244;
    case RC_ADDR(0x0000f248u): goto L_F248;
    case RC_ADDR(0x0000f24eu): goto L_F24E;
    case RC_ADDR(0x0000f252u): goto L_F252;
    case RC_ADDR(0x0000f254u): goto L_F254;
    case RC_ADDR(0x0000f258u): goto L_F258;
    case RC_ADDR(0x0000f25eu): goto L_F25E;
    case RC_ADDR(0x0000f262u): goto L_F262;
    case RC_ADDR(0x0000f264u): goto L_F264;
    case RC_ADDR(0x0000f268u): goto L_F268;
    case RC_ADDR(0x0000f26eu): goto L_F26E;
    case RC_ADDR(0x0000f270u): goto L_F270;
    case RC_ADDR(0x0000f272u): goto L_F272;
    case RC_ADDR(0x0000f276u): goto L_F276;
    case RC_ADDR(0x0000f278u): goto L_F278;
    case RC_ADDR(0x0000f27au): goto L_F27A;
    case RC_ADDR(0x0000f27cu): goto L_F27C;
    case RC_ADDR(0x0000f27eu): goto L_F27E;
    case RC_ADDR(0x0000f282u): goto L_F282;
    case RC_ADDR(0x0000f284u): goto L_F284;
    case RC_ADDR(0x0000f288u): goto L_F288;
    case RC_ADDR(0x0000f28au): goto L_F28A;
    case RC_ADDR(0x0000f28eu): goto L_F28E;
    case RC_ADDR(0x0000f290u): goto L_F290;
    case RC_ADDR(0x0000f294u): goto L_F294;
    case RC_ADDR(0x0000f296u): goto L_F296;
    case RC_ADDR(0x0000f29au): goto L_F29A;
    case RC_ADDR(0x0000f29eu): goto L_F29E;
    case RC_ADDR(0x0000f2a2u): goto L_F2A2;
    case RC_ADDR(0x0000f2a6u): goto L_F2A6;
    case RC_ADDR(0x0000f2a8u): goto L_F2A8;
    case RC_ADDR(0x0000f2acu): goto L_F2AC;
    case RC_ADDR(0x0000f2aeu): goto L_F2AE;
    case RC_ADDR(0x0000f2b2u): goto L_F2B2;
    case RC_ADDR(0x0000f2b6u): goto L_F2B6;
    case RC_ADDR(0x0000f2bau): goto L_F2BA;
    case RC_ADDR(0x0000f2bcu): goto L_F2BC;
    case RC_ADDR(0x0000f2c0u): goto L_F2C0;
    case RC_ADDR(0x0000f2c2u): goto L_F2C2;
    case RC_ADDR(0x0000f2c6u): goto L_F2C6;
    case RC_ADDR(0x0000f2cau): goto L_F2CA;
    case RC_ADDR(0x0000f2ceu): goto L_F2CE;
    case RC_ADDR(0x0000f2d2u): goto L_F2D2;
    case RC_ADDR(0x0000f2d4u): goto L_F2D4;
    case RC_ADDR(0x0000f2d6u): goto L_F2D6;
    case RC_ADDR(0x0000f2dau): goto L_F2DA;
    case RC_ADDR(0x0000f2deu): goto L_F2DE;
    case RC_ADDR(0x0000f2e2u): goto L_F2E2;
    case RC_ADDR(0x0000f2e6u): goto L_F2E6;
    case RC_ADDR(0x0000f2e8u): goto L_F2E8;
    case RC_ADDR(0x0000f2ecu): goto L_F2EC;
    case RC_ADDR(0x0000f2f4u): goto L_F2F4;
    case RC_ADDR(0x0000f2f8u): goto L_F2F8;
    case RC_ADDR(0x0000f2feu): goto L_F2FE;
    case RC_ADDR(0x0000f302u): goto L_F302;
    case RC_ADDR(0x0000f306u): goto L_F306;
    case RC_ADDR(0x0000f308u): goto L_F308;
    case RC_ADDR(0x0000f30au): goto L_F30A;
    case RC_ADDR(0x0000f30eu): goto L_F30E;
    case RC_ADDR(0x0000f314u): goto L_F314;
    case RC_ADDR(0x0000f318u): goto L_F318;
    case RC_ADDR(0x0000f31au): goto L_F31A;
    case RC_ADDR(0x0000f31cu): goto L_F31C;
    case RC_ADDR(0x0000f320u): goto L_F320;
    case RC_ADDR(0x0000f326u): goto L_F326;
    case RC_ADDR(0x0000f32au): goto L_F32A;
    case RC_ADDR(0x0000f32eu): goto L_F32E;
    case RC_ADDR(0x0000f332u): goto L_F332;
    case RC_ADDR(0x0000f334u): goto L_F334;
    case RC_ADDR(0x0000f338u): goto L_F338;
    case RC_ADDR(0x0000f33cu): goto L_F33C;
    case RC_ADDR(0x0000f33eu): goto L_F33E;
    case RC_ADDR(0x0000f342u): goto L_F342;
    case RC_ADDR(0x0000f344u): goto L_F344;
    case RC_ADDR(0x0000f348u): goto L_F348;
    case RC_ADDR(0x0000f34cu): goto L_F34C;
    case RC_ADDR(0x0000f34eu): goto L_F34E;
    case RC_ADDR(0x0000f350u): goto L_F350;
    case RC_ADDR(0x0000f354u): goto L_F354;
    case RC_ADDR(0x0000f358u): goto L_F358;
    case RC_ADDR(0x0000f35cu): goto L_F35C;
    case RC_ADDR(0x0000f360u): goto L_F360;
    case RC_ADDR(0x0000f364u): goto L_F364;
    case RC_ADDR(0x0000f366u): goto L_F366;
    case RC_ADDR(0x0000f36au): goto L_F36A;
    case RC_ADDR(0x0000f36eu): goto L_F36E;
    case RC_ADDR(0x0000f372u): goto L_F372;
    case RC_ADDR(0x0000f374u): goto L_F374;
    case RC_ADDR(0x0000f378u): goto L_F378;
    case RC_ADDR(0x0000f37au): goto L_F37A;
    case RC_ADDR(0x0000f37eu): goto L_F37E;
    case RC_ADDR(0x0000f382u): goto L_F382;
    case RC_ADDR(0x0000f386u): goto L_F386;
    case RC_ADDR(0x0000f388u): goto L_F388;
    case RC_ADDR(0x0000f38eu): goto L_F38E;
    case RC_ADDR(0x0000f390u): goto L_F390;
    case RC_ADDR(0x0000f394u): goto L_F394;
    case RC_ADDR(0x0000f396u): goto L_F396;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EE54:
    /* 0000ee54   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x0000ee54u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_EE58:
    /* 0000ee58   6  move.l (13a0,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000ee58u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x13a0u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE5E:
    /* 0000ee5e   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ee5eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EE62:
    /* 0000ee62   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ee62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE66:
    /* 0000ee66   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ee66u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EE68:
    /* 0000ee68   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000ee68u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EE6C:
    /* 0000ee6c   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000ee6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE6E:
    /* 0000ee6e   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000ee6eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE72:
    /* 0000ee72   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ee72u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EE74:
    /* 0000ee74   2  bra 0000eec4 */
    c->pc = RC_ADDR(0x0000ee74u);
    rc_step(c, m, 10);
    goto L_EEC4;

L_EE76:
    /* 0000ee76   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ee76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE7A:
    /* 0000ee7a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ee7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE7E:
    /* 0000ee7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ee7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EE80:
    /* 0000ee80   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000ee80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_EE84:
    /* 0000ee84   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000ee84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_EE88:
    /* 0000ee88   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x0000ee88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE8C:
    /* 0000ee8c   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000ee8cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_EE8E:
    /* 0000ee8e   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000ee8eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE92:
    /* 0000ee92   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000ee92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_EE94:
    /* 0000ee94   4  sub.w (e6e,A4),D2 */
    c->pc = RC_ADDR(0x0000ee94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_EE98:
    /* 0000ee98   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000ee98u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE9A:
    /* 0000ee9a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ee9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE9E:
    /* 0000ee9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ee9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EEA0:
    /* 0000eea0   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000eea0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_EEA4:
    /* 0000eea4   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000eea4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_EEA8:
    /* 0000eea8   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000eea8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_EEAA:
    /* 0000eeaa   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x0000eeaau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_EEAE:
    /* 0000eeae   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000eeaeu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_EEB0:
    /* 0000eeb0   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000eeb0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EEB4:
    /* 0000eeb4   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000eeb4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_EEB6:
    /* 0000eeb6   4  sub.w (e6c,A4),D2 */
    c->pc = RC_ADDR(0x0000eeb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_EEBA:
    /* 0000eeba   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000eebau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EEBC:
    /* 0000eebc   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000eebcu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000eec0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_EEC0:
    /* 0000eec0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000eec0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EEC2:
    /* 0000eec2   2  bra 0000eecc */
    c->pc = RC_ADDR(0x0000eec2u);
    rc_step(c, m, 10);
    goto L_EECC;

L_EEC4:
    /* 0000eec4   2  subq.l #6,D0 */
    c->pc = RC_ADDR(0x0000eec4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EEC6:
    /* 0000eec6   2  beq 0000ee76 */
    c->pc = RC_ADDR(0x0000eec6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_EE76; }

L_EEC8:
    /* 0000eec8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000eec8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EECA:
    /* 0000eeca   2  beq 0000ee76 */
    c->pc = RC_ADDR(0x0000eecau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_EE76; }

L_EECC:
    /* 0000eecc   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eeccu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_EED0:
    /* 0000eed0   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eed0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_EED8:
    /* 0000eed8   2  blt 0000ee62 */
    c->pc = RC_ADDR(0x0000eed8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_EE62; }

L_EEDA:
    /* 0000eeda   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eedau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EEDE:
    /* 0000eede   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000eedeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEE2:
    /* 0000eee2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000eee2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EEE4:
    /* 0000eee4   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000eee4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_EEE8:
    /* 0000eee8   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000eee8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_EEEC:
    /* 0000eeec   4  beq 0000ef7a */
    c->pc = RC_ADDR(0x0000eeecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EF7A;

L_EEF0:
    /* 0000eef0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000eef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EEF4:
    /* 0000eef4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000eef4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EEF6:
    /* 0000eef6   4  lea (eee,A4),A0 */
    c->pc = RC_ADDR(0x0000eef6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeeeu);

L_EEFA:
    /* 0000eefa   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000eefau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EEFE:
    /* 0000eefe   4  sub.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0000eefeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_EF02:
    /* 0000ef02   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000ef02u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF06:
    /* 0000ef06   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ef06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF0A:
    /* 0000ef0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ef0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EF0C:
    /* 0000ef0c   4  lea (ef6,A4),A0 */
    c->pc = RC_ADDR(0x0000ef0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xef6u);

L_EF10:
    /* 0000ef10   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ef10u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF14:
    /* 0000ef14   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0000ef14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_EF18:
    /* 0000ef18   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ef18u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF1C:
    /* 0000ef1c   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000ef1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_EF20:
    /* 0000ef20   2  blt 0000ef52 */
    c->pc = RC_ADDR(0x0000ef20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_EF52;

L_EF22:
    /* 0000ef22   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ef22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_EF26:
    /* 0000ef26   2  blt 0000ef52 */
    c->pc = RC_ADDR(0x0000ef26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_EF52;

L_EF28:
    /* 0000ef28   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ef28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF2C:
    /* 0000ef2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ef2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EF2E:
    /* 0000ef2e   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000ef2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_EF32:
    /* 0000ef32   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ef32u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF36:
    /* 0000ef36   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ef36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_EF38:
    /* 0000ef38   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000ef38u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_EF3A:
    /* 0000ef3a   4  lea (129c,A4),A0 */
    c->pc = RC_ADDR(0x0000ef3au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x129cu);

L_EF3E:
    /* 0000ef3e   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x0000ef3eu);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF42:
    /* 0000ef42   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ef42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF46:
    /* 0000ef46   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ef46u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF4A:
    /* 0000ef4a   4  jsr (0000f8a8) */
    c->pc = RC_ADDR(0x0000ef4au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ef4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f8a8u);
    return;

L_EF4E:
    /* 0000ef4e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ef4eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EF50:
    /* 0000ef50   2  bra 0000ef7a */
    c->pc = RC_ADDR(0x0000ef50u);
    rc_step(c, m, 10);
    goto L_EF7A;

L_EF52:
    /* 0000ef52   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ef52u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF56:
    /* 0000ef56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ef56u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EF58:
    /* 0000ef58   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000ef58u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_EF5C:
    /* 0000ef5c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ef5cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF60:
    /* 0000ef60   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ef60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_EF62:
    /* 0000ef62   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000ef62u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_EF64:
    /* 0000ef64   4  lea (129c,A4),A0 */
    c->pc = RC_ADDR(0x0000ef64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x129cu);

L_EF68:
    /* 0000ef68   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x0000ef68u);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF6C:
    /* 0000ef6c   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ef6cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF70:
    /* 0000ef70   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ef70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF74:
    /* 0000ef74   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000ef74u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000ef78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_EF78:
    /* 0000ef78   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ef78u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EF7A:
    /* 0000ef7a   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ef7au);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_EF7E:
    /* 0000ef7e   8  cmpi.l #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ef7eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_EF86:
    /* 0000ef86   4  blt 0000eede */
    c->pc = RC_ADDR(0x0000ef86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_EEDE; }

L_EF8A:
    /* 0000ef8a   4  jsr (0000f398) */
    c->pc = RC_ADDR(0x0000ef8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ef8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f398u);
    return;

L_EF8E:
    /* 0000ef8e   4  move.w (e74,A4),D0 */
    c->pc = RC_ADDR(0x0000ef8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF92:
    /* 0000ef92   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ef92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EF94:
    /* 0000ef94   2  bra 0000efc6 */
    c->pc = RC_ADDR(0x0000ef94u);
    rc_step(c, m, 10);
    goto L_EFC6;

L_EF96:
    /* 0000ef96   4  move.w (e86,A4),D0 */
    c->pc = RC_ADDR(0x0000ef96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe86u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF9A:
    /* 0000ef9a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ef9au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EF9C:
    /* 0000ef9c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ef9cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_EF9E:
    /* 0000ef9e   4  lea (114c,A4),A0 */
    c->pc = RC_ADDR(0x0000ef9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x114cu);

L_EFA2:
    /* 0000efa2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000efa2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EFA6:
    /* 0000efa6   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0000efa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EFAA:
    /* 0000efaa   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0000efaau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EFAC:
    /* 0000efac   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0000efacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EFB0:
    /* 0000efb0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000efb0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EFB2:
    /* 0000efb2   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0000efb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EFB6:
    /* 0000efb6   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0000efb6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EFB8:
    /* 0000efb8   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0000efb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EFBC:
    /* 0000efbc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000efbcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EFBE:
    /* 0000efbe   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000efbeu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000efc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_EFC2:
    /* 0000efc2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000efc2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EFC4:
    /* 0000efc4   2  bra 0000efd2 */
    c->pc = RC_ADDR(0x0000efc4u);
    rc_step(c, m, 10);
    goto L_EFD2;

L_EFC6:
    /* 0000efc6   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000efc6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_EFC8:
    /* 0000efc8   2  beq 0000ef96 */
    c->pc = RC_ADDR(0x0000efc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_EF96; }

L_EFCA:
    /* 0000efca   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000efcau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EFCC:
    /* 0000efcc   2  beq 0000ef96 */
    c->pc = RC_ADDR(0x0000efccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_EF96; }

L_EFCE:
    /* 0000efce   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000efceu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EFD0:
    /* 0000efd0   2  beq 0000ef96 */
    c->pc = RC_ADDR(0x0000efd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_EF96; }

L_EFD2:
    /* 0000efd2   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000efd2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EFD6:
    /* 0000efd6   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000efd6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EFDA:
    /* 0000efda   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000efdau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EFDE:
    /* 0000efde   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000efdeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EFE0:
    /* 0000efe0   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000efe0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EFE4:
    /* 0000efe4   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000efe4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EFE6:
    /* 0000efe6   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000efe6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EFEA:
    /* 0000efea   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000efeau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EFEC:
    /* 0000efec   4  bra 0000f0d4 */
    c->pc = RC_ADDR(0x0000efecu);
    rc_step(c, m, 10);
    goto L_F0D4;

L_EFF0:
    /* 0000eff0   4  bra 0000f0e6 */
    c->pc = RC_ADDR(0x0000eff0u);
    rc_step(c, m, 10);
    goto L_F0E6;

L_EFF4:
    /* 0000eff4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000eff4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EFF8:
    /* 0000eff8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000eff8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EFFA:
    /* 0000effa   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000effau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EFFE:
    /* 0000effe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000effeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F002:
    /* 0000f002   4  add.w #24,D1 */
    c->pc = RC_ADDR(0x0000f002u);
    rc_step(c, m, 10);
    t0 = 0x00000024u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F006:
    /* 0000f006   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f006u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F008:
    /* 0000f008   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f008u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F00A:
    /* 0000f00a   4  lea (11f8,A4),A0 */
    c->pc = RC_ADDR(0x0000f00au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11f8u);

L_F00E:
    /* 0000f00e   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f00eu);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F014:
    /* 0000f014   4  bra 0000f0e6 */
    c->pc = RC_ADDR(0x0000f014u);
    rc_step(c, m, 10);
    goto L_F0E6;

L_F018:
    /* 0000f018   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f018u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F01C:
    /* 0000f01c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f01cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F01E:
    /* 0000f01e   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000f01eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_F022:
    /* 0000f022   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f022u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F026:
    /* 0000f026   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f026u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F028:
    /* 0000f028   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f028u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F02A:
    /* 0000f02a   4  lea (ffff9c12,A4),A0 */
    c->pc = RC_ADDR(0x0000f02au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x63eeu);

L_F02E:
    /* 0000f02e   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f02eu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F032:
    /* 0000f032   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000f032u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F036:
    /* 0000f036   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000f036u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_F038:
    /* 0000f038   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000f038u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_F03C:
    /* 0000f03c   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0000f03cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F040:
    /* 0000f040   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000f040u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_F042:
    /* 0000f042   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0000f042u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_F044:
    /* 0000f044   4  lea (ffff99a0,A4),A0 */
    c->pc = RC_ADDR(0x0000f044u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6660u);

L_F048:
    /* 0000f048   4  add.l (0,A0,D2.w),D0 */
    c->pc = RC_ADDR(0x0000f048u);
    rc_step(c, m, 20);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F04C:
    /* 0000f04c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f04cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F04E:
    /* 0000f04e   4  lea (11f8,A4),A0 */
    c->pc = RC_ADDR(0x0000f04eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11f8u);

L_F052:
    /* 0000f052   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f052u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F058:
    /* 0000f058   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f058u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F05C:
    /* 0000f05c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f05cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F05E:
    /* 0000f05e   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000f05eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_F062:
    /* 0000f062   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f062u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F066:
    /* 0000f066   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f066u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F068:
    /* 0000f068   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f068u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F06A:
    /* 0000f06a   4  lea (ffff9c12,A4),A0 */
    c->pc = RC_ADDR(0x0000f06au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x63eeu);

L_F06E:
    /* 0000f06e   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f06eu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F072:
    /* 0000f072   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000f072u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F076:
    /* 0000f076   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000f076u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_F078:
    /* 0000f078   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000f078u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_F07C:
    /* 0000f07c   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0000f07cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F080:
    /* 0000f080   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000f080u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_F082:
    /* 0000f082   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0000f082u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_F084:
    /* 0000f084   4  lea (ffff9988,A4),A0 */
    c->pc = RC_ADDR(0x0000f084u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6678u);

L_F088:
    /* 0000f088   4  add.l (0,A0,D2.w),D0 */
    c->pc = RC_ADDR(0x0000f088u);
    rc_step(c, m, 20);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F08C:
    /* 0000f08c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f08cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F08E:
    /* 0000f08e   4  lea (11f8,A4),A0 */
    c->pc = RC_ADDR(0x0000f08eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11f8u);

L_F092:
    /* 0000f092   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f092u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F098:
    /* 0000f098   2  bra 0000f0e6 */
    c->pc = RC_ADDR(0x0000f098u);
    rc_step(c, m, 10);
    goto L_F0E6;

L_F09A:
    /* 0000f09a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f09au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F09E:
    /* 0000f09e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f09eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F0A0:
    /* 0000f0a0   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000f0a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_F0A4:
    /* 0000f0a4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f0a4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F0A8:
    /* 0000f0a8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f0a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F0AA:
    /* 0000f0aa   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f0aau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F0AC:
    /* 0000f0ac   4  lea (ffff9c12,A4),A0 */
    c->pc = RC_ADDR(0x0000f0acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x63eeu);

L_F0B0:
    /* 0000f0b0   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f0b0u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F0B4:
    /* 0000f0b4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f0b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F0B6:
    /* 0000f0b6   4  lea (11f8,A4),A0 */
    c->pc = RC_ADDR(0x0000f0b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11f8u);

L_F0BA:
    /* 0000f0ba   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f0bau);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F0C0:
    /* 0000f0c0   2  bra 0000f0e6 */
    c->pc = RC_ADDR(0x0000f0c0u);
    rc_step(c, m, 10);
    goto L_F0E6;

L_F0C2:
    /* 0000f0c2   2  bra 0000f0e6 */
    c->pc = RC_ADDR(0x0000f0c2u);
    rc_step(c, m, 10);
    goto L_F0E6;

L_F0D4:
    /* 0000f0d4   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0000f0d4u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F0DA:
    /* 0000f0da   2  bcc 0000f0e6 */
    c->pc = RC_ADDR(0x0000f0dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_F0E6;

L_F0DC:
    /* 0000f0dc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f0dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F0DE:
    /* 0000f0de   4  move.w (0000f0c4),D0 */
    c->pc = RC_ADDR(0x0000f0deu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000f0c4u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F0E2:
    /* 0000f0e2   4  jmp (0000f0e4) */
    c->pc = RC_ADDR(0x0000f0e2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000f0e4u) + t4);
    c->pc = t3;
    return;

L_F0E6:
    /* 0000f0e6   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f0e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_F0EA:
    /* 0000f0ea   2  beq 0000f164 */
    c->pc = RC_ADDR(0x0000f0eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F164;

L_F0EC:
    /* 0000f0ec   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f0ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F0F0:
    /* 0000f0f0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f0f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F0F2:
    /* 0000f0f2   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000f0f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_F0F6:
    /* 0000f0f6   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000f0f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_F0FA:
    /* 0000f0fa   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000f0fau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F0FC:
    /* 0000f0fc   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x0000f0fcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F100:
    /* 0000f100   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000f100u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F102:
    /* 0000f102   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000f102u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F106:
    /* 0000f106   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000f106u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F108:
    /* 0000f108   4  sub.w (e6c,A4),D2 */
    c->pc = RC_ADDR(0x0000f108u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F10C:
    /* 0000f10c   4  move.w D2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f10cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F110:
    /* 0000f110   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f110u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F114:
    /* 0000f114   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f114u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F116:
    /* 0000f116   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000f116u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_F11A:
    /* 0000f11a   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000f11au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_F11E:
    /* 0000f11e   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x0000f11eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F122:
    /* 0000f122   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000f122u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F124:
    /* 0000f124   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000f124u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F128:
    /* 0000f128   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000f128u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F12A:
    /* 0000f12a   4  sub.w (e6e,A4),D2 */
    c->pc = RC_ADDR(0x0000f12au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F12E:
    /* 0000f12e   4  move.w D2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f12eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F132:
    /* 0000f132   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f132u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_F136:
    /* 0000f136   2  blt 0000f152 */
    c->pc = RC_ADDR(0x0000f136u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F152;

L_F138:
    /* 0000f138   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_F13C:
    /* 0000f13c   2  blt 0000f152 */
    c->pc = RC_ADDR(0x0000f13cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F152;

L_F13E:
    /* 0000f13e   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f13eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F142:
    /* 0000f142   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f142u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F146:
    /* 0000f146   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f146u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F14A:
    /* 0000f14a   4  jsr (0000f8a8) */
    c->pc = RC_ADDR(0x0000f14au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f14eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f8a8u);
    return;

L_F14E:
    /* 0000f14e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f14eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F150:
    /* 0000f150   2  bra 0000f164 */
    c->pc = RC_ADDR(0x0000f150u);
    rc_step(c, m, 10);
    goto L_F164;

L_F152:
    /* 0000f152   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f152u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F156:
    /* 0000f156   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f156u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F15A:
    /* 0000f15a   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f15au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F15E:
    /* 0000f15e   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000f15eu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000f162u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_F162:
    /* 0000f162   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f162u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F164:
    /* 0000f164   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000f164u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_F168:
    /* 0000f168   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000f168u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_F170:
    /* 0000f170   4  blt 0000efd6 */
    c->pc = RC_ADDR(0x0000f170u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_EFD6; }

L_F174:
    /* 0000f174   4  tst.w (e74,A4) */
    c->pc = RC_ADDR(0x0000f174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_set_nzvc(c, t0, RC_W);

L_F178:
    /* 0000f178   2  bne 0000f1ca */
    c->pc = RC_ADDR(0x0000f178u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F1CA;

L_F17A:
    /* 0000f17a   4  tst.w (ee2,A4) */
    c->pc = RC_ADDR(0x0000f17au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_set_nzvc(c, t0, RC_W);

L_F17E:
    /* 0000f17e   2  beq 0000f1ca */
    c->pc = RC_ADDR(0x0000f17eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F1CA;

L_F180:
    /* 0000f180   4  move.w (ee4,A4),D0 */
    c->pc = RC_ADDR(0x0000f180u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F184:
    /* 0000f184   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f184u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F186:
    /* 0000f186   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f186u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F188:
    /* 0000f188   4  lea (129c,A4),A0 */
    c->pc = RC_ADDR(0x0000f188u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x129cu);

L_F18C:
    /* 0000f18c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000f18cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F190:
    /* 0000f190   4  move.w (ee4,A4),D0 */
    c->pc = RC_ADDR(0x0000f190u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F194:
    /* 0000f194   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f194u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F196:
    /* 0000f196   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f196u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F198:
    /* 0000f198   4  lea (ffff9a64,A4),A0 */
    c->pc = RC_ADDR(0x0000f198u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x659cu);

L_F19C:
    /* 0000f19c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f19cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1A0:
    /* 0000f1a0   4  add.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000f1a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F1A4:
    /* 0000f1a4   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0000f1a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F1A8:
    /* 0000f1a8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f1a8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1AA:
    /* 0000f1aa   4  move.w (ee4,A4),D0 */
    c->pc = RC_ADDR(0x0000f1aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1AE:
    /* 0000f1ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f1aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F1B0:
    /* 0000f1b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f1b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F1B2:
    /* 0000f1b2   4  lea (ffff9a04,A4),A0 */
    c->pc = RC_ADDR(0x0000f1b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x65fcu);

L_F1B6:
    /* 0000f1b6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f1b6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1BA:
    /* 0000f1ba   4  add.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000f1bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F1BE:
    /* 0000f1be   4  sub.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0000f1beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F1C2:
    /* 0000f1c2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f1c2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1C4:
    /* 0000f1c4   4  jsr (0000f8a8) */
    c->pc = RC_ADDR(0x0000f1c4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f1c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f8a8u);
    return;

L_F1C8:
    /* 0000f1c8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f1c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F1CA:
    /* 0000f1ca   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000f1cau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F1CE:
    /* 0000f1ce   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f1ceu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F1D2:
    /* 0000f1d2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f1d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1D6:
    /* 0000f1d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f1d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F1D8:
    /* 0000f1d8   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000f1d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_F1DC:
    /* 0000f1dc   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000f1dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1DE:
    /* 0000f1de   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f1deu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1E2:
    /* 0000f1e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f1e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F1E4:
    /* 0000f1e4   4  bra 0000f270 */
    c->pc = RC_ADDR(0x0000f1e4u);
    rc_step(c, m, 10);
    goto L_F270;

L_F1E8:
    /* 0000f1e8   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f1e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1EC:
    /* 0000f1ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f1ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F1EE:
    /* 0000f1ee   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000f1eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_F1F2:
    /* 0000f1f2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f1f2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F1F6:
    /* 0000f1f6   4  and.w #1,D1 */
    c->pc = RC_ADDR(0x0000f1f6u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_F1FA:
    /* 0000f1fa   4  add.w #3a,D1 */
    c->pc = RC_ADDR(0x0000f1fau);
    rc_step(c, m, 10);
    t0 = 0x0000003au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F1FE:
    /* 0000f1fe   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f1feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F200:
    /* 0000f200   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f200u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F202:
    /* 0000f202   4  lea (129c,A4),A0 */
    c->pc = RC_ADDR(0x0000f202u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x129cu);

L_F206:
    /* 0000f206   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f206u);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F20C:
    /* 0000f20c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f20cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F210:
    /* 0000f210   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f210u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F212:
    /* 0000f212   4  lea (e8c,A4),A0 */
    c->pc = RC_ADDR(0x0000f212u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe8cu);

L_F216:
    /* 0000f216   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f216u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F21C:
    /* 0000f21c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f21cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F220:
    /* 0000f220   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f220u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F222:
    /* 0000f222   4  lea (e9c,A4),A0 */
    c->pc = RC_ADDR(0x0000f222u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe9cu);

L_F226:
    /* 0000f226   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f226u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F22C:
    /* 0000f22c   2  bra 0000f27e */
    c->pc = RC_ADDR(0x0000f22cu);
    rc_step(c, m, 10);
    goto L_F27E;

L_F22E:
    /* 0000f22e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f22eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F232:
    /* 0000f232   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f232u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F234:
    /* 0000f234   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000f234u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_F238:
    /* 0000f238   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f238u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F23C:
    /* 0000f23c   4  add.w #3c,D1 */
    c->pc = RC_ADDR(0x0000f23cu);
    rc_step(c, m, 10);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F240:
    /* 0000f240   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f240u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F242:
    /* 0000f242   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000f242u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_F244:
    /* 0000f244   4  lea (129c,A4),A0 */
    c->pc = RC_ADDR(0x0000f244u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x129cu);

L_F248:
    /* 0000f248   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f248u);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F24E:
    /* 0000f24e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f24eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F252:
    /* 0000f252   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f252u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F254:
    /* 0000f254   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000f254u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_F258:
    /* 0000f258   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f258u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F25E:
    /* 0000f25e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000f25eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F262:
    /* 0000f262   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f262u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F264:
    /* 0000f264   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000f264u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_F268:
    /* 0000f268   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f268u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F26E:
    /* 0000f26e   2  bra 0000f27e */
    c->pc = RC_ADDR(0x0000f26eu);
    rc_step(c, m, 10);
    goto L_F27E;

L_F270:
    /* 0000f270   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000f270u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F272:
    /* 0000f272   4  beq 0000f1e8 */
    c->pc = RC_ADDR(0x0000f272u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_F1E8; }

L_F276:
    /* 0000f276   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000f276u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F278:
    /* 0000f278   2  beq 0000f22e */
    c->pc = RC_ADDR(0x0000f278u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_F22E; }

L_F27A:
    /* 0000f27a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000f27au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F27C:
    /* 0000f27c   2  beq 0000f22e */
    c->pc = RC_ADDR(0x0000f27cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_F22E; }

L_F27E:
    /* 0000f27e   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000f27eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_F282:
    /* 0000f282   2  beq 0000f2e8 */
    c->pc = RC_ADDR(0x0000f282u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F2E8;

L_F284:
    /* 0000f284   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000f284u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_F288:
    /* 0000f288   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f288u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F28A:
    /* 0000f28a   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0000f28au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F28E:
    /* 0000f28e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000f28eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F290:
    /* 0000f290   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0000f290u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F294:
    /* 0000f294   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000f294u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F296:
    /* 0000f296   4  sub.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0000f296u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F29A:
    /* 0000f29a   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f29au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F29E:
    /* 0000f29e   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000f29eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_F2A2:
    /* 0000f2a2   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0000f2a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2A6:
    /* 0000f2a6   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000f2a6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F2A8:
    /* 0000f2a8   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000f2a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2AC:
    /* 0000f2ac   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000f2acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F2AE:
    /* 0000f2ae   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0000f2aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F2B2:
    /* 0000f2b2   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f2b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2B6:
    /* 0000f2b6   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f2b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_F2BA:
    /* 0000f2ba   2  blt 0000f2d6 */
    c->pc = RC_ADDR(0x0000f2bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F2D6;

L_F2BC:
    /* 0000f2bc   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f2bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_F2C0:
    /* 0000f2c0   2  blt 0000f2d6 */
    c->pc = RC_ADDR(0x0000f2c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F2D6;

L_F2C2:
    /* 0000f2c2   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F2C6:
    /* 0000f2c6   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2c6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2CA:
    /* 0000f2ca   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2cau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2CE:
    /* 0000f2ce   4  jsr (0000f8a8) */
    c->pc = RC_ADDR(0x0000f2ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f2d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f8a8u);
    return;

L_F2D2:
    /* 0000f2d2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f2d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F2D4:
    /* 0000f2d4   2  bra 0000f2e8 */
    c->pc = RC_ADDR(0x0000f2d4u);
    rc_step(c, m, 10);
    goto L_F2E8;

L_F2D6:
    /* 0000f2d6   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F2DA:
    /* 0000f2da   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2DE:
    /* 0000f2de   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000f2deu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F2E2:
    /* 0000f2e2   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000f2e2u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000f2e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_F2E6:
    /* 0000f2e6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f2e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F2E8:
    /* 0000f2e8   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000f2e8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_F2EC:
    /* 0000f2ec   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000f2ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_F2F4:
    /* 0000f2f4   4  blt 0000f1ce */
    c->pc = RC_ADDR(0x0000f2f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F1CE; }

L_F2F8:
    /* 0000f2f8   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000f2f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_F2FE:
    /* 0000f2fe   4  bne 0000f394 */
    c->pc = RC_ADDR(0x0000f2feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F394;

L_F302:
    /* 0000f302   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000f302u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F306:
    /* 0000f306   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f306u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F308:
    /* 0000f308   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f308u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F30A:
    /* 0000f30a   4  lea (ffff9930,A4),A0 */
    c->pc = RC_ADDR(0x0000f30au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66d0u);

L_F30E:
    /* 0000f30e   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000f30eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F314:
    /* 0000f314   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000f314u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F318:
    /* 0000f318   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f318u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F31A:
    /* 0000f31a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f31au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F31C:
    /* 0000f31c   4  lea (ffff993c,A4),A0 */
    c->pc = RC_ADDR(0x0000f31cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66c4u);

L_F320:
    /* 0000f320   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000f320u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F326:
    /* 0000f326   4  move.l (1278,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f326u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1278u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F32A:
    /* 0000f32a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000f32au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F32E:
    /* 0000f32e   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0000f32eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F332:
    /* 0000f332   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000f332u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F334:
    /* 0000f334   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000f334u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F338:
    /* 0000f338   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0000f338u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F33C:
    /* 0000f33c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000f33cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F33E:
    /* 0000f33e   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000f33eu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000f342u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_F342:
    /* 0000f342   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f342u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F344:
    /* 0000f344   4  move.w (edc,A4),D0 */
    c->pc = RC_ADDR(0x0000f344u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xedcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F348:
    /* 0000f348   4  add.w #21,D0 */
    c->pc = RC_ADDR(0x0000f348u);
    rc_step(c, m, 10);
    t0 = 0x00000021u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F34C:
    /* 0000f34c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f34cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F34E:
    /* 0000f34e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f34eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F350:
    /* 0000f350   4  lea (11f8,A4),A0 */
    c->pc = RC_ADDR(0x0000f350u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x11f8u);

L_F354:
    /* 0000f354   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000f354u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F358:
    /* 0000f358   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000f358u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F35C:
    /* 0000f35c   4  add.w #34,D0 */
    c->pc = RC_ADDR(0x0000f35cu);
    rc_step(c, m, 10);
    t0 = 0x00000034u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F360:
    /* 0000f360   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0000f360u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F364:
    /* 0000f364   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000f364u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F366:
    /* 0000f366   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000f366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F36A:
    /* 0000f36a   4  add.w #32,D0 */
    c->pc = RC_ADDR(0x0000f36au);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F36E:
    /* 0000f36e   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0000f36eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F372:
    /* 0000f372   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000f372u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F374:
    /* 0000f374   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000f374u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000f378u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_F378:
    /* 0000f378   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f378u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F37A:
    /* 0000f37a   4  move.w (ede,A4),D0 */
    c->pc = RC_ADDR(0x0000f37au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xedeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F37E:
    /* 0000f37e   4  add.w D0,(edc,A4) */
    c->pc = RC_ADDR(0x0000f37eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xedcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F382:
    /* 0000f382   4  tst.w (edc,A4) */
    c->pc = RC_ADDR(0x0000f382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xedcu));
    rc_set_nzvc(c, t0, RC_W);

L_F386:
    /* 0000f386   2  beq 0000f390 */
    c->pc = RC_ADDR(0x0000f386u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F390;

L_F388:
    /* 0000f388   6  cmpi.w #2,(edc,A4) */
    c->pc = RC_ADDR(0x0000f388u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xedcu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_F38E:
    /* 0000f38e   2  bne 0000f394 */
    c->pc = RC_ADDR(0x0000f38eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F394;

L_F390:
    /* 0000f390   4  neg.w (ede,A4) */
    c->pc = RC_ADDR(0x0000f390u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xedeu);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F394:
    /* 0000f394   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f394u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F396:
    /* 0000f396   2  rts */
    c->pc = RC_ADDR(0x0000f396u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
