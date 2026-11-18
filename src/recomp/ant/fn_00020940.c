/* fn_00020940 - 708 byte(s), 220 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020940(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020940u): goto L_20940;
    case RC_ADDR(0x00020944u): goto L_20944;
    case RC_ADDR(0x00020948u): goto L_20948;
    case RC_ADDR(0x0002094au): goto L_2094A;
    case RC_ADDR(0x00020952u): goto L_20952;
    case RC_ADDR(0x00020956u): goto L_20956;
    case RC_ADDR(0x0002095au): goto L_2095A;
    case RC_ADDR(0x0002095cu): goto L_2095C;
    case RC_ADDR(0x00020960u): goto L_20960;
    case RC_ADDR(0x00020964u): goto L_20964;
    case RC_ADDR(0x00020968u): goto L_20968;
    case RC_ADDR(0x0002096cu): goto L_2096C;
    case RC_ADDR(0x00020970u): goto L_20970;
    case RC_ADDR(0x00020974u): goto L_20974;
    case RC_ADDR(0x00020978u): goto L_20978;
    case RC_ADDR(0x0002097cu): goto L_2097C;
    case RC_ADDR(0x00020980u): goto L_20980;
    case RC_ADDR(0x00020984u): goto L_20984;
    case RC_ADDR(0x00020986u): goto L_20986;
    case RC_ADDR(0x0002098au): goto L_2098A;
    case RC_ADDR(0x0002098eu): goto L_2098E;
    case RC_ADDR(0x00020990u): goto L_20990;
    case RC_ADDR(0x00020994u): goto L_20994;
    case RC_ADDR(0x00020996u): goto L_20996;
    case RC_ADDR(0x00020998u): goto L_20998;
    case RC_ADDR(0x0002099au): goto L_2099A;
    case RC_ADDR(0x0002099cu): goto L_2099C;
    case RC_ADDR(0x0002099eu): goto L_2099E;
    case RC_ADDR(0x000209a0u): goto L_209A0;
    case RC_ADDR(0x000209a4u): goto L_209A4;
    case RC_ADDR(0x000209a8u): goto L_209A8;
    case RC_ADDR(0x000209acu): goto L_209AC;
    case RC_ADDR(0x000209b0u): goto L_209B0;
    case RC_ADDR(0x000209b2u): goto L_209B2;
    case RC_ADDR(0x000209b4u): goto L_209B4;
    case RC_ADDR(0x000209b6u): goto L_209B6;
    case RC_ADDR(0x000209b8u): goto L_209B8;
    case RC_ADDR(0x000209bau): goto L_209BA;
    case RC_ADDR(0x000209bcu): goto L_209BC;
    case RC_ADDR(0x000209beu): goto L_209BE;
    case RC_ADDR(0x000209c2u): goto L_209C2;
    case RC_ADDR(0x000209c8u): goto L_209C8;
    case RC_ADDR(0x000209ceu): goto L_209CE;
    case RC_ADDR(0x000209d0u): goto L_209D0;
    case RC_ADDR(0x000209d2u): goto L_209D2;
    case RC_ADDR(0x000209d6u): goto L_209D6;
    case RC_ADDR(0x000209d8u): goto L_209D8;
    case RC_ADDR(0x000209dcu): goto L_209DC;
    case RC_ADDR(0x000209e0u): goto L_209E0;
    case RC_ADDR(0x000209e2u): goto L_209E2;
    case RC_ADDR(0x000209e4u): goto L_209E4;
    case RC_ADDR(0x000209e6u): goto L_209E6;
    case RC_ADDR(0x000209e8u): goto L_209E8;
    case RC_ADDR(0x000209ecu): goto L_209EC;
    case RC_ADDR(0x000209eeu): goto L_209EE;
    case RC_ADDR(0x000209f0u): goto L_209F0;
    case RC_ADDR(0x000209f2u): goto L_209F2;
    case RC_ADDR(0x000209f4u): goto L_209F4;
    case RC_ADDR(0x000209f8u): goto L_209F8;
    case RC_ADDR(0x000209fau): goto L_209FA;
    case RC_ADDR(0x000209fcu): goto L_209FC;
    case RC_ADDR(0x000209feu): goto L_209FE;
    case RC_ADDR(0x00020a02u): goto L_20A02;
    case RC_ADDR(0x00020a06u): goto L_20A06;
    case RC_ADDR(0x00020a08u): goto L_20A08;
    case RC_ADDR(0x00020a0au): goto L_20A0A;
    case RC_ADDR(0x00020a0cu): goto L_20A0C;
    case RC_ADDR(0x00020a0eu): goto L_20A0E;
    case RC_ADDR(0x00020a12u): goto L_20A12;
    case RC_ADDR(0x00020a16u): goto L_20A16;
    case RC_ADDR(0x00020a18u): goto L_20A18;
    case RC_ADDR(0x00020a1au): goto L_20A1A;
    case RC_ADDR(0x00020a20u): goto L_20A20;
    case RC_ADDR(0x00020a22u): goto L_20A22;
    case RC_ADDR(0x00020a24u): goto L_20A24;
    case RC_ADDR(0x00020a26u): goto L_20A26;
    case RC_ADDR(0x00020a2au): goto L_20A2A;
    case RC_ADDR(0x00020a2cu): goto L_20A2C;
    case RC_ADDR(0x00020a30u): goto L_20A30;
    case RC_ADDR(0x00020a32u): goto L_20A32;
    case RC_ADDR(0x00020a38u): goto L_20A38;
    case RC_ADDR(0x00020a3au): goto L_20A3A;
    case RC_ADDR(0x00020a3cu): goto L_20A3C;
    case RC_ADDR(0x00020a3eu): goto L_20A3E;
    case RC_ADDR(0x00020a40u): goto L_20A40;
    case RC_ADDR(0x00020a42u): goto L_20A42;
    case RC_ADDR(0x00020a46u): goto L_20A46;
    case RC_ADDR(0x00020a48u): goto L_20A48;
    case RC_ADDR(0x00020a4au): goto L_20A4A;
    case RC_ADDR(0x00020a4eu): goto L_20A4E;
    case RC_ADDR(0x00020a50u): goto L_20A50;
    case RC_ADDR(0x00020a54u): goto L_20A54;
    case RC_ADDR(0x00020a56u): goto L_20A56;
    case RC_ADDR(0x00020a58u): goto L_20A58;
    case RC_ADDR(0x00020a5cu): goto L_20A5C;
    case RC_ADDR(0x00020a5eu): goto L_20A5E;
    case RC_ADDR(0x00020a64u): goto L_20A64;
    case RC_ADDR(0x00020a66u): goto L_20A66;
    case RC_ADDR(0x00020a68u): goto L_20A68;
    case RC_ADDR(0x00020a6au): goto L_20A6A;
    case RC_ADDR(0x00020a6eu): goto L_20A6E;
    case RC_ADDR(0x00020a70u): goto L_20A70;
    case RC_ADDR(0x00020a72u): goto L_20A72;
    case RC_ADDR(0x00020a74u): goto L_20A74;
    case RC_ADDR(0x00020a78u): goto L_20A78;
    case RC_ADDR(0x00020a7cu): goto L_20A7C;
    case RC_ADDR(0x00020a7eu): goto L_20A7E;
    case RC_ADDR(0x00020a80u): goto L_20A80;
    case RC_ADDR(0x00020a84u): goto L_20A84;
    case RC_ADDR(0x00020a86u): goto L_20A86;
    case RC_ADDR(0x00020a88u): goto L_20A88;
    case RC_ADDR(0x00020a8au): goto L_20A8A;
    case RC_ADDR(0x00020a8cu): goto L_20A8C;
    case RC_ADDR(0x00020a90u): goto L_20A90;
    case RC_ADDR(0x00020a92u): goto L_20A92;
    case RC_ADDR(0x00020a94u): goto L_20A94;
    case RC_ADDR(0x00020a96u): goto L_20A96;
    case RC_ADDR(0x00020a98u): goto L_20A98;
    case RC_ADDR(0x00020a9au): goto L_20A9A;
    case RC_ADDR(0x00020a9cu): goto L_20A9C;
    case RC_ADDR(0x00020a9eu): goto L_20A9E;
    case RC_ADDR(0x00020aa0u): goto L_20AA0;
    case RC_ADDR(0x00020aa4u): goto L_20AA4;
    case RC_ADDR(0x00020aa6u): goto L_20AA6;
    case RC_ADDR(0x00020aa8u): goto L_20AA8;
    case RC_ADDR(0x00020aacu): goto L_20AAC;
    case RC_ADDR(0x00020aaeu): goto L_20AAE;
    case RC_ADDR(0x00020ab2u): goto L_20AB2;
    case RC_ADDR(0x00020ab4u): goto L_20AB4;
    case RC_ADDR(0x00020ab8u): goto L_20AB8;
    case RC_ADDR(0x00020abau): goto L_20ABA;
    case RC_ADDR(0x00020abcu): goto L_20ABC;
    case RC_ADDR(0x00020abeu): goto L_20ABE;
    case RC_ADDR(0x00020ac0u): goto L_20AC0;
    case RC_ADDR(0x00020ac2u): goto L_20AC2;
    case RC_ADDR(0x00020ac4u): goto L_20AC4;
    case RC_ADDR(0x00020ac6u): goto L_20AC6;
    case RC_ADDR(0x00020accu): goto L_20ACC;
    case RC_ADDR(0x00020aceu): goto L_20ACE;
    case RC_ADDR(0x00020ad2u): goto L_20AD2;
    case RC_ADDR(0x00020ad4u): goto L_20AD4;
    case RC_ADDR(0x00020ad6u): goto L_20AD6;
    case RC_ADDR(0x00020adau): goto L_20ADA;
    case RC_ADDR(0x00020adeu): goto L_20ADE;
    case RC_ADDR(0x00020ae0u): goto L_20AE0;
    case RC_ADDR(0x00020ae4u): goto L_20AE4;
    case RC_ADDR(0x00020ae6u): goto L_20AE6;
    case RC_ADDR(0x00020ae8u): goto L_20AE8;
    case RC_ADDR(0x00020aeau): goto L_20AEA;
    case RC_ADDR(0x00020aeeu): goto L_20AEE;
    case RC_ADDR(0x00020af2u): goto L_20AF2;
    case RC_ADDR(0x00020af4u): goto L_20AF4;
    case RC_ADDR(0x00020af6u): goto L_20AF6;
    case RC_ADDR(0x00020af8u): goto L_20AF8;
    case RC_ADDR(0x00020afcu): goto L_20AFC;
    case RC_ADDR(0x00020afeu): goto L_20AFE;
    case RC_ADDR(0x00020b00u): goto L_20B00;
    case RC_ADDR(0x00020b02u): goto L_20B02;
    case RC_ADDR(0x00020b04u): goto L_20B04;
    case RC_ADDR(0x00020b06u): goto L_20B06;
    case RC_ADDR(0x00020b0au): goto L_20B0A;
    case RC_ADDR(0x00020b12u): goto L_20B12;
    case RC_ADDR(0x00020b1au): goto L_20B1A;
    case RC_ADDR(0x00020b22u): goto L_20B22;
    case RC_ADDR(0x00020b2au): goto L_20B2A;
    case RC_ADDR(0x00020b32u): goto L_20B32;
    case RC_ADDR(0x00020b3au): goto L_20B3A;
    case RC_ADDR(0x00020b42u): goto L_20B42;
    case RC_ADDR(0x00020b46u): goto L_20B46;
    case RC_ADDR(0x00020b48u): goto L_20B48;
    case RC_ADDR(0x00020b4cu): goto L_20B4C;
    case RC_ADDR(0x00020b4eu): goto L_20B4E;
    case RC_ADDR(0x00020b56u): goto L_20B56;
    case RC_ADDR(0x00020b58u): goto L_20B58;
    case RC_ADDR(0x00020b5au): goto L_20B5A;
    case RC_ADDR(0x00020b5cu): goto L_20B5C;
    case RC_ADDR(0x00020b60u): goto L_20B60;
    case RC_ADDR(0x00020b64u): goto L_20B64;
    case RC_ADDR(0x00020b66u): goto L_20B66;
    case RC_ADDR(0x00020b68u): goto L_20B68;
    case RC_ADDR(0x00020b6cu): goto L_20B6C;
    case RC_ADDR(0x00020b6eu): goto L_20B6E;
    case RC_ADDR(0x00020b70u): goto L_20B70;
    case RC_ADDR(0x00020b72u): goto L_20B72;
    case RC_ADDR(0x00020b76u): goto L_20B76;
    case RC_ADDR(0x00020b78u): goto L_20B78;
    case RC_ADDR(0x00020b7au): goto L_20B7A;
    case RC_ADDR(0x00020b7eu): goto L_20B7E;
    case RC_ADDR(0x00020b80u): goto L_20B80;
    case RC_ADDR(0x00020b82u): goto L_20B82;
    case RC_ADDR(0x00020b8au): goto L_20B8A;
    case RC_ADDR(0x00020b90u): goto L_20B90;
    case RC_ADDR(0x00020b94u): goto L_20B94;
    case RC_ADDR(0x00020b98u): goto L_20B98;
    case RC_ADDR(0x00020b9au): goto L_20B9A;
    case RC_ADDR(0x00020b9eu): goto L_20B9E;
    case RC_ADDR(0x00020ba0u): goto L_20BA0;
    case RC_ADDR(0x00020ba6u): goto L_20BA6;
    case RC_ADDR(0x00020baau): goto L_20BAA;
    case RC_ADDR(0x00020bacu): goto L_20BAC;
    case RC_ADDR(0x00020bb2u): goto L_20BB2;
    case RC_ADDR(0x00020bb6u): goto L_20BB6;
    case RC_ADDR(0x00020bb8u): goto L_20BB8;
    case RC_ADDR(0x00020bbcu): goto L_20BBC;
    case RC_ADDR(0x00020bbeu): goto L_20BBE;
    case RC_ADDR(0x00020bc2u): goto L_20BC2;
    case RC_ADDR(0x00020bc8u): goto L_20BC8;
    case RC_ADDR(0x00020bceu): goto L_20BCE;
    case RC_ADDR(0x00020bd0u): goto L_20BD0;
    case RC_ADDR(0x00020bd2u): goto L_20BD2;
    case RC_ADDR(0x00020bd8u): goto L_20BD8;
    case RC_ADDR(0x00020bdeu): goto L_20BDE;
    case RC_ADDR(0x00020be4u): goto L_20BE4;
    case RC_ADDR(0x00020be6u): goto L_20BE6;
    case RC_ADDR(0x00020beau): goto L_20BEA;
    case RC_ADDR(0x00020bf2u): goto L_20BF2;
    case RC_ADDR(0x00020bfau): goto L_20BFA;
    case RC_ADDR(0x00020bfcu): goto L_20BFC;
    case RC_ADDR(0x00020c00u): goto L_20C00;
    case RC_ADDR(0x00020c02u): goto L_20C02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20940:
    /* 00020940   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020940u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20944:
    /* 00020944   4  tst.l (30,A5) */
    c->pc = RC_ADDR(0x00020944u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_20948:
    /* 00020948   2  bne 00020952 */
    c->pc = RC_ADDR(0x00020948u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20952;

L_2094A:
    /* 0002094a   8  move.w #8400,(00dff096).l */
    c->pc = RC_ADDR(0x0002094au);
    rc_step(c, m, 20);
    t0 = 0x00008400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20952:
    /* 00020952   4  movem.l { D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00020952u);
    rc_step(c, m, 8);
    t3 = c->a[7];
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

L_20956:
    /* 00020956   4  move.w (36,A5),D1 */
    c->pc = RC_ADDR(0x00020956u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2095A:
    /* 0002095a   2  bne 00020964 */
    c->pc = RC_ADDR(0x0002095au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20964;

L_2095C:
    /* 0002095c   4  move.w #1,D1 */
    c->pc = RC_ADDR(0x0002095cu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20960:
    /* 00020960   4  move.w D1,(36,A5) */
    c->pc = RC_ADDR(0x00020960u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20964:
    /* 00020964   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020964u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20968:
    /* 00020968   4  movea.l (14,A5),A1 */
    c->pc = RC_ADDR(0x00020968u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[1] = t0;

L_2096C:
    /* 0002096c   4  move.l (20,A5),D7 */
    c->pc = RC_ADDR(0x0002096cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x20u));
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20970:
    /* 00020970   4  beq 00020bfc */
    c->pc = RC_ADDR(0x00020970u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BFC;

L_20974:
    /* 00020974   4  move.l (24,A5),D6 */
    c->pc = RC_ADDR(0x00020974u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x24u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20978:
    /* 00020978   4  clr.w (24,A5) */
    c->pc = RC_ADDR(0x00020978u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2097C:
    /* 0002097c   4  move.l (18,A5),D5 */
    c->pc = RC_ADDR(0x0002097cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20980:
    /* 00020980   4  move.l (1c,A5),D4 */
    c->pc = RC_ADDR(0x00020980u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1cu));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20984:
    /* 00020984   2  move.w (A1),D2 */
    c->pc = RC_ADDR(0x00020984u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20986:
    /* 00020986   4  move.w (2,A1),D3 */
    c->pc = RC_ADDR(0x00020986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2098A:
    /* 0002098a   4  cmp.w (ffffd346,A4),D3 */
    c->pc = RC_ADDR(0x0002098au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    t1 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2098E:
    /* 0002098e   2  ble 00020994 */
    c->pc = RC_ADDR(0x0002098eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_20994;

L_20990:
    /* 00020990   4  move.w (ffffd346,A4),D3 */
    c->pc = RC_ADDR(0x00020990u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20994:
    /* 00020994   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00020994u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20996:
    /* 00020996   2  lsr.w #3,D0 */
    c->pc = RC_ADDR(0x00020996u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_20998:
    /* 00020998   2  cmp.w (A0),D0 */
    c->pc = RC_ADDR(0x00020998u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2099A:
    /* 0002099a   2  ble 000209a0 */
    c->pc = RC_ADDR(0x0002099au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_209A0;

L_2099C:
    /* 0002099c   2  move.w (A0),D7 */
    c->pc = RC_ADDR(0x0002099cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2099E:
    /* 0002099e   2  lsl.w #3,D7 */
    c->pc = RC_ADDR(0x0002099eu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_W, rc_shift(c, 1, 1, 0x00000003u, rc_d_get(c, 7, RC_W), RC_W));

L_209A0:
    /* 000209a0   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x000209a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209A4:
    /* 000209a4   4  sub.w (12,A5),D0 */
    c->pc = RC_ADDR(0x000209a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_209A8:
    /* 000209a8   4  bmi 00020bfc */
    c->pc = RC_ADDR(0x000209a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_20BFC;

L_209AC:
    /* 000209ac   4  beq 00020bfc */
    c->pc = RC_ADDR(0x000209acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BFC;

L_209B0:
    /* 000209b0   2  cmp.w D0,D6 */
    c->pc = RC_ADDR(0x000209b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_209B2:
    /* 000209b2   2  ble 000209b6 */
    c->pc = RC_ADDR(0x000209b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_209B6;

L_209B4:
    /* 000209b4   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x000209b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209B6:
    /* 000209b6   2  tst.w D1 */
    c->pc = RC_ADDR(0x000209b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_209B8:
    /* 000209b8   2  bpl 000209bc */
    c->pc = RC_ADDR(0x000209b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_209BC;

L_209BA:
    /* 000209ba   2  neg.w D1 */
    c->pc = RC_ADDR(0x000209bau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_209BC:
    /* 000209bc   2  divu.w D1,D6 */
    c->pc = RC_ADDR(0x000209bcu);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 1, RC_W);
    rc_divu(c, m, 6, t0);

L_209BE:
    /* 000209be   4  beq 00020bfc */
    c->pc = RC_ADDR(0x000209beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BFC;

L_209C2:
    /* 000209c2   6  move.w #ffff,(348e,A4) */
    c->pc = RC_ADDR(0x000209c2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x348eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_209C8:
    /* 000209c8   6  move.w #ffff,(3490,A4) */
    c->pc = RC_ADDR(0x000209c8u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x3490u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_209CE:
    /* 000209ce   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000209ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209D0:
    /* 000209d0   2  cmp.w D3,D0 */
    c->pc = RC_ADDR(0x000209d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_209D2:
    /* 000209d2   4  bge 00020bfc */
    c->pc = RC_ADDR(0x000209d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_20BFC;

L_209D6:
    /* 000209d6   2  add.w D6,D0 */
    c->pc = RC_ADDR(0x000209d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_209D8:
    /* 000209d8   4  beq 00020bfc */
    c->pc = RC_ADDR(0x000209d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BFC;

L_209DC:
    /* 000209dc   4  bmi 00020bfc */
    c->pc = RC_ADDR(0x000209dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_20BFC;

L_209E0:
    /* 000209e0   2  cmp.w D3,D0 */
    c->pc = RC_ADDR(0x000209e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_209E2:
    /* 000209e2   2  blt 000209ec */
    c->pc = RC_ADDR(0x000209e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_209EC;

L_209E4:
    /* 000209e4   2  sub.w D3,D0 */
    c->pc = RC_ADDR(0x000209e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_209E6:
    /* 000209e6   2  sub.w D0,D6 */
    c->pc = RC_ADDR(0x000209e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_209E8:
    /* 000209e8   4  add.w D0,(24,A5) */
    c->pc = RC_ADDR(0x000209e8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_209EC:
    /* 000209ec   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000209ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209EE:
    /* 000209ee   2  bpl 000209fa */
    c->pc = RC_ADDR(0x000209eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_209FA;

L_209F0:
    /* 000209f0   2  neg.w D0 */
    c->pc = RC_ADDR(0x000209f0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_209F2:
    /* 000209f2   2  sub.w D0,D6 */
    c->pc = RC_ADDR(0x000209f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_209F4:
    /* 000209f4   4  add.w D0,(12,A5) */
    c->pc = RC_ADDR(0x000209f4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_209F8:
    /* 000209f8   2  clr.w D4 */
    c->pc = RC_ADDR(0x000209f8u);
    rc_step(c, m, 4);
    rc_d_set(c, 4, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_209FA:
    /* 000209fa   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x000209fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209FC:
    /* 000209fc   2  add.w D7,D0 */
    c->pc = RC_ADDR(0x000209fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_209FE:
    /* 000209fe   4  bmi 00020bfc */
    c->pc = RC_ADDR(0x000209feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_20BFC;

L_20A02:
    /* 00020a02   4  beq 00020bfc */
    c->pc = RC_ADDR(0x00020a02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BFC;

L_20A06:
    /* 00020a06   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x00020a06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A08:
    /* 00020a08   2  lsl.w #3,D1 */
    c->pc = RC_ADDR(0x00020a08u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000003u, rc_d_get(c, 1, RC_W), RC_W));

L_20A0A:
    /* 00020a0a   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00020a0au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20A0C:
    /* 00020a0c   2  cmp.w D1,D5 */
    c->pc = RC_ADDR(0x00020a0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20A0E:
    /* 00020a0e   4  bgt 00020bfc */
    c->pc = RC_ADDR(0x00020a0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_20BFC;

L_20A12:
    /* 00020a12   4  clr.b (348c,A4) */
    c->pc = RC_ADDR(0x00020a12u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x348cu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20A16:
    /* 00020a16   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00020a16u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20A18:
    /* 00020a18   2  ble 00020a38 */
    c->pc = RC_ADDR(0x00020a18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_20A38;

L_20A1A:
    /* 00020a1a   6  bset #0,(348c,A4) */
    c->pc = RC_ADDR(0x00020a1au);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x348cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_20A20:
    /* 00020a20   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00020a20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20A22:
    /* 00020a22   2  sub.w D0,D7 */
    c->pc = RC_ADDR(0x00020a22u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20A24:
    /* 00020a24   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00020a24u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20A26:
    /* 00020a26   4  lea (ffffd368,A4),A2 */
    c->pc = RC_ADDR(0x00020a26u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] - 0x2c98u);

L_20A2A:
    /* 00020a2a   2  move.w D5,D1 */
    c->pc = RC_ADDR(0x00020a2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A2C:
    /* 00020a2c   4  andi.w #f,D1 */
    c->pc = RC_ADDR(0x00020a2cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20A30:
    /* 00020a30   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00020a30u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_20A32:
    /* 00020a32   6  move.w (0,A2,D1.w),(3490,A4) */
    c->pc = RC_ADDR(0x00020a32u);
    rc_step(c, m, 22);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x3490u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A38:
    /* 00020a38   2  add.w D6,D4 */
    c->pc = RC_ADDR(0x00020a38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_20A3A:
    /* 00020a3a   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x00020a3au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_20A3C:
    /* 00020a3c   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00020a3cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A3E:
    /* 00020a3e   2  bpl 00020a66 */
    c->pc = RC_ADDR(0x00020a3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_20A66;

L_20A40:
    /* 00020a40   2  neg.w D0 */
    c->pc = RC_ADDR(0x00020a40u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20A42:
    /* 00020a42   4  add.w D0,(e,A5) */
    c->pc = RC_ADDR(0x00020a42u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_20A46:
    /* 00020a46   2  mulu.w D2,D4 */
    c->pc = RC_ADDR(0x00020a46u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 4, t0);

L_20A48:
    /* 00020a48   2  clr.w D3 */
    c->pc = RC_ADDR(0x00020a48u);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20A4A:
    /* 00020a4a   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x00020a4au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20A4E:
    /* 00020a4e   2  beq 00020a58 */
    c->pc = RC_ADDR(0x00020a4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20A58;

L_20A50:
    /* 00020a50   4  move.w #10,D3 */
    c->pc = RC_ADDR(0x00020a50u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A54:
    /* 00020a54   2  sub.w D0,D3 */
    c->pc = RC_ADDR(0x00020a54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_20A56:
    /* 00020a56   2  subq.w #2,D4 */
    c->pc = RC_ADDR(0x00020a56u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_20A58:
    /* 00020a58   4  lea (ffffd348,A4),A2 */
    c->pc = RC_ADDR(0x00020a58u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] - 0x2cb8u);

L_20A5C:
    /* 00020a5c   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00020a5cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_20A5E:
    /* 00020a5e   6  move.w (0,A2,D0.w),(348e,A4) */
    c->pc = RC_ADDR(0x00020a5eu);
    rc_step(c, m, 22);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x348eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A64:
    /* 00020a64   2  bra 00020a74 */
    c->pc = RC_ADDR(0x00020a64u);
    rc_step(c, m, 10);
    goto L_20A74;

L_20A66:
    /* 00020a66   2  mulu.w D2,D4 */
    c->pc = RC_ADDR(0x00020a66u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 4, t0);

L_20A68:
    /* 00020a68   2  move.w D5,D3 */
    c->pc = RC_ADDR(0x00020a68u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A6A:
    /* 00020a6a   4  andi.w #f,D3 */
    c->pc = RC_ADDR(0x00020a6au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20A6E:
    /* 00020a6e   2  lsr.w #4,D5 */
    c->pc = RC_ADDR(0x00020a6eu);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 5, RC_W), RC_W));

L_20A70:
    /* 00020a70   2  lsl.w #1,D5 */
    c->pc = RC_ADDR(0x00020a70u);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 5, RC_W), RC_W));

L_20A72:
    /* 00020a72   2  add.w D5,D4 */
    c->pc = RC_ADDR(0x00020a72u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_20A74:
    /* 00020a74   4  move.w (12,A5),D1 */
    c->pc = RC_ADDR(0x00020a74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A78:
    /* 00020a78   4  tst.w (36,A5) */
    c->pc = RC_ADDR(0x00020a78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_set_nzvc(c, t0, RC_W);

L_20A7C:
    /* 00020a7c   2  bmi 00020a88 */
    c->pc = RC_ADDR(0x00020a7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_20A88;

L_20A7E:
    /* 00020a7e   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00020a7eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A80:
    /* 00020a80   4  mulu.w (36,A5),D0 */
    c->pc = RC_ADDR(0x00020a80u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_mulu(c, 0, t0);

L_20A84:
    /* 00020a84   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00020a84u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20A86:
    /* 00020a86   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00020a86u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20A88:
    /* 00020a88   2  mulu.w (A0),D1 */
    c->pc = RC_ADDR(0x00020a88u);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_mulu(c, 1, t0);

L_20A8A:
    /* 00020a8a   2  move.w D1,D5 */
    c->pc = RC_ADDR(0x00020a8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A8C:
    /* 00020a8c   4  move.w (e,A5),D1 */
    c->pc = RC_ADDR(0x00020a8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A90:
    /* 00020a90   2  lsr.w #4,D1 */
    c->pc = RC_ADDR(0x00020a90u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_20A92:
    /* 00020a92   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00020a92u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_20A94:
    /* 00020a94   2  add.w D1,D5 */
    c->pc = RC_ADDR(0x00020a94u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_20A96:
    /* 00020a96   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00020a96u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_20A98:
    /* 00020a98   2  lsl.w #6,D6 */
    c->pc = RC_ADDR(0x00020a98u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 6, RC_W), RC_W));

L_20A9A:
    /* 00020a9a   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00020a9au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A9C:
    /* 00020a9c   2  lsr.w #4,D7 */
    c->pc = RC_ADDR(0x00020a9cu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 7, RC_W), RC_W));

L_20A9E:
    /* 00020a9e   2  sub.w D1,D7 */
    c->pc = RC_ADDR(0x00020a9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20AA0:
    /* 00020aa0   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x00020aa0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20AA4:
    /* 00020aa4   2  beq 00020aa8 */
    c->pc = RC_ADDR(0x00020aa4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20AA8;

L_20AA6:
    /* 00020aa6   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00020aa6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_20AA8:
    /* 00020aa8   4  cmpi.w #0,D7 */
    c->pc = RC_ADDR(0x00020aa8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000000u);

L_20AAC:
    /* 00020aac   2  bgt 00020ab2 */
    c->pc = RC_ADDR(0x00020aacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_20AB2;

L_20AAE:
    /* 00020aae   4  move.w #1,D7 */
    c->pc = RC_ADDR(0x00020aaeu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AB2:
    /* 00020ab2   2  or.w D7,D6 */
    c->pc = RC_ADDR(0x00020ab2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t2 = t0 | rc_d_get(c, 6, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 6, RC_W, t2);

L_20AB4:
    /* 00020ab4   4  move.w (36,A5),D1 */
    c->pc = RC_ADDR(0x00020ab4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x36u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AB8:
    /* 00020ab8   2  neg.w D1 */
    c->pc = RC_ADDR(0x00020ab8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20ABA:
    /* 00020aba   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00020abau);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ABC:
    /* 00020abc   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00020abcu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_20ABE:
    /* 00020abe   2  lsl.w #1,D7 */
    c->pc = RC_ADDR(0x00020abeu);
    rc_step(c, m, 6);
    rc_d_set(c, 7, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 7, RC_W), RC_W));

L_20AC0:
    /* 00020ac0   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x00020ac0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20AC2:
    /* 00020ac2   2  tst.w D3 */
    c->pc = RC_ADDR(0x00020ac2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20AC4:
    /* 00020ac4   2  beq 00020ad6 */
    c->pc = RC_ADDR(0x00020ac4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20AD6;

L_20AC6:
    /* 00020ac6   6  btst #0,(348c,A4) */
    c->pc = RC_ADDR(0x00020ac6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x348cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20ACC:
    /* 00020acc   2  bne 00020ad6 */
    c->pc = RC_ADDR(0x00020accu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20AD6;

L_20ACE:
    /* 00020ace   4  clr.w (3490,A4) */
    c->pc = RC_ADDR(0x00020aceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3490u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20AD2:
    /* 00020ad2   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x00020ad2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_20AD4:
    /* 00020ad4   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x00020ad4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20AD6:
    /* 00020ad6   4  move.w D0,(3492,A4) */
    c->pc = RC_ADDR(0x00020ad6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3492u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ADA:
    /* 00020ada   4  move.w D0,(3494,A4) */
    c->pc = RC_ADDR(0x00020adau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3494u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20ADE:
    /* 00020ade   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00020adeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AE0:
    /* 00020ae0   4  andi.w #3f,D0 */
    c->pc = RC_ADDR(0x00020ae0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20AE4:
    /* 00020ae4   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00020ae4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_20AE6:
    /* 00020ae6   2  neg.w D2 */
    c->pc = RC_ADDR(0x00020ae6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_20AE8:
    /* 00020ae8   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x00020ae8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_20AEA:
    /* 00020aea   4  move.w D2,(3496,A4) */
    c->pc = RC_ADDR(0x00020aeau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3496u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AEE:
    /* 00020aee   4  move.w D2,(3498,A4) */
    c->pc = RC_ADDR(0x00020aeeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3498u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AF2:
    /* 00020af2   2  lsl.w #6,D3 */
    c->pc = RC_ADDR(0x00020af2u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_20AF4:
    /* 00020af4   2  lsl.w #6,D3 */
    c->pc = RC_ADDR(0x00020af4u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_20AF6:
    /* 00020af6   2  clr.w D0 */
    c->pc = RC_ADDR(0x00020af6u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20AF8:
    /* 00020af8   4  move.b (5,A1),D0 */
    c->pc = RC_ADDR(0x00020af8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20AFC:
    /* 00020afc   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x00020afcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_20AFE:
    /* 00020afe   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00020afeu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_20B00:
    /* 00020b00   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x00020b00u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_20B02:
    /* 00020b02   2  ext.l D4 */
    c->pc = RC_ADDR(0x00020b02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 4);

L_20B04:
    /* 00020b04   2  ext.l D5 */
    c->pc = RC_ADDR(0x00020b04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 5);

L_20B06:
    /* 00020b06   4  move.l (2c,A5),D7 */
    c->pc = RC_ADDR(0x00020b06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x2cu));
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B0A:
    /* 00020b0a   8  move.w (348e,A4),(00dff044).l */
    c->pc = RC_ADDR(0x00020b0au);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x348eu));
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B12:
    /* 00020b12   8  move.w (3490,A4),(00dff046).l */
    c->pc = RC_ADDR(0x00020b12u);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3490u));
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B1A:
    /* 00020b1a   8  move.w (3492,A4),(00dff064).l */
    c->pc = RC_ADDR(0x00020b1au);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3492u));
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B22:
    /* 00020b22   8  move.w (3494,A4),(00dff062).l */
    c->pc = RC_ADDR(0x00020b22u);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3494u));
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B2A:
    /* 00020b2a   8  move.w (3496,A4),(00dff060).l */
    c->pc = RC_ADDR(0x00020b2au);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3496u));
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B32:
    /* 00020b32   8  move.w (3498,A4),(00dff066).l */
    c->pc = RC_ADDR(0x00020b32u);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3498u));
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B3A:
    /* 00020b3a   8  move.w #ffff,(00dff074).l */
    c->pc = RC_ADDR(0x00020b3au);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff074u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B42:
    /* 00020b42   4  tst.l (30,A5) */
    c->pc = RC_ADDR(0x00020b42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_20B46:
    /* 00020b46   2  beq 00020b4e */
    c->pc = RC_ADDR(0x00020b46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20B4E;

L_20B48:
    /* 00020b48   4  movea.l (30,A5),A2 */
    c->pc = RC_ADDR(0x00020b48u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    c->a[2] = t0;

L_20B4C:
    /* 00020b4c   2  adda.l D5,A2 */
    c->pc = RC_ADDR(0x00020b4cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[2] += t0;

L_20B4E:
    /* 00020b4e   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00020b4eu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20B56:
    /* 00020b56   2  bne 00020b4e */
    c->pc = RC_ADDR(0x00020b56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20B4E; }

L_20B58:
    /* 00020b58   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x00020b58u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20B5A:
    /* 00020b5a   2  lsr.l #4,D7 */
    c->pc = RC_ADDR(0x00020b5au);
    rc_step(c, m, 8);
    rc_d_set(c, 7, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 7, RC_L), RC_L));

L_20B5C:
    /* 00020b5c   4  andi.w #f,D1 */
    c->pc = RC_ADDR(0x00020b5cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20B60:
    /* 00020b60   4  cmpi.b #8,D1 */
    c->pc = RC_ADDR(0x00020b60u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_20B64:
    /* 00020b64   2  beq 00020be4 */
    c->pc = RC_ADDR(0x00020b64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20BE4;

L_20B66:
    /* 00020b66   2  blt 00020b78 */
    c->pc = RC_ADDR(0x00020b66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_20B78;

L_20B68:
    /* 00020b68   4  btst #0,D1 */
    c->pc = RC_ADDR(0x00020b68u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20B6C:
    /* 00020b6c   2  bne 00020b72 */
    c->pc = RC_ADDR(0x00020b6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20B72;

L_20B6E:
    /* 00020b6e   2  clr.w D2 */
    c->pc = RC_ADDR(0x00020b6eu);
    rc_step(c, m, 4);
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20B70:
    /* 00020b70   2  bra 00020b82 */
    c->pc = RC_ADDR(0x00020b70u);
    rc_step(c, m, 10);
    goto L_20B82;

L_20B72:
    /* 00020b72   4  move.w #ffff,D2 */
    c->pc = RC_ADDR(0x00020b72u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B76:
    /* 00020b76   2  bra 00020b82 */
    c->pc = RC_ADDR(0x00020b76u);
    rc_step(c, m, 10);
    goto L_20B82;

L_20B78:
    /* 00020b78   2  lsl.w #2,D1 */
    c->pc = RC_ADDR(0x00020b78u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 1, RC_W), RC_W));

L_20B7A:
    /* 00020b7a   4  move.l (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x00020b7au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B7E:
    /* 00020b7e   2  beq 00020b82 */
    c->pc = RC_ADDR(0x00020b7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20B82;

L_20B80:
    /* 00020b80   2  bpl 00020ba0 */
    c->pc = RC_ADDR(0x00020b80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_20BA0;

L_20B82:
    /* 00020b82   8  move.w #0,(00dff042).l */
    c->pc = RC_ADDR(0x00020b82u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B8A:
    /* 00020b8a   6  move.w D2,(00dff072).l */
    c->pc = RC_ADDR(0x00020b8au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff072u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B90:
    /* 00020b90   4  move.w #b00,D1 */
    c->pc = RC_ADDR(0x00020b90u);
    rc_step(c, m, 8);
    t0 = 0x00000b00u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B94:
    /* 00020b94   4  tst.l (30,A5) */
    c->pc = RC_ADDR(0x00020b94u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_20B98:
    /* 00020b98   2  bne 00020bbc */
    c->pc = RC_ADDR(0x00020b98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20BBC;

L_20B9A:
    /* 00020b9a   4  move.w #300,D1 */
    c->pc = RC_ADDR(0x00020b9au);
    rc_step(c, m, 8);
    t0 = 0x00000300u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B9E:
    /* 00020b9e   2  bra 00020bbc */
    c->pc = RC_ADDR(0x00020b9eu);
    rc_step(c, m, 10);
    goto L_20BBC;

L_20BA0:
    /* 00020ba0   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00020ba0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BA6:
    /* 00020ba6   4  move.w #f00,D1 */
    c->pc = RC_ADDR(0x00020ba6u);
    rc_step(c, m, 8);
    t0 = 0x00000f00u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BAA:
    /* 00020baa   2  add.l D5,D2 */
    c->pc = RC_ADDR(0x00020baau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_20BAC:
    /* 00020bac   6  move.l D2,(00dff04c).l */
    c->pc = RC_ADDR(0x00020bacu);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BB2:
    /* 00020bb2   4  tst.l (30,A5) */
    c->pc = RC_ADDR(0x00020bb2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_20BB6:
    /* 00020bb6   2  bne 00020bbc */
    c->pc = RC_ADDR(0x00020bb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20BBC;

L_20BB8:
    /* 00020bb8   4  move.w #700,D1 */
    c->pc = RC_ADDR(0x00020bb8u);
    rc_step(c, m, 8);
    t0 = 0x00000700u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BBC:
    /* 00020bbc   2  or.w D3,D1 */
    c->pc = RC_ADDR(0x00020bbcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_20BBE:
    /* 00020bbe   4  ori.w #ca,D1 */
    c->pc = RC_ADDR(0x00020bbeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x000000cau;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20BC2:
    /* 00020bc2   6  move.w D1,(00dff040).l */
    c->pc = RC_ADDR(0x00020bc2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BC8:
    /* 00020bc8   6  move.l A2,(00dff050).l */
    c->pc = RC_ADDR(0x00020bc8u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BCE:
    /* 00020bce   2  move.l (A1),D2 */
    c->pc = RC_ADDR(0x00020bceu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BD0:
    /* 00020bd0   2  add.l D4,D2 */
    c->pc = RC_ADDR(0x00020bd0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_20BD2:
    /* 00020bd2   6  move.l D2,(00dff048).l */
    c->pc = RC_ADDR(0x00020bd2u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BD8:
    /* 00020bd8   6  move.l D2,(00dff054).l */
    c->pc = RC_ADDR(0x00020bd8u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BDE:
    /* 00020bde   6  move.w D6,(00dff058).l */
    c->pc = RC_ADDR(0x00020bdeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BE4:
    /* 00020be4   2  addq.l #4,A1 */
    c->pc = RC_ADDR(0x00020be4u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000004u;

L_20BE6:
    /* 00020be6   4  dbf D0,00020b4e */
    c->pc = RC_ADDR(0x00020be6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_20B4E; }
    }

L_20BEA:
    /* 00020bea   8  move.w #400,(00dff096).l */
    c->pc = RC_ADDR(0x00020beau);
    rc_step(c, m, 20);
    t0 = 0x00000400u;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20BF2:
    /* 00020bf2   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00020bf2u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20BFA:
    /* 00020bfa   2  bne 00020bf2 */
    c->pc = RC_ADDR(0x00020bfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20BF2; }

L_20BFC:
    /* 00020bfc   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 } */
    c->pc = RC_ADDR(0x00020bfcu);
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
    c->a[7] = t3;

L_20C00:
    /* 00020c00   2  unlk A5 */
    c->pc = RC_ADDR(0x00020c00u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20C02:
    /* 00020c02   2  rts */
    c->pc = RC_ADDR(0x00020c02u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
