/* fn_00007934 - 1030 byte(s), 304 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00007934(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007934u): goto L_7934;
    case RC_ADDR(0x00007938u): goto L_7938;
    case RC_ADDR(0x0000793cu): goto L_793C;
    case RC_ADDR(0x00007942u): goto L_7942;
    case RC_ADDR(0x00007946u): goto L_7946;
    case RC_ADDR(0x0000794au): goto L_794A;
    case RC_ADDR(0x0000794eu): goto L_794E;
    case RC_ADDR(0x00007952u): goto L_7952;
    case RC_ADDR(0x00007956u): goto L_7956;
    case RC_ADDR(0x0000795au): goto L_795A;
    case RC_ADDR(0x0000795eu): goto L_795E;
    case RC_ADDR(0x00007960u): goto L_7960;
    case RC_ADDR(0x00007964u): goto L_7964;
    case RC_ADDR(0x00007968u): goto L_7968;
    case RC_ADDR(0x0000796cu): goto L_796C;
    case RC_ADDR(0x0000796eu): goto L_796E;
    case RC_ADDR(0x00007972u): goto L_7972;
    case RC_ADDR(0x00007976u): goto L_7976;
    case RC_ADDR(0x0000797au): goto L_797A;
    case RC_ADDR(0x0000797cu): goto L_797C;
    case RC_ADDR(0x00007980u): goto L_7980;
    case RC_ADDR(0x00007982u): goto L_7982;
    case RC_ADDR(0x00007984u): goto L_7984;
    case RC_ADDR(0x00007986u): goto L_7986;
    case RC_ADDR(0x0000798au): goto L_798A;
    case RC_ADDR(0x0000798eu): goto L_798E;
    case RC_ADDR(0x00007990u): goto L_7990;
    case RC_ADDR(0x00007992u): goto L_7992;
    case RC_ADDR(0x00007994u): goto L_7994;
    case RC_ADDR(0x00007996u): goto L_7996;
    case RC_ADDR(0x0000799au): goto L_799A;
    case RC_ADDR(0x0000799eu): goto L_799E;
    case RC_ADDR(0x000079a2u): goto L_79A2;
    case RC_ADDR(0x000079a4u): goto L_79A4;
    case RC_ADDR(0x000079a6u): goto L_79A6;
    case RC_ADDR(0x000079a8u): goto L_79A8;
    case RC_ADDR(0x000079acu): goto L_79AC;
    case RC_ADDR(0x000079b0u): goto L_79B0;
    case RC_ADDR(0x000079b2u): goto L_79B2;
    case RC_ADDR(0x000079b4u): goto L_79B4;
    case RC_ADDR(0x000079b6u): goto L_79B6;
    case RC_ADDR(0x000079b8u): goto L_79B8;
    case RC_ADDR(0x000079bau): goto L_79BA;
    case RC_ADDR(0x000079beu): goto L_79BE;
    case RC_ADDR(0x000079c2u): goto L_79C2;
    case RC_ADDR(0x000079c6u): goto L_79C6;
    case RC_ADDR(0x000079c8u): goto L_79C8;
    case RC_ADDR(0x000079cau): goto L_79CA;
    case RC_ADDR(0x000079ccu): goto L_79CC;
    case RC_ADDR(0x000079d0u): goto L_79D0;
    case RC_ADDR(0x000079d4u): goto L_79D4;
    case RC_ADDR(0x000079d6u): goto L_79D6;
    case RC_ADDR(0x000079d8u): goto L_79D8;
    case RC_ADDR(0x000079dcu): goto L_79DC;
    case RC_ADDR(0x000079deu): goto L_79DE;
    case RC_ADDR(0x000079e0u): goto L_79E0;
    case RC_ADDR(0x000079e2u): goto L_79E2;
    case RC_ADDR(0x000079e4u): goto L_79E4;
    case RC_ADDR(0x000079e8u): goto L_79E8;
    case RC_ADDR(0x000079ecu): goto L_79EC;
    case RC_ADDR(0x000079f0u): goto L_79F0;
    case RC_ADDR(0x000079f2u): goto L_79F2;
    case RC_ADDR(0x000079f4u): goto L_79F4;
    case RC_ADDR(0x000079f6u): goto L_79F6;
    case RC_ADDR(0x000079fau): goto L_79FA;
    case RC_ADDR(0x000079feu): goto L_79FE;
    case RC_ADDR(0x00007a00u): goto L_7A00;
    case RC_ADDR(0x00007a02u): goto L_7A02;
    case RC_ADDR(0x00007a04u): goto L_7A04;
    case RC_ADDR(0x00007a06u): goto L_7A06;
    case RC_ADDR(0x00007a0cu): goto L_7A0C;
    case RC_ADDR(0x00007a0eu): goto L_7A0E;
    case RC_ADDR(0x00007a10u): goto L_7A10;
    case RC_ADDR(0x00007a12u): goto L_7A12;
    case RC_ADDR(0x00007a14u): goto L_7A14;
    case RC_ADDR(0x00007a16u): goto L_7A16;
    case RC_ADDR(0x00007a1au): goto L_7A1A;
    case RC_ADDR(0x00007a1eu): goto L_7A1E;
    case RC_ADDR(0x00007a20u): goto L_7A20;
    case RC_ADDR(0x00007a22u): goto L_7A22;
    case RC_ADDR(0x00007a26u): goto L_7A26;
    case RC_ADDR(0x00007a2au): goto L_7A2A;
    case RC_ADDR(0x00007a2eu): goto L_7A2E;
    case RC_ADDR(0x00007a34u): goto L_7A34;
    case RC_ADDR(0x00007a36u): goto L_7A36;
    case RC_ADDR(0x00007a3au): goto L_7A3A;
    case RC_ADDR(0x00007a3eu): goto L_7A3E;
    case RC_ADDR(0x00007a42u): goto L_7A42;
    case RC_ADDR(0x00007a44u): goto L_7A44;
    case RC_ADDR(0x00007a48u): goto L_7A48;
    case RC_ADDR(0x00007a4cu): goto L_7A4C;
    case RC_ADDR(0x00007a50u): goto L_7A50;
    case RC_ADDR(0x00007a52u): goto L_7A52;
    case RC_ADDR(0x00007a58u): goto L_7A58;
    case RC_ADDR(0x00007a5au): goto L_7A5A;
    case RC_ADDR(0x00007a5cu): goto L_7A5C;
    case RC_ADDR(0x00007a60u): goto L_7A60;
    case RC_ADDR(0x00007a64u): goto L_7A64;
    case RC_ADDR(0x00007a66u): goto L_7A66;
    case RC_ADDR(0x00007a68u): goto L_7A68;
    case RC_ADDR(0x00007a6au): goto L_7A6A;
    case RC_ADDR(0x00007a6cu): goto L_7A6C;
    case RC_ADDR(0x00007a6eu): goto L_7A6E;
    case RC_ADDR(0x00007a72u): goto L_7A72;
    case RC_ADDR(0x00007a76u): goto L_7A76;
    case RC_ADDR(0x00007a78u): goto L_7A78;
    case RC_ADDR(0x00007a7au): goto L_7A7A;
    case RC_ADDR(0x00007a7eu): goto L_7A7E;
    case RC_ADDR(0x00007a82u): goto L_7A82;
    case RC_ADDR(0x00007a86u): goto L_7A86;
    case RC_ADDR(0x00007a88u): goto L_7A88;
    case RC_ADDR(0x00007a8au): goto L_7A8A;
    case RC_ADDR(0x00007a8cu): goto L_7A8C;
    case RC_ADDR(0x00007a90u): goto L_7A90;
    case RC_ADDR(0x00007a94u): goto L_7A94;
    case RC_ADDR(0x00007a98u): goto L_7A98;
    case RC_ADDR(0x00007a9cu): goto L_7A9C;
    case RC_ADDR(0x00007a9eu): goto L_7A9E;
    case RC_ADDR(0x00007aa0u): goto L_7AA0;
    case RC_ADDR(0x00007aa2u): goto L_7AA2;
    case RC_ADDR(0x00007aa4u): goto L_7AA4;
    case RC_ADDR(0x00007aa6u): goto L_7AA6;
    case RC_ADDR(0x00007aaau): goto L_7AAA;
    case RC_ADDR(0x00007aacu): goto L_7AAC;
    case RC_ADDR(0x00007aaeu): goto L_7AAE;
    case RC_ADDR(0x00007ab2u): goto L_7AB2;
    case RC_ADDR(0x00007ab6u): goto L_7AB6;
    case RC_ADDR(0x00007ab8u): goto L_7AB8;
    case RC_ADDR(0x00007abau): goto L_7ABA;
    case RC_ADDR(0x00007abeu): goto L_7ABE;
    case RC_ADDR(0x00007ac2u): goto L_7AC2;
    case RC_ADDR(0x00007ac6u): goto L_7AC6;
    case RC_ADDR(0x00007acau): goto L_7ACA;
    case RC_ADDR(0x00007accu): goto L_7ACC;
    case RC_ADDR(0x00007aceu): goto L_7ACE;
    case RC_ADDR(0x00007ad0u): goto L_7AD0;
    case RC_ADDR(0x00007ad4u): goto L_7AD4;
    case RC_ADDR(0x00007ad8u): goto L_7AD8;
    case RC_ADDR(0x00007adcu): goto L_7ADC;
    case RC_ADDR(0x00007adeu): goto L_7ADE;
    case RC_ADDR(0x00007ae0u): goto L_7AE0;
    case RC_ADDR(0x00007ae2u): goto L_7AE2;
    case RC_ADDR(0x00007ae4u): goto L_7AE4;
    case RC_ADDR(0x00007ae6u): goto L_7AE6;
    case RC_ADDR(0x00007aeau): goto L_7AEA;
    case RC_ADDR(0x00007aecu): goto L_7AEC;
    case RC_ADDR(0x00007aeeu): goto L_7AEE;
    case RC_ADDR(0x00007af2u): goto L_7AF2;
    case RC_ADDR(0x00007af6u): goto L_7AF6;
    case RC_ADDR(0x00007af8u): goto L_7AF8;
    case RC_ADDR(0x00007afau): goto L_7AFA;
    case RC_ADDR(0x00007afeu): goto L_7AFE;
    case RC_ADDR(0x00007b02u): goto L_7B02;
    case RC_ADDR(0x00007b06u): goto L_7B06;
    case RC_ADDR(0x00007b0au): goto L_7B0A;
    case RC_ADDR(0x00007b0cu): goto L_7B0C;
    case RC_ADDR(0x00007b0eu): goto L_7B0E;
    case RC_ADDR(0x00007b10u): goto L_7B10;
    case RC_ADDR(0x00007b14u): goto L_7B14;
    case RC_ADDR(0x00007b18u): goto L_7B18;
    case RC_ADDR(0x00007b1au): goto L_7B1A;
    case RC_ADDR(0x00007b20u): goto L_7B20;
    case RC_ADDR(0x00007b24u): goto L_7B24;
    case RC_ADDR(0x00007b28u): goto L_7B28;
    case RC_ADDR(0x00007b2cu): goto L_7B2C;
    case RC_ADDR(0x00007b2eu): goto L_7B2E;
    case RC_ADDR(0x00007b32u): goto L_7B32;
    case RC_ADDR(0x00007b36u): goto L_7B36;
    case RC_ADDR(0x00007b3au): goto L_7B3A;
    case RC_ADDR(0x00007b40u): goto L_7B40;
    case RC_ADDR(0x00007b44u): goto L_7B44;
    case RC_ADDR(0x00007b46u): goto L_7B46;
    case RC_ADDR(0x00007b48u): goto L_7B48;
    case RC_ADDR(0x00007b4cu): goto L_7B4C;
    case RC_ADDR(0x00007b50u): goto L_7B50;
    case RC_ADDR(0x00007b54u): goto L_7B54;
    case RC_ADDR(0x00007b58u): goto L_7B58;
    case RC_ADDR(0x00007b5eu): goto L_7B5E;
    case RC_ADDR(0x00007b64u): goto L_7B64;
    case RC_ADDR(0x00007b6au): goto L_7B6A;
    case RC_ADDR(0x00007b6eu): goto L_7B6E;
    case RC_ADDR(0x00007b72u): goto L_7B72;
    case RC_ADDR(0x00007b74u): goto L_7B74;
    case RC_ADDR(0x00007b78u): goto L_7B78;
    case RC_ADDR(0x00007b7cu): goto L_7B7C;
    case RC_ADDR(0x00007b7eu): goto L_7B7E;
    case RC_ADDR(0x00007b80u): goto L_7B80;
    case RC_ADDR(0x00007b84u): goto L_7B84;
    case RC_ADDR(0x00007b8au): goto L_7B8A;
    case RC_ADDR(0x00007b8cu): goto L_7B8C;
    case RC_ADDR(0x00007b90u): goto L_7B90;
    case RC_ADDR(0x00007b96u): goto L_7B96;
    case RC_ADDR(0x00007b9au): goto L_7B9A;
    case RC_ADDR(0x00007b9eu): goto L_7B9E;
    case RC_ADDR(0x00007ba4u): goto L_7BA4;
    case RC_ADDR(0x00007baau): goto L_7BAA;
    case RC_ADDR(0x00007bacu): goto L_7BAC;
    case RC_ADDR(0x00007bb0u): goto L_7BB0;
    case RC_ADDR(0x00007bb2u): goto L_7BB2;
    case RC_ADDR(0x00007bb4u): goto L_7BB4;
    case RC_ADDR(0x00007bb8u): goto L_7BB8;
    case RC_ADDR(0x00007bbcu): goto L_7BBC;
    case RC_ADDR(0x00007bc0u): goto L_7BC0;
    case RC_ADDR(0x00007bc4u): goto L_7BC4;
    case RC_ADDR(0x00007bc8u): goto L_7BC8;
    case RC_ADDR(0x00007bccu): goto L_7BCC;
    case RC_ADDR(0x00007bd0u): goto L_7BD0;
    case RC_ADDR(0x00007bd6u): goto L_7BD6;
    case RC_ADDR(0x00007bdcu): goto L_7BDC;
    case RC_ADDR(0x00007be0u): goto L_7BE0;
    case RC_ADDR(0x00007be4u): goto L_7BE4;
    case RC_ADDR(0x00007be6u): goto L_7BE6;
    case RC_ADDR(0x00007be8u): goto L_7BE8;
    case RC_ADDR(0x00007beau): goto L_7BEA;
    case RC_ADDR(0x00007beeu): goto L_7BEE;
    case RC_ADDR(0x00007bf2u): goto L_7BF2;
    case RC_ADDR(0x00007bf4u): goto L_7BF4;
    case RC_ADDR(0x00007bfau): goto L_7BFA;
    case RC_ADDR(0x00007bfcu): goto L_7BFC;
    case RC_ADDR(0x00007c02u): goto L_7C02;
    case RC_ADDR(0x00007c08u): goto L_7C08;
    case RC_ADDR(0x00007c0cu): goto L_7C0C;
    case RC_ADDR(0x00007c10u): goto L_7C10;
    case RC_ADDR(0x00007c16u): goto L_7C16;
    case RC_ADDR(0x00007c18u): goto L_7C18;
    case RC_ADDR(0x00007c1cu): goto L_7C1C;
    case RC_ADDR(0x00007c20u): goto L_7C20;
    case RC_ADDR(0x00007c24u): goto L_7C24;
    case RC_ADDR(0x00007c28u): goto L_7C28;
    case RC_ADDR(0x00007c2cu): goto L_7C2C;
    case RC_ADDR(0x00007c30u): goto L_7C30;
    case RC_ADDR(0x00007c34u): goto L_7C34;
    case RC_ADDR(0x00007c38u): goto L_7C38;
    case RC_ADDR(0x00007c3cu): goto L_7C3C;
    case RC_ADDR(0x00007c44u): goto L_7C44;
    case RC_ADDR(0x00007c48u): goto L_7C48;
    case RC_ADDR(0x00007c4eu): goto L_7C4E;
    case RC_ADDR(0x00007c50u): goto L_7C50;
    case RC_ADDR(0x00007c54u): goto L_7C54;
    case RC_ADDR(0x00007c56u): goto L_7C56;
    case RC_ADDR(0x00007c58u): goto L_7C58;
    case RC_ADDR(0x00007c5au): goto L_7C5A;
    case RC_ADDR(0x00007c5eu): goto L_7C5E;
    case RC_ADDR(0x00007c62u): goto L_7C62;
    case RC_ADDR(0x00007c64u): goto L_7C64;
    case RC_ADDR(0x00007c66u): goto L_7C66;
    case RC_ADDR(0x00007c6au): goto L_7C6A;
    case RC_ADDR(0x00007c6eu): goto L_7C6E;
    case RC_ADDR(0x00007c72u): goto L_7C72;
    case RC_ADDR(0x00007c76u): goto L_7C76;
    case RC_ADDR(0x00007c7au): goto L_7C7A;
    case RC_ADDR(0x00007c7eu): goto L_7C7E;
    case RC_ADDR(0x00007c82u): goto L_7C82;
    case RC_ADDR(0x00007c86u): goto L_7C86;
    case RC_ADDR(0x00007c8au): goto L_7C8A;
    case RC_ADDR(0x00007c8eu): goto L_7C8E;
    case RC_ADDR(0x00007c94u): goto L_7C94;
    case RC_ADDR(0x00007c98u): goto L_7C98;
    case RC_ADDR(0x00007c9cu): goto L_7C9C;
    case RC_ADDR(0x00007ca0u): goto L_7CA0;
    case RC_ADDR(0x00007ca4u): goto L_7CA4;
    case RC_ADDR(0x00007ca8u): goto L_7CA8;
    case RC_ADDR(0x00007cacu): goto L_7CAC;
    case RC_ADDR(0x00007cb2u): goto L_7CB2;
    case RC_ADDR(0x00007cb4u): goto L_7CB4;
    case RC_ADDR(0x00007cb6u): goto L_7CB6;
    case RC_ADDR(0x00007cbau): goto L_7CBA;
    case RC_ADDR(0x00007cbeu): goto L_7CBE;
    case RC_ADDR(0x00007cc0u): goto L_7CC0;
    case RC_ADDR(0x00007cc2u): goto L_7CC2;
    case RC_ADDR(0x00007cc6u): goto L_7CC6;
    case RC_ADDR(0x00007ccau): goto L_7CCA;
    case RC_ADDR(0x00007cccu): goto L_7CCC;
    case RC_ADDR(0x00007cd0u): goto L_7CD0;
    case RC_ADDR(0x00007cd4u): goto L_7CD4;
    case RC_ADDR(0x00007cd8u): goto L_7CD8;
    case RC_ADDR(0x00007cdau): goto L_7CDA;
    case RC_ADDR(0x00007cdeu): goto L_7CDE;
    case RC_ADDR(0x00007ce2u): goto L_7CE2;
    case RC_ADDR(0x00007ce4u): goto L_7CE4;
    case RC_ADDR(0x00007ce8u): goto L_7CE8;
    case RC_ADDR(0x00007ceeu): goto L_7CEE;
    case RC_ADDR(0x00007cf0u): goto L_7CF0;
    case RC_ADDR(0x00007cf6u): goto L_7CF6;
    case RC_ADDR(0x00007cf8u): goto L_7CF8;
    case RC_ADDR(0x00007cfcu): goto L_7CFC;
    case RC_ADDR(0x00007cfeu): goto L_7CFE;
    case RC_ADDR(0x00007d00u): goto L_7D00;
    case RC_ADDR(0x00007d04u): goto L_7D04;
    case RC_ADDR(0x00007d08u): goto L_7D08;
    case RC_ADDR(0x00007d0cu): goto L_7D0C;
    case RC_ADDR(0x00007d10u): goto L_7D10;
    case RC_ADDR(0x00007d12u): goto L_7D12;
    case RC_ADDR(0x00007d16u): goto L_7D16;
    case RC_ADDR(0x00007d1au): goto L_7D1A;
    case RC_ADDR(0x00007d1eu): goto L_7D1E;
    case RC_ADDR(0x00007d20u): goto L_7D20;
    case RC_ADDR(0x00007d24u): goto L_7D24;
    case RC_ADDR(0x00007d28u): goto L_7D28;
    case RC_ADDR(0x00007d2cu): goto L_7D2C;
    case RC_ADDR(0x00007d2eu): goto L_7D2E;
    case RC_ADDR(0x00007d30u): goto L_7D30;
    case RC_ADDR(0x00007d34u): goto L_7D34;
    case RC_ADDR(0x00007d36u): goto L_7D36;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7934:
    /* 00007934   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00007934u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_7938:
    /* 00007938   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00007938u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_793C:
    /* 0000793c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000793cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7942:
    /* 00007942   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00007942u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00007946u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_7946:
    /* 00007946   4  tst.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x00007946u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c0u));
    rc_set_nzvc(c, t0, RC_W);

L_794A:
    /* 0000794a   4  bne 00007c38 */
    c->pc = RC_ADDR(0x0000794au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7C38;

L_794E:
    /* 0000794e   4  clr.w (26c,A4) */
    c->pc = RC_ADDR(0x0000794eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7952:
    /* 00007952   4  clr.w (fffffeca,A4) */
    c->pc = RC_ADDR(0x00007952u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x136u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7956:
    /* 00007956   4  pea (00007d3a) */
    c->pc = RC_ADDR(0x00007956u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d3au));

L_795A:
    /* 0000795a   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x0000795au);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0000795eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_795E:
    /* 0000795e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000795eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7960:
    /* 00007960   4  move.l D0,(80,A4) */
    c->pc = RC_ADDR(0x00007960u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x80u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7964:
    /* 00007964   4  pea (00007d49) */
    c->pc = RC_ADDR(0x00007964u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d49u));

L_7968:
    /* 00007968   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00007968u);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0000796cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_796C:
    /* 0000796c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000796cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_796E:
    /* 0000796e   4  move.l D0,(84,A4) */
    c->pc = RC_ADDR(0x0000796eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x84u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7972:
    /* 00007972   4  pea (00007d59) */
    c->pc = RC_ADDR(0x00007972u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d59u));

L_7976:
    /* 00007976   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00007976u);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000797au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_797A:
    /* 0000797a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000797au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_797C:
    /* 0000797c   4  move.l D0,(7c,A4) */
    c->pc = RC_ADDR(0x0000797cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x7cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7980:
    /* 00007980   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00007980u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_7982:
    /* 00007982   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007982u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7984:
    /* 00007984   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007984u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7986:
    /* 00007986   4  lea (ffff8e3c,A4),A0 */
    c->pc = RC_ADDR(0x00007986u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x71c4u);

L_798A:
    /* 0000798a   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000798au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_798E:
    /* 0000798e   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000798eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_7990:
    /* 00007990   2  beq 000079b4 */
    c->pc = RC_ADDR(0x00007990u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_79B4;

L_7992:
    /* 00007992   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007992u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7994:
    /* 00007994   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007994u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7996:
    /* 00007996   4  lea (ffff8e3c,A4),A0 */
    c->pc = RC_ADDR(0x00007996u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x71c4u);

L_799A:
    /* 0000799a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000799au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_799E:
    /* 0000799e   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0000799eu);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x000079a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_79A2:
    /* 000079a2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000079a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_79A4:
    /* 000079a4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000079a4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79A6:
    /* 000079a6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000079a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_79A8:
    /* 000079a8   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x000079a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_79AC:
    /* 000079ac   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000079acu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79B0:
    /* 000079b0   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x000079b0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_79B2:
    /* 000079b2   2  bra 00007982 */
    c->pc = RC_ADDR(0x000079b2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7982;

L_79B4:
    /* 000079b4   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x000079b4u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_79B6:
    /* 000079b6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000079b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79B8:
    /* 000079b8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000079b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_79BA:
    /* 000079ba   4  lea (ffff8e78,A4),A0 */
    c->pc = RC_ADDR(0x000079bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7188u);

L_79BE:
    /* 000079be   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000079beu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_79C2:
    /* 000079c2   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x000079c2u);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x000079c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_79C6:
    /* 000079c6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000079c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_79C8:
    /* 000079c8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000079c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79CA:
    /* 000079ca   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000079cau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_79CC:
    /* 000079cc   4  lea (13a,A4),A0 */
    c->pc = RC_ADDR(0x000079ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13au);

L_79D0:
    /* 000079d0   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000079d0u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79D4:
    /* 000079d4   2  bne 000079e0 */
    c->pc = RC_ADDR(0x000079d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_79E0;

L_79D6:
    /* 000079d6   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000079d6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_79D8:
    /* 000079d8   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x000079d8u);
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
    c->a[7] = t3;

L_79DC:
    /* 000079dc   2  unlk A5 */
    c->pc = RC_ADDR(0x000079dcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_79DE:
    /* 000079de   2  rts */
    c->pc = RC_ADDR(0x000079deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_79E0:
    /* 000079e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000079e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79E2:
    /* 000079e2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000079e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_79E4:
    /* 000079e4   4  lea (ffff8f04,A4),A0 */
    c->pc = RC_ADDR(0x000079e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x70fcu);

L_79E8:
    /* 000079e8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000079e8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_79EC:
    /* 000079ec   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x000079ecu);
    rc_step(c, m, 18);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x000079f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_79F0:
    /* 000079f0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000079f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_79F2:
    /* 000079f2   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000079f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_79F4:
    /* 000079f4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000079f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_79F6:
    /* 000079f6   4  lea (1c6,A4),A0 */
    c->pc = RC_ADDR(0x000079f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c6u);

L_79FA:
    /* 000079fa   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000079fau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_79FE:
    /* 000079fe   2  bne 00007a04 */
    c->pc = RC_ADDR(0x000079feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7A04;

L_7A00:
    /* 00007a00   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007a00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7A02:
    /* 00007a02   2  bra 000079d8 */
    c->pc = RC_ADDR(0x00007a02u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_79D8;

L_7A04:
    /* 00007a04   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00007a04u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_7A06:
    /* 00007a06   6  cmp.l #23,D4 */
    c->pc = RC_ADDR(0x00007a06u);
    rc_step(c, m, 14);
    t0 = 0x00000023u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_7A0C:
    /* 00007a0c   2  blt 000079b6 */
    c->pc = RC_ADDR(0x00007a0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_79B6; }

L_7A0E:
    /* 00007a0e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a0eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A10:
    /* 00007a10   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a10u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A12:
    /* 00007a12   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a12u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A14:
    /* 00007a14   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a14u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A16:
    /* 00007a16   4  pea (00007d62) */
    c->pc = RC_ADDR(0x00007a16u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d62u));

L_7A1A:
    /* 00007a1a   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00007a1au);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00007a1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_7A1E:
    /* 00007a1e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007a1eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7A20:
    /* 00007a20   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007a20u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A22:
    /* 00007a22   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007a22u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A26:
    /* 00007a26   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x00007a26u);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00007a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_7A2A:
    /* 00007a2a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007a2au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7A2E:
    /* 00007a2e   6  cmpi.w #2,(fffff100,A4) */
    c->pc = RC_ADDR(0x00007a2eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_7A34:
    /* 00007a34   2  bne 00007a86 */
    c->pc = RC_ADDR(0x00007a34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7A86;

L_7A36:
    /* 00007a36   4  pea (00007d66) */
    c->pc = RC_ADDR(0x00007a36u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d66u));

L_7A3A:
    /* 00007a3a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007a3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A3E:
    /* 00007a3e   4  jsr (00002218) */
    c->pc = RC_ADDR(0x00007a3eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007a42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002218u);
    return;

L_7A42:
    /* 00007a42   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007a42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7A44:
    /* 00007a44   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007a44u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A48:
    /* 00007a48   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007a48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A4C:
    /* 00007a4c   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00007a4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007a50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_7A50:
    /* 00007a50   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00007a50u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_7A52:
    /* 00007a52   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00007a52u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A58:
    /* 00007a58   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a58u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A5A:
    /* 00007a5a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007a5au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7A5C:
    /* 00007a5c   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00007a5cu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A60:
    /* 00007a60   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007a60u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007a64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7A64:
    /* 00007a64   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007a64u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7A66:
    /* 00007a66   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a66u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A68:
    /* 00007a68   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a68u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A6A:
    /* 00007a6a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a6au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A6C:
    /* 00007a6c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007a6cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A6E:
    /* 00007a6e   4  pea (00007d8b) */
    c->pc = RC_ADDR(0x00007a6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d8bu));

L_7A72:
    /* 00007a72   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00007a72u);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00007a76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_7A76:
    /* 00007a76   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007a76u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7A78:
    /* 00007a78   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007a78u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A7A:
    /* 00007a7a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007a7au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A7E:
    /* 00007a7e   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x00007a7eu);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00007a82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_7A82:
    /* 00007a82   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007a82u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7A86:
    /* 00007a86   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00007a86u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_7A88:
    /* 00007a88   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007a88u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7A8A:
    /* 00007a8a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007a8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7A8C:
    /* 00007a8c   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x00007a8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x24u);

L_7A90:
    /* 00007a90   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007a90u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_7A94:
    /* 00007a94   4  beq 00007b18 */
    c->pc = RC_ADDR(0x00007a94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7B18;

L_7A98:
    /* 00007a98   4  move.w (22,A4),D0 */
    c->pc = RC_ADDR(0x00007a98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7A9C:
    /* 00007a9c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007a9cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7A9E:
    /* 00007a9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007a9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7AA0:
    /* 00007aa0   2  moveq #1e,D1 */
    c->pc = RC_ADDR(0x00007aa0u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000001eu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_7AA2:
    /* 00007aa2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007aa2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AA4:
    /* 00007aa4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007aa4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AA6:
    /* 00007aa6   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00007aa6u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x00007aaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d22u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_7AAA:
    /* 00007aaa   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00007aaau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AAC:
    /* 00007aac   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x00007aacu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_7AAE:
    /* 00007aae   4  lea (ffff8b58,A4),A0 */
    c->pc = RC_ADDR(0x00007aaeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x74a8u);

L_7AB2:
    /* 00007ab2   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00007ab2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AB6:
    /* 00007ab6   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00007ab6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AB8:
    /* 00007ab8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00007ab8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_7ABA:
    /* 00007aba   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x00007abau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x24u);

L_7ABE:
    /* 00007abe   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00007abeu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_7AC2:
    /* 00007ac2   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00007ac2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_7AC6:
    /* 00007ac6   4  sub.w (8,A0),D0 */
    c->pc = RC_ADDR(0x00007ac6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7ACA:
    /* 00007aca   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007acau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7ACC:
    /* 00007acc   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00007accu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7ACE:
    /* 00007ace   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00007aceu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_7AD0:
    /* 00007ad0   4  lea (40,A4),A0 */
    c->pc = RC_ADDR(0x00007ad0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x40u);

L_7AD4:
    /* 00007ad4   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00007ad4u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AD8:
    /* 00007ad8   4  move.w (22,A4),D0 */
    c->pc = RC_ADDR(0x00007ad8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7ADC:
    /* 00007adc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007adcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7ADE:
    /* 00007ade   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007adeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7AE0:
    /* 00007ae0   2  moveq #1e,D1 */
    c->pc = RC_ADDR(0x00007ae0u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000001eu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_7AE2:
    /* 00007ae2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007ae2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AE4:
    /* 00007ae4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007ae4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AE6:
    /* 00007ae6   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00007ae6u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x00007aeau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d22u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_7AEA:
    /* 00007aea   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00007aeau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AEC:
    /* 00007aec   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x00007aecu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_7AEE:
    /* 00007aee   4  lea (ffff8c2a,A4),A0 */
    c->pc = RC_ADDR(0x00007aeeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x73d6u);

L_7AF2:
    /* 00007af2   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00007af2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AF6:
    /* 00007af6   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00007af6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AF8:
    /* 00007af8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00007af8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_7AFA:
    /* 00007afa   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x00007afau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x24u);

L_7AFE:
    /* 00007afe   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00007afeu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_7B02:
    /* 00007b02   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00007b02u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_7B06:
    /* 00007b06   4  sub.w (a,A0),D0 */
    c->pc = RC_ADDR(0x00007b06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7B0A:
    /* 00007b0a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007b0au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7B0C:
    /* 00007b0c   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00007b0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7B0E:
    /* 00007b0e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00007b0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_7B10:
    /* 00007b10   4  lea (5c,A4),A0 */
    c->pc = RC_ADDR(0x00007b10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x5cu);

L_7B14:
    /* 00007b14   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00007b14u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7B18:
    /* 00007b18   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00007b18u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_7B1A:
    /* 00007b1a   6  cmp.l #7,D4 */
    c->pc = RC_ADDR(0x00007b1au);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_7B20:
    /* 00007b20   4  blt 00007a88 */
    c->pc = RC_ADDR(0x00007b20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7A88; }

L_7B24:
    /* 00007b24   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00007b24u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B28:
    /* 00007b28   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00007b28u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00007b2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_7B2C:
    /* 00007b2c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007b2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7B2E:
    /* 00007b2e   4  move.w D0,(f6,A4) */
    c->pc = RC_ADDR(0x00007b2eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xf6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B32:
    /* 00007b32   4  clr.w (f8,A4) */
    c->pc = RC_ADDR(0x00007b32u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B36:
    /* 00007b36   4  clr.w (c2,A4) */
    c->pc = RC_ADDR(0x00007b36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B3A:
    /* 00007b3a   6  move.w #154,(c4,A4) */
    c->pc = RC_ADDR(0x00007b3au);
    rc_step(c, m, 16);
    t0 = 0x00000154u;
    rc_wr16(c, m, (c->a[4] + 0xc4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B40:
    /* 00007b40   4  move.w (22,A4),D0 */
    c->pc = RC_ADDR(0x00007b40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B44:
    /* 00007b44   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007b44u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7B46:
    /* 00007b46   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007b46u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7B48:
    /* 00007b48   4  lea (ffff8cfc,A4),A0 */
    c->pc = RC_ADDR(0x00007b48u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7304u);

L_7B4C:
    /* 00007b4c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00007b4cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B50:
    /* 00007b50   4  sub.w #7e,D1 */
    c->pc = RC_ADDR(0x00007b50u);
    rc_step(c, m, 10);
    t0 = 0x0000007eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_7B54:
    /* 00007b54   4  move.w D1,(d4,A4) */
    c->pc = RC_ADDR(0x00007b54u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B58:
    /* 00007b58   6  move.w #6c,(e6,A4) */
    c->pc = RC_ADDR(0x00007b58u);
    rc_step(c, m, 16);
    t0 = 0x0000006cu;
    rc_wr16(c, m, (c->a[4] + 0xe6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B5E:
    /* 00007b5e   6  move.w #6c,(e4,A4) */
    c->pc = RC_ADDR(0x00007b5eu);
    rc_step(c, m, 16);
    t0 = 0x0000006cu;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B64:
    /* 00007b64   6  move.w #2,(88,A4) */
    c->pc = RC_ADDR(0x00007b64u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B6A:
    /* 00007b6a   4  clr.w (256,A4) */
    c->pc = RC_ADDR(0x00007b6au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x256u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B6E:
    /* 00007b6e   4  tst.w (c0,A4) */
    c->pc = RC_ADDR(0x00007b6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc0u));
    rc_set_nzvc(c, t0, RC_W);

L_7B72:
    /* 00007b72   2  bne 00007b84 */
    c->pc = RC_ADDR(0x00007b72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7B84;

L_7B74:
    /* 00007b74   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007b74u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B78:
    /* 00007b78   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00007b78u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00007b7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_7B7C:
    /* 00007b7c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007b7cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7B7E:
    /* 00007b7e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00007b7eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7B80:
    /* 00007b80   4  move.w D0,(c0,A4) */
    c->pc = RC_ADDR(0x00007b80u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xc0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B84:
    /* 00007b84   6  cmpi.w #1,(be,A4) */
    c->pc = RC_ADDR(0x00007b84u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xbeu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_7B8A:
    /* 00007b8a   2  bne 00007baa */
    c->pc = RC_ADDR(0x00007b8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7BAA;

L_7B8C:
    /* 00007b8c   4  clr.w (26c,A4) */
    c->pc = RC_ADDR(0x00007b8cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B90:
    /* 00007b90   6  move.w #c,(c2,A4) */
    c->pc = RC_ADDR(0x00007b90u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0xc2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B96:
    /* 00007b96   4  clr.w (c4,A4) */
    c->pc = RC_ADDR(0x00007b96u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B9A:
    /* 00007b9a   4  clr.w (d4,A4) */
    c->pc = RC_ADDR(0x00007b9au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7B9E:
    /* 00007b9e   6  move.w #1e,(e4,A4) */
    c->pc = RC_ADDR(0x00007b9eu);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[4] + 0xe4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BA4:
    /* 00007ba4   6  move.w #6,(88,A4) */
    c->pc = RC_ADDR(0x00007ba4u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BAA:
    /* 00007baa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007baau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BAC:
    /* 00007bac   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007bacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BB0:
    /* 00007bb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007bb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7BB2:
    /* 00007bb2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007bb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7BB4:
    /* 00007bb4   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00007bb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_7BB8:
    /* 00007bb8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007bb8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BBC:
    /* 00007bbc   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x00007bbcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_7BC0:
    /* 00007bc0   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00007bc0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BC4:
    /* 00007bc4   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x00007bc4u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x00007bc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_7BC8:
    /* 00007bc8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00007bc8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7BCC:
    /* 00007bcc   4  move.l D0,(b0,A4) */
    c->pc = RC_ADDR(0x00007bccu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xb0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BD0:
    /* 00007bd0   6  move.w #a0,(8a,A4) */
    c->pc = RC_ADDR(0x00007bd0u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] + 0x8au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BD6:
    /* 00007bd6   6  move.w #78,(8c,A4) */
    c->pc = RC_ADDR(0x00007bd6u);
    rc_step(c, m, 16);
    t0 = 0x00000078u;
    rc_wr16(c, m, (c->a[4] + 0x8cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7BDC:
    /* 00007bdc   4  clr.w (8e,A4) */
    c->pc = RC_ADDR(0x00007bdcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BE0:
    /* 00007be0   4  clr.w (90,A4) */
    c->pc = RC_ADDR(0x00007be0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x90u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BE4:
    /* 00007be4   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00007be4u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_7BE6:
    /* 00007be6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00007be6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7BE8:
    /* 00007be8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007be8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7BEA:
    /* 00007bea   4  lea (92,A4),A0 */
    c->pc = RC_ADDR(0x00007beau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x92u);

L_7BEE:
    /* 00007bee   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00007beeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7BF2:
    /* 00007bf2   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00007bf2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_7BF4:
    /* 00007bf4   6  cmp.l #3,D4 */
    c->pc = RC_ADDR(0x00007bf4u);
    rc_step(c, m, 14);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_7BFA:
    /* 00007bfa   2  blt 00007be6 */
    c->pc = RC_ADDR(0x00007bfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7BE6; }

L_7BFC:
    /* 00007bfc   6  move.w #1,(254,A4) */
    c->pc = RC_ADDR(0x00007bfcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x254u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C02:
    /* 00007c02   6  move.w #1,(252,A4) */
    c->pc = RC_ADDR(0x00007c02u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x252u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C08:
    /* 00007c08   4  clr.w (268,A4) */
    c->pc = RC_ADDR(0x00007c08u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x268u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C0C:
    /* 00007c0c   4  clr.w (26a,A4) */
    c->pc = RC_ADDR(0x00007c0cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C10:
    /* 00007c10   6  move.w #1,(fffffe40,A4) */
    c->pc = RC_ADDR(0x00007c10u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C16:
    /* 00007c16   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007c16u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C18:
    /* 00007c18   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007c18u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C1C:
    /* 00007c1c   4  move.l (27a,A4),-(A7) */
    c->pc = RC_ADDR(0x00007c1cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x27au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C20:
    /* 00007c20   4  move.w (276,A4),-(A7) */
    c->pc = RC_ADDR(0x00007c20u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x276u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C24:
    /* 00007c24   4  move.l (26e,A4),-(A7) */
    c->pc = RC_ADDR(0x00007c24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C28:
    /* 00007c28   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00007c28u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00007c2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_7C2C:
    /* 00007c2c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007c2cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7C30:
    /* 00007c30   4  clr.w (266,A4) */
    c->pc = RC_ADDR(0x00007c30u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x266u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C34:
    /* 00007c34   4  clr.w (ffffce42,A4) */
    c->pc = RC_ADDR(0x00007c34u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31beu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C38:
    /* 00007c38   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x00007c38u);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x00007c3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b30u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009c72u);
    return;

L_7C3C:
    /* 00007c3c   8  move.w (266,A4),(00dff0c8).l */
    c->pc = RC_ADDR(0x00007c3cu);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x266u));
    rc_wr16(c, m, 0x00dff0c8u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C44:
    /* 00007c44   4  jsr (00007dca) */
    c->pc = RC_ADDR(0x00007c44u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007c48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007dcau);
    return;

L_7C48:
    /* 00007c48   6  cmpi.w #c,(c2,A4) */
    c->pc = RC_ADDR(0x00007c48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_7C4E:
    /* 00007c4e   2  blt 00007c72 */
    c->pc = RC_ADDR(0x00007c4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_7C72;

L_7C50:
    /* 00007c50   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00007c50u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C54:
    /* 00007c54   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007c54u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C56:
    /* 00007c56   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007c56u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C58:
    /* 00007c58   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007c58u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7C5A:
    /* 00007c5a   4  pea (00007d8f) */
    c->pc = RC_ADDR(0x00007c5au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d8fu));

L_7C5E:
    /* 00007c5e   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00007c5eu);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00007c62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_7C62:
    /* 00007c62   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007c62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7C64:
    /* 00007c64   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007c64u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C66:
    /* 00007c66   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007c66u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C6A:
    /* 00007c6a   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x00007c6au);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00007c6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_7C6E:
    /* 00007c6e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007c6eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7C72:
    /* 00007c72   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C76:
    /* 00007c76   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C7A:
    /* 00007c7a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c7au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C7E:
    /* 00007c7e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007c7eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7C82:
    /* 00007c82   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00007c82u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C86:
    /* 00007c86   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00007c86u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00007c8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_7C8A:
    /* 00007c8a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007c8au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7C8E:
    /* 00007c8e   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00007c8eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C94:
    /* 00007c94   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c94u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C98:
    /* 00007c98   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c98u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7C9C:
    /* 00007c9c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007c9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CA0:
    /* 00007ca0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007ca0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CA4:
    /* 00007ca4   4  jsr (0000823a) */
    c->pc = RC_ADDR(0x00007ca4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007ca8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000823au);
    return;

L_7CA8:
    /* 00007ca8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007ca8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7CAC:
    /* 00007cac   6  cmpi.w #c,(c2,A4) */
    c->pc = RC_ADDR(0x00007cacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_7CB2:
    /* 00007cb2   2  bge 00007cd0 */
    c->pc = RC_ADDR(0x00007cb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7CD0;

L_7CB4:
    /* 00007cb4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007cb4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7CB6:
    /* 00007cb6   4  pea (00007d93) */
    c->pc = RC_ADDR(0x00007cb6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d93u));

L_7CBA:
    /* 00007cba   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00007cbau);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00007cbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_7CBE:
    /* 00007cbe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007cbeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7CC0:
    /* 00007cc0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007cc0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CC2:
    /* 00007cc2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007cc2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CC6:
    /* 00007cc6   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007cc6u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007ccau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7CCA:
    /* 00007cca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007ccau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7CCC:
    /* 00007ccc   4  jsr (0000843e) */
    c->pc = RC_ADDR(0x00007cccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007cd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000843eu);
    return;

L_7CD0:
    /* 00007cd0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007cd0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CD4:
    /* 00007cd4   4  jsr (000086a0) */
    c->pc = RC_ADDR(0x00007cd4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007cd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000086a0u);
    return;

L_7CD8:
    /* 00007cd8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007cd8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7CDA:
    /* 00007cda   4  jsr (000084e4) */
    c->pc = RC_ADDR(0x00007cdau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007cdeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000084e4u);
    return;

L_7CDE:
    /* 00007cde   4  tst.w (26a,A4) */
    c->pc = RC_ADDR(0x00007cdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26au));
    rc_set_nzvc(c, t0, RC_W);

L_7CE2:
    /* 00007ce2   2  beq 00007d34 */
    c->pc = RC_ADDR(0x00007ce2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7D34;

L_7CE4:
    /* 00007ce4   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x00007ce4u);
    rc_step(c, m, 18);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x00007ce8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009becu);
    return;

L_7CE8:
    /* 00007ce8   6  cmpi.w #2,(fffff100,A4) */
    c->pc = RC_ADDR(0x00007ce8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_7CEE:
    /* 00007cee   2  bne 00007d2e */
    c->pc = RC_ADDR(0x00007ceeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7D2E;

L_7CF0:
    /* 00007cf0   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00007cf0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7CF6:
    /* 00007cf6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007cf6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7CF8:
    /* 00007cf8   4  move.w (c2,A4),D0 */
    c->pc = RC_ADDR(0x00007cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7CFC:
    /* 00007cfc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007cfcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7CFE:
    /* 00007cfe   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007cfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7D00:
    /* 00007d00   4  lea (fa,A4),A0 */
    c->pc = RC_ADDR(0x00007d00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfau);

L_7D04:
    /* 00007d04   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007d04u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D08:
    /* 00007d08   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007d08u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D0C:
    /* 00007d0c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00007d0cu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00007d10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_7D10:
    /* 00007d10   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007d10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7D12:
    /* 00007d12   4  pea (00007d97) */
    c->pc = RC_ADDR(0x00007d12u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007d97u));

L_7D16:
    /* 00007d16   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007d16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D1A:
    /* 00007d1a   4  jsr (00002218) */
    c->pc = RC_ADDR(0x00007d1au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007d1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002218u);
    return;

L_7D1E:
    /* 00007d1e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007d1eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7D20:
    /* 00007d20   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007d20u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D24:
    /* 00007d24   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007d24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D28:
    /* 00007d28   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00007d28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007d2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_7D2C:
    /* 00007d2c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00007d2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_7D2E:
    /* 00007d2e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007d2eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7D30:
    /* 00007d30   4  bra 000079d8 */
    c->pc = RC_ADDR(0x00007d30u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_79D8;

L_7D34:
    /* 00007d34   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00007d34u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7D36:
    /* 00007d36   4  bra 000079d8 */
    c->pc = RC_ADDR(0x00007d36u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_79D8;

}
