/* fn_000189aa - 1598 byte(s), 476 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000189aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000189aau): goto L_189AA;
    case RC_ADDR(0x000189aeu): goto L_189AE;
    case RC_ADDR(0x000189b2u): goto L_189B2;
    case RC_ADDR(0x000189b6u): goto L_189B6;
    case RC_ADDR(0x000189b8u): goto L_189B8;
    case RC_ADDR(0x000189beu): goto L_189BE;
    case RC_ADDR(0x000189c2u): goto L_189C2;
    case RC_ADDR(0x000189c6u): goto L_189C6;
    case RC_ADDR(0x000189cau): goto L_189CA;
    case RC_ADDR(0x000189ceu): goto L_189CE;
    case RC_ADDR(0x000189d2u): goto L_189D2;
    case RC_ADDR(0x000189d6u): goto L_189D6;
    case RC_ADDR(0x000189dau): goto L_189DA;
    case RC_ADDR(0x000189deu): goto L_189DE;
    case RC_ADDR(0x000189e2u): goto L_189E2;
    case RC_ADDR(0x000189e6u): goto L_189E6;
    case RC_ADDR(0x000189eau): goto L_189EA;
    case RC_ADDR(0x000189eeu): goto L_189EE;
    case RC_ADDR(0x000189f2u): goto L_189F2;
    case RC_ADDR(0x000189f6u): goto L_189F6;
    case RC_ADDR(0x000189fau): goto L_189FA;
    case RC_ADDR(0x000189feu): goto L_189FE;
    case RC_ADDR(0x00018a02u): goto L_18A02;
    case RC_ADDR(0x00018a06u): goto L_18A06;
    case RC_ADDR(0x00018a08u): goto L_18A08;
    case RC_ADDR(0x00018a0au): goto L_18A0A;
    case RC_ADDR(0x00018a0cu): goto L_18A0C;
    case RC_ADDR(0x00018a10u): goto L_18A10;
    case RC_ADDR(0x00018a14u): goto L_18A14;
    case RC_ADDR(0x00018a16u): goto L_18A16;
    case RC_ADDR(0x00018a18u): goto L_18A18;
    case RC_ADDR(0x00018a1cu): goto L_18A1C;
    case RC_ADDR(0x00018a20u): goto L_18A20;
    case RC_ADDR(0x00018a24u): goto L_18A24;
    case RC_ADDR(0x00018a26u): goto L_18A26;
    case RC_ADDR(0x00018a28u): goto L_18A28;
    case RC_ADDR(0x00018a2cu): goto L_18A2C;
    case RC_ADDR(0x00018a2eu): goto L_18A2E;
    case RC_ADDR(0x00018a32u): goto L_18A32;
    case RC_ADDR(0x00018a34u): goto L_18A34;
    case RC_ADDR(0x00018a38u): goto L_18A38;
    case RC_ADDR(0x00018a3au): goto L_18A3A;
    case RC_ADDR(0x00018a3cu): goto L_18A3C;
    case RC_ADDR(0x00018a40u): goto L_18A40;
    case RC_ADDR(0x00018a42u): goto L_18A42;
    case RC_ADDR(0x00018a46u): goto L_18A46;
    case RC_ADDR(0x00018a48u): goto L_18A48;
    case RC_ADDR(0x00018a4au): goto L_18A4A;
    case RC_ADDR(0x00018a4cu): goto L_18A4C;
    case RC_ADDR(0x00018a50u): goto L_18A50;
    case RC_ADDR(0x00018a54u): goto L_18A54;
    case RC_ADDR(0x00018a56u): goto L_18A56;
    case RC_ADDR(0x00018a5au): goto L_18A5A;
    case RC_ADDR(0x00018a5eu): goto L_18A5E;
    case RC_ADDR(0x00018a60u): goto L_18A60;
    case RC_ADDR(0x00018a62u): goto L_18A62;
    case RC_ADDR(0x00018a66u): goto L_18A66;
    case RC_ADDR(0x00018a68u): goto L_18A68;
    case RC_ADDR(0x00018a6cu): goto L_18A6C;
    case RC_ADDR(0x00018a6eu): goto L_18A6E;
    case RC_ADDR(0x00018a72u): goto L_18A72;
    case RC_ADDR(0x00018a74u): goto L_18A74;
    case RC_ADDR(0x00018a76u): goto L_18A76;
    case RC_ADDR(0x00018a7au): goto L_18A7A;
    case RC_ADDR(0x00018a7cu): goto L_18A7C;
    case RC_ADDR(0x00018a80u): goto L_18A80;
    case RC_ADDR(0x00018a82u): goto L_18A82;
    case RC_ADDR(0x00018a86u): goto L_18A86;
    case RC_ADDR(0x00018a88u): goto L_18A88;
    case RC_ADDR(0x00018a8au): goto L_18A8A;
    case RC_ADDR(0x00018a90u): goto L_18A90;
    case RC_ADDR(0x00018a94u): goto L_18A94;
    case RC_ADDR(0x00018a96u): goto L_18A96;
    case RC_ADDR(0x00018a98u): goto L_18A98;
    case RC_ADDR(0x00018a9eu): goto L_18A9E;
    case RC_ADDR(0x00018aa2u): goto L_18AA2;
    case RC_ADDR(0x00018aa4u): goto L_18AA4;
    case RC_ADDR(0x00018aa6u): goto L_18AA6;
    case RC_ADDR(0x00018aacu): goto L_18AAC;
    case RC_ADDR(0x00018ab0u): goto L_18AB0;
    case RC_ADDR(0x00018ab2u): goto L_18AB2;
    case RC_ADDR(0x00018ab4u): goto L_18AB4;
    case RC_ADDR(0x00018abau): goto L_18ABA;
    case RC_ADDR(0x00018abcu): goto L_18ABC;
    case RC_ADDR(0x00018ac2u): goto L_18AC2;
    case RC_ADDR(0x00018ac6u): goto L_18AC6;
    case RC_ADDR(0x00018acau): goto L_18ACA;
    case RC_ADDR(0x00018aceu): goto L_18ACE;
    case RC_ADDR(0x00018ad2u): goto L_18AD2;
    case RC_ADDR(0x00018ad6u): goto L_18AD6;
    case RC_ADDR(0x00018adau): goto L_18ADA;
    case RC_ADDR(0x00018adeu): goto L_18ADE;
    case RC_ADDR(0x00018ae2u): goto L_18AE2;
    case RC_ADDR(0x00018ae6u): goto L_18AE6;
    case RC_ADDR(0x00018ae8u): goto L_18AE8;
    case RC_ADDR(0x00018aeeu): goto L_18AEE;
    case RC_ADDR(0x00018af0u): goto L_18AF0;
    case RC_ADDR(0x00018af2u): goto L_18AF2;
    case RC_ADDR(0x00018af4u): goto L_18AF4;
    case RC_ADDR(0x00018af6u): goto L_18AF6;
    case RC_ADDR(0x00018afau): goto L_18AFA;
    case RC_ADDR(0x00018afeu): goto L_18AFE;
    case RC_ADDR(0x00018b00u): goto L_18B00;
    case RC_ADDR(0x00018b04u): goto L_18B04;
    case RC_ADDR(0x00018b08u): goto L_18B08;
    case RC_ADDR(0x00018b0au): goto L_18B0A;
    case RC_ADDR(0x00018b0eu): goto L_18B0E;
    case RC_ADDR(0x00018b10u): goto L_18B10;
    case RC_ADDR(0x00018b14u): goto L_18B14;
    case RC_ADDR(0x00018b18u): goto L_18B18;
    case RC_ADDR(0x00018b1cu): goto L_18B1C;
    case RC_ADDR(0x00018b20u): goto L_18B20;
    case RC_ADDR(0x00018b24u): goto L_18B24;
    case RC_ADDR(0x00018b28u): goto L_18B28;
    case RC_ADDR(0x00018b2au): goto L_18B2A;
    case RC_ADDR(0x00018b2cu): goto L_18B2C;
    case RC_ADDR(0x00018b32u): goto L_18B32;
    case RC_ADDR(0x00018b34u): goto L_18B34;
    case RC_ADDR(0x00018b38u): goto L_18B38;
    case RC_ADDR(0x00018b3cu): goto L_18B3C;
    case RC_ADDR(0x00018b40u): goto L_18B40;
    case RC_ADDR(0x00018b44u): goto L_18B44;
    case RC_ADDR(0x00018b48u): goto L_18B48;
    case RC_ADDR(0x00018b4au): goto L_18B4A;
    case RC_ADDR(0x00018b4eu): goto L_18B4E;
    case RC_ADDR(0x00018b52u): goto L_18B52;
    case RC_ADDR(0x00018b56u): goto L_18B56;
    case RC_ADDR(0x00018b58u): goto L_18B58;
    case RC_ADDR(0x00018b5au): goto L_18B5A;
    case RC_ADDR(0x00018b5eu): goto L_18B5E;
    case RC_ADDR(0x00018b60u): goto L_18B60;
    case RC_ADDR(0x00018b62u): goto L_18B62;
    case RC_ADDR(0x00018b66u): goto L_18B66;
    case RC_ADDR(0x00018b68u): goto L_18B68;
    case RC_ADDR(0x00018b6au): goto L_18B6A;
    case RC_ADDR(0x00018b6eu): goto L_18B6E;
    case RC_ADDR(0x00018b70u): goto L_18B70;
    case RC_ADDR(0x00018b74u): goto L_18B74;
    case RC_ADDR(0x00018b78u): goto L_18B78;
    case RC_ADDR(0x00018b7au): goto L_18B7A;
    case RC_ADDR(0x00018b7eu): goto L_18B7E;
    case RC_ADDR(0x00018b80u): goto L_18B80;
    case RC_ADDR(0x00018b82u): goto L_18B82;
    case RC_ADDR(0x00018b84u): goto L_18B84;
    case RC_ADDR(0x00018b88u): goto L_18B88;
    case RC_ADDR(0x00018b8eu): goto L_18B8E;
    case RC_ADDR(0x00018b92u): goto L_18B92;
    case RC_ADDR(0x00018b96u): goto L_18B96;
    case RC_ADDR(0x00018b9au): goto L_18B9A;
    case RC_ADDR(0x00018b9cu): goto L_18B9C;
    case RC_ADDR(0x00018ba2u): goto L_18BA2;
    case RC_ADDR(0x00018ba4u): goto L_18BA4;
    case RC_ADDR(0x00018ba8u): goto L_18BA8;
    case RC_ADDR(0x00018baau): goto L_18BAA;
    case RC_ADDR(0x00018bb0u): goto L_18BB0;
    case RC_ADDR(0x00018bb4u): goto L_18BB4;
    case RC_ADDR(0x00018bb8u): goto L_18BB8;
    case RC_ADDR(0x00018bbau): goto L_18BBA;
    case RC_ADDR(0x00018bbeu): goto L_18BBE;
    case RC_ADDR(0x00018bc0u): goto L_18BC0;
    case RC_ADDR(0x00018bc2u): goto L_18BC2;
    case RC_ADDR(0x00018bc6u): goto L_18BC6;
    case RC_ADDR(0x00018bccu): goto L_18BCC;
    case RC_ADDR(0x00018bd0u): goto L_18BD0;
    case RC_ADDR(0x00018bd2u): goto L_18BD2;
    case RC_ADDR(0x00018bd4u): goto L_18BD4;
    case RC_ADDR(0x00018bd8u): goto L_18BD8;
    case RC_ADDR(0x00018bdau): goto L_18BDA;
    case RC_ADDR(0x00018bdcu): goto L_18BDC;
    case RC_ADDR(0x00018be0u): goto L_18BE0;
    case RC_ADDR(0x00018be6u): goto L_18BE6;
    case RC_ADDR(0x00018beau): goto L_18BEA;
    case RC_ADDR(0x00018beeu): goto L_18BEE;
    case RC_ADDR(0x00018bf2u): goto L_18BF2;
    case RC_ADDR(0x00018bf4u): goto L_18BF4;
    case RC_ADDR(0x00018bf6u): goto L_18BF6;
    case RC_ADDR(0x00018bfau): goto L_18BFA;
    case RC_ADDR(0x00018bfcu): goto L_18BFC;
    case RC_ADDR(0x00018bfeu): goto L_18BFE;
    case RC_ADDR(0x00018c02u): goto L_18C02;
    case RC_ADDR(0x00018c08u): goto L_18C08;
    case RC_ADDR(0x00018c0cu): goto L_18C0C;
    case RC_ADDR(0x00018c10u): goto L_18C10;
    case RC_ADDR(0x00018c14u): goto L_18C14;
    case RC_ADDR(0x00018c16u): goto L_18C16;
    case RC_ADDR(0x00018c1au): goto L_18C1A;
    case RC_ADDR(0x00018c1cu): goto L_18C1C;
    case RC_ADDR(0x00018c20u): goto L_18C20;
    case RC_ADDR(0x00018c22u): goto L_18C22;
    case RC_ADDR(0x00018c24u): goto L_18C24;
    case RC_ADDR(0x00018c28u): goto L_18C28;
    case RC_ADDR(0x00018c2au): goto L_18C2A;
    case RC_ADDR(0x00018c2eu): goto L_18C2E;
    case RC_ADDR(0x00018c32u): goto L_18C32;
    case RC_ADDR(0x00018c34u): goto L_18C34;
    case RC_ADDR(0x00018c38u): goto L_18C38;
    case RC_ADDR(0x00018c3au): goto L_18C3A;
    case RC_ADDR(0x00018c3eu): goto L_18C3E;
    case RC_ADDR(0x00018c40u): goto L_18C40;
    case RC_ADDR(0x00018c42u): goto L_18C42;
    case RC_ADDR(0x00018c46u): goto L_18C46;
    case RC_ADDR(0x00018c48u): goto L_18C48;
    case RC_ADDR(0x00018c4cu): goto L_18C4C;
    case RC_ADDR(0x00018c50u): goto L_18C50;
    case RC_ADDR(0x00018c54u): goto L_18C54;
    case RC_ADDR(0x00018c58u): goto L_18C58;
    case RC_ADDR(0x00018c5cu): goto L_18C5C;
    case RC_ADDR(0x00018c60u): goto L_18C60;
    case RC_ADDR(0x00018c64u): goto L_18C64;
    case RC_ADDR(0x00018c68u): goto L_18C68;
    case RC_ADDR(0x00018c6cu): goto L_18C6C;
    case RC_ADDR(0x00018c70u): goto L_18C70;
    case RC_ADDR(0x00018c72u): goto L_18C72;
    case RC_ADDR(0x00018c74u): goto L_18C74;
    case RC_ADDR(0x00018c78u): goto L_18C78;
    case RC_ADDR(0x00018c7au): goto L_18C7A;
    case RC_ADDR(0x00018c7eu): goto L_18C7E;
    case RC_ADDR(0x00018c80u): goto L_18C80;
    case RC_ADDR(0x00018c86u): goto L_18C86;
    case RC_ADDR(0x00018c8au): goto L_18C8A;
    case RC_ADDR(0x00018c8cu): goto L_18C8C;
    case RC_ADDR(0x00018c8eu): goto L_18C8E;
    case RC_ADDR(0x00018c92u): goto L_18C92;
    case RC_ADDR(0x00018c98u): goto L_18C98;
    case RC_ADDR(0x00018c9au): goto L_18C9A;
    case RC_ADDR(0x00018ca0u): goto L_18CA0;
    case RC_ADDR(0x00018ca4u): goto L_18CA4;
    case RC_ADDR(0x00018ca6u): goto L_18CA6;
    case RC_ADDR(0x00018caau): goto L_18CAA;
    case RC_ADDR(0x00018cacu): goto L_18CAC;
    case RC_ADDR(0x00018cb0u): goto L_18CB0;
    case RC_ADDR(0x00018cb4u): goto L_18CB4;
    case RC_ADDR(0x00018cb6u): goto L_18CB6;
    case RC_ADDR(0x00018cbau): goto L_18CBA;
    case RC_ADDR(0x00018cbcu): goto L_18CBC;
    case RC_ADDR(0x00018cc2u): goto L_18CC2;
    case RC_ADDR(0x00018cc8u): goto L_18CC8;
    case RC_ADDR(0x00018cccu): goto L_18CCC;
    case RC_ADDR(0x00018cceu): goto L_18CCE;
    case RC_ADDR(0x00018cd2u): goto L_18CD2;
    case RC_ADDR(0x00018ce2u): goto L_18CE2;
    case RC_ADDR(0x00018ce8u): goto L_18CE8;
    case RC_ADDR(0x00018ceau): goto L_18CEA;
    case RC_ADDR(0x00018cecu): goto L_18CEC;
    case RC_ADDR(0x00018cf0u): goto L_18CF0;
    case RC_ADDR(0x00018cf4u): goto L_18CF4;
    case RC_ADDR(0x00018cfau): goto L_18CFA;
    case RC_ADDR(0x00018cfcu): goto L_18CFC;
    case RC_ADDR(0x00018d00u): goto L_18D00;
    case RC_ADDR(0x00018d02u): goto L_18D02;
    case RC_ADDR(0x00018d04u): goto L_18D04;
    case RC_ADDR(0x00018d08u): goto L_18D08;
    case RC_ADDR(0x00018d0au): goto L_18D0A;
    case RC_ADDR(0x00018d0cu): goto L_18D0C;
    case RC_ADDR(0x00018d10u): goto L_18D10;
    case RC_ADDR(0x00018d14u): goto L_18D14;
    case RC_ADDR(0x00018d16u): goto L_18D16;
    case RC_ADDR(0x00018d18u): goto L_18D18;
    case RC_ADDR(0x00018d1cu): goto L_18D1C;
    case RC_ADDR(0x00018d1eu): goto L_18D1E;
    case RC_ADDR(0x00018d20u): goto L_18D20;
    case RC_ADDR(0x00018d22u): goto L_18D22;
    case RC_ADDR(0x00018d26u): goto L_18D26;
    case RC_ADDR(0x00018d2au): goto L_18D2A;
    case RC_ADDR(0x00018d2eu): goto L_18D2E;
    case RC_ADDR(0x00018d30u): goto L_18D30;
    case RC_ADDR(0x00018d34u): goto L_18D34;
    case RC_ADDR(0x00018d36u): goto L_18D36;
    case RC_ADDR(0x00018d3au): goto L_18D3A;
    case RC_ADDR(0x00018d3cu): goto L_18D3C;
    case RC_ADDR(0x00018d3eu): goto L_18D3E;
    case RC_ADDR(0x00018d40u): goto L_18D40;
    case RC_ADDR(0x00018d44u): goto L_18D44;
    case RC_ADDR(0x00018d48u): goto L_18D48;
    case RC_ADDR(0x00018d4cu): goto L_18D4C;
    case RC_ADDR(0x00018d4eu): goto L_18D4E;
    case RC_ADDR(0x00018d52u): goto L_18D52;
    case RC_ADDR(0x00018d54u): goto L_18D54;
    case RC_ADDR(0x00018d58u): goto L_18D58;
    case RC_ADDR(0x00018d5au): goto L_18D5A;
    case RC_ADDR(0x00018d5cu): goto L_18D5C;
    case RC_ADDR(0x00018d5eu): goto L_18D5E;
    case RC_ADDR(0x00018d62u): goto L_18D62;
    case RC_ADDR(0x00018d68u): goto L_18D68;
    case RC_ADDR(0x00018d6eu): goto L_18D6E;
    case RC_ADDR(0x00018d74u): goto L_18D74;
    case RC_ADDR(0x00018d7au): goto L_18D7A;
    case RC_ADDR(0x00018d7cu): goto L_18D7C;
    case RC_ADDR(0x00018d82u): goto L_18D82;
    case RC_ADDR(0x00018d84u): goto L_18D84;
    case RC_ADDR(0x00018d88u): goto L_18D88;
    case RC_ADDR(0x00018d8cu): goto L_18D8C;
    case RC_ADDR(0x00018d8eu): goto L_18D8E;
    case RC_ADDR(0x00018d92u): goto L_18D92;
    case RC_ADDR(0x00018d94u): goto L_18D94;
    case RC_ADDR(0x00018d96u): goto L_18D96;
    case RC_ADDR(0x00018d9au): goto L_18D9A;
    case RC_ADDR(0x00018da0u): goto L_18DA0;
    case RC_ADDR(0x00018da4u): goto L_18DA4;
    case RC_ADDR(0x00018da6u): goto L_18DA6;
    case RC_ADDR(0x00018daau): goto L_18DAA;
    case RC_ADDR(0x00018daeu): goto L_18DAE;
    case RC_ADDR(0x00018db2u): goto L_18DB2;
    case RC_ADDR(0x00018db4u): goto L_18DB4;
    case RC_ADDR(0x00018db8u): goto L_18DB8;
    case RC_ADDR(0x00018dbau): goto L_18DBA;
    case RC_ADDR(0x00018dbeu): goto L_18DBE;
    case RC_ADDR(0x00018dc4u): goto L_18DC4;
    case RC_ADDR(0x00018dcau): goto L_18DCA;
    case RC_ADDR(0x00018dccu): goto L_18DCC;
    case RC_ADDR(0x00018dceu): goto L_18DCE;
    case RC_ADDR(0x00018dd0u): goto L_18DD0;
    case RC_ADDR(0x00018dd4u): goto L_18DD4;
    case RC_ADDR(0x00018ddau): goto L_18DDA;
    case RC_ADDR(0x00018ddcu): goto L_18DDC;
    case RC_ADDR(0x00018ddeu): goto L_18DDE;
    case RC_ADDR(0x00018de0u): goto L_18DE0;
    case RC_ADDR(0x00018de4u): goto L_18DE4;
    case RC_ADDR(0x00018deau): goto L_18DEA;
    case RC_ADDR(0x00018decu): goto L_18DEC;
    case RC_ADDR(0x00018deeu): goto L_18DEE;
    case RC_ADDR(0x00018df2u): goto L_18DF2;
    case RC_ADDR(0x00018df8u): goto L_18DF8;
    case RC_ADDR(0x00018dfau): goto L_18DFA;
    case RC_ADDR(0x00018dfcu): goto L_18DFC;
    case RC_ADDR(0x00018e02u): goto L_18E02;
    case RC_ADDR(0x00018e04u): goto L_18E04;
    case RC_ADDR(0x00018e08u): goto L_18E08;
    case RC_ADDR(0x00018e0cu): goto L_18E0C;
    case RC_ADDR(0x00018e0eu): goto L_18E0E;
    case RC_ADDR(0x00018e14u): goto L_18E14;
    case RC_ADDR(0x00018e18u): goto L_18E18;
    case RC_ADDR(0x00018e1eu): goto L_18E1E;
    case RC_ADDR(0x00018e20u): goto L_18E20;
    case RC_ADDR(0x00018e24u): goto L_18E24;
    case RC_ADDR(0x00018e28u): goto L_18E28;
    case RC_ADDR(0x00018e2au): goto L_18E2A;
    case RC_ADDR(0x00018e2cu): goto L_18E2C;
    case RC_ADDR(0x00018e32u): goto L_18E32;
    case RC_ADDR(0x00018e36u): goto L_18E36;
    case RC_ADDR(0x00018e38u): goto L_18E38;
    case RC_ADDR(0x00018e3cu): goto L_18E3C;
    case RC_ADDR(0x00018e3eu): goto L_18E3E;
    case RC_ADDR(0x00018e44u): goto L_18E44;
    case RC_ADDR(0x00018e48u): goto L_18E48;
    case RC_ADDR(0x00018e4eu): goto L_18E4E;
    case RC_ADDR(0x00018e50u): goto L_18E50;
    case RC_ADDR(0x00018e54u): goto L_18E54;
    case RC_ADDR(0x00018e56u): goto L_18E56;
    case RC_ADDR(0x00018e5cu): goto L_18E5C;
    case RC_ADDR(0x00018e5eu): goto L_18E5E;
    case RC_ADDR(0x00018e62u): goto L_18E62;
    case RC_ADDR(0x00018e64u): goto L_18E64;
    case RC_ADDR(0x00018e6au): goto L_18E6A;
    case RC_ADDR(0x00018e6cu): goto L_18E6C;
    case RC_ADDR(0x00018e70u): goto L_18E70;
    case RC_ADDR(0x00018e74u): goto L_18E74;
    case RC_ADDR(0x00018e76u): goto L_18E76;
    case RC_ADDR(0x00018e78u): goto L_18E78;
    case RC_ADDR(0x00018e7eu): goto L_18E7E;
    case RC_ADDR(0x00018e82u): goto L_18E82;
    case RC_ADDR(0x00018e84u): goto L_18E84;
    case RC_ADDR(0x00018e88u): goto L_18E88;
    case RC_ADDR(0x00018e8au): goto L_18E8A;
    case RC_ADDR(0x00018e8eu): goto L_18E8E;
    case RC_ADDR(0x00018e94u): goto L_18E94;
    case RC_ADDR(0x00018e96u): goto L_18E96;
    case RC_ADDR(0x00018e9au): goto L_18E9A;
    case RC_ADDR(0x00018e9cu): goto L_18E9C;
    case RC_ADDR(0x00018ea0u): goto L_18EA0;
    case RC_ADDR(0x00018ea2u): goto L_18EA2;
    case RC_ADDR(0x00018ea6u): goto L_18EA6;
    case RC_ADDR(0x00018eacu): goto L_18EAC;
    case RC_ADDR(0x00018ebeu): goto L_18EBE;
    case RC_ADDR(0x00018ec4u): goto L_18EC4;
    case RC_ADDR(0x00018ec6u): goto L_18EC6;
    case RC_ADDR(0x00018ec8u): goto L_18EC8;
    case RC_ADDR(0x00018eccu): goto L_18ECC;
    case RC_ADDR(0x00018ed0u): goto L_18ED0;
    case RC_ADDR(0x00018ed6u): goto L_18ED6;
    case RC_ADDR(0x00018ed8u): goto L_18ED8;
    case RC_ADDR(0x00018edau): goto L_18EDA;
    case RC_ADDR(0x00018edcu): goto L_18EDC;
    case RC_ADDR(0x00018edeu): goto L_18EDE;
    case RC_ADDR(0x00018ee2u): goto L_18EE2;
    case RC_ADDR(0x00018ee6u): goto L_18EE6;
    case RC_ADDR(0x00018eeau): goto L_18EEA;
    case RC_ADDR(0x00018eecu): goto L_18EEC;
    case RC_ADDR(0x00018eeeu): goto L_18EEE;
    case RC_ADDR(0x00018ef0u): goto L_18EF0;
    case RC_ADDR(0x00018ef4u): goto L_18EF4;
    case RC_ADDR(0x00018ef8u): goto L_18EF8;
    case RC_ADDR(0x00018efcu): goto L_18EFC;
    case RC_ADDR(0x00018efeu): goto L_18EFE;
    case RC_ADDR(0x00018f00u): goto L_18F00;
    case RC_ADDR(0x00018f02u): goto L_18F02;
    case RC_ADDR(0x00018f06u): goto L_18F06;
    case RC_ADDR(0x00018f0au): goto L_18F0A;
    case RC_ADDR(0x00018f0eu): goto L_18F0E;
    case RC_ADDR(0x00018f10u): goto L_18F10;
    case RC_ADDR(0x00018f12u): goto L_18F12;
    case RC_ADDR(0x00018f14u): goto L_18F14;
    case RC_ADDR(0x00018f18u): goto L_18F18;
    case RC_ADDR(0x00018f1cu): goto L_18F1C;
    case RC_ADDR(0x00018f20u): goto L_18F20;
    case RC_ADDR(0x00018f22u): goto L_18F22;
    case RC_ADDR(0x00018f26u): goto L_18F26;
    case RC_ADDR(0x00018f28u): goto L_18F28;
    case RC_ADDR(0x00018f2au): goto L_18F2A;
    case RC_ADDR(0x00018f2eu): goto L_18F2E;
    case RC_ADDR(0x00018f30u): goto L_18F30;
    case RC_ADDR(0x00018f32u): goto L_18F32;
    case RC_ADDR(0x00018f36u): goto L_18F36;
    case RC_ADDR(0x00018f3au): goto L_18F3A;
    case RC_ADDR(0x00018f3cu): goto L_18F3C;
    case RC_ADDR(0x00018f3eu): goto L_18F3E;
    case RC_ADDR(0x00018f40u): goto L_18F40;
    case RC_ADDR(0x00018f44u): goto L_18F44;
    case RC_ADDR(0x00018f46u): goto L_18F46;
    case RC_ADDR(0x00018f4au): goto L_18F4A;
    case RC_ADDR(0x00018f4cu): goto L_18F4C;
    case RC_ADDR(0x00018f50u): goto L_18F50;
    case RC_ADDR(0x00018f52u): goto L_18F52;
    case RC_ADDR(0x00018f56u): goto L_18F56;
    case RC_ADDR(0x00018f5au): goto L_18F5A;
    case RC_ADDR(0x00018f5cu): goto L_18F5C;
    case RC_ADDR(0x00018f5eu): goto L_18F5E;
    case RC_ADDR(0x00018f60u): goto L_18F60;
    case RC_ADDR(0x00018f62u): goto L_18F62;
    case RC_ADDR(0x00018f66u): goto L_18F66;
    case RC_ADDR(0x00018f6au): goto L_18F6A;
    case RC_ADDR(0x00018f6cu): goto L_18F6C;
    case RC_ADDR(0x00018f70u): goto L_18F70;
    case RC_ADDR(0x00018f74u): goto L_18F74;
    case RC_ADDR(0x00018f76u): goto L_18F76;
    case RC_ADDR(0x00018f78u): goto L_18F78;
    case RC_ADDR(0x00018f7au): goto L_18F7A;
    case RC_ADDR(0x00018f7cu): goto L_18F7C;
    case RC_ADDR(0x00018f80u): goto L_18F80;
    case RC_ADDR(0x00018f84u): goto L_18F84;
    case RC_ADDR(0x00018f86u): goto L_18F86;
    case RC_ADDR(0x00018f8au): goto L_18F8A;
    case RC_ADDR(0x00018f8eu): goto L_18F8E;
    case RC_ADDR(0x00018f90u): goto L_18F90;
    case RC_ADDR(0x00018f92u): goto L_18F92;
    case RC_ADDR(0x00018f96u): goto L_18F96;
    case RC_ADDR(0x00018f98u): goto L_18F98;
    case RC_ADDR(0x00018f9cu): goto L_18F9C;
    case RC_ADDR(0x00018f9eu): goto L_18F9E;
    case RC_ADDR(0x00018fa0u): goto L_18FA0;
    case RC_ADDR(0x00018fa4u): goto L_18FA4;
    case RC_ADDR(0x00018fa8u): goto L_18FA8;
    case RC_ADDR(0x00018faau): goto L_18FAA;
    case RC_ADDR(0x00018facu): goto L_18FAC;
    case RC_ADDR(0x00018faeu): goto L_18FAE;
    case RC_ADDR(0x00018fb2u): goto L_18FB2;
    case RC_ADDR(0x00018fb6u): goto L_18FB6;
    case RC_ADDR(0x00018fbau): goto L_18FBA;
    case RC_ADDR(0x00018fbeu): goto L_18FBE;
    case RC_ADDR(0x00018fc2u): goto L_18FC2;
    case RC_ADDR(0x00018fc6u): goto L_18FC6;
    case RC_ADDR(0x00018fc8u): goto L_18FC8;
    case RC_ADDR(0x00018fceu): goto L_18FCE;
    case RC_ADDR(0x00018fd2u): goto L_18FD2;
    case RC_ADDR(0x00018fd4u): goto L_18FD4;
    case RC_ADDR(0x00018fdau): goto L_18FDA;
    case RC_ADDR(0x00018fdeu): goto L_18FDE;
    case RC_ADDR(0x00018fe0u): goto L_18FE0;
    case RC_ADDR(0x00018fe6u): goto L_18FE6;
    case RC_ADDR(0x00018feau): goto L_18FEA;
    case RC_ADDR(0x00018fecu): goto L_18FEC;
    case RC_ADDR(0x00018ff2u): goto L_18FF2;
    case RC_ADDR(0x00018ff8u): goto L_18FF8;
    case RC_ADDR(0x00018ffeu): goto L_18FFE;
    case RC_ADDR(0x00019002u): goto L_19002;
    case RC_ADDR(0x00019004u): goto L_19004;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_189AA:
    /* 000189aa   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x000189aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_189AE:
    /* 000189ae   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000189aeu);
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

L_189B2:
    /* 000189b2   4  tst.w (478,A4) */
    c->pc = RC_ADDR(0x000189b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_set_nzvc(c, t0, RC_W);

L_189B6:
    /* 000189b6   2  beq 000189c2 */
    c->pc = RC_ADDR(0x000189b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_189C2;

L_189B8:
    /* 000189b8   6  cmpi.w #1,(478,A4) */
    c->pc = RC_ADDR(0x000189b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_189BE:
    /* 000189be   4  bne 00018b44 */
    c->pc = RC_ADDR(0x000189beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18B44;

L_189C2:
    /* 000189c2   4  move.w (47e,A4),D0 */
    c->pc = RC_ADDR(0x000189c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_189C6:
    /* 000189c6   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x000189c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_189CA:
    /* 000189ca   4  muls.w (ffffb02a,A4),D0 */
    c->pc = RC_ADDR(0x000189cau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_muls(c, 0, t0);

L_189CE:
    /* 000189ce   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000189ceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189D2:
    /* 000189d2   4  move.w (480,A4),D0 */
    c->pc = RC_ADDR(0x000189d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_189D6:
    /* 000189d6   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x000189d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_189DA:
    /* 000189da   4  muls.w (ffffb02c,A4),D0 */
    c->pc = RC_ADDR(0x000189dau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_muls(c, 0, t0);

L_189DE:
    /* 000189de   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000189deu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189E2:
    /* 000189e2   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x000189e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_189E6:
    /* 000189e6   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000189e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_189EA:
    /* 000189ea   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000189eau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189EE:
    /* 000189ee   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x000189eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_189F2:
    /* 000189f2   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000189f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_189F6:
    /* 000189f6   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000189f6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_189FA:
    /* 000189fa   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x000189fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_189FE:
    /* 000189fe   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x000189feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A02:
    /* 00018a02   4  clr.w (1cc2,A4) */
    c->pc = RC_ADDR(0x00018a02u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cc2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18A06:
    /* 00018a06   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018a06u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18A08:
    /* 00018a08   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018a08u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A0A:
    /* 00018a0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018a0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18A0C:
    /* 00018a0c   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00018a0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_18A10:
    /* 00018a10   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00018a10u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A14:
    /* 00018a14   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018a14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A16:
    /* 00018a16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018a16u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18A18:
    /* 00018a18   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00018a18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_18A1C:
    /* 00018a1c   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x00018a1cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A20:
    /* 00018a20   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018a20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A24:
    /* 00018a24   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x00018a24u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18A26:
    /* 00018a26   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018a26u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A28:
    /* 00018a28   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018a28u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018a2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18A2C:
    /* 00018a2c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018a2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18A2E:
    /* 00018a2e   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x00018a2eu);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A32:
    /* 00018a32   2  bge 00018a5a */
    c->pc = RC_ADDR(0x00018a32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18A5A;

L_18A34:
    /* 00018a34   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00018a34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A38:
    /* 00018a38   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x00018a38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18A3A:
    /* 00018a3a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018a3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A3C:
    /* 00018a3c   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018a3cu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018a40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18A40:
    /* 00018a40   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018a40u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18A42:
    /* 00018a42   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x00018a42u);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A46:
    /* 00018a46   2  bge 00018a5a */
    c->pc = RC_ADDR(0x00018a46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18A5A;

L_18A48:
    /* 00018a48   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018a48u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18A4A:
    /* 00018a4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018a4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18A4C:
    /* 00018a4c   4  lea (1cd0,A4),A0 */
    c->pc = RC_ADDR(0x00018a4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cd0u);

L_18A50:
    /* 00018a50   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018a50u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A54:
    /* 00018a54   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x00018a54u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18A56:
    /* 00018a56   4  add.w D1,(1cc2,A4) */
    c->pc = RC_ADDR(0x00018a56u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cc2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18A5A:
    /* 00018a5a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018a5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A5E:
    /* 00018a5e   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x00018a5eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18A60:
    /* 00018a60   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018a60u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A62:
    /* 00018a62   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018a62u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018a66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18A66:
    /* 00018a66   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018a66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18A68:
    /* 00018a68   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x00018a68u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A6C:
    /* 00018a6c   2  bge 00018aba */
    c->pc = RC_ADDR(0x00018a6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18ABA;

L_18A6E:
    /* 00018a6e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00018a6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A72:
    /* 00018a72   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x00018a72u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18A74:
    /* 00018a74   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018a74u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A76:
    /* 00018a76   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018a76u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018a7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18A7A:
    /* 00018a7a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018a7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18A7C:
    /* 00018a7c   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x00018a7cu);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A80:
    /* 00018a80   2  bge 00018aba */
    c->pc = RC_ADDR(0x00018a80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18ABA;

L_18A82:
    /* 00018a82   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018a82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A86:
    /* 00018a86   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x00018a86u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A88:
    /* 00018a88   2  ble 00018a90 */
    c->pc = RC_ADDR(0x00018a88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18A90;

L_18A8A:
    /* 00018a8a   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x00018a8au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A90:
    /* 00018a90   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018a90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A94:
    /* 00018a94   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x00018a94u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18A96:
    /* 00018a96   2  bge 00018a9e */
    c->pc = RC_ADDR(0x00018a96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18A9E;

L_18A98:
    /* 00018a98   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x00018a98u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A9E:
    /* 00018a9e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00018a9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AA2:
    /* 00018aa2   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x00018aa2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18AA4:
    /* 00018aa4   2  ble 00018aac */
    c->pc = RC_ADDR(0x00018aa4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18AAC;

L_18AA6:
    /* 00018aa6   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x00018aa6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AAC:
    /* 00018aac   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00018aacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AB0:
    /* 00018ab0   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x00018ab0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18AB2:
    /* 00018ab2   2  bge 00018aba */
    c->pc = RC_ADDR(0x00018ab2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18ABA;

L_18AB4:
    /* 00018ab4   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x00018ab4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ABA:
    /* 00018aba   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018abau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18ABC:
    /* 00018abc   6  cmp.l #c,D4 */
    c->pc = RC_ADDR(0x00018abcu);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18AC2:
    /* 00018ac2   4  blt 00018a08 */
    c->pc = RC_ADDR(0x00018ac2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18A08; }

L_18AC6:
    /* 00018ac6   4  move.w (47e,A4),D0 */
    c->pc = RC_ADDR(0x00018ac6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ACA:
    /* 00018aca   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x00018acau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18ACE:
    /* 00018ace   4  muls.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00018aceu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_muls(c, 0, t0);

L_18AD2:
    /* 00018ad2   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018ad2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18AD6:
    /* 00018ad6   4  move.w (480,A4),D0 */
    c->pc = RC_ADDR(0x00018ad6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ADA:
    /* 00018ada   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x00018adau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18ADE:
    /* 00018ade   4  muls.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x00018adeu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_muls(c, 0, t0);

L_18AE2:
    /* 00018ae2   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018ae2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18AE6:
    /* 00018ae6   2  moveq #4,D5 */
    c->pc = RC_ADDR(0x00018ae6u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000004u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_18AE8:
    /* 00018ae8   6  cmpi.w #1,(478,A4) */
    c->pc = RC_ADDR(0x00018ae8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_18AEE:
    /* 00018aee   2  bne 00018af2 */
    c->pc = RC_ADDR(0x00018aeeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18AF2;

L_18AF0:
    /* 00018af0   2  moveq #5,D5 */
    c->pc = RC_ADDR(0x00018af0u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000005u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_18AF2:
    /* 00018af2   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018af2u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18AF4:
    /* 00018af4   2  move.w D5,-(A7) */
    c->pc = RC_ADDR(0x00018af4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AF6:
    /* 00018af6   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x00018af6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18AFA:
    /* 00018afa   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00018afau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18AFE:
    /* 00018afe   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018afeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B00:
    /* 00018b00   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x00018b00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B04:
    /* 00018b04   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018b04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18B08:
    /* 00018b08   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018b08u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B0A:
    /* 00018b0a   4  jsr (0001a6fa) */
    c->pc = RC_ADDR(0x00018b0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018b0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a6fau);
    return;

L_18B0E:
    /* 00018b0e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00018b0eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_18B10:
    /* 00018b10   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00018b10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B14:
    /* 00018b14   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018b14u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B18:
    /* 00018b18   4  move.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x00018b18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B1C:
    /* 00018b1c   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018b1cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B20:
    /* 00018b20   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00018b20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B24:
    /* 00018b24   4  or.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x00018b24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_18B28:
    /* 00018b28   2  beq 00018b34 */
    c->pc = RC_ADDR(0x00018b28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18B34;

L_18B2A:
    /* 00018b2a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018b2au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18B2C:
    /* 00018b2c   6  cmp.l #6,D4 */
    c->pc = RC_ADDR(0x00018b2cu);
    rc_step(c, m, 14);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18B32:
    /* 00018b32   2  blt 00018af4 */
    c->pc = RC_ADDR(0x00018b32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18AF4; }

L_18B34:
    /* 00018b34   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018b34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B38:
    /* 00018b38   4  add.w D0,(47a,A4) */
    c->pc = RC_ADDR(0x00018b38u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x47au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B3C:
    /* 00018b3c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00018b3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B40:
    /* 00018b40   4  add.w D0,(47c,A4) */
    c->pc = RC_ADDR(0x00018b40u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x47cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B44:
    /* 00018b44   4  move.w (478,A4),D0 */
    c->pc = RC_ADDR(0x00018b44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B48:
    /* 00018b48   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018b48u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18B4A:
    /* 00018b4a   4  bra 00018ebe */
    c->pc = RC_ADDR(0x00018b4au);
    rc_step(c, m, 10);
    goto L_18EBE;

L_18B4E:
    /* 00018b4e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018b4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B52:
    /* 00018b52   4  or.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00018b52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_18B56:
    /* 00018b56   2  beq 00018baa */
    c->pc = RC_ADDR(0x00018b56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18BAA;

L_18B58:
    /* 00018b58   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00018b58u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_18B5A:
    /* 00018b5a   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018b5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_18B5E:
    /* 00018b5e   2  ble 00018b62 */
    c->pc = RC_ADDR(0x00018b5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18B62;

L_18B60:
    /* 00018b60   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x00018b60u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_18B62:
    /* 00018b62   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018b62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_18B66:
    /* 00018b66   2  bge 00018b6a */
    c->pc = RC_ADDR(0x00018b66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18B6A;

L_18B68:
    /* 00018b68   2  moveq #2,D5 */
    c->pc = RC_ADDR(0x00018b68u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000002u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_18B6A:
    /* 00018b6a   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00018b6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_18B6E:
    /* 00018b6e   2  ble 00018b74 */
    c->pc = RC_ADDR(0x00018b6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18B74;

L_18B70:
    /* 00018b70   4  bset #2,D5 */
    c->pc = RC_ADDR(0x00018b70u);
    rc_step(c, m, 12);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 5, RC_L, t2);

L_18B74:
    /* 00018b74   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00018b74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_18B78:
    /* 00018b78   2  bge 00018b7e */
    c->pc = RC_ADDR(0x00018b78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18B7E;

L_18B7A:
    /* 00018b7a   4  bset #3,D5 */
    c->pc = RC_ADDR(0x00018b7au);
    rc_step(c, m, 12);
    t4 = 0x00000003u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 5, RC_L, t2);

L_18B7E:
    /* 00018b7e   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00018b7eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B80:
    /* 00018b80   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018b80u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18B82:
    /* 00018b82   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018b82u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18B84:
    /* 00018b84   4  lea (ffffc6a6,A4),A0 */
    c->pc = RC_ADDR(0x00018b84u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x395au);

L_18B88:
    /* 00018b88   6  move.w (0,A0,D0.w),(48a,A4) */
    c->pc = RC_ADDR(0x00018b88u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x48au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B8E:
    /* 00018b8e   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x00018b8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B92:
    /* 00018b92   4  add.w D0,(482,A4) */
    c->pc = RC_ADDR(0x00018b92u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18B96:
    /* 00018b96   4  tst.w (482,A4) */
    c->pc = RC_ADDR(0x00018b96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_set_nzvc(c, t0, RC_W);

L_18B9A:
    /* 00018b9a   2  beq 00018ba4 */
    c->pc = RC_ADDR(0x00018b9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18BA4;

L_18B9C:
    /* 00018b9c   6  cmpi.w #4,(482,A4) */
    c->pc = RC_ADDR(0x00018b9cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_18BA2:
    /* 00018ba2   2  bne 00018ba8 */
    c->pc = RC_ADDR(0x00018ba2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18BA8;

L_18BA4:
    /* 00018ba4   4  neg.w (486,A4) */
    c->pc = RC_ADDR(0x00018ba4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x486u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18BA8:
    /* 00018ba8   2  bra 00018bb0 */
    c->pc = RC_ADDR(0x00018ba8u);
    rc_step(c, m, 10);
    goto L_18BB0;

L_18BAA:
    /* 00018baa   6  move.w #2,(482,A4) */
    c->pc = RC_ADDR(0x00018baau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x482u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BB0:
    /* 00018bb0   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00018bb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_18BB4:
    /* 00018bb4   4  beq 00018d1c */
    c->pc = RC_ADDR(0x00018bb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18D1C;

L_18BB8:
    /* 00018bb8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018bb8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18BBA:
    /* 00018bba   4  bra 00018d04 */
    c->pc = RC_ADDR(0x00018bbau);
    rc_step(c, m, 10);
    goto L_18D04;

L_18BBE:
    /* 00018bbe   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018bbeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18BC0:
    /* 00018bc0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018bc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18BC2:
    /* 00018bc2   4  lea (1c2e,A4),A0 */
    c->pc = RC_ADDR(0x00018bc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c2eu);

L_18BC6:
    /* 00018bc6   6  move.w (0,A0,D0.w),(1cba,A4) */
    c->pc = RC_ADDR(0x00018bc6u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BCC:
    /* 00018bcc   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018bccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BD0:
    /* 00018bd0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018bd0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18BD2:
    /* 00018bd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018bd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18BD4:
    /* 00018bd4   4  lea (ffffc662,A4),A0 */
    c->pc = RC_ADDR(0x00018bd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x399eu);

L_18BD8:
    /* 00018bd8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00018bd8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18BDA:
    /* 00018bda   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00018bdau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_18BDC:
    /* 00018bdc   4  lea (1c5a,A4),A1 */
    c->pc = RC_ADDR(0x00018bdcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c5au);

L_18BE0:
    /* 00018be0   6  move.w (0,A1,D1.w),(1cb6,A4) */
    c->pc = RC_ADDR(0x00018be0u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BE6:
    /* 00018be6   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00018be6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BEA:
    /* 00018bea   4  add.w (0,A1,D1.w),D6 */
    c->pc = RC_ADDR(0x00018beau);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_18BEE:
    /* 00018bee   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018beeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BF2:
    /* 00018bf2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018bf2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18BF4:
    /* 00018bf4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018bf4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18BF6:
    /* 00018bf6   4  lea (ffffc670,A4),A0 */
    c->pc = RC_ADDR(0x00018bf6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3990u);

L_18BFA:
    /* 00018bfa   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00018bfau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18BFC:
    /* 00018bfc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00018bfcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_18BFE:
    /* 00018bfe   4  lea (1c86,A4),A1 */
    c->pc = RC_ADDR(0x00018bfeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c86u);

L_18C02:
    /* 00018c02   6  move.w (0,A1,D1.w),(1cb8,A4) */
    c->pc = RC_ADDR(0x00018c02u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C08:
    /* 00018c08   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x00018c08u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C0C:
    /* 00018c0c   4  add.w (0,A1,D1.w),D7 */
    c->pc = RC_ADDR(0x00018c0cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_18C10:
    /* 00018c10   4  move.w (1cb6,A4),D0 */
    c->pc = RC_ADDR(0x00018c10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C14:
    /* 00018c14   2  subq.w #4,D0 */
    c->pc = RC_ADDR(0x00018c14u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C16:
    /* 00018c16   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018c16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C1A:
    /* 00018c1a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00018c1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18C1C:
    /* 00018c1c   4  ble 00018d02 */
    c->pc = RC_ADDR(0x00018c1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18D02;

L_18C20:
    /* 00018c20   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00018c20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C22:
    /* 00018c22   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00018c22u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C24:
    /* 00018c24   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018c24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C28:
    /* 00018c28   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00018c28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18C2A:
    /* 00018c2a   4  bge 00018d02 */
    c->pc = RC_ADDR(0x00018c2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18D02;

L_18C2E:
    /* 00018c2e   4  move.w (1cb8,A4),D0 */
    c->pc = RC_ADDR(0x00018c2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C32:
    /* 00018c32   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x00018c32u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C34:
    /* 00018c34   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018c34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C38:
    /* 00018c38   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00018c38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18C3A:
    /* 00018c3a   4  ble 00018d02 */
    c->pc = RC_ADDR(0x00018c3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18D02;

L_18C3E:
    /* 00018c3e   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00018c3eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C40:
    /* 00018c40   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x00018c40u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C42:
    /* 00018c42   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018c42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C46:
    /* 00018c46   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00018c46u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18C48:
    /* 00018c48   4  bge 00018d02 */
    c->pc = RC_ADDR(0x00018c48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18D02;

L_18C4C:
    /* 00018c4c   4  move.w (47e,A4),D0 */
    c->pc = RC_ADDR(0x00018c4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C50:
    /* 00018c50   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x00018c50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C54:
    /* 00018c54   4  muls.w (ffffb02a,A4),D0 */
    c->pc = RC_ADDR(0x00018c54u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_muls(c, 0, t0);

L_18C58:
    /* 00018c58   4  sub.w D0,(47a,A4) */
    c->pc = RC_ADDR(0x00018c58u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x47au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18C5C:
    /* 00018c5c   4  move.w (480,A4),D0 */
    c->pc = RC_ADDR(0x00018c5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C60:
    /* 00018c60   4  sub.w (1cbe,A4),D0 */
    c->pc = RC_ADDR(0x00018c60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C64:
    /* 00018c64   4  muls.w (ffffb02c,A4),D0 */
    c->pc = RC_ADDR(0x00018c64u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_muls(c, 0, t0);

L_18C68:
    /* 00018c68   4  sub.w D0,(47c,A4) */
    c->pc = RC_ADDR(0x00018c68u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x47cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_18C6C:
    /* 00018c6c   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018c6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C70:
    /* 00018c70   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018c70u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18C72:
    /* 00018c72   2  bra 00018ce2 */
    c->pc = RC_ADDR(0x00018c72u);
    rc_step(c, m, 10);
    goto L_18CE2;

L_18C74:
    /* 00018c74   4  jsr (0001b1fc) */
    c->pc = RC_ADDR(0x00018c74u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018c78u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b1fcu);
    return;

L_18C78:
    /* 00018c78   2  bra 00018cf4 */
    c->pc = RC_ADDR(0x00018c78u);
    rc_step(c, m, 10);
    goto L_18CF4;

L_18C7A:
    /* 00018c7a   4  jsr (0001b220) */
    c->pc = RC_ADDR(0x00018c7au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018c7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b220u);
    return;

L_18C7E:
    /* 00018c7e   2  bra 00018cf4 */
    c->pc = RC_ADDR(0x00018c7eu);
    rc_step(c, m, 10);
    goto L_18CF4;

L_18C80:
    /* 00018c80   6  move.w #3,(478,A4) */
    c->pc = RC_ADDR(0x00018c80u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C86:
    /* 00018c86   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018c86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C8A:
    /* 00018c8a   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x00018c8au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_18C8C:
    /* 00018c8c   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x00018c8cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C8E:
    /* 00018c8e   4  move.w D0,(1cbc,A4) */
    c->pc = RC_ADDR(0x00018c8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C92:
    /* 00018c92   6  move.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018c92u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x48cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C98:
    /* 00018c98   2  bra 00018cf4 */
    c->pc = RC_ADDR(0x00018c98u);
    rc_step(c, m, 10);
    goto L_18CF4;

L_18C9A:
    /* 00018c9a   6  move.w #5,(478,A4) */
    c->pc = RC_ADDR(0x00018c9au);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CA0:
    /* 00018ca0   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018ca0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CA4:
    /* 00018ca4   2  subq.w #4,D0 */
    c->pc = RC_ADDR(0x00018ca4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18CA6:
    /* 00018ca6   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x00018ca6u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_18CAA:
    /* 00018caa   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x00018caau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18CAC:
    /* 00018cac   4  move.w D0,(1cbc,A4) */
    c->pc = RC_ADDR(0x00018cacu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CB0:
    /* 00018cb0   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x00018cb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CB4:
    /* 00018cb4   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x00018cb4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18CB6:
    /* 00018cb6   4  move.w D0,(1cb6,A4) */
    c->pc = RC_ADDR(0x00018cb6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CBA:
    /* 00018cba   2  bra 00018cf4 */
    c->pc = RC_ADDR(0x00018cbau);
    rc_step(c, m, 10);
    goto L_18CF4;

L_18CBC:
    /* 00018cbc   6  move.w #5,(478,A4) */
    c->pc = RC_ADDR(0x00018cbcu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CC2:
    /* 00018cc2   6  move.w #d,(1cbc,A4) */
    c->pc = RC_ADDR(0x00018cc2u);
    rc_step(c, m, 16);
    t0 = 0x0000000du;
    rc_wr16(c, m, (c->a[4] + 0x1cbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CC8:
    /* 00018cc8   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x00018cc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CCC:
    /* 00018ccc   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x00018cccu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18CCE:
    /* 00018cce   4  move.w D0,(1cb8,A4) */
    c->pc = RC_ADDR(0x00018cceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CD2:
    /* 00018cd2   2  bra 00018cf4 */
    c->pc = RC_ADDR(0x00018cd2u);
    rc_step(c, m, 10);
    goto L_18CF4;

L_18CE2:
    /* 00018ce2   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x00018ce2u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18CE8:
    /* 00018ce8   2  bcc 00018cf4 */
    c->pc = RC_ADDR(0x00018ce8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_18CF4;

L_18CEA:
    /* 00018cea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018ceau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18CEC:
    /* 00018cec   4  move.w (00018cd4),D0 */
    c->pc = RC_ADDR(0x00018cecu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00018cd4u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CF0:
    /* 00018cf0   4  jmp (00018cf2) */
    c->pc = RC_ADDR(0x00018cf0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00018cf2u) + t4);
    c->pc = t3;
    return;

L_18CF4:
    /* 00018cf4   6  cmpi.w #2,(1cba,A4) */
    c->pc = RC_ADDR(0x00018cf4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_18CFA:
    /* 00018cfa   2  blt 00018d00 */
    c->pc = RC_ADDR(0x00018cfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_18D00;

L_18CFC:
    /* 00018cfc   4  clr.w (482,A4) */
    c->pc = RC_ADDR(0x00018cfcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x482u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D00:
    /* 00018d00   2  bra 00018d1c */
    c->pc = RC_ADDR(0x00018d00u);
    rc_step(c, m, 10);
    goto L_18D1C;

L_18D02:
    /* 00018d02   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018d02u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18D04:
    /* 00018d04   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x00018d04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D08:
    /* 00018d08   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018d08u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18D0A:
    /* 00018d0a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018d0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18D0C:
    /* 00018d0c   4  lea (ffffc65c,A4),A0 */
    c->pc = RC_ADDR(0x00018d0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39a4u);

L_18D10:
    /* 00018d10   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018d10u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D14:
    /* 00018d14   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018d14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18D16:
    /* 00018d16   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x00018d16u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18D18:
    /* 00018d18   4  blt 00018bbe */
    c->pc = RC_ADDR(0x00018d18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18BBE; }

L_18D1C:
    /* 00018d1c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018d1cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18D1E:
    /* 00018d1e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018d1eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18D20:
    /* 00018d20   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018d20u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18D22:
    /* 00018d22   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x00018d22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_18D26:
    /* 00018d26   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018d26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D2A:
    /* 00018d2a   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018d2au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18D2E:
    /* 00018d2e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00018d2eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D30:
    /* 00018d30   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018d30u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018d34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18D34:
    /* 00018d34   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018d34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18D36:
    /* 00018d36   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x00018d36u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18D3A:
    /* 00018d3a   2  bgt 00018d7a */
    c->pc = RC_ADDR(0x00018d3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_18D7A;

L_18D3C:
    /* 00018d3c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018d3cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18D3E:
    /* 00018d3e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018d3eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18D40:
    /* 00018d40   4  lea (1cc8,A4),A0 */
    c->pc = RC_ADDR(0x00018d40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc8u);

L_18D44:
    /* 00018d44   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018d44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D48:
    /* 00018d48   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018d48u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18D4C:
    /* 00018d4c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00018d4cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D4E:
    /* 00018d4e   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00018d4eu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00018d52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_18D52:
    /* 00018d52   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018d52u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18D54:
    /* 00018d54   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x00018d54u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18D58:
    /* 00018d58   2  bge 00018d7a */
    c->pc = RC_ADDR(0x00018d58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18D7A;

L_18D5A:
    /* 00018d5a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018d5au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18D5C:
    /* 00018d5c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018d5cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18D5E:
    /* 00018d5e   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x00018d5eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_18D62:
    /* 00018d62   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018d62u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D68:
    /* 00018d68   6  move.w #1,(478,A4) */
    c->pc = RC_ADDR(0x00018d68u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D6E:
    /* 00018d6e   6  move.w #4,(47e,A4) */
    c->pc = RC_ADDR(0x00018d6eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x47eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D74:
    /* 00018d74   6  move.w #3,(480,A4) */
    c->pc = RC_ADDR(0x00018d74u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x480u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D7A:
    /* 00018d7a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018d7au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18D7C:
    /* 00018d7c   6  cmp.l #1,D4 */
    c->pc = RC_ADDR(0x00018d7cu);
    rc_step(c, m, 14);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18D82:
    /* 00018d82   2  blt 00018d1e */
    c->pc = RC_ADDR(0x00018d82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18D1E; }

L_18D84:
    /* 00018d84   4  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018d84u);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18D88:
    /* 00018d88   4  tst.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x00018d88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_18D8C:
    /* 00018d8c   2  beq 00018da0 */
    c->pc = RC_ADDR(0x00018d8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18DA0;

L_18D8E:
    /* 00018d8e   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00018d8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D92:
    /* 00018d92   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018d92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18D94:
    /* 00018d94   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018d94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18D96:
    /* 00018d96   4  lea (ffffc6a6,A4),A0 */
    c->pc = RC_ADDR(0x00018d96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x395au);

L_18D9A:
    /* 00018d9a   6  move.w (0,A0,D0.w),(48a,A4) */
    c->pc = RC_ADDR(0x00018d9au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x48au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DA0:
    /* 00018da0   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00018da0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_18DA4:
    /* 00018da4   2  beq 00018e04 */
    c->pc = RC_ADDR(0x00018da4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E04;

L_18DA6:
    /* 00018da6   4  move.w (47c,A4),-(A7) */
    c->pc = RC_ADDR(0x00018da6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DAA:
    /* 00018daa   4  move.w (47a,A4),-(A7) */
    c->pc = RC_ADDR(0x00018daau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DAE:
    /* 00018dae   4  jsr (0001a59a) */
    c->pc = RC_ADDR(0x00018daeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018db2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a59au);
    return;

L_18DB2:
    /* 00018db2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018db2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18DB4:
    /* 00018db4   4  tst.w (70c,A4) */
    c->pc = RC_ADDR(0x00018db4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_set_nzvc(c, t0, RC_W);

L_18DB8:
    /* 00018db8   2  beq 00018e04 */
    c->pc = RC_ADDR(0x00018db8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E04;

L_18DBA:
    /* 00018dba   4  clr.w (478,A4) */
    c->pc = RC_ADDR(0x00018dbau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x478u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18DBE:
    /* 00018dbe   6  move.w #3,(47e,A4) */
    c->pc = RC_ADDR(0x00018dbeu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x47eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DC4:
    /* 00018dc4   6  move.w #2,(480,A4) */
    c->pc = RC_ADDR(0x00018dc4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x480u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DCA:
    /* 00018dca   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018dcau);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18DCC:
    /* 00018dcc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018dccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18DCE:
    /* 00018dce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018dceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18DD0:
    /* 00018dd0   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x00018dd0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_18DD4:
    /* 00018dd4   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018dd4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_18DDA:
    /* 00018dda   2  bne 00018dfa */
    c->pc = RC_ADDR(0x00018ddau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18DFA;

L_18DDC:
    /* 00018ddc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018ddcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18DDE:
    /* 00018dde   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018ddeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18DE0:
    /* 00018de0   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x00018de0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_18DE4:
    /* 00018de4   6  move.w (70c,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018de4u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DEA:
    /* 00018dea   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018deau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18DEC:
    /* 00018dec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018decu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18DEE:
    /* 00018dee   4  lea (1cc8,A4),A0 */
    c->pc = RC_ADDR(0x00018deeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc8u);

L_18DF2:
    /* 00018df2   6  move.w (70e,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018df2u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DF8:
    /* 00018df8   2  bra 00018e04 */
    c->pc = RC_ADDR(0x00018df8u);
    rc_step(c, m, 10);
    goto L_18E04;

L_18DFA:
    /* 00018dfa   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018dfau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18DFC:
    /* 00018dfc   6  cmp.l #1,D4 */
    c->pc = RC_ADDR(0x00018dfcu);
    rc_step(c, m, 14);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18E02:
    /* 00018e02   2  blt 00018dcc */
    c->pc = RC_ADDR(0x00018e02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18DCC; }

L_18E04:
    /* 00018e04   4  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e04u);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E08:
    /* 00018e08   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00018e08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_18E0C:
    /* 00018e0c   2  beq 00018e14 */
    c->pc = RC_ADDR(0x00018e0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E14;

L_18E0E:
    /* 00018e0e   6  move.w #4,(478,A4) */
    c->pc = RC_ADDR(0x00018e0eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E14:
    /* 00018e14   4  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e14u);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E18:
    /* 00018e18   6  cmpi.w #3,(482,A4) */
    c->pc = RC_ADDR(0x00018e18u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_18E1E:
    /* 00018e1e   2  bge 00018e38 */
    c->pc = RC_ADDR(0x00018e1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18E38;

L_18E20:
    /* 00018e20   4  move.w (48c,A4),D0 */
    c->pc = RC_ADDR(0x00018e20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E24:
    /* 00018e24   4  subq.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018e24u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x48cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18E28:
    /* 00018e28   2  tst.w D0 */
    c->pc = RC_ADDR(0x00018e28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_18E2A:
    /* 00018e2a   2  bne 00018e36 */
    c->pc = RC_ADDR(0x00018e2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18E36;

L_18E2C:
    /* 00018e2c   6  move.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018e2cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x48cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E32:
    /* 00018e32   4  addq.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018e32u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18E36:
    /* 00018e36   2  bra 00018e44 */
    c->pc = RC_ADDR(0x00018e36u);
    rc_step(c, m, 10);
    goto L_18E44;

L_18E38:
    /* 00018e38   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00018e38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_18E3C:
    /* 00018e3c   2  beq 00018e44 */
    c->pc = RC_ADDR(0x00018e3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E44;

L_18E3E:
    /* 00018e3e   6  move.w #4,(478,A4) */
    c->pc = RC_ADDR(0x00018e3eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E44:
    /* 00018e44   4  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e44u);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E48:
    /* 00018e48   6  cmpi.w #4,(482,A4) */
    c->pc = RC_ADDR(0x00018e48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_18E4E:
    /* 00018e4e   2  bge 00018e56 */
    c->pc = RC_ADDR(0x00018e4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18E56;

L_18E50:
    /* 00018e50   4  addq.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018e50u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18E54:
    /* 00018e54   2  bra 00018e5c */
    c->pc = RC_ADDR(0x00018e54u);
    rc_step(c, m, 10);
    goto L_18E5C;

L_18E56:
    /* 00018e56   6  move.w #6,(478,A4) */
    c->pc = RC_ADDR(0x00018e56u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E5C:
    /* 00018e5c   2  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e5cu);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E5E:
    /* 00018e5e   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x00018e5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_18E62:
    /* 00018e62   2  beq 00018e6a */
    c->pc = RC_ADDR(0x00018e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E6A;

L_18E64:
    /* 00018e64   6  move.w #7,(478,A4) */
    c->pc = RC_ADDR(0x00018e64u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E6A:
    /* 00018e6a   2  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e6au);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E6C:
    /* 00018e6c   4  move.w (48c,A4),D0 */
    c->pc = RC_ADDR(0x00018e6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E70:
    /* 00018e70   4  subq.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018e70u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x48cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18E74:
    /* 00018e74   2  tst.w D0 */
    c->pc = RC_ADDR(0x00018e74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_18E76:
    /* 00018e76   2  bne 00018e94 */
    c->pc = RC_ADDR(0x00018e76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18E94;

L_18E78:
    /* 00018e78   6  move.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018e78u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x48cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E7E:
    /* 00018e7e   4  tst.w (482,A4) */
    c->pc = RC_ADDR(0x00018e7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_set_nzvc(c, t0, RC_W);

L_18E82:
    /* 00018e82   2  beq 00018e8a */
    c->pc = RC_ADDR(0x00018e82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18E8A;

L_18E84:
    /* 00018e84   4  subq.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018e84u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18E88:
    /* 00018e88   2  bra 00018e94 */
    c->pc = RC_ADDR(0x00018e88u);
    rc_step(c, m, 10);
    goto L_18E94;

L_18E8A:
    /* 00018e8a   4  clr.w (478,A4) */
    c->pc = RC_ADDR(0x00018e8au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x478u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18E8E:
    /* 00018e8e   6  move.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018e8eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x482u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18E94:
    /* 00018e94   2  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018e94u);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18E96:
    /* 00018e96   4  tst.w (482,A4) */
    c->pc = RC_ADDR(0x00018e96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x482u));
    rc_set_nzvc(c, t0, RC_W);

L_18E9A:
    /* 00018e9a   2  beq 00018ea2 */
    c->pc = RC_ADDR(0x00018e9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18EA2;

L_18E9C:
    /* 00018e9c   4  subq.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018e9cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x482u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18EA0:
    /* 00018ea0   2  bra 00018eac */
    c->pc = RC_ADDR(0x00018ea0u);
    rc_step(c, m, 10);
    goto L_18EAC;

L_18EA2:
    /* 00018ea2   4  clr.w (478,A4) */
    c->pc = RC_ADDR(0x00018ea2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x478u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18EA6:
    /* 00018ea6   6  move.w #1,(482,A4) */
    c->pc = RC_ADDR(0x00018ea6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x482u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18EAC:
    /* 00018eac   2  bra 00018ed0 */
    c->pc = RC_ADDR(0x00018eacu);
    rc_step(c, m, 10);
    goto L_18ED0;

L_18EBE:
    /* 00018ebe   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x00018ebeu);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18EC4:
    /* 00018ec4   2  bcc 00018ed0 */
    c->pc = RC_ADDR(0x00018ec4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_18ED0;

L_18EC6:
    /* 00018ec6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018ec6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18EC8:
    /* 00018ec8   4  move.w (00018eae),D0 */
    c->pc = RC_ADDR(0x00018ec8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00018eaeu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ECC:
    /* 00018ecc   4  jmp (00018ece) */
    c->pc = RC_ADDR(0x00018eccu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00018eceu) + t4);
    c->pc = t3;
    return;

L_18ED0:
    /* 00018ed0   6  move.w #ffff,(1cb4,A4) */
    c->pc = RC_ADDR(0x00018ed0u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18ED6:
    /* 00018ed6   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018ed6u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18ED8:
    /* 00018ed8   2  bra 00018f2a */
    c->pc = RC_ADDR(0x00018ed8u);
    rc_step(c, m, 10);
    goto L_18F2A;

L_18EDA:
    /* 00018eda   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018edau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18EDC:
    /* 00018edc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018edcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18EDE:
    /* 00018ede   4  lea (1446,A4),A0 */
    c->pc = RC_ADDR(0x00018edeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1446u);

L_18EE2:
    /* 00018ee2   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018ee2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18EE6:
    /* 00018ee6   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018ee6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18EEA:
    /* 00018eea   2  blt 00018f28 */
    c->pc = RC_ADDR(0x00018eeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_18F28;

L_18EEC:
    /* 00018eec   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018eecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18EEE:
    /* 00018eee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018eeeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18EF0:
    /* 00018ef0   4  lea (14a2,A4),A0 */
    c->pc = RC_ADDR(0x00018ef0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14a2u);

L_18EF4:
    /* 00018ef4   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018ef4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18EF8:
    /* 00018ef8   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018ef8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18EFC:
    /* 00018efc   2  bge 00018f28 */
    c->pc = RC_ADDR(0x00018efcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18F28;

L_18EFE:
    /* 00018efe   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018efeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18F00:
    /* 00018f00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18F02:
    /* 00018f02   4  lea (1474,A4),A0 */
    c->pc = RC_ADDR(0x00018f02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1474u);

L_18F06:
    /* 00018f06   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018f06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F0A:
    /* 00018f0a   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018f0au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18F0E:
    /* 00018f0e   2  blt 00018f28 */
    c->pc = RC_ADDR(0x00018f0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_18F28;

L_18F10:
    /* 00018f10   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018f10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18F12:
    /* 00018f12   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f12u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18F14:
    /* 00018f14   4  lea (14d0,A4),A0 */
    c->pc = RC_ADDR(0x00018f14u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14d0u);

L_18F18:
    /* 00018f18   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018f18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F1C:
    /* 00018f1c   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018f1cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18F20:
    /* 00018f20   2  bge 00018f28 */
    c->pc = RC_ADDR(0x00018f20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18F28;

L_18F22:
    /* 00018f22   4  move.w D4,(1cb4,A4) */
    c->pc = RC_ADDR(0x00018f22u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F26:
    /* 00018f26   2  bra 00018f40 */
    c->pc = RC_ADDR(0x00018f26u);
    rc_step(c, m, 10);
    goto L_18F40;

L_18F28:
    /* 00018f28   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018f28u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18F2A:
    /* 00018f2a   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x00018f2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F2E:
    /* 00018f2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018f2eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18F30:
    /* 00018f30   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f30u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18F32:
    /* 00018f32   4  lea (ffffc650,A4),A0 */
    c->pc = RC_ADDR(0x00018f32u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39b0u);

L_18F36:
    /* 00018f36   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018f36u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F3A:
    /* 00018f3a   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018f3au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18F3C:
    /* 00018f3c   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x00018f3cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18F3E:
    /* 00018f3e   2  blt 00018eda */
    c->pc = RC_ADDR(0x00018f3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18EDA; }

L_18F40:
    /* 00018f40   4  tst.w (1f48,A4) */
    c->pc = RC_ADDR(0x00018f40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f48u));
    rc_set_nzvc(c, t0, RC_W);

L_18F44:
    /* 00018f44   2  bne 00018f5a */
    c->pc = RC_ADDR(0x00018f44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18F5A;

L_18F46:
    /* 00018f46   4  tst.w (1cb4,A4) */
    c->pc = RC_ADDR(0x00018f46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_set_nzvc(c, t0, RC_W);

L_18F4A:
    /* 00018f4a   2  bge 00018f5a */
    c->pc = RC_ADDR(0x00018f4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18F5A;

L_18F4C:
    /* 00018f4c   4  tst.w (ffffc6bc,A4) */
    c->pc = RC_ADDR(0x00018f4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3944u));
    rc_set_nzvc(c, t0, RC_W);

L_18F50:
    /* 00018f50   2  bne 00018f5a */
    c->pc = RC_ADDR(0x00018f50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18F5A;

L_18F52:
    /* 00018f52   4  addq.w #1,(1f48,A4) */
    c->pc = RC_ADDR(0x00018f52u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1f48u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18F56:
    /* 00018f56   4  jsr (0001b60a) */
    c->pc = RC_ADDR(0x00018f56u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018f5au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b60au);
    return;

L_18F5A:
    /* 00018f5a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00018f5au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_18F5C:
    /* 00018f5c   2  bra 00018f98 */
    c->pc = RC_ADDR(0x00018f5cu);
    rc_step(c, m, 10);
    goto L_18F98;

L_18F5E:
    /* 00018f5e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018f5eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18F60:
    /* 00018f60   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f60u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18F62:
    /* 00018f62   4  lea (13ce,A4),A0 */
    c->pc = RC_ADDR(0x00018f62u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13ceu);

L_18F66:
    /* 00018f66   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x00018f66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F6A:
    /* 00018f6a   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018f6au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18F6C:
    /* 00018f6c   4  divs.w #30,D1 */
    c->pc = RC_ADDR(0x00018f6cu);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 1, t0);

L_18F70:
    /* 00018f70   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00018f70u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F74:
    /* 00018f74   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00018f74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18F76:
    /* 00018f76   2  bne 00018f96 */
    c->pc = RC_ADDR(0x00018f76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18F96;

L_18F78:
    /* 00018f78   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00018f78u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_18F7A:
    /* 00018f7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18F7C:
    /* 00018f7c   4  lea (13e6,A4),A0 */
    c->pc = RC_ADDR(0x00018f7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13e6u);

L_18F80:
    /* 00018f80   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x00018f80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F84:
    /* 00018f84   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018f84u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18F86:
    /* 00018f86   4  divs.w #28,D1 */
    c->pc = RC_ADDR(0x00018f86u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 1, t0);

L_18F8A:
    /* 00018f8a   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00018f8au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F8E:
    /* 00018f8e   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00018f8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18F90:
    /* 00018f90   2  bne 00018f96 */
    c->pc = RC_ADDR(0x00018f90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18F96;

L_18F92:
    /* 00018f92   4  move.w D4,(1cb2,A4) */
    c->pc = RC_ADDR(0x00018f92u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F96:
    /* 00018f96   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00018f96u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_18F98:
    /* 00018f98   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x00018f98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18F9C:
    /* 00018f9c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018f9cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18F9E:
    /* 00018f9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018f9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18FA0:
    /* 00018fa0   4  lea (ffffc64a,A4),A0 */
    c->pc = RC_ADDR(0x00018fa0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39b6u);

L_18FA4:
    /* 00018fa4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018fa4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FA8:
    /* 00018fa8   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018fa8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18FAA:
    /* 00018faa   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x00018faau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_18FAC:
    /* 00018fac   2  blt 00018f5e */
    c->pc = RC_ADDR(0x00018facu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18F5E; }

L_18FAE:
    /* 00018fae   4  move.w (47a,A4),D6 */
    c->pc = RC_ADDR(0x00018faeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FB2:
    /* 00018fb2   4  sub.w (470,A4),D6 */
    c->pc = RC_ADDR(0x00018fb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_18FB6:
    /* 00018fb6   4  move.w (47c,A4),D7 */
    c->pc = RC_ADDR(0x00018fb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FBA:
    /* 00018fba   4  sub.w (472,A4),D7 */
    c->pc = RC_ADDR(0x00018fbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_18FBE:
    /* 00018fbe   4  clr.w (fffffd9c,A4) */
    c->pc = RC_ADDR(0x00018fbeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18FC2:
    /* 00018fc2   4  cmp.w #c8,D6 */
    c->pc = RC_ADDR(0x00018fc2u);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18FC6:
    /* 00018fc6   2  ble 00018fce */
    c->pc = RC_ADDR(0x00018fc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18FCE;

L_18FC8:
    /* 00018fc8   6  bset #0,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00018fc8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18FCE:
    /* 00018fce   4  cmp.w #78,D6 */
    c->pc = RC_ADDR(0x00018fceu);
    rc_step(c, m, 8);
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18FD2:
    /* 00018fd2   2  bge 00018fda */
    c->pc = RC_ADDR(0x00018fd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18FDA;

L_18FD4:
    /* 00018fd4   6  bset #1,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00018fd4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18FDA:
    /* 00018fda   4  cmp.w #82,D7 */
    c->pc = RC_ADDR(0x00018fdau);
    rc_step(c, m, 8);
    t0 = 0x00000082u;
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18FDE:
    /* 00018fde   2  ble 00018fe6 */
    c->pc = RC_ADDR(0x00018fdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18FE6;

L_18FE0:
    /* 00018fe0   6  bset #2,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00018fe0u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18FE6:
    /* 00018fe6   4  cmp.w #46,D7 */
    c->pc = RC_ADDR(0x00018fe6u);
    rc_step(c, m, 8);
    t0 = 0x00000046u;
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18FEA:
    /* 00018fea   2  bge 00018ff2 */
    c->pc = RC_ADDR(0x00018feau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_18FF2;

L_18FEC:
    /* 00018fec   6  bset #3,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00018fecu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_18FF2:
    /* 00018ff2   6  move.w (47e,A4),(fffff286,A4) */
    c->pc = RC_ADDR(0x00018ff2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47eu));
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FF8:
    /* 00018ff8   6  move.w (480,A4),(fffff288,A4) */
    c->pc = RC_ADDR(0x00018ff8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x480u));
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18FFE:
    /* 00018ffe   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x00018ffeu);
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

L_19002:
    /* 00019002   2  unlk A5 */
    c->pc = RC_ADDR(0x00019002u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19004:
    /* 00019004   2  rts */
    c->pc = RC_ADDR(0x00019004u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
