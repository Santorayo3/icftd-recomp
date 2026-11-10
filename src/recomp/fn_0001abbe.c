/* fn_0001abbe - 1512 byte(s), 444 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001abbe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001abbeu): goto L_1ABBE;
    case RC_ADDR(0x0001abc2u): goto L_1ABC2;
    case RC_ADDR(0x0001abc8u): goto L_1ABC8;
    case RC_ADDR(0x0001abceu): goto L_1ABCE;
    case RC_ADDR(0x0001abd2u): goto L_1ABD2;
    case RC_ADDR(0x0001abd4u): goto L_1ABD4;
    case RC_ADDR(0x0001abd6u): goto L_1ABD6;
    case RC_ADDR(0x0001abdau): goto L_1ABDA;
    case RC_ADDR(0x0001abe0u): goto L_1ABE0;
    case RC_ADDR(0x0001abe4u): goto L_1ABE4;
    case RC_ADDR(0x0001abe6u): goto L_1ABE6;
    case RC_ADDR(0x0001abe8u): goto L_1ABE8;
    case RC_ADDR(0x0001abecu): goto L_1ABEC;
    case RC_ADDR(0x0001abf0u): goto L_1ABF0;
    case RC_ADDR(0x0001abf4u): goto L_1ABF4;
    case RC_ADDR(0x0001abf6u): goto L_1ABF6;
    case RC_ADDR(0x0001abfau): goto L_1ABFA;
    case RC_ADDR(0x0001abfcu): goto L_1ABFC;
    case RC_ADDR(0x0001ac00u): goto L_1AC00;
    case RC_ADDR(0x0001ac04u): goto L_1AC04;
    case RC_ADDR(0x0001ac08u): goto L_1AC08;
    case RC_ADDR(0x0001ac0cu): goto L_1AC0C;
    case RC_ADDR(0x0001ac10u): goto L_1AC10;
    case RC_ADDR(0x0001ac14u): goto L_1AC14;
    case RC_ADDR(0x0001ac18u): goto L_1AC18;
    case RC_ADDR(0x0001ac1au): goto L_1AC1A;
    case RC_ADDR(0x0001ac1cu): goto L_1AC1C;
    case RC_ADDR(0x0001ac1eu): goto L_1AC1E;
    case RC_ADDR(0x0001ac22u): goto L_1AC22;
    case RC_ADDR(0x0001ac26u): goto L_1AC26;
    case RC_ADDR(0x0001ac2au): goto L_1AC2A;
    case RC_ADDR(0x0001ac2eu): goto L_1AC2E;
    case RC_ADDR(0x0001ac30u): goto L_1AC30;
    case RC_ADDR(0x0001ac32u): goto L_1AC32;
    case RC_ADDR(0x0001ac34u): goto L_1AC34;
    case RC_ADDR(0x0001ac38u): goto L_1AC38;
    case RC_ADDR(0x0001ac3eu): goto L_1AC3E;
    case RC_ADDR(0x0001ac42u): goto L_1AC42;
    case RC_ADDR(0x0001ac48u): goto L_1AC48;
    case RC_ADDR(0x0001ac4au): goto L_1AC4A;
    case RC_ADDR(0x0001ac4eu): goto L_1AC4E;
    case RC_ADDR(0x0001ac50u): goto L_1AC50;
    case RC_ADDR(0x0001ac52u): goto L_1AC52;
    case RC_ADDR(0x0001ac56u): goto L_1AC56;
    case RC_ADDR(0x0001ac5au): goto L_1AC5A;
    case RC_ADDR(0x0001ac5cu): goto L_1AC5C;
    case RC_ADDR(0x0001ac5eu): goto L_1AC5E;
    case RC_ADDR(0x0001ac62u): goto L_1AC62;
    case RC_ADDR(0x0001ac68u): goto L_1AC68;
    case RC_ADDR(0x0001ac6cu): goto L_1AC6C;
    case RC_ADDR(0x0001ac6eu): goto L_1AC6E;
    case RC_ADDR(0x0001ac70u): goto L_1AC70;
    case RC_ADDR(0x0001ac74u): goto L_1AC74;
    case RC_ADDR(0x0001ac78u): goto L_1AC78;
    case RC_ADDR(0x0001ac7au): goto L_1AC7A;
    case RC_ADDR(0x0001ac7cu): goto L_1AC7C;
    case RC_ADDR(0x0001ac80u): goto L_1AC80;
    case RC_ADDR(0x0001ac86u): goto L_1AC86;
    case RC_ADDR(0x0001ac8au): goto L_1AC8A;
    case RC_ADDR(0x0001ac8eu): goto L_1AC8E;
    case RC_ADDR(0x0001ac92u): goto L_1AC92;
    case RC_ADDR(0x0001ac96u): goto L_1AC96;
    case RC_ADDR(0x0001ac9au): goto L_1AC9A;
    case RC_ADDR(0x0001ac9eu): goto L_1AC9E;
    case RC_ADDR(0x0001aca2u): goto L_1ACA2;
    case RC_ADDR(0x0001aca4u): goto L_1ACA4;
    case RC_ADDR(0x0001aca6u): goto L_1ACA6;
    case RC_ADDR(0x0001acaau): goto L_1ACAA;
    case RC_ADDR(0x0001acaeu): goto L_1ACAE;
    case RC_ADDR(0x0001acb0u): goto L_1ACB0;
    case RC_ADDR(0x0001acb2u): goto L_1ACB2;
    case RC_ADDR(0x0001acb6u): goto L_1ACB6;
    case RC_ADDR(0x0001acbcu): goto L_1ACBC;
    case RC_ADDR(0x0001acc0u): goto L_1ACC0;
    case RC_ADDR(0x0001acc2u): goto L_1ACC2;
    case RC_ADDR(0x0001acc4u): goto L_1ACC4;
    case RC_ADDR(0x0001acc8u): goto L_1ACC8;
    case RC_ADDR(0x0001acccu): goto L_1ACCC;
    case RC_ADDR(0x0001acceu): goto L_1ACCE;
    case RC_ADDR(0x0001acd0u): goto L_1ACD0;
    case RC_ADDR(0x0001acd4u): goto L_1ACD4;
    case RC_ADDR(0x0001acdau): goto L_1ACDA;
    case RC_ADDR(0x0001acdeu): goto L_1ACDE;
    case RC_ADDR(0x0001ace0u): goto L_1ACE0;
    case RC_ADDR(0x0001ace2u): goto L_1ACE2;
    case RC_ADDR(0x0001ace6u): goto L_1ACE6;
    case RC_ADDR(0x0001aceau): goto L_1ACEA;
    case RC_ADDR(0x0001acecu): goto L_1ACEC;
    case RC_ADDR(0x0001aceeu): goto L_1ACEE;
    case RC_ADDR(0x0001acf2u): goto L_1ACF2;
    case RC_ADDR(0x0001acf8u): goto L_1ACF8;
    case RC_ADDR(0x0001acfcu): goto L_1ACFC;
    case RC_ADDR(0x0001acfeu): goto L_1ACFE;
    case RC_ADDR(0x0001ad00u): goto L_1AD00;
    case RC_ADDR(0x0001ad04u): goto L_1AD04;
    case RC_ADDR(0x0001ad08u): goto L_1AD08;
    case RC_ADDR(0x0001ad0au): goto L_1AD0A;
    case RC_ADDR(0x0001ad0cu): goto L_1AD0C;
    case RC_ADDR(0x0001ad10u): goto L_1AD10;
    case RC_ADDR(0x0001ad16u): goto L_1AD16;
    case RC_ADDR(0x0001ad1au): goto L_1AD1A;
    case RC_ADDR(0x0001ad1cu): goto L_1AD1C;
    case RC_ADDR(0x0001ad1eu): goto L_1AD1E;
    case RC_ADDR(0x0001ad22u): goto L_1AD22;
    case RC_ADDR(0x0001ad26u): goto L_1AD26;
    case RC_ADDR(0x0001ad28u): goto L_1AD28;
    case RC_ADDR(0x0001ad2au): goto L_1AD2A;
    case RC_ADDR(0x0001ad2eu): goto L_1AD2E;
    case RC_ADDR(0x0001ad34u): goto L_1AD34;
    case RC_ADDR(0x0001ad38u): goto L_1AD38;
    case RC_ADDR(0x0001ad3cu): goto L_1AD3C;
    case RC_ADDR(0x0001ad40u): goto L_1AD40;
    case RC_ADDR(0x0001ad44u): goto L_1AD44;
    case RC_ADDR(0x0001ad46u): goto L_1AD46;
    case RC_ADDR(0x0001ad48u): goto L_1AD48;
    case RC_ADDR(0x0001ad4au): goto L_1AD4A;
    case RC_ADDR(0x0001ad4eu): goto L_1AD4E;
    case RC_ADDR(0x0001ad52u): goto L_1AD52;
    case RC_ADDR(0x0001ad56u): goto L_1AD56;
    case RC_ADDR(0x0001ad5au): goto L_1AD5A;
    case RC_ADDR(0x0001ad5cu): goto L_1AD5C;
    case RC_ADDR(0x0001ad5eu): goto L_1AD5E;
    case RC_ADDR(0x0001ad60u): goto L_1AD60;
    case RC_ADDR(0x0001ad64u): goto L_1AD64;
    case RC_ADDR(0x0001ad6au): goto L_1AD6A;
    case RC_ADDR(0x0001ad6eu): goto L_1AD6E;
    case RC_ADDR(0x0001ad72u): goto L_1AD72;
    case RC_ADDR(0x0001ad76u): goto L_1AD76;
    case RC_ADDR(0x0001ad78u): goto L_1AD78;
    case RC_ADDR(0x0001ad7au): goto L_1AD7A;
    case RC_ADDR(0x0001ad7cu): goto L_1AD7C;
    case RC_ADDR(0x0001ad80u): goto L_1AD80;
    case RC_ADDR(0x0001ad84u): goto L_1AD84;
    case RC_ADDR(0x0001ad88u): goto L_1AD88;
    case RC_ADDR(0x0001ad8cu): goto L_1AD8C;
    case RC_ADDR(0x0001ad8eu): goto L_1AD8E;
    case RC_ADDR(0x0001ad90u): goto L_1AD90;
    case RC_ADDR(0x0001ad92u): goto L_1AD92;
    case RC_ADDR(0x0001ad96u): goto L_1AD96;
    case RC_ADDR(0x0001ad9cu): goto L_1AD9C;
    case RC_ADDR(0x0001ada0u): goto L_1ADA0;
    case RC_ADDR(0x0001ada4u): goto L_1ADA4;
    case RC_ADDR(0x0001ada8u): goto L_1ADA8;
    case RC_ADDR(0x0001adaau): goto L_1ADAA;
    case RC_ADDR(0x0001adacu): goto L_1ADAC;
    case RC_ADDR(0x0001adaeu): goto L_1ADAE;
    case RC_ADDR(0x0001adb2u): goto L_1ADB2;
    case RC_ADDR(0x0001adb6u): goto L_1ADB6;
    case RC_ADDR(0x0001adbau): goto L_1ADBA;
    case RC_ADDR(0x0001adbeu): goto L_1ADBE;
    case RC_ADDR(0x0001adc0u): goto L_1ADC0;
    case RC_ADDR(0x0001adc2u): goto L_1ADC2;
    case RC_ADDR(0x0001adc4u): goto L_1ADC4;
    case RC_ADDR(0x0001adc8u): goto L_1ADC8;
    case RC_ADDR(0x0001adceu): goto L_1ADCE;
    case RC_ADDR(0x0001add2u): goto L_1ADD2;
    case RC_ADDR(0x0001add8u): goto L_1ADD8;
    case RC_ADDR(0x0001addcu): goto L_1ADDC;
    case RC_ADDR(0x0001ade0u): goto L_1ADE0;
    case RC_ADDR(0x0001ade4u): goto L_1ADE4;
    case RC_ADDR(0x0001ade8u): goto L_1ADE8;
    case RC_ADDR(0x0001adecu): goto L_1ADEC;
    case RC_ADDR(0x0001adf0u): goto L_1ADF0;
    case RC_ADDR(0x0001adf2u): goto L_1ADF2;
    case RC_ADDR(0x0001adf6u): goto L_1ADF6;
    case RC_ADDR(0x0001adf8u): goto L_1ADF8;
    case RC_ADDR(0x0001adfau): goto L_1ADFA;
    case RC_ADDR(0x0001adfeu): goto L_1ADFE;
    case RC_ADDR(0x0001ae02u): goto L_1AE02;
    case RC_ADDR(0x0001ae04u): goto L_1AE04;
    case RC_ADDR(0x0001ae06u): goto L_1AE06;
    case RC_ADDR(0x0001ae0au): goto L_1AE0A;
    case RC_ADDR(0x0001ae10u): goto L_1AE10;
    case RC_ADDR(0x0001ae14u): goto L_1AE14;
    case RC_ADDR(0x0001ae16u): goto L_1AE16;
    case RC_ADDR(0x0001ae18u): goto L_1AE18;
    case RC_ADDR(0x0001ae1cu): goto L_1AE1C;
    case RC_ADDR(0x0001ae20u): goto L_1AE20;
    case RC_ADDR(0x0001ae22u): goto L_1AE22;
    case RC_ADDR(0x0001ae24u): goto L_1AE24;
    case RC_ADDR(0x0001ae28u): goto L_1AE28;
    case RC_ADDR(0x0001ae2eu): goto L_1AE2E;
    case RC_ADDR(0x0001ae32u): goto L_1AE32;
    case RC_ADDR(0x0001ae34u): goto L_1AE34;
    case RC_ADDR(0x0001ae36u): goto L_1AE36;
    case RC_ADDR(0x0001ae3au): goto L_1AE3A;
    case RC_ADDR(0x0001ae3eu): goto L_1AE3E;
    case RC_ADDR(0x0001ae40u): goto L_1AE40;
    case RC_ADDR(0x0001ae42u): goto L_1AE42;
    case RC_ADDR(0x0001ae46u): goto L_1AE46;
    case RC_ADDR(0x0001ae4cu): goto L_1AE4C;
    case RC_ADDR(0x0001ae50u): goto L_1AE50;
    case RC_ADDR(0x0001ae54u): goto L_1AE54;
    case RC_ADDR(0x0001ae58u): goto L_1AE58;
    case RC_ADDR(0x0001ae5au): goto L_1AE5A;
    case RC_ADDR(0x0001ae5eu): goto L_1AE5E;
    case RC_ADDR(0x0001ae60u): goto L_1AE60;
    case RC_ADDR(0x0001ae64u): goto L_1AE64;
    case RC_ADDR(0x0001ae66u): goto L_1AE66;
    case RC_ADDR(0x0001ae68u): goto L_1AE68;
    case RC_ADDR(0x0001ae6cu): goto L_1AE6C;
    case RC_ADDR(0x0001ae70u): goto L_1AE70;
    case RC_ADDR(0x0001ae72u): goto L_1AE72;
    case RC_ADDR(0x0001ae74u): goto L_1AE74;
    case RC_ADDR(0x0001ae78u): goto L_1AE78;
    case RC_ADDR(0x0001ae7eu): goto L_1AE7E;
    case RC_ADDR(0x0001ae82u): goto L_1AE82;
    case RC_ADDR(0x0001ae84u): goto L_1AE84;
    case RC_ADDR(0x0001ae86u): goto L_1AE86;
    case RC_ADDR(0x0001ae8au): goto L_1AE8A;
    case RC_ADDR(0x0001ae8eu): goto L_1AE8E;
    case RC_ADDR(0x0001ae90u): goto L_1AE90;
    case RC_ADDR(0x0001ae92u): goto L_1AE92;
    case RC_ADDR(0x0001ae96u): goto L_1AE96;
    case RC_ADDR(0x0001ae9cu): goto L_1AE9C;
    case RC_ADDR(0x0001aea0u): goto L_1AEA0;
    case RC_ADDR(0x0001aea2u): goto L_1AEA2;
    case RC_ADDR(0x0001aea4u): goto L_1AEA4;
    case RC_ADDR(0x0001aea8u): goto L_1AEA8;
    case RC_ADDR(0x0001aeacu): goto L_1AEAC;
    case RC_ADDR(0x0001aeaeu): goto L_1AEAE;
    case RC_ADDR(0x0001aeb0u): goto L_1AEB0;
    case RC_ADDR(0x0001aeb4u): goto L_1AEB4;
    case RC_ADDR(0x0001aebau): goto L_1AEBA;
    case RC_ADDR(0x0001aebeu): goto L_1AEBE;
    case RC_ADDR(0x0001aec2u): goto L_1AEC2;
    case RC_ADDR(0x0001aec6u): goto L_1AEC6;
    case RC_ADDR(0x0001aec8u): goto L_1AEC8;
    case RC_ADDR(0x0001aeccu): goto L_1AECC;
    case RC_ADDR(0x0001aed0u): goto L_1AED0;
    case RC_ADDR(0x0001aed4u): goto L_1AED4;
    case RC_ADDR(0x0001aed8u): goto L_1AED8;
    case RC_ADDR(0x0001aedcu): goto L_1AEDC;
    case RC_ADDR(0x0001aee0u): goto L_1AEE0;
    case RC_ADDR(0x0001aee4u): goto L_1AEE4;
    case RC_ADDR(0x0001aee6u): goto L_1AEE6;
    case RC_ADDR(0x0001aee8u): goto L_1AEE8;
    case RC_ADDR(0x0001aeeau): goto L_1AEEA;
    case RC_ADDR(0x0001aeeeu): goto L_1AEEE;
    case RC_ADDR(0x0001aef2u): goto L_1AEF2;
    case RC_ADDR(0x0001aef6u): goto L_1AEF6;
    case RC_ADDR(0x0001aefau): goto L_1AEFA;
    case RC_ADDR(0x0001aefcu): goto L_1AEFC;
    case RC_ADDR(0x0001aefeu): goto L_1AEFE;
    case RC_ADDR(0x0001af00u): goto L_1AF00;
    case RC_ADDR(0x0001af04u): goto L_1AF04;
    case RC_ADDR(0x0001af0au): goto L_1AF0A;
    case RC_ADDR(0x0001af0eu): goto L_1AF0E;
    case RC_ADDR(0x0001af14u): goto L_1AF14;
    case RC_ADDR(0x0001af16u): goto L_1AF16;
    case RC_ADDR(0x0001af1au): goto L_1AF1A;
    case RC_ADDR(0x0001af1cu): goto L_1AF1C;
    case RC_ADDR(0x0001af1eu): goto L_1AF1E;
    case RC_ADDR(0x0001af22u): goto L_1AF22;
    case RC_ADDR(0x0001af26u): goto L_1AF26;
    case RC_ADDR(0x0001af28u): goto L_1AF28;
    case RC_ADDR(0x0001af2au): goto L_1AF2A;
    case RC_ADDR(0x0001af2eu): goto L_1AF2E;
    case RC_ADDR(0x0001af34u): goto L_1AF34;
    case RC_ADDR(0x0001af38u): goto L_1AF38;
    case RC_ADDR(0x0001af3au): goto L_1AF3A;
    case RC_ADDR(0x0001af3cu): goto L_1AF3C;
    case RC_ADDR(0x0001af40u): goto L_1AF40;
    case RC_ADDR(0x0001af44u): goto L_1AF44;
    case RC_ADDR(0x0001af46u): goto L_1AF46;
    case RC_ADDR(0x0001af48u): goto L_1AF48;
    case RC_ADDR(0x0001af4cu): goto L_1AF4C;
    case RC_ADDR(0x0001af52u): goto L_1AF52;
    case RC_ADDR(0x0001af56u): goto L_1AF56;
    case RC_ADDR(0x0001af5au): goto L_1AF5A;
    case RC_ADDR(0x0001af5eu): goto L_1AF5E;
    case RC_ADDR(0x0001af62u): goto L_1AF62;
    case RC_ADDR(0x0001af66u): goto L_1AF66;
    case RC_ADDR(0x0001af6au): goto L_1AF6A;
    case RC_ADDR(0x0001af6eu): goto L_1AF6E;
    case RC_ADDR(0x0001af70u): goto L_1AF70;
    case RC_ADDR(0x0001af72u): goto L_1AF72;
    case RC_ADDR(0x0001af76u): goto L_1AF76;
    case RC_ADDR(0x0001af7au): goto L_1AF7A;
    case RC_ADDR(0x0001af7cu): goto L_1AF7C;
    case RC_ADDR(0x0001af7eu): goto L_1AF7E;
    case RC_ADDR(0x0001af82u): goto L_1AF82;
    case RC_ADDR(0x0001af88u): goto L_1AF88;
    case RC_ADDR(0x0001af8cu): goto L_1AF8C;
    case RC_ADDR(0x0001af8eu): goto L_1AF8E;
    case RC_ADDR(0x0001af90u): goto L_1AF90;
    case RC_ADDR(0x0001af94u): goto L_1AF94;
    case RC_ADDR(0x0001af98u): goto L_1AF98;
    case RC_ADDR(0x0001af9au): goto L_1AF9A;
    case RC_ADDR(0x0001af9cu): goto L_1AF9C;
    case RC_ADDR(0x0001afa0u): goto L_1AFA0;
    case RC_ADDR(0x0001afa6u): goto L_1AFA6;
    case RC_ADDR(0x0001afaau): goto L_1AFAA;
    case RC_ADDR(0x0001afacu): goto L_1AFAC;
    case RC_ADDR(0x0001afaeu): goto L_1AFAE;
    case RC_ADDR(0x0001afb2u): goto L_1AFB2;
    case RC_ADDR(0x0001afb6u): goto L_1AFB6;
    case RC_ADDR(0x0001afb8u): goto L_1AFB8;
    case RC_ADDR(0x0001afbau): goto L_1AFBA;
    case RC_ADDR(0x0001afbeu): goto L_1AFBE;
    case RC_ADDR(0x0001afc4u): goto L_1AFC4;
    case RC_ADDR(0x0001afc8u): goto L_1AFC8;
    case RC_ADDR(0x0001afcau): goto L_1AFCA;
    case RC_ADDR(0x0001afccu): goto L_1AFCC;
    case RC_ADDR(0x0001afd0u): goto L_1AFD0;
    case RC_ADDR(0x0001afd4u): goto L_1AFD4;
    case RC_ADDR(0x0001afd6u): goto L_1AFD6;
    case RC_ADDR(0x0001afd8u): goto L_1AFD8;
    case RC_ADDR(0x0001afdcu): goto L_1AFDC;
    case RC_ADDR(0x0001afe2u): goto L_1AFE2;
    case RC_ADDR(0x0001afe6u): goto L_1AFE6;
    case RC_ADDR(0x0001afe8u): goto L_1AFE8;
    case RC_ADDR(0x0001afeau): goto L_1AFEA;
    case RC_ADDR(0x0001afeeu): goto L_1AFEE;
    case RC_ADDR(0x0001aff2u): goto L_1AFF2;
    case RC_ADDR(0x0001aff4u): goto L_1AFF4;
    case RC_ADDR(0x0001aff6u): goto L_1AFF6;
    case RC_ADDR(0x0001affau): goto L_1AFFA;
    case RC_ADDR(0x0001b000u): goto L_1B000;
    case RC_ADDR(0x0001b004u): goto L_1B004;
    case RC_ADDR(0x0001b008u): goto L_1B008;
    case RC_ADDR(0x0001b00cu): goto L_1B00C;
    case RC_ADDR(0x0001b010u): goto L_1B010;
    case RC_ADDR(0x0001b012u): goto L_1B012;
    case RC_ADDR(0x0001b014u): goto L_1B014;
    case RC_ADDR(0x0001b016u): goto L_1B016;
    case RC_ADDR(0x0001b01au): goto L_1B01A;
    case RC_ADDR(0x0001b01eu): goto L_1B01E;
    case RC_ADDR(0x0001b022u): goto L_1B022;
    case RC_ADDR(0x0001b026u): goto L_1B026;
    case RC_ADDR(0x0001b028u): goto L_1B028;
    case RC_ADDR(0x0001b02au): goto L_1B02A;
    case RC_ADDR(0x0001b02cu): goto L_1B02C;
    case RC_ADDR(0x0001b030u): goto L_1B030;
    case RC_ADDR(0x0001b036u): goto L_1B036;
    case RC_ADDR(0x0001b03au): goto L_1B03A;
    case RC_ADDR(0x0001b03eu): goto L_1B03E;
    case RC_ADDR(0x0001b042u): goto L_1B042;
    case RC_ADDR(0x0001b044u): goto L_1B044;
    case RC_ADDR(0x0001b046u): goto L_1B046;
    case RC_ADDR(0x0001b048u): goto L_1B048;
    case RC_ADDR(0x0001b04cu): goto L_1B04C;
    case RC_ADDR(0x0001b050u): goto L_1B050;
    case RC_ADDR(0x0001b054u): goto L_1B054;
    case RC_ADDR(0x0001b058u): goto L_1B058;
    case RC_ADDR(0x0001b05au): goto L_1B05A;
    case RC_ADDR(0x0001b05cu): goto L_1B05C;
    case RC_ADDR(0x0001b05eu): goto L_1B05E;
    case RC_ADDR(0x0001b062u): goto L_1B062;
    case RC_ADDR(0x0001b068u): goto L_1B068;
    case RC_ADDR(0x0001b06cu): goto L_1B06C;
    case RC_ADDR(0x0001b070u): goto L_1B070;
    case RC_ADDR(0x0001b074u): goto L_1B074;
    case RC_ADDR(0x0001b076u): goto L_1B076;
    case RC_ADDR(0x0001b078u): goto L_1B078;
    case RC_ADDR(0x0001b07au): goto L_1B07A;
    case RC_ADDR(0x0001b07eu): goto L_1B07E;
    case RC_ADDR(0x0001b082u): goto L_1B082;
    case RC_ADDR(0x0001b086u): goto L_1B086;
    case RC_ADDR(0x0001b08au): goto L_1B08A;
    case RC_ADDR(0x0001b08cu): goto L_1B08C;
    case RC_ADDR(0x0001b08eu): goto L_1B08E;
    case RC_ADDR(0x0001b090u): goto L_1B090;
    case RC_ADDR(0x0001b094u): goto L_1B094;
    case RC_ADDR(0x0001b09au): goto L_1B09A;
    case RC_ADDR(0x0001b09eu): goto L_1B09E;
    case RC_ADDR(0x0001b0a4u): goto L_1B0A4;
    case RC_ADDR(0x0001b0a8u): goto L_1B0A8;
    case RC_ADDR(0x0001b0acu): goto L_1B0AC;
    case RC_ADDR(0x0001b0b0u): goto L_1B0B0;
    case RC_ADDR(0x0001b0b4u): goto L_1B0B4;
    case RC_ADDR(0x0001b0b8u): goto L_1B0B8;
    case RC_ADDR(0x0001b0bcu): goto L_1B0BC;
    case RC_ADDR(0x0001b0beu): goto L_1B0BE;
    case RC_ADDR(0x0001b0c2u): goto L_1B0C2;
    case RC_ADDR(0x0001b0c4u): goto L_1B0C4;
    case RC_ADDR(0x0001b0c6u): goto L_1B0C6;
    case RC_ADDR(0x0001b0cau): goto L_1B0CA;
    case RC_ADDR(0x0001b0ceu): goto L_1B0CE;
    case RC_ADDR(0x0001b0d0u): goto L_1B0D0;
    case RC_ADDR(0x0001b0d2u): goto L_1B0D2;
    case RC_ADDR(0x0001b0d6u): goto L_1B0D6;
    case RC_ADDR(0x0001b0dcu): goto L_1B0DC;
    case RC_ADDR(0x0001b0e0u): goto L_1B0E0;
    case RC_ADDR(0x0001b0e2u): goto L_1B0E2;
    case RC_ADDR(0x0001b0e4u): goto L_1B0E4;
    case RC_ADDR(0x0001b0e8u): goto L_1B0E8;
    case RC_ADDR(0x0001b0ecu): goto L_1B0EC;
    case RC_ADDR(0x0001b0eeu): goto L_1B0EE;
    case RC_ADDR(0x0001b0f0u): goto L_1B0F0;
    case RC_ADDR(0x0001b0f4u): goto L_1B0F4;
    case RC_ADDR(0x0001b0fau): goto L_1B0FA;
    case RC_ADDR(0x0001b0feu): goto L_1B0FE;
    case RC_ADDR(0x0001b100u): goto L_1B100;
    case RC_ADDR(0x0001b102u): goto L_1B102;
    case RC_ADDR(0x0001b106u): goto L_1B106;
    case RC_ADDR(0x0001b10au): goto L_1B10A;
    case RC_ADDR(0x0001b10cu): goto L_1B10C;
    case RC_ADDR(0x0001b10eu): goto L_1B10E;
    case RC_ADDR(0x0001b112u): goto L_1B112;
    case RC_ADDR(0x0001b118u): goto L_1B118;
    case RC_ADDR(0x0001b11cu): goto L_1B11C;
    case RC_ADDR(0x0001b120u): goto L_1B120;
    case RC_ADDR(0x0001b124u): goto L_1B124;
    case RC_ADDR(0x0001b126u): goto L_1B126;
    case RC_ADDR(0x0001b12au): goto L_1B12A;
    case RC_ADDR(0x0001b12cu): goto L_1B12C;
    case RC_ADDR(0x0001b130u): goto L_1B130;
    case RC_ADDR(0x0001b132u): goto L_1B132;
    case RC_ADDR(0x0001b134u): goto L_1B134;
    case RC_ADDR(0x0001b138u): goto L_1B138;
    case RC_ADDR(0x0001b13cu): goto L_1B13C;
    case RC_ADDR(0x0001b13eu): goto L_1B13E;
    case RC_ADDR(0x0001b140u): goto L_1B140;
    case RC_ADDR(0x0001b144u): goto L_1B144;
    case RC_ADDR(0x0001b14au): goto L_1B14A;
    case RC_ADDR(0x0001b14eu): goto L_1B14E;
    case RC_ADDR(0x0001b150u): goto L_1B150;
    case RC_ADDR(0x0001b152u): goto L_1B152;
    case RC_ADDR(0x0001b156u): goto L_1B156;
    case RC_ADDR(0x0001b15au): goto L_1B15A;
    case RC_ADDR(0x0001b15cu): goto L_1B15C;
    case RC_ADDR(0x0001b15eu): goto L_1B15E;
    case RC_ADDR(0x0001b162u): goto L_1B162;
    case RC_ADDR(0x0001b168u): goto L_1B168;
    case RC_ADDR(0x0001b16cu): goto L_1B16C;
    case RC_ADDR(0x0001b16eu): goto L_1B16E;
    case RC_ADDR(0x0001b170u): goto L_1B170;
    case RC_ADDR(0x0001b174u): goto L_1B174;
    case RC_ADDR(0x0001b178u): goto L_1B178;
    case RC_ADDR(0x0001b17au): goto L_1B17A;
    case RC_ADDR(0x0001b17cu): goto L_1B17C;
    case RC_ADDR(0x0001b180u): goto L_1B180;
    case RC_ADDR(0x0001b186u): goto L_1B186;
    case RC_ADDR(0x0001b18au): goto L_1B18A;
    case RC_ADDR(0x0001b18eu): goto L_1B18E;
    case RC_ADDR(0x0001b192u): goto L_1B192;
    case RC_ADDR(0x0001b194u): goto L_1B194;
    case RC_ADDR(0x0001b196u): goto L_1B196;
    case RC_ADDR(0x0001b198u): goto L_1B198;
    case RC_ADDR(0x0001b19cu): goto L_1B19C;
    case RC_ADDR(0x0001b19eu): goto L_1B19E;
    case RC_ADDR(0x0001b1a2u): goto L_1B1A2;
    case RC_ADDR(0x0001b1a4u): goto L_1B1A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1ABBE:
    /* 0001abbe   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001abbeu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1ABC2:
    /* 0001abc2   6  move.w (8,A5),(1f40,A4) */
    c->pc = RC_ADDR(0x0001abc2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1f40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABC8:
    /* 0001abc8   6  move.w (8,A5),(1f42,A4) */
    c->pc = RC_ADDR(0x0001abc8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1f42u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABCE:
    /* 0001abce   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x0001abceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABD2:
    /* 0001abd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abd2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ABD4:
    /* 0001abd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001abd4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ABD6:
    /* 0001abd6   4  lea (ffffc7c2,A4),A0 */
    c->pc = RC_ADDR(0x0001abd6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x383eu);

L_1ABDA:
    /* 0001abda   6  move.w (0,A0,D0.w),(74c,A4) */
    c->pc = RC_ADDR(0x0001abdau);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x74cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABE0:
    /* 0001abe0   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x0001abe0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABE4:
    /* 0001abe4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abe4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ABE6:
    /* 0001abe6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001abe6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1ABE8:
    /* 0001abe8   4  lea (ffffc7b6,A4),A0 */
    c->pc = RC_ADDR(0x0001abe8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x384au);

L_1ABEC:
    /* 0001abec   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001abecu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ABF0:
    /* 0001abf0   4  jsr (ffff81b8,A4) */
    c->pc = RC_ADDR(0x0001abf0u);
    rc_step(c, m);
    /* vector 73 */
    rc_push32(c, m, RC_ADDR(0x0001abf4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c0eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b732u);
    return;

L_1ABF4:
    /* 0001abf4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001abf4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ABF6:
    /* 0001abf6   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x0001abf6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABFA:
    /* 0001abfa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001abfau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ABFC:
    /* 0001abfc   4  bra 0001b196 */
    c->pc = RC_ADDR(0x0001abfcu);
    rc_step(c, m);
    goto L_1B196;

L_1AC00:
    /* 0001ac00   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ac00u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AC04:
    /* 0001ac04   4  bra 0001ac8a */
    c->pc = RC_ADDR(0x0001ac04u);
    rc_step(c, m);
    goto L_1AC8A;

L_1AC08:
    /* 0001ac08   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ac08u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AC0C:
    /* 0001ac0c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ac0cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC10:
    /* 0001ac10   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001ac10u);
    rc_step(c, m);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1AC14:
    /* 0001ac14   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001ac14u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC18:
    /* 0001ac18   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ac18u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AC1A:
    /* 0001ac1a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac1au);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC1C:
    /* 0001ac1c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ac1cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AC1E:
    /* 0001ac1e   4  lea (ffffb572,A4),A0 */
    c->pc = RC_ADDR(0x0001ac1eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4a8eu);

L_1AC22:
    /* 0001ac22   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ac22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC26:
    /* 0001ac26   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001ac26u);
    rc_step(c, m);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1AC2A:
    /* 0001ac2a   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001ac2au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC2E:
    /* 0001ac2e   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001ac2eu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1AC30:
    /* 0001ac30   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001ac30u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AC32:
    /* 0001ac32   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001ac32u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1AC34:
    /* 0001ac34   4  lea (13fe,A4),A1 */
    c->pc = RC_ADDR(0x0001ac34u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13feu);

L_1AC38:
    /* 0001ac38   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac38u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC3E:
    /* 0001ac3e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ac3eu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AC42:
    /* 0001ac42   6  cmpi.w #3,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ac42u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1AC48:
    /* 0001ac48   2  blt 0001ac0c */
    c->pc = RC_ADDR(0x0001ac48u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AC0C; }

L_1AC4A:
    /* 0001ac4a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ac4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC4E:
    /* 0001ac4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ac4eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AC50:
    /* 0001ac50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac50u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC52:
    /* 0001ac52   4  lea (ffffb542,A4),A0 */
    c->pc = RC_ADDR(0x0001ac52u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4abeu);

L_1AC56:
    /* 0001ac56   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ac56u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC5A:
    /* 0001ac5a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ac5au);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AC5C:
    /* 0001ac5c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac5cu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC5E:
    /* 0001ac5e   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x0001ac5eu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13ceu);

L_1AC62:
    /* 0001ac62   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac62u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC68:
    /* 0001ac68   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ac68u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC6C:
    /* 0001ac6c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ac6cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AC6E:
    /* 0001ac6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ac6eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AC70:
    /* 0001ac70   4  lea (ffffb55a,A4),A0 */
    c->pc = RC_ADDR(0x0001ac70u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4aa6u);

L_1AC74:
    /* 0001ac74   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ac74u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC78:
    /* 0001ac78   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ac78u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AC7A:
    /* 0001ac7a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ac7au);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AC7C:
    /* 0001ac7c   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x0001ac7cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13e6u);

L_1AC80:
    /* 0001ac80   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ac80u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC86:
    /* 0001ac86   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ac86u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AC8A:
    /* 0001ac8a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ac8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AC8E:
    /* 0001ac8e   4  cmp.w (ffffc64c,A4),D0 */
    c->pc = RC_ADDR(0x0001ac8eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39b4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AC92:
    /* 0001ac92   4  blt 0001ac08 */
    c->pc = RC_ADDR(0x0001ac92u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AC08; }

L_1AC96:
    /* 0001ac96   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ac96u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AC9A:
    /* 0001ac9a   4  bra 0001ade0 */
    c->pc = RC_ADDR(0x0001ac9au);
    rc_step(c, m);
    goto L_1ADE0;

L_1AC9E:
    /* 0001ac9e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ac9eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACA2:
    /* 0001aca2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001aca2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ACA4:
    /* 0001aca4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aca4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACA6:
    /* 0001aca6   4  lea (ffffb5ba,A4),A0 */
    c->pc = RC_ADDR(0x0001aca6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4a46u);

L_1ACAA:
    /* 0001acaa   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001acaau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACAE:
    /* 0001acae   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001acaeu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1ACB0:
    /* 0001acb0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001acb0u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ACB2:
    /* 0001acb2   4  lea (1446,A4),A1 */
    c->pc = RC_ADDR(0x0001acb2u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1446u);

L_1ACB6:
    /* 0001acb6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001acb6u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACBC:
    /* 0001acbc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001acbcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACC0:
    /* 0001acc0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001acc0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ACC2:
    /* 0001acc2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001acc2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACC4:
    /* 0001acc4   4  lea (ffffb5e4,A4),A0 */
    c->pc = RC_ADDR(0x0001acc4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4a1cu);

L_1ACC8:
    /* 0001acc8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001acc8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACCC:
    /* 0001accc   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001acccu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1ACCE:
    /* 0001acce   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001acceu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ACD0:
    /* 0001acd0   4  lea (1474,A4),A1 */
    c->pc = RC_ADDR(0x0001acd0u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1474u);

L_1ACD4:
    /* 0001acd4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001acd4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACDA:
    /* 0001acda   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001acdau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACDE:
    /* 0001acde   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001acdeu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ACE0:
    /* 0001ace0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ace0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ACE2:
    /* 0001ace2   4  lea (ffffb60e,A4),A0 */
    c->pc = RC_ADDR(0x0001ace2u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x49f2u);

L_1ACE6:
    /* 0001ace6   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ace6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACEA:
    /* 0001acea   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aceau);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1ACEC:
    /* 0001acec   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001acecu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ACEE:
    /* 0001acee   4  lea (14a2,A4),A1 */
    c->pc = RC_ADDR(0x0001aceeu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14a2u);

L_1ACF2:
    /* 0001acf2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001acf2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACF8:
    /* 0001acf8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001acf8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ACFC:
    /* 0001acfc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001acfcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ACFE:
    /* 0001acfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001acfeu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD00:
    /* 0001ad00   4  lea (ffffb638,A4),A0 */
    c->pc = RC_ADDR(0x0001ad00u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x49c8u);

L_1AD04:
    /* 0001ad04   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ad04u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD08:
    /* 0001ad08   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad08u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AD0A:
    /* 0001ad0a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad0au);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD0C:
    /* 0001ad0c   4  lea (14d0,A4),A1 */
    c->pc = RC_ADDR(0x0001ad0cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14d0u);

L_1AD10:
    /* 0001ad10   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad10u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD16:
    /* 0001ad16   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ad16u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD1A:
    /* 0001ad1a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ad1au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AD1C:
    /* 0001ad1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ad1cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AD1E:
    /* 0001ad1e   4  lea (ffffb662,A4),A0 */
    c->pc = RC_ADDR(0x0001ad1eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x499eu);

L_1AD22:
    /* 0001ad22   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ad22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD26:
    /* 0001ad26   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad26u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AD28:
    /* 0001ad28   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad28u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD2A:
    /* 0001ad2a   4  lea (14fe,A4),A1 */
    c->pc = RC_ADDR(0x0001ad2au);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14feu);

L_1AD2E:
    /* 0001ad2e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad2eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD34:
    /* 0001ad34   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ad34u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AD38:
    /* 0001ad38   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ad38u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD3C:
    /* 0001ad3c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ad3cu);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AD40:
    /* 0001ad40   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001ad40u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD44:
    /* 0001ad44   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad44u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AD46:
    /* 0001ad46   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad46u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD48:
    /* 0001ad48   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ad48u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AD4A:
    /* 0001ad4a   4  lea (ffffb68c,A4),A0 */
    c->pc = RC_ADDR(0x0001ad4au);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4974u);

L_1AD4E:
    /* 0001ad4e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ad4eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD52:
    /* 0001ad52   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001ad52u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1AD56:
    /* 0001ad56   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001ad56u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD5A:
    /* 0001ad5a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001ad5au);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1AD5C:
    /* 0001ad5c   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001ad5cu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AD5E:
    /* 0001ad5e   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001ad5eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1AD60:
    /* 0001ad60   4  lea (152c,A4),A1 */
    c->pc = RC_ADDR(0x0001ad60u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x152cu);

L_1AD64:
    /* 0001ad64   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad64u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD6A:
    /* 0001ad6a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ad6au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD6E:
    /* 0001ad6e   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ad6eu);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1AD72:
    /* 0001ad72   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001ad72u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD76:
    /* 0001ad76   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ad76u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AD78:
    /* 0001ad78   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ad78u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AD7A:
    /* 0001ad7a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ad7au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AD7C:
    /* 0001ad7c   4  lea (ffffb884,A4),A0 */
    c->pc = RC_ADDR(0x0001ad7cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x477cu);

L_1AD80:
    /* 0001ad80   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ad80u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD84:
    /* 0001ad84   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001ad84u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1AD88:
    /* 0001ad88   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001ad88u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD8C:
    /* 0001ad8c   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001ad8cu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1AD8E:
    /* 0001ad8e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001ad8eu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AD90:
    /* 0001ad90   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001ad90u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1AD92:
    /* 0001ad92   4  lea (1754,A4),A1 */
    c->pc = RC_ADDR(0x0001ad92u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1754u);

L_1AD96:
    /* 0001ad96   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ad96u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AD9C:
    /* 0001ad9c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ad9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADA0:
    /* 0001ada0   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001ada0u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1ADA4:
    /* 0001ada4   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001ada4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADA8:
    /* 0001ada8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ada8u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1ADAA:
    /* 0001adaa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001adaau);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1ADAC:
    /* 0001adac   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001adacu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1ADAE:
    /* 0001adae   4  lea (ffffba7c,A4),A0 */
    c->pc = RC_ADDR(0x0001adaeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4584u);

L_1ADB2:
    /* 0001adb2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001adb2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADB6:
    /* 0001adb6   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001adb6u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1ADBA:
    /* 0001adba   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001adbau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADBE:
    /* 0001adbe   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001adbeu);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1ADC0:
    /* 0001adc0   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001adc0u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1ADC2:
    /* 0001adc2   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001adc2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1ADC4:
    /* 0001adc4   4  lea (197c,A4),A1 */
    c->pc = RC_ADDR(0x0001adc4u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x197cu);

L_1ADC8:
    /* 0001adc8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001adc8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADCE:
    /* 0001adce   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001adceu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1ADD2:
    /* 0001add2   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001add2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1ADD8:
    /* 0001add8   4  blt 0001ad38 */
    c->pc = RC_ADDR(0x0001add8u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AD38; }

L_1ADDC:
    /* 0001addc   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001addcu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1ADE0:
    /* 0001ade0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ade0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADE4:
    /* 0001ade4   4  cmp.w (ffffc652,A4),D0 */
    c->pc = RC_ADDR(0x0001ade4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39aeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ADE8:
    /* 0001ade8   4  blt 0001ac9e */
    c->pc = RC_ADDR(0x0001ade8u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AC9E; }

L_1ADEC:
    /* 0001adec   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001adecu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1ADF0:
    /* 0001adf0   2  bra 0001ae50 */
    c->pc = RC_ADDR(0x0001adf0u);
    rc_step(c, m);
    goto L_1AE50;

L_1ADF2:
    /* 0001adf2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001adf2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ADF6:
    /* 0001adf6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001adf6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1ADF8:
    /* 0001adf8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001adf8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1ADFA:
    /* 0001adfa   4  lea (ffffbc74,A4),A0 */
    c->pc = RC_ADDR(0x0001adfau);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x438cu);

L_1ADFE:
    /* 0001adfe   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001adfeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE02:
    /* 0001ae02   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae02u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AE04:
    /* 0001ae04   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae04u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE06:
    /* 0001ae06   4  lea (1ba4,A4),A1 */
    c->pc = RC_ADDR(0x0001ae06u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1ba4u);

L_1AE0A:
    /* 0001ae0a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae0au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE10:
    /* 0001ae10   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae10u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE14:
    /* 0001ae14   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ae14u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AE16:
    /* 0001ae16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae16u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE18:
    /* 0001ae18   4  lea (ffffbca0,A4),A0 */
    c->pc = RC_ADDR(0x0001ae18u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4360u);

L_1AE1C:
    /* 0001ae1c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ae1cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE20:
    /* 0001ae20   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae20u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AE22:
    /* 0001ae22   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae22u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE24:
    /* 0001ae24   4  lea (1bd2,A4),A1 */
    c->pc = RC_ADDR(0x0001ae24u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1bd2u);

L_1AE28:
    /* 0001ae28   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae28u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE2E:
    /* 0001ae2e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae2eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE32:
    /* 0001ae32   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ae32u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AE34:
    /* 0001ae34   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae34u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE36:
    /* 0001ae36   4  lea (ffffbccc,A4),A0 */
    c->pc = RC_ADDR(0x0001ae36u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4334u);

L_1AE3A:
    /* 0001ae3a   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ae3au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE3E:
    /* 0001ae3e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae3eu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AE40:
    /* 0001ae40   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae40u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE42:
    /* 0001ae42   4  lea (1c00,A4),A1 */
    c->pc = RC_ADDR(0x0001ae42u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c00u);

L_1AE46:
    /* 0001ae46   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae46u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE4C:
    /* 0001ae4c   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ae4cu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AE50:
    /* 0001ae50   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae50u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE54:
    /* 0001ae54   4  cmp.w (ffffc658,A4),D0 */
    c->pc = RC_ADDR(0x0001ae54u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AE58:
    /* 0001ae58   2  blt 0001adf2 */
    c->pc = RC_ADDR(0x0001ae58u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1ADF2; }

L_1AE5A:
    /* 0001ae5a   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ae5au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AE5E:
    /* 0001ae5e   2  bra 0001aebe */
    c->pc = RC_ADDR(0x0001ae5eu);
    rc_step(c, m);
    goto L_1AEBE;

L_1AE60:
    /* 0001ae60   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE64:
    /* 0001ae64   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ae64u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AE66:
    /* 0001ae66   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae66u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE68:
    /* 0001ae68   4  lea (ffffbcf8,A4),A0 */
    c->pc = RC_ADDR(0x0001ae68u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4308u);

L_1AE6C:
    /* 0001ae6c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ae6cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE70:
    /* 0001ae70   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae70u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AE72:
    /* 0001ae72   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae72u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE74:
    /* 0001ae74   4  lea (1c2e,A4),A1 */
    c->pc = RC_ADDR(0x0001ae74u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c2eu);

L_1AE78:
    /* 0001ae78   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae78u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE7E:
    /* 0001ae7e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae7eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE82:
    /* 0001ae82   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ae82u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AE84:
    /* 0001ae84   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ae84u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AE86:
    /* 0001ae86   4  lea (ffffbd24,A4),A0 */
    c->pc = RC_ADDR(0x0001ae86u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x42dcu);

L_1AE8A:
    /* 0001ae8a   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ae8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE8E:
    /* 0001ae8e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ae8eu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AE90:
    /* 0001ae90   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ae90u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AE92:
    /* 0001ae92   4  lea (1c5a,A4),A1 */
    c->pc = RC_ADDR(0x0001ae92u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c5au);

L_1AE96:
    /* 0001ae96   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ae96u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE9C:
    /* 0001ae9c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ae9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEA0:
    /* 0001aea0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001aea0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AEA2:
    /* 0001aea2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001aea2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AEA4:
    /* 0001aea4   4  lea (ffffbd50,A4),A0 */
    c->pc = RC_ADDR(0x0001aea4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x42b0u);

L_1AEA8:
    /* 0001aea8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001aea8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEAC:
    /* 0001aeac   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aeacu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AEAE:
    /* 0001aeae   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aeaeu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AEB0:
    /* 0001aeb0   4  lea (1c86,A4),A1 */
    c->pc = RC_ADDR(0x0001aeb0u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c86u);

L_1AEB4:
    /* 0001aeb4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001aeb4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEBA:
    /* 0001aeba   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001aebau);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AEBE:
    /* 0001aebe   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001aebeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEC2:
    /* 0001aec2   4  cmp.w (ffffc65e,A4),D0 */
    c->pc = RC_ADDR(0x0001aec2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39a2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AEC6:
    /* 0001aec6   2  blt 0001ae60 */
    c->pc = RC_ADDR(0x0001aec6u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AE60; }

L_1AEC8:
    /* 0001aec8   4  bra 0001b1a2 */
    c->pc = RC_ADDR(0x0001aec8u);
    rc_step(c, m);
    goto L_1B1A2;

L_1AECC:
    /* 0001aecc   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001aeccu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AED0:
    /* 0001aed0   4  bra 0001af56 */
    c->pc = RC_ADDR(0x0001aed0u);
    rc_step(c, m);
    goto L_1AF56;

L_1AED4:
    /* 0001aed4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001aed4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AED8:
    /* 0001aed8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001aed8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEDC:
    /* 0001aedc   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001aedcu);
    rc_step(c, m);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1AEE0:
    /* 0001aee0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001aee0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEE4:
    /* 0001aee4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aee4u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AEE6:
    /* 0001aee6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aee6u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AEE8:
    /* 0001aee8   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001aee8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1AEEA:
    /* 0001aeea   4  lea (ffffbda8,A4),A0 */
    c->pc = RC_ADDR(0x0001aeeau);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4258u);

L_1AEEE:
    /* 0001aeee   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001aeeeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEF2:
    /* 0001aef2   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001aef2u);
    rc_step(c, m);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1AEF6:
    /* 0001aef6   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001aef6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AEFA:
    /* 0001aefa   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001aefau);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1AEFC:
    /* 0001aefc   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001aefcu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1AEFE:
    /* 0001aefe   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001aefeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1AF00:
    /* 0001af00   4  lea (13fe,A4),A1 */
    c->pc = RC_ADDR(0x0001af00u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13feu);

L_1AF04:
    /* 0001af04   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af04u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF0A:
    /* 0001af0a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001af0au);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AF0E:
    /* 0001af0e   6  cmpi.w #3,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001af0eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1AF14:
    /* 0001af14   2  blt 0001aed8 */
    c->pc = RC_ADDR(0x0001af14u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AED8; }

L_1AF16:
    /* 0001af16   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001af16u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF1A:
    /* 0001af1a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af1au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AF1C:
    /* 0001af1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af1cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF1E:
    /* 0001af1e   4  lea (ffffbd7c,A4),A0 */
    c->pc = RC_ADDR(0x0001af1eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4284u);

L_1AF22:
    /* 0001af22   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001af22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF26:
    /* 0001af26   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001af26u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AF28:
    /* 0001af28   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af28u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF2A:
    /* 0001af2a   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x0001af2au);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13ceu);

L_1AF2E:
    /* 0001af2e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af2eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF34:
    /* 0001af34   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001af34u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF38:
    /* 0001af38   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af38u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AF3A:
    /* 0001af3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af3au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF3C:
    /* 0001af3c   4  lea (ffffbd92,A4),A0 */
    c->pc = RC_ADDR(0x0001af3cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x426eu);

L_1AF40:
    /* 0001af40   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001af40u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF44:
    /* 0001af44   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001af44u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AF46:
    /* 0001af46   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af46u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF48:
    /* 0001af48   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x0001af48u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x13e6u);

L_1AF4C:
    /* 0001af4c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af4cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF52:
    /* 0001af52   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001af52u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1AF56:
    /* 0001af56   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001af56u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF5A:
    /* 0001af5a   4  cmp.w (ffffc64e,A4),D0 */
    c->pc = RC_ADDR(0x0001af5au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39b2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AF5E:
    /* 0001af5e   4  blt 0001aed4 */
    c->pc = RC_ADDR(0x0001af5eu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AED4; }

L_1AF62:
    /* 0001af62   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001af62u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1AF66:
    /* 0001af66   4  bra 0001b0ac */
    c->pc = RC_ADDR(0x0001af66u);
    rc_step(c, m);
    goto L_1B0AC;

L_1AF6A:
    /* 0001af6a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001af6au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF6E:
    /* 0001af6e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af6eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AF70:
    /* 0001af70   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af70u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF72:
    /* 0001af72   4  lea (ffffbdea,A4),A0 */
    c->pc = RC_ADDR(0x0001af72u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4216u);

L_1AF76:
    /* 0001af76   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001af76u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF7A:
    /* 0001af7a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001af7au);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AF7C:
    /* 0001af7c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af7cu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF7E:
    /* 0001af7e   4  lea (1446,A4),A1 */
    c->pc = RC_ADDR(0x0001af7eu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1446u);

L_1AF82:
    /* 0001af82   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001af82u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF88:
    /* 0001af88   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001af88u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF8C:
    /* 0001af8c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001af8cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AF8E:
    /* 0001af8e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001af8eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AF90:
    /* 0001af90   4  lea (ffffbe18,A4),A0 */
    c->pc = RC_ADDR(0x0001af90u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x41e8u);

L_1AF94:
    /* 0001af94   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001af94u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AF98:
    /* 0001af98   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001af98u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AF9A:
    /* 0001af9a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001af9au);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AF9C:
    /* 0001af9c   4  lea (1474,A4),A1 */
    c->pc = RC_ADDR(0x0001af9cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1474u);

L_1AFA0:
    /* 0001afa0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afa0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFA6:
    /* 0001afa6   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001afa6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFAA:
    /* 0001afaa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001afaau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AFAC:
    /* 0001afac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001afacu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AFAE:
    /* 0001afae   4  lea (ffffbe46,A4),A0 */
    c->pc = RC_ADDR(0x0001afaeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x41bau);

L_1AFB2:
    /* 0001afb2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001afb2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFB6:
    /* 0001afb6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001afb6u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AFB8:
    /* 0001afb8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001afb8u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFBA:
    /* 0001afba   4  lea (14a2,A4),A1 */
    c->pc = RC_ADDR(0x0001afbau);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14a2u);

L_1AFBE:
    /* 0001afbe   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afbeu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFC4:
    /* 0001afc4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001afc4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFC8:
    /* 0001afc8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001afc8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AFCA:
    /* 0001afca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001afcau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AFCC:
    /* 0001afcc   4  lea (ffffbe74,A4),A0 */
    c->pc = RC_ADDR(0x0001afccu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x418cu);

L_1AFD0:
    /* 0001afd0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001afd0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFD4:
    /* 0001afd4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001afd4u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AFD6:
    /* 0001afd6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001afd6u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFD8:
    /* 0001afd8   4  lea (14d0,A4),A1 */
    c->pc = RC_ADDR(0x0001afd8u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14d0u);

L_1AFDC:
    /* 0001afdc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001afdcu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFE2:
    /* 0001afe2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001afe2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFE6:
    /* 0001afe6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001afe6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1AFE8:
    /* 0001afe8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001afe8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1AFEA:
    /* 0001afea   4  lea (ffffbea2,A4),A0 */
    c->pc = RC_ADDR(0x0001afeau);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x415eu);

L_1AFEE:
    /* 0001afee   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001afeeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AFF2:
    /* 0001aff2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001aff2u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1AFF4:
    /* 0001aff4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001aff4u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1AFF6:
    /* 0001aff6   4  lea (14fe,A4),A1 */
    c->pc = RC_ADDR(0x0001aff6u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x14feu);

L_1AFFA:
    /* 0001affa   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001affau);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B000:
    /* 0001b000   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b000u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B004:
    /* 0001b004   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b004u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B008:
    /* 0001b008   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001b008u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1B00C:
    /* 0001b00c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001b00cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B010:
    /* 0001b010   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b010u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B012:
    /* 0001b012   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b012u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B014:
    /* 0001b014   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001b014u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B016:
    /* 0001b016   4  lea (ffffbed0,A4),A0 */
    c->pc = RC_ADDR(0x0001b016u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4130u);

L_1B01A:
    /* 0001b01a   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b01au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B01E:
    /* 0001b01e   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001b01eu);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1B022:
    /* 0001b022   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001b022u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B026:
    /* 0001b026   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001b026u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1B028:
    /* 0001b028   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001b028u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1B02A:
    /* 0001b02a   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001b02au);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1B02C:
    /* 0001b02c   4  lea (152c,A4),A1 */
    c->pc = RC_ADDR(0x0001b02cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x152cu);

L_1B030:
    /* 0001b030   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b030u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B036:
    /* 0001b036   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b036u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B03A:
    /* 0001b03a   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001b03au);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1B03E:
    /* 0001b03e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001b03eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B042:
    /* 0001b042   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b042u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B044:
    /* 0001b044   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b044u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B046:
    /* 0001b046   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001b046u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B048:
    /* 0001b048   4  lea (ffffc0f8,A4),A0 */
    c->pc = RC_ADDR(0x0001b048u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3f08u);

L_1B04C:
    /* 0001b04c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b04cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B050:
    /* 0001b050   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001b050u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1B054:
    /* 0001b054   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001b054u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B058:
    /* 0001b058   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001b058u);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1B05A:
    /* 0001b05a   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001b05au);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1B05C:
    /* 0001b05c   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001b05cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1B05E:
    /* 0001b05e   4  lea (1754,A4),A1 */
    c->pc = RC_ADDR(0x0001b05eu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1754u);

L_1B062:
    /* 0001b062   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b062u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B068:
    /* 0001b068   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b068u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B06C:
    /* 0001b06c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001b06cu);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1B070:
    /* 0001b070   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001b070u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B074:
    /* 0001b074   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b074u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B076:
    /* 0001b076   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b076u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B078:
    /* 0001b078   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001b078u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B07A:
    /* 0001b07a   4  lea (ffffc320,A4),A0 */
    c->pc = RC_ADDR(0x0001b07au);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3ce0u);

L_1B07E:
    /* 0001b07e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b07eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B082:
    /* 0001b082   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001b082u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1B086:
    /* 0001b086   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001b086u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B08A:
    /* 0001b08a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001b08au);
    rc_step(c, m);
    rc_ext_l(c, 2);

L_1B08C:
    /* 0001b08c   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001b08cu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1B08E:
    /* 0001b08e   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001b08eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1B090:
    /* 0001b090   4  lea (197c,A4),A1 */
    c->pc = RC_ADDR(0x0001b090u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x197cu);

L_1B094:
    /* 0001b094   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b094u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B09A:
    /* 0001b09a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b09au);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B09E:
    /* 0001b09e   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001b09eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1B0A4:
    /* 0001b0a4   4  blt 0001b004 */
    c->pc = RC_ADDR(0x0001b0a4u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B004; }

L_1B0A8:
    /* 0001b0a8   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b0a8u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B0AC:
    /* 0001b0ac   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b0acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0B0:
    /* 0001b0b0   4  cmp.w (ffffc654,A4),D0 */
    c->pc = RC_ADDR(0x0001b0b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39acu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B0B4:
    /* 0001b0b4   4  blt 0001af6a */
    c->pc = RC_ADDR(0x0001b0b4u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AF6A; }

L_1B0B8:
    /* 0001b0b8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b0b8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B0BC:
    /* 0001b0bc   2  bra 0001b11c */
    c->pc = RC_ADDR(0x0001b0bcu);
    rc_step(c, m);
    goto L_1B11C;

L_1B0BE:
    /* 0001b0be   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b0beu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0C2:
    /* 0001b0c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b0c2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B0C4:
    /* 0001b0c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0c4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0C6:
    /* 0001b0c6   4  lea (ffffc548,A4),A0 */
    c->pc = RC_ADDR(0x0001b0c6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3ab8u);

L_1B0CA:
    /* 0001b0ca   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b0cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0CE:
    /* 0001b0ce   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b0ceu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B0D0:
    /* 0001b0d0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b0d0u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B0D2:
    /* 0001b0d2   4  lea (1ba4,A4),A1 */
    c->pc = RC_ADDR(0x0001b0d2u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1ba4u);

L_1B0D6:
    /* 0001b0d6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b0d6u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0DC:
    /* 0001b0dc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b0dcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0E0:
    /* 0001b0e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b0e0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B0E2:
    /* 0001b0e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b0e2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B0E4:
    /* 0001b0e4   4  lea (ffffc576,A4),A0 */
    c->pc = RC_ADDR(0x0001b0e4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3a8au);

L_1B0E8:
    /* 0001b0e8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b0e8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0EC:
    /* 0001b0ec   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b0ecu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B0EE:
    /* 0001b0ee   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b0eeu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B0F0:
    /* 0001b0f0   4  lea (1bd2,A4),A1 */
    c->pc = RC_ADDR(0x0001b0f0u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1bd2u);

L_1B0F4:
    /* 0001b0f4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b0f4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0FA:
    /* 0001b0fa   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b0fau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B0FE:
    /* 0001b0fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b0feu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B100:
    /* 0001b100   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b100u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B102:
    /* 0001b102   4  lea (ffffc5a4,A4),A0 */
    c->pc = RC_ADDR(0x0001b102u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3a5cu);

L_1B106:
    /* 0001b106   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b106u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B10A:
    /* 0001b10a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b10au);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B10C:
    /* 0001b10c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b10cu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B10E:
    /* 0001b10e   4  lea (1c00,A4),A1 */
    c->pc = RC_ADDR(0x0001b10eu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c00u);

L_1B112:
    /* 0001b112   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b112u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B118:
    /* 0001b118   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b118u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B11C:
    /* 0001b11c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b11cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B120:
    /* 0001b120   4  cmp.w (ffffc65a,A4),D0 */
    c->pc = RC_ADDR(0x0001b120u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39a6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B124:
    /* 0001b124   2  blt 0001b0be */
    c->pc = RC_ADDR(0x0001b124u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B0BE; }

L_1B126:
    /* 0001b126   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b126u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B12A:
    /* 0001b12a   2  bra 0001b18a */
    c->pc = RC_ADDR(0x0001b12au);
    rc_step(c, m);
    goto L_1B18A;

L_1B12C:
    /* 0001b12c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b12cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B130:
    /* 0001b130   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b130u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B132:
    /* 0001b132   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b132u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B134:
    /* 0001b134   4  lea (ffffc5d2,A4),A0 */
    c->pc = RC_ADDR(0x0001b134u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3a2eu);

L_1B138:
    /* 0001b138   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b138u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B13C:
    /* 0001b13c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b13cu);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B13E:
    /* 0001b13e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b13eu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B140:
    /* 0001b140   4  lea (1c2e,A4),A1 */
    c->pc = RC_ADDR(0x0001b140u);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c2eu);

L_1B144:
    /* 0001b144   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b144u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B14A:
    /* 0001b14a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b14au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B14E:
    /* 0001b14e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b14eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B150:
    /* 0001b150   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b150u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B152:
    /* 0001b152   4  lea (ffffc5fa,A4),A0 */
    c->pc = RC_ADDR(0x0001b152u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3a06u);

L_1B156:
    /* 0001b156   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b156u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B15A:
    /* 0001b15a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b15au);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B15C:
    /* 0001b15c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b15cu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B15E:
    /* 0001b15e   4  lea (1c5a,A4),A1 */
    c->pc = RC_ADDR(0x0001b15eu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c5au);

L_1B162:
    /* 0001b162   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b162u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B168:
    /* 0001b168   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b168u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B16C:
    /* 0001b16c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b16cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1B16E:
    /* 0001b16e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b16eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B170:
    /* 0001b170   4  lea (ffffc622,A4),A0 */
    c->pc = RC_ADDR(0x0001b170u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x39deu);

L_1B174:
    /* 0001b174   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b174u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B178:
    /* 0001b178   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b178u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1B17A:
    /* 0001b17a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b17au);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B17C:
    /* 0001b17c   4  lea (1c86,A4),A1 */
    c->pc = RC_ADDR(0x0001b17cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1c86u);

L_1B180:
    /* 0001b180   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b180u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B186:
    /* 0001b186   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b186u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B18A:
    /* 0001b18a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b18au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B18E:
    /* 0001b18e   4  cmp.w (ffffc660,A4),D0 */
    c->pc = RC_ADDR(0x0001b18eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x39a0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B192:
    /* 0001b192   2  blt 0001b12c */
    c->pc = RC_ADDR(0x0001b192u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B12C; }

L_1B194:
    /* 0001b194   2  bra 0001b1a2 */
    c->pc = RC_ADDR(0x0001b194u);
    rc_step(c, m);
    goto L_1B1A2;

L_1B196:
    /* 0001b196   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b196u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B198:
    /* 0001b198   4  beq 0001ac00 */
    c->pc = RC_ADDR(0x0001b198u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1AC00; }

L_1B19C:
    /* 0001b19c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b19cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B19E:
    /* 0001b19e   4  beq 0001aecc */
    c->pc = RC_ADDR(0x0001b19eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1AECC; }

L_1B1A2:
    /* 0001b1a2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b1a2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B1A4:
    /* 0001b1a4   2  rts */
    c->pc = RC_ADDR(0x0001b1a4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
