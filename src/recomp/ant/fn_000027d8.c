/* fn_000027d8 - 1726 byte(s), 484 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000027d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000027d8u): goto L_27D8;
    case RC_ADDR(0x000027dcu): goto L_27DC;
    case RC_ADDR(0x000027e0u): goto L_27E0;
    case RC_ADDR(0x000027e4u): goto L_27E4;
    case RC_ADDR(0x000027e8u): goto L_27E8;
    case RC_ADDR(0x000027ecu): goto L_27EC;
    case RC_ADDR(0x000027f0u): goto L_27F0;
    case RC_ADDR(0x000027f6u): goto L_27F6;
    case RC_ADDR(0x000027fau): goto L_27FA;
    case RC_ADDR(0x000027feu): goto L_27FE;
    case RC_ADDR(0x00002802u): goto L_2802;
    case RC_ADDR(0x00002808u): goto L_2808;
    case RC_ADDR(0x0000280eu): goto L_280E;
    case RC_ADDR(0x00002812u): goto L_2812;
    case RC_ADDR(0x00002818u): goto L_2818;
    case RC_ADDR(0x0000281cu): goto L_281C;
    case RC_ADDR(0x00002820u): goto L_2820;
    case RC_ADDR(0x00002822u): goto L_2822;
    case RC_ADDR(0x00002826u): goto L_2826;
    case RC_ADDR(0x0000282au): goto L_282A;
    case RC_ADDR(0x0000282eu): goto L_282E;
    case RC_ADDR(0x00002834u): goto L_2834;
    case RC_ADDR(0x00002836u): goto L_2836;
    case RC_ADDR(0x0000283cu): goto L_283C;
    case RC_ADDR(0x0000283eu): goto L_283E;
    case RC_ADDR(0x00002842u): goto L_2842;
    case RC_ADDR(0x00002846u): goto L_2846;
    case RC_ADDR(0x0000284au): goto L_284A;
    case RC_ADDR(0x0000284cu): goto L_284C;
    case RC_ADDR(0x00002850u): goto L_2850;
    case RC_ADDR(0x00002852u): goto L_2852;
    case RC_ADDR(0x00002854u): goto L_2854;
    case RC_ADDR(0x00002856u): goto L_2856;
    case RC_ADDR(0x0000285au): goto L_285A;
    case RC_ADDR(0x0000285eu): goto L_285E;
    case RC_ADDR(0x00002860u): goto L_2860;
    case RC_ADDR(0x00002864u): goto L_2864;
    case RC_ADDR(0x00002866u): goto L_2866;
    case RC_ADDR(0x0000286au): goto L_286A;
    case RC_ADDR(0x00002870u): goto L_2870;
    case RC_ADDR(0x00002876u): goto L_2876;
    case RC_ADDR(0x00002878u): goto L_2878;
    case RC_ADDR(0x0000287cu): goto L_287C;
    case RC_ADDR(0x00002880u): goto L_2880;
    case RC_ADDR(0x00002882u): goto L_2882;
    case RC_ADDR(0x00002884u): goto L_2884;
    case RC_ADDR(0x00002886u): goto L_2886;
    case RC_ADDR(0x0000288au): goto L_288A;
    case RC_ADDR(0x00002890u): goto L_2890;
    case RC_ADDR(0x00002896u): goto L_2896;
    case RC_ADDR(0x00002898u): goto L_2898;
    case RC_ADDR(0x0000289cu): goto L_289C;
    case RC_ADDR(0x0000289eu): goto L_289E;
    case RC_ADDR(0x000028a2u): goto L_28A2;
    case RC_ADDR(0x000028a6u): goto L_28A6;
    case RC_ADDR(0x000028aau): goto L_28AA;
    case RC_ADDR(0x000028acu): goto L_28AC;
    case RC_ADDR(0x000028b0u): goto L_28B0;
    case RC_ADDR(0x000028b4u): goto L_28B4;
    case RC_ADDR(0x000028b8u): goto L_28B8;
    case RC_ADDR(0x000028bcu): goto L_28BC;
    case RC_ADDR(0x000028c2u): goto L_28C2;
    case RC_ADDR(0x000028c8u): goto L_28C8;
    case RC_ADDR(0x000028cau): goto L_28CA;
    case RC_ADDR(0x000028ccu): goto L_28CC;
    case RC_ADDR(0x000028ceu): goto L_28CE;
    case RC_ADDR(0x000028d2u): goto L_28D2;
    case RC_ADDR(0x000028d6u): goto L_28D6;
    case RC_ADDR(0x000028dau): goto L_28DA;
    case RC_ADDR(0x000028deu): goto L_28DE;
    case RC_ADDR(0x000028e4u): goto L_28E4;
    case RC_ADDR(0x000028e8u): goto L_28E8;
    case RC_ADDR(0x000028ecu): goto L_28EC;
    case RC_ADDR(0x000028f0u): goto L_28F0;
    case RC_ADDR(0x000028f4u): goto L_28F4;
    case RC_ADDR(0x000028f6u): goto L_28F6;
    case RC_ADDR(0x000028fau): goto L_28FA;
    case RC_ADDR(0x000028fcu): goto L_28FC;
    case RC_ADDR(0x000028feu): goto L_28FE;
    case RC_ADDR(0x00002902u): goto L_2902;
    case RC_ADDR(0x00002906u): goto L_2906;
    case RC_ADDR(0x0000290au): goto L_290A;
    case RC_ADDR(0x0000290eu): goto L_290E;
    case RC_ADDR(0x00002910u): goto L_2910;
    case RC_ADDR(0x00002914u): goto L_2914;
    case RC_ADDR(0x00002916u): goto L_2916;
    case RC_ADDR(0x00002918u): goto L_2918;
    case RC_ADDR(0x0000291cu): goto L_291C;
    case RC_ADDR(0x00002920u): goto L_2920;
    case RC_ADDR(0x00002924u): goto L_2924;
    case RC_ADDR(0x00002928u): goto L_2928;
    case RC_ADDR(0x0000292au): goto L_292A;
    case RC_ADDR(0x0000292eu): goto L_292E;
    case RC_ADDR(0x00002930u): goto L_2930;
    case RC_ADDR(0x00002932u): goto L_2932;
    case RC_ADDR(0x00002936u): goto L_2936;
    case RC_ADDR(0x0000293au): goto L_293A;
    case RC_ADDR(0x0000293eu): goto L_293E;
    case RC_ADDR(0x00002940u): goto L_2940;
    case RC_ADDR(0x00002944u): goto L_2944;
    case RC_ADDR(0x00002948u): goto L_2948;
    case RC_ADDR(0x0000294au): goto L_294A;
    case RC_ADDR(0x0000294cu): goto L_294C;
    case RC_ADDR(0x00002950u): goto L_2950;
    case RC_ADDR(0x00002954u): goto L_2954;
    case RC_ADDR(0x00002958u): goto L_2958;
    case RC_ADDR(0x0000295au): goto L_295A;
    case RC_ADDR(0x0000295cu): goto L_295C;
    case RC_ADDR(0x00002960u): goto L_2960;
    case RC_ADDR(0x00002964u): goto L_2964;
    case RC_ADDR(0x00002968u): goto L_2968;
    case RC_ADDR(0x0000296cu): goto L_296C;
    case RC_ADDR(0x0000296eu): goto L_296E;
    case RC_ADDR(0x00002974u): goto L_2974;
    case RC_ADDR(0x00002976u): goto L_2976;
    case RC_ADDR(0x0000297au): goto L_297A;
    case RC_ADDR(0x0000297eu): goto L_297E;
    case RC_ADDR(0x00002980u): goto L_2980;
    case RC_ADDR(0x00002982u): goto L_2982;
    case RC_ADDR(0x00002986u): goto L_2986;
    case RC_ADDR(0x0000298au): goto L_298A;
    case RC_ADDR(0x0000298eu): goto L_298E;
    case RC_ADDR(0x00002992u): goto L_2992;
    case RC_ADDR(0x00002996u): goto L_2996;
    case RC_ADDR(0x00002998u): goto L_2998;
    case RC_ADDR(0x0000299cu): goto L_299C;
    case RC_ADDR(0x0000299eu): goto L_299E;
    case RC_ADDR(0x000029a2u): goto L_29A2;
    case RC_ADDR(0x000029a4u): goto L_29A4;
    case RC_ADDR(0x000029a6u): goto L_29A6;
    case RC_ADDR(0x000029aau): goto L_29AA;
    case RC_ADDR(0x000029acu): goto L_29AC;
    case RC_ADDR(0x000029b0u): goto L_29B0;
    case RC_ADDR(0x000029b2u): goto L_29B2;
    case RC_ADDR(0x000029b4u): goto L_29B4;
    case RC_ADDR(0x000029b8u): goto L_29B8;
    case RC_ADDR(0x000029beu): goto L_29BE;
    case RC_ADDR(0x000029c2u): goto L_29C2;
    case RC_ADDR(0x000029c4u): goto L_29C4;
    case RC_ADDR(0x000029c6u): goto L_29C6;
    case RC_ADDR(0x000029cau): goto L_29CA;
    case RC_ADDR(0x000029ceu): goto L_29CE;
    case RC_ADDR(0x000029d2u): goto L_29D2;
    case RC_ADDR(0x000029d4u): goto L_29D4;
    case RC_ADDR(0x000029d8u): goto L_29D8;
    case RC_ADDR(0x000029dau): goto L_29DA;
    case RC_ADDR(0x000029deu): goto L_29DE;
    case RC_ADDR(0x000029e0u): goto L_29E0;
    case RC_ADDR(0x000029e4u): goto L_29E4;
    case RC_ADDR(0x000029e8u): goto L_29E8;
    case RC_ADDR(0x000029ecu): goto L_29EC;
    case RC_ADDR(0x000029eeu): goto L_29EE;
    case RC_ADDR(0x000029f0u): goto L_29F0;
    case RC_ADDR(0x000029f4u): goto L_29F4;
    case RC_ADDR(0x000029fau): goto L_29FA;
    case RC_ADDR(0x000029fcu): goto L_29FC;
    case RC_ADDR(0x00002a00u): goto L_2A00;
    case RC_ADDR(0x00002a04u): goto L_2A04;
    case RC_ADDR(0x00002a08u): goto L_2A08;
    case RC_ADDR(0x00002a0au): goto L_2A0A;
    case RC_ADDR(0x00002a0cu): goto L_2A0C;
    case RC_ADDR(0x00002a10u): goto L_2A10;
    case RC_ADDR(0x00002a16u): goto L_2A16;
    case RC_ADDR(0x00002a1cu): goto L_2A1C;
    case RC_ADDR(0x00002a20u): goto L_2A20;
    case RC_ADDR(0x00002a22u): goto L_2A22;
    case RC_ADDR(0x00002a24u): goto L_2A24;
    case RC_ADDR(0x00002a26u): goto L_2A26;
    case RC_ADDR(0x00002a2au): goto L_2A2A;
    case RC_ADDR(0x00002a2eu): goto L_2A2E;
    case RC_ADDR(0x00002a32u): goto L_2A32;
    case RC_ADDR(0x00002a36u): goto L_2A36;
    case RC_ADDR(0x00002a38u): goto L_2A38;
    case RC_ADDR(0x00002a3cu): goto L_2A3C;
    case RC_ADDR(0x00002a3eu): goto L_2A3E;
    case RC_ADDR(0x00002a40u): goto L_2A40;
    case RC_ADDR(0x00002a44u): goto L_2A44;
    case RC_ADDR(0x00002a4au): goto L_2A4A;
    case RC_ADDR(0x00002a4eu): goto L_2A4E;
    case RC_ADDR(0x00002a52u): goto L_2A52;
    case RC_ADDR(0x00002a56u): goto L_2A56;
    case RC_ADDR(0x00002a5au): goto L_2A5A;
    case RC_ADDR(0x00002a5cu): goto L_2A5C;
    case RC_ADDR(0x00002a60u): goto L_2A60;
    case RC_ADDR(0x00002a62u): goto L_2A62;
    case RC_ADDR(0x00002a64u): goto L_2A64;
    case RC_ADDR(0x00002a68u): goto L_2A68;
    case RC_ADDR(0x00002a6eu): goto L_2A6E;
    case RC_ADDR(0x00002a72u): goto L_2A72;
    case RC_ADDR(0x00002a74u): goto L_2A74;
    case RC_ADDR(0x00002a76u): goto L_2A76;
    case RC_ADDR(0x00002a7au): goto L_2A7A;
    case RC_ADDR(0x00002a80u): goto L_2A80;
    case RC_ADDR(0x00002a84u): goto L_2A84;
    case RC_ADDR(0x00002a88u): goto L_2A88;
    case RC_ADDR(0x00002a8au): goto L_2A8A;
    case RC_ADDR(0x00002a8eu): goto L_2A8E;
    case RC_ADDR(0x00002a90u): goto L_2A90;
    case RC_ADDR(0x00002a96u): goto L_2A96;
    case RC_ADDR(0x00002a98u): goto L_2A98;
    case RC_ADDR(0x00002a9cu): goto L_2A9C;
    case RC_ADDR(0x00002aa2u): goto L_2AA2;
    case RC_ADDR(0x00002aa6u): goto L_2AA6;
    case RC_ADDR(0x00002aaau): goto L_2AAA;
    case RC_ADDR(0x00002aaeu): goto L_2AAE;
    case RC_ADDR(0x00002ab0u): goto L_2AB0;
    case RC_ADDR(0x00002ab4u): goto L_2AB4;
    case RC_ADDR(0x00002ab6u): goto L_2AB6;
    case RC_ADDR(0x00002ab8u): goto L_2AB8;
    case RC_ADDR(0x00002abcu): goto L_2ABC;
    case RC_ADDR(0x00002ac2u): goto L_2AC2;
    case RC_ADDR(0x00002ac6u): goto L_2AC6;
    case RC_ADDR(0x00002ac8u): goto L_2AC8;
    case RC_ADDR(0x00002acau): goto L_2ACA;
    case RC_ADDR(0x00002aceu): goto L_2ACE;
    case RC_ADDR(0x00002ad4u): goto L_2AD4;
    case RC_ADDR(0x00002ad8u): goto L_2AD8;
    case RC_ADDR(0x00002adau): goto L_2ADA;
    case RC_ADDR(0x00002ae0u): goto L_2AE0;
    case RC_ADDR(0x00002ae4u): goto L_2AE4;
    case RC_ADDR(0x00002ae8u): goto L_2AE8;
    case RC_ADDR(0x00002aecu): goto L_2AEC;
    case RC_ADDR(0x00002af0u): goto L_2AF0;
    case RC_ADDR(0x00002af2u): goto L_2AF2;
    case RC_ADDR(0x00002af4u): goto L_2AF4;
    case RC_ADDR(0x00002af8u): goto L_2AF8;
    case RC_ADDR(0x00002afcu): goto L_2AFC;
    case RC_ADDR(0x00002b00u): goto L_2B00;
    case RC_ADDR(0x00002b04u): goto L_2B04;
    case RC_ADDR(0x00002b08u): goto L_2B08;
    case RC_ADDR(0x00002b0au): goto L_2B0A;
    case RC_ADDR(0x00002b0eu): goto L_2B0E;
    case RC_ADDR(0x00002b10u): goto L_2B10;
    case RC_ADDR(0x00002b12u): goto L_2B12;
    case RC_ADDR(0x00002b16u): goto L_2B16;
    case RC_ADDR(0x00002b1cu): goto L_2B1C;
    case RC_ADDR(0x00002b20u): goto L_2B20;
    case RC_ADDR(0x00002b26u): goto L_2B26;
    case RC_ADDR(0x00002b2au): goto L_2B2A;
    case RC_ADDR(0x00002b2eu): goto L_2B2E;
    case RC_ADDR(0x00002b32u): goto L_2B32;
    case RC_ADDR(0x00002b34u): goto L_2B34;
    case RC_ADDR(0x00002b38u): goto L_2B38;
    case RC_ADDR(0x00002b3au): goto L_2B3A;
    case RC_ADDR(0x00002b3cu): goto L_2B3C;
    case RC_ADDR(0x00002b40u): goto L_2B40;
    case RC_ADDR(0x00002b46u): goto L_2B46;
    case RC_ADDR(0x00002b4au): goto L_2B4A;
    case RC_ADDR(0x00002b4cu): goto L_2B4C;
    case RC_ADDR(0x00002b4eu): goto L_2B4E;
    case RC_ADDR(0x00002b52u): goto L_2B52;
    case RC_ADDR(0x00002b58u): goto L_2B58;
    case RC_ADDR(0x00002b5cu): goto L_2B5C;
    case RC_ADDR(0x00002b60u): goto L_2B60;
    case RC_ADDR(0x00002b64u): goto L_2B64;
    case RC_ADDR(0x00002b68u): goto L_2B68;
    case RC_ADDR(0x00002b6au): goto L_2B6A;
    case RC_ADDR(0x00002b6eu): goto L_2B6E;
    case RC_ADDR(0x00002b70u): goto L_2B70;
    case RC_ADDR(0x00002b72u): goto L_2B72;
    case RC_ADDR(0x00002b76u): goto L_2B76;
    case RC_ADDR(0x00002b7cu): goto L_2B7C;
    case RC_ADDR(0x00002b80u): goto L_2B80;
    case RC_ADDR(0x00002b84u): goto L_2B84;
    case RC_ADDR(0x00002b88u): goto L_2B88;
    case RC_ADDR(0x00002b8cu): goto L_2B8C;
    case RC_ADDR(0x00002b8eu): goto L_2B8E;
    case RC_ADDR(0x00002b92u): goto L_2B92;
    case RC_ADDR(0x00002b94u): goto L_2B94;
    case RC_ADDR(0x00002b96u): goto L_2B96;
    case RC_ADDR(0x00002b9au): goto L_2B9A;
    case RC_ADDR(0x00002ba0u): goto L_2BA0;
    case RC_ADDR(0x00002ba4u): goto L_2BA4;
    case RC_ADDR(0x00002ba8u): goto L_2BA8;
    case RC_ADDR(0x00002bacu): goto L_2BAC;
    case RC_ADDR(0x00002bb0u): goto L_2BB0;
    case RC_ADDR(0x00002bb2u): goto L_2BB2;
    case RC_ADDR(0x00002bb6u): goto L_2BB6;
    case RC_ADDR(0x00002bb8u): goto L_2BB8;
    case RC_ADDR(0x00002bbau): goto L_2BBA;
    case RC_ADDR(0x00002bbeu): goto L_2BBE;
    case RC_ADDR(0x00002bc4u): goto L_2BC4;
    case RC_ADDR(0x00002bc8u): goto L_2BC8;
    case RC_ADDR(0x00002bccu): goto L_2BCC;
    case RC_ADDR(0x00002bd0u): goto L_2BD0;
    case RC_ADDR(0x00002bd4u): goto L_2BD4;
    case RC_ADDR(0x00002bd8u): goto L_2BD8;
    case RC_ADDR(0x00002bdcu): goto L_2BDC;
    case RC_ADDR(0x00002bdeu): goto L_2BDE;
    case RC_ADDR(0x00002be2u): goto L_2BE2;
    case RC_ADDR(0x00002be4u): goto L_2BE4;
    case RC_ADDR(0x00002be6u): goto L_2BE6;
    case RC_ADDR(0x00002beau): goto L_2BEA;
    case RC_ADDR(0x00002bf0u): goto L_2BF0;
    case RC_ADDR(0x00002bf4u): goto L_2BF4;
    case RC_ADDR(0x00002bf8u): goto L_2BF8;
    case RC_ADDR(0x00002bfau): goto L_2BFA;
    case RC_ADDR(0x00002bfeu): goto L_2BFE;
    case RC_ADDR(0x00002c00u): goto L_2C00;
    case RC_ADDR(0x00002c06u): goto L_2C06;
    case RC_ADDR(0x00002c08u): goto L_2C08;
    case RC_ADDR(0x00002c0cu): goto L_2C0C;
    case RC_ADDR(0x00002c12u): goto L_2C12;
    case RC_ADDR(0x00002c16u): goto L_2C16;
    case RC_ADDR(0x00002c1au): goto L_2C1A;
    case RC_ADDR(0x00002c1eu): goto L_2C1E;
    case RC_ADDR(0x00002c22u): goto L_2C22;
    case RC_ADDR(0x00002c24u): goto L_2C24;
    case RC_ADDR(0x00002c28u): goto L_2C28;
    case RC_ADDR(0x00002c2au): goto L_2C2A;
    case RC_ADDR(0x00002c30u): goto L_2C30;
    case RC_ADDR(0x00002c34u): goto L_2C34;
    case RC_ADDR(0x00002c38u): goto L_2C38;
    case RC_ADDR(0x00002c3cu): goto L_2C3C;
    case RC_ADDR(0x00002c40u): goto L_2C40;
    case RC_ADDR(0x00002c44u): goto L_2C44;
    case RC_ADDR(0x00002c46u): goto L_2C46;
    case RC_ADDR(0x00002c4au): goto L_2C4A;
    case RC_ADDR(0x00002c4cu): goto L_2C4C;
    case RC_ADDR(0x00002c4eu): goto L_2C4E;
    case RC_ADDR(0x00002c52u): goto L_2C52;
    case RC_ADDR(0x00002c58u): goto L_2C58;
    case RC_ADDR(0x00002c5cu): goto L_2C5C;
    case RC_ADDR(0x00002c60u): goto L_2C60;
    case RC_ADDR(0x00002c64u): goto L_2C64;
    case RC_ADDR(0x00002c66u): goto L_2C66;
    case RC_ADDR(0x00002c68u): goto L_2C68;
    case RC_ADDR(0x00002c6cu): goto L_2C6C;
    case RC_ADDR(0x00002c72u): goto L_2C72;
    case RC_ADDR(0x00002c76u): goto L_2C76;
    case RC_ADDR(0x00002c7au): goto L_2C7A;
    case RC_ADDR(0x00002c7eu): goto L_2C7E;
    case RC_ADDR(0x00002c80u): goto L_2C80;
    case RC_ADDR(0x00002c84u): goto L_2C84;
    case RC_ADDR(0x00002c86u): goto L_2C86;
    case RC_ADDR(0x00002c8au): goto L_2C8A;
    case RC_ADDR(0x00002c8eu): goto L_2C8E;
    case RC_ADDR(0x00002c90u): goto L_2C90;
    case RC_ADDR(0x00002c92u): goto L_2C92;
    case RC_ADDR(0x00002c96u): goto L_2C96;
    case RC_ADDR(0x00002c9cu): goto L_2C9C;
    case RC_ADDR(0x00002ca0u): goto L_2CA0;
    case RC_ADDR(0x00002ca2u): goto L_2CA2;
    case RC_ADDR(0x00002ca4u): goto L_2CA4;
    case RC_ADDR(0x00002ca8u): goto L_2CA8;
    case RC_ADDR(0x00002caeu): goto L_2CAE;
    case RC_ADDR(0x00002cb0u): goto L_2CB0;
    case RC_ADDR(0x00002cb4u): goto L_2CB4;
    case RC_ADDR(0x00002cb8u): goto L_2CB8;
    case RC_ADDR(0x00002cbcu): goto L_2CBC;
    case RC_ADDR(0x00002cbeu): goto L_2CBE;
    case RC_ADDR(0x00002cc0u): goto L_2CC0;
    case RC_ADDR(0x00002cc2u): goto L_2CC2;
    case RC_ADDR(0x00002cc4u): goto L_2CC4;
    case RC_ADDR(0x00002ccau): goto L_2CCA;
    case RC_ADDR(0x00002cceu): goto L_2CCE;
    case RC_ADDR(0x00002cd4u): goto L_2CD4;
    case RC_ADDR(0x00002cd8u): goto L_2CD8;
    case RC_ADDR(0x00002cdau): goto L_2CDA;
    case RC_ADDR(0x00002cdeu): goto L_2CDE;
    case RC_ADDR(0x00002ce0u): goto L_2CE0;
    case RC_ADDR(0x00002ce4u): goto L_2CE4;
    case RC_ADDR(0x00002ce6u): goto L_2CE6;
    case RC_ADDR(0x00002ceau): goto L_2CEA;
    case RC_ADDR(0x00002cf0u): goto L_2CF0;
    case RC_ADDR(0x00002cf4u): goto L_2CF4;
    case RC_ADDR(0x00002cf6u): goto L_2CF6;
    case RC_ADDR(0x00002cfau): goto L_2CFA;
    case RC_ADDR(0x00002d00u): goto L_2D00;
    case RC_ADDR(0x00002d04u): goto L_2D04;
    case RC_ADDR(0x00002d06u): goto L_2D06;
    case RC_ADDR(0x00002d0au): goto L_2D0A;
    case RC_ADDR(0x00002d10u): goto L_2D10;
    case RC_ADDR(0x00002d14u): goto L_2D14;
    case RC_ADDR(0x00002d16u): goto L_2D16;
    case RC_ADDR(0x00002d1au): goto L_2D1A;
    case RC_ADDR(0x00002d1cu): goto L_2D1C;
    case RC_ADDR(0x00002d20u): goto L_2D20;
    case RC_ADDR(0x00002d22u): goto L_2D22;
    case RC_ADDR(0x00002d26u): goto L_2D26;
    case RC_ADDR(0x00002d28u): goto L_2D28;
    case RC_ADDR(0x00002d2cu): goto L_2D2C;
    case RC_ADDR(0x00002d30u): goto L_2D30;
    case RC_ADDR(0x00002d32u): goto L_2D32;
    case RC_ADDR(0x00002d36u): goto L_2D36;
    case RC_ADDR(0x00002d3cu): goto L_2D3C;
    case RC_ADDR(0x00002d40u): goto L_2D40;
    case RC_ADDR(0x00002d44u): goto L_2D44;
    case RC_ADDR(0x00002d48u): goto L_2D48;
    case RC_ADDR(0x00002d4cu): goto L_2D4C;
    case RC_ADDR(0x00002d50u): goto L_2D50;
    case RC_ADDR(0x00002d54u): goto L_2D54;
    case RC_ADDR(0x00002d56u): goto L_2D56;
    case RC_ADDR(0x00002d5au): goto L_2D5A;
    case RC_ADDR(0x00002d5eu): goto L_2D5E;
    case RC_ADDR(0x00002d60u): goto L_2D60;
    case RC_ADDR(0x00002d64u): goto L_2D64;
    case RC_ADDR(0x00002d68u): goto L_2D68;
    case RC_ADDR(0x00002d6cu): goto L_2D6C;
    case RC_ADDR(0x00002d72u): goto L_2D72;
    case RC_ADDR(0x00002d76u): goto L_2D76;
    case RC_ADDR(0x00002d78u): goto L_2D78;
    case RC_ADDR(0x00002d7au): goto L_2D7A;
    case RC_ADDR(0x00002d7eu): goto L_2D7E;
    case RC_ADDR(0x00002d84u): goto L_2D84;
    case RC_ADDR(0x00002d8au): goto L_2D8A;
    case RC_ADDR(0x00002d8cu): goto L_2D8C;
    case RC_ADDR(0x00002d90u): goto L_2D90;
    case RC_ADDR(0x00002d92u): goto L_2D92;
    case RC_ADDR(0x00002d96u): goto L_2D96;
    case RC_ADDR(0x00002d98u): goto L_2D98;
    case RC_ADDR(0x00002d9au): goto L_2D9A;
    case RC_ADDR(0x00002d9eu): goto L_2D9E;
    case RC_ADDR(0x00002da0u): goto L_2DA0;
    case RC_ADDR(0x00002da4u): goto L_2DA4;
    case RC_ADDR(0x00002da6u): goto L_2DA6;
    case RC_ADDR(0x00002da8u): goto L_2DA8;
    case RC_ADDR(0x00002dacu): goto L_2DAC;
    case RC_ADDR(0x00002db2u): goto L_2DB2;
    case RC_ADDR(0x00002db4u): goto L_2DB4;
    case RC_ADDR(0x00002db8u): goto L_2DB8;
    case RC_ADDR(0x00002dbau): goto L_2DBA;
    case RC_ADDR(0x00002dbcu): goto L_2DBC;
    case RC_ADDR(0x00002dc0u): goto L_2DC0;
    case RC_ADDR(0x00002dc6u): goto L_2DC6;
    case RC_ADDR(0x00002dccu): goto L_2DCC;
    case RC_ADDR(0x00002dd0u): goto L_2DD0;
    case RC_ADDR(0x00002dd2u): goto L_2DD2;
    case RC_ADDR(0x00002dd4u): goto L_2DD4;
    case RC_ADDR(0x00002dd8u): goto L_2DD8;
    case RC_ADDR(0x00002ddeu): goto L_2DDE;
    case RC_ADDR(0x00002de0u): goto L_2DE0;
    case RC_ADDR(0x00002de4u): goto L_2DE4;
    case RC_ADDR(0x00002de6u): goto L_2DE6;
    case RC_ADDR(0x00002de8u): goto L_2DE8;
    case RC_ADDR(0x00002decu): goto L_2DEC;
    case RC_ADDR(0x00002df2u): goto L_2DF2;
    case RC_ADDR(0x00002df8u): goto L_2DF8;
    case RC_ADDR(0x00002dfcu): goto L_2DFC;
    case RC_ADDR(0x00002dfeu): goto L_2DFE;
    case RC_ADDR(0x00002e00u): goto L_2E00;
    case RC_ADDR(0x00002e04u): goto L_2E04;
    case RC_ADDR(0x00002e0au): goto L_2E0A;
    case RC_ADDR(0x00002e10u): goto L_2E10;
    case RC_ADDR(0x00002e14u): goto L_2E14;
    case RC_ADDR(0x00002e16u): goto L_2E16;
    case RC_ADDR(0x00002e18u): goto L_2E18;
    case RC_ADDR(0x00002e1cu): goto L_2E1C;
    case RC_ADDR(0x00002e20u): goto L_2E20;
    case RC_ADDR(0x00002e24u): goto L_2E24;
    case RC_ADDR(0x00002e26u): goto L_2E26;
    case RC_ADDR(0x00002e2au): goto L_2E2A;
    case RC_ADDR(0x00002e2cu): goto L_2E2C;
    case RC_ADDR(0x00002e2eu): goto L_2E2E;
    case RC_ADDR(0x00002e32u): goto L_2E32;
    case RC_ADDR(0x00002e34u): goto L_2E34;
    case RC_ADDR(0x00002e38u): goto L_2E38;
    case RC_ADDR(0x00002e3au): goto L_2E3A;
    case RC_ADDR(0x00002e3cu): goto L_2E3C;
    case RC_ADDR(0x00002e42u): goto L_2E42;
    case RC_ADDR(0x00002e46u): goto L_2E46;
    case RC_ADDR(0x00002e4au): goto L_2E4A;
    case RC_ADDR(0x00002e4eu): goto L_2E4E;
    case RC_ADDR(0x00002e50u): goto L_2E50;
    case RC_ADDR(0x00002e52u): goto L_2E52;
    case RC_ADDR(0x00002e56u): goto L_2E56;
    case RC_ADDR(0x00002e5au): goto L_2E5A;
    case RC_ADDR(0x00002e5cu): goto L_2E5C;
    case RC_ADDR(0x00002e60u): goto L_2E60;
    case RC_ADDR(0x00002e62u): goto L_2E62;
    case RC_ADDR(0x00002e68u): goto L_2E68;
    case RC_ADDR(0x00002e6cu): goto L_2E6C;
    case RC_ADDR(0x00002e70u): goto L_2E70;
    case RC_ADDR(0x00002e72u): goto L_2E72;
    case RC_ADDR(0x00002e76u): goto L_2E76;
    case RC_ADDR(0x00002e78u): goto L_2E78;
    case RC_ADDR(0x00002e7cu): goto L_2E7C;
    case RC_ADDR(0x00002e80u): goto L_2E80;
    case RC_ADDR(0x00002e84u): goto L_2E84;
    case RC_ADDR(0x00002e86u): goto L_2E86;
    case RC_ADDR(0x00002e8au): goto L_2E8A;
    case RC_ADDR(0x00002e8cu): goto L_2E8C;
    case RC_ADDR(0x00002e90u): goto L_2E90;
    case RC_ADDR(0x00002e94u): goto L_2E94;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_27D8:
    /* 000027d8   4  link.w A5,#ffffff64 */
    c->pc = RC_ADDR(0x000027d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x9cu;

L_27DC:
    /* 000027dc   4  clr.w (ffffff64,A5) */
    c->pc = RC_ADDR(0x000027dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x9cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27E0:
    /* 000027e0   4  clr.w (ffffd72e,A4) */
    c->pc = RC_ADDR(0x000027e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x28d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27E4:
    /* 000027e4   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x000027e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000027e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_27E8:
    /* 000027e8   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x000027e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27EC:
    /* 000027ec   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x000027ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27F0:
    /* 000027f0   6  move.l (8,A5),(ffffd724,A4) */
    c->pc = RC_ADDR(0x000027f0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x28dcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_27F6:
    /* 000027f6   4  clr.w (ffffd72c,A4) */
    c->pc = RC_ADDR(0x000027f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x28d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27FA:
    /* 000027fa   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000027fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_27FE:
    /* 000027fe   4  clr.w (ffffd728,A4) */
    c->pc = RC_ADDR(0x000027feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x28d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2802:
    /* 00002802   6  move.w #1,(ffffff68,A5) */
    c->pc = RC_ADDR(0x00002802u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x98u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2808:
    /* 00002808   6  move.w #1,(ffffff84,A5) */
    c->pc = RC_ADDR(0x00002808u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_280E:
    /* 0000280e   4  clr.w (ffffff82,A5) */
    c->pc = RC_ADDR(0x0000280eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2812:
    /* 00002812   6  move.w #1,(ffffff80,A5) */
    c->pc = RC_ADDR(0x00002812u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2818:
    /* 00002818   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_281C:
    /* 0000281c   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x0000281cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2820:
    /* 00002820   2  ext.w D0 */
    c->pc = RC_ADDR(0x00002820u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2822:
    /* 00002822   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002822u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2826:
    /* 00002826   4  clr.w (ffffff7e,A5) */
    c->pc = RC_ADDR(0x00002826u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x82u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_282A:
    /* 0000282a   4  clr.w (ffffff66,A5) */
    c->pc = RC_ADDR(0x0000282au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x9au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_282E:
    /* 0000282e   6  cmpi.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000282eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_2834:
    /* 00002834   2  bne 00002870 */
    c->pc = RC_ADDR(0x00002834u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2870;

L_2836:
    /* 00002836   6  cmpi.b #1c,(fffff862,A4) */
    c->pc = RC_ADDR(0x00002836u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x0000001cu);

L_283C:
    /* 0000283c   2  bne 00002870 */
    c->pc = RC_ADDR(0x0000283cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2870;

L_283E:
    /* 0000283e   4  pea (00002e96) */
    c->pc = RC_ADDR(0x0000283eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002e96u));

L_2842:
    /* 00002842   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002842u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2846:
    /* 00002846   4  movea.l (2,A0),A1 */
    c->pc = RC_ADDR(0x00002846u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2u));
    c->a[1] = t0;

L_284A:
    /* 0000284a   2  move.l (A1),-(A7) */
    c->pc = RC_ADDR(0x0000284au);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_284C:
    /* 0000284c   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000284cu);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00002850u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_2850:
    /* 00002850   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002850u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2852:
    /* 00002852   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002852u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2854:
    /* 00002854   2  beq 00002870 */
    c->pc = RC_ADDR(0x00002854u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2870;

L_2856:
    /* 00002856   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002856u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_285A:
    /* 0000285a   4  movea.l (2,A0),A1 */
    c->pc = RC_ADDR(0x0000285au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2u));
    c->a[1] = t0;

L_285E:
    /* 0000285e   2  movea.l (A1),A0 */
    c->pc = RC_ADDR(0x0000285eu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[0] = t0;

L_2860:
    /* 00002860   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x00002860u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_2864:
    /* 00002864   2  beq 00002870 */
    c->pc = RC_ADDR(0x00002864u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2870;

L_2866:
    /* 00002866   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002866u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_286A:
    /* 0000286a   6  move.w #1,(ffffff7e,A5) */
    c->pc = RC_ADDR(0x0000286au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2870:
    /* 00002870   6  cmpi.w #1f,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002870u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000001fu);

L_2876:
    /* 00002876   2  bne 00002890 */
    c->pc = RC_ADDR(0x00002876u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2890;

L_2878:
    /* 00002878   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x00002878u);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_287C:
    /* 0000287c   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000287cu);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00002880u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_2880:
    /* 00002880   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002880u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2882:
    /* 00002882   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002882u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2884:
    /* 00002884   2  beq 00002890 */
    c->pc = RC_ADDR(0x00002884u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2890;

L_2886:
    /* 00002886   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002886u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_288A:
    /* 0000288a   6  move.w #1,(ffffff66,A5) */
    c->pc = RC_ADDR(0x0000288au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2890:
    /* 00002890   6  cmpi.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002890u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_2896:
    /* 00002896   2  bne 0000289e */
    c->pc = RC_ADDR(0x00002896u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_289E;

L_2898:
    /* 00002898   4  clr.w (ffffff80,A5) */
    c->pc = RC_ADDR(0x00002898u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_289C:
    /* 0000289c   2  bra 000028b0 */
    c->pc = RC_ADDR(0x0000289cu);
    rc_step(c, m, 10);
    goto L_28B0;

L_289E:
    /* 0000289e   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x0000289eu);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_28A2:
    /* 000028a2   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000028a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_28A6:
    /* 000028a6   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000028a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000028aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_28AA:
    /* 000028aa   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000028aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_28AC:
    /* 000028ac   4  clr.w (ffffd6f0,A4) */
    c->pc = RC_ADDR(0x000028acu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2910u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_28B0:
    /* 000028b0   4  tst.w (ffffff84,A5) */
    c->pc = RC_ADDR(0x000028b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x7cu));
    rc_set_nzvc(c, t0, RC_W);

L_28B4:
    /* 000028b4   4  beq 00002e94 */
    c->pc = RC_ADDR(0x000028b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E94;

L_28B8:
    /* 000028b8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000028b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_28BC:
    /* 000028bc   6  move.l (2,A0),(ffffff8a,A5) */
    c->pc = RC_ADDR(0x000028bcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2u));
    rc_wr32(c, m, (c->a[5] - 0x76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_28C2:
    /* 000028c2   6  move.w #96,(fffffa1a,A4) */
    c->pc = RC_ADDR(0x000028c2u);
    rc_step(c, m, 16);
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0x5e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_28C8:
    /* 000028c8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000028c8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_28CA:
    /* 000028ca   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000028cau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_28CC:
    /* 000028cc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000028ccu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_28CE:
    /* 000028ce   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000028ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_28D2:
    /* 000028d2   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000028d2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_28D6:
    /* 000028d6   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x000028d6u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x000028dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_28DA:
    /* 000028da   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000028dau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_28DE:
    /* 000028de   6  move.w (fffffffc,A5),(fffffff4,A5) */
    c->pc = RC_ADDR(0x000028deu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_28E4:
    /* 000028e4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000028e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_28E8:
    /* 000028e8   4  bra 00002d40 */
    c->pc = RC_ADDR(0x000028e8u);
    rc_step(c, m, 10);
    goto L_2D40;

L_28EC:
    /* 000028ec   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x000028ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_28F0:
    /* 000028f0   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x000028f0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_28F4:
    /* 000028f4   2  ext.w D0 */
    c->pc = RC_ADDR(0x000028f4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_28F6:
    /* 000028f6   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000028f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_28FA:
    /* 000028fa   2  ext.l D1 */
    c->pc = RC_ADDR(0x000028fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_28FC:
    /* 000028fc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000028fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_28FE:
    /* 000028fe   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x000028feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2902:
    /* 00002902   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00002902u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2906:
    /* 00002906   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x00002906u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_290A:
    /* 0000290a   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x0000290au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_290E:
    /* 0000290e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000290eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2910:
    /* 00002910   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00002910u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2914:
    /* 00002914   2  ext.l D1 */
    c->pc = RC_ADDR(0x00002914u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_2916:
    /* 00002916   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00002916u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_2918:
    /* 00002918   4  lea (ffffffa2,A5),A0 */
    c->pc = RC_ADDR(0x00002918u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x5eu);

L_291C:
    /* 0000291c   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000291cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2920:
    /* 00002920   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x00002920u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_2924:
    /* 00002924   4  move.b (6,A0),D0 */
    c->pc = RC_ADDR(0x00002924u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2928:
    /* 00002928   2  ext.w D0 */
    c->pc = RC_ADDR(0x00002928u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_292A:
    /* 0000292a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000292au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_292E:
    /* 0000292e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000292eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_2930:
    /* 00002930   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00002930u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_2932:
    /* 00002932   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x00002932u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x36u);

L_2936:
    /* 00002936   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00002936u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_293A:
    /* 0000293a   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x0000293au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_293E:
    /* 0000293e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000293eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2940:
    /* 00002940   4  move.b (c,A0),D0 */
    c->pc = RC_ADDR(0x00002940u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2944:
    /* 00002944   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00002944u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2948:
    /* 00002948   2  ext.l D1 */
    c->pc = RC_ADDR(0x00002948u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_294A:
    /* 0000294a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000294au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_294C:
    /* 0000294c   4  lea (ffffffb6,A5),A0 */
    c->pc = RC_ADDR(0x0000294cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x4au);

L_2950:
    /* 00002950   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00002950u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2954:
    /* 00002954   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002954u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2958:
    /* 00002958   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002958u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_295A:
    /* 0000295a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000295au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_295C:
    /* 0000295c   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x0000295cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2960:
    /* 00002960   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002960u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2964:
    /* 00002964   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002964u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2968:
    /* 00002968   4  cmp.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002968u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_296C:
    /* 0000296c   2  bne 00002976 */
    c->pc = RC_ADDR(0x0000296cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2976;

L_296E:
    /* 0000296e   6  move.w #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000296eu);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2974:
    /* 00002974   2  bra 0000297a */
    c->pc = RC_ADDR(0x00002974u);
    rc_step(c, m, 10);
    goto L_297A;

L_2976:
    /* 00002976   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002976u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_297A:
    /* 0000297a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000297au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_297E:
    /* 0000297e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000297eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2980:
    /* 00002980   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002980u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2982:
    /* 00002982   4  lea (ffffff6a,A5),A0 */
    c->pc = RC_ADDR(0x00002982u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x96u);

L_2986:
    /* 00002986   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002986u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_298A:
    /* 0000298a   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x0000298au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_298E:
    /* 0000298e   4  move.l (A0),(ffffff86,A5) */
    c->pc = RC_ADDR(0x0000298eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2992:
    /* 00002992   4  tst.w (ffffff7e,A5) */
    c->pc = RC_ADDR(0x00002992u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x82u));
    rc_set_nzvc(c, t0, RC_W);

L_2996:
    /* 00002996   2  beq 000029a6 */
    c->pc = RC_ADDR(0x00002996u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_29A6;

L_2998:
    /* 00002998   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002998u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_299C:
    /* 0000299c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000299cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_299E:
    /* 0000299e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000299eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29A2:
    /* 000029a2   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000029a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_29A4:
    /* 000029a4   2  bge 000029ac */
    c->pc = RC_ADDR(0x000029a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_29AC;

L_29A6:
    /* 000029a6   4  tst.w (ffffff66,A5) */
    c->pc = RC_ADDR(0x000029a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x9au));
    rc_set_nzvc(c, t0, RC_W);

L_29AA:
    /* 000029aa   2  beq 00002a1c */
    c->pc = RC_ADDR(0x000029aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2A1C;

L_29AC:
    /* 000029ac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000029acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29B0:
    /* 000029b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000029b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_29B2:
    /* 000029b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000029b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_29B4:
    /* 000029b4   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x000029b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_29B8:
    /* 000029b8   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000029b8u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_29BE:
    /* 000029be   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000029beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29C2:
    /* 000029c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000029c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_29C4:
    /* 000029c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000029c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_29C6:
    /* 000029c6   4  lea (ffffffb6,A5),A0 */
    c->pc = RC_ADDR(0x000029c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x4au);

L_29CA:
    /* 000029ca   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000029cau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_29CE:
    /* 000029ce   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000029ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29D2:
    /* 000029d2   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000029d2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_29D4:
    /* 000029d4   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000029d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_29D8:
    /* 000029d8   2  bne 00002a1c */
    c->pc = RC_ADDR(0x000029d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2A1C;

L_29DA:
    /* 000029da   4  tst.w (ffffff7e,A5) */
    c->pc = RC_ADDR(0x000029dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x82u));
    rc_set_nzvc(c, t0, RC_W);

L_29DE:
    /* 000029de   2  beq 000029fc */
    c->pc = RC_ADDR(0x000029deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_29FC;

L_29E0:
    /* 000029e0   4  lea (00002ea2),A0 */
    c->pc = RC_ADDR(0x000029e0u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00002ea2u);

L_29E4:
    /* 000029e4   4  move.l A0,(ffffff86,A5) */
    c->pc = RC_ADDR(0x000029e4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_29E8:
    /* 000029e8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000029e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29EC:
    /* 000029ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000029ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_29EE:
    /* 000029ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000029eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_29F0:
    /* 000029f0   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x000029f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_29F4:
    /* 000029f4   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000029f4u);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_29FA:
    /* 000029fa   2  bra 00002a1c */
    c->pc = RC_ADDR(0x000029fau);
    rc_step(c, m, 10);
    goto L_2A1C;

L_29FC:
    /* 000029fc   4  lea (00002ea8),A0 */
    c->pc = RC_ADDR(0x000029fcu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00002ea8u);

L_2A00:
    /* 00002a00   4  move.l A0,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002a00u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2A04:
    /* 00002a04   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002a04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A08:
    /* 00002a08   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002a08u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2A0A:
    /* 00002a0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002a0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2A0C:
    /* 00002a0c   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002a0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2A10:
    /* 00002a10   6  move.w #f,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002a10u);
    rc_step(c, m, 18);
    t0 = 0x0000000fu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A16:
    /* 00002a16   6  move.w #1,(ffffff64,A5) */
    c->pc = RC_ADDR(0x00002a16u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x9cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A1C:
    /* 00002a1c   4  movea.l (ffffff86,A5),A0 */
    c->pc = RC_ADDR(0x00002a1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[0] = t0;

L_2A20:
    /* 00002a20   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00002a20u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2A22:
    /* 00002a22   2  ext.w D0 */
    c->pc = RC_ADDR(0x00002a22u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2A24:
    /* 00002a24   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002a24u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2A26:
    /* 00002a26   4  bra 00002cc0 */
    c->pc = RC_ADDR(0x00002a26u);
    rc_step(c, m, 10);
    goto L_2CC0;

L_2A2A:
    /* 00002a2a   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002a2au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A2E:
    /* 00002a2e   4  pea (00002eb6) */
    c->pc = RC_ADDR(0x00002a2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002eb6u));

L_2A32:
    /* 00002a32   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002a32u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002a36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2A36:
    /* 00002a36   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002a36u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2A38:
    /* 00002a38   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002a38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A3C:
    /* 00002a3c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002a3cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2A3E:
    /* 00002a3e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002a3eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2A40:
    /* 00002a40   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002a40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2A44:
    /* 00002a44   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002a44u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A4A:
    /* 00002a4a   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002a4au);
    rc_step(c, m, 10);
    goto L_2D28;

L_2A4E:
    /* 00002a4e   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002a4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A52:
    /* 00002a52   4  pea (00002ec0) */
    c->pc = RC_ADDR(0x00002a52u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002ec0u));

L_2A56:
    /* 00002a56   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002a56u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002a5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2A5A:
    /* 00002a5a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002a5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2A5C:
    /* 00002a5c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002a5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A60:
    /* 00002a60   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002a60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2A62:
    /* 00002a62   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002a62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2A64:
    /* 00002a64   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002a64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2A68:
    /* 00002a68   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002a68u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A6E:
    /* 00002a6e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002a6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A72:
    /* 00002a72   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002a72u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2A74:
    /* 00002a74   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002a74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2A76:
    /* 00002a76   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002a76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2A7A:
    /* 00002a7a   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002a7au);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A80:
    /* 00002a80   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002a80u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2A84:
    /* 00002a84   4  tst.w (ffffff82,A5) */
    c->pc = RC_ADDR(0x00002a84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x7eu));
    rc_set_nzvc(c, t0, RC_W);

L_2A88:
    /* 00002a88   2  bne 00002a90 */
    c->pc = RC_ADDR(0x00002a88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2A90;

L_2A8A:
    /* 00002a8a   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002a8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2A8E:
    /* 00002a8e   2  beq 00002a98 */
    c->pc = RC_ADDR(0x00002a8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2A98;

L_2A90:
    /* 00002a90   6  move.w #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002a90u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A96:
    /* 00002a96   2  bra 00002a9c */
    c->pc = RC_ADDR(0x00002a96u);
    rc_step(c, m, 10);
    goto L_2A9C;

L_2A98:
    /* 00002a98   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002a98u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2A9C:
    /* 00002a9c   6  bchg #0,(ffffff83,A5) */
    c->pc = RC_ADDR(0x00002a9cu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x7du);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_2AA2:
    /* 00002aa2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002aa2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AA6:
    /* 00002aa6   4  pea (00002ecc) */
    c->pc = RC_ADDR(0x00002aa6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002eccu));

L_2AAA:
    /* 00002aaa   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002aaau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002aaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2AAE:
    /* 00002aae   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002aaeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2AB0:
    /* 00002ab0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002ab0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AB4:
    /* 00002ab4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002ab4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2AB6:
    /* 00002ab6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002ab6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2AB8:
    /* 00002ab8   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002ab8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2ABC:
    /* 00002abc   6  move.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002abcu);
    rc_step(c, m, 18);
    t0 = 0x00000007u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AC2:
    /* 00002ac2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002ac2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AC6:
    /* 00002ac6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002ac6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2AC8:
    /* 00002ac8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002ac8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2ACA:
    /* 00002aca   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002acau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2ACE:
    /* 00002ace   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002aceu);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AD4:
    /* 00002ad4   4  tst.w (ffffff68,A5) */
    c->pc = RC_ADDR(0x00002ad4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x98u));
    rc_set_nzvc(c, t0, RC_W);

L_2AD8:
    /* 00002ad8   2  beq 00002ae0 */
    c->pc = RC_ADDR(0x00002ad8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2AE0;

L_2ADA:
    /* 00002ada   6  move.w (fffffffe,A5),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002adau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AE0:
    /* 00002ae0   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002ae0u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2AE4:
    /* 00002ae4   4  addq.l #1,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002ae4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2AE8:
    /* 00002ae8   4  movea.l (ffffff86,A5),A0 */
    c->pc = RC_ADDR(0x00002ae8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[0] = t0;

L_2AEC:
    /* 00002aec   4  addq.l #1,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002aecu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2AF0:
    /* 00002af0   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00002af0u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2AF2:
    /* 00002af2   2  ext.w D0 */
    c->pc = RC_ADDR(0x00002af2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2AF4:
    /* 00002af4   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x00002af4u);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2AF8:
    /* 00002af8   4  move.w D0,(ffffd72e,A4) */
    c->pc = RC_ADDR(0x00002af8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x28d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AFC:
    /* 00002afc   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002afcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B00:
    /* 00002b00   4  move.l (ffffff86,A5),-(A7) */
    c->pc = RC_ADDR(0x00002b00u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2B04:
    /* 00002b04   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002b04u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2B08:
    /* 00002b08   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002b08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2B0A:
    /* 00002b0a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002b0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B0E:
    /* 00002b0e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002b0eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2B10:
    /* 00002b10   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002b10u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2B12:
    /* 00002b12   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002b12u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2B16:
    /* 00002b16   6  move.w #e,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002b16u);
    rc_step(c, m, 18);
    t0 = 0x0000000eu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B1C:
    /* 00002b1c   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002b1cu);
    rc_step(c, m, 10);
    goto L_2D28;

L_2B20:
    /* 00002b20   6  move.w #1,(ffff83fa,A4) */
    c->pc = RC_ADDR(0x00002b20u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c06u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B26:
    /* 00002b26   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002b26u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B2A:
    /* 00002b2a   4  pea (00002edc) */
    c->pc = RC_ADDR(0x00002b2au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002edcu));

L_2B2E:
    /* 00002b2e   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002b2eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2B32:
    /* 00002b32   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002b32u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2B34:
    /* 00002b34   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002b34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B38:
    /* 00002b38   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002b38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2B3A:
    /* 00002b3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002b3au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2B3C:
    /* 00002b3c   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002b3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2B40:
    /* 00002b40   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002b40u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B46:
    /* 00002b46   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002b46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B4A:
    /* 00002b4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002b4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2B4C:
    /* 00002b4c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002b4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2B4E:
    /* 00002b4e   4  lea (ffffffb6,A5),A0 */
    c->pc = RC_ADDR(0x00002b4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x4au);

L_2B52:
    /* 00002b52   6  move.w (0,A0,D0.w),(ffffd72a,A4) */
    c->pc = RC_ADDR(0x00002b52u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x28d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B58:
    /* 00002b58   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002b58u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2B5C:
    /* 00002b5c   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002b5cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B60:
    /* 00002b60   4  pea (00002ee2) */
    c->pc = RC_ADDR(0x00002b60u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002ee2u));

L_2B64:
    /* 00002b64   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002b64u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2B68:
    /* 00002b68   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002b68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2B6A:
    /* 00002b6a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002b6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B6E:
    /* 00002b6e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002b6eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2B70:
    /* 00002b70   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002b70u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2B72:
    /* 00002b72   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002b72u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2B76:
    /* 00002b76   6  move.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002b76u);
    rc_step(c, m, 18);
    t0 = 0x00000006u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B7C:
    /* 00002b7c   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002b7cu);
    rc_step(c, m, 10);
    goto L_2D28;

L_2B80:
    /* 00002b80   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002b80u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B84:
    /* 00002b84   4  pea (00002ef2) */
    c->pc = RC_ADDR(0x00002b84u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002ef2u));

L_2B88:
    /* 00002b88   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002b88u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2B8C:
    /* 00002b8c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002b8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2B8E:
    /* 00002b8e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002b8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B92:
    /* 00002b92   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002b92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2B94:
    /* 00002b94   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002b94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2B96:
    /* 00002b96   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002b96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2B9A:
    /* 00002b9a   6  move.w #9,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002b9au);
    rc_step(c, m, 18);
    t0 = 0x00000009u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BA0:
    /* 00002ba0   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002ba0u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2BA4:
    /* 00002ba4   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002ba4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BA8:
    /* 00002ba8   4  pea (00002f00) */
    c->pc = RC_ADDR(0x00002ba8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002f00u));

L_2BAC:
    /* 00002bac   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002bacu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002bb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2BB0:
    /* 00002bb0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002bb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2BB2:
    /* 00002bb2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002bb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BB6:
    /* 00002bb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002bb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2BB8:
    /* 00002bb8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002bb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2BBA:
    /* 00002bba   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002bbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2BBE:
    /* 00002bbe   6  move.w #c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002bbeu);
    rc_step(c, m, 18);
    t0 = 0x0000000cu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BC4:
    /* 00002bc4   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002bc4u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2BC8:
    /* 00002bc8   4  tst.w (ffffff64,A5) */
    c->pc = RC_ADDR(0x00002bc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x9cu));
    rc_set_nzvc(c, t0, RC_W);

L_2BCC:
    /* 00002bcc   4  bne 00002d28 */
    c->pc = RC_ADDR(0x00002bccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2D28;

L_2BD0:
    /* 00002bd0   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002bd0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BD4:
    /* 00002bd4   4  pea (00002f06) */
    c->pc = RC_ADDR(0x00002bd4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00002f06u));

L_2BD8:
    /* 00002bd8   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002bd8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002bdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2BDC:
    /* 00002bdc   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002bdcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2BDE:
    /* 00002bde   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002bdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BE2:
    /* 00002be2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002be2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2BE4:
    /* 00002be4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002be4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2BE6:
    /* 00002be6   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002be6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2BEA:
    /* 00002bea   6  move.w #10,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002beau);
    rc_step(c, m, 18);
    t0 = 0x00000010u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BF0:
    /* 00002bf0   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002bf0u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2BF4:
    /* 00002bf4   4  tst.w (ffffff82,A5) */
    c->pc = RC_ADDR(0x00002bf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x7eu));
    rc_set_nzvc(c, t0, RC_W);

L_2BF8:
    /* 00002bf8   2  bne 00002c00 */
    c->pc = RC_ADDR(0x00002bf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2C00;

L_2BFA:
    /* 00002bfa   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002bfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2BFE:
    /* 00002bfe   2  beq 00002c08 */
    c->pc = RC_ADDR(0x00002bfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C08;

L_2C00:
    /* 00002c00   6  move.w #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002c00u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C06:
    /* 00002c06   2  bra 00002c0c */
    c->pc = RC_ADDR(0x00002c06u);
    rc_step(c, m, 10);
    goto L_2C0C;

L_2C08:
    /* 00002c08   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002c08u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2C0C:
    /* 00002c0c   6  bchg #0,(ffffff83,A5) */
    c->pc = RC_ADDR(0x00002c0cu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x7du);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_2C12:
    /* 00002c12   4  addq.l #1,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002c12u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2C16:
    /* 00002c16   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C1A:
    /* 00002c1a   4  move.l (ffffff86,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C1E:
    /* 00002c1e   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002c1eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002c22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2C22:
    /* 00002c22   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002c22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2C24:
    /* 00002c24   4  tst.w (ffffff68,A5) */
    c->pc = RC_ADDR(0x00002c24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x98u));
    rc_set_nzvc(c, t0, RC_W);

L_2C28:
    /* 00002c28   2  beq 00002c30 */
    c->pc = RC_ADDR(0x00002c28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C30;

L_2C2A:
    /* 00002c2a   6  move.w (fffffffe,A5),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002c2au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C30:
    /* 00002c30   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002c30u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2C34:
    /* 00002c34   4  addq.l #1,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002c34u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2C38:
    /* 00002c38   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C3C:
    /* 00002c3c   4  move.l (ffffff86,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c3cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C40:
    /* 00002c40   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002c40u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002c44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2C44:
    /* 00002c44   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002c44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2C46:
    /* 00002c46   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002c46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C4A:
    /* 00002c4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002c4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2C4C:
    /* 00002c4c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002c4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2C4E:
    /* 00002c4e   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002c4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2C52:
    /* 00002c52   6  move.w #8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002c52u);
    rc_step(c, m, 18);
    t0 = 0x00000008u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C58:
    /* 00002c58   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002c58u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2C5C:
    /* 00002c5c   4  subq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002c5cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2C60:
    /* 00002c60   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002c60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C64:
    /* 00002c64   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002c64u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2C66:
    /* 00002c66   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002c66u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2C68:
    /* 00002c68   4  lea (ffffff6a,A5),A0 */
    c->pc = RC_ADDR(0x00002c68u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x96u);

L_2C6C:
    /* 00002c6c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002c6cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C72:
    /* 00002c72   4  bra 00002d28 */
    c->pc = RC_ADDR(0x00002c72u);
    rc_step(c, m, 10);
    goto L_2D28;

L_2C76:
    /* 00002c76   4  move.l (ffffff86,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C7A:
    /* 00002c7a   4  jsr (000080e0) */
    c->pc = RC_ADDR(0x00002c7au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002c7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000080e0u);
    return;

L_2C7E:
    /* 00002c7e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002c7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2C80:
    /* 00002c80   4  move.l D0,(ffffff86,A5) */
    c->pc = RC_ADDR(0x00002c80u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C84:
    /* 00002c84   2  bne 00002cb0 */
    c->pc = RC_ADDR(0x00002c84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2CB0;

L_2C86:
    /* 00002c86   4  subq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002c86u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2C8A:
    /* 00002c8a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002c8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C8E:
    /* 00002c8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002c8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2C90:
    /* 00002c90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002c90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2C92:
    /* 00002c92   4  lea (ffffff6a,A5),A0 */
    c->pc = RC_ADDR(0x00002c92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x96u);

L_2C96:
    /* 00002c96   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002c96u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C9C:
    /* 00002c9c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002c9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CA0:
    /* 00002ca0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002ca0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2CA2:
    /* 00002ca2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002ca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2CA4:
    /* 00002ca4   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002ca4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2CA8:
    /* 00002ca8   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002ca8u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CAE:
    /* 00002cae   2  bra 00002d28 */
    c->pc = RC_ADDR(0x00002caeu);
    rc_step(c, m, 10);
    goto L_2D28;

L_2CB0:
    /* 00002cb0   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002cb0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2CB4:
    /* 00002cb4   4  move.l (ffffff86,A5),-(A7) */
    c->pc = RC_ADDR(0x00002cb4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2CB8:
    /* 00002cb8   4  jsr (00005544) */
    c->pc = RC_ADDR(0x00002cb8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002cbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_2CBC:
    /* 00002cbc   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002cbcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2CBE:
    /* 00002cbe   2  bra 00002d28 */
    c->pc = RC_ADDR(0x00002cbeu);
    rc_step(c, m, 10);
    goto L_2D28;

L_2CC0:
    /* 00002cc0   2  tst.l D0 */
    c->pc = RC_ADDR(0x00002cc0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2CC2:
    /* 00002cc2   2  beq 00002c5c */
    c->pc = RC_ADDR(0x00002cc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2C5C; }

L_2CC4:
    /* 00002cc4   6  sub.l #14,D0 */
    c->pc = RC_ADDR(0x00002cc4u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CCA:
    /* 00002cca   4  beq 00002b20 */
    c->pc = RC_ADDR(0x00002ccau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2B20; }

L_2CCE:
    /* 00002cce   6  sub.l #11,D0 */
    c->pc = RC_ADDR(0x00002cceu);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CD4:
    /* 00002cd4   4  beq 00002b26 */
    c->pc = RC_ADDR(0x00002cd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2B26; }

L_2CD8:
    /* 00002cd8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00002cd8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CDA:
    /* 00002cda   4  beq 00002ba4 */
    c->pc = RC_ADDR(0x00002cdau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2BA4; }

L_2CDE:
    /* 00002cde   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x00002cdeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CE0:
    /* 00002ce0   4  beq 00002bc8 */
    c->pc = RC_ADDR(0x00002ce0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2BC8; }

L_2CE4:
    /* 00002ce4   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x00002ce4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CE6:
    /* 00002ce6   4  beq 00002ae4 */
    c->pc = RC_ADDR(0x00002ce6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2AE4; }

L_2CEA:
    /* 00002cea   6  sub.l #e,D0 */
    c->pc = RC_ADDR(0x00002ceau);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CF0:
    /* 00002cf0   4  beq 00002a84 */
    c->pc = RC_ADDR(0x00002cf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2A84; }

L_2CF4:
    /* 00002cf4   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00002cf4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2CF6:
    /* 00002cf6   4  beq 00002bf4 */
    c->pc = RC_ADDR(0x00002cf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2BF4; }

L_2CFA:
    /* 00002cfa   6  sub.l #1c,D0 */
    c->pc = RC_ADDR(0x00002cfau);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D00:
    /* 00002d00   4  beq 00002c34 */
    c->pc = RC_ADDR(0x00002d00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2C34; }

L_2D04:
    /* 00002d04   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00002d04u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D06:
    /* 00002d06   4  beq 00002c76 */
    c->pc = RC_ADDR(0x00002d06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2C76; }

L_2D0A:
    /* 00002d0a   6  sub.l #1d,D0 */
    c->pc = RC_ADDR(0x00002d0au);
    rc_step(c, m, 16);
    t0 = 0x0000001du;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D10:
    /* 00002d10   4  beq 00002b80 */
    c->pc = RC_ADDR(0x00002d10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2B80; }

L_2D14:
    /* 00002d14   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00002d14u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D16:
    /* 00002d16   4  beq 00002a2a */
    c->pc = RC_ADDR(0x00002d16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2A2A; }

L_2D1A:
    /* 00002d1a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00002d1au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D1C:
    /* 00002d1c   4  beq 00002b5c */
    c->pc = RC_ADDR(0x00002d1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2B5C; }

L_2D20:
    /* 00002d20   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00002d20u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2D22:
    /* 00002d22   4  beq 00002a4e */
    c->pc = RC_ADDR(0x00002d22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2A4E; }

L_2D26:
    /* 00002d26   2  bra 00002cb0 */
    c->pc = RC_ADDR(0x00002d26u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2CB0;

L_2D28:
    /* 00002d28   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x00002d28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_2D2C:
    /* 00002d2c   4  tst.l (8,A0) */
    c->pc = RC_ADDR(0x00002d2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_2D30:
    /* 00002d30   2  beq 00002d3c */
    c->pc = RC_ADDR(0x00002d30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2D3C;

L_2D32:
    /* 00002d32   4  movea.l (ffffff8a,A5),A0 */
    c->pc = RC_ADDR(0x00002d32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_2D36:
    /* 00002d36   6  move.l (8,A0),(ffffff8a,A5) */
    c->pc = RC_ADDR(0x00002d36u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2D3C:
    /* 00002d3c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00002d3cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2D40:
    /* 00002d40   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00002d40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D44:
    /* 00002d44   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002d44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2D48:
    /* 00002d48   4  blt 000028ec */
    c->pc = RC_ADDR(0x00002d48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_28EC; }

L_2D4C:
    /* 00002d4c   4  clr.w (ffffff68,A5) */
    c->pc = RC_ADDR(0x00002d4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x98u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2D50:
    /* 00002d50   4  tst.w (ffffff80,A5) */
    c->pc = RC_ADDR(0x00002d50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x80u));
    rc_set_nzvc(c, t0, RC_W);

L_2D54:
    /* 00002d54   2  beq 00002d5a */
    c->pc = RC_ADDR(0x00002d54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2D5A;

L_2D56:
    /* 00002d56   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00002d56u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00002d5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_2D5A:
    /* 00002d5a   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x00002d5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_2D5E:
    /* 00002d5e   2  bne 00002d68 */
    c->pc = RC_ADDR(0x00002d5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2D68;

L_2D60:
    /* 00002d60   4  tst.w (ffffff80,A5) */
    c->pc = RC_ADDR(0x00002d60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x80u));
    rc_set_nzvc(c, t0, RC_W);

L_2D64:
    /* 00002d64   4  bne 00002e3c */
    c->pc = RC_ADDR(0x00002d64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2E3C;

L_2D68:
    /* 00002d68   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00002d68u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002d6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_2D6C:
    /* 00002d6c   6  move.w (fffffffa,A5),(ffffd72c,A4) */
    c->pc = RC_ADDR(0x00002d6cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x28d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D72:
    /* 00002d72   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002d72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D76:
    /* 00002d76   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002d76u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2D78:
    /* 00002d78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002d78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2D7A:
    /* 00002d7a   4  lea (ffffff8e,A5),A0 */
    c->pc = RC_ADDR(0x00002d7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x72u);

L_2D7E:
    /* 00002d7e   6  move.w (0,A0,D0.w),(ffffd728,A4) */
    c->pc = RC_ADDR(0x00002d7eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x28d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D84:
    /* 00002d84   6  cmpi.w #a,(ffffd728,A4) */
    c->pc = RC_ADDR(0x00002d84u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d8u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_2D8A:
    /* 00002d8a   2  bne 00002da0 */
    c->pc = RC_ADDR(0x00002d8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2DA0;

L_2D8C:
    /* 00002d8c   4  tst.w (ffffd6cc,A4) */
    c->pc = RC_ADDR(0x00002d8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2934u));
    rc_set_nzvc(c, t0, RC_W);

L_2D90:
    /* 00002d90   2  beq 00002da0 */
    c->pc = RC_ADDR(0x00002d90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2DA0;

L_2D92:
    /* 00002d92   4  move.w (ffffd6cc,A4),D0 */
    c->pc = RC_ADDR(0x00002d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2934u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D96:
    /* 00002d96   2  subq.w #5,D0 */
    c->pc = RC_ADDR(0x00002d96u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2D98:
    /* 00002d98   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00002d98u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2D9A:
    /* 00002d9a   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00002d9au);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00002d9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_2D9E:
    /* 00002d9e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002d9eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2DA0:
    /* 00002da0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002da0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DA4:
    /* 00002da4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002da4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2DA6:
    /* 00002da6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002da6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2DA8:
    /* 00002da8   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002da8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2DAC:
    /* 00002dac   6  cmpi.w #fffe,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002dacu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_2DB2:
    /* 00002db2   2  bne 00002dcc */
    c->pc = RC_ADDR(0x00002db2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2DCC;

L_2DB4:
    /* 00002db4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002db4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DB8:
    /* 00002db8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002db8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2DBA:
    /* 00002dba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002dbau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2DBC:
    /* 00002dbc   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x00002dbcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x36u);

L_2DC0:
    /* 00002dc0   6  move.w (0,A0,D0.w),(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002dc0u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DC6:
    /* 00002dc6   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x00002dc6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DCC:
    /* 00002dcc   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002dccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DD0:
    /* 00002dd0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002dd0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2DD2:
    /* 00002dd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002dd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2DD4:
    /* 00002dd4   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002dd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2DD8:
    /* 00002dd8   6  cmpi.w #fffd,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002dd8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_2DDE:
    /* 00002dde   2  bne 00002e10 */
    c->pc = RC_ADDR(0x00002ddeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2E10;

L_2DE0:
    /* 00002de0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002de0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DE4:
    /* 00002de4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002de4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2DE6:
    /* 00002de6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002de6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2DE8:
    /* 00002de8   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x00002de8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x36u);

L_2DEC:
    /* 00002dec   6  move.w (0,A0,D0.w),(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002decu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DF2:
    /* 00002df2   6  move.w #1,(ffff8d96,A4) */
    c->pc = RC_ADDR(0x00002df2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x726au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DF8:
    /* 00002df8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002df8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2DFC:
    /* 00002dfc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002dfcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2DFE:
    /* 00002dfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002dfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2E00:
    /* 00002e00   4  lea (ffffffa2,A5),A0 */
    c->pc = RC_ADDR(0x00002e00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x5eu);

L_2E04:
    /* 00002e04   6  move.w (0,A0,D0.w),(ffff8d98,A4) */
    c->pc = RC_ADDR(0x00002e04u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x7268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E0A:
    /* 00002e0a   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x00002e0au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E10:
    /* 00002e10   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002e10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E14:
    /* 00002e14   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002e14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2E16:
    /* 00002e16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002e16u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2E18:
    /* 00002e18   4  lea (ffffffb6,A5),A0 */
    c->pc = RC_ADDR(0x00002e18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x4au);

L_2E1C:
    /* 00002e1c   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002e1cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E20:
    /* 00002e20   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00002e20u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00002e24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_2E24:
    /* 00002e24   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002e24u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2E26:
    /* 00002e26   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002e26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E2A:
    /* 00002e2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002e2au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2E2C:
    /* 00002e2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002e2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2E2E:
    /* 00002e2e   4  lea (ffffffde,A5),A0 */
    c->pc = RC_ADDR(0x00002e2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x22u);

L_2E32:
    /* 00002e32   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00002e32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2E34:
    /* 00002e34   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00002e34u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E38:
    /* 00002e38   2  unlk A5 */
    c->pc = RC_ADDR(0x00002e38u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2E3A:
    /* 00002e3a   2  rts */
    c->pc = RC_ADDR(0x00002e3au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2E3C:
    /* 00002e3c   6  move.w (ffffd5c6,A4),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00002e3cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E42:
    /* 00002e42   4  move.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x00002e42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E46:
    /* 00002e46   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002e46u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2E4A:
    /* 00002e4a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002e4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E4E:
    /* 00002e4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002e4eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2E50:
    /* 00002e50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00002e50u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2E52:
    /* 00002e52   4  lea (ffffff6a,A5),A0 */
    c->pc = RC_ADDR(0x00002e52u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x96u);

L_2E56:
    /* 00002e56   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00002e56u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_2E5A:
    /* 00002e5a   2  beq 00002e72 */
    c->pc = RC_ADDR(0x00002e5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2E72;

L_2E5C:
    /* 00002e5c   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00002e5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_2E60:
    /* 00002e60   2  bne 00002e68 */
    c->pc = RC_ADDR(0x00002e60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2E68;

L_2E62:
    /* 00002e62   6  move.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00002e62u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E68:
    /* 00002e68   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00002e68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E6C:
    /* 00002e6c   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002e6cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2E70:
    /* 00002e70   2  bra 00002e4a */
    c->pc = RC_ADDR(0x00002e70u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2E4A;

L_2E72:
    /* 00002e72   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002e72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_2E76:
    /* 00002e76   2  bge 00002e7c */
    c->pc = RC_ADDR(0x00002e76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_2E7C;

L_2E78:
    /* 00002e78   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002e78u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2E7C:
    /* 00002e7c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00002e7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E80:
    /* 00002e80   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002e80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2E84:
    /* 00002e84   2  blt 00002e90 */
    c->pc = RC_ADDR(0x00002e84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_2E90;

L_2E86:
    /* 00002e86   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002e86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E8A:
    /* 00002e8a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00002e8au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2E8C:
    /* 00002e8c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002e8cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2E90:
    /* 00002e90   4  bra 000028b0 */
    c->pc = RC_ADDR(0x00002e90u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_28B0;

L_2E94:
    /* 00002e94   2  bra 00002e38 */
    c->pc = RC_ADDR(0x00002e94u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2E38;

}
