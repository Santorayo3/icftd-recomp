/* fn_0001a8c2 - 3622 byte(s), 1106 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001a8c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a8c2u): goto L_1A8C2;
    case RC_ADDR(0x0001a8c6u): goto L_1A8C6;
    case RC_ADDR(0x0001a8cau): goto L_1A8CA;
    case RC_ADDR(0x0001a8ceu): goto L_1A8CE;
    case RC_ADDR(0x0001a8d2u): goto L_1A8D2;
    case RC_ADDR(0x0001a8d4u): goto L_1A8D4;
    case RC_ADDR(0x0001a8d8u): goto L_1A8D8;
    case RC_ADDR(0x0001a8dcu): goto L_1A8DC;
    case RC_ADDR(0x0001a8e0u): goto L_1A8E0;
    case RC_ADDR(0x0001a8e2u): goto L_1A8E2;
    case RC_ADDR(0x0001a8e6u): goto L_1A8E6;
    case RC_ADDR(0x0001a8eau): goto L_1A8EA;
    case RC_ADDR(0x0001a8ecu): goto L_1A8EC;
    case RC_ADDR(0x0001a8eeu): goto L_1A8EE;
    case RC_ADDR(0x0001a8f0u): goto L_1A8F0;
    case RC_ADDR(0x0001a8f4u): goto L_1A8F4;
    case RC_ADDR(0x0001a8f8u): goto L_1A8F8;
    case RC_ADDR(0x0001a8fau): goto L_1A8FA;
    case RC_ADDR(0x0001a8feu): goto L_1A8FE;
    case RC_ADDR(0x0001a900u): goto L_1A900;
    case RC_ADDR(0x0001a902u): goto L_1A902;
    case RC_ADDR(0x0001a906u): goto L_1A906;
    case RC_ADDR(0x0001a90au): goto L_1A90A;
    case RC_ADDR(0x0001a90cu): goto L_1A90C;
    case RC_ADDR(0x0001a910u): goto L_1A910;
    case RC_ADDR(0x0001a912u): goto L_1A912;
    case RC_ADDR(0x0001a914u): goto L_1A914;
    case RC_ADDR(0x0001a918u): goto L_1A918;
    case RC_ADDR(0x0001a91eu): goto L_1A91E;
    case RC_ADDR(0x0001a920u): goto L_1A920;
    case RC_ADDR(0x0001a922u): goto L_1A922;
    case RC_ADDR(0x0001a926u): goto L_1A926;
    case RC_ADDR(0x0001a92cu): goto L_1A92C;
    case RC_ADDR(0x0001a92eu): goto L_1A92E;
    case RC_ADDR(0x0001a930u): goto L_1A930;
    case RC_ADDR(0x0001a934u): goto L_1A934;
    case RC_ADDR(0x0001a938u): goto L_1A938;
    case RC_ADDR(0x0001a93au): goto L_1A93A;
    case RC_ADDR(0x0001a93cu): goto L_1A93C;
    case RC_ADDR(0x0001a940u): goto L_1A940;
    case RC_ADDR(0x0001a944u): goto L_1A944;
    case RC_ADDR(0x0001a946u): goto L_1A946;
    case RC_ADDR(0x0001a94au): goto L_1A94A;
    case RC_ADDR(0x0001a94cu): goto L_1A94C;
    case RC_ADDR(0x0001a94eu): goto L_1A94E;
    case RC_ADDR(0x0001a952u): goto L_1A952;
    case RC_ADDR(0x0001a956u): goto L_1A956;
    case RC_ADDR(0x0001a958u): goto L_1A958;
    case RC_ADDR(0x0001a95au): goto L_1A95A;
    case RC_ADDR(0x0001a95eu): goto L_1A95E;
    case RC_ADDR(0x0001a962u): goto L_1A962;
    case RC_ADDR(0x0001a964u): goto L_1A964;
    case RC_ADDR(0x0001a968u): goto L_1A968;
    case RC_ADDR(0x0001a96cu): goto L_1A96C;
    case RC_ADDR(0x0001a96eu): goto L_1A96E;
    case RC_ADDR(0x0001a970u): goto L_1A970;
    case RC_ADDR(0x0001a974u): goto L_1A974;
    case RC_ADDR(0x0001a978u): goto L_1A978;
    case RC_ADDR(0x0001a97cu): goto L_1A97C;
    case RC_ADDR(0x0001a980u): goto L_1A980;
    case RC_ADDR(0x0001a982u): goto L_1A982;
    case RC_ADDR(0x0001a984u): goto L_1A984;
    case RC_ADDR(0x0001a986u): goto L_1A986;
    case RC_ADDR(0x0001a98au): goto L_1A98A;
    case RC_ADDR(0x0001a98cu): goto L_1A98C;
    case RC_ADDR(0x0001a98eu): goto L_1A98E;
    case RC_ADDR(0x0001a992u): goto L_1A992;
    case RC_ADDR(0x0001a996u): goto L_1A996;
    case RC_ADDR(0x0001a99au): goto L_1A99A;
    case RC_ADDR(0x0001a99cu): goto L_1A99C;
    case RC_ADDR(0x0001a99eu): goto L_1A99E;
    case RC_ADDR(0x0001a9a0u): goto L_1A9A0;
    case RC_ADDR(0x0001a9a4u): goto L_1A9A4;
    case RC_ADDR(0x0001a9a8u): goto L_1A9A8;
    case RC_ADDR(0x0001a9acu): goto L_1A9AC;
    case RC_ADDR(0x0001a9b0u): goto L_1A9B0;
    case RC_ADDR(0x0001a9b2u): goto L_1A9B2;
    case RC_ADDR(0x0001a9b4u): goto L_1A9B4;
    case RC_ADDR(0x0001a9b6u): goto L_1A9B6;
    case RC_ADDR(0x0001a9bau): goto L_1A9BA;
    case RC_ADDR(0x0001a9c0u): goto L_1A9C0;
    case RC_ADDR(0x0001a9c2u): goto L_1A9C2;
    case RC_ADDR(0x0001a9c4u): goto L_1A9C4;
    case RC_ADDR(0x0001a9c8u): goto L_1A9C8;
    case RC_ADDR(0x0001a9ceu): goto L_1A9CE;
    case RC_ADDR(0x0001a9d0u): goto L_1A9D0;
    case RC_ADDR(0x0001a9d4u): goto L_1A9D4;
    case RC_ADDR(0x0001a9dau): goto L_1A9DA;
    case RC_ADDR(0x0001a9dcu): goto L_1A9DC;
    case RC_ADDR(0x0001a9e0u): goto L_1A9E0;
    case RC_ADDR(0x0001a9e2u): goto L_1A9E2;
    case RC_ADDR(0x0001a9e4u): goto L_1A9E4;
    case RC_ADDR(0x0001a9e8u): goto L_1A9E8;
    case RC_ADDR(0x0001a9ecu): goto L_1A9EC;
    case RC_ADDR(0x0001a9f0u): goto L_1A9F0;
    case RC_ADDR(0x0001a9f2u): goto L_1A9F2;
    case RC_ADDR(0x0001a9f6u): goto L_1A9F6;
    case RC_ADDR(0x0001a9fau): goto L_1A9FA;
    case RC_ADDR(0x0001a9fcu): goto L_1A9FC;
    case RC_ADDR(0x0001a9feu): goto L_1A9FE;
    case RC_ADDR(0x0001aa00u): goto L_1AA00;
    case RC_ADDR(0x0001aa02u): goto L_1AA02;
    case RC_ADDR(0x0001aa04u): goto L_1AA04;
    case RC_ADDR(0x0001aa08u): goto L_1AA08;
    case RC_ADDR(0x0001aa0eu): goto L_1AA0E;
    case RC_ADDR(0x0001aa10u): goto L_1AA10;
    case RC_ADDR(0x0001aa12u): goto L_1AA12;
    case RC_ADDR(0x0001aa16u): goto L_1AA16;
    case RC_ADDR(0x0001aa1au): goto L_1AA1A;
    case RC_ADDR(0x0001aa1eu): goto L_1AA1E;
    case RC_ADDR(0x0001aa20u): goto L_1AA20;
    case RC_ADDR(0x0001aa24u): goto L_1AA24;
    case RC_ADDR(0x0001aa2au): goto L_1AA2A;
    case RC_ADDR(0x0001aa2cu): goto L_1AA2C;
    case RC_ADDR(0x0001aa2eu): goto L_1AA2E;
    case RC_ADDR(0x0001aa30u): goto L_1AA30;
    case RC_ADDR(0x0001aa34u): goto L_1AA34;
    case RC_ADDR(0x0001aa36u): goto L_1AA36;
    case RC_ADDR(0x0001aa38u): goto L_1AA38;
    case RC_ADDR(0x0001aa3cu): goto L_1AA3C;
    case RC_ADDR(0x0001aa42u): goto L_1AA42;
    case RC_ADDR(0x0001aa44u): goto L_1AA44;
    case RC_ADDR(0x0001aa46u): goto L_1AA46;
    case RC_ADDR(0x0001aa4au): goto L_1AA4A;
    case RC_ADDR(0x0001aa50u): goto L_1AA50;
    case RC_ADDR(0x0001aa52u): goto L_1AA52;
    case RC_ADDR(0x0001aa54u): goto L_1AA54;
    case RC_ADDR(0x0001aa58u): goto L_1AA58;
    case RC_ADDR(0x0001aa5cu): goto L_1AA5C;
    case RC_ADDR(0x0001aa5eu): goto L_1AA5E;
    case RC_ADDR(0x0001aa60u): goto L_1AA60;
    case RC_ADDR(0x0001aa64u): goto L_1AA64;
    case RC_ADDR(0x0001aa68u): goto L_1AA68;
    case RC_ADDR(0x0001aa6cu): goto L_1AA6C;
    case RC_ADDR(0x0001aa70u): goto L_1AA70;
    case RC_ADDR(0x0001aa72u): goto L_1AA72;
    case RC_ADDR(0x0001aa74u): goto L_1AA74;
    case RC_ADDR(0x0001aa78u): goto L_1AA78;
    case RC_ADDR(0x0001aa7cu): goto L_1AA7C;
    case RC_ADDR(0x0001aa7eu): goto L_1AA7E;
    case RC_ADDR(0x0001aa80u): goto L_1AA80;
    case RC_ADDR(0x0001aa84u): goto L_1AA84;
    case RC_ADDR(0x0001aa88u): goto L_1AA88;
    case RC_ADDR(0x0001aa8cu): goto L_1AA8C;
    case RC_ADDR(0x0001aa90u): goto L_1AA90;
    case RC_ADDR(0x0001aa92u): goto L_1AA92;
    case RC_ADDR(0x0001aa96u): goto L_1AA96;
    case RC_ADDR(0x0001aa98u): goto L_1AA98;
    case RC_ADDR(0x0001aa9au): goto L_1AA9A;
    case RC_ADDR(0x0001aa9cu): goto L_1AA9C;
    case RC_ADDR(0x0001aaa0u): goto L_1AAA0;
    case RC_ADDR(0x0001aaa2u): goto L_1AAA2;
    case RC_ADDR(0x0001aaa6u): goto L_1AAA6;
    case RC_ADDR(0x0001aaa8u): goto L_1AAA8;
    case RC_ADDR(0x0001aaacu): goto L_1AAAC;
    case RC_ADDR(0x0001aab0u): goto L_1AAB0;
    case RC_ADDR(0x0001aab2u): goto L_1AAB2;
    case RC_ADDR(0x0001aab6u): goto L_1AAB6;
    case RC_ADDR(0x0001aabau): goto L_1AABA;
    case RC_ADDR(0x0001aabeu): goto L_1AABE;
    case RC_ADDR(0x0001aac0u): goto L_1AAC0;
    case RC_ADDR(0x0001aac4u): goto L_1AAC4;
    case RC_ADDR(0x0001aac8u): goto L_1AAC8;
    case RC_ADDR(0x0001aaccu): goto L_1AACC;
    case RC_ADDR(0x0001aaceu): goto L_1AACE;
    case RC_ADDR(0x0001aad2u): goto L_1AAD2;
    case RC_ADDR(0x0001aad6u): goto L_1AAD6;
    case RC_ADDR(0x0001aad8u): goto L_1AAD8;
    case RC_ADDR(0x0001aadcu): goto L_1AADC;
    case RC_ADDR(0x0001aadeu): goto L_1AADE;
    case RC_ADDR(0x0001aae2u): goto L_1AAE2;
    case RC_ADDR(0x0001aae4u): goto L_1AAE4;
    case RC_ADDR(0x0001aae8u): goto L_1AAE8;
    case RC_ADDR(0x0001aaecu): goto L_1AAEC;
    case RC_ADDR(0x0001aaeeu): goto L_1AAEE;
    case RC_ADDR(0x0001aaf2u): goto L_1AAF2;
    case RC_ADDR(0x0001aaf4u): goto L_1AAF4;
    case RC_ADDR(0x0001aaf8u): goto L_1AAF8;
    case RC_ADDR(0x0001aafau): goto L_1AAFA;
    case RC_ADDR(0x0001aafeu): goto L_1AAFE;
    case RC_ADDR(0x0001ab02u): goto L_1AB02;
    case RC_ADDR(0x0001ab04u): goto L_1AB04;
    case RC_ADDR(0x0001ab08u): goto L_1AB08;
    case RC_ADDR(0x0001ab0au): goto L_1AB0A;
    case RC_ADDR(0x0001ab0eu): goto L_1AB0E;
    case RC_ADDR(0x0001ab10u): goto L_1AB10;
    case RC_ADDR(0x0001ab14u): goto L_1AB14;
    case RC_ADDR(0x0001ab18u): goto L_1AB18;
    case RC_ADDR(0x0001ab1au): goto L_1AB1A;
    case RC_ADDR(0x0001ab1eu): goto L_1AB1E;
    case RC_ADDR(0x0001ab20u): goto L_1AB20;
    case RC_ADDR(0x0001ab24u): goto L_1AB24;
    case RC_ADDR(0x0001ab26u): goto L_1AB26;
    case RC_ADDR(0x0001ab28u): goto L_1AB28;
    case RC_ADDR(0x0001ab2au): goto L_1AB2A;
    case RC_ADDR(0x0001ab2eu): goto L_1AB2E;
    case RC_ADDR(0x0001ab34u): goto L_1AB34;
    case RC_ADDR(0x0001ab36u): goto L_1AB36;
    case RC_ADDR(0x0001ab38u): goto L_1AB38;
    case RC_ADDR(0x0001ab3cu): goto L_1AB3C;
    case RC_ADDR(0x0001ab40u): goto L_1AB40;
    case RC_ADDR(0x0001ab42u): goto L_1AB42;
    case RC_ADDR(0x0001ab46u): goto L_1AB46;
    case RC_ADDR(0x0001ab48u): goto L_1AB48;
    case RC_ADDR(0x0001ab4cu): goto L_1AB4C;
    case RC_ADDR(0x0001ab50u): goto L_1AB50;
    case RC_ADDR(0x0001ab54u): goto L_1AB54;
    case RC_ADDR(0x0001ab58u): goto L_1AB58;
    case RC_ADDR(0x0001ab5cu): goto L_1AB5C;
    case RC_ADDR(0x0001ab5eu): goto L_1AB5E;
    case RC_ADDR(0x0001ab62u): goto L_1AB62;
    case RC_ADDR(0x0001ab66u): goto L_1AB66;
    case RC_ADDR(0x0001ab6au): goto L_1AB6A;
    case RC_ADDR(0x0001ab6eu): goto L_1AB6E;
    case RC_ADDR(0x0001ab72u): goto L_1AB72;
    case RC_ADDR(0x0001ab74u): goto L_1AB74;
    case RC_ADDR(0x0001ab76u): goto L_1AB76;
    case RC_ADDR(0x0001ab7au): goto L_1AB7A;
    case RC_ADDR(0x0001ab7cu): goto L_1AB7C;
    case RC_ADDR(0x0001ab7eu): goto L_1AB7E;
    case RC_ADDR(0x0001ab80u): goto L_1AB80;
    case RC_ADDR(0x0001ab84u): goto L_1AB84;
    case RC_ADDR(0x0001ab86u): goto L_1AB86;
    case RC_ADDR(0x0001ab8au): goto L_1AB8A;
    case RC_ADDR(0x0001ab8eu): goto L_1AB8E;
    case RC_ADDR(0x0001ab90u): goto L_1AB90;
    case RC_ADDR(0x0001ab92u): goto L_1AB92;
    case RC_ADDR(0x0001ab96u): goto L_1AB96;
    case RC_ADDR(0x0001ab98u): goto L_1AB98;
    case RC_ADDR(0x0001ab9au): goto L_1AB9A;
    case RC_ADDR(0x0001ab9eu): goto L_1AB9E;
    case RC_ADDR(0x0001aba2u): goto L_1ABA2;
    case RC_ADDR(0x0001aba6u): goto L_1ABA6;
    case RC_ADDR(0x0001abaau): goto L_1ABAA;
    case RC_ADDR(0x0001abaeu): goto L_1ABAE;
    case RC_ADDR(0x0001abb0u): goto L_1ABB0;
    case RC_ADDR(0x0001abb2u): goto L_1ABB2;
    case RC_ADDR(0x0001abb4u): goto L_1ABB4;
    case RC_ADDR(0x0001abb8u): goto L_1ABB8;
    case RC_ADDR(0x0001abbcu): goto L_1ABBC;
    case RC_ADDR(0x0001abc0u): goto L_1ABC0;
    case RC_ADDR(0x0001abc2u): goto L_1ABC2;
    case RC_ADDR(0x0001abc4u): goto L_1ABC4;
    case RC_ADDR(0x0001abc6u): goto L_1ABC6;
    case RC_ADDR(0x0001abcau): goto L_1ABCA;
    case RC_ADDR(0x0001abccu): goto L_1ABCC;
    case RC_ADDR(0x0001abceu): goto L_1ABCE;
    case RC_ADDR(0x0001abd2u): goto L_1ABD2;
    case RC_ADDR(0x0001abd8u): goto L_1ABD8;
    case RC_ADDR(0x0001abdcu): goto L_1ABDC;
    case RC_ADDR(0x0001abdeu): goto L_1ABDE;
    case RC_ADDR(0x0001abe0u): goto L_1ABE0;
    case RC_ADDR(0x0001abe4u): goto L_1ABE4;
    case RC_ADDR(0x0001abe6u): goto L_1ABE6;
    case RC_ADDR(0x0001abe8u): goto L_1ABE8;
    case RC_ADDR(0x0001abecu): goto L_1ABEC;
    case RC_ADDR(0x0001abf2u): goto L_1ABF2;
    case RC_ADDR(0x0001abf4u): goto L_1ABF4;
    case RC_ADDR(0x0001abf6u): goto L_1ABF6;
    case RC_ADDR(0x0001abfau): goto L_1ABFA;
    case RC_ADDR(0x0001abfcu): goto L_1ABFC;
    case RC_ADDR(0x0001abfeu): goto L_1ABFE;
    case RC_ADDR(0x0001ac02u): goto L_1AC02;
    case RC_ADDR(0x0001ac08u): goto L_1AC08;
    case RC_ADDR(0x0001ac0au): goto L_1AC0A;
    case RC_ADDR(0x0001ac0cu): goto L_1AC0C;
    case RC_ADDR(0x0001ac10u): goto L_1AC10;
    case RC_ADDR(0x0001ac12u): goto L_1AC12;
    case RC_ADDR(0x0001ac14u): goto L_1AC14;
    case RC_ADDR(0x0001ac18u): goto L_1AC18;
    case RC_ADDR(0x0001ac1eu): goto L_1AC1E;
    case RC_ADDR(0x0001ac22u): goto L_1AC22;
    case RC_ADDR(0x0001ac26u): goto L_1AC26;
    case RC_ADDR(0x0001ac2au): goto L_1AC2A;
    case RC_ADDR(0x0001ac2cu): goto L_1AC2C;
    case RC_ADDR(0x0001ac2eu): goto L_1AC2E;
    case RC_ADDR(0x0001ac32u): goto L_1AC32;
    case RC_ADDR(0x0001ac38u): goto L_1AC38;
    case RC_ADDR(0x0001ac3cu): goto L_1AC3C;
    case RC_ADDR(0x0001ac40u): goto L_1AC40;
    case RC_ADDR(0x0001ac44u): goto L_1AC44;
    case RC_ADDR(0x0001ac46u): goto L_1AC46;
    case RC_ADDR(0x0001ac48u): goto L_1AC48;
    case RC_ADDR(0x0001ac4cu): goto L_1AC4C;
    case RC_ADDR(0x0001ac52u): goto L_1AC52;
    case RC_ADDR(0x0001ac56u): goto L_1AC56;
    case RC_ADDR(0x0001ac5au): goto L_1AC5A;
    case RC_ADDR(0x0001ac5eu): goto L_1AC5E;
    case RC_ADDR(0x0001ac60u): goto L_1AC60;
    case RC_ADDR(0x0001ac62u): goto L_1AC62;
    case RC_ADDR(0x0001ac66u): goto L_1AC66;
    case RC_ADDR(0x0001ac6cu): goto L_1AC6C;
    case RC_ADDR(0x0001ac6eu): goto L_1AC6E;
    case RC_ADDR(0x0001ac70u): goto L_1AC70;
    case RC_ADDR(0x0001ac74u): goto L_1AC74;
    case RC_ADDR(0x0001ac7au): goto L_1AC7A;
    case RC_ADDR(0x0001ac7cu): goto L_1AC7C;
    case RC_ADDR(0x0001ac7eu): goto L_1AC7E;
    case RC_ADDR(0x0001ac82u): goto L_1AC82;
    case RC_ADDR(0x0001ac88u): goto L_1AC88;
    case RC_ADDR(0x0001ac8au): goto L_1AC8A;
    case RC_ADDR(0x0001ac8cu): goto L_1AC8C;
    case RC_ADDR(0x0001ac90u): goto L_1AC90;
    case RC_ADDR(0x0001ac94u): goto L_1AC94;
    case RC_ADDR(0x0001ac98u): goto L_1AC98;
    case RC_ADDR(0x0001ac9cu): goto L_1AC9C;
    case RC_ADDR(0x0001ac9eu): goto L_1AC9E;
    case RC_ADDR(0x0001aca0u): goto L_1ACA0;
    case RC_ADDR(0x0001aca4u): goto L_1ACA4;
    case RC_ADDR(0x0001aca8u): goto L_1ACA8;
    case RC_ADDR(0x0001acacu): goto L_1ACAC;
    case RC_ADDR(0x0001acb0u): goto L_1ACB0;
    case RC_ADDR(0x0001acb4u): goto L_1ACB4;
    case RC_ADDR(0x0001acbau): goto L_1ACBA;
    case RC_ADDR(0x0001acbeu): goto L_1ACBE;
    case RC_ADDR(0x0001acc2u): goto L_1ACC2;
    case RC_ADDR(0x0001acc6u): goto L_1ACC6;
    case RC_ADDR(0x0001acccu): goto L_1ACCC;
    case RC_ADDR(0x0001acceu): goto L_1ACCE;
    case RC_ADDR(0x0001acd0u): goto L_1ACD0;
    case RC_ADDR(0x0001acd4u): goto L_1ACD4;
    case RC_ADDR(0x0001acd8u): goto L_1ACD8;
    case RC_ADDR(0x0001acdau): goto L_1ACDA;
    case RC_ADDR(0x0001acdcu): goto L_1ACDC;
    case RC_ADDR(0x0001ace0u): goto L_1ACE0;
    case RC_ADDR(0x0001ace4u): goto L_1ACE4;
    case RC_ADDR(0x0001ace8u): goto L_1ACE8;
    case RC_ADDR(0x0001acecu): goto L_1ACEC;
    case RC_ADDR(0x0001aceeu): goto L_1ACEE;
    case RC_ADDR(0x0001acf0u): goto L_1ACF0;
    case RC_ADDR(0x0001acf4u): goto L_1ACF4;
    case RC_ADDR(0x0001acf8u): goto L_1ACF8;
    case RC_ADDR(0x0001acfau): goto L_1ACFA;
    case RC_ADDR(0x0001acfcu): goto L_1ACFC;
    case RC_ADDR(0x0001ad00u): goto L_1AD00;
    case RC_ADDR(0x0001ad04u): goto L_1AD04;
    case RC_ADDR(0x0001ad08u): goto L_1AD08;
    case RC_ADDR(0x0001ad0cu): goto L_1AD0C;
    case RC_ADDR(0x0001ad0eu): goto L_1AD0E;
    case RC_ADDR(0x0001ad10u): goto L_1AD10;
    case RC_ADDR(0x0001ad14u): goto L_1AD14;
    case RC_ADDR(0x0001ad18u): goto L_1AD18;
    case RC_ADDR(0x0001ad1au): goto L_1AD1A;
    case RC_ADDR(0x0001ad1cu): goto L_1AD1C;
    case RC_ADDR(0x0001ad20u): goto L_1AD20;
    case RC_ADDR(0x0001ad24u): goto L_1AD24;
    case RC_ADDR(0x0001ad28u): goto L_1AD28;
    case RC_ADDR(0x0001ad2au): goto L_1AD2A;
    case RC_ADDR(0x0001ad2cu): goto L_1AD2C;
    case RC_ADDR(0x0001ad2eu): goto L_1AD2E;
    case RC_ADDR(0x0001ad32u): goto L_1AD32;
    case RC_ADDR(0x0001ad36u): goto L_1AD36;
    case RC_ADDR(0x0001ad38u): goto L_1AD38;
    case RC_ADDR(0x0001ad3au): goto L_1AD3A;
    case RC_ADDR(0x0001ad3eu): goto L_1AD3E;
    case RC_ADDR(0x0001ad42u): goto L_1AD42;
    case RC_ADDR(0x0001ad46u): goto L_1AD46;
    case RC_ADDR(0x0001ad48u): goto L_1AD48;
    case RC_ADDR(0x0001ad4cu): goto L_1AD4C;
    case RC_ADDR(0x0001ad4eu): goto L_1AD4E;
    case RC_ADDR(0x0001ad52u): goto L_1AD52;
    case RC_ADDR(0x0001ad56u): goto L_1AD56;
    case RC_ADDR(0x0001ad5au): goto L_1AD5A;
    case RC_ADDR(0x0001ad5cu): goto L_1AD5C;
    case RC_ADDR(0x0001ad5eu): goto L_1AD5E;
    case RC_ADDR(0x0001ad62u): goto L_1AD62;
    case RC_ADDR(0x0001ad68u): goto L_1AD68;
    case RC_ADDR(0x0001ad6cu): goto L_1AD6C;
    case RC_ADDR(0x0001ad70u): goto L_1AD70;
    case RC_ADDR(0x0001ad74u): goto L_1AD74;
    case RC_ADDR(0x0001ad76u): goto L_1AD76;
    case RC_ADDR(0x0001ad78u): goto L_1AD78;
    case RC_ADDR(0x0001ad7cu): goto L_1AD7C;
    case RC_ADDR(0x0001ad82u): goto L_1AD82;
    case RC_ADDR(0x0001ad84u): goto L_1AD84;
    case RC_ADDR(0x0001ad86u): goto L_1AD86;
    case RC_ADDR(0x0001ad8au): goto L_1AD8A;
    case RC_ADDR(0x0001ad90u): goto L_1AD90;
    case RC_ADDR(0x0001ad94u): goto L_1AD94;
    case RC_ADDR(0x0001ad96u): goto L_1AD96;
    case RC_ADDR(0x0001ad98u): goto L_1AD98;
    case RC_ADDR(0x0001ad9cu): goto L_1AD9C;
    case RC_ADDR(0x0001ada0u): goto L_1ADA0;
    case RC_ADDR(0x0001ada4u): goto L_1ADA4;
    case RC_ADDR(0x0001ada6u): goto L_1ADA6;
    case RC_ADDR(0x0001ada8u): goto L_1ADA8;
    case RC_ADDR(0x0001adaau): goto L_1ADAA;
    case RC_ADDR(0x0001adaeu): goto L_1ADAE;
    case RC_ADDR(0x0001adb0u): goto L_1ADB0;
    case RC_ADDR(0x0001adb2u): goto L_1ADB2;
    case RC_ADDR(0x0001adb6u): goto L_1ADB6;
    case RC_ADDR(0x0001adbau): goto L_1ADBA;
    case RC_ADDR(0x0001adbeu): goto L_1ADBE;
    case RC_ADDR(0x0001adc2u): goto L_1ADC2;
    case RC_ADDR(0x0001adc4u): goto L_1ADC4;
    case RC_ADDR(0x0001adc6u): goto L_1ADC6;
    case RC_ADDR(0x0001adcau): goto L_1ADCA;
    case RC_ADDR(0x0001adccu): goto L_1ADCC;
    case RC_ADDR(0x0001adceu): goto L_1ADCE;
    case RC_ADDR(0x0001add2u): goto L_1ADD2;
    case RC_ADDR(0x0001add6u): goto L_1ADD6;
    case RC_ADDR(0x0001addau): goto L_1ADDA;
    case RC_ADDR(0x0001addeu): goto L_1ADDE;
    case RC_ADDR(0x0001ade0u): goto L_1ADE0;
    case RC_ADDR(0x0001ade2u): goto L_1ADE2;
    case RC_ADDR(0x0001ade6u): goto L_1ADE6;
    case RC_ADDR(0x0001adeau): goto L_1ADEA;
    case RC_ADDR(0x0001adecu): goto L_1ADEC;
    case RC_ADDR(0x0001adeeu): goto L_1ADEE;
    case RC_ADDR(0x0001adf0u): goto L_1ADF0;
    case RC_ADDR(0x0001adf4u): goto L_1ADF4;
    case RC_ADDR(0x0001adf8u): goto L_1ADF8;
    case RC_ADDR(0x0001adfcu): goto L_1ADFC;
    case RC_ADDR(0x0001adfeu): goto L_1ADFE;
    case RC_ADDR(0x0001ae00u): goto L_1AE00;
    case RC_ADDR(0x0001ae04u): goto L_1AE04;
    case RC_ADDR(0x0001ae0au): goto L_1AE0A;
    case RC_ADDR(0x0001ae0cu): goto L_1AE0C;
    case RC_ADDR(0x0001ae0eu): goto L_1AE0E;
    case RC_ADDR(0x0001ae12u): goto L_1AE12;
    case RC_ADDR(0x0001ae16u): goto L_1AE16;
    case RC_ADDR(0x0001ae1au): goto L_1AE1A;
    case RC_ADDR(0x0001ae1eu): goto L_1AE1E;
    case RC_ADDR(0x0001ae20u): goto L_1AE20;
    case RC_ADDR(0x0001ae22u): goto L_1AE22;
    case RC_ADDR(0x0001ae26u): goto L_1AE26;
    case RC_ADDR(0x0001ae2cu): goto L_1AE2C;
    case RC_ADDR(0x0001ae30u): goto L_1AE30;
    case RC_ADDR(0x0001ae34u): goto L_1AE34;
    case RC_ADDR(0x0001ae38u): goto L_1AE38;
    case RC_ADDR(0x0001ae3au): goto L_1AE3A;
    case RC_ADDR(0x0001ae3cu): goto L_1AE3C;
    case RC_ADDR(0x0001ae3eu): goto L_1AE3E;
    case RC_ADDR(0x0001ae42u): goto L_1AE42;
    case RC_ADDR(0x0001ae46u): goto L_1AE46;
    case RC_ADDR(0x0001ae48u): goto L_1AE48;
    case RC_ADDR(0x0001ae4au): goto L_1AE4A;
    case RC_ADDR(0x0001ae4cu): goto L_1AE4C;
    case RC_ADDR(0x0001ae50u): goto L_1AE50;
    case RC_ADDR(0x0001ae54u): goto L_1AE54;
    case RC_ADDR(0x0001ae58u): goto L_1AE58;
    case RC_ADDR(0x0001ae5cu): goto L_1AE5C;
    case RC_ADDR(0x0001ae60u): goto L_1AE60;
    case RC_ADDR(0x0001ae62u): goto L_1AE62;
    case RC_ADDR(0x0001ae64u): goto L_1AE64;
    case RC_ADDR(0x0001ae66u): goto L_1AE66;
    case RC_ADDR(0x0001ae6au): goto L_1AE6A;
    case RC_ADDR(0x0001ae6cu): goto L_1AE6C;
    case RC_ADDR(0x0001ae6eu): goto L_1AE6E;
    case RC_ADDR(0x0001ae72u): goto L_1AE72;
    case RC_ADDR(0x0001ae78u): goto L_1AE78;
    case RC_ADDR(0x0001ae7cu): goto L_1AE7C;
    case RC_ADDR(0x0001ae80u): goto L_1AE80;
    case RC_ADDR(0x0001ae84u): goto L_1AE84;
    case RC_ADDR(0x0001ae86u): goto L_1AE86;
    case RC_ADDR(0x0001ae88u): goto L_1AE88;
    case RC_ADDR(0x0001ae8au): goto L_1AE8A;
    case RC_ADDR(0x0001ae8eu): goto L_1AE8E;
    case RC_ADDR(0x0001ae90u): goto L_1AE90;
    case RC_ADDR(0x0001ae92u): goto L_1AE92;
    case RC_ADDR(0x0001ae96u): goto L_1AE96;
    case RC_ADDR(0x0001ae9cu): goto L_1AE9C;
    case RC_ADDR(0x0001ae9eu): goto L_1AE9E;
    case RC_ADDR(0x0001aea0u): goto L_1AEA0;
    case RC_ADDR(0x0001aea2u): goto L_1AEA2;
    case RC_ADDR(0x0001aea6u): goto L_1AEA6;
    case RC_ADDR(0x0001aeaau): goto L_1AEAA;
    case RC_ADDR(0x0001aeacu): goto L_1AEAC;
    case RC_ADDR(0x0001aeaeu): goto L_1AEAE;
    case RC_ADDR(0x0001aeb2u): goto L_1AEB2;
    case RC_ADDR(0x0001aeb4u): goto L_1AEB4;
    case RC_ADDR(0x0001aeb6u): goto L_1AEB6;
    case RC_ADDR(0x0001aebau): goto L_1AEBA;
    case RC_ADDR(0x0001aebeu): goto L_1AEBE;
    case RC_ADDR(0x0001aec0u): goto L_1AEC0;
    case RC_ADDR(0x0001aec2u): goto L_1AEC2;
    case RC_ADDR(0x0001aec6u): goto L_1AEC6;
    case RC_ADDR(0x0001aecau): goto L_1AECA;
    case RC_ADDR(0x0001aeceu): goto L_1AECE;
    case RC_ADDR(0x0001aed2u): goto L_1AED2;
    case RC_ADDR(0x0001aed4u): goto L_1AED4;
    case RC_ADDR(0x0001aed6u): goto L_1AED6;
    case RC_ADDR(0x0001aedau): goto L_1AEDA;
    case RC_ADDR(0x0001aedcu): goto L_1AEDC;
    case RC_ADDR(0x0001aedeu): goto L_1AEDE;
    case RC_ADDR(0x0001aee2u): goto L_1AEE2;
    case RC_ADDR(0x0001aee6u): goto L_1AEE6;
    case RC_ADDR(0x0001aee8u): goto L_1AEE8;
    case RC_ADDR(0x0001aeeau): goto L_1AEEA;
    case RC_ADDR(0x0001aeeeu): goto L_1AEEE;
    case RC_ADDR(0x0001aef2u): goto L_1AEF2;
    case RC_ADDR(0x0001aef6u): goto L_1AEF6;
    case RC_ADDR(0x0001aefau): goto L_1AEFA;
    case RC_ADDR(0x0001aefcu): goto L_1AEFC;
    case RC_ADDR(0x0001af00u): goto L_1AF00;
    case RC_ADDR(0x0001af02u): goto L_1AF02;
    case RC_ADDR(0x0001af06u): goto L_1AF06;
    case RC_ADDR(0x0001af08u): goto L_1AF08;
    case RC_ADDR(0x0001af0au): goto L_1AF0A;
    case RC_ADDR(0x0001af0cu): goto L_1AF0C;
    case RC_ADDR(0x0001af12u): goto L_1AF12;
    case RC_ADDR(0x0001af16u): goto L_1AF16;
    case RC_ADDR(0x0001af1au): goto L_1AF1A;
    case RC_ADDR(0x0001af1eu): goto L_1AF1E;
    case RC_ADDR(0x0001af22u): goto L_1AF22;
    case RC_ADDR(0x0001af24u): goto L_1AF24;
    case RC_ADDR(0x0001af26u): goto L_1AF26;
    case RC_ADDR(0x0001af28u): goto L_1AF28;
    case RC_ADDR(0x0001af2cu): goto L_1AF2C;
    case RC_ADDR(0x0001af32u): goto L_1AF32;
    case RC_ADDR(0x0001af36u): goto L_1AF36;
    case RC_ADDR(0x0001af3au): goto L_1AF3A;
    case RC_ADDR(0x0001af3eu): goto L_1AF3E;
    case RC_ADDR(0x0001af44u): goto L_1AF44;
    case RC_ADDR(0x0001af46u): goto L_1AF46;
    case RC_ADDR(0x0001af48u): goto L_1AF48;
    case RC_ADDR(0x0001af4cu): goto L_1AF4C;
    case RC_ADDR(0x0001af52u): goto L_1AF52;
    case RC_ADDR(0x0001af56u): goto L_1AF56;
    case RC_ADDR(0x0001af58u): goto L_1AF58;
    case RC_ADDR(0x0001af5au): goto L_1AF5A;
    case RC_ADDR(0x0001af5eu): goto L_1AF5E;
    case RC_ADDR(0x0001af60u): goto L_1AF60;
    case RC_ADDR(0x0001af62u): goto L_1AF62;
    case RC_ADDR(0x0001af66u): goto L_1AF66;
    case RC_ADDR(0x0001af6cu): goto L_1AF6C;
    case RC_ADDR(0x0001af6eu): goto L_1AF6E;
    case RC_ADDR(0x0001af70u): goto L_1AF70;
    case RC_ADDR(0x0001af74u): goto L_1AF74;
    case RC_ADDR(0x0001af76u): goto L_1AF76;
    case RC_ADDR(0x0001af78u): goto L_1AF78;
    case RC_ADDR(0x0001af7cu): goto L_1AF7C;
    case RC_ADDR(0x0001af82u): goto L_1AF82;
    case RC_ADDR(0x0001af84u): goto L_1AF84;
    case RC_ADDR(0x0001af86u): goto L_1AF86;
    case RC_ADDR(0x0001af8au): goto L_1AF8A;
    case RC_ADDR(0x0001af8cu): goto L_1AF8C;
    case RC_ADDR(0x0001af8eu): goto L_1AF8E;
    case RC_ADDR(0x0001af92u): goto L_1AF92;
    case RC_ADDR(0x0001af98u): goto L_1AF98;
    case RC_ADDR(0x0001af9cu): goto L_1AF9C;
    case RC_ADDR(0x0001afa0u): goto L_1AFA0;
    case RC_ADDR(0x0001afa4u): goto L_1AFA4;
    case RC_ADDR(0x0001afa6u): goto L_1AFA6;
    case RC_ADDR(0x0001afa8u): goto L_1AFA8;
    case RC_ADDR(0x0001afacu): goto L_1AFAC;
    case RC_ADDR(0x0001afb2u): goto L_1AFB2;
    case RC_ADDR(0x0001afb6u): goto L_1AFB6;
    case RC_ADDR(0x0001afbau): goto L_1AFBA;
    case RC_ADDR(0x0001afbeu): goto L_1AFBE;
    case RC_ADDR(0x0001afc0u): goto L_1AFC0;
    case RC_ADDR(0x0001afc2u): goto L_1AFC2;
    case RC_ADDR(0x0001afc6u): goto L_1AFC6;
    case RC_ADDR(0x0001afccu): goto L_1AFCC;
    case RC_ADDR(0x0001afd0u): goto L_1AFD0;
    case RC_ADDR(0x0001afd4u): goto L_1AFD4;
    case RC_ADDR(0x0001afd8u): goto L_1AFD8;
    case RC_ADDR(0x0001afdau): goto L_1AFDA;
    case RC_ADDR(0x0001afdcu): goto L_1AFDC;
    case RC_ADDR(0x0001afe0u): goto L_1AFE0;
    case RC_ADDR(0x0001afe6u): goto L_1AFE6;
    case RC_ADDR(0x0001afe8u): goto L_1AFE8;
    case RC_ADDR(0x0001afeau): goto L_1AFEA;
    case RC_ADDR(0x0001afeeu): goto L_1AFEE;
    case RC_ADDR(0x0001aff4u): goto L_1AFF4;
    case RC_ADDR(0x0001aff6u): goto L_1AFF6;
    case RC_ADDR(0x0001aff8u): goto L_1AFF8;
    case RC_ADDR(0x0001affcu): goto L_1AFFC;
    case RC_ADDR(0x0001b002u): goto L_1B002;
    case RC_ADDR(0x0001b004u): goto L_1B004;
    case RC_ADDR(0x0001b006u): goto L_1B006;
    case RC_ADDR(0x0001b00au): goto L_1B00A;
    case RC_ADDR(0x0001b00eu): goto L_1B00E;
    case RC_ADDR(0x0001b012u): goto L_1B012;
    case RC_ADDR(0x0001b016u): goto L_1B016;
    case RC_ADDR(0x0001b01au): goto L_1B01A;
    case RC_ADDR(0x0001b01eu): goto L_1B01E;
    case RC_ADDR(0x0001b022u): goto L_1B022;
    case RC_ADDR(0x0001b028u): goto L_1B028;
    case RC_ADDR(0x0001b02au): goto L_1B02A;
    case RC_ADDR(0x0001b02cu): goto L_1B02C;
    case RC_ADDR(0x0001b030u): goto L_1B030;
    case RC_ADDR(0x0001b036u): goto L_1B036;
    case RC_ADDR(0x0001b03au): goto L_1B03A;
    case RC_ADDR(0x0001b03cu): goto L_1B03C;
    case RC_ADDR(0x0001b03eu): goto L_1B03E;
    case RC_ADDR(0x0001b042u): goto L_1B042;
    case RC_ADDR(0x0001b046u): goto L_1B046;
    case RC_ADDR(0x0001b048u): goto L_1B048;
    case RC_ADDR(0x0001b04au): goto L_1B04A;
    case RC_ADDR(0x0001b04cu): goto L_1B04C;
    case RC_ADDR(0x0001b04eu): goto L_1B04E;
    case RC_ADDR(0x0001b052u): goto L_1B052;
    case RC_ADDR(0x0001b056u): goto L_1B056;
    case RC_ADDR(0x0001b058u): goto L_1B058;
    case RC_ADDR(0x0001b05au): goto L_1B05A;
    case RC_ADDR(0x0001b05eu): goto L_1B05E;
    case RC_ADDR(0x0001b062u): goto L_1B062;
    case RC_ADDR(0x0001b066u): goto L_1B066;
    case RC_ADDR(0x0001b06au): goto L_1B06A;
    case RC_ADDR(0x0001b06eu): goto L_1B06E;
    case RC_ADDR(0x0001b070u): goto L_1B070;
    case RC_ADDR(0x0001b072u): goto L_1B072;
    case RC_ADDR(0x0001b076u): goto L_1B076;
    case RC_ADDR(0x0001b07au): goto L_1B07A;
    case RC_ADDR(0x0001b07cu): goto L_1B07C;
    case RC_ADDR(0x0001b07eu): goto L_1B07E;
    case RC_ADDR(0x0001b080u): goto L_1B080;
    case RC_ADDR(0x0001b082u): goto L_1B082;
    case RC_ADDR(0x0001b086u): goto L_1B086;
    case RC_ADDR(0x0001b08au): goto L_1B08A;
    case RC_ADDR(0x0001b08cu): goto L_1B08C;
    case RC_ADDR(0x0001b08eu): goto L_1B08E;
    case RC_ADDR(0x0001b092u): goto L_1B092;
    case RC_ADDR(0x0001b096u): goto L_1B096;
    case RC_ADDR(0x0001b09au): goto L_1B09A;
    case RC_ADDR(0x0001b09eu): goto L_1B09E;
    case RC_ADDR(0x0001b0a2u): goto L_1B0A2;
    case RC_ADDR(0x0001b0a4u): goto L_1B0A4;
    case RC_ADDR(0x0001b0a6u): goto L_1B0A6;
    case RC_ADDR(0x0001b0aau): goto L_1B0AA;
    case RC_ADDR(0x0001b0b0u): goto L_1B0B0;
    case RC_ADDR(0x0001b0b2u): goto L_1B0B2;
    case RC_ADDR(0x0001b0b4u): goto L_1B0B4;
    case RC_ADDR(0x0001b0b8u): goto L_1B0B8;
    case RC_ADDR(0x0001b0beu): goto L_1B0BE;
    case RC_ADDR(0x0001b0c2u): goto L_1B0C2;
    case RC_ADDR(0x0001b0c4u): goto L_1B0C4;
    case RC_ADDR(0x0001b0c6u): goto L_1B0C6;
    case RC_ADDR(0x0001b0cau): goto L_1B0CA;
    case RC_ADDR(0x0001b0ceu): goto L_1B0CE;
    case RC_ADDR(0x0001b0d2u): goto L_1B0D2;
    case RC_ADDR(0x0001b0d4u): goto L_1B0D4;
    case RC_ADDR(0x0001b0d6u): goto L_1B0D6;
    case RC_ADDR(0x0001b0dau): goto L_1B0DA;
    case RC_ADDR(0x0001b0deu): goto L_1B0DE;
    case RC_ADDR(0x0001b0e2u): goto L_1B0E2;
    case RC_ADDR(0x0001b0e6u): goto L_1B0E6;
    case RC_ADDR(0x0001b0eau): goto L_1B0EA;
    case RC_ADDR(0x0001b0eeu): goto L_1B0EE;
    case RC_ADDR(0x0001b0f0u): goto L_1B0F0;
    case RC_ADDR(0x0001b0f2u): goto L_1B0F2;
    case RC_ADDR(0x0001b0f4u): goto L_1B0F4;
    case RC_ADDR(0x0001b0f8u): goto L_1B0F8;
    case RC_ADDR(0x0001b0feu): goto L_1B0FE;
    case RC_ADDR(0x0001b102u): goto L_1B102;
    case RC_ADDR(0x0001b104u): goto L_1B104;
    case RC_ADDR(0x0001b106u): goto L_1B106;
    case RC_ADDR(0x0001b10au): goto L_1B10A;
    case RC_ADDR(0x0001b110u): goto L_1B110;
    case RC_ADDR(0x0001b114u): goto L_1B114;
    case RC_ADDR(0x0001b116u): goto L_1B116;
    case RC_ADDR(0x0001b118u): goto L_1B118;
    case RC_ADDR(0x0001b11cu): goto L_1B11C;
    case RC_ADDR(0x0001b122u): goto L_1B122;
    case RC_ADDR(0x0001b126u): goto L_1B126;
    case RC_ADDR(0x0001b128u): goto L_1B128;
    case RC_ADDR(0x0001b12cu): goto L_1B12C;
    case RC_ADDR(0x0001b130u): goto L_1B130;
    case RC_ADDR(0x0001b132u): goto L_1B132;
    case RC_ADDR(0x0001b136u): goto L_1B136;
    case RC_ADDR(0x0001b138u): goto L_1B138;
    case RC_ADDR(0x0001b13cu): goto L_1B13C;
    case RC_ADDR(0x0001b13eu): goto L_1B13E;
    case RC_ADDR(0x0001b142u): goto L_1B142;
    case RC_ADDR(0x0001b146u): goto L_1B146;
    case RC_ADDR(0x0001b148u): goto L_1B148;
    case RC_ADDR(0x0001b14cu): goto L_1B14C;
    case RC_ADDR(0x0001b14eu): goto L_1B14E;
    case RC_ADDR(0x0001b152u): goto L_1B152;
    case RC_ADDR(0x0001b154u): goto L_1B154;
    case RC_ADDR(0x0001b158u): goto L_1B158;
    case RC_ADDR(0x0001b15cu): goto L_1B15C;
    case RC_ADDR(0x0001b15eu): goto L_1B15E;
    case RC_ADDR(0x0001b162u): goto L_1B162;
    case RC_ADDR(0x0001b164u): goto L_1B164;
    case RC_ADDR(0x0001b168u): goto L_1B168;
    case RC_ADDR(0x0001b16au): goto L_1B16A;
    case RC_ADDR(0x0001b16eu): goto L_1B16E;
    case RC_ADDR(0x0001b172u): goto L_1B172;
    case RC_ADDR(0x0001b174u): goto L_1B174;
    case RC_ADDR(0x0001b178u): goto L_1B178;
    case RC_ADDR(0x0001b17au): goto L_1B17A;
    case RC_ADDR(0x0001b17cu): goto L_1B17C;
    case RC_ADDR(0x0001b17eu): goto L_1B17E;
    case RC_ADDR(0x0001b182u): goto L_1B182;
    case RC_ADDR(0x0001b188u): goto L_1B188;
    case RC_ADDR(0x0001b18au): goto L_1B18A;
    case RC_ADDR(0x0001b18eu): goto L_1B18E;
    case RC_ADDR(0x0001b194u): goto L_1B194;
    case RC_ADDR(0x0001b198u): goto L_1B198;
    case RC_ADDR(0x0001b19au): goto L_1B19A;
    case RC_ADDR(0x0001b19cu): goto L_1B19C;
    case RC_ADDR(0x0001b19eu): goto L_1B19E;
    case RC_ADDR(0x0001b1a2u): goto L_1B1A2;
    case RC_ADDR(0x0001b1a8u): goto L_1B1A8;
    case RC_ADDR(0x0001b1aau): goto L_1B1AA;
    case RC_ADDR(0x0001b1acu): goto L_1B1AC;
    case RC_ADDR(0x0001b1b0u): goto L_1B1B0;
    case RC_ADDR(0x0001b1b6u): goto L_1B1B6;
    case RC_ADDR(0x0001b1bau): goto L_1B1BA;
    case RC_ADDR(0x0001b1beu): goto L_1B1BE;
    case RC_ADDR(0x0001b1c0u): goto L_1B1C0;
    case RC_ADDR(0x0001b1c4u): goto L_1B1C4;
    case RC_ADDR(0x0001b1c8u): goto L_1B1C8;
    case RC_ADDR(0x0001b1ccu): goto L_1B1CC;
    case RC_ADDR(0x0001b1ceu): goto L_1B1CE;
    case RC_ADDR(0x0001b1d2u): goto L_1B1D2;
    case RC_ADDR(0x0001b1d6u): goto L_1B1D6;
    case RC_ADDR(0x0001b1dau): goto L_1B1DA;
    case RC_ADDR(0x0001b1dcu): goto L_1B1DC;
    case RC_ADDR(0x0001b1e0u): goto L_1B1E0;
    case RC_ADDR(0x0001b1e4u): goto L_1B1E4;
    case RC_ADDR(0x0001b1e6u): goto L_1B1E6;
    case RC_ADDR(0x0001b1eau): goto L_1B1EA;
    case RC_ADDR(0x0001b1ecu): goto L_1B1EC;
    case RC_ADDR(0x0001b1f0u): goto L_1B1F0;
    case RC_ADDR(0x0001b1f2u): goto L_1B1F2;
    case RC_ADDR(0x0001b1f6u): goto L_1B1F6;
    case RC_ADDR(0x0001b1fau): goto L_1B1FA;
    case RC_ADDR(0x0001b1fcu): goto L_1B1FC;
    case RC_ADDR(0x0001b200u): goto L_1B200;
    case RC_ADDR(0x0001b202u): goto L_1B202;
    case RC_ADDR(0x0001b206u): goto L_1B206;
    case RC_ADDR(0x0001b208u): goto L_1B208;
    case RC_ADDR(0x0001b20cu): goto L_1B20C;
    case RC_ADDR(0x0001b210u): goto L_1B210;
    case RC_ADDR(0x0001b212u): goto L_1B212;
    case RC_ADDR(0x0001b216u): goto L_1B216;
    case RC_ADDR(0x0001b218u): goto L_1B218;
    case RC_ADDR(0x0001b21cu): goto L_1B21C;
    case RC_ADDR(0x0001b21eu): goto L_1B21E;
    case RC_ADDR(0x0001b222u): goto L_1B222;
    case RC_ADDR(0x0001b226u): goto L_1B226;
    case RC_ADDR(0x0001b228u): goto L_1B228;
    case RC_ADDR(0x0001b22cu): goto L_1B22C;
    case RC_ADDR(0x0001b22eu): goto L_1B22E;
    case RC_ADDR(0x0001b230u): goto L_1B230;
    case RC_ADDR(0x0001b232u): goto L_1B232;
    case RC_ADDR(0x0001b236u): goto L_1B236;
    case RC_ADDR(0x0001b23cu): goto L_1B23C;
    case RC_ADDR(0x0001b23eu): goto L_1B23E;
    case RC_ADDR(0x0001b240u): goto L_1B240;
    case RC_ADDR(0x0001b242u): goto L_1B242;
    case RC_ADDR(0x0001b246u): goto L_1B246;
    case RC_ADDR(0x0001b24au): goto L_1B24A;
    case RC_ADDR(0x0001b24cu): goto L_1B24C;
    case RC_ADDR(0x0001b24eu): goto L_1B24E;
    case RC_ADDR(0x0001b250u): goto L_1B250;
    case RC_ADDR(0x0001b254u): goto L_1B254;
    case RC_ADDR(0x0001b258u): goto L_1B258;
    case RC_ADDR(0x0001b25au): goto L_1B25A;
    case RC_ADDR(0x0001b25cu): goto L_1B25C;
    case RC_ADDR(0x0001b25eu): goto L_1B25E;
    case RC_ADDR(0x0001b262u): goto L_1B262;
    case RC_ADDR(0x0001b266u): goto L_1B266;
    case RC_ADDR(0x0001b272u): goto L_1B272;
    case RC_ADDR(0x0001b278u): goto L_1B278;
    case RC_ADDR(0x0001b27au): goto L_1B27A;
    case RC_ADDR(0x0001b27cu): goto L_1B27C;
    case RC_ADDR(0x0001b280u): goto L_1B280;
    case RC_ADDR(0x0001b284u): goto L_1B284;
    case RC_ADDR(0x0001b286u): goto L_1B286;
    case RC_ADDR(0x0001b288u): goto L_1B288;
    case RC_ADDR(0x0001b28cu): goto L_1B28C;
    case RC_ADDR(0x0001b290u): goto L_1B290;
    case RC_ADDR(0x0001b292u): goto L_1B292;
    case RC_ADDR(0x0001b294u): goto L_1B294;
    case RC_ADDR(0x0001b298u): goto L_1B298;
    case RC_ADDR(0x0001b29cu): goto L_1B29C;
    case RC_ADDR(0x0001b29eu): goto L_1B29E;
    case RC_ADDR(0x0001b2a0u): goto L_1B2A0;
    case RC_ADDR(0x0001b2a4u): goto L_1B2A4;
    case RC_ADDR(0x0001b2a8u): goto L_1B2A8;
    case RC_ADDR(0x0001b2aau): goto L_1B2AA;
    case RC_ADDR(0x0001b2acu): goto L_1B2AC;
    case RC_ADDR(0x0001b2aeu): goto L_1B2AE;
    case RC_ADDR(0x0001b2b2u): goto L_1B2B2;
    case RC_ADDR(0x0001b2b8u): goto L_1B2B8;
    case RC_ADDR(0x0001b2bau): goto L_1B2BA;
    case RC_ADDR(0x0001b2bcu): goto L_1B2BC;
    case RC_ADDR(0x0001b2c0u): goto L_1B2C0;
    case RC_ADDR(0x0001b2c6u): goto L_1B2C6;
    case RC_ADDR(0x0001b2c8u): goto L_1B2C8;
    case RC_ADDR(0x0001b2cau): goto L_1B2CA;
    case RC_ADDR(0x0001b2ceu): goto L_1B2CE;
    case RC_ADDR(0x0001b2d2u): goto L_1B2D2;
    case RC_ADDR(0x0001b2d6u): goto L_1B2D6;
    case RC_ADDR(0x0001b2d8u): goto L_1B2D8;
    case RC_ADDR(0x0001b2dau): goto L_1B2DA;
    case RC_ADDR(0x0001b2deu): goto L_1B2DE;
    case RC_ADDR(0x0001b2e4u): goto L_1B2E4;
    case RC_ADDR(0x0001b2e6u): goto L_1B2E6;
    case RC_ADDR(0x0001b2e8u): goto L_1B2E8;
    case RC_ADDR(0x0001b2ecu): goto L_1B2EC;
    case RC_ADDR(0x0001b2f2u): goto L_1B2F2;
    case RC_ADDR(0x0001b2f6u): goto L_1B2F6;
    case RC_ADDR(0x0001b2fau): goto L_1B2FA;
    case RC_ADDR(0x0001b2fcu): goto L_1B2FC;
    case RC_ADDR(0x0001b2feu): goto L_1B2FE;
    case RC_ADDR(0x0001b302u): goto L_1B302;
    case RC_ADDR(0x0001b304u): goto L_1B304;
    case RC_ADDR(0x0001b308u): goto L_1B308;
    case RC_ADDR(0x0001b30au): goto L_1B30A;
    case RC_ADDR(0x0001b30eu): goto L_1B30E;
    case RC_ADDR(0x0001b310u): goto L_1B310;
    case RC_ADDR(0x0001b314u): goto L_1B314;
    case RC_ADDR(0x0001b318u): goto L_1B318;
    case RC_ADDR(0x0001b31cu): goto L_1B31C;
    case RC_ADDR(0x0001b31eu): goto L_1B31E;
    case RC_ADDR(0x0001b320u): goto L_1B320;
    case RC_ADDR(0x0001b324u): goto L_1B324;
    case RC_ADDR(0x0001b326u): goto L_1B326;
    case RC_ADDR(0x0001b32au): goto L_1B32A;
    case RC_ADDR(0x0001b32cu): goto L_1B32C;
    case RC_ADDR(0x0001b330u): goto L_1B330;
    case RC_ADDR(0x0001b332u): goto L_1B332;
    case RC_ADDR(0x0001b336u): goto L_1B336;
    case RC_ADDR(0x0001b33au): goto L_1B33A;
    case RC_ADDR(0x0001b33cu): goto L_1B33C;
    case RC_ADDR(0x0001b33eu): goto L_1B33E;
    case RC_ADDR(0x0001b342u): goto L_1B342;
    case RC_ADDR(0x0001b344u): goto L_1B344;
    case RC_ADDR(0x0001b346u): goto L_1B346;
    case RC_ADDR(0x0001b34au): goto L_1B34A;
    case RC_ADDR(0x0001b350u): goto L_1B350;
    case RC_ADDR(0x0001b352u): goto L_1B352;
    case RC_ADDR(0x0001b354u): goto L_1B354;
    case RC_ADDR(0x0001b358u): goto L_1B358;
    case RC_ADDR(0x0001b35au): goto L_1B35A;
    case RC_ADDR(0x0001b35cu): goto L_1B35C;
    case RC_ADDR(0x0001b360u): goto L_1B360;
    case RC_ADDR(0x0001b366u): goto L_1B366;
    case RC_ADDR(0x0001b36au): goto L_1B36A;
    case RC_ADDR(0x0001b36eu): goto L_1B36E;
    case RC_ADDR(0x0001b370u): goto L_1B370;
    case RC_ADDR(0x0001b374u): goto L_1B374;
    case RC_ADDR(0x0001b378u): goto L_1B378;
    case RC_ADDR(0x0001b37au): goto L_1B37A;
    case RC_ADDR(0x0001b37cu): goto L_1B37C;
    case RC_ADDR(0x0001b37eu): goto L_1B37E;
    case RC_ADDR(0x0001b380u): goto L_1B380;
    case RC_ADDR(0x0001b384u): goto L_1B384;
    case RC_ADDR(0x0001b386u): goto L_1B386;
    case RC_ADDR(0x0001b38au): goto L_1B38A;
    case RC_ADDR(0x0001b38cu): goto L_1B38C;
    case RC_ADDR(0x0001b38eu): goto L_1B38E;
    case RC_ADDR(0x0001b390u): goto L_1B390;
    case RC_ADDR(0x0001b394u): goto L_1B394;
    case RC_ADDR(0x0001b396u): goto L_1B396;
    case RC_ADDR(0x0001b39au): goto L_1B39A;
    case RC_ADDR(0x0001b39cu): goto L_1B39C;
    case RC_ADDR(0x0001b39eu): goto L_1B39E;
    case RC_ADDR(0x0001b3a0u): goto L_1B3A0;
    case RC_ADDR(0x0001b3a4u): goto L_1B3A4;
    case RC_ADDR(0x0001b3a6u): goto L_1B3A6;
    case RC_ADDR(0x0001b3aau): goto L_1B3AA;
    case RC_ADDR(0x0001b3acu): goto L_1B3AC;
    case RC_ADDR(0x0001b3aeu): goto L_1B3AE;
    case RC_ADDR(0x0001b3b0u): goto L_1B3B0;
    case RC_ADDR(0x0001b3b4u): goto L_1B3B4;
    case RC_ADDR(0x0001b3b6u): goto L_1B3B6;
    case RC_ADDR(0x0001b3bau): goto L_1B3BA;
    case RC_ADDR(0x0001b3c4u): goto L_1B3C4;
    case RC_ADDR(0x0001b3cau): goto L_1B3CA;
    case RC_ADDR(0x0001b3ccu): goto L_1B3CC;
    case RC_ADDR(0x0001b3ceu): goto L_1B3CE;
    case RC_ADDR(0x0001b3d2u): goto L_1B3D2;
    case RC_ADDR(0x0001b3d6u): goto L_1B3D6;
    case RC_ADDR(0x0001b3d8u): goto L_1B3D8;
    case RC_ADDR(0x0001b3dau): goto L_1B3DA;
    case RC_ADDR(0x0001b3deu): goto L_1B3DE;
    case RC_ADDR(0x0001b3e4u): goto L_1B3E4;
    case RC_ADDR(0x0001b3e6u): goto L_1B3E6;
    case RC_ADDR(0x0001b3eau): goto L_1B3EA;
    case RC_ADDR(0x0001b3f0u): goto L_1B3F0;
    case RC_ADDR(0x0001b3f4u): goto L_1B3F4;
    case RC_ADDR(0x0001b3fau): goto L_1B3FA;
    case RC_ADDR(0x0001b3fcu): goto L_1B3FC;
    case RC_ADDR(0x0001b3feu): goto L_1B3FE;
    case RC_ADDR(0x0001b402u): goto L_1B402;
    case RC_ADDR(0x0001b408u): goto L_1B408;
    case RC_ADDR(0x0001b40au): goto L_1B40A;
    case RC_ADDR(0x0001b410u): goto L_1B410;
    case RC_ADDR(0x0001b414u): goto L_1B414;
    case RC_ADDR(0x0001b418u): goto L_1B418;
    case RC_ADDR(0x0001b41cu): goto L_1B41C;
    case RC_ADDR(0x0001b41eu): goto L_1B41E;
    case RC_ADDR(0x0001b420u): goto L_1B420;
    case RC_ADDR(0x0001b426u): goto L_1B426;
    case RC_ADDR(0x0001b42au): goto L_1B42A;
    case RC_ADDR(0x0001b42cu): goto L_1B42C;
    case RC_ADDR(0x0001b42eu): goto L_1B42E;
    case RC_ADDR(0x0001b434u): goto L_1B434;
    case RC_ADDR(0x0001b438u): goto L_1B438;
    case RC_ADDR(0x0001b43au): goto L_1B43A;
    case RC_ADDR(0x0001b43cu): goto L_1B43C;
    case RC_ADDR(0x0001b442u): goto L_1B442;
    case RC_ADDR(0x0001b446u): goto L_1B446;
    case RC_ADDR(0x0001b448u): goto L_1B448;
    case RC_ADDR(0x0001b44au): goto L_1B44A;
    case RC_ADDR(0x0001b450u): goto L_1B450;
    case RC_ADDR(0x0001b454u): goto L_1B454;
    case RC_ADDR(0x0001b456u): goto L_1B456;
    case RC_ADDR(0x0001b458u): goto L_1B458;
    case RC_ADDR(0x0001b45cu): goto L_1B45C;
    case RC_ADDR(0x0001b45eu): goto L_1B45E;
    case RC_ADDR(0x0001b462u): goto L_1B462;
    case RC_ADDR(0x0001b464u): goto L_1B464;
    case RC_ADDR(0x0001b468u): goto L_1B468;
    case RC_ADDR(0x0001b46au): goto L_1B46A;
    case RC_ADDR(0x0001b46eu): goto L_1B46E;
    case RC_ADDR(0x0001b472u): goto L_1B472;
    case RC_ADDR(0x0001b474u): goto L_1B474;
    case RC_ADDR(0x0001b476u): goto L_1B476;
    case RC_ADDR(0x0001b47au): goto L_1B47A;
    case RC_ADDR(0x0001b47cu): goto L_1B47C;
    case RC_ADDR(0x0001b480u): goto L_1B480;
    case RC_ADDR(0x0001b482u): goto L_1B482;
    case RC_ADDR(0x0001b486u): goto L_1B486;
    case RC_ADDR(0x0001b488u): goto L_1B488;
    case RC_ADDR(0x0001b48cu): goto L_1B48C;
    case RC_ADDR(0x0001b48eu): goto L_1B48E;
    case RC_ADDR(0x0001b490u): goto L_1B490;
    case RC_ADDR(0x0001b496u): goto L_1B496;
    case RC_ADDR(0x0001b498u): goto L_1B498;
    case RC_ADDR(0x0001b49au): goto L_1B49A;
    case RC_ADDR(0x0001b49cu): goto L_1B49C;
    case RC_ADDR(0x0001b4a0u): goto L_1B4A0;
    case RC_ADDR(0x0001b4a4u): goto L_1B4A4;
    case RC_ADDR(0x0001b4a6u): goto L_1B4A6;
    case RC_ADDR(0x0001b4a8u): goto L_1B4A8;
    case RC_ADDR(0x0001b4aau): goto L_1B4AA;
    case RC_ADDR(0x0001b4acu): goto L_1B4AC;
    case RC_ADDR(0x0001b4aeu): goto L_1B4AE;
    case RC_ADDR(0x0001b4b2u): goto L_1B4B2;
    case RC_ADDR(0x0001b4b6u): goto L_1B4B6;
    case RC_ADDR(0x0001b4b8u): goto L_1B4B8;
    case RC_ADDR(0x0001b4bau): goto L_1B4BA;
    case RC_ADDR(0x0001b4bcu): goto L_1B4BC;
    case RC_ADDR(0x0001b4beu): goto L_1B4BE;
    case RC_ADDR(0x0001b4c0u): goto L_1B4C0;
    case RC_ADDR(0x0001b4c4u): goto L_1B4C4;
    case RC_ADDR(0x0001b4c8u): goto L_1B4C8;
    case RC_ADDR(0x0001b4cau): goto L_1B4CA;
    case RC_ADDR(0x0001b4ccu): goto L_1B4CC;
    case RC_ADDR(0x0001b4ceu): goto L_1B4CE;
    case RC_ADDR(0x0001b4d0u): goto L_1B4D0;
    case RC_ADDR(0x0001b4d2u): goto L_1B4D2;
    case RC_ADDR(0x0001b4d6u): goto L_1B4D6;
    case RC_ADDR(0x0001b4dau): goto L_1B4DA;
    case RC_ADDR(0x0001b4dcu): goto L_1B4DC;
    case RC_ADDR(0x0001b4deu): goto L_1B4DE;
    case RC_ADDR(0x0001b4e0u): goto L_1B4E0;
    case RC_ADDR(0x0001b4e4u): goto L_1B4E4;
    case RC_ADDR(0x0001b4e8u): goto L_1B4E8;
    case RC_ADDR(0x0001b4eau): goto L_1B4EA;
    case RC_ADDR(0x0001b4ecu): goto L_1B4EC;
    case RC_ADDR(0x0001b4f0u): goto L_1B4F0;
    case RC_ADDR(0x0001b4f2u): goto L_1B4F2;
    case RC_ADDR(0x0001b4f4u): goto L_1B4F4;
    case RC_ADDR(0x0001b4f8u): goto L_1B4F8;
    case RC_ADDR(0x0001b4fau): goto L_1B4FA;
    case RC_ADDR(0x0001b4feu): goto L_1B4FE;
    case RC_ADDR(0x0001b502u): goto L_1B502;
    case RC_ADDR(0x0001b506u): goto L_1B506;
    case RC_ADDR(0x0001b50au): goto L_1B50A;
    case RC_ADDR(0x0001b50eu): goto L_1B50E;
    case RC_ADDR(0x0001b510u): goto L_1B510;
    case RC_ADDR(0x0001b514u): goto L_1B514;
    case RC_ADDR(0x0001b516u): goto L_1B516;
    case RC_ADDR(0x0001b518u): goto L_1B518;
    case RC_ADDR(0x0001b51cu): goto L_1B51C;
    case RC_ADDR(0x0001b51eu): goto L_1B51E;
    case RC_ADDR(0x0001b522u): goto L_1B522;
    case RC_ADDR(0x0001b524u): goto L_1B524;
    case RC_ADDR(0x0001b528u): goto L_1B528;
    case RC_ADDR(0x0001b52au): goto L_1B52A;
    case RC_ADDR(0x0001b52eu): goto L_1B52E;
    case RC_ADDR(0x0001b532u): goto L_1B532;
    case RC_ADDR(0x0001b534u): goto L_1B534;
    case RC_ADDR(0x0001b538u): goto L_1B538;
    case RC_ADDR(0x0001b53au): goto L_1B53A;
    case RC_ADDR(0x0001b53cu): goto L_1B53C;
    case RC_ADDR(0x0001b540u): goto L_1B540;
    case RC_ADDR(0x0001b542u): goto L_1B542;
    case RC_ADDR(0x0001b546u): goto L_1B546;
    case RC_ADDR(0x0001b54au): goto L_1B54A;
    case RC_ADDR(0x0001b54cu): goto L_1B54C;
    case RC_ADDR(0x0001b54eu): goto L_1B54E;
    case RC_ADDR(0x0001b552u): goto L_1B552;
    case RC_ADDR(0x0001b554u): goto L_1B554;
    case RC_ADDR(0x0001b558u): goto L_1B558;
    case RC_ADDR(0x0001b55cu): goto L_1B55C;
    case RC_ADDR(0x0001b560u): goto L_1B560;
    case RC_ADDR(0x0001b564u): goto L_1B564;
    case RC_ADDR(0x0001b566u): goto L_1B566;
    case RC_ADDR(0x0001b56cu): goto L_1B56C;
    case RC_ADDR(0x0001b570u): goto L_1B570;
    case RC_ADDR(0x0001b572u): goto L_1B572;
    case RC_ADDR(0x0001b578u): goto L_1B578;
    case RC_ADDR(0x0001b57cu): goto L_1B57C;
    case RC_ADDR(0x0001b57eu): goto L_1B57E;
    case RC_ADDR(0x0001b584u): goto L_1B584;
    case RC_ADDR(0x0001b588u): goto L_1B588;
    case RC_ADDR(0x0001b58au): goto L_1B58A;
    case RC_ADDR(0x0001b590u): goto L_1B590;
    case RC_ADDR(0x0001b592u): goto L_1B592;
    case RC_ADDR(0x0001b594u): goto L_1B594;
    case RC_ADDR(0x0001b598u): goto L_1B598;
    case RC_ADDR(0x0001b59eu): goto L_1B59E;
    case RC_ADDR(0x0001b5a0u): goto L_1B5A0;
    case RC_ADDR(0x0001b5a2u): goto L_1B5A2;
    case RC_ADDR(0x0001b5a4u): goto L_1B5A4;
    case RC_ADDR(0x0001b5a8u): goto L_1B5A8;
    case RC_ADDR(0x0001b5aau): goto L_1B5AA;
    case RC_ADDR(0x0001b5acu): goto L_1B5AC;
    case RC_ADDR(0x0001b5aeu): goto L_1B5AE;
    case RC_ADDR(0x0001b5b2u): goto L_1B5B2;
    case RC_ADDR(0x0001b5b6u): goto L_1B5B6;
    case RC_ADDR(0x0001b5b8u): goto L_1B5B8;
    case RC_ADDR(0x0001b5bau): goto L_1B5BA;
    case RC_ADDR(0x0001b5bcu): goto L_1B5BC;
    case RC_ADDR(0x0001b5c0u): goto L_1B5C0;
    case RC_ADDR(0x0001b5c4u): goto L_1B5C4;
    case RC_ADDR(0x0001b5c6u): goto L_1B5C6;
    case RC_ADDR(0x0001b5c8u): goto L_1B5C8;
    case RC_ADDR(0x0001b5cau): goto L_1B5CA;
    case RC_ADDR(0x0001b5ceu): goto L_1B5CE;
    case RC_ADDR(0x0001b5d4u): goto L_1B5D4;
    case RC_ADDR(0x0001b5d6u): goto L_1B5D6;
    case RC_ADDR(0x0001b5d8u): goto L_1B5D8;
    case RC_ADDR(0x0001b5dau): goto L_1B5DA;
    case RC_ADDR(0x0001b5deu): goto L_1B5DE;
    case RC_ADDR(0x0001b5e0u): goto L_1B5E0;
    case RC_ADDR(0x0001b5e2u): goto L_1B5E2;
    case RC_ADDR(0x0001b5e6u): goto L_1B5E6;
    case RC_ADDR(0x0001b5eau): goto L_1B5EA;
    case RC_ADDR(0x0001b5ecu): goto L_1B5EC;
    case RC_ADDR(0x0001b5eeu): goto L_1B5EE;
    case RC_ADDR(0x0001b5f0u): goto L_1B5F0;
    case RC_ADDR(0x0001b5f4u): goto L_1B5F4;
    case RC_ADDR(0x0001b5fau): goto L_1B5FA;
    case RC_ADDR(0x0001b5fcu): goto L_1B5FC;
    case RC_ADDR(0x0001b5feu): goto L_1B5FE;
    case RC_ADDR(0x0001b602u): goto L_1B602;
    case RC_ADDR(0x0001b604u): goto L_1B604;
    case RC_ADDR(0x0001b606u): goto L_1B606;
    case RC_ADDR(0x0001b60au): goto L_1B60A;
    case RC_ADDR(0x0001b60eu): goto L_1B60E;
    case RC_ADDR(0x0001b610u): goto L_1B610;
    case RC_ADDR(0x0001b612u): goto L_1B612;
    case RC_ADDR(0x0001b616u): goto L_1B616;
    case RC_ADDR(0x0001b61au): goto L_1B61A;
    case RC_ADDR(0x0001b61eu): goto L_1B61E;
    case RC_ADDR(0x0001b620u): goto L_1B620;
    case RC_ADDR(0x0001b622u): goto L_1B622;
    case RC_ADDR(0x0001b626u): goto L_1B626;
    case RC_ADDR(0x0001b62au): goto L_1B62A;
    case RC_ADDR(0x0001b62eu): goto L_1B62E;
    case RC_ADDR(0x0001b630u): goto L_1B630;
    case RC_ADDR(0x0001b636u): goto L_1B636;
    case RC_ADDR(0x0001b63au): goto L_1B63A;
    case RC_ADDR(0x0001b640u): goto L_1B640;
    case RC_ADDR(0x0001b644u): goto L_1B644;
    case RC_ADDR(0x0001b64au): goto L_1B64A;
    case RC_ADDR(0x0001b64cu): goto L_1B64C;
    case RC_ADDR(0x0001b652u): goto L_1B652;
    case RC_ADDR(0x0001b654u): goto L_1B654;
    case RC_ADDR(0x0001b65au): goto L_1B65A;
    case RC_ADDR(0x0001b65cu): goto L_1B65C;
    case RC_ADDR(0x0001b660u): goto L_1B660;
    case RC_ADDR(0x0001b662u): goto L_1B662;
    case RC_ADDR(0x0001b668u): goto L_1B668;
    case RC_ADDR(0x0001b66eu): goto L_1B66E;
    case RC_ADDR(0x0001b674u): goto L_1B674;
    case RC_ADDR(0x0001b67au): goto L_1B67A;
    case RC_ADDR(0x0001b680u): goto L_1B680;
    case RC_ADDR(0x0001b686u): goto L_1B686;
    case RC_ADDR(0x0001b688u): goto L_1B688;
    case RC_ADDR(0x0001b68cu): goto L_1B68C;
    case RC_ADDR(0x0001b68eu): goto L_1B68E;
    case RC_ADDR(0x0001b694u): goto L_1B694;
    case RC_ADDR(0x0001b69au): goto L_1B69A;
    case RC_ADDR(0x0001b6a0u): goto L_1B6A0;
    case RC_ADDR(0x0001b6a6u): goto L_1B6A6;
    case RC_ADDR(0x0001b6acu): goto L_1B6AC;
    case RC_ADDR(0x0001b6b2u): goto L_1B6B2;
    case RC_ADDR(0x0001b6b6u): goto L_1B6B6;
    case RC_ADDR(0x0001b6bau): goto L_1B6BA;
    case RC_ADDR(0x0001b6bcu): goto L_1B6BC;
    case RC_ADDR(0x0001b6c0u): goto L_1B6C0;
    case RC_ADDR(0x0001b6c4u): goto L_1B6C4;
    case RC_ADDR(0x0001b6c6u): goto L_1B6C6;
    case RC_ADDR(0x0001b6ccu): goto L_1B6CC;
    case RC_ADDR(0x0001b6d2u): goto L_1B6D2;
    case RC_ADDR(0x0001b6d6u): goto L_1B6D6;
    case RC_ADDR(0x0001b6dau): goto L_1B6DA;
    case RC_ADDR(0x0001b6dcu): goto L_1B6DC;
    case RC_ADDR(0x0001b6e0u): goto L_1B6E0;
    case RC_ADDR(0x0001b6e4u): goto L_1B6E4;
    case RC_ADDR(0x0001b6e6u): goto L_1B6E6;
    case RC_ADDR(0x0001b6ecu): goto L_1B6EC;
    case RC_ADDR(0x0001b6f2u): goto L_1B6F2;
    case RC_ADDR(0x0001b6f6u): goto L_1B6F6;
    case RC_ADDR(0x0001b6f8u): goto L_1B6F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A8C2:
    /* 0001a8c2   4  link.w A5,#ffffffea */
    c->pc = RC_ADDR(0x0001a8c2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x16u;

L_1A8C6:
    /* 0001a8c6   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a8c6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A8CA:
    /* 0001a8ca   4  clr.w (26e4,A4) */
    c->pc = RC_ADDR(0x0001a8cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A8CE:
    /* 0001a8ce   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001a8ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8D2:
    /* 0001a8d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a8d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A8D4:
    /* 0001a8d4   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x0001a8d4u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_1A8D8:
    /* 0001a8d8   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a8d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8DC:
    /* 0001a8dc   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001a8dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8E0:
    /* 0001a8e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a8e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A8E2:
    /* 0001a8e2   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x0001a8e2u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_1A8E6:
    /* 0001a8e6   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001a8e6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8EA:
    /* 0001a8ea   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a8eau);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A8EC:
    /* 0001a8ec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A8EE:
    /* 0001a8ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a8eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A8F0:
    /* 0001a8f0   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001a8f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1A8F4:
    /* 0001a8f4   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001a8f4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8F8:
    /* 0001a8f8   2  ext.l D6 */
    c->pc = RC_ADDR(0x0001a8f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 6);

L_1A8FA:
    /* 0001a8fa   4  divs.w #30,D6 */
    c->pc = RC_ADDR(0x0001a8fau);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 6, t0);

L_1A8FE:
    /* 0001a8fe   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a8feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A900:
    /* 0001a900   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a900u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A902:
    /* 0001a902   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001a902u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1A906:
    /* 0001a906   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001a906u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A90A:
    /* 0001a90a   2  ext.l D7 */
    c->pc = RC_ADDR(0x0001a90au);
    rc_step(c, m, 4);
    rc_ext_l(c, 7);

L_1A90C:
    /* 0001a90c   4  divs.w #28,D7 */
    c->pc = RC_ADDR(0x0001a90cu);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 7, t0);

L_1A910:
    /* 0001a910   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a910u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A912:
    /* 0001a912   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a912u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A914:
    /* 0001a914   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001a914u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1A918:
    /* 0001a918   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a918u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A91E:
    /* 0001a91e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a91eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A920:
    /* 0001a920   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a920u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A922:
    /* 0001a922   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001a922u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1A926:
    /* 0001a926   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a926u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A92C:
    /* 0001a92c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a92cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A92E:
    /* 0001a92e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a92eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A930:
    /* 0001a930   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001a930u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1A934:
    /* 0001a934   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a934u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A938:
    /* 0001a938   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a938u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A93A:
    /* 0001a93a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a93au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1A93C:
    /* 0001a93c   4  lea (1dca,A4),A0 */
    c->pc = RC_ADDR(0x0001a93cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dcau);

L_1A940:
    /* 0001a940   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001a940u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A944:
    /* 0001a944   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x0001a944u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A946:
    /* 0001a946   4  bne 0001aa98 */
    c->pc = RC_ADDR(0x0001a946u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AA98;

L_1A94A:
    /* 0001a94a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a94au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A94C:
    /* 0001a94c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a94cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A94E:
    /* 0001a94e   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001a94eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1A952:
    /* 0001a952   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a952u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A956:
    /* 0001a956   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a956u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A958:
    /* 0001a958   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a958u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1A95A:
    /* 0001a95a   4  lea (1dea,A4),A0 */
    c->pc = RC_ADDR(0x0001a95au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1deau);

L_1A95E:
    /* 0001a95e   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001a95eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A962:
    /* 0001a962   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0001a962u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A964:
    /* 0001a964   4  bne 0001aa98 */
    c->pc = RC_ADDR(0x0001a964u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AA98;

L_1A968:
    /* 0001a968   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001a968u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A96C:
    /* 0001a96c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a96cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A96E:
    /* 0001a96e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a96eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A970:
    /* 0001a970   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001a970u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1A974:
    /* 0001a974   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a974u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A978:
    /* 0001a978   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001a978u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1A97C:
    /* 0001a97c   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001a97cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A980:
    /* 0001a980   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a980u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A982:
    /* 0001a982   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a982u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A984:
    /* 0001a984   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x0001a984u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1A986:
    /* 0001a986   4  lea (1e0a,A4),A0 */
    c->pc = RC_ADDR(0x0001a986u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e0au);

L_1A98A:
    /* 0001a98a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a98au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A98C:
    /* 0001a98c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a98cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A98E:
    /* 0001a98e   4  lea (2950,A4),A1 */
    c->pc = RC_ADDR(0x0001a98eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2950u);

L_1A992:
    /* 0001a992   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0001a992u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A996:
    /* 0001a996   4  cmp.w (0,A1,D0.w),D2 */
    c->pc = RC_ADDR(0x0001a996u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A99A:
    /* 0001a99a   2  bne 0001a9d0 */
    c->pc = RC_ADDR(0x0001a99au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A9D0;

L_1A99C:
    /* 0001a99c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a99cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A99E:
    /* 0001a99e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a99eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A9A0:
    /* 0001a9a0   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001a9a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1A9A4:
    /* 0001a9a4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a9a4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9A8:
    /* 0001a9a8   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001a9a8u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1A9AC:
    /* 0001a9ac   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001a9acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9B0:
    /* 0001a9b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a9b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A9B2:
    /* 0001a9b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a9b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A9B4:
    /* 0001a9b4   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x0001a9b4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1A9B6:
    /* 0001a9b6   4  lea (1e0a,A4),A0 */
    c->pc = RC_ADDR(0x0001a9b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e0au);

L_1A9BA:
    /* 0001a9ba   6  move.w (0,A0,D1.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001a9bau);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9C0:
    /* 0001a9c0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a9c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A9C2:
    /* 0001a9c2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a9c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A9C4:
    /* 0001a9c4   4  lea (2950,A4),A0 */
    c->pc = RC_ADDR(0x0001a9c4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2950u);

L_1A9C8:
    /* 0001a9c8   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a9c8u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9CE:
    /* 0001a9ce   2  bra 0001aa2c */
    c->pc = RC_ADDR(0x0001a9ceu);
    rc_step(c, m, 10);
    goto L_1AA2C;

L_1A9D0:
    /* 0001a9d0   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001a9d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A9D4:
    /* 0001a9d4   6  cmpi.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001a9d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1A9DA:
    /* 0001a9da   2  blt 0001a96c */
    c->pc = RC_ADDR(0x0001a9dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A96C; }

L_1A9DC:
    /* 0001a9dc   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x0001a9dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A9E0:
    /* 0001a9e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a9e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A9E2:
    /* 0001a9e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a9e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A9E4:
    /* 0001a9e4   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001a9e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1A9E8:
    /* 0001a9e8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a9e8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9EC:
    /* 0001a9ec   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001a9ecu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1A9F0:
    /* 0001a9f0   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0001a9f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A9F2:
    /* 0001a9f2   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001a9f2u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9F6:
    /* 0001a9f6   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001a9f6u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001a9fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1A9FA:
    /* 0001a9fa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a9fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A9FC:
    /* 0001a9fc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a9fcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A9FE:
    /* 0001a9fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a9feu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA00:
    /* 0001aa00   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x0001aa00u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA02:
    /* 0001aa02   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x0001aa02u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1AA04:
    /* 0001aa04   4  lea (1e0a,A4),A0 */
    c->pc = RC_ADDR(0x0001aa04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e0au);

L_1AA08:
    /* 0001aa08   6  move.w (0,A0,D1.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001aa08u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA0E:
    /* 0001aa0e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa0eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA10:
    /* 0001aa10   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa10u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA12:
    /* 0001aa12   4  lea (2938,A4),A0 */
    c->pc = RC_ADDR(0x0001aa12u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2938u);

L_1AA16:
    /* 0001aa16   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001aa16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA1A:
    /* 0001aa1a   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001aa1au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AA1E:
    /* 0001aa1e   2  bne 0001aa2c */
    c->pc = RC_ADDR(0x0001aa1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AA2C;

L_1AA20:
    /* 0001aa20   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001aa20u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AA24:
    /* 0001aa24   6  cmpi.w #8,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001aa24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1AA2A:
    /* 0001aa2a   2  blt 0001a9e0 */
    c->pc = RC_ADDR(0x0001aa2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A9E0; }

L_1AA2C:
    /* 0001aa2c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa2cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA2E:
    /* 0001aa2e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA30:
    /* 0001aa30   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001aa30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1AA34:
    /* 0001aa34   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001aa34u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA36:
    /* 0001aa36   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aa36u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AA38:
    /* 0001aa38   4  lea (2938,A4),A1 */
    c->pc = RC_ADDR(0x0001aa38u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2938u);

L_1AA3C:
    /* 0001aa3c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001aa3cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA42:
    /* 0001aa42   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa42u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA44:
    /* 0001aa44   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa44u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA46:
    /* 0001aa46   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001aa46u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1AA4A:
    /* 0001aa4a   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aa4au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA50:
    /* 0001aa50   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa50u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA52:
    /* 0001aa52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA54:
    /* 0001aa54   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001aa54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1AA58:
    /* 0001aa58   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001aa58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA5C:
    /* 0001aa5c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aa5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AA5E:
    /* 0001aa5e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aa5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AA60:
    /* 0001aa60   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001aa60u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1AA64:
    /* 0001aa64   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001aa64u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA68:
    /* 0001aa68   4  muls.w #30,D2 */
    c->pc = RC_ADDR(0x0001aa68u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 2, t0);

L_1AA6C:
    /* 0001aa6c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aa6cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA70:
    /* 0001aa70   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa70u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA72:
    /* 0001aa72   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa72u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA74:
    /* 0001aa74   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001aa74u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1AA78:
    /* 0001aa78   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001aa78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA7C:
    /* 0001aa7c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aa7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AA7E:
    /* 0001aa7e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aa7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AA80:
    /* 0001aa80   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001aa80u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1AA84:
    /* 0001aa84   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001aa84u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA88:
    /* 0001aa88   4  muls.w #28,D2 */
    c->pc = RC_ADDR(0x0001aa88u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 2, t0);

L_1AA8C:
    /* 0001aa8c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aa8cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA90:
    /* 0001aa90   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0001aa90u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA92:
    /* 0001aa92   4  jsr (0001bf14) */
    c->pc = RC_ADDR(0x0001aa92u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001aa96u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf14u);
    return;

L_1AA96:
    /* 0001aa96   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001aa96u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1AA98:
    /* 0001aa98   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aa98u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA9A:
    /* 0001aa9a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aa9au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AA9C:
    /* 0001aa9c   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001aa9cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AAA0:
    /* 0001aaa0   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001aaa0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AAA2:
    /* 0001aaa2   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001aaa2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAA6:
    /* 0001aaa6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001aaa6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AAA8:
    /* 0001aaa8   4  bra 0001b272 */
    c->pc = RC_ADDR(0x0001aaa8u);
    rc_step(c, m, 10);
    goto L_1B272;

L_1AAAC:
    /* 0001aaac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001aaacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAB0:
    /* 0001aab0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001aab0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AAB2:
    /* 0001aab2   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x0001aab2u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_1AAB6:
    /* 0001aab6   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001aab6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AABA:
    /* 0001aaba   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001aabau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AABE:
    /* 0001aabe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001aabeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AAC0:
    /* 0001aac0   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x0001aac0u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_1AAC4:
    /* 0001aac4   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001aac4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAC8:
    /* 0001aac8   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001aac8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AACC:
    /* 0001aacc   2  bgt 0001aade */
    c->pc = RC_ADDR(0x0001aaccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1AADE;

L_1AACE:
    /* 0001aace   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001aaceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAD2:
    /* 0001aad2   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001aad2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AAD6:
    /* 0001aad6   2  bgt 0001aade */
    c->pc = RC_ADDR(0x0001aad6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1AADE;

L_1AAD8:
    /* 0001aad8   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001aad8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AADC:
    /* 0001aadc   2  beq 0001ab20 */
    c->pc = RC_ADDR(0x0001aadcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AB20;

L_1AADE:
    /* 0001aade   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001aadeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AAE2:
    /* 0001aae2   2  blt 0001aaf4 */
    c->pc = RC_ADDR(0x0001aae2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AAF4;

L_1AAE4:
    /* 0001aae4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001aae4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAE8:
    /* 0001aae8   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001aae8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AAEC:
    /* 0001aaec   2  blt 0001aaf4 */
    c->pc = RC_ADDR(0x0001aaecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AAF4;

L_1AAEE:
    /* 0001aaee   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001aaeeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AAF2:
    /* 0001aaf2   2  beq 0001ab20 */
    c->pc = RC_ADDR(0x0001aaf2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AB20;

L_1AAF4:
    /* 0001aaf4   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001aaf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AAF8:
    /* 0001aaf8   2  bgt 0001ab0a */
    c->pc = RC_ADDR(0x0001aaf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1AB0A;

L_1AAFA:
    /* 0001aafa   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001aafau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AAFE:
    /* 0001aafe   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001aafeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB02:
    /* 0001ab02   2  bgt 0001ab0a */
    c->pc = RC_ADDR(0x0001ab02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1AB0A;

L_1AB04:
    /* 0001ab04   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001ab04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB08:
    /* 0001ab08   2  beq 0001ab20 */
    c->pc = RC_ADDR(0x0001ab08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AB20;

L_1AB0A:
    /* 0001ab0a   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001ab0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB0E:
    /* 0001ab0e   2  blt 0001ab4c */
    c->pc = RC_ADDR(0x0001ab0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AB4C;

L_1AB10:
    /* 0001ab10   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001ab10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB14:
    /* 0001ab14   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ab14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB18:
    /* 0001ab18   2  blt 0001ab4c */
    c->pc = RC_ADDR(0x0001ab18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AB4C;

L_1AB1A:
    /* 0001ab1a   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001ab1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB1E:
    /* 0001ab1e   2  bne 0001ab4c */
    c->pc = RC_ADDR(0x0001ab1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AB4C;

L_1AB20:
    /* 0001ab20   4  tst.w (2970,A4) */
    c->pc = RC_ADDR(0x0001ab20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2970u));
    rc_set_nzvc(c, t0, RC_W);

L_1AB24:
    /* 0001ab24   2  beq 0001ab4c */
    c->pc = RC_ADDR(0x0001ab24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AB4C;

L_1AB26:
    /* 0001ab26   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ab26u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB28:
    /* 0001ab28   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ab28u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB2A:
    /* 0001ab2a   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001ab2au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AB2E:
    /* 0001ab2e   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ab2eu);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB34:
    /* 0001ab34   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ab34u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB36:
    /* 0001ab36   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ab36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB38:
    /* 0001ab38   4  lea (26f8,A4),A0 */
    c->pc = RC_ADDR(0x0001ab38u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26f8u);

L_1AB3C:
    /* 0001ab3c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ab3cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1AB40:
    /* 0001ab40   2  beq 0001ab48 */
    c->pc = RC_ADDR(0x0001ab40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AB48;

L_1AB42:
    /* 0001ab42   4  jsr (0001cdea) */
    c->pc = RC_ADDR(0x0001ab42u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ab46u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cdeau);
    return;

L_1AB46:
    /* 0001ab46   2  bra 0001ab4c */
    c->pc = RC_ADDR(0x0001ab46u);
    rc_step(c, m, 10);
    goto L_1AB4C;

L_1AB48:
    /* 0001ab48   4  jsr (0001ce3c) */
    c->pc = RC_ADDR(0x0001ab48u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ab4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ce3cu);
    return;

L_1AB4C:
    /* 0001ab4c   4  jsr (00020c8e) */
    c->pc = RC_ADDR(0x0001ab4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ab50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020c8eu);
    return;

L_1AB50:
    /* 0001ab50   4  btst #0,D0 */
    c->pc = RC_ADDR(0x0001ab50u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1AB54:
    /* 0001ab54   4  bne 0001acb0 */
    c->pc = RC_ADDR(0x0001ab54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ACB0;

L_1AB58:
    /* 0001ab58   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x0001ab58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_1AB5C:
    /* 0001ab5c   2  bne 0001ab66 */
    c->pc = RC_ADDR(0x0001ab5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AB66;

L_1AB5E:
    /* 0001ab5e   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001ab5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1AB62:
    /* 0001ab62   4  bne 0001acb0 */
    c->pc = RC_ADDR(0x0001ab62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ACB0;

L_1AB66:
    /* 0001ab66   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001ab66u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AB6A:
    /* 0001ab6a   4  bra 0001ac98 */
    c->pc = RC_ADDR(0x0001ab6au);
    rc_step(c, m, 10);
    goto L_1AC98;

L_1AB6E:
    /* 0001ab6e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ab6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB72:
    /* 0001ab72   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ab72u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AB74:
    /* 0001ab74   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ab74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB76:
    /* 0001ab76   4  lea (1f22,A4),A0 */
    c->pc = RC_ADDR(0x0001ab76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f22u);

L_1AB7A:
    /* 0001ab7a   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x0001ab7au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB7C:
    /* 0001ab7c   2  asl.w #4,D1 */
    c->pc = RC_ADDR(0x0001ab7cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1AB7E:
    /* 0001ab7e   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001ab7eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1AB80:
    /* 0001ab80   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ab80u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB84:
    /* 0001ab84   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0001ab84u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB86:
    /* 0001ab86   4  bne 0001ac94 */
    c->pc = RC_ADDR(0x0001ab86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AC94;

L_1AB8A:
    /* 0001ab8a   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ab8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AB8E:
    /* 0001ab8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ab8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AB90:
    /* 0001ab90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ab90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB92:
    /* 0001ab92   4  lea (1f22,A4),A0 */
    c->pc = RC_ADDR(0x0001ab92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f22u);

L_1AB96:
    /* 0001ab96   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ab96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB98:
    /* 0001ab98   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ab98u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AB9A:
    /* 0001ab9a   4  lea (2818,A4),A1 */
    c->pc = RC_ADDR(0x0001ab9au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2818u);

L_1AB9E:
    /* 0001ab9e   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ab9eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABA2:
    /* 0001aba2   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001aba2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ABA6:
    /* 0001aba6   4  beq 0001ac94 */
    c->pc = RC_ADDR(0x0001aba6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AC94;

L_1ABAA:
    /* 0001abaa   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001abaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABAE:
    /* 0001abae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1ABB0:
    /* 0001abb0   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001abb0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1ABB2:
    /* 0001abb2   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0001abb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1ABB4:
    /* 0001abb4   4  and.l (296c,A4),D1 */
    c->pc = RC_ADDR(0x0001abb4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x296cu));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1ABB8:
    /* 0001abb8   4  bne 0001ac94 */
    c->pc = RC_ADDR(0x0001abb8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AC94;

L_1ABBC:
    /* 0001abbc   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001abbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABC0:
    /* 0001abc0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abc0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1ABC2:
    /* 0001abc2   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001abc2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1ABC4:
    /* 0001abc4   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0001abc4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1ABC6:
    /* 0001abc6   4  or.l D1,(296c,A4) */
    c->pc = RC_ADDR(0x0001abc6u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x296cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1ABCA:
    /* 0001abca   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001abcau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ABCC:
    /* 0001abcc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001abccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ABCE:
    /* 0001abce   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001abceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1ABD2:
    /* 0001abd2   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001abd2u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABD8:
    /* 0001abd8   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001abd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABDC:
    /* 0001abdc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abdcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1ABDE:
    /* 0001abde   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001abdeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ABE0:
    /* 0001abe0   4  lea (1f22,A4),A0 */
    c->pc = RC_ADDR(0x0001abe0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f22u);

L_1ABE4:
    /* 0001abe4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001abe4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ABE6:
    /* 0001abe6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001abe6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ABE8:
    /* 0001abe8   4  lea (2818,A4),A1 */
    c->pc = RC_ADDR(0x0001abe8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2818u);

L_1ABEC:
    /* 0001abec   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001abecu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABF2:
    /* 0001abf2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001abf2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ABF4:
    /* 0001abf4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001abf4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ABF6:
    /* 0001abf6   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001abf6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1ABFA:
    /* 0001abfa   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001abfau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ABFC:
    /* 0001abfc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001abfcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ABFE:
    /* 0001abfe   4  lea (2740,A4),A1 */
    c->pc = RC_ADDR(0x0001abfeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2740u);

L_1AC02:
    /* 0001ac02   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac02u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC08:
    /* 0001ac08   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ac08u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC0A:
    /* 0001ac0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC0C:
    /* 0001ac0c   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001ac0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1AC10:
    /* 0001ac10   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ac10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC12:
    /* 0001ac12   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac12u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC14:
    /* 0001ac14   4  lea (2758,A4),A1 */
    c->pc = RC_ADDR(0x0001ac14u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2758u);

L_1AC18:
    /* 0001ac18   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac18u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC1E:
    /* 0001ac1e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ac1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC22:
    /* 0001ac22   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ac22u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AC26:
    /* 0001ac26   4  lea (1f50,A4),A0 */
    c->pc = RC_ADDR(0x0001ac26u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f50u);

L_1AC2A:
    /* 0001ac2a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ac2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC2C:
    /* 0001ac2c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC2E:
    /* 0001ac2e   4  lea (27a0,A4),A1 */
    c->pc = RC_ADDR(0x0001ac2eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27a0u);

L_1AC32:
    /* 0001ac32   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac32u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC38:
    /* 0001ac38   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ac38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC3C:
    /* 0001ac3c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ac3cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AC40:
    /* 0001ac40   4  lea (2178,A4),A0 */
    c->pc = RC_ADDR(0x0001ac40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2178u);

L_1AC44:
    /* 0001ac44   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ac44u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC46:
    /* 0001ac46   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac46u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC48:
    /* 0001ac48   4  lea (27b8,A4),A1 */
    c->pc = RC_ADDR(0x0001ac48u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27b8u);

L_1AC4C:
    /* 0001ac4c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac4cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC52:
    /* 0001ac52   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ac52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC56:
    /* 0001ac56   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ac56u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AC5A:
    /* 0001ac5a   4  lea (23a0,A4),A0 */
    c->pc = RC_ADDR(0x0001ac5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x23a0u);

L_1AC5E:
    /* 0001ac5e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ac5eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC60:
    /* 0001ac60   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac60u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC62:
    /* 0001ac62   4  lea (2860,A4),A1 */
    c->pc = RC_ADDR(0x0001ac62u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2860u);

L_1AC66:
    /* 0001ac66   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac66u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC6C:
    /* 0001ac6c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ac6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC6E:
    /* 0001ac6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC70:
    /* 0001ac70   4  lea (2878,A4),A0 */
    c->pc = RC_ADDR(0x0001ac70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2878u);

L_1AC74:
    /* 0001ac74   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ac74u);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC7A:
    /* 0001ac7a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ac7au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC7C:
    /* 0001ac7c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC7E:
    /* 0001ac7e   4  lea (2830,A4),A0 */
    c->pc = RC_ADDR(0x0001ac7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2830u);

L_1AC82:
    /* 0001ac82   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ac82u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC88:
    /* 0001ac88   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ac88u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AC8A:
    /* 0001ac8a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC8C:
    /* 0001ac8c   4  lea (2848,A4),A0 */
    c->pc = RC_ADDR(0x0001ac8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2848u);

L_1AC90:
    /* 0001ac90   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ac90u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AC94:
    /* 0001ac94   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001ac94u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AC98:
    /* 0001ac98   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001ac98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC9C:
    /* 0001ac9c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ac9cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AC9E:
    /* 0001ac9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACA0:
    /* 0001aca0   4  lea (ffffcdd0,A4),A0 */
    c->pc = RC_ADDR(0x0001aca0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3230u);

L_1ACA4:
    /* 0001aca4   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001aca4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACA8:
    /* 0001aca8   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001aca8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ACAC:
    /* 0001acac   4  blt 0001ab6e */
    c->pc = RC_ADDR(0x0001acacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AB6E; }

L_1ACB0:
    /* 0001acb0   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001acb0u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1ACB4:
    /* 0001acb4   6  cmpi.w #2,(e74,A4) */
    c->pc = RC_ADDR(0x0001acb4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1ACBA:
    /* 0001acba   4  bge 0001ad94 */
    c->pc = RC_ADDR(0x0001acbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1AD94;

L_1ACBE:
    /* 0001acbe   4  tst.w (26d8,A4) */
    c->pc = RC_ADDR(0x0001acbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_set_nzvc(c, t0, RC_W);

L_1ACC2:
    /* 0001acc2   4  blt 0001ad94 */
    c->pc = RC_ADDR(0x0001acc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AD94;

L_1ACC6:
    /* 0001acc6   6  move.w (26d8,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001acc6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACCC:
    /* 0001accc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001acccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ACCE:
    /* 0001acce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001acceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACD0:
    /* 0001acd0   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001acd0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1ACD4:
    /* 0001acd4   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001acd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACD8:
    /* 0001acd8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001acd8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1ACDA:
    /* 0001acda   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001acdau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ACDC:
    /* 0001acdc   4  lea (1e6a,A4),A1 */
    c->pc = RC_ADDR(0x0001acdcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e6au);

L_1ACE0:
    /* 0001ace0   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ace0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACE4:
    /* 0001ace4   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001ace4u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ACE8:
    /* 0001ace8   4  blt 0001ad94 */
    c->pc = RC_ADDR(0x0001ace8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AD94;

L_1ACEC:
    /* 0001acec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001acecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ACEE:
    /* 0001acee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aceeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACF0:
    /* 0001acf0   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001acf0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1ACF4:
    /* 0001acf4   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001acf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACF8:
    /* 0001acf8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001acf8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1ACFA:
    /* 0001acfa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001acfau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ACFC:
    /* 0001acfc   4  lea (1ec6,A4),A1 */
    c->pc = RC_ADDR(0x0001acfcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ec6u);

L_1AD00:
    /* 0001ad00   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ad00u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD04:
    /* 0001ad04   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001ad04u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AD08:
    /* 0001ad08   4  bge 0001ad94 */
    c->pc = RC_ADDR(0x0001ad08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1AD94;

L_1AD0C:
    /* 0001ad0c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ad0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD0E:
    /* 0001ad0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ad0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD10:
    /* 0001ad10   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001ad10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1AD14:
    /* 0001ad14   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001ad14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD18:
    /* 0001ad18   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad18u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AD1A:
    /* 0001ad1a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad1au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD1C:
    /* 0001ad1c   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x0001ad1cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_1AD20:
    /* 0001ad20   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ad20u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD24:
    /* 0001ad24   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001ad24u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AD28:
    /* 0001ad28   2  blt 0001ad94 */
    c->pc = RC_ADDR(0x0001ad28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1AD94;

L_1AD2A:
    /* 0001ad2a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ad2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD2C:
    /* 0001ad2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ad2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD2E:
    /* 0001ad2e   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001ad2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1AD32:
    /* 0001ad32   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001ad32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD36:
    /* 0001ad36   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AD38:
    /* 0001ad38   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad38u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD3A:
    /* 0001ad3a   4  lea (1ef4,A4),A1 */
    c->pc = RC_ADDR(0x0001ad3au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef4u);

L_1AD3E:
    /* 0001ad3e   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001ad3eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD42:
    /* 0001ad42   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001ad42u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AD46:
    /* 0001ad46   2  bge 0001ad94 */
    c->pc = RC_ADDR(0x0001ad46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1AD94;

L_1AD48:
    /* 0001ad48   4  tst.w (2970,A4) */
    c->pc = RC_ADDR(0x0001ad48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2970u));
    rc_set_nzvc(c, t0, RC_W);

L_1AD4C:
    /* 0001ad4c   2  beq 0001ad94 */
    c->pc = RC_ADDR(0x0001ad4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AD94;

L_1AD4E:
    /* 0001ad4e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ad4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD52:
    /* 0001ad52   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ad52u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AD56:
    /* 0001ad56   4  lea (1f52,A4),A0 */
    c->pc = RC_ADDR(0x0001ad56u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f52u);

L_1AD5A:
    /* 0001ad5a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ad5au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD5C:
    /* 0001ad5c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad5cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD5E:
    /* 0001ad5e   4  lea (27a0,A4),A1 */
    c->pc = RC_ADDR(0x0001ad5eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27a0u);

L_1AD62:
    /* 0001ad62   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad62u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD68:
    /* 0001ad68   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ad68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD6C:
    /* 0001ad6c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ad6cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AD70:
    /* 0001ad70   4  lea (217a,A4),A0 */
    c->pc = RC_ADDR(0x0001ad70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x217au);

L_1AD74:
    /* 0001ad74   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ad74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD76:
    /* 0001ad76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad76u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD78:
    /* 0001ad78   4  lea (27b8,A4),A1 */
    c->pc = RC_ADDR(0x0001ad78u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27b8u);

L_1AD7C:
    /* 0001ad7c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad7cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD82:
    /* 0001ad82   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ad82u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD84:
    /* 0001ad84   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ad84u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD86:
    /* 0001ad86   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001ad86u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AD8A:
    /* 0001ad8a   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ad8au);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD90:
    /* 0001ad90   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001ad90u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1AD94:
    /* 0001ad94   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ad94u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AD96:
    /* 0001ad96   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ad96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD98:
    /* 0001ad98   4  lea (2878,A4),A0 */
    c->pc = RC_ADDR(0x0001ad98u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2878u);

L_1AD9C:
    /* 0001ad9c   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ad9cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1ADA0:
    /* 0001ada0   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ada0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1ADA4:
    /* 0001ada4   2  beq 0001adfc */
    c->pc = RC_ADDR(0x0001ada4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ADFC;

L_1ADA6:
    /* 0001ada6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ada6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADA8:
    /* 0001ada8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ada8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ADAA:
    /* 0001adaa   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001adaau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1ADAE:
    /* 0001adae   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001adaeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADB0:
    /* 0001adb0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001adb0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ADB2:
    /* 0001adb2   4  lea (27a0,A4),A1 */
    c->pc = RC_ADDR(0x0001adb2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27a0u);

L_1ADB6:
    /* 0001adb6   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001adb6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADBA:
    /* 0001adba   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001adbau);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ADBE:
    /* 0001adbe   4  bne 0001af16 */
    c->pc = RC_ADDR(0x0001adbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AF16;

L_1ADC2:
    /* 0001adc2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001adc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADC4:
    /* 0001adc4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001adc4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ADC6:
    /* 0001adc6   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001adc6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1ADCA:
    /* 0001adca   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001adcau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADCC:
    /* 0001adcc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001adccu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ADCE:
    /* 0001adce   4  lea (27b8,A4),A1 */
    c->pc = RC_ADDR(0x0001adceu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27b8u);

L_1ADD2:
    /* 0001add2   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001add2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADD6:
    /* 0001add6   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001add6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ADDA:
    /* 0001adda   4  bne 0001af16 */
    c->pc = RC_ADDR(0x0001addau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1AF16;

L_1ADDE:
    /* 0001adde   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001addeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADE0:
    /* 0001ade0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ade0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ADE2:
    /* 0001ade2   4  lea (2860,A4),A0 */
    c->pc = RC_ADDR(0x0001ade2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2860u);

L_1ADE6:
    /* 0001ade6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ade6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1ADEA:
    /* 0001adea   2  beq 0001adfc */
    c->pc = RC_ADDR(0x0001adeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ADFC;

L_1ADEC:
    /* 0001adec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001adecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADEE:
    /* 0001adee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001adeeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ADF0:
    /* 0001adf0   4  lea (2860,A4),A0 */
    c->pc = RC_ADDR(0x0001adf0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2860u);

L_1ADF4:
    /* 0001adf4   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001adf4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1ADF8:
    /* 0001adf8   4  bra 0001af16 */
    c->pc = RC_ADDR(0x0001adf8u);
    rc_step(c, m, 10);
    goto L_1AF16;

L_1ADFC:
    /* 0001adfc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001adfcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ADFE:
    /* 0001adfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001adfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE00:
    /* 0001ae00   4  lea (2878,A4),A0 */
    c->pc = RC_ADDR(0x0001ae00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2878u);

L_1AE04:
    /* 0001ae04   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ae04u);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE0A:
    /* 0001ae0a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ae0au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AE0C:
    /* 0001ae0c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae0cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE0E:
    /* 0001ae0e   4  lea (2848,A4),A0 */
    c->pc = RC_ADDR(0x0001ae0eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2848u);

L_1AE12:
    /* 0001ae12   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001ae12u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE16:
    /* 0001ae16   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ae16u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AE1A:
    /* 0001ae1a   4  move.w D1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001ae1au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE1E:
    /* 0001ae1e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ae1eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AE20:
    /* 0001ae20   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae20u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE22:
    /* 0001ae22   4  lea (2830,A4),A0 */
    c->pc = RC_ADDR(0x0001ae22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2830u);

L_1AE26:
    /* 0001ae26   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001ae26u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE2C:
    /* 0001ae2c   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ae2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE30:
    /* 0001ae30   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ae30u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AE34:
    /* 0001ae34   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001ae34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE38:
    /* 0001ae38   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AE3A:
    /* 0001ae3a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae3au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE3C:
    /* 0001ae3c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ae3cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AE3E:
    /* 0001ae3e   4  lea (1f50,A4),A0 */
    c->pc = RC_ADDR(0x0001ae3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f50u);

L_1AE42:
    /* 0001ae42   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001ae42u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE46:
    /* 0001ae46   2  beq 0001ae9e */
    c->pc = RC_ADDR(0x0001ae46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1AE9E;

L_1AE48:
    /* 0001ae48   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ae48u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AE4A:
    /* 0001ae4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE4C:
    /* 0001ae4c   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001ae4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1AE50:
    /* 0001ae50   4  move.w D6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ae50u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 6, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE54:
    /* 0001ae54   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ae54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE58:
    /* 0001ae58   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ae58u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AE5C:
    /* 0001ae5c   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001ae5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE60:
    /* 0001ae60   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AE62:
    /* 0001ae62   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae62u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE64:
    /* 0001ae64   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ae64u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AE66:
    /* 0001ae66   4  lea (2178,A4),A0 */
    c->pc = RC_ADDR(0x0001ae66u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2178u);

L_1AE6A:
    /* 0001ae6a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ae6au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AE6C:
    /* 0001ae6c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE6E:
    /* 0001ae6e   4  lea (27b8,A4),A1 */
    c->pc = RC_ADDR(0x0001ae6eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27b8u);

L_1AE72:
    /* 0001ae72   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae72u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE78:
    /* 0001ae78   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ae78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE7C:
    /* 0001ae7c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ae7cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AE80:
    /* 0001ae80   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001ae80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE84:
    /* 0001ae84   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae84u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1AE86:
    /* 0001ae86   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae86u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE88:
    /* 0001ae88   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ae88u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AE8A:
    /* 0001ae8a   4  lea (23a0,A4),A0 */
    c->pc = RC_ADDR(0x0001ae8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x23a0u);

L_1AE8E:
    /* 0001ae8e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001ae8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AE90:
    /* 0001ae90   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae90u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE92:
    /* 0001ae92   4  lea (2860,A4),A1 */
    c->pc = RC_ADDR(0x0001ae92u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2860u);

L_1AE96:
    /* 0001ae96   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae96u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE9C:
    /* 0001ae9c   2  bra 0001af16 */
    c->pc = RC_ADDR(0x0001ae9cu);
    rc_step(c, m, 10);
    goto L_1AF16;

L_1AE9E:
    /* 0001ae9e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001ae9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AEA0:
    /* 0001aea0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aea0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AEA2:
    /* 0001aea2   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001aea2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AEA6:
    /* 0001aea6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aea6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AEAA:
    /* 0001aeaa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aeaau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AEAC:
    /* 0001aeac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aeacu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AEAE:
    /* 0001aeae   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001aeaeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1AEB2:
    /* 0001aeb2   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001aeb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AEB4:
    /* 0001aeb4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aeb4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AEB6:
    /* 0001aeb6   4  lea (2920,A4),A1 */
    c->pc = RC_ADDR(0x0001aeb6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2920u);

L_1AEBA:
    /* 0001aeba   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001aebau);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEBE:
    /* 0001aebe   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001aebeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1AEC0:
    /* 0001aec0   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001aec0u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AEC2:
    /* 0001aec2   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001aec2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1AEC6:
    /* 0001aec6   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0001aec6u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AECA:
    /* 0001aeca   4  muls.w #30,D1 */
    c->pc = RC_ADDR(0x0001aecau);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 1, t0);

L_1AECE:
    /* 0001aece   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aeceu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AED2:
    /* 0001aed2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aed2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AED4:
    /* 0001aed4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aed4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AED6:
    /* 0001aed6   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001aed6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1AEDA:
    /* 0001aeda   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001aedau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AEDC:
    /* 0001aedc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aedcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AEDE:
    /* 0001aede   4  lea (2920,A4),A1 */
    c->pc = RC_ADDR(0x0001aedeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2920u);

L_1AEE2:
    /* 0001aee2   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001aee2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEE6:
    /* 0001aee6   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001aee6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1AEE8:
    /* 0001aee8   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001aee8u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AEEA:
    /* 0001aeea   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001aeeau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1AEEE:
    /* 0001aeee   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0001aeeeu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEF2:
    /* 0001aef2   4  muls.w #28,D1 */
    c->pc = RC_ADDR(0x0001aef2u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 1, t0);

L_1AEF6:
    /* 0001aef6   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001aef6u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEFA:
    /* 0001aefa   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0001aefau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AEFC:
    /* 0001aefc   4  jsr (0001bf14) */
    c->pc = RC_ADDR(0x0001aefcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001af00u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf14u);
    return;

L_1AF00:
    /* 0001af00   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001af00u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1AF02:
    /* 0001af02   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001af02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF06:
    /* 0001af06   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af06u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AF08:
    /* 0001af08   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001af08u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1AF0A:
    /* 0001af0a   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0001af0au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1AF0C:
    /* 0001af0c   6  eori.l #ffffffff,D1 */
    c->pc = RC_ADDR(0x0001af0cu);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 ^ 0xffffffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1AF12:
    /* 0001af12   4  and.l D1,(296c,A4) */
    c->pc = RC_ADDR(0x0001af12u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x296cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 & rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1AF16:
    /* 0001af16   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001af16u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1AF1A:
    /* 0001af1a   4  addq.w #1,(26e4,A4) */
    c->pc = RC_ADDR(0x0001af1au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26e4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AF1E:
    /* 0001af1e   4  tst.w (26d8,A4) */
    c->pc = RC_ADDR(0x0001af1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_set_nzvc(c, t0, RC_W);

L_1AF22:
    /* 0001af22   2  bge 0001af32 */
    c->pc = RC_ADDR(0x0001af22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1AF32;

L_1AF24:
    /* 0001af24   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001af24u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF26:
    /* 0001af26   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af26u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF28:
    /* 0001af28   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001af28u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AF2C:
    /* 0001af2c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001af2cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF32:
    /* 0001af32   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001af32u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1AF36:
    /* 0001af36   4  tst.w (26d8,A4) */
    c->pc = RC_ADDR(0x0001af36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_set_nzvc(c, t0, RC_W);

L_1AF3A:
    /* 0001af3a   4  blt 0001b012 */
    c->pc = RC_ADDR(0x0001af3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B012;

L_1AF3E:
    /* 0001af3e   6  move.w (26d8,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001af3eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF44:
    /* 0001af44   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001af44u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF46:
    /* 0001af46   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af46u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF48:
    /* 0001af48   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001af48u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1AF4C:
    /* 0001af4c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001af4cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF52:
    /* 0001af52   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001af52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF56:
    /* 0001af56   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af56u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1AF58:
    /* 0001af58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af58u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF5A:
    /* 0001af5a   4  lea (1f22,A4),A0 */
    c->pc = RC_ADDR(0x0001af5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f22u);

L_1AF5E:
    /* 0001af5e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001af5eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF60:
    /* 0001af60   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af60u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF62:
    /* 0001af62   4  lea (2818,A4),A1 */
    c->pc = RC_ADDR(0x0001af62u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2818u);

L_1AF66:
    /* 0001af66   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af66u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF6C:
    /* 0001af6c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001af6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF6E:
    /* 0001af6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF70:
    /* 0001af70   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001af70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1AF74:
    /* 0001af74   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001af74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF76:
    /* 0001af76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af76u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF78:
    /* 0001af78   4  lea (2740,A4),A1 */
    c->pc = RC_ADDR(0x0001af78u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2740u);

L_1AF7C:
    /* 0001af7c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af7cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF82:
    /* 0001af82   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001af82u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF84:
    /* 0001af84   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af84u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF86:
    /* 0001af86   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001af86u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1AF8A:
    /* 0001af8a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001af8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AF8C:
    /* 0001af8c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF8E:
    /* 0001af8e   4  lea (2758,A4),A1 */
    c->pc = RC_ADDR(0x0001af8eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2758u);

L_1AF92:
    /* 0001af92   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af92u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF98:
    /* 0001af98   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001af98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF9C:
    /* 0001af9c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001af9cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AFA0:
    /* 0001afa0   4  lea (1f50,A4),A0 */
    c->pc = RC_ADDR(0x0001afa0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f50u);

L_1AFA4:
    /* 0001afa4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001afa4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AFA6:
    /* 0001afa6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001afa6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFA8:
    /* 0001afa8   4  lea (27a0,A4),A1 */
    c->pc = RC_ADDR(0x0001afa8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27a0u);

L_1AFAC:
    /* 0001afac   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afacu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFB2:
    /* 0001afb2   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001afb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFB6:
    /* 0001afb6   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001afb6u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AFBA:
    /* 0001afba   4  lea (2178,A4),A0 */
    c->pc = RC_ADDR(0x0001afbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2178u);

L_1AFBE:
    /* 0001afbe   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001afbeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AFC0:
    /* 0001afc0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001afc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFC2:
    /* 0001afc2   4  lea (27b8,A4),A1 */
    c->pc = RC_ADDR(0x0001afc2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27b8u);

L_1AFC6:
    /* 0001afc6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afc6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFCC:
    /* 0001afcc   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001afccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFD0:
    /* 0001afd0   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001afd0u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AFD4:
    /* 0001afd4   4  lea (23a0,A4),A0 */
    c->pc = RC_ADDR(0x0001afd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x23a0u);

L_1AFD8:
    /* 0001afd8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001afd8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AFDA:
    /* 0001afda   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001afdau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFDC:
    /* 0001afdc   4  lea (2860,A4),A1 */
    c->pc = RC_ADDR(0x0001afdcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2860u);

L_1AFE0:
    /* 0001afe0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afe0u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFE6:
    /* 0001afe6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001afe6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AFE8:
    /* 0001afe8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001afe8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AFEA:
    /* 0001afea   4  lea (2878,A4),A0 */
    c->pc = RC_ADDR(0x0001afeau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2878u);

L_1AFEE:
    /* 0001afee   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001afeeu);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFF4:
    /* 0001aff4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001aff4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AFF6:
    /* 0001aff6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aff6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AFF8:
    /* 0001aff8   4  lea (2830,A4),A0 */
    c->pc = RC_ADDR(0x0001aff8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2830u);

L_1AFFC:
    /* 0001affc   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001affcu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B002:
    /* 0001b002   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b002u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B004:
    /* 0001b004   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b004u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B006:
    /* 0001b006   4  lea (2848,A4),A0 */
    c->pc = RC_ADDR(0x0001b006u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2848u);

L_1B00A:
    /* 0001b00a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b00au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B00E:
    /* 0001b00e   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001b00eu);
    rc_step(c, m, 10);
    goto L_1B284;

L_1B012:
    /* 0001b012   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b012u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B016:
    /* 0001b016   4  beq 0001b19a */
    c->pc = RC_ADDR(0x0001b016u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B19A;

L_1B01A:
    /* 0001b01a   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b01au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B01E:
    /* 0001b01e   4  beq 0001b19a */
    c->pc = RC_ADDR(0x0001b01eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B19A;

L_1B022:
    /* 0001b022   6  move.w (26d6,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b022u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d6u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B028:
    /* 0001b028   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b028u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B02A:
    /* 0001b02a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b02au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B02C:
    /* 0001b02c   4  lea (2920,A4),A0 */
    c->pc = RC_ADDR(0x0001b02cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2920u);

L_1B030:
    /* 0001b030   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b030u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B036:
    /* 0001b036   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b036u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B03A:
    /* 0001b03a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b03au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B03C:
    /* 0001b03c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b03cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B03E:
    /* 0001b03e   4  lea (1dca,A4),A0 */
    c->pc = RC_ADDR(0x0001b03eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dcau);

L_1B042:
    /* 0001b042   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b042u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B046:
    /* 0001b046   2  cmp.w D6,D1 */
    c->pc = RC_ADDR(0x0001b046u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B048:
    /* 0001b048   2  beq 0001b06a */
    c->pc = RC_ADDR(0x0001b048u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B06A;

L_1B04A:
    /* 0001b04a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b04au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B04C:
    /* 0001b04c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b04cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B04E:
    /* 0001b04e   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001b04eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1B052:
    /* 0001b052   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001b052u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B056:
    /* 0001b056   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b056u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1B058:
    /* 0001b058   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b058u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B05A:
    /* 0001b05a   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001b05au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1B05E:
    /* 0001b05e   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001b05eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B062:
    /* 0001b062   4  muls.w #30,D2 */
    c->pc = RC_ADDR(0x0001b062u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 2, t0);

L_1B066:
    /* 0001b066   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b066u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B06A:
    /* 0001b06a   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b06au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B06E:
    /* 0001b06e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b06eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B070:
    /* 0001b070   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b070u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B072:
    /* 0001b072   4  lea (1dea,A4),A0 */
    c->pc = RC_ADDR(0x0001b072u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1deau);

L_1B076:
    /* 0001b076   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b076u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B07A:
    /* 0001b07a   2  cmp.w D7,D1 */
    c->pc = RC_ADDR(0x0001b07au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B07C:
    /* 0001b07c   2  beq 0001b09e */
    c->pc = RC_ADDR(0x0001b07cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B09E;

L_1B07E:
    /* 0001b07e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b07eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B080:
    /* 0001b080   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b080u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B082:
    /* 0001b082   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001b082u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1B086:
    /* 0001b086   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001b086u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B08A:
    /* 0001b08a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b08au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1B08C:
    /* 0001b08c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b08cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B08E:
    /* 0001b08e   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001b08eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1B092:
    /* 0001b092   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001b092u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B096:
    /* 0001b096   4  muls.w #28,D2 */
    c->pc = RC_ADDR(0x0001b096u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 2, t0);

L_1B09A:
    /* 0001b09a   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b09au);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B09E:
    /* 0001b09e   4  jsr (0001bf14) */
    c->pc = RC_ADDR(0x0001b09eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b0a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf14u);
    return;

L_1B0A2:
    /* 0001b0a2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b0a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B0A4:
    /* 0001b0a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0A6:
    /* 0001b0a6   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001b0a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1B0AA:
    /* 0001b0aa   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b0aau);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0B0:
    /* 0001b0b0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b0b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B0B2:
    /* 0001b0b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0B4:
    /* 0001b0b4   4  lea (2860,A4),A0 */
    c->pc = RC_ADDR(0x0001b0b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2860u);

L_1B0B8:
    /* 0001b0b8   6  move.w #c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b0b8u);
    rc_step(c, m, 18);
    t0 = 0x000000c8u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0BE:
    /* 0001b0be   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b0beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0C2:
    /* 0001b0c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b0c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B0C4:
    /* 0001b0c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0C6:
    /* 0001b0c6   4  lea (1dca,A4),A0 */
    c->pc = RC_ADDR(0x0001b0c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dcau);

L_1B0CA:
    /* 0001b0ca   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001b0cau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0CE:
    /* 0001b0ce   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b0ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0D2:
    /* 0001b0d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b0d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B0D4:
    /* 0001b0d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0D6:
    /* 0001b0d6   4  lea (1dea,A4),A0 */
    c->pc = RC_ADDR(0x0001b0d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1deau);

L_1B0DA:
    /* 0001b0da   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001b0dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0DE:
    /* 0001b0de   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x0001b0deu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B0E2:
    /* 0001b0e2   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b0e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0E6:
    /* 0001b0e6   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001b0e6u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1B0EA:
    /* 0001b0ea   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001b0eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0EE:
    /* 0001b0ee   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b0eeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1B0F0:
    /* 0001b0f0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b0f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B0F2:
    /* 0001b0f2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001b0f2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B0F4:
    /* 0001b0f4   4  lea (1e0a,A4),A0 */
    c->pc = RC_ADDR(0x0001b0f4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e0au);

L_1B0F8:
    /* 0001b0f8   6  move.w (0,A0,D0.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001b0f8u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0FE:
    /* 0001b0fe   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x0001b0feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B102:
    /* 0001b102   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b102u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B104:
    /* 0001b104   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b104u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B106:
    /* 0001b106   4  lea (1dca,A4),A0 */
    c->pc = RC_ADDR(0x0001b106u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dcau);

L_1B10A:
    /* 0001b10a   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b10au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B110:
    /* 0001b110   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x0001b110u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B114:
    /* 0001b114   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b114u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B116:
    /* 0001b116   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b116u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B118:
    /* 0001b118   4  lea (1dea,A4),A0 */
    c->pc = RC_ADDR(0x0001b118u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1deau);

L_1B11C:
    /* 0001b11c   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b11cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B122:
    /* 0001b122   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b122u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B126:
    /* 0001b126   2  bgt 0001b138 */
    c->pc = RC_ADDR(0x0001b126u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B138;

L_1B128:
    /* 0001b128   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b128u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B12C:
    /* 0001b12c   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b12cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B130:
    /* 0001b130   2  bgt 0001b138 */
    c->pc = RC_ADDR(0x0001b130u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B138;

L_1B132:
    /* 0001b132   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b132u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B136:
    /* 0001b136   2  beq 0001b17a */
    c->pc = RC_ADDR(0x0001b136u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B17A;

L_1B138:
    /* 0001b138   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B13C:
    /* 0001b13c   2  blt 0001b14e */
    c->pc = RC_ADDR(0x0001b13cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B14E;

L_1B13E:
    /* 0001b13e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b13eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B142:
    /* 0001b142   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B146:
    /* 0001b146   2  blt 0001b14e */
    c->pc = RC_ADDR(0x0001b146u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B14E;

L_1B148:
    /* 0001b148   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b148u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B14C:
    /* 0001b14c   2  beq 0001b17a */
    c->pc = RC_ADDR(0x0001b14cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B17A;

L_1B14E:
    /* 0001b14e   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b14eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B152:
    /* 0001b152   2  bgt 0001b164 */
    c->pc = RC_ADDR(0x0001b152u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B164;

L_1B154:
    /* 0001b154   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b154u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B158:
    /* 0001b158   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b158u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B15C:
    /* 0001b15c   2  bgt 0001b164 */
    c->pc = RC_ADDR(0x0001b15cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B164;

L_1B15E:
    /* 0001b15e   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b15eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B162:
    /* 0001b162   2  beq 0001b17a */
    c->pc = RC_ADDR(0x0001b162u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B17A;

L_1B164:
    /* 0001b164   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b164u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B168:
    /* 0001b168   2  blt 0001b18a */
    c->pc = RC_ADDR(0x0001b168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B18A;

L_1B16A:
    /* 0001b16a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b16au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B16E:
    /* 0001b16e   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b16eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B172:
    /* 0001b172   2  blt 0001b18a */
    c->pc = RC_ADDR(0x0001b172u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B18A;

L_1B174:
    /* 0001b174   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B178:
    /* 0001b178   2  bne 0001b18a */
    c->pc = RC_ADDR(0x0001b178u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B18A;

L_1B17A:
    /* 0001b17a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b17au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B17C:
    /* 0001b17c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b17cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B17E:
    /* 0001b17e   4  lea (2950,A4),A0 */
    c->pc = RC_ADDR(0x0001b17eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2950u);

L_1B182:
    /* 0001b182   6  move.w (ffffffea,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b182u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B188:
    /* 0001b188   2  bra 0001b198 */
    c->pc = RC_ADDR(0x0001b188u);
    rc_step(c, m, 10);
    goto L_1B198;

L_1B18A:
    /* 0001b18a   4  addq.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001b18au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B18E:
    /* 0001b18e   6  cmpi.w #3,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001b18eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1B194:
    /* 0001b194   4  blt 0001b0e2 */
    c->pc = RC_ADDR(0x0001b194u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B0E2; }

L_1B198:
    /* 0001b198   2  bra 0001b1b6 */
    c->pc = RC_ADDR(0x0001b198u);
    rc_step(c, m, 10);
    goto L_1B1B6;

L_1B19A:
    /* 0001b19a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b19au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B19C:
    /* 0001b19c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b19cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B19E:
    /* 0001b19e   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001b19eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1B1A2:
    /* 0001b1a2   6  move.w (e76,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b1a2u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1A8:
    /* 0001b1a8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b1a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B1AA:
    /* 0001b1aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b1aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B1AC:
    /* 0001b1ac   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001b1acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1B1B0:
    /* 0001b1b0   6  move.w (e78,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b1b0u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1B6:
    /* 0001b1b6   4  bra 0001b284 */
    c->pc = RC_ADDR(0x0001b1b6u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1B1BA:
    /* 0001b1ba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b1bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1BE:
    /* 0001b1be   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b1beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B1C0:
    /* 0001b1c0   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x0001b1c0u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_1B1C4:
    /* 0001b1c4   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b1c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1C8:
    /* 0001b1c8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b1c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1CC:
    /* 0001b1cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b1ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B1CE:
    /* 0001b1ce   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x0001b1ceu);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_1B1D2:
    /* 0001b1d2   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b1d2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1D6:
    /* 0001b1d6   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b1d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B1DA:
    /* 0001b1da   2  bgt 0001b1ec */
    c->pc = RC_ADDR(0x0001b1dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B1EC;

L_1B1DC:
    /* 0001b1dc   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b1dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1E0:
    /* 0001b1e0   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b1e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B1E4:
    /* 0001b1e4   2  bgt 0001b1ec */
    c->pc = RC_ADDR(0x0001b1e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B1EC;

L_1B1E6:
    /* 0001b1e6   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b1e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B1EA:
    /* 0001b1ea   2  beq 0001b22e */
    c->pc = RC_ADDR(0x0001b1eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B22E;

L_1B1EC:
    /* 0001b1ec   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b1ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B1F0:
    /* 0001b1f0   2  blt 0001b202 */
    c->pc = RC_ADDR(0x0001b1f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B202;

L_1B1F2:
    /* 0001b1f2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b1f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B1F6:
    /* 0001b1f6   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b1f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B1FA:
    /* 0001b1fa   2  blt 0001b202 */
    c->pc = RC_ADDR(0x0001b1fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B202;

L_1B1FC:
    /* 0001b1fc   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b1fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B200:
    /* 0001b200   2  beq 0001b22e */
    c->pc = RC_ADDR(0x0001b200u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B22E;

L_1B202:
    /* 0001b202   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b202u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B206:
    /* 0001b206   2  bgt 0001b218 */
    c->pc = RC_ADDR(0x0001b206u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B218;

L_1B208:
    /* 0001b208   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b208u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B20C:
    /* 0001b20c   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b20cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B210:
    /* 0001b210   2  bgt 0001b218 */
    c->pc = RC_ADDR(0x0001b210u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B218;

L_1B212:
    /* 0001b212   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b212u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B216:
    /* 0001b216   2  beq 0001b22e */
    c->pc = RC_ADDR(0x0001b216u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B22E;

L_1B218:
    /* 0001b218   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001b218u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B21C:
    /* 0001b21c   2  blt 0001b23e */
    c->pc = RC_ADDR(0x0001b21cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B23E;

L_1B21E:
    /* 0001b21e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b21eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B222:
    /* 0001b222   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b222u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B226:
    /* 0001b226   2  blt 0001b23e */
    c->pc = RC_ADDR(0x0001b226u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B23E;

L_1B228:
    /* 0001b228   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001b228u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B22C:
    /* 0001b22c   2  bne 0001b23e */
    c->pc = RC_ADDR(0x0001b22cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B23E;

L_1B22E:
    /* 0001b22e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b22eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B230:
    /* 0001b230   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b230u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B232:
    /* 0001b232   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001b232u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1B236:
    /* 0001b236   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b236u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B23C:
    /* 0001b23c   2  bra 0001b25a */
    c->pc = RC_ADDR(0x0001b23cu);
    rc_step(c, m, 10);
    goto L_1B25A;

L_1B23E:
    /* 0001b23e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b23eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B240:
    /* 0001b240   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b240u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B242:
    /* 0001b242   4  lea (2860,A4),A0 */
    c->pc = RC_ADDR(0x0001b242u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2860u);

L_1B246:
    /* 0001b246   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b246u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1B24A:
    /* 0001b24a   2  bne 0001b25a */
    c->pc = RC_ADDR(0x0001b24au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B25A;

L_1B24C:
    /* 0001b24c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b24cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B24E:
    /* 0001b24e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b24eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B250:
    /* 0001b250   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001b250u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1B254:
    /* 0001b254   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b254u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B258:
    /* 0001b258   2  bra 0001b284 */
    c->pc = RC_ADDR(0x0001b258u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1B25A:
    /* 0001b25a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b25au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B25C:
    /* 0001b25c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b25cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B25E:
    /* 0001b25e   4  lea (2860,A4),A0 */
    c->pc = RC_ADDR(0x0001b25eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2860u);

L_1B262:
    /* 0001b262   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b262u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B266:
    /* 0001b266   2  bra 0001b284 */
    c->pc = RC_ADDR(0x0001b266u);
    rc_step(c, m, 10);
    goto L_1B284;

L_1B272:
    /* 0001b272   6  cmp.l #5,D0 */
    c->pc = RC_ADDR(0x0001b272u);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B278:
    /* 0001b278   2  bcc 0001b284 */
    c->pc = RC_ADDR(0x0001b278u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1B284;

L_1B27A:
    /* 0001b27a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b27au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B27C:
    /* 0001b27c   4  move.w (0001b268),D0 */
    c->pc = RC_ADDR(0x0001b27cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001b268u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B280:
    /* 0001b280   4  jmp (0001b282) */
    c->pc = RC_ADDR(0x0001b280u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001b282u) + t4);
    c->pc = t3;
    return;

L_1B284:
    /* 0001b284   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b284u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B286:
    /* 0001b286   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b286u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B288:
    /* 0001b288   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001b288u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1B28C:
    /* 0001b28c   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001b28cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B290:
    /* 0001b290   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b290u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B292:
    /* 0001b292   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b292u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B294:
    /* 0001b294   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001b294u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1B298:
    /* 0001b298   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001b298u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B29C:
    /* 0001b29c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b29cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B29E:
    /* 0001b29e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b29eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2A0:
    /* 0001b2a0   4  lea (27d0,A4),A0 */
    c->pc = RC_ADDR(0x0001b2a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27d0u);

L_1B2A4:
    /* 0001b2a4   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b2a4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1B2A8:
    /* 0001b2a8   2  beq 0001b2d6 */
    c->pc = RC_ADDR(0x0001b2a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B2D6;

L_1B2AA:
    /* 0001b2aa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b2aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2AC:
    /* 0001b2ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2AE:
    /* 0001b2ae   4  lea (27e8,A4),A0 */
    c->pc = RC_ADDR(0x0001b2aeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27e8u);

L_1B2B2:
    /* 0001b2b2   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b2b2u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2B8:
    /* 0001b2b8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b2b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2BA:
    /* 0001b2ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2BC:
    /* 0001b2bc   4  lea (2800,A4),A0 */
    c->pc = RC_ADDR(0x0001b2bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2800u);

L_1B2C0:
    /* 0001b2c0   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b2c0u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2C6:
    /* 0001b2c6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b2c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2C8:
    /* 0001b2c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2CA:
    /* 0001b2ca   4  lea (27d0,A4),A0 */
    c->pc = RC_ADDR(0x0001b2cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27d0u);

L_1B2CE:
    /* 0001b2ce   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b2ceu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B2D2:
    /* 0001b2d2   4  bra 0001b3f4 */
    c->pc = RC_ADDR(0x0001b2d2u);
    rc_step(c, m, 10);
    goto L_1B3F4;

L_1B2D6:
    /* 0001b2d6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b2d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2D8:
    /* 0001b2d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2DA:
    /* 0001b2da   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001b2dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1B2DE:
    /* 0001b2de   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b2deu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2E4:
    /* 0001b2e4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b2e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B2E6:
    /* 0001b2e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2E8:
    /* 0001b2e8   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001b2e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1B2EC:
    /* 0001b2ec   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b2ecu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2F2:
    /* 0001b2f2   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b2f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B2F6:
    /* 0001b2f6   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b2f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B2FA:
    /* 0001b2fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b2fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B2FC:
    /* 0001b2fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b2fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B2FE:
    /* 0001b2fe   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001b2feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1B302:
    /* 0001b302   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x0001b302u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B304:
    /* 0001b304   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b304u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B308:
    /* 0001b308   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001b308u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B30A:
    /* 0001b30a   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001b30au);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001b30eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1B30E:
    /* 0001b30e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b30eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B310:
    /* 0001b310   4  cmp.w #10,D0 */
    c->pc = RC_ADDR(0x0001b310u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B314:
    /* 0001b314   4  bgt 0001b3e6 */
    c->pc = RC_ADDR(0x0001b314u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B3E6;

L_1B318:
    /* 0001b318   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001b318u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B31C:
    /* 0001b31c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b31cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B31E:
    /* 0001b31e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b31eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B320:
    /* 0001b320   4  lea (26ee,A4),A0 */
    c->pc = RC_ADDR(0x0001b320u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eeu);

L_1B324:
    /* 0001b324   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x0001b324u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B326:
    /* 0001b326   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b326u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B32A:
    /* 0001b32a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001b32au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B32C:
    /* 0001b32c   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001b32cu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001b330u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1B330:
    /* 0001b330   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b330u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B332:
    /* 0001b332   4  cmp.w #10,D0 */
    c->pc = RC_ADDR(0x0001b332u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B336:
    /* 0001b336   4  bge 0001b3e6 */
    c->pc = RC_ADDR(0x0001b336u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B3E6;

L_1B33A:
    /* 0001b33a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b33au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B33C:
    /* 0001b33c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b33cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B33E:
    /* 0001b33e   4  lea (27a0,A4),A0 */
    c->pc = RC_ADDR(0x0001b33eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27a0u);

L_1B342:
    /* 0001b342   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001b342u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B344:
    /* 0001b344   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b344u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B346:
    /* 0001b346   4  lea (27e8,A4),A1 */
    c->pc = RC_ADDR(0x0001b346u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x27e8u);

L_1B34A:
    /* 0001b34a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b34au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B350:
    /* 0001b350   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b350u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B352:
    /* 0001b352   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b352u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B354:
    /* 0001b354   4  lea (27b8,A4),A0 */
    c->pc = RC_ADDR(0x0001b354u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27b8u);

L_1B358:
    /* 0001b358   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001b358u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B35A:
    /* 0001b35a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b35au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B35C:
    /* 0001b35c   4  lea (2800,A4),A1 */
    c->pc = RC_ADDR(0x0001b35cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2800u);

L_1B360:
    /* 0001b360   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b360u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B366:
    /* 0001b366   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001b366u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B36A:
    /* 0001b36a   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001b36au);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001b36eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1B36E:
    /* 0001b36e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b36eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B370:
    /* 0001b370   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001b370u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B374:
    /* 0001b374   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x0001b374u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B378:
    /* 0001b378   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b378u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B37A:
    /* 0001b37a   2  bra 0001b3c4 */
    c->pc = RC_ADDR(0x0001b37au);
    rc_step(c, m, 10);
    goto L_1B3C4;

L_1B37C:
    /* 0001b37c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b37cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B37E:
    /* 0001b37e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b37eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B380:
    /* 0001b380   4  lea (27e8,A4),A0 */
    c->pc = RC_ADDR(0x0001b380u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27e8u);

L_1B384:
    /* 0001b384   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001b384u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B386:
    /* 0001b386   4  addi.w #a,(A0) */
    c->pc = RC_ADDR(0x0001b386u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B38A:
    /* 0001b38a   2  bra 0001b3d6 */
    c->pc = RC_ADDR(0x0001b38au);
    rc_step(c, m, 10);
    goto L_1B3D6;

L_1B38C:
    /* 0001b38c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b38cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B38E:
    /* 0001b38e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b38eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B390:
    /* 0001b390   4  lea (27e8,A4),A0 */
    c->pc = RC_ADDR(0x0001b390u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27e8u);

L_1B394:
    /* 0001b394   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001b394u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B396:
    /* 0001b396   4  subi.w #a,(A0) */
    c->pc = RC_ADDR(0x0001b396u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B39A:
    /* 0001b39a   2  bra 0001b3d6 */
    c->pc = RC_ADDR(0x0001b39au);
    rc_step(c, m, 10);
    goto L_1B3D6;

L_1B39C:
    /* 0001b39c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b39cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B39E:
    /* 0001b39e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b39eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3A0:
    /* 0001b3a0   4  lea (2800,A4),A0 */
    c->pc = RC_ADDR(0x0001b3a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2800u);

L_1B3A4:
    /* 0001b3a4   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001b3a4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B3A6:
    /* 0001b3a6   4  addi.w #a,(A0) */
    c->pc = RC_ADDR(0x0001b3a6u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B3AA:
    /* 0001b3aa   2  bra 0001b3d6 */
    c->pc = RC_ADDR(0x0001b3aau);
    rc_step(c, m, 10);
    goto L_1B3D6;

L_1B3AC:
    /* 0001b3ac   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b3acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3AE:
    /* 0001b3ae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b3aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3B0:
    /* 0001b3b0   4  lea (2800,A4),A0 */
    c->pc = RC_ADDR(0x0001b3b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2800u);

L_1B3B4:
    /* 0001b3b4   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001b3b4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B3B6:
    /* 0001b3b6   4  subi.w #a,(A0) */
    c->pc = RC_ADDR(0x0001b3b6u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B3BA:
    /* 0001b3ba   2  bra 0001b3d6 */
    c->pc = RC_ADDR(0x0001b3bau);
    rc_step(c, m, 10);
    goto L_1B3D6;

L_1B3C4:
    /* 0001b3c4   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x0001b3c4u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B3CA:
    /* 0001b3ca   2  bcc 0001b3d6 */
    c->pc = RC_ADDR(0x0001b3cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1B3D6;

L_1B3CC:
    /* 0001b3cc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b3ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3CE:
    /* 0001b3ce   4  move.w (0001b3bc),D0 */
    c->pc = RC_ADDR(0x0001b3ceu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001b3bcu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3D2:
    /* 0001b3d2   4  jmp (0001b3d4) */
    c->pc = RC_ADDR(0x0001b3d2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001b3d4u) + t4);
    c->pc = t3;
    return;

L_1B3D6:
    /* 0001b3d6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b3d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3D8:
    /* 0001b3d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b3d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3DA:
    /* 0001b3da   4  lea (27d0,A4),A0 */
    c->pc = RC_ADDR(0x0001b3dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x27d0u);

L_1B3DE:
    /* 0001b3de   6  move.w #a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b3deu);
    rc_step(c, m, 18);
    t0 = 0x0000000au;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3E4:
    /* 0001b3e4   2  bra 0001b3f4 */
    c->pc = RC_ADDR(0x0001b3e4u);
    rc_step(c, m, 10);
    goto L_1B3F4;

L_1B3E6:
    /* 0001b3e6   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b3e6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B3EA:
    /* 0001b3ea   6  cmpi.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b3eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1B3F0:
    /* 0001b3f0   4  blt 0001b2f6 */
    c->pc = RC_ADDR(0x0001b3f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B2F6; }

L_1B3F4:
    /* 0001b3f4   6  move.w #4,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b3f4u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B3FA:
    /* 0001b3fa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b3fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B3FC:
    /* 0001b3fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b3fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B3FE:
    /* 0001b3fe   4  lea (2908,A4),A0 */
    c->pc = RC_ADDR(0x0001b3feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2908u);

L_1B402:
    /* 0001b402   6  cmpi.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b402u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1B408:
    /* 0001b408   2  blt 0001b410 */
    c->pc = RC_ADDR(0x0001b408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B410;

L_1B40A:
    /* 0001b40a   6  move.w #7,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b40au);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B410:
    /* 0001b410   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b410u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B414:
    /* 0001b414   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b414u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B418:
    /* 0001b418   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b418u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B41C:
    /* 0001b41c   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x0001b41cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B41E:
    /* 0001b41e   2  ble 0001b426 */
    c->pc = RC_ADDR(0x0001b41eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B426;

L_1B420:
    /* 0001b420   6  move.w #2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b420u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B426:
    /* 0001b426   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b426u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B42A:
    /* 0001b42a   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x0001b42au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B42C:
    /* 0001b42c   2  bge 0001b434 */
    c->pc = RC_ADDR(0x0001b42cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B434;

L_1B42E:
    /* 0001b42e   6  move.w #fffe,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b42eu);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B434:
    /* 0001b434   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b434u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B438:
    /* 0001b438   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0001b438u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B43A:
    /* 0001b43a   2  ble 0001b442 */
    c->pc = RC_ADDR(0x0001b43au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B442;

L_1B43C:
    /* 0001b43c   6  move.w #2,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b43cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B442:
    /* 0001b442   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b442u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B446:
    /* 0001b446   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0001b446u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B448:
    /* 0001b448   2  bge 0001b450 */
    c->pc = RC_ADDR(0x0001b448u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B450;

L_1B44A:
    /* 0001b44a   6  move.w #fffe,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b44au);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B450:
    /* 0001b450   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b450u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B454:
    /* 0001b454   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x0001b454u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B456:
    /* 0001b456   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b456u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B458:
    /* 0001b458   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001b458u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001b45cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1B45C:
    /* 0001b45c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b45cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B45E:
    /* 0001b45e   4  cmp.w #3,D0 */
    c->pc = RC_ADDR(0x0001b45eu);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B462:
    /* 0001b462   2  bge 0001b46e */
    c->pc = RC_ADDR(0x0001b462u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B46E;

L_1B464:
    /* 0001b464   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001b464u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B468:
    /* 0001b468   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x0001b468u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B46A:
    /* 0001b46a   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b46au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B46E:
    /* 0001b46e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b46eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B472:
    /* 0001b472   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x0001b472u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B474:
    /* 0001b474   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b474u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B476:
    /* 0001b476   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001b476u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001b47au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1B47A:
    /* 0001b47a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b47au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B47C:
    /* 0001b47c   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x0001b47cu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B480:
    /* 0001b480   2  bge 0001b48c */
    c->pc = RC_ADDR(0x0001b480u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B48C;

L_1B482:
    /* 0001b482   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b482u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B486:
    /* 0001b486   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x0001b486u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B488:
    /* 0001b488   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b488u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B48C:
    /* 0001b48c   2  move.l D4,D5 */
    c->pc = RC_ADDR(0x0001b48cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B48E:
    /* 0001b48e   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001b48eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1B490:
    /* 0001b490   6  cmp.l #c,D5 */
    c->pc = RC_ADDR(0x0001b490u);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B496:
    /* 0001b496   2  bge 0001b4ec */
    c->pc = RC_ADDR(0x0001b496u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B4EC;

L_1B498:
    /* 0001b498   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001b498u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B49A:
    /* 0001b49a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b49au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B49C:
    /* 0001b49c   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001b49cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1B4A0:
    /* 0001b4a0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b4a0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4A4:
    /* 0001b4a4   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x0001b4a4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B4A6:
    /* 0001b4a6   2  cmp.w D1,D6 */
    c->pc = RC_ADDR(0x0001b4a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B4A8:
    /* 0001b4a8   2  ble 0001b4e8 */
    c->pc = RC_ADDR(0x0001b4a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B4E8;

L_1B4AA:
    /* 0001b4aa   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001b4aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B4AC:
    /* 0001b4ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b4acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B4AE:
    /* 0001b4ae   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001b4aeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1B4B2:
    /* 0001b4b2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b4b2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4B6:
    /* 0001b4b6   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x0001b4b6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B4B8:
    /* 0001b4b8   2  cmp.w D1,D6 */
    c->pc = RC_ADDR(0x0001b4b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B4BA:
    /* 0001b4ba   2  bge 0001b4e8 */
    c->pc = RC_ADDR(0x0001b4bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B4E8;

L_1B4BC:
    /* 0001b4bc   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001b4bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B4BE:
    /* 0001b4be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b4beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B4C0:
    /* 0001b4c0   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001b4c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1B4C4:
    /* 0001b4c4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b4c4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4C8:
    /* 0001b4c8   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x0001b4c8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B4CA:
    /* 0001b4ca   2  cmp.w D1,D7 */
    c->pc = RC_ADDR(0x0001b4cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B4CC:
    /* 0001b4cc   2  ble 0001b4e8 */
    c->pc = RC_ADDR(0x0001b4ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B4E8;

L_1B4CE:
    /* 0001b4ce   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001b4ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B4D0:
    /* 0001b4d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b4d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B4D2:
    /* 0001b4d2   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001b4d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1B4D6:
    /* 0001b4d6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b4d6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4DA:
    /* 0001b4da   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x0001b4dau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B4DC:
    /* 0001b4dc   2  cmp.w D1,D7 */
    c->pc = RC_ADDR(0x0001b4dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B4DE:
    /* 0001b4de   2  bge 0001b4e8 */
    c->pc = RC_ADDR(0x0001b4deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B4E8;

L_1B4E0:
    /* 0001b4e0   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b4e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B4E4:
    /* 0001b4e4   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b4e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B4E8:
    /* 0001b4e8   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001b4e8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1B4EA:
    /* 0001b4ea   2  bra 0001b490 */
    c->pc = RC_ADDR(0x0001b4eau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1B490;

L_1B4EC:
    /* 0001b4ec   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x0001b4ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4F0:
    /* 0001b4f0   2  move.w D7,-(A7) */
    c->pc = RC_ADDR(0x0001b4f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4F2:
    /* 0001b4f2   2  move.w D6,-(A7) */
    c->pc = RC_ADDR(0x0001b4f2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 6, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4F4:
    /* 0001b4f4   4  jsr (0001bf98) */
    c->pc = RC_ADDR(0x0001b4f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b4f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf98u);
    return;

L_1B4F8:
    /* 0001b4f8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001b4f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1B4FA:
    /* 0001b4fa   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0001b4fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B4FE:
    /* 0001b4fe   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b4feu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B502:
    /* 0001b502   4  move.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0001b502u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B506:
    /* 0001b506   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b506u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B50A:
    /* 0001b50a   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x0001b50au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B50E:
    /* 0001b50e   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0001b50eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B510:
    /* 0001b510   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001b510u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B514:
    /* 0001b514   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b514u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B516:
    /* 0001b516   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0001b516u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B518:
    /* 0001b518   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001b518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B51C:
    /* 0001b51c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b51cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B51E:
    /* 0001b51e   4  jsr (0001c05c) */
    c->pc = RC_ADDR(0x0001b51eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b522u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c05cu);
    return;

L_1B522:
    /* 0001b522   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001b522u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1B524:
    /* 0001b524   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0001b524u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B528:
    /* 0001b528   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001b528u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1B52A:
    /* 0001b52a   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b52au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B52E:
    /* 0001b52e   4  move.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0001b52eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B532:
    /* 0001b532   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001b532u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1B534:
    /* 0001b534   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b534u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B538:
    /* 0001b538   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b538u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B53A:
    /* 0001b53a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b53au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B53C:
    /* 0001b53c   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001b53cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1B540:
    /* 0001b540   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x0001b540u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B542:
    /* 0001b542   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0001b542u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B546:
    /* 0001b546   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b546u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B54A:
    /* 0001b54a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b54au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B54C:
    /* 0001b54c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b54cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B54E:
    /* 0001b54e   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001b54eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1B552:
    /* 0001b552   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x0001b552u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B554:
    /* 0001b554   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0001b554u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B558:
    /* 0001b558   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b558u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B55C:
    /* 0001b55c   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b55cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B560:
    /* 0001b560   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b560u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1B564:
    /* 0001b564   2  ble 0001b56c */
    c->pc = RC_ADDR(0x0001b564u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B56C;

L_1B566:
    /* 0001b566   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b566u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B56C:
    /* 0001b56c   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b56cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1B570:
    /* 0001b570   2  bge 0001b578 */
    c->pc = RC_ADDR(0x0001b570u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B578;

L_1B572:
    /* 0001b572   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001b572u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B578:
    /* 0001b578   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b578u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1B57C:
    /* 0001b57c   2  ble 0001b584 */
    c->pc = RC_ADDR(0x0001b57cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B584;

L_1B57E:
    /* 0001b57e   6  bset #2,(ffffffef,A5) */
    c->pc = RC_ADDR(0x0001b57eu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1B584:
    /* 0001b584   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1B588:
    /* 0001b588   2  bge 0001b590 */
    c->pc = RC_ADDR(0x0001b588u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1B590;

L_1B58A:
    /* 0001b58a   6  bset #3,(ffffffef,A5) */
    c->pc = RC_ADDR(0x0001b58au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x11u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1B590:
    /* 0001b590   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b590u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B592:
    /* 0001b592   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b592u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B594:
    /* 0001b594   4  lea (28d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b594u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28d8u);

L_1B598:
    /* 0001b598   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b598u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B59E:
    /* 0001b59e   2  beq 0001b5ec */
    c->pc = RC_ADDR(0x0001b59eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B5EC;

L_1B5A0:
    /* 0001b5a0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5A2:
    /* 0001b5a2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5A4:
    /* 0001b5a4   4  lea (28a8,A4),A0 */
    c->pc = RC_ADDR(0x0001b5a4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28a8u);

L_1B5A8:
    /* 0001b5a8   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001b5a8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1B5AA:
    /* 0001b5aa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5AC:
    /* 0001b5ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5AE:
    /* 0001b5ae   4  lea (28c0,A4),A1 */
    c->pc = RC_ADDR(0x0001b5aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x28c0u);

L_1B5B2:
    /* 0001b5b2   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b5b2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B5B6:
    /* 0001b5b6   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x0001b5b6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B5B8:
    /* 0001b5b8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5BA:
    /* 0001b5ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5BC:
    /* 0001b5bc   4  lea (28a8,A4),A0 */
    c->pc = RC_ADDR(0x0001b5bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28a8u);

L_1B5C0:
    /* 0001b5c0   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b5c0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1B5C4:
    /* 0001b5c4   2  beq 0001b5d6 */
    c->pc = RC_ADDR(0x0001b5c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B5D6;

L_1B5C6:
    /* 0001b5c6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5C8:
    /* 0001b5c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5CA:
    /* 0001b5ca   4  lea (28a8,A4),A0 */
    c->pc = RC_ADDR(0x0001b5cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28a8u);

L_1B5CE:
    /* 0001b5ce   6  cmpi.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b5ceu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1B5D4:
    /* 0001b5d4   2  blt 0001b5ea */
    c->pc = RC_ADDR(0x0001b5d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B5EA;

L_1B5D6:
    /* 0001b5d6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5D8:
    /* 0001b5d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5DA:
    /* 0001b5da   4  lea (28c0,A4),A0 */
    c->pc = RC_ADDR(0x0001b5dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28c0u);

L_1B5DE:
    /* 0001b5de   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001b5deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5E0:
    /* 0001b5e0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b5e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B5E2:
    /* 0001b5e2   4  lea (28c0,A4),A1 */
    c->pc = RC_ADDR(0x0001b5e2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x28c0u);

L_1B5E6:
    /* 0001b5e6   4  neg.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b5e6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B5EA:
    /* 0001b5ea   2  bra 0001b5fa */
    c->pc = RC_ADDR(0x0001b5eau);
    rc_step(c, m, 10);
    goto L_1B5FA;

L_1B5EC:
    /* 0001b5ec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5EE:
    /* 0001b5ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5F0:
    /* 0001b5f0   4  lea (28a8,A4),A0 */
    c->pc = RC_ADDR(0x0001b5f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x28a8u);

L_1B5F4:
    /* 0001b5f4   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b5f4u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B5FA:
    /* 0001b5fa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001b5fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5FC:
    /* 0001b5fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b5fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B5FE:
    /* 0001b5fe   4  lea (2890,A4),A0 */
    c->pc = RC_ADDR(0x0001b5feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2890u);

L_1B602:
    /* 0001b602   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001b602u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B604:
    /* 0001b604   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b604u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B606:
    /* 0001b606   4  lea (28d8,A4),A1 */
    c->pc = RC_ADDR(0x0001b606u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x28d8u);

L_1B60A:
    /* 0001b60a   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001b60au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B60E:
    /* 0001b60e   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001b60eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1B610:
    /* 0001b610   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001b610u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1B612:
    /* 0001b612   4  lea (ffffce26,A4),A1 */
    c->pc = RC_ADDR(0x0001b612u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x31dau);

L_1B616:
    /* 0001b616   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0001b616u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B61A:
    /* 0001b61a   4  muls.w #5,D1 */
    c->pc = RC_ADDR(0x0001b61au);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 1, t0);

L_1B61E:
    /* 0001b61e   2  move.l D4,D2 */
    c->pc = RC_ADDR(0x0001b61eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B620:
    /* 0001b620   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001b620u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1B622:
    /* 0001b622   4  lea (28a8,A4),A1 */
    c->pc = RC_ADDR(0x0001b622u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x28a8u);

L_1B626:
    /* 0001b626   4  add.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0001b626u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B62A:
    /* 0001b62a   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b62au);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B62E:
    /* 0001b62e   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001b62eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1B630:
    /* 0001b630   6  cmp.l #c,D4 */
    c->pc = RC_ADDR(0x0001b630u);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B636:
    /* 0001b636   4  blt 0001a8ec */
    c->pc = RC_ADDR(0x0001b636u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A8EC; }

L_1B63A:
    /* 0001b63a   6  cmpi.w #1,(2968,A4) */
    c->pc = RC_ADDR(0x0001b63au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1B640:
    /* 0001b640   4  bne 0001b6f2 */
    c->pc = RC_ADDR(0x0001b640u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B6F2;

L_1B644:
    /* 0001b644   6  cmpi.w #f0,(e76,A4) */
    c->pc = RC_ADDR(0x0001b644u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_1B64A:
    /* 0001b64a   2  blt 0001b688 */
    c->pc = RC_ADDR(0x0001b64au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B688;

L_1B64C:
    /* 0001b64c   6  cmpi.w #1b0,(e76,A4) */
    c->pc = RC_ADDR(0x0001b64cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x000001b0u);

L_1B652:
    /* 0001b652   2  bgt 0001b688 */
    c->pc = RC_ADDR(0x0001b652u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1B688;

L_1B654:
    /* 0001b654   6  cmpi.w #190,(e78,A4) */
    c->pc = RC_ADDR(0x0001b654u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_1B65A:
    /* 0001b65a   2  blt 0001b688 */
    c->pc = RC_ADDR(0x0001b65au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1B688;

L_1B65C:
    /* 0001b65c   4  tst.w (2970,A4) */
    c->pc = RC_ADDR(0x0001b65cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2970u));
    rc_set_nzvc(c, t0, RC_W);

L_1B660:
    /* 0001b660   2  beq 0001b688 */
    c->pc = RC_ADDR(0x0001b660u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B688;

L_1B662:
    /* 0001b662   6  move.w #3,(290a,A4) */
    c->pc = RC_ADDR(0x0001b662u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x290au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B668:
    /* 0001b668   6  move.w #3,(2908,A4) */
    c->pc = RC_ADDR(0x0001b668u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x2908u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B66E:
    /* 0001b66e   6  move.w (e76,A4),(27a2,A4) */
    c->pc = RC_ADDR(0x0001b66eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_wr16(c, m, (c->a[4] + 0x27a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B674:
    /* 0001b674   6  move.w (e76,A4),(27a0,A4) */
    c->pc = RC_ADDR(0x0001b674u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_wr16(c, m, (c->a[4] + 0x27a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B67A:
    /* 0001b67a   6  move.w (e78,A4),(27ba,A4) */
    c->pc = RC_ADDR(0x0001b67au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_wr16(c, m, (c->a[4] + 0x27bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B680:
    /* 0001b680   6  move.w (e78,A4),(27b8,A4) */
    c->pc = RC_ADDR(0x0001b680u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_wr16(c, m, (c->a[4] + 0x27b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B686:
    /* 0001b686   2  bra 0001b6f2 */
    c->pc = RC_ADDR(0x0001b686u);
    rc_step(c, m, 10);
    goto L_1B6F2;

L_1B688:
    /* 0001b688   4  tst.w (2972,A4) */
    c->pc = RC_ADDR(0x0001b688u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2972u));
    rc_set_nzvc(c, t0, RC_W);

L_1B68C:
    /* 0001b68c   2  beq 0001b6f2 */
    c->pc = RC_ADDR(0x0001b68cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B6F2;

L_1B68E:
    /* 0001b68e   6  move.w #5,(290a,A4) */
    c->pc = RC_ADDR(0x0001b68eu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x290au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B694:
    /* 0001b694   6  move.w #5,(2908,A4) */
    c->pc = RC_ADDR(0x0001b694u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x2908u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B69A:
    /* 0001b69a   6  move.w #148,(27a0,A4) */
    c->pc = RC_ADDR(0x0001b69au);
    rc_step(c, m, 16);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x27a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6A0:
    /* 0001b6a0   6  move.w #1ae,(27b8,A4) */
    c->pc = RC_ADDR(0x0001b6a0u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x27b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6A6:
    /* 0001b6a6   6  move.w #180,(27a2,A4) */
    c->pc = RC_ADDR(0x0001b6a6u);
    rc_step(c, m, 16);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x27a2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6AC:
    /* 0001b6ac   6  move.w #1ae,(27ba,A4) */
    c->pc = RC_ADDR(0x0001b6acu);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x27bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6B2:
    /* 0001b6b2   4  move.w (2710,A4),D0 */
    c->pc = RC_ADDR(0x0001b6b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6B6:
    /* 0001b6b6   4  cmp.w (27a0,A4),D0 */
    c->pc = RC_ADDR(0x0001b6b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x27a0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B6BA:
    /* 0001b6ba   2  bne 0001b6d2 */
    c->pc = RC_ADDR(0x0001b6bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B6D2;

L_1B6BC:
    /* 0001b6bc   4  move.w (2728,A4),D0 */
    c->pc = RC_ADDR(0x0001b6bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2728u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6C0:
    /* 0001b6c0   4  cmp.w (27b8,A4),D0 */
    c->pc = RC_ADDR(0x0001b6c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x27b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B6C4:
    /* 0001b6c4   2  bne 0001b6d2 */
    c->pc = RC_ADDR(0x0001b6c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B6D2;

L_1B6C6:
    /* 0001b6c6   6  move.w #1,(28a8,A4) */
    c->pc = RC_ADDR(0x0001b6c6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x28a8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6CC:
    /* 0001b6cc   6  move.w #ffff,(28c0,A4) */
    c->pc = RC_ADDR(0x0001b6ccu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x28c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6D2:
    /* 0001b6d2   4  move.w (2712,A4),D0 */
    c->pc = RC_ADDR(0x0001b6d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6D6:
    /* 0001b6d6   4  cmp.w (27a2,A4),D0 */
    c->pc = RC_ADDR(0x0001b6d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x27a2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B6DA:
    /* 0001b6da   2  bne 0001b6f2 */
    c->pc = RC_ADDR(0x0001b6dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B6F2;

L_1B6DC:
    /* 0001b6dc   4  move.w (272a,A4),D0 */
    c->pc = RC_ADDR(0x0001b6dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x272au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6E0:
    /* 0001b6e0   4  cmp.w (27ba,A4),D0 */
    c->pc = RC_ADDR(0x0001b6e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x27bau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B6E4:
    /* 0001b6e4   2  bne 0001b6f2 */
    c->pc = RC_ADDR(0x0001b6e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1B6F2;

L_1B6E6:
    /* 0001b6e6   6  move.w #1,(28aa,A4) */
    c->pc = RC_ADDR(0x0001b6e6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x28aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6EC:
    /* 0001b6ec   6  move.w #ffff,(28c2,A4) */
    c->pc = RC_ADDR(0x0001b6ecu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x28c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B6F2:
    /* 0001b6f2   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001b6f2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1B6F6:
    /* 0001b6f6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b6f6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B6F8:
    /* 0001b6f8   2  rts */
    c->pc = RC_ADDR(0x0001b6f8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
