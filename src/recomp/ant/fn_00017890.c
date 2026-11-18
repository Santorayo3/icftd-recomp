/* fn_00017890 - 1242 byte(s), 350 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017890(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017890u): goto L_17890;
    case RC_ADDR(0x00017892u): goto L_17892;
    case RC_ADDR(0x00017896u): goto L_17896;
    case RC_ADDR(0x0001789au): goto L_1789A;
    case RC_ADDR(0x0001789eu): goto L_1789E;
    case RC_ADDR(0x000178a2u): goto L_178A2;
    case RC_ADDR(0x000178a6u): goto L_178A6;
    case RC_ADDR(0x000178aau): goto L_178AA;
    case RC_ADDR(0x000178aeu): goto L_178AE;
    case RC_ADDR(0x000178b2u): goto L_178B2;
    case RC_ADDR(0x000178b6u): goto L_178B6;
    case RC_ADDR(0x000178bau): goto L_178BA;
    case RC_ADDR(0x000178beu): goto L_178BE;
    case RC_ADDR(0x000178c2u): goto L_178C2;
    case RC_ADDR(0x000178c6u): goto L_178C6;
    case RC_ADDR(0x000178ccu): goto L_178CC;
    case RC_ADDR(0x000178d2u): goto L_178D2;
    case RC_ADDR(0x000178d6u): goto L_178D6;
    case RC_ADDR(0x000178dau): goto L_178DA;
    case RC_ADDR(0x000178deu): goto L_178DE;
    case RC_ADDR(0x000178e2u): goto L_178E2;
    case RC_ADDR(0x000178e6u): goto L_178E6;
    case RC_ADDR(0x000178eau): goto L_178EA;
    case RC_ADDR(0x000178eeu): goto L_178EE;
    case RC_ADDR(0x000178f0u): goto L_178F0;
    case RC_ADDR(0x000178f4u): goto L_178F4;
    case RC_ADDR(0x000178f8u): goto L_178F8;
    case RC_ADDR(0x000178fau): goto L_178FA;
    case RC_ADDR(0x000178feu): goto L_178FE;
    case RC_ADDR(0x00017900u): goto L_17900;
    case RC_ADDR(0x00017904u): goto L_17904;
    case RC_ADDR(0x00017906u): goto L_17906;
    case RC_ADDR(0x0001790au): goto L_1790A;
    case RC_ADDR(0x0001790eu): goto L_1790E;
    case RC_ADDR(0x00017910u): goto L_17910;
    case RC_ADDR(0x00017914u): goto L_17914;
    case RC_ADDR(0x00017916u): goto L_17916;
    case RC_ADDR(0x00017918u): goto L_17918;
    case RC_ADDR(0x0001791cu): goto L_1791C;
    case RC_ADDR(0x00017922u): goto L_17922;
    case RC_ADDR(0x00017926u): goto L_17926;
    case RC_ADDR(0x00017928u): goto L_17928;
    case RC_ADDR(0x0001792au): goto L_1792A;
    case RC_ADDR(0x0001792cu): goto L_1792C;
    case RC_ADDR(0x00017930u): goto L_17930;
    case RC_ADDR(0x00017932u): goto L_17932;
    case RC_ADDR(0x00017938u): goto L_17938;
    case RC_ADDR(0x0001793au): goto L_1793A;
    case RC_ADDR(0x0001793eu): goto L_1793E;
    case RC_ADDR(0x00017944u): goto L_17944;
    case RC_ADDR(0x00017948u): goto L_17948;
    case RC_ADDR(0x0001794cu): goto L_1794C;
    case RC_ADDR(0x00017950u): goto L_17950;
    case RC_ADDR(0x00017954u): goto L_17954;
    case RC_ADDR(0x00017958u): goto L_17958;
    case RC_ADDR(0x0001795cu): goto L_1795C;
    case RC_ADDR(0x00017960u): goto L_17960;
    case RC_ADDR(0x00017964u): goto L_17964;
    case RC_ADDR(0x00017968u): goto L_17968;
    case RC_ADDR(0x0001796cu): goto L_1796C;
    case RC_ADDR(0x00017970u): goto L_17970;
    case RC_ADDR(0x00017974u): goto L_17974;
    case RC_ADDR(0x00017978u): goto L_17978;
    case RC_ADDR(0x0001797au): goto L_1797A;
    case RC_ADDR(0x00017980u): goto L_17980;
    case RC_ADDR(0x00017982u): goto L_17982;
    case RC_ADDR(0x00017986u): goto L_17986;
    case RC_ADDR(0x0001798cu): goto L_1798C;
    case RC_ADDR(0x00017990u): goto L_17990;
    case RC_ADDR(0x00017994u): goto L_17994;
    case RC_ADDR(0x00017998u): goto L_17998;
    case RC_ADDR(0x0001799cu): goto L_1799C;
    case RC_ADDR(0x000179a0u): goto L_179A0;
    case RC_ADDR(0x000179a4u): goto L_179A4;
    case RC_ADDR(0x000179a8u): goto L_179A8;
    case RC_ADDR(0x000179acu): goto L_179AC;
    case RC_ADDR(0x000179b0u): goto L_179B0;
    case RC_ADDR(0x000179b4u): goto L_179B4;
    case RC_ADDR(0x000179b8u): goto L_179B8;
    case RC_ADDR(0x000179bcu): goto L_179BC;
    case RC_ADDR(0x000179c0u): goto L_179C0;
    case RC_ADDR(0x000179c2u): goto L_179C2;
    case RC_ADDR(0x000179c8u): goto L_179C8;
    case RC_ADDR(0x000179cau): goto L_179CA;
    case RC_ADDR(0x000179ccu): goto L_179CC;
    case RC_ADDR(0x000179d2u): goto L_179D2;
    case RC_ADDR(0x000179d6u): goto L_179D6;
    case RC_ADDR(0x000179dau): goto L_179DA;
    case RC_ADDR(0x000179deu): goto L_179DE;
    case RC_ADDR(0x000179e2u): goto L_179E2;
    case RC_ADDR(0x000179e6u): goto L_179E6;
    case RC_ADDR(0x000179eau): goto L_179EA;
    case RC_ADDR(0x000179eeu): goto L_179EE;
    case RC_ADDR(0x000179f2u): goto L_179F2;
    case RC_ADDR(0x000179f6u): goto L_179F6;
    case RC_ADDR(0x000179fau): goto L_179FA;
    case RC_ADDR(0x000179feu): goto L_179FE;
    case RC_ADDR(0x00017a02u): goto L_17A02;
    case RC_ADDR(0x00017a06u): goto L_17A06;
    case RC_ADDR(0x00017a08u): goto L_17A08;
    case RC_ADDR(0x00017a0eu): goto L_17A0E;
    case RC_ADDR(0x00017a10u): goto L_17A10;
    case RC_ADDR(0x00017a12u): goto L_17A12;
    case RC_ADDR(0x00017a18u): goto L_17A18;
    case RC_ADDR(0x00017a1cu): goto L_17A1C;
    case RC_ADDR(0x00017a20u): goto L_17A20;
    case RC_ADDR(0x00017a24u): goto L_17A24;
    case RC_ADDR(0x00017a28u): goto L_17A28;
    case RC_ADDR(0x00017a2cu): goto L_17A2C;
    case RC_ADDR(0x00017a30u): goto L_17A30;
    case RC_ADDR(0x00017a34u): goto L_17A34;
    case RC_ADDR(0x00017a38u): goto L_17A38;
    case RC_ADDR(0x00017a3cu): goto L_17A3C;
    case RC_ADDR(0x00017a40u): goto L_17A40;
    case RC_ADDR(0x00017a44u): goto L_17A44;
    case RC_ADDR(0x00017a48u): goto L_17A48;
    case RC_ADDR(0x00017a4cu): goto L_17A4C;
    case RC_ADDR(0x00017a4eu): goto L_17A4E;
    case RC_ADDR(0x00017a54u): goto L_17A54;
    case RC_ADDR(0x00017a56u): goto L_17A56;
    case RC_ADDR(0x00017a5au): goto L_17A5A;
    case RC_ADDR(0x00017a60u): goto L_17A60;
    case RC_ADDR(0x00017a66u): goto L_17A66;
    case RC_ADDR(0x00017a6au): goto L_17A6A;
    case RC_ADDR(0x00017a6eu): goto L_17A6E;
    case RC_ADDR(0x00017a72u): goto L_17A72;
    case RC_ADDR(0x00017a76u): goto L_17A76;
    case RC_ADDR(0x00017a7au): goto L_17A7A;
    case RC_ADDR(0x00017a7eu): goto L_17A7E;
    case RC_ADDR(0x00017a82u): goto L_17A82;
    case RC_ADDR(0x00017a86u): goto L_17A86;
    case RC_ADDR(0x00017a8au): goto L_17A8A;
    case RC_ADDR(0x00017a8eu): goto L_17A8E;
    case RC_ADDR(0x00017a92u): goto L_17A92;
    case RC_ADDR(0x00017a96u): goto L_17A96;
    case RC_ADDR(0x00017a9au): goto L_17A9A;
    case RC_ADDR(0x00017a9eu): goto L_17A9E;
    case RC_ADDR(0x00017aa0u): goto L_17AA0;
    case RC_ADDR(0x00017aa6u): goto L_17AA6;
    case RC_ADDR(0x00017aa8u): goto L_17AA8;
    case RC_ADDR(0x00017aacu): goto L_17AAC;
    case RC_ADDR(0x00017ab2u): goto L_17AB2;
    case RC_ADDR(0x00017ab8u): goto L_17AB8;
    case RC_ADDR(0x00017abcu): goto L_17ABC;
    case RC_ADDR(0x00017ac0u): goto L_17AC0;
    case RC_ADDR(0x00017ac4u): goto L_17AC4;
    case RC_ADDR(0x00017ac8u): goto L_17AC8;
    case RC_ADDR(0x00017accu): goto L_17ACC;
    case RC_ADDR(0x00017ad0u): goto L_17AD0;
    case RC_ADDR(0x00017ad4u): goto L_17AD4;
    case RC_ADDR(0x00017ad8u): goto L_17AD8;
    case RC_ADDR(0x00017adcu): goto L_17ADC;
    case RC_ADDR(0x00017ae0u): goto L_17AE0;
    case RC_ADDR(0x00017ae4u): goto L_17AE4;
    case RC_ADDR(0x00017ae8u): goto L_17AE8;
    case RC_ADDR(0x00017aecu): goto L_17AEC;
    case RC_ADDR(0x00017af0u): goto L_17AF0;
    case RC_ADDR(0x00017af2u): goto L_17AF2;
    case RC_ADDR(0x00017af8u): goto L_17AF8;
    case RC_ADDR(0x00017afau): goto L_17AFA;
    case RC_ADDR(0x00017afeu): goto L_17AFE;
    case RC_ADDR(0x00017b04u): goto L_17B04;
    case RC_ADDR(0x00017b0au): goto L_17B0A;
    case RC_ADDR(0x00017b0eu): goto L_17B0E;
    case RC_ADDR(0x00017b12u): goto L_17B12;
    case RC_ADDR(0x00017b16u): goto L_17B16;
    case RC_ADDR(0x00017b1au): goto L_17B1A;
    case RC_ADDR(0x00017b1eu): goto L_17B1E;
    case RC_ADDR(0x00017b22u): goto L_17B22;
    case RC_ADDR(0x00017b26u): goto L_17B26;
    case RC_ADDR(0x00017b2au): goto L_17B2A;
    case RC_ADDR(0x00017b2eu): goto L_17B2E;
    case RC_ADDR(0x00017b32u): goto L_17B32;
    case RC_ADDR(0x00017b36u): goto L_17B36;
    case RC_ADDR(0x00017b3au): goto L_17B3A;
    case RC_ADDR(0x00017b3cu): goto L_17B3C;
    case RC_ADDR(0x00017b42u): goto L_17B42;
    case RC_ADDR(0x00017b44u): goto L_17B44;
    case RC_ADDR(0x00017b48u): goto L_17B48;
    case RC_ADDR(0x00017b4eu): goto L_17B4E;
    case RC_ADDR(0x00017b54u): goto L_17B54;
    case RC_ADDR(0x00017b58u): goto L_17B58;
    case RC_ADDR(0x00017b5cu): goto L_17B5C;
    case RC_ADDR(0x00017b60u): goto L_17B60;
    case RC_ADDR(0x00017b64u): goto L_17B64;
    case RC_ADDR(0x00017b68u): goto L_17B68;
    case RC_ADDR(0x00017b6cu): goto L_17B6C;
    case RC_ADDR(0x00017b70u): goto L_17B70;
    case RC_ADDR(0x00017b74u): goto L_17B74;
    case RC_ADDR(0x00017b78u): goto L_17B78;
    case RC_ADDR(0x00017b7cu): goto L_17B7C;
    case RC_ADDR(0x00017b80u): goto L_17B80;
    case RC_ADDR(0x00017b84u): goto L_17B84;
    case RC_ADDR(0x00017b88u): goto L_17B88;
    case RC_ADDR(0x00017b8au): goto L_17B8A;
    case RC_ADDR(0x00017b8cu): goto L_17B8C;
    case RC_ADDR(0x00017b8eu): goto L_17B8E;
    case RC_ADDR(0x00017b92u): goto L_17B92;
    case RC_ADDR(0x00017b94u): goto L_17B94;
    case RC_ADDR(0x00017b98u): goto L_17B98;
    case RC_ADDR(0x00017b9cu): goto L_17B9C;
    case RC_ADDR(0x00017b9eu): goto L_17B9E;
    case RC_ADDR(0x00017ba0u): goto L_17BA0;
    case RC_ADDR(0x00017ba4u): goto L_17BA4;
    case RC_ADDR(0x00017ba8u): goto L_17BA8;
    case RC_ADDR(0x00017bacu): goto L_17BAC;
    case RC_ADDR(0x00017baeu): goto L_17BAE;
    case RC_ADDR(0x00017bb0u): goto L_17BB0;
    case RC_ADDR(0x00017bb4u): goto L_17BB4;
    case RC_ADDR(0x00017bb8u): goto L_17BB8;
    case RC_ADDR(0x00017bbau): goto L_17BBA;
    case RC_ADDR(0x00017bbcu): goto L_17BBC;
    case RC_ADDR(0x00017bbeu): goto L_17BBE;
    case RC_ADDR(0x00017bc2u): goto L_17BC2;
    case RC_ADDR(0x00017bc4u): goto L_17BC4;
    case RC_ADDR(0x00017bc8u): goto L_17BC8;
    case RC_ADDR(0x00017bccu): goto L_17BCC;
    case RC_ADDR(0x00017bceu): goto L_17BCE;
    case RC_ADDR(0x00017bd0u): goto L_17BD0;
    case RC_ADDR(0x00017bd4u): goto L_17BD4;
    case RC_ADDR(0x00017bd8u): goto L_17BD8;
    case RC_ADDR(0x00017bdcu): goto L_17BDC;
    case RC_ADDR(0x00017be0u): goto L_17BE0;
    case RC_ADDR(0x00017be2u): goto L_17BE2;
    case RC_ADDR(0x00017be4u): goto L_17BE4;
    case RC_ADDR(0x00017be8u): goto L_17BE8;
    case RC_ADDR(0x00017becu): goto L_17BEC;
    case RC_ADDR(0x00017beeu): goto L_17BEE;
    case RC_ADDR(0x00017bf0u): goto L_17BF0;
    case RC_ADDR(0x00017bf2u): goto L_17BF2;
    case RC_ADDR(0x00017bf6u): goto L_17BF6;
    case RC_ADDR(0x00017bf8u): goto L_17BF8;
    case RC_ADDR(0x00017bfcu): goto L_17BFC;
    case RC_ADDR(0x00017c00u): goto L_17C00;
    case RC_ADDR(0x00017c02u): goto L_17C02;
    case RC_ADDR(0x00017c04u): goto L_17C04;
    case RC_ADDR(0x00017c08u): goto L_17C08;
    case RC_ADDR(0x00017c0cu): goto L_17C0C;
    case RC_ADDR(0x00017c10u): goto L_17C10;
    case RC_ADDR(0x00017c14u): goto L_17C14;
    case RC_ADDR(0x00017c16u): goto L_17C16;
    case RC_ADDR(0x00017c18u): goto L_17C18;
    case RC_ADDR(0x00017c1cu): goto L_17C1C;
    case RC_ADDR(0x00017c20u): goto L_17C20;
    case RC_ADDR(0x00017c22u): goto L_17C22;
    case RC_ADDR(0x00017c24u): goto L_17C24;
    case RC_ADDR(0x00017c26u): goto L_17C26;
    case RC_ADDR(0x00017c2au): goto L_17C2A;
    case RC_ADDR(0x00017c2cu): goto L_17C2C;
    case RC_ADDR(0x00017c30u): goto L_17C30;
    case RC_ADDR(0x00017c34u): goto L_17C34;
    case RC_ADDR(0x00017c36u): goto L_17C36;
    case RC_ADDR(0x00017c38u): goto L_17C38;
    case RC_ADDR(0x00017c3cu): goto L_17C3C;
    case RC_ADDR(0x00017c40u): goto L_17C40;
    case RC_ADDR(0x00017c44u): goto L_17C44;
    case RC_ADDR(0x00017c48u): goto L_17C48;
    case RC_ADDR(0x00017c4au): goto L_17C4A;
    case RC_ADDR(0x00017c4cu): goto L_17C4C;
    case RC_ADDR(0x00017c50u): goto L_17C50;
    case RC_ADDR(0x00017c54u): goto L_17C54;
    case RC_ADDR(0x00017c56u): goto L_17C56;
    case RC_ADDR(0x00017c58u): goto L_17C58;
    case RC_ADDR(0x00017c5au): goto L_17C5A;
    case RC_ADDR(0x00017c5eu): goto L_17C5E;
    case RC_ADDR(0x00017c60u): goto L_17C60;
    case RC_ADDR(0x00017c64u): goto L_17C64;
    case RC_ADDR(0x00017c68u): goto L_17C68;
    case RC_ADDR(0x00017c6au): goto L_17C6A;
    case RC_ADDR(0x00017c6cu): goto L_17C6C;
    case RC_ADDR(0x00017c70u): goto L_17C70;
    case RC_ADDR(0x00017c74u): goto L_17C74;
    case RC_ADDR(0x00017c78u): goto L_17C78;
    case RC_ADDR(0x00017c7cu): goto L_17C7C;
    case RC_ADDR(0x00017c7eu): goto L_17C7E;
    case RC_ADDR(0x00017c80u): goto L_17C80;
    case RC_ADDR(0x00017c84u): goto L_17C84;
    case RC_ADDR(0x00017c88u): goto L_17C88;
    case RC_ADDR(0x00017c8au): goto L_17C8A;
    case RC_ADDR(0x00017c8cu): goto L_17C8C;
    case RC_ADDR(0x00017c8eu): goto L_17C8E;
    case RC_ADDR(0x00017c92u): goto L_17C92;
    case RC_ADDR(0x00017c94u): goto L_17C94;
    case RC_ADDR(0x00017c98u): goto L_17C98;
    case RC_ADDR(0x00017c9cu): goto L_17C9C;
    case RC_ADDR(0x00017c9eu): goto L_17C9E;
    case RC_ADDR(0x00017ca0u): goto L_17CA0;
    case RC_ADDR(0x00017ca4u): goto L_17CA4;
    case RC_ADDR(0x00017ca8u): goto L_17CA8;
    case RC_ADDR(0x00017cacu): goto L_17CAC;
    case RC_ADDR(0x00017cb0u): goto L_17CB0;
    case RC_ADDR(0x00017cb4u): goto L_17CB4;
    case RC_ADDR(0x00017cb6u): goto L_17CB6;
    case RC_ADDR(0x00017cb8u): goto L_17CB8;
    case RC_ADDR(0x00017cbcu): goto L_17CBC;
    case RC_ADDR(0x00017cc0u): goto L_17CC0;
    case RC_ADDR(0x00017cc2u): goto L_17CC2;
    case RC_ADDR(0x00017cc4u): goto L_17CC4;
    case RC_ADDR(0x00017cc6u): goto L_17CC6;
    case RC_ADDR(0x00017ccau): goto L_17CCA;
    case RC_ADDR(0x00017cccu): goto L_17CCC;
    case RC_ADDR(0x00017cd0u): goto L_17CD0;
    case RC_ADDR(0x00017cd4u): goto L_17CD4;
    case RC_ADDR(0x00017cd6u): goto L_17CD6;
    case RC_ADDR(0x00017cd8u): goto L_17CD8;
    case RC_ADDR(0x00017cdcu): goto L_17CDC;
    case RC_ADDR(0x00017ce0u): goto L_17CE0;
    case RC_ADDR(0x00017ce4u): goto L_17CE4;
    case RC_ADDR(0x00017ce8u): goto L_17CE8;
    case RC_ADDR(0x00017cecu): goto L_17CEC;
    case RC_ADDR(0x00017ceeu): goto L_17CEE;
    case RC_ADDR(0x00017cf0u): goto L_17CF0;
    case RC_ADDR(0x00017cf4u): goto L_17CF4;
    case RC_ADDR(0x00017cf8u): goto L_17CF8;
    case RC_ADDR(0x00017cfau): goto L_17CFA;
    case RC_ADDR(0x00017cfcu): goto L_17CFC;
    case RC_ADDR(0x00017cfeu): goto L_17CFE;
    case RC_ADDR(0x00017d02u): goto L_17D02;
    case RC_ADDR(0x00017d04u): goto L_17D04;
    case RC_ADDR(0x00017d08u): goto L_17D08;
    case RC_ADDR(0x00017d0cu): goto L_17D0C;
    case RC_ADDR(0x00017d0eu): goto L_17D0E;
    case RC_ADDR(0x00017d10u): goto L_17D10;
    case RC_ADDR(0x00017d14u): goto L_17D14;
    case RC_ADDR(0x00017d18u): goto L_17D18;
    case RC_ADDR(0x00017d1cu): goto L_17D1C;
    case RC_ADDR(0x00017d20u): goto L_17D20;
    case RC_ADDR(0x00017d24u): goto L_17D24;
    case RC_ADDR(0x00017d26u): goto L_17D26;
    case RC_ADDR(0x00017d28u): goto L_17D28;
    case RC_ADDR(0x00017d2cu): goto L_17D2C;
    case RC_ADDR(0x00017d30u): goto L_17D30;
    case RC_ADDR(0x00017d32u): goto L_17D32;
    case RC_ADDR(0x00017d34u): goto L_17D34;
    case RC_ADDR(0x00017d36u): goto L_17D36;
    case RC_ADDR(0x00017d3au): goto L_17D3A;
    case RC_ADDR(0x00017d3cu): goto L_17D3C;
    case RC_ADDR(0x00017d40u): goto L_17D40;
    case RC_ADDR(0x00017d44u): goto L_17D44;
    case RC_ADDR(0x00017d46u): goto L_17D46;
    case RC_ADDR(0x00017d48u): goto L_17D48;
    case RC_ADDR(0x00017d4cu): goto L_17D4C;
    case RC_ADDR(0x00017d50u): goto L_17D50;
    case RC_ADDR(0x00017d54u): goto L_17D54;
    case RC_ADDR(0x00017d58u): goto L_17D58;
    case RC_ADDR(0x00017d5cu): goto L_17D5C;
    case RC_ADDR(0x00017d5eu): goto L_17D5E;
    case RC_ADDR(0x00017d60u): goto L_17D60;
    case RC_ADDR(0x00017d64u): goto L_17D64;
    case RC_ADDR(0x00017d68u): goto L_17D68;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17890:
    /* 00017890   2  movea.l A7,A0 */
    c->pc = RC_ADDR(0x00017890u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 7, RC_L);
    c->a[0] = t0;

L_17892:
    /* 00017892   4  movem.l { D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00017892u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_17896:
    /* 00017896   4  move.w (4,A0),D0 */
    c->pc = RC_ADDR(0x00017896u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1789A:
    /* 0001789a   4  move.w (6,A0),D1 */
    c->pc = RC_ADDR(0x0001789au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1789E:
    /* 0001789e   4  move.w (8,A0),D4 */
    c->pc = RC_ADDR(0x0001789eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_178A2:
    /* 000178a2   4  clr.w (1ca8,A4) */
    c->pc = RC_ADDR(0x000178a2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178A6:
    /* 000178a6   4  clr.w (1caa,A4) */
    c->pc = RC_ADDR(0x000178a6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1caau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178AA:
    /* 000178aa   4  clr.w (1cac,A4) */
    c->pc = RC_ADDR(0x000178aau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178AE:
    /* 000178ae   4  clr.w (1cae,A4) */
    c->pc = RC_ADDR(0x000178aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178B2:
    /* 000178b2   4  clr.w (1cb2,A4) */
    c->pc = RC_ADDR(0x000178b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178B6:
    /* 000178b6   4  clr.w (1cb4,A4) */
    c->pc = RC_ADDR(0x000178b6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178BA:
    /* 000178ba   4  clr.w (1cb6,A4) */
    c->pc = RC_ADDR(0x000178bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178BE:
    /* 000178be   4  clr.w (1cb8,A4) */
    c->pc = RC_ADDR(0x000178beu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178C2:
    /* 000178c2   4  clr.w (1cba,A4) */
    c->pc = RC_ADDR(0x000178c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cbau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178C6:
    /* 000178c6   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x000178c6u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_178CC:
    /* 000178cc   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x000178ccu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_178D2:
    /* 000178d2   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x000178d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_178D6:
    /* 000178d6   4  move.w D0,(ffffb590,A4) */
    c->pc = RC_ADDR(0x000178d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4a70u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_178DA:
    /* 000178da   4  add.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x000178dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_178DE:
    /* 000178de   4  sub.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x000178deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_178E2:
    /* 000178e2   4  move.w D1,(ffffb592,A4) */
    c->pc = RC_ADDR(0x000178e2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4a6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_178E6:
    /* 000178e6   4  add.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x000178e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_178EA:
    /* 000178ea   4  divu.w #140,D0 */
    c->pc = RC_ADDR(0x000178eau);
    rc_step(c, m, 144);
    t0 = 0x00000140u;
    rc_divu(c, m, 0, t0);

L_178EE:
    /* 000178ee   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x000178eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_178F0:
    /* 000178f0   4  divu.w #c8,D3 */
    c->pc = RC_ADDR(0x000178f0u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 3, t0);

L_178F4:
    /* 000178f4   4  mulu.w #3c,D3 */
    c->pc = RC_ADDR(0x000178f4u);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_mulu(c, 3, t0);

L_178F8:
    /* 000178f8   2  add.w D0,D3 */
    c->pc = RC_ADDR(0x000178f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_178FA:
    /* 000178fa   4  lea (ffffa43a,A4),A0 */
    c->pc = RC_ADDR(0x000178fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5bc6u);

L_178FE:
    /* 000178fe   2  clr.l D2 */
    c->pc = RC_ADDR(0x000178feu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_17900:
    /* 00017900   4  move.b (0,A0,D3.w),D2 */
    c->pc = RC_ADDR(0x00017900u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17904:
    /* 00017904   2  lsl.w #2,D2 */
    c->pc = RC_ADDR(0x00017904u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 2, RC_W), RC_W));

L_17906:
    /* 00017906   4  lea (1502,A4),A0 */
    c->pc = RC_ADDR(0x00017906u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1502u);

L_1790A:
    /* 0001790a   4  movea.l (0,A0,D2.w),A0 */
    c->pc = RC_ADDR(0x0001790au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[0] = t0;

L_1790E:
    /* 0001790e   2  swap D0 */
    c->pc = RC_ADDR(0x0001790eu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_17910:
    /* 00017910   4  divu.w #c8,D1 */
    c->pc = RC_ADDR(0x00017910u);
    rc_step(c, m, 144);
    t0 = 0x000000c8u;
    rc_divu(c, m, 1, t0);

L_17914:
    /* 00017914   2  swap D1 */
    c->pc = RC_ADDR(0x00017914u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_17916:
    /* 00017916   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00017916u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_17918:
    /* 00017918   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x00017918u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_1791C:
    /* 0001791c   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x0001791cu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_17922:
    /* 00017922   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x00017922u);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_17926:
    /* 00017926   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00017926u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17928:
    /* 00017928   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017928u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1792A:
    /* 0001792a   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001792au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1792C:
    /* 0001792c   4  cmpi.w #1,D4 */
    c->pc = RC_ADDR(0x0001792cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_17930:
    /* 00017930   2  bne 00017974 */
    c->pc = RC_ADDR(0x00017930u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17974;

L_17932:
    /* 00017932   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017932u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17938:
    /* 00017938   2  blt 00017944 */
    c->pc = RC_ADDR(0x00017938u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17944;

L_1793A:
    /* 0001793a   4  addi.w #28,D1 */
    c->pc = RC_ADDR(0x0001793au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000028u;
    rc_flags_add(c, RC_W, t1, 0x00000028u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1793E:
    /* 0001793e   6  addi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x0001793eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17944:
    /* 00017944   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017944u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017948u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17948:
    /* 00017948   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017948u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001794cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_1794C:
    /* 0001794c   4  move.w D0,(1cac,A4) */
    c->pc = RC_ADDR(0x0001794cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17950:
    /* 00017950   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017950u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017954u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17954:
    /* 00017954   4  move.w D0,(1cb8,A4) */
    c->pc = RC_ADDR(0x00017954u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17958:
    /* 00017958   4  lea (ffffb57e,A4),A1 */
    c->pc = RC_ADDR(0x00017958u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a82u);

L_1795C:
    /* 0001795c   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x0001795cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17960:
    /* 00017960   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017960u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17964:
    /* 00017964   4  lea (ffffb548,A4),A1 */
    c->pc = RC_ADDR(0x00017964u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ab8u);

L_17968:
    /* 00017968   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017968u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1796C:
    /* 0001796c   4  move.w D0,(1cae,A4) */
    c->pc = RC_ADDR(0x0001796cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17970:
    /* 00017970   4  bra 00017b84 */
    c->pc = RC_ADDR(0x00017970u);
    rc_step(c, m, 10);
    goto L_17B84;

L_17974:
    /* 00017974   4  cmpi.w #2,D4 */
    c->pc = RC_ADDR(0x00017974u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_17978:
    /* 00017978   2  bne 000179bc */
    c->pc = RC_ADDR(0x00017978u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_179BC;

L_1797A:
    /* 0001797a   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x0001797au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17980:
    /* 00017980   2  blt 0001798c */
    c->pc = RC_ADDR(0x00017980u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1798C;

L_17982:
    /* 00017982   4  subi.w #28,D1 */
    c->pc = RC_ADDR(0x00017982u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000028u;
    rc_flags_sub(c, RC_W, t1, 0x00000028u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17986:
    /* 00017986   6  subi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x00017986u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1798C:
    /* 0001798c   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x0001798cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017990u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17990:
    /* 00017990   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017990u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017994u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17994:
    /* 00017994   4  move.w D0,(1caa,A4) */
    c->pc = RC_ADDR(0x00017994u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17998:
    /* 00017998   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017998u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001799cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_1799C:
    /* 0001799c   4  move.w D0,(1cb4,A4) */
    c->pc = RC_ADDR(0x0001799cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179A0:
    /* 000179a0   4  lea (ffffb56c,A4),A1 */
    c->pc = RC_ADDR(0x000179a0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a94u);

L_179A4:
    /* 000179a4   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000179a4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_179A8:
    /* 000179a8   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x000179a8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179AC:
    /* 000179ac   4  lea (ffffb55a,A4),A1 */
    c->pc = RC_ADDR(0x000179acu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4aa6u);

L_179B0:
    /* 000179b0   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000179b0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_179B4:
    /* 000179b4   4  move.w D0,(1cae,A4) */
    c->pc = RC_ADDR(0x000179b4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179B8:
    /* 000179b8   4  bra 00017b84 */
    c->pc = RC_ADDR(0x000179b8u);
    rc_step(c, m, 10);
    goto L_17B84;

L_179BC:
    /* 000179bc   4  cmpi.w #4,D4 */
    c->pc = RC_ADDR(0x000179bcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_179C0:
    /* 000179c0   2  bne 00017a02 */
    c->pc = RC_ADDR(0x000179c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17A02;

L_179C2:
    /* 000179c2   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x000179c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_179C8:
    /* 000179c8   2  blt 000179d2 */
    c->pc = RC_ADDR(0x000179c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_179D2;

L_179CA:
    /* 000179ca   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x000179cau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_179CC:
    /* 000179cc   6  addi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x000179ccu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_179D2:
    /* 000179d2   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x000179d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000179d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_179D6:
    /* 000179d6   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x000179d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000179dau));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_179DA:
    /* 000179da   4  move.w D0,(1cb2,A4) */
    c->pc = RC_ADDR(0x000179dau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179DE:
    /* 000179de   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x000179deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000179e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_179E2:
    /* 000179e2   4  move.w D0,(1cb6,A4) */
    c->pc = RC_ADDR(0x000179e2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179E6:
    /* 000179e6   4  lea (ffffb55a,A4),A1 */
    c->pc = RC_ADDR(0x000179e6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4aa6u);

L_179EA:
    /* 000179ea   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000179eau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_179EE:
    /* 000179ee   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x000179eeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179F2:
    /* 000179f2   4  lea (ffffb548,A4),A1 */
    c->pc = RC_ADDR(0x000179f2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ab8u);

L_179F6:
    /* 000179f6   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x000179f6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_179FA:
    /* 000179fa   4  move.w D0,(1caa,A4) */
    c->pc = RC_ADDR(0x000179fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_179FE:
    /* 000179fe   4  bra 00017b84 */
    c->pc = RC_ADDR(0x000179feu);
    rc_step(c, m, 10);
    goto L_17B84;

L_17A02:
    /* 00017a02   4  cmpi.w #8,D4 */
    c->pc = RC_ADDR(0x00017a02u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_17A06:
    /* 00017a06   2  bne 00017a48 */
    c->pc = RC_ADDR(0x00017a06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17A48;

L_17A08:
    /* 00017a08   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017a08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17A0E:
    /* 00017a0e   2  blt 00017a18 */
    c->pc = RC_ADDR(0x00017a0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17A18;

L_17A10:
    /* 00017a10   2  subq.w #2,D1 */
    c->pc = RC_ADDR(0x00017a10u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17A12:
    /* 00017a12   6  subi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x00017a12u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17A18:
    /* 00017a18   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017a18u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017a1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17A1C:
    /* 00017a1c   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017a1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017a20u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17A20:
    /* 00017a20   4  move.w D0,(1cae,A4) */
    c->pc = RC_ADDR(0x00017a20u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A24:
    /* 00017a24   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017a24u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017a28u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17A28:
    /* 00017a28   4  move.w D0,(1cb4,A4) */
    c->pc = RC_ADDR(0x00017a28u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A2C:
    /* 00017a2c   4  lea (ffffb56c,A4),A1 */
    c->pc = RC_ADDR(0x00017a2cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a94u);

L_17A30:
    /* 00017a30   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017a30u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A34:
    /* 00017a34   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017a34u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A38:
    /* 00017a38   4  lea (ffffb57e,A4),A1 */
    c->pc = RC_ADDR(0x00017a38u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a82u);

L_17A3C:
    /* 00017a3c   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017a3cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A40:
    /* 00017a40   4  move.w D0,(1caa,A4) */
    c->pc = RC_ADDR(0x00017a40u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A44:
    /* 00017a44   4  bra 00017b84 */
    c->pc = RC_ADDR(0x00017a44u);
    rc_step(c, m, 10);
    goto L_17B84;

L_17A48:
    /* 00017a48   4  cmpi.w #5,D4 */
    c->pc = RC_ADDR(0x00017a48u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_17A4C:
    /* 00017a4c   2  bne 00017a9a */
    c->pc = RC_ADDR(0x00017a4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17A9A;

L_17A4E:
    /* 00017a4e   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017a4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17A54:
    /* 00017a54   2  blt 00017a66 */
    c->pc = RC_ADDR(0x00017a54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17A66;

L_17A56:
    /* 00017a56   4  addi.w #2a,D1 */
    c->pc = RC_ADDR(0x00017a56u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x0000002au;
    rc_flags_add(c, RC_W, t1, 0x0000002au, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17A5A:
    /* 00017a5a   6  addi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x00017a5au);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17A60:
    /* 00017a60   6  addi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x00017a60u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17A66:
    /* 00017a66   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017a66u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017a6au));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17A6A:
    /* 00017a6a   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017a6au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017a6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17A6E:
    /* 00017a6e   4  move.w D0,(1cba,A4) */
    c->pc = RC_ADDR(0x00017a6eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A72:
    /* 00017a72   4  lea (ffffb548,A4),A1 */
    c->pc = RC_ADDR(0x00017a72u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ab8u);

L_17A76:
    /* 00017a76   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017a76u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A7A:
    /* 00017a7a   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017a7au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A7E:
    /* 00017a7e   4  lea (ffffb57e,A4),A1 */
    c->pc = RC_ADDR(0x00017a7eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a82u);

L_17A82:
    /* 00017a82   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017a82u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A86:
    /* 00017a86   4  move.w D0,(1cb2,A4) */
    c->pc = RC_ADDR(0x00017a86u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A8A:
    /* 00017a8a   4  lea (ffffb55a,A4),A1 */
    c->pc = RC_ADDR(0x00017a8au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4aa6u);

L_17A8E:
    /* 00017a8e   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017a8eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A92:
    /* 00017a92   4  move.w D0,(1cac,A4) */
    c->pc = RC_ADDR(0x00017a92u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17A96:
    /* 00017a96   4  bra 00017b84 */
    c->pc = RC_ADDR(0x00017a96u);
    rc_step(c, m, 10);
    goto L_17B84;

L_17A9A:
    /* 00017a9a   4  cmpi.w #9,D4 */
    c->pc = RC_ADDR(0x00017a9au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_17A9E:
    /* 00017a9e   2  bne 00017aec */
    c->pc = RC_ADDR(0x00017a9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17AEC;

L_17AA0:
    /* 00017aa0   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017aa0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17AA6:
    /* 00017aa6   2  blt 00017ab8 */
    c->pc = RC_ADDR(0x00017aa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17AB8;

L_17AA8:
    /* 00017aa8   4  addi.w #26,D1 */
    c->pc = RC_ADDR(0x00017aa8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000026u;
    rc_flags_add(c, RC_W, t1, 0x00000026u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17AAC:
    /* 00017aac   6  addi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x00017aacu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17AB2:
    /* 00017ab2   6  subi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x00017ab2u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17AB8:
    /* 00017ab8   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017ab8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017abcu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17ABC:
    /* 00017abc   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017abcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017ac0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17AC0:
    /* 00017ac0   4  move.w D0,(1cb8,A4) */
    c->pc = RC_ADDR(0x00017ac0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AC4:
    /* 00017ac4   4  lea (ffffb57e,A4),A1 */
    c->pc = RC_ADDR(0x00017ac4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a82u);

L_17AC8:
    /* 00017ac8   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017ac8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17ACC:
    /* 00017acc   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017accu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AD0:
    /* 00017ad0   4  lea (ffffb56c,A4),A1 */
    c->pc = RC_ADDR(0x00017ad0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a94u);

L_17AD4:
    /* 00017ad4   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017ad4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AD8:
    /* 00017ad8   4  move.w D0,(1cac,A4) */
    c->pc = RC_ADDR(0x00017ad8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cacu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17ADC:
    /* 00017adc   4  lea (ffffb548,A4),A1 */
    c->pc = RC_ADDR(0x00017adcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ab8u);

L_17AE0:
    /* 00017ae0   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017ae0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AE4:
    /* 00017ae4   4  move.w D0,(1cae,A4) */
    c->pc = RC_ADDR(0x00017ae4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AE8:
    /* 00017ae8   4  bra 00017b84 */
    c->pc = RC_ADDR(0x00017ae8u);
    rc_step(c, m, 10);
    goto L_17B84;

L_17AEC:
    /* 00017aec   4  cmpi.w #6,D4 */
    c->pc = RC_ADDR(0x00017aecu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_17AF0:
    /* 00017af0   2  bne 00017b3c */
    c->pc = RC_ADDR(0x00017af0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17B3C;

L_17AF2:
    /* 00017af2   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017af2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17AF8:
    /* 00017af8   2  blt 00017b0a */
    c->pc = RC_ADDR(0x00017af8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17B0A;

L_17AFA:
    /* 00017afa   4  subi.w #26,D1 */
    c->pc = RC_ADDR(0x00017afau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000026u;
    rc_flags_sub(c, RC_W, t1, 0x00000026u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17AFE:
    /* 00017afe   6  subi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x00017afeu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17B04:
    /* 00017b04   6  addi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x00017b04u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17B0A:
    /* 00017b0a   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017b0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017b0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17B0E:
    /* 00017b0e   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017b0eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017b12u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17B12:
    /* 00017b12   4  move.w D0,(1cb6,A4) */
    c->pc = RC_ADDR(0x00017b12u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B16:
    /* 00017b16   4  lea (ffffb55a,A4),A1 */
    c->pc = RC_ADDR(0x00017b16u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4aa6u);

L_17B1A:
    /* 00017b1a   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b1au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B1E:
    /* 00017b1e   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017b1eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B22:
    /* 00017b22   4  lea (ffffb548,A4),A1 */
    c->pc = RC_ADDR(0x00017b22u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4ab8u);

L_17B26:
    /* 00017b26   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b26u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B2A:
    /* 00017b2a   4  move.w D0,(1caa,A4) */
    c->pc = RC_ADDR(0x00017b2au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B2E:
    /* 00017b2e   4  lea (ffffb56c,A4),A1 */
    c->pc = RC_ADDR(0x00017b2eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a94u);

L_17B32:
    /* 00017b32   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b32u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B36:
    /* 00017b36   4  move.w D0,(1cb2,A4) */
    c->pc = RC_ADDR(0x00017b36u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B3A:
    /* 00017b3a   2  bra 00017b84 */
    c->pc = RC_ADDR(0x00017b3au);
    rc_step(c, m, 10);
    goto L_17B84;

L_17B3C:
    /* 00017b3c   6  cmpi.w #be,(1ca6,A4) */
    c->pc = RC_ADDR(0x00017b3cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17B42:
    /* 00017b42   2  blt 00017b54 */
    c->pc = RC_ADDR(0x00017b42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17B54;

L_17B44:
    /* 00017b44   4  subi.w #2a,D1 */
    c->pc = RC_ADDR(0x00017b44u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x0000002au;
    rc_flags_sub(c, RC_W, t1, 0x0000002au, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17B48:
    /* 00017b48   6  subi.w #10,(ffffb590,A4) */
    c->pc = RC_ADDR(0x00017b48u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a70u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17B4E:
    /* 00017b4e   6  subi.w #a,(ffffb592,A4) */
    c->pc = RC_ADDR(0x00017b4eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x4a6eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17B54:
    /* 00017b54   4  bsr 000177e2 */
    c->pc = RC_ADDR(0x00017b54u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017b58u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177e2u);
    return;

L_17B58:
    /* 00017b58   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x00017b58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017b5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17B5C:
    /* 00017b5c   4  move.w D0,(1cb4,A4) */
    c->pc = RC_ADDR(0x00017b5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B60:
    /* 00017b60   4  lea (ffffb56c,A4),A1 */
    c->pc = RC_ADDR(0x00017b60u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a94u);

L_17B64:
    /* 00017b64   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b64u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B68:
    /* 00017b68   4  move.w D0,(1ca8,A4) */
    c->pc = RC_ADDR(0x00017b68u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B6C:
    /* 00017b6c   4  lea (ffffb57e,A4),A1 */
    c->pc = RC_ADDR(0x00017b6cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4a82u);

L_17B70:
    /* 00017b70   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b70u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B74:
    /* 00017b74   4  move.w D0,(1caa,A4) */
    c->pc = RC_ADDR(0x00017b74u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B78:
    /* 00017b78   4  lea (ffffb55a,A4),A1 */
    c->pc = RC_ADDR(0x00017b78u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x4aa6u);

L_17B7C:
    /* 00017b7c   4  move.w (0,A1,D3.w),D0 */
    c->pc = RC_ADDR(0x00017b7cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B80:
    /* 00017b80   4  move.w D0,(1cae,A4) */
    c->pc = RC_ADDR(0x00017b80u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1caeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B84:
    /* 00017b84   4  move.w (1ca8,A4),D0 */
    c->pc = RC_ADDR(0x00017b84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B88:
    /* 00017b88   2  beq 00017bb4 */
    c->pc = RC_ADDR(0x00017b88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17BB4;

L_17B8A:
    /* 00017b8a   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017b8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17B8C:
    /* 00017b8c   2  bmi 00017bb4 */
    c->pc = RC_ADDR(0x00017b8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17BB4;

L_17B8E:
    /* 00017b8e   4  cmpi.w #320,D1 */
    c->pc = RC_ADDR(0x00017b8eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000320u);

L_17B92:
    /* 00017b92   2  bge 00017bb4 */
    c->pc = RC_ADDR(0x00017b92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17BB4;

L_17B94:
    /* 00017b94   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017b94u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B98:
    /* 00017b98   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017b98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017b9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17B9C:
    /* 00017b9c   2  beq 00017bb4 */
    c->pc = RC_ADDR(0x00017b9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17BB4;

L_17B9E:
    /* 00017b9e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017b9eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BA0:
    /* 00017ba0   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ba0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BA4:
    /* 00017ba4   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ba4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BA8:
    /* 00017ba8   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017ba8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017bacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17BAC:
    /* 00017bac   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017bacu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17BAE:
    /* 00017bae   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017baeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17BB0:
    /* 00017bb0   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00017bb0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BB4:
    /* 00017bb4   4  move.w (1caa,A4),D0 */
    c->pc = RC_ADDR(0x00017bb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1caau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BB8:
    /* 00017bb8   2  beq 00017be8 */
    c->pc = RC_ADDR(0x00017bb8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17BE8;

L_17BBA:
    /* 00017bba   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017bbau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17BBC:
    /* 00017bbc   2  bmi 00017be8 */
    c->pc = RC_ADDR(0x00017bbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17BE8;

L_17BBE:
    /* 00017bbe   4  cmpi.w #2f8,D1 */
    c->pc = RC_ADDR(0x00017bbeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x000002f8u);

L_17BC2:
    /* 00017bc2   2  bge 00017be8 */
    c->pc = RC_ADDR(0x00017bc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17BE8;

L_17BC4:
    /* 00017bc4   4  move.w (28,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017bc4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x28u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BC8:
    /* 00017bc8   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017bc8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017bccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17BCC:
    /* 00017bcc   2  beq 00017be8 */
    c->pc = RC_ADDR(0x00017bccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17BE8;

L_17BCE:
    /* 00017bce   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017bceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BD0:
    /* 00017bd0   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017bd0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BD4:
    /* 00017bd4   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017bd4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BD8:
    /* 00017bd8   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017bd8u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17BDC:
    /* 00017bdc   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017bdcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017be0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17BE0:
    /* 00017be0   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017be0u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17BE2:
    /* 00017be2   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017be2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17BE4:
    /* 00017be4   4  move.w D0,(28,A0,D1.w) */
    c->pc = RC_ADDR(0x00017be4u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BE8:
    /* 00017be8   4  move.w (1cac,A4),D0 */
    c->pc = RC_ADDR(0x00017be8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cacu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BEC:
    /* 00017bec   2  beq 00017c1c */
    c->pc = RC_ADDR(0x00017becu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C1C;

L_17BEE:
    /* 00017bee   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017beeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17BF0:
    /* 00017bf0   2  bmi 00017c1c */
    c->pc = RC_ADDR(0x00017bf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17C1C;

L_17BF2:
    /* 00017bf2   4  cmpi.w #348,D1 */
    c->pc = RC_ADDR(0x00017bf2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000348u);

L_17BF6:
    /* 00017bf6   2  bge 00017c1c */
    c->pc = RC_ADDR(0x00017bf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17C1C;

L_17BF8:
    /* 00017bf8   4  move.w (ffffffd8,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017bf8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x28u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BFC:
    /* 00017bfc   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017bfcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c00u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17C00:
    /* 00017c00   2  beq 00017c1c */
    c->pc = RC_ADDR(0x00017c00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C1C;

L_17C02:
    /* 00017c02   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c02u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C04:
    /* 00017c04   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c04u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C08:
    /* 00017c08   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C0C:
    /* 00017c0c   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017c0cu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17C10:
    /* 00017c10   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017c10u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17C14:
    /* 00017c14   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017c14u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17C16:
    /* 00017c16   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017c16u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17C18:
    /* 00017c18   4  move.w D0,(ffffffd8,A0,D1.w) */
    c->pc = RC_ADDR(0x00017c18u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C1C:
    /* 00017c1c   4  move.w (1cae,A4),D0 */
    c->pc = RC_ADDR(0x00017c1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1caeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C20:
    /* 00017c20   2  beq 00017c50 */
    c->pc = RC_ADDR(0x00017c20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C50;

L_17C22:
    /* 00017c22   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017c22u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17C24:
    /* 00017c24   2  bmi 00017c50 */
    c->pc = RC_ADDR(0x00017c24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17C50;

L_17C26:
    /* 00017c26   4  cmpi.w #31e,D1 */
    c->pc = RC_ADDR(0x00017c26u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000031eu);

L_17C2A:
    /* 00017c2a   2  bge 00017c50 */
    c->pc = RC_ADDR(0x00017c2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17C50;

L_17C2C:
    /* 00017c2c   4  move.w (2,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017c2cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C30:
    /* 00017c30   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017c30u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c34u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17C34:
    /* 00017c34   2  beq 00017c50 */
    c->pc = RC_ADDR(0x00017c34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C50;

L_17C36:
    /* 00017c36   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c36u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C38:
    /* 00017c38   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C3C:
    /* 00017c3c   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017c3cu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17C40:
    /* 00017c40   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c40u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C44:
    /* 00017c44   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017c44u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17C48:
    /* 00017c48   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017c48u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17C4A:
    /* 00017c4a   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017c4au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17C4C:
    /* 00017c4c   4  move.w D0,(2,A0,D1.w) */
    c->pc = RC_ADDR(0x00017c4cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C50:
    /* 00017c50   4  move.w (1cb2,A4),D0 */
    c->pc = RC_ADDR(0x00017c50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C54:
    /* 00017c54   2  beq 00017c84 */
    c->pc = RC_ADDR(0x00017c54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C84;

L_17C56:
    /* 00017c56   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017c56u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17C58:
    /* 00017c58   2  bmi 00017c84 */
    c->pc = RC_ADDR(0x00017c58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17C84;

L_17C5A:
    /* 00017c5a   4  cmpi.w #322,D1 */
    c->pc = RC_ADDR(0x00017c5au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000322u);

L_17C5E:
    /* 00017c5e   2  bge 00017c84 */
    c->pc = RC_ADDR(0x00017c5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17C84;

L_17C60:
    /* 00017c60   4  move.w (fffffffe,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017c60u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x2u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C64:
    /* 00017c64   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017c64u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c68u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17C68:
    /* 00017c68   2  beq 00017c84 */
    c->pc = RC_ADDR(0x00017c68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17C84;

L_17C6A:
    /* 00017c6a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c6au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C6C:
    /* 00017c6c   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c6cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C70:
    /* 00017c70   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017c70u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17C74:
    /* 00017c74   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017c74u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C78:
    /* 00017c78   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017c78u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17C7C:
    /* 00017c7c   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017c7cu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17C7E:
    /* 00017c7e   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017c7eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17C80:
    /* 00017c80   4  move.w D0,(fffffffe,A0,D1.w) */
    c->pc = RC_ADDR(0x00017c80u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x2u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C84:
    /* 00017c84   4  move.w (1cb4,A4),D0 */
    c->pc = RC_ADDR(0x00017c84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C88:
    /* 00017c88   2  beq 00017cbc */
    c->pc = RC_ADDR(0x00017c88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17CBC;

L_17C8A:
    /* 00017c8a   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017c8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17C8C:
    /* 00017c8c   2  bmi 00017cbc */
    c->pc = RC_ADDR(0x00017c8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17CBC;

L_17C8E:
    /* 00017c8e   4  cmpi.w #2f6,D1 */
    c->pc = RC_ADDR(0x00017c8eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x000002f6u);

L_17C92:
    /* 00017c92   2  bge 00017cbc */
    c->pc = RC_ADDR(0x00017c92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17CBC;

L_17C94:
    /* 00017c94   4  move.w (2a,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017c94u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C98:
    /* 00017c98   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017c98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017c9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17C9C:
    /* 00017c9c   2  beq 00017cbc */
    c->pc = RC_ADDR(0x00017c9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17CBC;

L_17C9E:
    /* 00017c9e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c9eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CA0:
    /* 00017ca0   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ca0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CA4:
    /* 00017ca4   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017ca4u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CA8:
    /* 00017ca8   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ca8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CAC:
    /* 00017cac   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017cacu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CB0:
    /* 00017cb0   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017cb0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017cb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17CB4:
    /* 00017cb4   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017cb4u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17CB6:
    /* 00017cb6   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017cb6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17CB8:
    /* 00017cb8   4  move.w D0,(2a,A0,D1.w) */
    c->pc = RC_ADDR(0x00017cb8u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2au + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CBC:
    /* 00017cbc   4  move.w (1cb6,A4),D0 */
    c->pc = RC_ADDR(0x00017cbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CC0:
    /* 00017cc0   2  beq 00017cf4 */
    c->pc = RC_ADDR(0x00017cc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17CF4;

L_17CC2:
    /* 00017cc2   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017cc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17CC4:
    /* 00017cc4   2  bmi 00017cf4 */
    c->pc = RC_ADDR(0x00017cc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17CF4;

L_17CC6:
    /* 00017cc6   4  cmpi.w #2fa,D1 */
    c->pc = RC_ADDR(0x00017cc6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x000002fau);

L_17CCA:
    /* 00017cca   2  bge 00017cf4 */
    c->pc = RC_ADDR(0x00017ccau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17CF4;

L_17CCC:
    /* 00017ccc   4  move.w (26,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017cccu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x26u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CD0:
    /* 00017cd0   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017cd0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017cd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17CD4:
    /* 00017cd4   2  beq 00017cf4 */
    c->pc = RC_ADDR(0x00017cd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17CF4;

L_17CD6:
    /* 00017cd6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017cd6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CD8:
    /* 00017cd8   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017cd8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CDC:
    /* 00017cdc   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017cdcu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CE0:
    /* 00017ce0   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017ce0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CE4:
    /* 00017ce4   4  addi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017ce4u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000010u;
    rc_flags_add(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CE8:
    /* 00017ce8   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017ce8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017cecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17CEC:
    /* 00017cec   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017cecu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17CEE:
    /* 00017cee   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017ceeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17CF0:
    /* 00017cf0   4  move.w D0,(26,A0,D1.w) */
    c->pc = RC_ADDR(0x00017cf0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x26u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CF4:
    /* 00017cf4   4  move.w (1cb8,A4),D0 */
    c->pc = RC_ADDR(0x00017cf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CF8:
    /* 00017cf8   2  beq 00017d2c */
    c->pc = RC_ADDR(0x00017cf8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17D2C;

L_17CFA:
    /* 00017cfa   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017cfau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17CFC:
    /* 00017cfc   2  bmi 00017d2c */
    c->pc = RC_ADDR(0x00017cfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17D2C;

L_17CFE:
    /* 00017cfe   4  cmpi.w #346,D1 */
    c->pc = RC_ADDR(0x00017cfeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000346u);

L_17D02:
    /* 00017d02   2  bge 00017d2c */
    c->pc = RC_ADDR(0x00017d02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17D2C;

L_17D04:
    /* 00017d04   4  move.w (ffffffda,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017d04u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x26u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D08:
    /* 00017d08   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017d08u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17D0C:
    /* 00017d0c   2  beq 00017d2c */
    c->pc = RC_ADDR(0x00017d0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17D2C;

L_17D0E:
    /* 00017d0e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017d0eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D10:
    /* 00017d10   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017d10u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D14:
    /* 00017d14   4  addi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017d14u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D18:
    /* 00017d18   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017d18u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D1C:
    /* 00017d1c   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017d1cu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D20:
    /* 00017d20   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017d20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17D24:
    /* 00017d24   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017d24u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17D26:
    /* 00017d26   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017d26u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17D28:
    /* 00017d28   4  move.w D0,(ffffffda,A0,D1.w) */
    c->pc = RC_ADDR(0x00017d28u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x26u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D2C:
    /* 00017d2c   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00017d2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D30:
    /* 00017d30   2  beq 00017d64 */
    c->pc = RC_ADDR(0x00017d30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17D64;

L_17D32:
    /* 00017d32   2  tst.w D1 */
    c->pc = RC_ADDR(0x00017d32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17D34:
    /* 00017d34   2  bmi 00017d64 */
    c->pc = RC_ADDR(0x00017d34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_17D64;

L_17D36:
    /* 00017d36   4  cmpi.w #34a,D1 */
    c->pc = RC_ADDR(0x00017d36u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000034au);

L_17D3A:
    /* 00017d3a   2  bge 00017d64 */
    c->pc = RC_ADDR(0x00017d3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17D64;

L_17D3C:
    /* 00017d3c   4  move.w (ffffffd6,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00017d3cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] - 0x2au + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D40:
    /* 00017d40   4  bsr 0001786a */
    c->pc = RC_ADDR(0x00017d40u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d44u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001786au);
    return;

L_17D44:
    /* 00017d44   2  beq 00017d64 */
    c->pc = RC_ADDR(0x00017d44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17D64;

L_17D46:
    /* 00017d46   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017d46u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D48:
    /* 00017d48   4  move.w (ffffb592,A4),-(A7) */
    c->pc = RC_ADDR(0x00017d48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D4C:
    /* 00017d4c   4  subi.w #a,(A7) */
    c->pc = RC_ADDR(0x00017d4cu);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D50:
    /* 00017d50   4  move.w (ffffb590,A4),-(A7) */
    c->pc = RC_ADDR(0x00017d50u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D54:
    /* 00017d54   4  subi.w #10,(A7) */
    c->pc = RC_ADDR(0x00017d54u);
    rc_step(c, m, 16);
    t3 = c->a[7];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000010u;
    rc_flags_sub(c, RC_W, t1, 0x00000010u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D58:
    /* 00017d58   4  jsr (00017804) */
    c->pc = RC_ADDR(0x00017d58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00017804u);
    return;

L_17D5C:
    /* 00017d5c   2  addq.l #6,A7 */
    c->pc = RC_ADDR(0x00017d5cu);
    rc_step(c, m, 8);
    c->a[7] += 0x00000006u;

L_17D5E:
    /* 00017d5e   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00017d5eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_17D60:
    /* 00017d60   4  move.w D0,(ffffffd6,A0,D1.w) */
    c->pc = RC_ADDR(0x00017d60u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] - 0x2au + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D64:
    /* 00017d64   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x00017d64u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_17D68:
    /* 00017d68   2  rts */
    c->pc = RC_ADDR(0x00017d68u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
