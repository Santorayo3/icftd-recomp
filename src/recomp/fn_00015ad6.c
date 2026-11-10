/* fn_00015ad6 - 842 byte(s), 256 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015ad6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015ad6u): goto L_15AD6;
    case RC_ADDR(0x00015adau): goto L_15ADA;
    case RC_ADDR(0x00015adeu): goto L_15ADE;
    case RC_ADDR(0x00015ae2u): goto L_15AE2;
    case RC_ADDR(0x00015ae6u): goto L_15AE6;
    case RC_ADDR(0x00015aeau): goto L_15AEA;
    case RC_ADDR(0x00015aecu): goto L_15AEC;
    case RC_ADDR(0x00015af0u): goto L_15AF0;
    case RC_ADDR(0x00015af2u): goto L_15AF2;
    case RC_ADDR(0x00015af4u): goto L_15AF4;
    case RC_ADDR(0x00015af8u): goto L_15AF8;
    case RC_ADDR(0x00015afeu): goto L_15AFE;
    case RC_ADDR(0x00015b02u): goto L_15B02;
    case RC_ADDR(0x00015b04u): goto L_15B04;
    case RC_ADDR(0x00015b06u): goto L_15B06;
    case RC_ADDR(0x00015b0au): goto L_15B0A;
    case RC_ADDR(0x00015b10u): goto L_15B10;
    case RC_ADDR(0x00015b14u): goto L_15B14;
    case RC_ADDR(0x00015b16u): goto L_15B16;
    case RC_ADDR(0x00015b18u): goto L_15B18;
    case RC_ADDR(0x00015b1cu): goto L_15B1C;
    case RC_ADDR(0x00015b22u): goto L_15B22;
    case RC_ADDR(0x00015b26u): goto L_15B26;
    case RC_ADDR(0x00015b28u): goto L_15B28;
    case RC_ADDR(0x00015b2au): goto L_15B2A;
    case RC_ADDR(0x00015b2eu): goto L_15B2E;
    case RC_ADDR(0x00015b34u): goto L_15B34;
    case RC_ADDR(0x00015b3au): goto L_15B3A;
    case RC_ADDR(0x00015b3eu): goto L_15B3E;
    case RC_ADDR(0x00015b40u): goto L_15B40;
    case RC_ADDR(0x00015b42u): goto L_15B42;
    case RC_ADDR(0x00015b46u): goto L_15B46;
    case RC_ADDR(0x00015b4cu): goto L_15B4C;
    case RC_ADDR(0x00015b50u): goto L_15B50;
    case RC_ADDR(0x00015b52u): goto L_15B52;
    case RC_ADDR(0x00015b54u): goto L_15B54;
    case RC_ADDR(0x00015b58u): goto L_15B58;
    case RC_ADDR(0x00015b5cu): goto L_15B5C;
    case RC_ADDR(0x00015b5eu): goto L_15B5E;
    case RC_ADDR(0x00015b60u): goto L_15B60;
    case RC_ADDR(0x00015b64u): goto L_15B64;
    case RC_ADDR(0x00015b68u): goto L_15B68;
    case RC_ADDR(0x00015b6cu): goto L_15B6C;
    case RC_ADDR(0x00015b70u): goto L_15B70;
    case RC_ADDR(0x00015b74u): goto L_15B74;
    case RC_ADDR(0x00015b78u): goto L_15B78;
    case RC_ADDR(0x00015b7au): goto L_15B7A;
    case RC_ADDR(0x00015b7cu): goto L_15B7C;
    case RC_ADDR(0x00015b80u): goto L_15B80;
    case RC_ADDR(0x00015b84u): goto L_15B84;
    case RC_ADDR(0x00015b86u): goto L_15B86;
    case RC_ADDR(0x00015b88u): goto L_15B88;
    case RC_ADDR(0x00015b8cu): goto L_15B8C;
    case RC_ADDR(0x00015b90u): goto L_15B90;
    case RC_ADDR(0x00015b94u): goto L_15B94;
    case RC_ADDR(0x00015b98u): goto L_15B98;
    case RC_ADDR(0x00015b9cu): goto L_15B9C;
    case RC_ADDR(0x00015ba0u): goto L_15BA0;
    case RC_ADDR(0x00015ba2u): goto L_15BA2;
    case RC_ADDR(0x00015ba4u): goto L_15BA4;
    case RC_ADDR(0x00015ba8u): goto L_15BA8;
    case RC_ADDR(0x00015bacu): goto L_15BAC;
    case RC_ADDR(0x00015baeu): goto L_15BAE;
    case RC_ADDR(0x00015bb4u): goto L_15BB4;
    case RC_ADDR(0x00015bb8u): goto L_15BB8;
    case RC_ADDR(0x00015bbau): goto L_15BBA;
    case RC_ADDR(0x00015bbcu): goto L_15BBC;
    case RC_ADDR(0x00015bc0u): goto L_15BC0;
    case RC_ADDR(0x00015bc4u): goto L_15BC4;
    case RC_ADDR(0x00015bc6u): goto L_15BC6;
    case RC_ADDR(0x00015bcau): goto L_15BCA;
    case RC_ADDR(0x00015bccu): goto L_15BCC;
    case RC_ADDR(0x00015bd0u): goto L_15BD0;
    case RC_ADDR(0x00015bd2u): goto L_15BD2;
    case RC_ADDR(0x00015bd4u): goto L_15BD4;
    case RC_ADDR(0x00015bd8u): goto L_15BD8;
    case RC_ADDR(0x00015bdcu): goto L_15BDC;
    case RC_ADDR(0x00015bdeu): goto L_15BDE;
    case RC_ADDR(0x00015be2u): goto L_15BE2;
    case RC_ADDR(0x00015be4u): goto L_15BE4;
    case RC_ADDR(0x00015be6u): goto L_15BE6;
    case RC_ADDR(0x00015beau): goto L_15BEA;
    case RC_ADDR(0x00015beeu): goto L_15BEE;
    case RC_ADDR(0x00015bf2u): goto L_15BF2;
    case RC_ADDR(0x00015bf4u): goto L_15BF4;
    case RC_ADDR(0x00015bf6u): goto L_15BF6;
    case RC_ADDR(0x00015bfau): goto L_15BFA;
    case RC_ADDR(0x00015bfeu): goto L_15BFE;
    case RC_ADDR(0x00015c02u): goto L_15C02;
    case RC_ADDR(0x00015c04u): goto L_15C04;
    case RC_ADDR(0x00015c08u): goto L_15C08;
    case RC_ADDR(0x00015c0au): goto L_15C0A;
    case RC_ADDR(0x00015c0cu): goto L_15C0C;
    case RC_ADDR(0x00015c10u): goto L_15C10;
    case RC_ADDR(0x00015c14u): goto L_15C14;
    case RC_ADDR(0x00015c18u): goto L_15C18;
    case RC_ADDR(0x00015c1au): goto L_15C1A;
    case RC_ADDR(0x00015c1cu): goto L_15C1C;
    case RC_ADDR(0x00015c20u): goto L_15C20;
    case RC_ADDR(0x00015c24u): goto L_15C24;
    case RC_ADDR(0x00015c28u): goto L_15C28;
    case RC_ADDR(0x00015c2cu): goto L_15C2C;
    case RC_ADDR(0x00015c2eu): goto L_15C2E;
    case RC_ADDR(0x00015c32u): goto L_15C32;
    case RC_ADDR(0x00015c34u): goto L_15C34;
    case RC_ADDR(0x00015c38u): goto L_15C38;
    case RC_ADDR(0x00015c3au): goto L_15C3A;
    case RC_ADDR(0x00015c3cu): goto L_15C3C;
    case RC_ADDR(0x00015c40u): goto L_15C40;
    case RC_ADDR(0x00015c44u): goto L_15C44;
    case RC_ADDR(0x00015c48u): goto L_15C48;
    case RC_ADDR(0x00015c4au): goto L_15C4A;
    case RC_ADDR(0x00015c4eu): goto L_15C4E;
    case RC_ADDR(0x00015c50u): goto L_15C50;
    case RC_ADDR(0x00015c52u): goto L_15C52;
    case RC_ADDR(0x00015c56u): goto L_15C56;
    case RC_ADDR(0x00015c5au): goto L_15C5A;
    case RC_ADDR(0x00015c5cu): goto L_15C5C;
    case RC_ADDR(0x00015c5eu): goto L_15C5E;
    case RC_ADDR(0x00015c62u): goto L_15C62;
    case RC_ADDR(0x00015c68u): goto L_15C68;
    case RC_ADDR(0x00015c6cu): goto L_15C6C;
    case RC_ADDR(0x00015c70u): goto L_15C70;
    case RC_ADDR(0x00015c72u): goto L_15C72;
    case RC_ADDR(0x00015c74u): goto L_15C74;
    case RC_ADDR(0x00015c78u): goto L_15C78;
    case RC_ADDR(0x00015c7cu): goto L_15C7C;
    case RC_ADDR(0x00015c80u): goto L_15C80;
    case RC_ADDR(0x00015c82u): goto L_15C82;
    case RC_ADDR(0x00015c86u): goto L_15C86;
    case RC_ADDR(0x00015c88u): goto L_15C88;
    case RC_ADDR(0x00015c8au): goto L_15C8A;
    case RC_ADDR(0x00015c8eu): goto L_15C8E;
    case RC_ADDR(0x00015c92u): goto L_15C92;
    case RC_ADDR(0x00015c96u): goto L_15C96;
    case RC_ADDR(0x00015c98u): goto L_15C98;
    case RC_ADDR(0x00015c9au): goto L_15C9A;
    case RC_ADDR(0x00015c9eu): goto L_15C9E;
    case RC_ADDR(0x00015ca4u): goto L_15CA4;
    case RC_ADDR(0x00015ca8u): goto L_15CA8;
    case RC_ADDR(0x00015caau): goto L_15CAA;
    case RC_ADDR(0x00015cacu): goto L_15CAC;
    case RC_ADDR(0x00015cb0u): goto L_15CB0;
    case RC_ADDR(0x00015cb4u): goto L_15CB4;
    case RC_ADDR(0x00015cb8u): goto L_15CB8;
    case RC_ADDR(0x00015cbcu): goto L_15CBC;
    case RC_ADDR(0x00015cbeu): goto L_15CBE;
    case RC_ADDR(0x00015cc2u): goto L_15CC2;
    case RC_ADDR(0x00015cc6u): goto L_15CC6;
    case RC_ADDR(0x00015cc8u): goto L_15CC8;
    case RC_ADDR(0x00015cccu): goto L_15CCC;
    case RC_ADDR(0x00015cceu): goto L_15CCE;
    case RC_ADDR(0x00015cd2u): goto L_15CD2;
    case RC_ADDR(0x00015cd4u): goto L_15CD4;
    case RC_ADDR(0x00015cd6u): goto L_15CD6;
    case RC_ADDR(0x00015cdau): goto L_15CDA;
    case RC_ADDR(0x00015cdeu): goto L_15CDE;
    case RC_ADDR(0x00015ce2u): goto L_15CE2;
    case RC_ADDR(0x00015ce6u): goto L_15CE6;
    case RC_ADDR(0x00015ce8u): goto L_15CE8;
    case RC_ADDR(0x00015cecu): goto L_15CEC;
    case RC_ADDR(0x00015cf0u): goto L_15CF0;
    case RC_ADDR(0x00015cf2u): goto L_15CF2;
    case RC_ADDR(0x00015cf6u): goto L_15CF6;
    case RC_ADDR(0x00015cf8u): goto L_15CF8;
    case RC_ADDR(0x00015cfcu): goto L_15CFC;
    case RC_ADDR(0x00015d00u): goto L_15D00;
    case RC_ADDR(0x00015d04u): goto L_15D04;
    case RC_ADDR(0x00015d08u): goto L_15D08;
    case RC_ADDR(0x00015d0cu): goto L_15D0C;
    case RC_ADDR(0x00015d10u): goto L_15D10;
    case RC_ADDR(0x00015d12u): goto L_15D12;
    case RC_ADDR(0x00015d14u): goto L_15D14;
    case RC_ADDR(0x00015d18u): goto L_15D18;
    case RC_ADDR(0x00015d1cu): goto L_15D1C;
    case RC_ADDR(0x00015d20u): goto L_15D20;
    case RC_ADDR(0x00015d24u): goto L_15D24;
    case RC_ADDR(0x00015d26u): goto L_15D26;
    case RC_ADDR(0x00015d2au): goto L_15D2A;
    case RC_ADDR(0x00015d2cu): goto L_15D2C;
    case RC_ADDR(0x00015d2eu): goto L_15D2E;
    case RC_ADDR(0x00015d32u): goto L_15D32;
    case RC_ADDR(0x00015d36u): goto L_15D36;
    case RC_ADDR(0x00015d38u): goto L_15D38;
    case RC_ADDR(0x00015d3au): goto L_15D3A;
    case RC_ADDR(0x00015d3eu): goto L_15D3E;
    case RC_ADDR(0x00015d42u): goto L_15D42;
    case RC_ADDR(0x00015d46u): goto L_15D46;
    case RC_ADDR(0x00015d4au): goto L_15D4A;
    case RC_ADDR(0x00015d4cu): goto L_15D4C;
    case RC_ADDR(0x00015d4eu): goto L_15D4E;
    case RC_ADDR(0x00015d52u): goto L_15D52;
    case RC_ADDR(0x00015d54u): goto L_15D54;
    case RC_ADDR(0x00015d56u): goto L_15D56;
    case RC_ADDR(0x00015d5au): goto L_15D5A;
    case RC_ADDR(0x00015d5eu): goto L_15D5E;
    case RC_ADDR(0x00015d62u): goto L_15D62;
    case RC_ADDR(0x00015d66u): goto L_15D66;
    case RC_ADDR(0x00015d68u): goto L_15D68;
    case RC_ADDR(0x00015d6cu): goto L_15D6C;
    case RC_ADDR(0x00015d6eu): goto L_15D6E;
    case RC_ADDR(0x00015d70u): goto L_15D70;
    case RC_ADDR(0x00015d74u): goto L_15D74;
    case RC_ADDR(0x00015d78u): goto L_15D78;
    case RC_ADDR(0x00015d7au): goto L_15D7A;
    case RC_ADDR(0x00015d7cu): goto L_15D7C;
    case RC_ADDR(0x00015d80u): goto L_15D80;
    case RC_ADDR(0x00015d84u): goto L_15D84;
    case RC_ADDR(0x00015d88u): goto L_15D88;
    case RC_ADDR(0x00015d8cu): goto L_15D8C;
    case RC_ADDR(0x00015d8eu): goto L_15D8E;
    case RC_ADDR(0x00015d90u): goto L_15D90;
    case RC_ADDR(0x00015d94u): goto L_15D94;
    case RC_ADDR(0x00015d96u): goto L_15D96;
    case RC_ADDR(0x00015d9au): goto L_15D9A;
    case RC_ADDR(0x00015d9eu): goto L_15D9E;
    case RC_ADDR(0x00015da2u): goto L_15DA2;
    case RC_ADDR(0x00015da4u): goto L_15DA4;
    case RC_ADDR(0x00015da8u): goto L_15DA8;
    case RC_ADDR(0x00015dacu): goto L_15DAC;
    case RC_ADDR(0x00015db0u): goto L_15DB0;
    case RC_ADDR(0x00015db4u): goto L_15DB4;
    case RC_ADDR(0x00015db8u): goto L_15DB8;
    case RC_ADDR(0x00015dbau): goto L_15DBA;
    case RC_ADDR(0x00015dbcu): goto L_15DBC;
    case RC_ADDR(0x00015dc0u): goto L_15DC0;
    case RC_ADDR(0x00015dc4u): goto L_15DC4;
    case RC_ADDR(0x00015dc6u): goto L_15DC6;
    case RC_ADDR(0x00015dc8u): goto L_15DC8;
    case RC_ADDR(0x00015dcau): goto L_15DCA;
    case RC_ADDR(0x00015dceu): goto L_15DCE;
    case RC_ADDR(0x00015dd2u): goto L_15DD2;
    case RC_ADDR(0x00015dd6u): goto L_15DD6;
    case RC_ADDR(0x00015dd8u): goto L_15DD8;
    case RC_ADDR(0x00015ddau): goto L_15DDA;
    case RC_ADDR(0x00015ddcu): goto L_15DDC;
    case RC_ADDR(0x00015de0u): goto L_15DE0;
    case RC_ADDR(0x00015de4u): goto L_15DE4;
    case RC_ADDR(0x00015de8u): goto L_15DE8;
    case RC_ADDR(0x00015decu): goto L_15DEC;
    case RC_ADDR(0x00015deeu): goto L_15DEE;
    case RC_ADDR(0x00015df0u): goto L_15DF0;
    case RC_ADDR(0x00015df2u): goto L_15DF2;
    case RC_ADDR(0x00015df6u): goto L_15DF6;
    case RC_ADDR(0x00015dfau): goto L_15DFA;
    case RC_ADDR(0x00015dfeu): goto L_15DFE;
    case RC_ADDR(0x00015e00u): goto L_15E00;
    case RC_ADDR(0x00015e02u): goto L_15E02;
    case RC_ADDR(0x00015e06u): goto L_15E06;
    case RC_ADDR(0x00015e08u): goto L_15E08;
    case RC_ADDR(0x00015e0cu): goto L_15E0C;
    case RC_ADDR(0x00015e10u): goto L_15E10;
    case RC_ADDR(0x00015e14u): goto L_15E14;
    case RC_ADDR(0x00015e18u): goto L_15E18;
    case RC_ADDR(0x00015e1cu): goto L_15E1C;
    case RC_ADDR(0x00015e1eu): goto L_15E1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15AD6:
    /* 00015ad6   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00015ad6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_15ADA:
    /* 00015ada   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00015adau);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15ADE:
    /* 00015ade   4  bra 00015e10 */
    c->pc = RC_ADDR(0x00015adeu);
    goto L_15E10;

L_15AE2:
    /* 00015ae2   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00015ae2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AE6:
    /* 00015ae6   4  jsr (0001540a) */
    c->pc = RC_ADDR(0x00015ae6u);
    rc_push32(c, m, RC_ADDR(0x00015aeau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001540au);
    return;

L_15AEA:
    /* 00015aea   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015aeau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15AEC:
    /* 00015aec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015aecu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AF0:
    /* 00015af0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015af0u);
    rc_ext_l(c, 0);

L_15AF2:
    /* 00015af2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015af2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15AF4:
    /* 00015af4   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00015af4u);
    c->a[0] = (c->a[4] + 0x11e4u);

L_15AF8:
    /* 00015af8   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00015af8u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15AFE:
    /* 00015afe   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015afeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B02:
    /* 00015b02   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b02u);
    rc_ext_l(c, 0);

L_15B04:
    /* 00015b04   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b04u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B06:
    /* 00015b06   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00015b06u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_15B0A:
    /* 00015b0a   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015b0au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B10:
    /* 00015b10   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015b10u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B14:
    /* 00015b14   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b14u);
    rc_ext_l(c, 0);

L_15B16:
    /* 00015b16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b16u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B18:
    /* 00015b18   4  lea (1204,A4),A0 */
    c->pc = RC_ADDR(0x00015b18u);
    c->a[0] = (c->a[4] + 0x1204u);

L_15B1C:
    /* 00015b1c   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00015b1cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B22:
    /* 00015b22   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015b22u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B26:
    /* 00015b26   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b26u);
    rc_ext_l(c, 0);

L_15B28:
    /* 00015b28   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b28u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B2A:
    /* 00015b2a   4  lea (1234,A4),A0 */
    c->pc = RC_ADDR(0x00015b2au);
    c->a[0] = (c->a[4] + 0x1234u);

L_15B2E:
    /* 00015b2e   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00015b2eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B34:
    /* 00015b34   6  move.w (ffffffee,A5),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00015b34u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B3A:
    /* 00015b3a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015b3au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B3E:
    /* 00015b3e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b3eu);
    rc_ext_l(c, 0);

L_15B40:
    /* 00015b40   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b40u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B42:
    /* 00015b42   4  lea (11f4,A4),A0 */
    c->pc = RC_ADDR(0x00015b42u);
    c->a[0] = (c->a[4] + 0x11f4u);

L_15B46:
    /* 00015b46   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00015b46u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B4C:
    /* 00015b4c   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00015b4cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B50:
    /* 00015b50   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b50u);
    rc_ext_l(c, 0);

L_15B52:
    /* 00015b52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b52u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B54:
    /* 00015b54   4  lea (ffffb1da,A4),A0 */
    c->pc = RC_ADDR(0x00015b54u);
    c->a[0] = (c->a[4] - 0x4e26u);

L_15B58:
    /* 00015b58   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x00015b58u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B5C:
    /* 00015b5c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015b5cu);
    rc_ext_l(c, 1);

L_15B5E:
    /* 00015b5e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015b5eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15B60:
    /* 00015b60   4  lea (ffffb1fa,A4),A1 */
    c->pc = RC_ADDR(0x00015b60u);
    c->a[1] = (c->a[4] - 0x4e06u);

L_15B64:
    /* 00015b64   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00015b64u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B68:
    /* 00015b68   4  add.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00015b68u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15B6C:
    /* 00015b6c   4  add.w (fffffffc,A5),D2 */
    c->pc = RC_ADDR(0x00015b6cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15B70:
    /* 00015b70   4  move.w D2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015b70u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B74:
    /* 00015b74   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00015b74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B78:
    /* 00015b78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015b78u);
    rc_ext_l(c, 0);

L_15B7A:
    /* 00015b7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015b7au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15B7C:
    /* 00015b7c   4  lea (ffffb1ea,A4),A0 */
    c->pc = RC_ADDR(0x00015b7cu);
    c->a[0] = (c->a[4] - 0x4e16u);

L_15B80:
    /* 00015b80   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x00015b80u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B84:
    /* 00015b84   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015b84u);
    rc_ext_l(c, 1);

L_15B86:
    /* 00015b86   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015b86u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15B88:
    /* 00015b88   4  lea (ffffb20a,A4),A1 */
    c->pc = RC_ADDR(0x00015b88u);
    c->a[1] = (c->a[4] - 0x4df6u);

L_15B8C:
    /* 00015b8c   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00015b8cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B90:
    /* 00015b90   4  add.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00015b90u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15B94:
    /* 00015b94   4  add.w (fffffffa,A5),D2 */
    c->pc = RC_ADDR(0x00015b94u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15B98:
    /* 00015b98   4  move.w D2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00015b98u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15B9C:
    /* 00015b9c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015b9cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BA0:
    /* 00015ba0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015ba0u);
    rc_ext_l(c, 0);

L_15BA2:
    /* 00015ba2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015ba2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15BA4:
    /* 00015ba4   4  lea (1214,A4),A0 */
    c->pc = RC_ADDR(0x00015ba4u);
    c->a[0] = (c->a[4] + 0x1214u);

L_15BA8:
    /* 00015ba8   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015ba8u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_15BAC:
    /* 00015bac   2  beq 00015c24 */
    c->pc = RC_ADDR(0x00015bacu);
    if (rc_cond(c, 7)) goto L_15C24;

L_15BAE:
    /* 00015bae   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00015baeu);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BB4:
    /* 00015bb4   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00015bb4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BB8:
    /* 00015bb8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015bb8u);
    rc_ext_l(c, 0);

L_15BBA:
    /* 00015bba   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015bbau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_15BBC:
    /* 00015bbc   4  lea (11a0,A4),A0 */
    c->pc = RC_ADDR(0x00015bbcu);
    c->a[0] = (c->a[4] + 0x11a0u);

L_15BC0:
    /* 00015bc0   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00015bc0u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_15BC4:
    /* 00015bc4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00015bc4u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_15BC6:
    /* 00015bc6   4  move.b (4,A1),D0 */
    c->pc = RC_ADDR(0x00015bc6u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15BCA:
    /* 00015bca   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015bcau);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15BCC:
    /* 00015bcc   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00015bccu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BD0:
    /* 00015bd0   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015bd0u);
    rc_ext_l(c, 1);

L_15BD2:
    /* 00015bd2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00015bd2u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_15BD4:
    /* 00015bd4   4  lea (11c0,A4),A0 */
    c->pc = RC_ADDR(0x00015bd4u);
    c->a[0] = (c->a[4] + 0x11c0u);

L_15BD8:
    /* 00015bd8   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00015bd8u);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_15BDC:
    /* 00015bdc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00015bdcu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_15BDE:
    /* 00015bde   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x00015bdeu);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15BE2:
    /* 00015be2   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00015be2u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_15BE4:
    /* 00015be4   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00015be4u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15BE6:
    /* 00015be6   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00015be6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15BEA:
    /* 00015bea   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015beau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BEE:
    /* 00015bee   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00015beeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BF2:
    /* 00015bf2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015bf2u);
    rc_ext_l(c, 0);

L_15BF4:
    /* 00015bf4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015bf4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_15BF6:
    /* 00015bf6   4  lea (11a0,A4),A0 */
    c->pc = RC_ADDR(0x00015bf6u);
    c->a[0] = (c->a[4] + 0x11a0u);

L_15BFA:
    /* 00015bfa   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00015bfau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_15BFE:
    /* 00015bfe   4  move.w (2,A1),D0 */
    c->pc = RC_ADDR(0x00015bfeu);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C02:
    /* 00015c02   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015c02u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15C04:
    /* 00015c04   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00015c04u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C08:
    /* 00015c08   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015c08u);
    rc_ext_l(c, 1);

L_15C0A:
    /* 00015c0a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00015c0au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_15C0C:
    /* 00015c0c   4  lea (11c0,A4),A0 */
    c->pc = RC_ADDR(0x00015c0cu);
    c->a[0] = (c->a[4] + 0x11c0u);

L_15C10:
    /* 00015c10   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00015c10u);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_15C14:
    /* 00015c14   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x00015c14u);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C18:
    /* 00015c18   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00015c18u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_15C1A:
    /* 00015c1a   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00015c1au);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15C1C:
    /* 00015c1c   4  add.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015c1cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15C20:
    /* 00015c20   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00015c20u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C24:
    /* 00015c24   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015c24u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C28:
    /* 00015c28   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015c28u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15C2C:
    /* 00015c2c   2  bne 00015ca4 */
    c->pc = RC_ADDR(0x00015c2cu);
    if (rc_cond(c, 6)) goto L_15CA4;

L_15C2E:
    /* 00015c2e   4  tst.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x00015c2eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_15C32:
    /* 00015c32   2  beq 00015ca4 */
    c->pc = RC_ADDR(0x00015c32u);
    if (rc_cond(c, 7)) goto L_15CA4;

L_15C34:
    /* 00015c34   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015c34u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C38:
    /* 00015c38   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015c38u);
    rc_ext_l(c, 0);

L_15C3A:
    /* 00015c3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015c3au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15C3C:
    /* 00015c3c   4  lea (120c,A4),A0 */
    c->pc = RC_ADDR(0x00015c3cu);
    c->a[0] = (c->a[4] + 0x120cu);

L_15C40:
    /* 00015c40   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015c40u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C44:
    /* 00015c44   4  cmp.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00015c44u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15C48:
    /* 00015c48   2  beq 00015ca4 */
    c->pc = RC_ADDR(0x00015c48u);
    if (rc_cond(c, 7)) goto L_15CA4;

L_15C4A:
    /* 00015c4a   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00015c4au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C4E:
    /* 00015c4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015c4eu);
    rc_ext_l(c, 0);

L_15C50:
    /* 00015c50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015c50u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15C52:
    /* 00015c52   4  lea (ffffb22a,A4),A0 */
    c->pc = RC_ADDR(0x00015c52u);
    c->a[0] = (c->a[4] - 0x4dd6u);

L_15C56:
    /* 00015c56   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00015c56u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C5A:
    /* 00015c5a   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015c5au);
    rc_ext_l(c, 1);

L_15C5C:
    /* 00015c5c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015c5cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15C5E:
    /* 00015c5e   4  lea (1204,A4),A1 */
    c->pc = RC_ADDR(0x00015c5eu);
    c->a[1] = (c->a[4] + 0x1204u);

L_15C62:
    /* 00015c62   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00015c62u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C68:
    /* 00015c68   4  move.w (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00015c68u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C6C:
    /* 00015c6c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015c6cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C70:
    /* 00015c70   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015c70u);
    rc_ext_l(c, 0);

L_15C72:
    /* 00015c72   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015c72u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15C74:
    /* 00015c74   4  lea (120c,A4),A0 */
    c->pc = RC_ADDR(0x00015c74u);
    c->a[0] = (c->a[4] + 0x120cu);

L_15C78:
    /* 00015c78   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00015c78u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C7C:
    /* 00015c7c   4  jsr (000152a6) */
    c->pc = RC_ADDR(0x00015c7cu);
    rc_push32(c, m, RC_ADDR(0x00015c80u));
    rc_depth++;
    c->pc = RC_ADDR(0x000152a6u);
    return;

L_15C80:
    /* 00015c80   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015c80u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15C82:
    /* 00015c82   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00015c82u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C86:
    /* 00015c86   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015c86u);
    rc_ext_l(c, 1);

L_15C88:
    /* 00015c88   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015c88u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15C8A:
    /* 00015c8a   4  lea (1234,A4),A0 */
    c->pc = RC_ADDR(0x00015c8au);
    c->a[0] = (c->a[4] + 0x1234u);

L_15C8E:
    /* 00015c8e   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00015c8eu);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C92:
    /* 00015c92   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015c92u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C96:
    /* 00015c96   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015c96u);
    rc_ext_l(c, 0);

L_15C98:
    /* 00015c98   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015c98u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15C9A:
    /* 00015c9a   4  lea (120c,A4),A0 */
    c->pc = RC_ADDR(0x00015c9au);
    c->a[0] = (c->a[4] + 0x120cu);

L_15C9E:
    /* 00015c9e   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015c9eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CA4:
    /* 00015ca4   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00015ca4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CA8:
    /* 00015ca8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015ca8u);
    rc_ext_l(c, 0);

L_15CAA:
    /* 00015caa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015caau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_15CAC:
    /* 00015cac   4  lea (11a0,A4),A0 */
    c->pc = RC_ADDR(0x00015cacu);
    c->a[0] = (c->a[4] + 0x11a0u);

L_15CB0:
    /* 00015cb0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00015cb0u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15CB4:
    /* 00015cb4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015cb4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CB8:
    /* 00015cb8   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00015cb8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15CBC:
    /* 00015cbc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015cbcu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CBE:
    /* 00015cbe   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00015cbeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CC2:
    /* 00015cc2   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00015cc2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15CC6:
    /* 00015cc6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015cc6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CC8:
    /* 00015cc8   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00015cc8u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00015cccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_15CCC:
    /* 00015ccc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00015cccu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_15CCE:
    /* 00015cce   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00015cceu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CD2:
    /* 00015cd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015cd2u);
    rc_ext_l(c, 0);

L_15CD4:
    /* 00015cd4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015cd4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_15CD6:
    /* 00015cd6   4  lea (11c0,A4),A0 */
    c->pc = RC_ADDR(0x00015cd6u);
    c->a[0] = (c->a[4] + 0x11c0u);

L_15CDA:
    /* 00015cda   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00015cdau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15CDE:
    /* 00015cde   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00015cdeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CE2:
    /* 00015ce2   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00015ce2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15CE6:
    /* 00015ce6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015ce6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CE8:
    /* 00015ce8   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00015ce8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CEC:
    /* 00015cec   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00015cecu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15CF0:
    /* 00015cf0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015cf0u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CF2:
    /* 00015cf2   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00015cf2u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00015cf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_15CF6:
    /* 00015cf6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00015cf6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_15CF8:
    /* 00015cf8   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x00015cf8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_15CFC:
    /* 00015cfc   4  beq 00015e08 */
    c->pc = RC_ADDR(0x00015cfcu);
    if (rc_cond(c, 7)) goto L_15E08;

L_15D00:
    /* 00015d00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015d00u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D04:
    /* 00015d04   4  cmp.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d04u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D08:
    /* 00015d08   4  beq 00015d96 */
    c->pc = RC_ADDR(0x00015d08u);
    if (rc_cond(c, 7)) goto L_15D96;

L_15D0C:
    /* 00015d0c   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d0cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D10:
    /* 00015d10   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015d10u);
    rc_ext_l(c, 0);

L_15D12:
    /* 00015d12   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015d12u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15D14:
    /* 00015d14   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00015d14u);
    c->a[0] = (c->a[4] + 0x11e4u);

L_15D18:
    /* 00015d18   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015d18u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D1C:
    /* 00015d1c   4  add.w (119c,A4),D1 */
    c->pc = RC_ADDR(0x00015d1cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15D20:
    /* 00015d20   4  cmp.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00015d20u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D24:
    /* 00015d24   2  ble 00015d94 */
    c->pc = RC_ADDR(0x00015d24u);
    if (rc_cond(c, 15)) goto L_15D94;

L_15D26:
    /* 00015d26   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d26u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D2A:
    /* 00015d2a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015d2au);
    rc_ext_l(c, 0);

L_15D2C:
    /* 00015d2c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015d2cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15D2E:
    /* 00015d2e   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00015d2eu);
    c->a[0] = (c->a[4] + 0x11e4u);

L_15D32:
    /* 00015d32   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00015d32u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D36:
    /* 00015d36   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015d36u);
    rc_ext_l(c, 1);

L_15D38:
    /* 00015d38   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015d38u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15D3A:
    /* 00015d3a   4  lea (ffffb27c,A4),A1 */
    c->pc = RC_ADDR(0x00015d3au);
    c->a[1] = (c->a[4] - 0x4d84u);

L_15D3E:
    /* 00015d3e   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00015d3eu);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D42:
    /* 00015d42   4  add.w (fffffffc,A5),D2 */
    c->pc = RC_ADDR(0x00015d42u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15D46:
    /* 00015d46   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015d46u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D4A:
    /* 00015d4a   2  cmp.w D2,D1 */
    c->pc = RC_ADDR(0x00015d4au);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D4C:
    /* 00015d4c   2  bge 00015d94 */
    c->pc = RC_ADDR(0x00015d4cu);
    if (rc_cond(c, 12)) goto L_15D94;

L_15D4E:
    /* 00015d4e   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d4eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D52:
    /* 00015d52   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015d52u);
    rc_ext_l(c, 0);

L_15D54:
    /* 00015d54   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015d54u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15D56:
    /* 00015d56   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00015d56u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_15D5A:
    /* 00015d5a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015d5au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D5E:
    /* 00015d5e   4  add.w (119e,A4),D1 */
    c->pc = RC_ADDR(0x00015d5eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15D62:
    /* 00015d62   4  cmp.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00015d62u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D66:
    /* 00015d66   2  ble 00015d94 */
    c->pc = RC_ADDR(0x00015d66u);
    if (rc_cond(c, 15)) goto L_15D94;

L_15D68:
    /* 00015d68   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d68u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D6C:
    /* 00015d6c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015d6cu);
    rc_ext_l(c, 0);

L_15D6E:
    /* 00015d6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015d6eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_15D70:
    /* 00015d70   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00015d70u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_15D74:
    /* 00015d74   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00015d74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D78:
    /* 00015d78   2  ext.l D1 */
    c->pc = RC_ADDR(0x00015d78u);
    rc_ext_l(c, 1);

L_15D7A:
    /* 00015d7a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00015d7au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_15D7C:
    /* 00015d7c   4  lea (ffffb292,A4),A1 */
    c->pc = RC_ADDR(0x00015d7cu);
    c->a[1] = (c->a[4] - 0x4d6eu);

L_15D80:
    /* 00015d80   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00015d80u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D84:
    /* 00015d84   4  add.w (fffffffa,A5),D2 */
    c->pc = RC_ADDR(0x00015d84u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15D88:
    /* 00015d88   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015d88u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D8C:
    /* 00015d8c   2  cmp.w D2,D1 */
    c->pc = RC_ADDR(0x00015d8cu);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D8E:
    /* 00015d8e   2  bge 00015d94 */
    c->pc = RC_ADDR(0x00015d8eu);
    if (rc_cond(c, 12)) goto L_15D94;

L_15D90:
    /* 00015d90   4  jsr (00015a86) */
    c->pc = RC_ADDR(0x00015d90u);
    rc_push32(c, m, RC_ADDR(0x00015d94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015a86u);
    return;

L_15D94:
    /* 00015d94   2  bra 00015e06 */
    c->pc = RC_ADDR(0x00015d94u);
    goto L_15E06;

L_15D96:
    /* 00015d96   4  jsr (00015754) */
    c->pc = RC_ADDR(0x00015d96u);
    rc_push32(c, m, RC_ADDR(0x00015d9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00015754u);
    return;

L_15D9A:
    /* 00015d9a   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00015d9au);
    c->a[0] = (c->a[4] + 0x11e4u);

L_15D9E:
    /* 00015d9e   4  move.w (1244,A4),D0 */
    c->pc = RC_ADDR(0x00015d9eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1244u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DA2:
    /* 00015da2   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00015da2u);
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15DA4:
    /* 00015da4   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00015da4u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DA8:
    /* 00015da8   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00015da8u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_15DAC:
    /* 00015dac   4  move.w (0,A0,D0.w),D3 */
    c->pc = RC_ADDR(0x00015dacu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DB0:
    /* 00015db0   4  sub.w (dfa,A4),D2 */
    c->pc = RC_ADDR(0x00015db0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_15DB4:
    /* 00015db4   4  sub.w (dfc,A4),D3 */
    c->pc = RC_ADDR(0x00015db4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_15DB8:
    /* 00015db8   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00015db8u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DBA:
    /* 00015dba   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x00015dbau);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DBC:
    /* 00015dbc   4  bsr 00015e20 */
    c->pc = RC_ADDR(0x00015dbcu);
    rc_push32(c, m, RC_ADDR(0x00015dc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_15DC0:
    /* 00015dc0   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00015dc0u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15DC4:
    /* 00015dc4   2  bne 00015e02 */
    c->pc = RC_ADDR(0x00015dc4u);
    if (rc_cond(c, 6)) goto L_15E02;

L_15DC6:
    /* 00015dc6   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00015dc6u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DC8:
    /* 00015dc8   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x00015dc8u);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DCA:
    /* 00015dca   4  add.w (119c,A4),D0 */
    c->pc = RC_ADDR(0x00015dcau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15DCE:
    /* 00015dce   4  bsr 00015e20 */
    c->pc = RC_ADDR(0x00015dceu);
    rc_push32(c, m, RC_ADDR(0x00015dd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_15DD2:
    /* 00015dd2   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00015dd2u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15DD6:
    /* 00015dd6   2  bne 00015e02 */
    c->pc = RC_ADDR(0x00015dd6u);
    if (rc_cond(c, 6)) goto L_15E02;

L_15DD8:
    /* 00015dd8   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00015dd8u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DDA:
    /* 00015dda   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x00015ddau);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DDC:
    /* 00015ddc   4  add.w (119c,A4),D0 */
    c->pc = RC_ADDR(0x00015ddcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15DE0:
    /* 00015de0   4  add.w (119e,A4),D1 */
    c->pc = RC_ADDR(0x00015de0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15DE4:
    /* 00015de4   4  bsr 00015e20 */
    c->pc = RC_ADDR(0x00015de4u);
    rc_push32(c, m, RC_ADDR(0x00015de8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_15DE8:
    /* 00015de8   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00015de8u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15DEC:
    /* 00015dec   2  bne 00015e02 */
    c->pc = RC_ADDR(0x00015decu);
    if (rc_cond(c, 6)) goto L_15E02;

L_15DEE:
    /* 00015dee   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00015deeu);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DF0:
    /* 00015df0   2  move.w D3,D1 */
    c->pc = RC_ADDR(0x00015df0u);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DF2:
    /* 00015df2   4  add.w (119e,A4),D1 */
    c->pc = RC_ADDR(0x00015df2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x119eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15DF6:
    /* 00015df6   4  bsr 00015e20 */
    c->pc = RC_ADDR(0x00015df6u);
    rc_push32(c, m, RC_ADDR(0x00015dfau));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_15DFA:
    /* 00015dfa   4  andi.b #84,D0 */
    c->pc = RC_ADDR(0x00015dfau);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x00000084u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_15DFE:
    /* 00015dfe   2  bne 00015e02 */
    c->pc = RC_ADDR(0x00015dfeu);
    if (rc_cond(c, 6)) goto L_15E02;

L_15E00:
    /* 00015e00   2  bra 00015e06 */
    c->pc = RC_ADDR(0x00015e00u);
    goto L_15E06;

L_15E02:
    /* 00015e02   4  bsr 00015a86 */
    c->pc = RC_ADDR(0x00015e02u);
    rc_push32(c, m, RC_ADDR(0x00015e06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015a86u);
    return;

L_15E06:
    /* 00015e06   2  bra 00015e0c */
    c->pc = RC_ADDR(0x00015e06u);
    goto L_15E0C;

L_15E08:
    /* 00015e08   4  jsr (000151e6) */
    c->pc = RC_ADDR(0x00015e08u);
    rc_push32(c, m, RC_ADDR(0x00015e0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000151e6u);
    return;

L_15E0C:
    /* 00015e0c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00015e0cu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15E10:
    /* 00015e10   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015e10u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E14:
    /* 00015e14   4  cmp.w (12a6,A4),D0 */
    c->pc = RC_ADDR(0x00015e14u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15E18:
    /* 00015e18   4  blt 00015ae2 */
    c->pc = RC_ADDR(0x00015e18u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_15AE2; }

L_15E1C:
    /* 00015e1c   2  unlk A5 */
    c->pc = RC_ADDR(0x00015e1cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15E1E:
    /* 00015e1e   2  rts */
    c->pc = RC_ADDR(0x00015e1eu);
    rc_ret(c, m);
    return;

}
