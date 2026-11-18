/* fn_00015b8e - 884 byte(s), 246 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015b8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015b8eu): goto L_15B8E;
    case RC_ADDR(0x00015b92u): goto L_15B92;
    case RC_ADDR(0x00015b96u): goto L_15B96;
    case RC_ADDR(0x00015b98u): goto L_15B98;
    case RC_ADDR(0x00015b9eu): goto L_15B9E;
    case RC_ADDR(0x00015ba0u): goto L_15BA0;
    case RC_ADDR(0x00015ba4u): goto L_15BA4;
    case RC_ADDR(0x00015ba8u): goto L_15BA8;
    case RC_ADDR(0x00015baeu): goto L_15BAE;
    case RC_ADDR(0x00015bb0u): goto L_15BB0;
    case RC_ADDR(0x00015bb2u): goto L_15BB2;
    case RC_ADDR(0x00015bb6u): goto L_15BB6;
    case RC_ADDR(0x00015bb8u): goto L_15BB8;
    case RC_ADDR(0x00015bbeu): goto L_15BBE;
    case RC_ADDR(0x00015bc2u): goto L_15BC2;
    case RC_ADDR(0x00015bc4u): goto L_15BC4;
    case RC_ADDR(0x00015bc8u): goto L_15BC8;
    case RC_ADDR(0x00015bccu): goto L_15BCC;
    case RC_ADDR(0x00015bd0u): goto L_15BD0;
    case RC_ADDR(0x00015bd4u): goto L_15BD4;
    case RC_ADDR(0x00015bd8u): goto L_15BD8;
    case RC_ADDR(0x00015bdcu): goto L_15BDC;
    case RC_ADDR(0x00015be0u): goto L_15BE0;
    case RC_ADDR(0x00015be4u): goto L_15BE4;
    case RC_ADDR(0x00015be8u): goto L_15BE8;
    case RC_ADDR(0x00015becu): goto L_15BEC;
    case RC_ADDR(0x00015bf0u): goto L_15BF0;
    case RC_ADDR(0x00015bf4u): goto L_15BF4;
    case RC_ADDR(0x00015bf8u): goto L_15BF8;
    case RC_ADDR(0x00015bfcu): goto L_15BFC;
    case RC_ADDR(0x00015bfeu): goto L_15BFE;
    case RC_ADDR(0x00015c02u): goto L_15C02;
    case RC_ADDR(0x00015c04u): goto L_15C04;
    case RC_ADDR(0x00015c08u): goto L_15C08;
    case RC_ADDR(0x00015c0cu): goto L_15C0C;
    case RC_ADDR(0x00015c0eu): goto L_15C0E;
    case RC_ADDR(0x00015c12u): goto L_15C12;
    case RC_ADDR(0x00015c14u): goto L_15C14;
    case RC_ADDR(0x00015c16u): goto L_15C16;
    case RC_ADDR(0x00015c1au): goto L_15C1A;
    case RC_ADDR(0x00015c1eu): goto L_15C1E;
    case RC_ADDR(0x00015c20u): goto L_15C20;
    case RC_ADDR(0x00015c24u): goto L_15C24;
    case RC_ADDR(0x00015c26u): goto L_15C26;
    case RC_ADDR(0x00015c2au): goto L_15C2A;
    case RC_ADDR(0x00015c2cu): goto L_15C2C;
    case RC_ADDR(0x00015c30u): goto L_15C30;
    case RC_ADDR(0x00015c34u): goto L_15C34;
    case RC_ADDR(0x00015c36u): goto L_15C36;
    case RC_ADDR(0x00015c3au): goto L_15C3A;
    case RC_ADDR(0x00015c3eu): goto L_15C3E;
    case RC_ADDR(0x00015c42u): goto L_15C42;
    case RC_ADDR(0x00015c46u): goto L_15C46;
    case RC_ADDR(0x00015c4au): goto L_15C4A;
    case RC_ADDR(0x00015c4eu): goto L_15C4E;
    case RC_ADDR(0x00015c52u): goto L_15C52;
    case RC_ADDR(0x00015c56u): goto L_15C56;
    case RC_ADDR(0x00015c5cu): goto L_15C5C;
    case RC_ADDR(0x00015c60u): goto L_15C60;
    case RC_ADDR(0x00015c62u): goto L_15C62;
    case RC_ADDR(0x00015c68u): goto L_15C68;
    case RC_ADDR(0x00015c6au): goto L_15C6A;
    case RC_ADDR(0x00015c6eu): goto L_15C6E;
    case RC_ADDR(0x00015c72u): goto L_15C72;
    case RC_ADDR(0x00015c74u): goto L_15C74;
    case RC_ADDR(0x00015c78u): goto L_15C78;
    case RC_ADDR(0x00015c7au): goto L_15C7A;
    case RC_ADDR(0x00015c7eu): goto L_15C7E;
    case RC_ADDR(0x00015c80u): goto L_15C80;
    case RC_ADDR(0x00015c84u): goto L_15C84;
    case RC_ADDR(0x00015c88u): goto L_15C88;
    case RC_ADDR(0x00015c8cu): goto L_15C8C;
    case RC_ADDR(0x00015c90u): goto L_15C90;
    case RC_ADDR(0x00015c94u): goto L_15C94;
    case RC_ADDR(0x00015c96u): goto L_15C96;
    case RC_ADDR(0x00015c98u): goto L_15C98;
    case RC_ADDR(0x00015c9eu): goto L_15C9E;
    case RC_ADDR(0x00015ca2u): goto L_15CA2;
    case RC_ADDR(0x00015ca4u): goto L_15CA4;
    case RC_ADDR(0x00015ca8u): goto L_15CA8;
    case RC_ADDR(0x00015cacu): goto L_15CAC;
    case RC_ADDR(0x00015caeu): goto L_15CAE;
    case RC_ADDR(0x00015cb2u): goto L_15CB2;
    case RC_ADDR(0x00015cb6u): goto L_15CB6;
    case RC_ADDR(0x00015cb8u): goto L_15CB8;
    case RC_ADDR(0x00015cbcu): goto L_15CBC;
    case RC_ADDR(0x00015cc2u): goto L_15CC2;
    case RC_ADDR(0x00015cc4u): goto L_15CC4;
    case RC_ADDR(0x00015ccau): goto L_15CCA;
    case RC_ADDR(0x00015cccu): goto L_15CCC;
    case RC_ADDR(0x00015cd2u): goto L_15CD2;
    case RC_ADDR(0x00015cd8u): goto L_15CD8;
    case RC_ADDR(0x00015cdau): goto L_15CDA;
    case RC_ADDR(0x00015ce0u): goto L_15CE0;
    case RC_ADDR(0x00015ce2u): goto L_15CE2;
    case RC_ADDR(0x00015ce8u): goto L_15CE8;
    case RC_ADDR(0x00015cecu): goto L_15CEC;
    case RC_ADDR(0x00015cf2u): goto L_15CF2;
    case RC_ADDR(0x00015cf6u): goto L_15CF6;
    case RC_ADDR(0x00015cf8u): goto L_15CF8;
    case RC_ADDR(0x00015cfcu): goto L_15CFC;
    case RC_ADDR(0x00015cfeu): goto L_15CFE;
    case RC_ADDR(0x00015d02u): goto L_15D02;
    case RC_ADDR(0x00015d04u): goto L_15D04;
    case RC_ADDR(0x00015d08u): goto L_15D08;
    case RC_ADDR(0x00015d0au): goto L_15D0A;
    case RC_ADDR(0x00015d10u): goto L_15D10;
    case RC_ADDR(0x00015d12u): goto L_15D12;
    case RC_ADDR(0x00015d18u): goto L_15D18;
    case RC_ADDR(0x00015d1cu): goto L_15D1C;
    case RC_ADDR(0x00015d20u): goto L_15D20;
    case RC_ADDR(0x00015d22u): goto L_15D22;
    case RC_ADDR(0x00015d26u): goto L_15D26;
    case RC_ADDR(0x00015d2au): goto L_15D2A;
    case RC_ADDR(0x00015d2cu): goto L_15D2C;
    case RC_ADDR(0x00015d30u): goto L_15D30;
    case RC_ADDR(0x00015d34u): goto L_15D34;
    case RC_ADDR(0x00015d36u): goto L_15D36;
    case RC_ADDR(0x00015d3au): goto L_15D3A;
    case RC_ADDR(0x00015d3eu): goto L_15D3E;
    case RC_ADDR(0x00015d40u): goto L_15D40;
    case RC_ADDR(0x00015d44u): goto L_15D44;
    case RC_ADDR(0x00015d46u): goto L_15D46;
    case RC_ADDR(0x00015d4au): goto L_15D4A;
    case RC_ADDR(0x00015d4cu): goto L_15D4C;
    case RC_ADDR(0x00015d50u): goto L_15D50;
    case RC_ADDR(0x00015d52u): goto L_15D52;
    case RC_ADDR(0x00015d56u): goto L_15D56;
    case RC_ADDR(0x00015d58u): goto L_15D58;
    case RC_ADDR(0x00015d5cu): goto L_15D5C;
    case RC_ADDR(0x00015d60u): goto L_15D60;
    case RC_ADDR(0x00015d62u): goto L_15D62;
    case RC_ADDR(0x00015d68u): goto L_15D68;
    case RC_ADDR(0x00015d6eu): goto L_15D6E;
    case RC_ADDR(0x00015d70u): goto L_15D70;
    case RC_ADDR(0x00015d74u): goto L_15D74;
    case RC_ADDR(0x00015d78u): goto L_15D78;
    case RC_ADDR(0x00015d7au): goto L_15D7A;
    case RC_ADDR(0x00015d7cu): goto L_15D7C;
    case RC_ADDR(0x00015d80u): goto L_15D80;
    case RC_ADDR(0x00015d86u): goto L_15D86;
    case RC_ADDR(0x00015d8au): goto L_15D8A;
    case RC_ADDR(0x00015d8eu): goto L_15D8E;
    case RC_ADDR(0x00015d92u): goto L_15D92;
    case RC_ADDR(0x00015d94u): goto L_15D94;
    case RC_ADDR(0x00015d96u): goto L_15D96;
    case RC_ADDR(0x00015d9cu): goto L_15D9C;
    case RC_ADDR(0x00015d9eu): goto L_15D9E;
    case RC_ADDR(0x00015da0u): goto L_15DA0;
    case RC_ADDR(0x00015da6u): goto L_15DA6;
    case RC_ADDR(0x00015da8u): goto L_15DA8;
    case RC_ADDR(0x00015daau): goto L_15DAA;
    case RC_ADDR(0x00015db0u): goto L_15DB0;
    case RC_ADDR(0x00015db2u): goto L_15DB2;
    case RC_ADDR(0x00015db4u): goto L_15DB4;
    case RC_ADDR(0x00015dbau): goto L_15DBA;
    case RC_ADDR(0x00015dbeu): goto L_15DBE;
    case RC_ADDR(0x00015dc2u): goto L_15DC2;
    case RC_ADDR(0x00015dc4u): goto L_15DC4;
    case RC_ADDR(0x00015dc8u): goto L_15DC8;
    case RC_ADDR(0x00015dcau): goto L_15DCA;
    case RC_ADDR(0x00015dccu): goto L_15DCC;
    case RC_ADDR(0x00015dd2u): goto L_15DD2;
    case RC_ADDR(0x00015dd4u): goto L_15DD4;
    case RC_ADDR(0x00015ddau): goto L_15DDA;
    case RC_ADDR(0x00015ddcu): goto L_15DDC;
    case RC_ADDR(0x00015de2u): goto L_15DE2;
    case RC_ADDR(0x00015de4u): goto L_15DE4;
    case RC_ADDR(0x00015de8u): goto L_15DE8;
    case RC_ADDR(0x00015deau): goto L_15DEA;
    case RC_ADDR(0x00015df0u): goto L_15DF0;
    case RC_ADDR(0x00015df2u): goto L_15DF2;
    case RC_ADDR(0x00015df8u): goto L_15DF8;
    case RC_ADDR(0x00015dfau): goto L_15DFA;
    case RC_ADDR(0x00015e00u): goto L_15E00;
    case RC_ADDR(0x00015e02u): goto L_15E02;
    case RC_ADDR(0x00015e08u): goto L_15E08;
    case RC_ADDR(0x00015e0au): goto L_15E0A;
    case RC_ADDR(0x00015e22u): goto L_15E22;
    case RC_ADDR(0x00015e28u): goto L_15E28;
    case RC_ADDR(0x00015e2au): goto L_15E2A;
    case RC_ADDR(0x00015e2cu): goto L_15E2C;
    case RC_ADDR(0x00015e30u): goto L_15E30;
    case RC_ADDR(0x00015e34u): goto L_15E34;
    case RC_ADDR(0x00015e38u): goto L_15E38;
    case RC_ADDR(0x00015e3cu): goto L_15E3C;
    case RC_ADDR(0x00015e40u): goto L_15E40;
    case RC_ADDR(0x00015e42u): goto L_15E42;
    case RC_ADDR(0x00015e46u): goto L_15E46;
    case RC_ADDR(0x00015e4au): goto L_15E4A;
    case RC_ADDR(0x00015e4eu): goto L_15E4E;
    case RC_ADDR(0x00015e52u): goto L_15E52;
    case RC_ADDR(0x00015e56u): goto L_15E56;
    case RC_ADDR(0x00015e58u): goto L_15E58;
    case RC_ADDR(0x00015e5cu): goto L_15E5C;
    case RC_ADDR(0x00015e60u): goto L_15E60;
    case RC_ADDR(0x00015e64u): goto L_15E64;
    case RC_ADDR(0x00015e68u): goto L_15E68;
    case RC_ADDR(0x00015e6cu): goto L_15E6C;
    case RC_ADDR(0x00015e6eu): goto L_15E6E;
    case RC_ADDR(0x00015e72u): goto L_15E72;
    case RC_ADDR(0x00015e76u): goto L_15E76;
    case RC_ADDR(0x00015e7au): goto L_15E7A;
    case RC_ADDR(0x00015e7eu): goto L_15E7E;
    case RC_ADDR(0x00015e82u): goto L_15E82;
    case RC_ADDR(0x00015e84u): goto L_15E84;
    case RC_ADDR(0x00015e88u): goto L_15E88;
    case RC_ADDR(0x00015e8cu): goto L_15E8C;
    case RC_ADDR(0x00015e90u): goto L_15E90;
    case RC_ADDR(0x00015e94u): goto L_15E94;
    case RC_ADDR(0x00015e98u): goto L_15E98;
    case RC_ADDR(0x00015e9au): goto L_15E9A;
    case RC_ADDR(0x00015e9eu): goto L_15E9E;
    case RC_ADDR(0x00015ea2u): goto L_15EA2;
    case RC_ADDR(0x00015ea6u): goto L_15EA6;
    case RC_ADDR(0x00015eaau): goto L_15EAA;
    case RC_ADDR(0x00015eaeu): goto L_15EAE;
    case RC_ADDR(0x00015eb0u): goto L_15EB0;
    case RC_ADDR(0x00015eb4u): goto L_15EB4;
    case RC_ADDR(0x00015eb8u): goto L_15EB8;
    case RC_ADDR(0x00015ebcu): goto L_15EBC;
    case RC_ADDR(0x00015ec0u): goto L_15EC0;
    case RC_ADDR(0x00015ec4u): goto L_15EC4;
    case RC_ADDR(0x00015ec6u): goto L_15EC6;
    case RC_ADDR(0x00015ecau): goto L_15ECA;
    case RC_ADDR(0x00015eceu): goto L_15ECE;
    case RC_ADDR(0x00015ed2u): goto L_15ED2;
    case RC_ADDR(0x00015ed6u): goto L_15ED6;
    case RC_ADDR(0x00015edau): goto L_15EDA;
    case RC_ADDR(0x00015edcu): goto L_15EDC;
    case RC_ADDR(0x00015ee0u): goto L_15EE0;
    case RC_ADDR(0x00015ee4u): goto L_15EE4;
    case RC_ADDR(0x00015ee8u): goto L_15EE8;
    case RC_ADDR(0x00015eecu): goto L_15EEC;
    case RC_ADDR(0x00015eeeu): goto L_15EEE;
    case RC_ADDR(0x00015ef0u): goto L_15EF0;
    case RC_ADDR(0x00015ef4u): goto L_15EF4;
    case RC_ADDR(0x00015ef8u): goto L_15EF8;
    case RC_ADDR(0x00015efcu): goto L_15EFC;
    case RC_ADDR(0x00015f00u): goto L_15F00;
    case RC_ADDR(0x00015f02u): goto L_15F02;
    case RC_ADDR(0x00015f06u): goto L_15F06;
    case RC_ADDR(0x00015f0au): goto L_15F0A;
    case RC_ADDR(0x00015f0cu): goto L_15F0C;
    case RC_ADDR(0x00015f10u): goto L_15F10;
    case RC_ADDR(0x00015f14u): goto L_15F14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15B8E:
    /* 00015b8e   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00015b8eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_15B92:
    /* 00015b92   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x00015b92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_15B96:
    /* 00015b96   2  beq 00015bb2 */
    c->pc = RC_ADDR(0x00015b96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15BB2;

L_15B98:
    /* 00015b98   6  cmpi.w #32,(1adc,A4) */
    c->pc = RC_ADDR(0x00015b98u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_cmp(c, RC_W, t0, 0x00000032u);

L_15B9E:
    /* 00015b9e   2  bne 00015bb2 */
    c->pc = RC_ADDR(0x00015b9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15BB2;

L_15BA0:
    /* 00015ba0   4  clr.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015ba0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15BA4:
    /* 00015ba4   4  jsr (00015ab0) */
    c->pc = RC_ADDR(0x00015ba4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015ba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015ab0u);
    return;

L_15BA8:
    /* 00015ba8   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00015ba8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BAE:
    /* 00015bae   2  unlk A5 */
    c->pc = RC_ADDR(0x00015baeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15BB0:
    /* 00015bb0   2  rts */
    c->pc = RC_ADDR(0x00015bb0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_15BB2:
    /* 00015bb2   4  tst.w (1b3a,A4) */
    c->pc = RC_ADDR(0x00015bb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b3au));
    rc_set_nzvc(c, t0, RC_W);

L_15BB6:
    /* 00015bb6   2  beq 00015bc4 */
    c->pc = RC_ADDR(0x00015bb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15BC4;

L_15BB8:
    /* 00015bb8   6  move.w #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015bb8u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BBE:
    /* 00015bbe   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00015bbeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15BC2:
    /* 00015bc2   2  bra 00015bdc */
    c->pc = RC_ADDR(0x00015bc2u);
    rc_step(c, m, 10);
    goto L_15BDC;

L_15BC4:
    /* 00015bc4   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015bc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BC8:
    /* 00015bc8   4  and.w #4,D0 */
    c->pc = RC_ADDR(0x00015bc8u);
    rc_step(c, m, 10);
    t0 = 0x00000004u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_15BCC:
    /* 00015bcc   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015bccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BD0:
    /* 00015bd0   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015bd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BD4:
    /* 00015bd4   4  and.w #8,D0 */
    c->pc = RC_ADDR(0x00015bd4u);
    rc_step(c, m, 10);
    t0 = 0x00000008u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_15BD8:
    /* 00015bd8   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015bd8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BDC:
    /* 00015bdc   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015bdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BE0:
    /* 00015be0   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00015be0u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_15BE4:
    /* 00015be4   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00015be4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BE8:
    /* 00015be8   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015be8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BEC:
    /* 00015bec   4  and.w #2,D0 */
    c->pc = RC_ADDR(0x00015becu);
    rc_step(c, m, 10);
    t0 = 0x00000002u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_15BF0:
    /* 00015bf0   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00015bf0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BF4:
    /* 00015bf4   4  move.w (1ad8,A4),-(A7) */
    c->pc = RC_ADDR(0x00015bf4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15BF8:
    /* 00015bf8   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00015bf8u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00015bfcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_15BFC:
    /* 00015bfc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015bfcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15BFE:
    /* 00015bfe   4  mulu.w (fffffa2e,A4),D0 */
    c->pc = RC_ADDR(0x00015bfeu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_mulu(c, 0, t0);

L_15C02:
    /* 00015c02   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015c02u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C04:
    /* 00015c04   4  move.w (1ada,A4),-(A7) */
    c->pc = RC_ADDR(0x00015c04u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C08:
    /* 00015c08   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00015c08u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00015c0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_15C0C:
    /* 00015c0c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015c0cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15C0E:
    /* 00015c0e   4  mulu.w (fffffa30,A4),D0 */
    c->pc = RC_ADDR(0x00015c0eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_mulu(c, 0, t0);

L_15C12:
    /* 00015c12   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x00015c12u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C14:
    /* 00015c14   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00015c14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15C16:
    /* 00015c16   4  move.w D1,(1ac8,A4) */
    c->pc = RC_ADDR(0x00015c16u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1ac8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C1A:
    /* 00015c1a   4  tst.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015c1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac8u));
    rc_set_nzvc(c, t0, RC_W);

L_15C1E:
    /* 00015c1e   2  beq 00015c98 */
    c->pc = RC_ADDR(0x00015c1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15C98;

L_15C20:
    /* 00015c20   4  move.w (14f2,A4),D0 */
    c->pc = RC_ADDR(0x00015c20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C24:
    /* 00015c24   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x00015c24u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_15C26:
    /* 00015c26   4  move.w #276,D1 */
    c->pc = RC_ADDR(0x00015c26u);
    rc_step(c, m, 8);
    t0 = 0x00000276u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C2A:
    /* 00015c2a   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00015c2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15C2C:
    /* 00015c2c   4  move.w D1,(1b32,A4) */
    c->pc = RC_ADDR(0x00015c2cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C30:
    /* 00015c30   4  tst.w (ffffb3ca,A4) */
    c->pc = RC_ADDR(0x00015c30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c36u));
    rc_set_nzvc(c, t0, RC_W);

L_15C34:
    /* 00015c34   2  beq 00015c56 */
    c->pc = RC_ADDR(0x00015c34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15C56;

L_15C36:
    /* 00015c36   4  clr.w (ffffb3ca,A4) */
    c->pc = RC_ADDR(0x00015c36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4c36u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15C3A:
    /* 00015c3a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00015c3au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C3E:
    /* 00015c3e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00015c3eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C42:
    /* 00015c42   4  move.l (1b34,A4),-(A7) */
    c->pc = RC_ADDR(0x00015c42u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1b34u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15C46:
    /* 00015c46   4  move.w (1b32,A4),-(A7) */
    c->pc = RC_ADDR(0x00015c46u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b32u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C4A:
    /* 00015c4a   4  move.l (ffffb386,A4),-(A7) */
    c->pc = RC_ADDR(0x00015c4au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15C4E:
    /* 00015c4e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00015c4eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00015c52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_15C52:
    /* 00015c52   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00015c52u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_15C56:
    /* 00015c56   6  move.w #3f,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00015c56u);
    rc_step(c, m, 16);
    t0 = 0x0000003fu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C5C:
    /* 00015c5c   4  tst.w (1b2c,A4) */
    c->pc = RC_ADDR(0x00015c5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_set_nzvc(c, t0, RC_W);

L_15C60:
    /* 00015c60   2  beq 00015c80 */
    c->pc = RC_ADDR(0x00015c60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15C80;

L_15C62:
    /* 00015c62   6  cmpi.w #a,(1b2c,A4) */
    c->pc = RC_ADDR(0x00015c62u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2cu));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_15C68:
    /* 00015c68   2  bge 00015c7e */
    c->pc = RC_ADDR(0x00015c68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15C7E;

L_15C6A:
    /* 00015c6a   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00015c6au);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C6E:
    /* 00015c6e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00015c6eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00015c72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_15C72:
    /* 00015c72   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015c72u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15C74:
    /* 00015c74   4  cmp.w #c8,D0 */
    c->pc = RC_ADDR(0x00015c74u);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15C78:
    /* 00015c78   2  bge 00015c7e */
    c->pc = RC_ADDR(0x00015c78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15C7E;

L_15C7A:
    /* 00015c7a   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00015c7au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15C7E:
    /* 00015c7e   2  bra 00015c84 */
    c->pc = RC_ADDR(0x00015c7eu);
    rc_step(c, m, 10);
    goto L_15C84;

L_15C80:
    /* 00015c80   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00015c80u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15C84:
    /* 00015c84   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00015c84u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C88:
    /* 00015c88   4  move.w (1b32,A4),-(A7) */
    c->pc = RC_ADDR(0x00015c88u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b32u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C8C:
    /* 00015c8c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00015c8cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C90:
    /* 00015c90   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x00015c90u);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x00015c94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_15C94:
    /* 00015c94   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00015c94u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_15C96:
    /* 00015c96   2  bra 00015c9e */
    c->pc = RC_ADDR(0x00015c96u);
    rc_step(c, m, 10);
    goto L_15C9E;

L_15C98:
    /* 00015c98   6  move.w #1,(ffffb3ca,A4) */
    c->pc = RC_ADDR(0x00015c98u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4c36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15C9E:
    /* 00015c9e   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x00015c9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_15CA2:
    /* 00015ca2   2  beq 00015ca8 */
    c->pc = RC_ADDR(0x00015ca2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15CA8;

L_15CA4:
    /* 00015ca4   4  bra 00015bae */
    c->pc = RC_ADDR(0x00015ca4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15BAE;

L_15CA8:
    /* 00015ca8   4  tst.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00015ca8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4da8u));
    rc_set_nzvc(c, t0, RC_W);

L_15CAC:
    /* 00015cac   2  beq 00015cf2 */
    c->pc = RC_ADDR(0x00015cacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15CF2;

L_15CAE:
    /* 00015cae   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00015caeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15CB2:
    /* 00015cb2   4  tst.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015cb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac8u));
    rc_set_nzvc(c, t0, RC_W);

L_15CB6:
    /* 00015cb6   2  bne 00015cec */
    c->pc = RC_ADDR(0x00015cb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15CEC;

L_15CB8:
    /* 00015cb8   4  jsr (00015ab0) */
    c->pc = RC_ADDR(0x00015cb8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015cbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015ab0u);
    return;

L_15CBC:
    /* 00015cbc   6  cmpi.w #a0,(6fc,A4) */
    c->pc = RC_ADDR(0x00015cbcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x000000a0u);

L_15CC2:
    /* 00015cc2   2  bls 00015ccc */
    c->pc = RC_ADDR(0x00015cc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15CCC;

L_15CC4:
    /* 00015cc4   6  subi.w #17,(6fc,A4) */
    c->pc = RC_ADDR(0x00015cc4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000017u;
    rc_flags_sub(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15CCA:
    /* 00015cca   2  bra 00015cd2 */
    c->pc = RC_ADDR(0x00015ccau);
    rc_step(c, m, 10);
    goto L_15CD2;

L_15CCC:
    /* 00015ccc   6  addi.w #17,(6fc,A4) */
    c->pc = RC_ADDR(0x00015cccu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000017u;
    rc_flags_add(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15CD2:
    /* 00015cd2   6  cmpi.w #64,(6fe,A4) */
    c->pc = RC_ADDR(0x00015cd2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_15CD8:
    /* 00015cd8   2  bls 00015ce2 */
    c->pc = RC_ADDR(0x00015cd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15CE2;

L_15CDA:
    /* 00015cda   6  subi.w #17,(6fe,A4) */
    c->pc = RC_ADDR(0x00015cdau);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000017u;
    rc_flags_sub(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15CE0:
    /* 00015ce0   2  bra 00015ce8 */
    c->pc = RC_ADDR(0x00015ce0u);
    rc_step(c, m, 10);
    goto L_15CE8;

L_15CE2:
    /* 00015ce2   6  addi.w #17,(6fe,A4) */
    c->pc = RC_ADDR(0x00015ce2u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000017u;
    rc_flags_add(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15CE8:
    /* 00015ce8   4  bra 00015bae */
    c->pc = RC_ADDR(0x00015ce8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15BAE;

L_15CEC:
    /* 00015cec   6  move.w #1,(1b3c,A4) */
    c->pc = RC_ADDR(0x00015cecu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15CF2:
    /* 00015cf2   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00015cf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_15CF6:
    /* 00015cf6   2  beq 00015d1c */
    c->pc = RC_ADDR(0x00015cf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D1C;

L_15CF8:
    /* 00015cf8   4  tst.w (1b3c,A4) */
    c->pc = RC_ADDR(0x00015cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b3cu));
    rc_set_nzvc(c, t0, RC_W);

L_15CFC:
    /* 00015cfc   2  beq 00015d1c */
    c->pc = RC_ADDR(0x00015cfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D1C;

L_15CFE:
    /* 00015cfe   4  tst.w (1b2a,A4) */
    c->pc = RC_ADDR(0x00015cfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2au));
    rc_set_nzvc(c, t0, RC_W);

L_15D02:
    /* 00015d02   2  beq 00015d1c */
    c->pc = RC_ADDR(0x00015d02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D1C;

L_15D04:
    /* 00015d04   4  tst.w (1b38,A4) */
    c->pc = RC_ADDR(0x00015d04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b38u));
    rc_set_nzvc(c, t0, RC_W);

L_15D08:
    /* 00015d08   2  bne 00015d1c */
    c->pc = RC_ADDR(0x00015d08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15D1C;

L_15D0A:
    /* 00015d0a   6  cmpi.w #5,(14f2,A4) */
    c->pc = RC_ADDR(0x00015d0au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_15D10:
    /* 00015d10   2  ble 00015d1c */
    c->pc = RC_ADDR(0x00015d10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15D1C;

L_15D12:
    /* 00015d12   6  move.w #1,(1b38,A4) */
    c->pc = RC_ADDR(0x00015d12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D18:
    /* 00015d18   4  clr.w (1b3c,A4) */
    c->pc = RC_ADDR(0x00015d18u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15D1C:
    /* 00015d1c   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00015d1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_15D20:
    /* 00015d20   2  beq 00015d26 */
    c->pc = RC_ADDR(0x00015d20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D26;

L_15D22:
    /* 00015d22   4  jsr (000159d2) */
    c->pc = RC_ADDR(0x00015d22u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015d26u));
    rc_depth++;
    c->pc = RC_ADDR(0x000159d2u);
    return;

L_15D26:
    /* 00015d26   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00015d26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_15D2A:
    /* 00015d2a   2  beq 00015d30 */
    c->pc = RC_ADDR(0x00015d2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D30;

L_15D2C:
    /* 00015d2c   4  jsr (00015a56) */
    c->pc = RC_ADDR(0x00015d2cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015d30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015a56u);
    return;

L_15D30:
    /* 00015d30   4  tst.w (1ac8,A4) */
    c->pc = RC_ADDR(0x00015d30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac8u));
    rc_set_nzvc(c, t0, RC_W);

L_15D34:
    /* 00015d34   2  beq 00015d74 */
    c->pc = RC_ADDR(0x00015d34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D74;

L_15D36:
    /* 00015d36   4  move.w (fffffa34,A4),D0 */
    c->pc = RC_ADDR(0x00015d36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D3A:
    /* 00015d3a   4  cmp.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15D3E:
    /* 00015d3e   2  beq 00015d74 */
    c->pc = RC_ADDR(0x00015d3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D74;

L_15D40:
    /* 00015d40   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00015d40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_15D44:
    /* 00015d44   2  bne 00015d4c */
    c->pc = RC_ADDR(0x00015d44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15D4C;

L_15D46:
    /* 00015d46   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00015d46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_15D4A:
    /* 00015d4a   2  beq 00015d74 */
    c->pc = RC_ADDR(0x00015d4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D74;

L_15D4C:
    /* 00015d4c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00015d4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_15D50:
    /* 00015d50   2  beq 00015d58 */
    c->pc = RC_ADDR(0x00015d50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15D58;

L_15D52:
    /* 00015d52   4  addq.w #1,(1ace,A4) */
    c->pc = RC_ADDR(0x00015d52u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1aceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15D56:
    /* 00015d56   2  bra 00015d5c */
    c->pc = RC_ADDR(0x00015d56u);
    rc_step(c, m, 10);
    goto L_15D5C;

L_15D58:
    /* 00015d58   4  subq.w #1,(1ace,A4) */
    c->pc = RC_ADDR(0x00015d58u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1aceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15D5C:
    /* 00015d5c   4  tst.w (1ace,A4) */
    c->pc = RC_ADDR(0x00015d5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1aceu));
    rc_set_nzvc(c, t0, RC_W);

L_15D60:
    /* 00015d60   2  bge 00015d68 */
    c->pc = RC_ADDR(0x00015d60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15D68;

L_15D62:
    /* 00015d62   6  move.w #7,(1ace,A4) */
    c->pc = RC_ADDR(0x00015d62u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x1aceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D68:
    /* 00015d68   6  cmpi.w #7,(1ace,A4) */
    c->pc = RC_ADDR(0x00015d68u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1aceu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_15D6E:
    /* 00015d6e   2  ble 00015d74 */
    c->pc = RC_ADDR(0x00015d6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15D74;

L_15D70:
    /* 00015d70   4  clr.w (1ace,A4) */
    c->pc = RC_ADDR(0x00015d70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1aceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15D74:
    /* 00015d74   4  move.w (1ace,A4),D0 */
    c->pc = RC_ADDR(0x00015d74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1aceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D78:
    /* 00015d78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015d78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15D7A:
    /* 00015d7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015d7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15D7C:
    /* 00015d7c   4  lea (ffffb376,A4),A0 */
    c->pc = RC_ADDR(0x00015d7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c8au);

L_15D80:
    /* 00015d80   6  move.w (0,A0,D0.w),(1ac6,A4) */
    c->pc = RC_ADDR(0x00015d80u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1ac6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D86:
    /* 00015d86   4  clr.w (1ad8,A4) */
    c->pc = RC_ADDR(0x00015d86u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ad8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15D8A:
    /* 00015d8a   4  clr.w (1ada,A4) */
    c->pc = RC_ADDR(0x00015d8au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1adau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15D8E:
    /* 00015d8e   4  move.w (1ac6,A4),D0 */
    c->pc = RC_ADDR(0x00015d8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D92:
    /* 00015d92   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015d92u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_15D94:
    /* 00015d94   2  bcc 00015d9c */
    c->pc = RC_ADDR(0x00015d94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15D9C;

L_15D96:
    /* 00015d96   6  move.w #1,(1ad8,A4) */
    c->pc = RC_ADDR(0x00015d96u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ad8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15D9C:
    /* 00015d9c   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015d9cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_15D9E:
    /* 00015d9e   2  bcc 00015da6 */
    c->pc = RC_ADDR(0x00015d9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15DA6;

L_15DA0:
    /* 00015da0   6  move.w #ffff,(1ad8,A4) */
    c->pc = RC_ADDR(0x00015da0u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1ad8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DA6:
    /* 00015da6   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015da6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_15DA8:
    /* 00015da8   2  bcc 00015db0 */
    c->pc = RC_ADDR(0x00015da8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15DB0;

L_15DAA:
    /* 00015daa   6  move.w #1,(1ada,A4) */
    c->pc = RC_ADDR(0x00015daau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1adau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DB0:
    /* 00015db0   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015db0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_15DB2:
    /* 00015db2   2  bcc 00015dba */
    c->pc = RC_ADDR(0x00015db2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15DBA;

L_15DB4:
    /* 00015db4   6  move.w #ffff,(1ada,A4) */
    c->pc = RC_ADDR(0x00015db4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1adau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DBA:
    /* 00015dba   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00015dbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DBE:
    /* 00015dbe   4  cmp.w (fffffa34,A4),D0 */
    c->pc = RC_ADDR(0x00015dbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ccu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15DC2:
    /* 00015dc2   2  beq 00015e34 */
    c->pc = RC_ADDR(0x00015dc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15E34;

L_15DC4:
    /* 00015dc4   4  move.w (1ac6,A4),D0 */
    c->pc = RC_ADDR(0x00015dc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DC8:
    /* 00015dc8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015dc8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15DCA:
    /* 00015dca   2  bra 00015e22 */
    c->pc = RC_ADDR(0x00015dcau);
    rc_step(c, m, 10);
    goto L_15E22;

L_15DCC:
    /* 00015dcc   6  move.w #2,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015dccu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DD2:
    /* 00015dd2   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015dd2u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DD4:
    /* 00015dd4   6  move.w #3,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015dd4u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DDA:
    /* 00015dda   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015ddau);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DDC:
    /* 00015ddc   6  move.w #1,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015ddcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DE2:
    /* 00015de2   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015de2u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DE4:
    /* 00015de4   4  clr.w (1ac4,A4) */
    c->pc = RC_ADDR(0x00015de4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15DE8:
    /* 00015de8   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015de8u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DEA:
    /* 00015dea   6  move.w #6,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015deau);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DF0:
    /* 00015df0   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015df0u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DF2:
    /* 00015df2   6  move.w #4,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015df2u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15DF8:
    /* 00015df8   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015df8u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15DFA:
    /* 00015dfa   6  move.w #7,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015dfau);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E00:
    /* 00015e00   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015e00u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15E02:
    /* 00015e02   6  move.w #5,(1ac4,A4) */
    c->pc = RC_ADDR(0x00015e02u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E08:
    /* 00015e08   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015e08u);
    rc_step(c, m, 10);
    goto L_15E34;

L_15E0A:
    /* 00015e0a   2  bra 00015e34 */
    c->pc = RC_ADDR(0x00015e0au);
    rc_step(c, m, 10);
    goto L_15E34;

L_15E22:
    /* 00015e22   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00015e22u);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_15E28:
    /* 00015e28   2  bcc 00015e34 */
    c->pc = RC_ADDR(0x00015e28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15E34;

L_15E2A:
    /* 00015e2a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015e2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15E2C:
    /* 00015e2c   4  move.w (00015e0c),D0 */
    c->pc = RC_ADDR(0x00015e2cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00015e0cu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E30:
    /* 00015e30   4  jmp (00015e32) */
    c->pc = RC_ADDR(0x00015e30u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00015e32u) + t4);
    c->pc = t3;
    return;

L_15E34:
    /* 00015e34   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015e34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E38:
    /* 00015e38   4  lea (ffffb38a,A4),A0 */
    c->pc = RC_ADDR(0x00015e38u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c76u);

L_15E3C:
    /* 00015e3c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015e3cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E40:
    /* 00015e40   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015e40u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15E42:
    /* 00015e42   4  add.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00015e42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15E46:
    /* 00015e46   4  move.w D1,(1b16,A4) */
    c->pc = RC_ADDR(0x00015e46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E4A:
    /* 00015e4a   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015e4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E4E:
    /* 00015e4e   4  lea (ffffb392,A4),A0 */
    c->pc = RC_ADDR(0x00015e4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c6eu);

L_15E52:
    /* 00015e52   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015e52u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E56:
    /* 00015e56   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015e56u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15E58:
    /* 00015e58   4  add.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00015e58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15E5C:
    /* 00015e5c   4  move.w D1,(1b1a,A4) */
    c->pc = RC_ADDR(0x00015e5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E60:
    /* 00015e60   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015e60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E64:
    /* 00015e64   4  lea (ffffb39a,A4),A0 */
    c->pc = RC_ADDR(0x00015e64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c66u);

L_15E68:
    /* 00015e68   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015e68u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E6C:
    /* 00015e6c   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015e6cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15E6E:
    /* 00015e6e   4  add.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00015e6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15E72:
    /* 00015e72   4  move.w D1,(1b1e,A4) */
    c->pc = RC_ADDR(0x00015e72u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E76:
    /* 00015e76   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015e76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E7A:
    /* 00015e7a   4  lea (ffffb3a2,A4),A0 */
    c->pc = RC_ADDR(0x00015e7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c5eu);

L_15E7E:
    /* 00015e7e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015e7eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E82:
    /* 00015e82   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015e82u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15E84:
    /* 00015e84   4  add.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x00015e84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15E88:
    /* 00015e88   4  move.w D1,(1b22,A4) */
    c->pc = RC_ADDR(0x00015e88u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E8C:
    /* 00015e8c   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015e8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E90:
    /* 00015e90   4  lea (ffffb3aa,A4),A0 */
    c->pc = RC_ADDR(0x00015e90u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c56u);

L_15E94:
    /* 00015e94   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015e94u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E98:
    /* 00015e98   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015e98u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15E9A:
    /* 00015e9a   4  add.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015e9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15E9E:
    /* 00015e9e   4  move.w D1,(1b18,A4) */
    c->pc = RC_ADDR(0x00015e9eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EA2:
    /* 00015ea2   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015ea2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EA6:
    /* 00015ea6   4  lea (ffffb3b2,A4),A0 */
    c->pc = RC_ADDR(0x00015ea6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c4eu);

L_15EAA:
    /* 00015eaa   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015eaau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15EAE:
    /* 00015eae   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015eaeu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15EB0:
    /* 00015eb0   4  add.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015eb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15EB4:
    /* 00015eb4   4  move.w D1,(1b1c,A4) */
    c->pc = RC_ADDR(0x00015eb4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EB8:
    /* 00015eb8   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015eb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EBC:
    /* 00015ebc   4  lea (ffffb3ba,A4),A0 */
    c->pc = RC_ADDR(0x00015ebcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c46u);

L_15EC0:
    /* 00015ec0   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015ec0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15EC4:
    /* 00015ec4   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015ec4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15EC6:
    /* 00015ec6   4  add.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015ec6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15ECA:
    /* 00015eca   4  move.w D1,(1b20,A4) */
    c->pc = RC_ADDR(0x00015ecau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b20u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15ECE:
    /* 00015ece   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015eceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15ED2:
    /* 00015ed2   4  lea (ffffb3c2,A4),A0 */
    c->pc = RC_ADDR(0x00015ed2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c3eu);

L_15ED6:
    /* 00015ed6   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015ed6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15EDA:
    /* 00015eda   2  ext.w D1 */
    c->pc = RC_ADDR(0x00015edau);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_15EDC:
    /* 00015edc   4  add.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00015edcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15EE0:
    /* 00015ee0   4  move.w D1,(1b24,A4) */
    c->pc = RC_ADDR(0x00015ee0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EE4:
    /* 00015ee4   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00015ee4u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EE8:
    /* 00015ee8   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x00015ee8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EEC:
    /* 00015eec   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015eecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15EEE:
    /* 00015eee   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015eeeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_15EF0:
    /* 00015ef0   4  lea (1ade,A4),A0 */
    c->pc = RC_ADDR(0x00015ef0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1adeu);

L_15EF4:
    /* 00015ef4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00015ef4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15EF8:
    /* 00015ef8   4  move.w (14f2,A4),D0 */
    c->pc = RC_ADDR(0x00015ef8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EFC:
    /* 00015efc   4  add.w (6fe,A4),D0 */
    c->pc = RC_ADDR(0x00015efcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15F00:
    /* 00015f00   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015f00u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F02:
    /* 00015f02   4  move.w (14f2,A4),D0 */
    c->pc = RC_ADDR(0x00015f02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F06:
    /* 00015f06   4  add.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x00015f06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15F0A:
    /* 00015f0a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015f0au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F0C:
    /* 00015f0c   4  jsr (00012e7c) */
    c->pc = RC_ADDR(0x00015f0cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015f10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012e7cu);
    return;

L_15F10:
    /* 00015f10   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00015f10u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_15F14:
    /* 00015f14   4  bra 00015bae */
    c->pc = RC_ADDR(0x00015f14u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15BAE;

}
