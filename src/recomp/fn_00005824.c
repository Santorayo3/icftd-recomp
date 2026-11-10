/* fn_00005824 - 1114 byte(s), 324 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005824(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00005824u): goto L_5824;
    case RC_ADDR(0x00005828u): goto L_5828;
    case RC_ADDR(0x0000582cu): goto L_582C;
    case RC_ADDR(0x00005830u): goto L_5830;
    case RC_ADDR(0x00005834u): goto L_5834;
    case RC_ADDR(0x00005836u): goto L_5836;
    case RC_ADDR(0x0000583au): goto L_583A;
    case RC_ADDR(0x00005840u): goto L_5840;
    case RC_ADDR(0x00005844u): goto L_5844;
    case RC_ADDR(0x00005848u): goto L_5848;
    case RC_ADDR(0x0000584eu): goto L_584E;
    case RC_ADDR(0x00005852u): goto L_5852;
    case RC_ADDR(0x00005854u): goto L_5854;
    case RC_ADDR(0x00005858u): goto L_5858;
    case RC_ADDR(0x0000585au): goto L_585A;
    case RC_ADDR(0x0000585eu): goto L_585E;
    case RC_ADDR(0x00005862u): goto L_5862;
    case RC_ADDR(0x00005866u): goto L_5866;
    case RC_ADDR(0x0000586cu): goto L_586C;
    case RC_ADDR(0x00005870u): goto L_5870;
    case RC_ADDR(0x00005872u): goto L_5872;
    case RC_ADDR(0x00005874u): goto L_5874;
    case RC_ADDR(0x00005878u): goto L_5878;
    case RC_ADDR(0x0000587au): goto L_587A;
    case RC_ADDR(0x00005880u): goto L_5880;
    case RC_ADDR(0x00005882u): goto L_5882;
    case RC_ADDR(0x00005886u): goto L_5886;
    case RC_ADDR(0x0000588au): goto L_588A;
    case RC_ADDR(0x0000588cu): goto L_588C;
    case RC_ADDR(0x00005890u): goto L_5890;
    case RC_ADDR(0x00005894u): goto L_5894;
    case RC_ADDR(0x0000589au): goto L_589A;
    case RC_ADDR(0x0000589cu): goto L_589C;
    case RC_ADDR(0x000058a2u): goto L_58A2;
    case RC_ADDR(0x000058a4u): goto L_58A4;
    case RC_ADDR(0x000058aau): goto L_58AA;
    case RC_ADDR(0x000058acu): goto L_58AC;
    case RC_ADDR(0x000058b0u): goto L_58B0;
    case RC_ADDR(0x000058b2u): goto L_58B2;
    case RC_ADDR(0x000058b6u): goto L_58B6;
    case RC_ADDR(0x000058bau): goto L_58BA;
    case RC_ADDR(0x000058bcu): goto L_58BC;
    case RC_ADDR(0x000058beu): goto L_58BE;
    case RC_ADDR(0x000058c0u): goto L_58C0;
    case RC_ADDR(0x000058c6u): goto L_58C6;
    case RC_ADDR(0x000058c8u): goto L_58C8;
    case RC_ADDR(0x000058cau): goto L_58CA;
    case RC_ADDR(0x000058ccu): goto L_58CC;
    case RC_ADDR(0x000058ceu): goto L_58CE;
    case RC_ADDR(0x000058d2u): goto L_58D2;
    case RC_ADDR(0x000058d6u): goto L_58D6;
    case RC_ADDR(0x000058dau): goto L_58DA;
    case RC_ADDR(0x000058deu): goto L_58DE;
    case RC_ADDR(0x000058e2u): goto L_58E2;
    case RC_ADDR(0x000058e6u): goto L_58E6;
    case RC_ADDR(0x000058eau): goto L_58EA;
    case RC_ADDR(0x000058eeu): goto L_58EE;
    case RC_ADDR(0x000058f2u): goto L_58F2;
    case RC_ADDR(0x000058f4u): goto L_58F4;
    case RC_ADDR(0x000058fau): goto L_58FA;
    case RC_ADDR(0x00005900u): goto L_5900;
    case RC_ADDR(0x00005904u): goto L_5904;
    case RC_ADDR(0x00005908u): goto L_5908;
    case RC_ADDR(0x0000590au): goto L_590A;
    case RC_ADDR(0x0000590cu): goto L_590C;
    case RC_ADDR(0x00005910u): goto L_5910;
    case RC_ADDR(0x00005914u): goto L_5914;
    case RC_ADDR(0x00005918u): goto L_5918;
    case RC_ADDR(0x0000591au): goto L_591A;
    case RC_ADDR(0x0000591eu): goto L_591E;
    case RC_ADDR(0x00005920u): goto L_5920;
    case RC_ADDR(0x00005922u): goto L_5922;
    case RC_ADDR(0x00005926u): goto L_5926;
    case RC_ADDR(0x0000592au): goto L_592A;
    case RC_ADDR(0x0000592eu): goto L_592E;
    case RC_ADDR(0x00005930u): goto L_5930;
    case RC_ADDR(0x00005934u): goto L_5934;
    case RC_ADDR(0x00005936u): goto L_5936;
    case RC_ADDR(0x00005938u): goto L_5938;
    case RC_ADDR(0x0000593cu): goto L_593C;
    case RC_ADDR(0x00005940u): goto L_5940;
    case RC_ADDR(0x00005944u): goto L_5944;
    case RC_ADDR(0x00005946u): goto L_5946;
    case RC_ADDR(0x0000594au): goto L_594A;
    case RC_ADDR(0x0000594cu): goto L_594C;
    case RC_ADDR(0x0000594eu): goto L_594E;
    case RC_ADDR(0x00005952u): goto L_5952;
    case RC_ADDR(0x00005956u): goto L_5956;
    case RC_ADDR(0x0000595au): goto L_595A;
    case RC_ADDR(0x0000595cu): goto L_595C;
    case RC_ADDR(0x00005960u): goto L_5960;
    case RC_ADDR(0x00005962u): goto L_5962;
    case RC_ADDR(0x00005964u): goto L_5964;
    case RC_ADDR(0x00005968u): goto L_5968;
    case RC_ADDR(0x0000596cu): goto L_596C;
    case RC_ADDR(0x00005970u): goto L_5970;
    case RC_ADDR(0x00005972u): goto L_5972;
    case RC_ADDR(0x00005976u): goto L_5976;
    case RC_ADDR(0x00005978u): goto L_5978;
    case RC_ADDR(0x0000597cu): goto L_597C;
    case RC_ADDR(0x00005980u): goto L_5980;
    case RC_ADDR(0x00005984u): goto L_5984;
    case RC_ADDR(0x00005988u): goto L_5988;
    case RC_ADDR(0x0000598eu): goto L_598E;
    case RC_ADDR(0x00005992u): goto L_5992;
    case RC_ADDR(0x00005994u): goto L_5994;
    case RC_ADDR(0x00005996u): goto L_5996;
    case RC_ADDR(0x0000599au): goto L_599A;
    case RC_ADDR(0x0000599eu): goto L_599E;
    case RC_ADDR(0x000059a2u): goto L_59A2;
    case RC_ADDR(0x000059a6u): goto L_59A6;
    case RC_ADDR(0x000059aau): goto L_59AA;
    case RC_ADDR(0x000059acu): goto L_59AC;
    case RC_ADDR(0x000059b0u): goto L_59B0;
    case RC_ADDR(0x000059b4u): goto L_59B4;
    case RC_ADDR(0x000059b6u): goto L_59B6;
    case RC_ADDR(0x000059bau): goto L_59BA;
    case RC_ADDR(0x000059c0u): goto L_59C0;
    case RC_ADDR(0x000059c2u): goto L_59C2;
    case RC_ADDR(0x000059c6u): goto L_59C6;
    case RC_ADDR(0x000059cau): goto L_59CA;
    case RC_ADDR(0x000059ccu): goto L_59CC;
    case RC_ADDR(0x000059d0u): goto L_59D0;
    case RC_ADDR(0x000059d2u): goto L_59D2;
    case RC_ADDR(0x000059d4u): goto L_59D4;
    case RC_ADDR(0x000059d8u): goto L_59D8;
    case RC_ADDR(0x000059dcu): goto L_59DC;
    case RC_ADDR(0x000059e0u): goto L_59E0;
    case RC_ADDR(0x000059e2u): goto L_59E2;
    case RC_ADDR(0x000059e6u): goto L_59E6;
    case RC_ADDR(0x000059e8u): goto L_59E8;
    case RC_ADDR(0x000059ecu): goto L_59EC;
    case RC_ADDR(0x000059eeu): goto L_59EE;
    case RC_ADDR(0x000059f0u): goto L_59F0;
    case RC_ADDR(0x000059f2u): goto L_59F2;
    case RC_ADDR(0x000059f4u): goto L_59F4;
    case RC_ADDR(0x000059f8u): goto L_59F8;
    case RC_ADDR(0x000059fcu): goto L_59FC;
    case RC_ADDR(0x00005a00u): goto L_5A00;
    case RC_ADDR(0x00005a04u): goto L_5A04;
    case RC_ADDR(0x00005a08u): goto L_5A08;
    case RC_ADDR(0x00005a0cu): goto L_5A0C;
    case RC_ADDR(0x00005a0eu): goto L_5A0E;
    case RC_ADDR(0x00005a12u): goto L_5A12;
    case RC_ADDR(0x00005a18u): goto L_5A18;
    case RC_ADDR(0x00005a1au): goto L_5A1A;
    case RC_ADDR(0x00005a1cu): goto L_5A1C;
    case RC_ADDR(0x00005a1eu): goto L_5A1E;
    case RC_ADDR(0x00005a22u): goto L_5A22;
    case RC_ADDR(0x00005a26u): goto L_5A26;
    case RC_ADDR(0x00005a2au): goto L_5A2A;
    case RC_ADDR(0x00005a2eu): goto L_5A2E;
    case RC_ADDR(0x00005a32u): goto L_5A32;
    case RC_ADDR(0x00005a36u): goto L_5A36;
    case RC_ADDR(0x00005a3au): goto L_5A3A;
    case RC_ADDR(0x00005a3eu): goto L_5A3E;
    case RC_ADDR(0x00005a42u): goto L_5A42;
    case RC_ADDR(0x00005a46u): goto L_5A46;
    case RC_ADDR(0x00005a48u): goto L_5A48;
    case RC_ADDR(0x00005a4cu): goto L_5A4C;
    case RC_ADDR(0x00005a50u): goto L_5A50;
    case RC_ADDR(0x00005a52u): goto L_5A52;
    case RC_ADDR(0x00005a56u): goto L_5A56;
    case RC_ADDR(0x00005a5au): goto L_5A5A;
    case RC_ADDR(0x00005a5cu): goto L_5A5C;
    case RC_ADDR(0x00005a60u): goto L_5A60;
    case RC_ADDR(0x00005a64u): goto L_5A64;
    case RC_ADDR(0x00005a68u): goto L_5A68;
    case RC_ADDR(0x00005a6au): goto L_5A6A;
    case RC_ADDR(0x00005a6cu): goto L_5A6C;
    case RC_ADDR(0x00005a70u): goto L_5A70;
    case RC_ADDR(0x00005a72u): goto L_5A72;
    case RC_ADDR(0x00005a76u): goto L_5A76;
    case RC_ADDR(0x00005a7au): goto L_5A7A;
    case RC_ADDR(0x00005a7eu): goto L_5A7E;
    case RC_ADDR(0x00005a80u): goto L_5A80;
    case RC_ADDR(0x00005a86u): goto L_5A86;
    case RC_ADDR(0x00005a8au): goto L_5A8A;
    case RC_ADDR(0x00005a8eu): goto L_5A8E;
    case RC_ADDR(0x00005a90u): goto L_5A90;
    case RC_ADDR(0x00005a94u): goto L_5A94;
    case RC_ADDR(0x00005a98u): goto L_5A98;
    case RC_ADDR(0x00005a9au): goto L_5A9A;
    case RC_ADDR(0x00005a9eu): goto L_5A9E;
    case RC_ADDR(0x00005aa0u): goto L_5AA0;
    case RC_ADDR(0x00005aa4u): goto L_5AA4;
    case RC_ADDR(0x00005aa8u): goto L_5AA8;
    case RC_ADDR(0x00005aaau): goto L_5AAA;
    case RC_ADDR(0x00005aaeu): goto L_5AAE;
    case RC_ADDR(0x00005ab4u): goto L_5AB4;
    case RC_ADDR(0x00005abau): goto L_5ABA;
    case RC_ADDR(0x00005abeu): goto L_5ABE;
    case RC_ADDR(0x00005ac2u): goto L_5AC2;
    case RC_ADDR(0x00005ac4u): goto L_5AC4;
    case RC_ADDR(0x00005ac8u): goto L_5AC8;
    case RC_ADDR(0x00005acau): goto L_5ACA;
    case RC_ADDR(0x00005aceu): goto L_5ACE;
    case RC_ADDR(0x00005ad2u): goto L_5AD2;
    case RC_ADDR(0x00005ad4u): goto L_5AD4;
    case RC_ADDR(0x00005ad8u): goto L_5AD8;
    case RC_ADDR(0x00005adcu): goto L_5ADC;
    case RC_ADDR(0x00005ae0u): goto L_5AE0;
    case RC_ADDR(0x00005ae2u): goto L_5AE2;
    case RC_ADDR(0x00005ae6u): goto L_5AE6;
    case RC_ADDR(0x00005ae8u): goto L_5AE8;
    case RC_ADDR(0x00005aeeu): goto L_5AEE;
    case RC_ADDR(0x00005af4u): goto L_5AF4;
    case RC_ADDR(0x00005af6u): goto L_5AF6;
    case RC_ADDR(0x00005afau): goto L_5AFA;
    case RC_ADDR(0x00005afeu): goto L_5AFE;
    case RC_ADDR(0x00005b02u): goto L_5B02;
    case RC_ADDR(0x00005b06u): goto L_5B06;
    case RC_ADDR(0x00005b0au): goto L_5B0A;
    case RC_ADDR(0x00005b12u): goto L_5B12;
    case RC_ADDR(0x00005b1au): goto L_5B1A;
    case RC_ADDR(0x00005b20u): goto L_5B20;
    case RC_ADDR(0x00005b22u): goto L_5B22;
    case RC_ADDR(0x00005b24u): goto L_5B24;
    case RC_ADDR(0x00005b26u): goto L_5B26;
    case RC_ADDR(0x00005b2au): goto L_5B2A;
    case RC_ADDR(0x00005b2eu): goto L_5B2E;
    case RC_ADDR(0x00005b32u): goto L_5B32;
    case RC_ADDR(0x00005b36u): goto L_5B36;
    case RC_ADDR(0x00005b38u): goto L_5B38;
    case RC_ADDR(0x00005b3cu): goto L_5B3C;
    case RC_ADDR(0x00005b40u): goto L_5B40;
    case RC_ADDR(0x00005b42u): goto L_5B42;
    case RC_ADDR(0x00005b46u): goto L_5B46;
    case RC_ADDR(0x00005b4au): goto L_5B4A;
    case RC_ADDR(0x00005b4eu): goto L_5B4E;
    case RC_ADDR(0x00005b52u): goto L_5B52;
    case RC_ADDR(0x00005b54u): goto L_5B54;
    case RC_ADDR(0x00005b56u): goto L_5B56;
    case RC_ADDR(0x00005b58u): goto L_5B58;
    case RC_ADDR(0x00005b5au): goto L_5B5A;
    case RC_ADDR(0x00005b5cu): goto L_5B5C;
    case RC_ADDR(0x00005b5eu): goto L_5B5E;
    case RC_ADDR(0x00005b62u): goto L_5B62;
    case RC_ADDR(0x00005b66u): goto L_5B66;
    case RC_ADDR(0x00005b6au): goto L_5B6A;
    case RC_ADDR(0x00005b6eu): goto L_5B6E;
    case RC_ADDR(0x00005b72u): goto L_5B72;
    case RC_ADDR(0x00005b76u): goto L_5B76;
    case RC_ADDR(0x00005b7au): goto L_5B7A;
    case RC_ADDR(0x00005b7cu): goto L_5B7C;
    case RC_ADDR(0x00005b80u): goto L_5B80;
    case RC_ADDR(0x00005b82u): goto L_5B82;
    case RC_ADDR(0x00005b84u): goto L_5B84;
    case RC_ADDR(0x00005b86u): goto L_5B86;
    case RC_ADDR(0x00005b88u): goto L_5B88;
    case RC_ADDR(0x00005b8au): goto L_5B8A;
    case RC_ADDR(0x00005b8eu): goto L_5B8E;
    case RC_ADDR(0x00005b92u): goto L_5B92;
    case RC_ADDR(0x00005b96u): goto L_5B96;
    case RC_ADDR(0x00005b9au): goto L_5B9A;
    case RC_ADDR(0x00005ba0u): goto L_5BA0;
    case RC_ADDR(0x00005ba2u): goto L_5BA2;
    case RC_ADDR(0x00005ba4u): goto L_5BA4;
    case RC_ADDR(0x00005ba6u): goto L_5BA6;
    case RC_ADDR(0x00005baau): goto L_5BAA;
    case RC_ADDR(0x00005baeu): goto L_5BAE;
    case RC_ADDR(0x00005bb2u): goto L_5BB2;
    case RC_ADDR(0x00005bb6u): goto L_5BB6;
    case RC_ADDR(0x00005bb8u): goto L_5BB8;
    case RC_ADDR(0x00005bbcu): goto L_5BBC;
    case RC_ADDR(0x00005bbeu): goto L_5BBE;
    case RC_ADDR(0x00005bc0u): goto L_5BC0;
    case RC_ADDR(0x00005bc6u): goto L_5BC6;
    case RC_ADDR(0x00005bccu): goto L_5BCC;
    case RC_ADDR(0x00005bceu): goto L_5BCE;
    case RC_ADDR(0x00005bd2u): goto L_5BD2;
    case RC_ADDR(0x00005bd6u): goto L_5BD6;
    case RC_ADDR(0x00005bdau): goto L_5BDA;
    case RC_ADDR(0x00005bdeu): goto L_5BDE;
    case RC_ADDR(0x00005be2u): goto L_5BE2;
    case RC_ADDR(0x00005be4u): goto L_5BE4;
    case RC_ADDR(0x00005be6u): goto L_5BE6;
    case RC_ADDR(0x00005be8u): goto L_5BE8;
    case RC_ADDR(0x00005beau): goto L_5BEA;
    case RC_ADDR(0x00005becu): goto L_5BEC;
    case RC_ADDR(0x00005beeu): goto L_5BEE;
    case RC_ADDR(0x00005bf2u): goto L_5BF2;
    case RC_ADDR(0x00005bf6u): goto L_5BF6;
    case RC_ADDR(0x00005bfau): goto L_5BFA;
    case RC_ADDR(0x00005bfeu): goto L_5BFE;
    case RC_ADDR(0x00005c02u): goto L_5C02;
    case RC_ADDR(0x00005c04u): goto L_5C04;
    case RC_ADDR(0x00005c08u): goto L_5C08;
    case RC_ADDR(0x00005c0au): goto L_5C0A;
    case RC_ADDR(0x00005c10u): goto L_5C10;
    case RC_ADDR(0x00005c12u): goto L_5C12;
    case RC_ADDR(0x00005c14u): goto L_5C14;
    case RC_ADDR(0x00005c16u): goto L_5C16;
    case RC_ADDR(0x00005c18u): goto L_5C18;
    case RC_ADDR(0x00005c1au): goto L_5C1A;
    case RC_ADDR(0x00005c1eu): goto L_5C1E;
    case RC_ADDR(0x00005c22u): goto L_5C22;
    case RC_ADDR(0x00005c26u): goto L_5C26;
    case RC_ADDR(0x00005c28u): goto L_5C28;
    case RC_ADDR(0x00005c2au): goto L_5C2A;
    case RC_ADDR(0x00005c2cu): goto L_5C2C;
    case RC_ADDR(0x00005c30u): goto L_5C30;
    case RC_ADDR(0x00005c34u): goto L_5C34;
    case RC_ADDR(0x00005c38u): goto L_5C38;
    case RC_ADDR(0x00005c3cu): goto L_5C3C;
    case RC_ADDR(0x00005c3eu): goto L_5C3E;
    case RC_ADDR(0x00005c40u): goto L_5C40;
    case RC_ADDR(0x00005c42u): goto L_5C42;
    case RC_ADDR(0x00005c46u): goto L_5C46;
    case RC_ADDR(0x00005c4au): goto L_5C4A;
    case RC_ADDR(0x00005c4eu): goto L_5C4E;
    case RC_ADDR(0x00005c52u): goto L_5C52;
    case RC_ADDR(0x00005c56u): goto L_5C56;
    case RC_ADDR(0x00005c58u): goto L_5C58;
    case RC_ADDR(0x00005c5eu): goto L_5C5E;
    case RC_ADDR(0x00005c60u): goto L_5C60;
    case RC_ADDR(0x00005c62u): goto L_5C62;
    case RC_ADDR(0x00005c66u): goto L_5C66;
    case RC_ADDR(0x00005c6au): goto L_5C6A;
    case RC_ADDR(0x00005c6eu): goto L_5C6E;
    case RC_ADDR(0x00005c70u): goto L_5C70;
    case RC_ADDR(0x00005c74u): goto L_5C74;
    case RC_ADDR(0x00005c78u): goto L_5C78;
    case RC_ADDR(0x00005c7au): goto L_5C7A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5824:
    /* 00005824   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00005824u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_5828:
    /* 00005828   4  clr.w (fffff0b8,A4) */
    c->pc = RC_ADDR(0x00005828u);
    rc_wr16(c, m, (c->a[4] - 0xf48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_582C:
    /* 0000582c   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000582cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5830:
    /* 00005830   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x00005830u);
    rc_push32(c, m, RC_ADDR(0x00005834u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_5834:
    /* 00005834   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005834u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5836:
    /* 00005836   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005836u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_583A:
    /* 0000583a   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000583au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5840:
    /* 00005840   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x00005840u);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5844:
    /* 00005844   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00005844u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_5848:
    /* 00005848   6  move.b (22,A0),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005848u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x22u));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_584E:
    /* 0000584e   4  tst.b (fffffffb,A5) */
    c->pc = RC_ADDR(0x0000584eu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_set_nzvc(c, t0, RC_B);

L_5852:
    /* 00005852   2  beq 0000585a */
    c->pc = RC_ADDR(0x00005852u);
    if (rc_cond(c, 7)) goto L_585A;

L_5854:
    /* 00005854   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00005854u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_5858:
    /* 00005858   2  bge 0000586c */
    c->pc = RC_ADDR(0x00005858u);
    if (rc_cond(c, 12)) goto L_586C;

L_585A:
    /* 0000585a   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x0000585au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_585E:
    /* 0000585e   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x0000585eu);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_5862:
    /* 00005862   4  lea (ffff8584,A4),A0 */
    c->pc = RC_ADDR(0x00005862u);
    c->a[0] = (c->a[4] - 0x7a7cu);

L_5866:
    /* 00005866   6  move.b (0,A0,D0.w),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005866u);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_586C:
    /* 0000586c   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x0000586cu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5870:
    /* 00005870   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005870u);
    rc_ext_w(c, 0);

L_5872:
    /* 00005872   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00005872u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5874:
    /* 00005874   4  jsr (000057ba) */
    c->pc = RC_ADDR(0x00005874u);
    rc_push32(c, m, RC_ADDR(0x00005878u));
    rc_depth++;
    c->pc = RC_ADDR(0x000057bau);
    return;

L_5878:
    /* 00005878   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005878u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_587A:
    /* 0000587a   6  cmpi.b #63,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x0000587au);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000063u);

L_5880:
    /* 00005880   2  bne 00005894 */
    c->pc = RC_ADDR(0x00005880u);
    if (rc_cond(c, 6)) goto L_5894;

L_5882:
    /* 00005882   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005882u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5886:
    /* 00005886   4  jsr (00006c76) */
    c->pc = RC_ADDR(0x00005886u);
    rc_push32(c, m, RC_ADDR(0x0000588au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_588A:
    /* 0000588a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000588au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_588C:
    /* 0000588c   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000588cu);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00005890u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_5890:
    /* 00005890   4  jsr (000069d2) */
    c->pc = RC_ADDR(0x00005890u);
    rc_push32(c, m, RC_ADDR(0x00005894u));
    rc_depth++;
    c->pc = RC_ADDR(0x000069d2u);
    return;

L_5894:
    /* 00005894   6  cmpi.w #17,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00005894u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_589A:
    /* 0000589a   2  bne 000058d2 */
    c->pc = RC_ADDR(0x0000589au);
    if (rc_cond(c, 6)) goto L_58D2;

L_589C:
    /* 0000589c   6  cmpi.b #1c,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x0000589cu);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x0000001cu);

L_58A2:
    /* 000058a2   2  bne 000058ce */
    c->pc = RC_ADDR(0x000058a2u);
    if (rc_cond(c, 6)) goto L_58CE;

L_58A4:
    /* 000058a4   6  cmpi.b #11,(fffffffb,A5) */
    c->pc = RC_ADDR(0x000058a4u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000011u);

L_58AA:
    /* 000058aa   2  bne 000058cc */
    c->pc = RC_ADDR(0x000058aau);
    if (rc_cond(c, 6)) goto L_58CC;

L_58AC:
    /* 000058ac   4  tst.w (fffff0c2,A4) */
    c->pc = RC_ADDR(0x000058acu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf3eu));
    rc_set_nzvc(c, t0, RC_W);

L_58B0:
    /* 000058b0   2  bne 000058cc */
    c->pc = RC_ADDR(0x000058b0u);
    if (rc_cond(c, 6)) goto L_58CC;

L_58B2:
    /* 000058b2   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000058b2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_58B6:
    /* 000058b6   4  jsr (00006df2) */
    c->pc = RC_ADDR(0x000058b6u);
    rc_push32(c, m, RC_ADDR(0x000058bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006df2u);
    return;

L_58BA:
    /* 000058ba   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000058bau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_58BC:
    /* 000058bc   2  tst.w D0 */
    c->pc = RC_ADDR(0x000058bcu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_58BE:
    /* 000058be   2  beq 000058cc */
    c->pc = RC_ADDR(0x000058beu);
    if (rc_cond(c, 7)) goto L_58CC;

L_58C0:
    /* 000058c0   6  move.w #1,(fffff0c2,A4) */
    c->pc = RC_ADDR(0x000058c0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_58C6:
    /* 000058c6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000058c6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_58C8:
    /* 000058c8   2  unlk A5 */
    c->pc = RC_ADDR(0x000058c8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_58CA:
    /* 000058ca   2  rts */
    c->pc = RC_ADDR(0x000058cau);
    rc_ret(c, m);
    return;

L_58CC:
    /* 000058cc   2  bra 000058d2 */
    c->pc = RC_ADDR(0x000058ccu);
    goto L_58D2;

L_58CE:
    /* 000058ce   4  clr.w (fffff0c2,A4) */
    c->pc = RC_ADDR(0x000058ceu);
    rc_wr16(c, m, (c->a[4] - 0xf3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_58D2:
    /* 000058d2   4  clr.w (fffff0bc,A4) */
    c->pc = RC_ADDR(0x000058d2u);
    rc_wr16(c, m, (c->a[4] - 0xf44u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_58D6:
    /* 000058d6   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x000058d6u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_58DA:
    /* 000058da   4  cmp.b (fffff0ba,A4),D0 */
    c->pc = RC_ADDR(0x000058dau);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_58DE:
    /* 000058de   4  beq 00005b76 */
    c->pc = RC_ADDR(0x000058deu);
    if (rc_cond(c, 7)) goto L_5B76;

L_58E2:
    /* 000058e2   4  clr.w (ffff8534,A4) */
    c->pc = RC_ADDR(0x000058e2u);
    rc_wr16(c, m, (c->a[4] - 0x7accu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_58E6:
    /* 000058e6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000058e6u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_58EA:
    /* 000058ea   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000058eau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_58EE:
    /* 000058ee   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x000058eeu);
    rc_push32(c, m, RC_ADDR(0x000058f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_58F2:
    /* 000058f2   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000058f2u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_58F4:
    /* 000058f4   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x000058f4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_58FA:
    /* 000058fa   6  move.w #1,(fffff0bc,A4) */
    c->pc = RC_ADDR(0x000058fau);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5900:
    /* 00005900   4  clr.w (fffff26a,A4) */
    c->pc = RC_ADDR(0x00005900u);
    rc_wr16(c, m, (c->a[4] - 0xd96u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5904:
    /* 00005904   4  tst.l (fffff0c4,A4) */
    c->pc = RC_ADDR(0x00005904u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    rc_set_nzvc(c, t0, RC_L);

L_5908:
    /* 00005908   2  beq 0000591a */
    c->pc = RC_ADDR(0x00005908u);
    if (rc_cond(c, 7)) goto L_591A;

L_590A:
    /* 0000590a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000590au);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_590C:
    /* 0000590c   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000590cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5910:
    /* 00005910   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005910u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5914:
    /* 00005914   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005914u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005918u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5918:
    /* 00005918   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005918u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_591A:
    /* 0000591a   4  tst.l (fffff0c8,A4) */
    c->pc = RC_ADDR(0x0000591au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    rc_set_nzvc(c, t0, RC_L);

L_591E:
    /* 0000591e   2  beq 00005930 */
    c->pc = RC_ADDR(0x0000591eu);
    if (rc_cond(c, 7)) goto L_5930;

L_5920:
    /* 00005920   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005920u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5922:
    /* 00005922   4  move.l (fffff0c8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005922u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5926:
    /* 00005926   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005926u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_592A:
    /* 0000592a   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000592au);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000592eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_592E:
    /* 0000592e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000592eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5930:
    /* 00005930   4  tst.l (fffff0d0,A4) */
    c->pc = RC_ADDR(0x00005930u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf30u));
    rc_set_nzvc(c, t0, RC_L);

L_5934:
    /* 00005934   2  beq 00005946 */
    c->pc = RC_ADDR(0x00005934u);
    if (rc_cond(c, 7)) goto L_5946;

L_5936:
    /* 00005936   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005936u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5938:
    /* 00005938   4  move.l (fffff0d0,A4),-(A7) */
    c->pc = RC_ADDR(0x00005938u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_593C:
    /* 0000593c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000593cu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5940:
    /* 00005940   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005940u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005944u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5944:
    /* 00005944   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005944u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5946:
    /* 00005946   4  tst.l (fffff0d4,A4) */
    c->pc = RC_ADDR(0x00005946u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf2cu));
    rc_set_nzvc(c, t0, RC_L);

L_594A:
    /* 0000594a   2  beq 0000595c */
    c->pc = RC_ADDR(0x0000594au);
    if (rc_cond(c, 7)) goto L_595C;

L_594C:
    /* 0000594c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000594cu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_594E:
    /* 0000594e   4  move.l (fffff0d4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000594eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5952:
    /* 00005952   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005952u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5956:
    /* 00005956   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005956u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000595au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_595A:
    /* 0000595a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000595au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_595C:
    /* 0000595c   4  tst.l (fffff0d8,A4) */
    c->pc = RC_ADDR(0x0000595cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf28u));
    rc_set_nzvc(c, t0, RC_L);

L_5960:
    /* 00005960   2  beq 00005972 */
    c->pc = RC_ADDR(0x00005960u);
    if (rc_cond(c, 7)) goto L_5972;

L_5962:
    /* 00005962   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005962u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5964:
    /* 00005964   4  move.l (fffff0d8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005964u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5968:
    /* 00005968   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005968u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_596C:
    /* 0000596c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000596cu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005970u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5970:
    /* 00005970   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005970u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5972:
    /* 00005972   4  tst.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x00005972u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2eu));
    rc_set_nzvc(c, t0, RC_W);

L_5976:
    /* 00005976   2  beq 00005984 */
    c->pc = RC_ADDR(0x00005976u);
    if (rc_cond(c, 7)) goto L_5984;

L_5978:
    /* 00005978   4  jsr (000007b2) */
    c->pc = RC_ADDR(0x00005978u);
    rc_push32(c, m, RC_ADDR(0x0000597cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000007b2u);
    return;

L_597C:
    /* 0000597c   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x0000597cu);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00005980u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_5980:
    /* 00005980   4  jsr (000007b2) */
    c->pc = RC_ADDR(0x00005980u);
    rc_push32(c, m, RC_ADDR(0x00005984u));
    rc_depth++;
    c->pc = RC_ADDR(0x000007b2u);
    return;

L_5984:
    /* 00005984   4  jsr (00005cb2) */
    c->pc = RC_ADDR(0x00005984u);
    rc_push32(c, m, RC_ADDR(0x00005988u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005cb2u);
    return;

L_5988:
    /* 00005988   6  move.b (fffffffb,A5),(fffff0ba,A4) */
    c->pc = RC_ADDR(0x00005988u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_wr8(c, m, (c->a[4] - 0xf46u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_598E:
    /* 0000598e   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x0000598eu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5992:
    /* 00005992   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005992u);
    rc_ext_w(c, 0);

L_5994:
    /* 00005994   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00005994u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5996:
    /* 00005996   4  pea (00005c7e) */
    c->pc = RC_ADDR(0x00005996u);
    rc_push32(c, m, RC_ADDR(0x00005c7eu));

L_599A:
    /* 0000599a   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x0000599au);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_599E:
    /* 0000599e   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0000599eu);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000059a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_59A2:
    /* 000059a2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000059a2u);
    c->a[7] = (c->a[7] + 0xau);

L_59A6:
    /* 000059a6   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000059a6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_59AA:
    /* 000059aa   2  beq 000059d8 */
    c->pc = RC_ADDR(0x000059aau);
    if (rc_cond(c, 7)) goto L_59D8;

L_59AC:
    /* 000059ac   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000059acu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_59B0:
    /* 000059b0   4  tst.b (1,A0) */
    c->pc = RC_ADDR(0x000059b0u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_set_nzvc(c, t0, RC_B);

L_59B4:
    /* 000059b4   2  bne 000059d8 */
    c->pc = RC_ADDR(0x000059b4u);
    if (rc_cond(c, 6)) goto L_59D8;

L_59B6:
    /* 000059b6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000059b6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_59BA:
    /* 000059ba   6  cmpi.b #2,(9,A0) */
    c->pc = RC_ADDR(0x000059bau);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_59C0:
    /* 000059c0   2  bge 000059d8 */
    c->pc = RC_ADDR(0x000059c0u);
    if (rc_cond(c, 12)) goto L_59D8;

L_59C2:
    /* 000059c2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000059c2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_59C6:
    /* 000059c6   4  movea.l (a,A0),A1 */
    c->pc = RC_ADDR(0x000059c6u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    c->a[1] = t0;

L_59CA:
    /* 000059ca   2  movea.l (A1),A0 */
    c->pc = RC_ADDR(0x000059cau);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[0] = t0;

L_59CC:
    /* 000059cc   4  cmpi.b #26,(A0) */
    c->pc = RC_ADDR(0x000059ccu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000026u);

L_59D0:
    /* 000059d0   2  bne 000059d8 */
    c->pc = RC_ADDR(0x000059d0u);
    if (rc_cond(c, 6)) goto L_59D8;

L_59D2:
    /* 000059d2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000059d2u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_59D4:
    /* 000059d4   4  bra 000058c8 */
    c->pc = RC_ADDR(0x000059d4u);
    rc_tick();
    goto L_58C8;

L_59D8:
    /* 000059d8   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x000059d8u);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_59DC:
    /* 000059dc   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x000059dcu);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x000059e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_59E0:
    /* 000059e0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000059e0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_59E2:
    /* 000059e2   4  move.l D0,(fffff0d0,A4) */
    c->pc = RC_ADDR(0x000059e2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_59E6:
    /* 000059e6   2  beq 00005a3a */
    c->pc = RC_ADDR(0x000059e6u);
    if (rc_cond(c, 7)) goto L_5A3A;

L_59E8:
    /* 000059e8   4  jsr (ffff8050,A4) */
    c->pc = RC_ADDR(0x000059e8u);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x000059ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003532u);
    return;

L_59EC:
    /* 000059ec   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000059ecu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_59EE:
    /* 000059ee   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000059eeu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_59F0:
    /* 000059f0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000059f0u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_59F2:
    /* 000059f2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000059f2u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_59F4:
    /* 000059f4   4  move.l (fffff0d0,A4),-(A7) */
    c->pc = RC_ADDR(0x000059f4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_59F8:
    /* 000059f8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000059f8u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_59FC:
    /* 000059fc   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000059fcu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005a00u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5A00:
    /* 00005a00   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005a00u);
    c->a[7] = (c->a[7] + 0x14u);

L_5A04:
    /* 00005a04   4  pea (00005c85) */
    c->pc = RC_ADDR(0x00005a04u);
    rc_push32(c, m, RC_ADDR(0x00005c85u));

L_5A08:
    /* 00005a08   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00005a08u);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00005a0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_5A0C:
    /* 00005a0c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005a0cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5A0E:
    /* 00005a0e   4  move.l D0,(fffff0d4,A4) */
    c->pc = RC_ADDR(0x00005a0eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf2cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A12:
    /* 00005a12   6  pea (00040000).l */
    c->pc = RC_ADDR(0x00005a12u);
    rc_push32(c, m, RC_ADDR(0x00040000u));

L_5A18:
    /* 00005a18   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005a18u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5A1A:
    /* 00005a1a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005a1au);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5A1C:
    /* 00005a1c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005a1cu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5A1E:
    /* 00005a1e   4  move.l (fffff0d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005a1eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A22:
    /* 00005a22   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005a22u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5A26:
    /* 00005a26   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005a26u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5A2A:
    /* 00005a2a   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005a2au);
    c->a[7] = (c->a[7] + 0x14u);

L_5A2E:
    /* 00005a2e   4  clr.l (fffff0e4,A4) */
    c->pc = RC_ADDR(0x00005a2eu);
    rc_wr32(c, m, (c->a[4] - 0xf1cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5A32:
    /* 00005a32   4  clr.l (fffff0e0,A4) */
    c->pc = RC_ADDR(0x00005a32u);
    rc_wr32(c, m, (c->a[4] - 0xf20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5A36:
    /* 00005a36   4  bra 00005b6e */
    c->pc = RC_ADDR(0x00005a36u);
    goto L_5B6E;

L_5A3A:
    /* 00005a3a   4  clr.l (fffff0c8,A4) */
    c->pc = RC_ADDR(0x00005a3au);
    rc_wr32(c, m, (c->a[4] - 0xf38u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5A3E:
    /* 00005a3e   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x00005a3eu);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_5A42:
    /* 00005a42   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00005a42u);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00005a46u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_5A46:
    /* 00005a46   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005a46u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5A48:
    /* 00005a48   4  move.l D0,(fffff0c4,A4) */
    c->pc = RC_ADDR(0x00005a48u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf3cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A4C:
    /* 00005a4c   4  tst.l (fffff0c4,A4) */
    c->pc = RC_ADDR(0x00005a4cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    rc_set_nzvc(c, t0, RC_L);

L_5A50:
    /* 00005a50   2  bne 00005a60 */
    c->pc = RC_ADDR(0x00005a50u);
    if (rc_cond(c, 6)) goto L_5A60;

L_5A52:
    /* 00005a52   4  pea (fffff0e8,A4) */
    c->pc = RC_ADDR(0x00005a52u);
    rc_push32(c, m, (c->a[4] - 0xf18u));

L_5A56:
    /* 00005a56   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x00005a56u);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x00005a5au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_5A5A:
    /* 00005a5a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005a5au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5A5C:
    /* 00005a5c   4  move.l D0,(fffff0c4,A4) */
    c->pc = RC_ADDR(0x00005a5cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf3cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A60:
    /* 00005a60   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005a60u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A64:
    /* 00005a64   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x00005a64u);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x00005a68u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_5A68:
    /* 00005a68   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005a68u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5A6A:
    /* 00005a6a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00005a6au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_5A6C:
    /* 00005a6c   4  beq 00005b4e */
    c->pc = RC_ADDR(0x00005a6cu);
    if (rc_cond(c, 7)) goto L_5B4E;

L_5A70:
    /* 00005a70   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005a70u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5A72:
    /* 00005a72   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005a72u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A76:
    /* 00005a76   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x00005a76u);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5A7A:
    /* 00005a7a   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005a7au);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005a7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5A7E:
    /* 00005a7e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005a7eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5A80:
    /* 00005a80   6  cmpi.b #11,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005a80u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000011u);

L_5A86:
    /* 00005a86   4  bne 00005b38 */
    c->pc = RC_ADDR(0x00005a86u);
    if (rc_cond(c, 6)) goto L_5B38;

L_5A8A:
    /* 00005a8a   4  tst.w (fffff0c0,A4) */
    c->pc = RC_ADDR(0x00005a8au);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf40u));
    rc_set_nzvc(c, t0, RC_W);

L_5A8E:
    /* 00005a8e   2  beq 00005aa0 */
    c->pc = RC_ADDR(0x00005a8eu);
    if (rc_cond(c, 7)) goto L_5AA0;

L_5A90:
    /* 00005a90   4  pea (00005c89) */
    c->pc = RC_ADDR(0x00005a90u);
    rc_push32(c, m, RC_ADDR(0x00005c89u));

L_5A94:
    /* 00005a94   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00005a94u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00005a98u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_5A98:
    /* 00005a98   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005a98u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5A9A:
    /* 00005a9a   4  move.l D0,(fffff0d8,A4) */
    c->pc = RC_ADDR(0x00005a9au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5A9E:
    /* 00005a9e   2  bra 00005aba */
    c->pc = RC_ADDR(0x00005a9eu);
    goto L_5ABA;

L_5AA0:
    /* 00005aa0   4  pea (00005c8f) */
    c->pc = RC_ADDR(0x00005aa0u);
    rc_push32(c, m, RC_ADDR(0x00005c8fu));

L_5AA4:
    /* 00005aa4   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x00005aa4u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00005aa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_5AA8:
    /* 00005aa8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005aa8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5AAA:
    /* 00005aaa   4  move.l D0,(fffff0d8,A4) */
    c->pc = RC_ADDR(0x00005aaau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AAE:
    /* 00005aae   6  move.w #1,(fffff0c0,A4) */
    c->pc = RC_ADDR(0x00005aaeu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5AB4:
    /* 00005ab4   6  move.w #14,(fffff0b8,A4) */
    c->pc = RC_ADDR(0x00005ab4u);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] - 0xf48u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5ABA:
    /* 00005aba   4  pea (00005c94) */
    c->pc = RC_ADDR(0x00005abau);
    rc_push32(c, m, RC_ADDR(0x00005c94u));

L_5ABE:
    /* 00005abe   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00005abeu);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00005ac2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_5AC2:
    /* 00005ac2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005ac2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5AC4:
    /* 00005ac4   4  move.l D0,(fffff0c8,A4) */
    c->pc = RC_ADDR(0x00005ac4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AC8:
    /* 00005ac8   2  bne 00005ae2 */
    c->pc = RC_ADDR(0x00005ac8u);
    if (rc_cond(c, 6)) goto L_5AE2;

L_5ACA:
    /* 00005aca   4  pea (00005c99) */
    c->pc = RC_ADDR(0x00005acau);
    rc_push32(c, m, RC_ADDR(0x00005c99u));

L_5ACE:
    /* 00005ace   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x00005aceu);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x00005ad2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d476u);
    return;

L_5AD2:
    /* 00005ad2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005ad2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5AD4:
    /* 00005ad4   4  move.l D0,(fffff0c8,A4) */
    c->pc = RC_ADDR(0x00005ad4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xf38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AD8:
    /* 00005ad8   4  move.l (fffff0c8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005ad8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5ADC:
    /* 00005adc   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x00005adcu);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x00005ae0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_5AE0:
    /* 00005ae0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005ae0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5AE2:
    /* 00005ae2   4  jsr (ffff8050,A4) */
    c->pc = RC_ADDR(0x00005ae2u);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x00005ae6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003532u);
    return;

L_5AE6:
    /* 00005ae6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005ae6u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5AE8:
    /* 00005ae8   6  pea (000e0000).l */
    c->pc = RC_ADDR(0x00005ae8u);
    rc_push32(c, m, RC_ADDR(0x000e0000u));

L_5AEE:
    /* 00005aee   6  pea (006e0000).l */
    c->pc = RC_ADDR(0x00005aeeu);
    rc_push32(c, m, RC_ADDR(0x006e0000u));

L_5AF4:
    /* 00005af4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005af4u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5AF6:
    /* 00005af6   4  move.l (fffff0c8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005af6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AFA:
    /* 00005afa   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005afau);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5AFE:
    /* 00005afe   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005afeu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005b02u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5B02:
    /* 00005b02   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005b02u);
    c->a[7] = (c->a[7] + 0x14u);

L_5B06:
    /* 00005b06   4  clr.l (fffff0e0,A4) */
    c->pc = RC_ADDR(0x00005b06u);
    rc_wr32(c, m, (c->a[4] - 0xf20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B0A:
    /* 00005b0a   8  move.l #ffffffe2,(fffff0e4,A4) */
    c->pc = RC_ADDR(0x00005b0au);
    t0 = 0xffffffe2u;
    rc_wr32(c, m, (c->a[4] - 0xf1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B12:
    /* 00005b12   8  move.l #7,(fffff0dc,A4) */
    c->pc = RC_ADDR(0x00005b12u);
    t0 = 0x00000007u;
    rc_wr32(c, m, (c->a[4] - 0xf24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B1A:
    /* 00005b1a   6  pea (00080000).l */
    c->pc = RC_ADDR(0x00005b1au);
    rc_push32(c, m, RC_ADDR(0x00080000u));

L_5B20:
    /* 00005b20   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b20u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B22:
    /* 00005b22   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b22u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B24:
    /* 00005b24   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005b24u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B26:
    /* 00005b26   4  move.l (fffff0d8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005b26u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B2A:
    /* 00005b2a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005b2au);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B2E:
    /* 00005b2e   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005b2eu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005b32u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5B32:
    /* 00005b32   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005b32u);
    c->a[7] = (c->a[7] + 0x14u);

L_5B36:
    /* 00005b36   2  bra 00005b4e */
    c->pc = RC_ADDR(0x00005b36u);
    goto L_5B4E;

L_5B38:
    /* 00005b38   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005b38u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B3C:
    /* 00005b3c   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00005b3cu);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00005b40u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d564u);
    return;

L_5B40:
    /* 00005b40   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005b40u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5B42:
    /* 00005b42   4  clr.l (fffff0dc,A4) */
    c->pc = RC_ADDR(0x00005b42u);
    rc_wr32(c, m, (c->a[4] - 0xf24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B46:
    /* 00005b46   4  clr.l (fffff0e4,A4) */
    c->pc = RC_ADDR(0x00005b46u);
    rc_wr32(c, m, (c->a[4] - 0xf1cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B4A:
    /* 00005b4a   4  clr.l (fffff0e0,A4) */
    c->pc = RC_ADDR(0x00005b4au);
    rc_wr32(c, m, (c->a[4] - 0xf20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B4E:
    /* 00005b4e   4  move.l (fffff0dc,A4),D0 */
    c->pc = RC_ADDR(0x00005b4eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf24u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B52:
    /* 00005b52   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00005b52u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5B54:
    /* 00005b54   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00005b54u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_5B56:
    /* 00005b56   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005b56u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B58:
    /* 00005b58   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b58u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B5A:
    /* 00005b5a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b5au);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B5C:
    /* 00005b5c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005b5cu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B5E:
    /* 00005b5e   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005b5eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B62:
    /* 00005b62   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005b62u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B66:
    /* 00005b66   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005b66u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005b6au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5B6A:
    /* 00005b6a   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005b6au);
    c->a[7] = (c->a[7] + 0x14u);

L_5B6E:
    /* 00005b6e   4  jsr (00009d0c) */
    c->pc = RC_ADDR(0x00005b6eu);
    rc_push32(c, m, RC_ADDR(0x00005b72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009d0cu);
    return;

L_5B72:
    /* 00005b72   4  bra 00005bfe */
    c->pc = RC_ADDR(0x00005b72u);
    goto L_5BFE;

L_5B76:
    /* 00005b76   4  tst.l (fffff0d0,A4) */
    c->pc = RC_ADDR(0x00005b76u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf30u));
    rc_set_nzvc(c, t0, RC_L);

L_5B7A:
    /* 00005b7a   2  beq 00005bb8 */
    c->pc = RC_ADDR(0x00005b7au);
    if (rc_cond(c, 7)) goto L_5BB8;

L_5B7C:
    /* 00005b7c   4  tst.w (ffff8534,A4) */
    c->pc = RC_ADDR(0x00005b7cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7accu));
    rc_set_nzvc(c, t0, RC_W);

L_5B80:
    /* 00005b80   2  bne 00005bb8 */
    c->pc = RC_ADDR(0x00005b80u);
    if (rc_cond(c, 6)) goto L_5BB8;

L_5B82:
    /* 00005b82   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b82u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B84:
    /* 00005b84   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b84u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B86:
    /* 00005b86   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005b86u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5B88:
    /* 00005b88   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005b88u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5B8A:
    /* 00005b8a   4  move.l (fffff0d0,A4),-(A7) */
    c->pc = RC_ADDR(0x00005b8au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5B8E:
    /* 00005b8e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005b8eu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B92:
    /* 00005b92   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005b92u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005b96u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5B96:
    /* 00005b96   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005b96u);
    c->a[7] = (c->a[7] + 0x14u);

L_5B9A:
    /* 00005b9a   6  pea (00040000).l */
    c->pc = RC_ADDR(0x00005b9au);
    rc_push32(c, m, RC_ADDR(0x00040000u));

L_5BA0:
    /* 00005ba0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005ba0u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5BA2:
    /* 00005ba2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005ba2u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5BA4:
    /* 00005ba4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005ba4u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5BA6:
    /* 00005ba6   4  move.l (fffff0d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005ba6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BAA:
    /* 00005baa   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005baau);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5BAE:
    /* 00005bae   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005baeu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005bb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5BB2:
    /* 00005bb2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005bb2u);
    c->a[7] = (c->a[7] + 0x14u);

L_5BB6:
    /* 00005bb6   2  bra 00005bfe */
    c->pc = RC_ADDR(0x00005bb6u);
    goto L_5BFE;

L_5BB8:
    /* 00005bb8   4  tst.l (fffff0c8,A4) */
    c->pc = RC_ADDR(0x00005bb8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    rc_set_nzvc(c, t0, RC_L);

L_5BBC:
    /* 00005bbc   2  beq 00005bde */
    c->pc = RC_ADDR(0x00005bbcu);
    if (rc_cond(c, 7)) goto L_5BDE;

L_5BBE:
    /* 00005bbe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005bbeu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5BC0:
    /* 00005bc0   6  pea (000e0000).l */
    c->pc = RC_ADDR(0x00005bc0u);
    rc_push32(c, m, RC_ADDR(0x000e0000u));

L_5BC6:
    /* 00005bc6   6  pea (006e0000).l */
    c->pc = RC_ADDR(0x00005bc6u);
    rc_push32(c, m, RC_ADDR(0x006e0000u));

L_5BCC:
    /* 00005bcc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005bccu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5BCE:
    /* 00005bce   4  move.l (fffff0c8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005bceu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BD2:
    /* 00005bd2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005bd2u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5BD6:
    /* 00005bd6   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005bd6u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005bdau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5BDA:
    /* 00005bda   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005bdau);
    c->a[7] = (c->a[7] + 0x14u);

L_5BDE:
    /* 00005bde   4  move.l (fffff0dc,A4),D0 */
    c->pc = RC_ADDR(0x00005bdeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf24u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BE2:
    /* 00005be2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00005be2u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5BE4:
    /* 00005be4   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00005be4u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_5BE6:
    /* 00005be6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005be6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BE8:
    /* 00005be8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005be8u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5BEA:
    /* 00005bea   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005beau);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5BEC:
    /* 00005bec   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005becu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5BEE:
    /* 00005bee   4  move.l (fffff0c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005beeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5BF2:
    /* 00005bf2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005bf2u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5BF6:
    /* 00005bf6   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005bf6u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005bfau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5BFA:
    /* 00005bfa   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005bfau);
    c->a[7] = (c->a[7] + 0x14u);

L_5BFE:
    /* 00005bfe   4  tst.w (ffff83dc,A4) */
    c->pc = RC_ADDR(0x00005bfeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c24u));
    rc_set_nzvc(c, t0, RC_W);

L_5C02:
    /* 00005c02   2  beq 00005c3c */
    c->pc = RC_ADDR(0x00005c02u);
    if (rc_cond(c, 7)) goto L_5C3C;

L_5C04:
    /* 00005c04   4  tst.w (ffff8534,A4) */
    c->pc = RC_ADDR(0x00005c04u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7accu));
    rc_set_nzvc(c, t0, RC_W);

L_5C08:
    /* 00005c08   2  bne 00005c3c */
    c->pc = RC_ADDR(0x00005c08u);
    if (rc_cond(c, 6)) goto L_5C3C;

L_5C0A:
    /* 00005c0a   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00005c0au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5C10:
    /* 00005c10   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c10u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C12:
    /* 00005c12   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c12u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C14:
    /* 00005c14   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c14u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C16:
    /* 00005c16   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005c16u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5C18:
    /* 00005c18   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c18u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C1A:
    /* 00005c1a   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00005c1au);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C1E:
    /* 00005c1e   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00005c1eu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00005c22u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_5C22:
    /* 00005c22   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00005c22u);
    c->a[7] = (c->a[7] + 0x14u);

L_5C26:
    /* 00005c26   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005c26u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5C28:
    /* 00005c28   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c28u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C2A:
    /* 00005c2a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c2au);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C2C:
    /* 00005c2c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005c2cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5C30:
    /* 00005c30   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00005c30u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5C34:
    /* 00005c34   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00005c34u);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00005c38u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_5C38:
    /* 00005c38   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00005c38u);
    c->a[7] = (c->a[7] + 0xeu);

L_5C3C:
    /* 00005c3c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005c3cu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5C3E:
    /* 00005c3e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c3eu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C40:
    /* 00005c40   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005c40u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5C42:
    /* 00005c42   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005c42u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5C46:
    /* 00005c46   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00005c46u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5C4A:
    /* 00005c4a   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00005c4au);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00005c4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_5C4E:
    /* 00005c4e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00005c4eu);
    c->a[7] = (c->a[7] + 0xeu);

L_5C52:
    /* 00005c52   4  tst.w (fffff0bc,A4) */
    c->pc = RC_ADDR(0x00005c52u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf44u));
    rc_set_nzvc(c, t0, RC_W);

L_5C56:
    /* 00005c56   2  beq 00005c78 */
    c->pc = RC_ADDR(0x00005c56u);
    if (rc_cond(c, 7)) goto L_5C78;

L_5C58:
    /* 00005c58   6  cmpi.b #32,(fffff0ba,A4) */
    c->pc = RC_ADDR(0x00005c58u);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000032u);

L_5C5E:
    /* 00005c5e   2  bge 00005c78 */
    c->pc = RC_ADDR(0x00005c5eu);
    if (rc_cond(c, 12)) goto L_5C78;

L_5C60:
    /* 00005c60   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00005c60u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5C62:
    /* 00005c62   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00005c62u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C66:
    /* 00005c66   4  lea (ffff8406,A4),A0 */
    c->pc = RC_ADDR(0x00005c66u);
    c->a[0] = (c->a[4] - 0x7bfau);

L_5C6A:
    /* 00005c6a   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00005c6au);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5C6E:
    /* 00005c6e   2  ext.w D1 */
    c->pc = RC_ADDR(0x00005c6eu);
    rc_ext_w(c, 1);

L_5C70:
    /* 00005c70   4  move.w D1,(ffff843e,A4) */
    c->pc = RC_ADDR(0x00005c70u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7bc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C74:
    /* 00005c74   4  jsr (00008cbc) */
    c->pc = RC_ADDR(0x00005c74u);
    rc_push32(c, m, RC_ADDR(0x00005c78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008cbcu);
    return;

L_5C78:
    /* 00005c78   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00005c78u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5C7A:
    /* 00005c7a   4  bra 000058c8 */
    c->pc = RC_ADDR(0x00005c7au);
    rc_tick();
    goto L_58C8;

}
