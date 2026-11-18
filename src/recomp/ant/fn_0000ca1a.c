/* fn_0000ca1a - 812 byte(s), 217 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ca1a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ca1au): goto L_CA1A;
    case RC_ADDR(0x0000ca1eu): goto L_CA1E;
    case RC_ADDR(0x0000ca22u): goto L_CA22;
    case RC_ADDR(0x0000ca28u): goto L_CA28;
    case RC_ADDR(0x0000ca2cu): goto L_CA2C;
    case RC_ADDR(0x0000ca30u): goto L_CA30;
    case RC_ADDR(0x0000ca34u): goto L_CA34;
    case RC_ADDR(0x0000ca3au): goto L_CA3A;
    case RC_ADDR(0x0000ca3cu): goto L_CA3C;
    case RC_ADDR(0x0000ca40u): goto L_CA40;
    case RC_ADDR(0x0000ca44u): goto L_CA44;
    case RC_ADDR(0x0000ca48u): goto L_CA48;
    case RC_ADDR(0x0000ca4au): goto L_CA4A;
    case RC_ADDR(0x0000ca4cu): goto L_CA4C;
    case RC_ADDR(0x0000ca50u): goto L_CA50;
    case RC_ADDR(0x0000ca54u): goto L_CA54;
    case RC_ADDR(0x0000ca58u): goto L_CA58;
    case RC_ADDR(0x0000ca5au): goto L_CA5A;
    case RC_ADDR(0x0000ca60u): goto L_CA60;
    case RC_ADDR(0x0000ca64u): goto L_CA64;
    case RC_ADDR(0x0000ca68u): goto L_CA68;
    case RC_ADDR(0x0000ca6au): goto L_CA6A;
    case RC_ADDR(0x0000ca6eu): goto L_CA6E;
    case RC_ADDR(0x0000ca72u): goto L_CA72;
    case RC_ADDR(0x0000ca76u): goto L_CA76;
    case RC_ADDR(0x0000ca7cu): goto L_CA7C;
    case RC_ADDR(0x0000ca80u): goto L_CA80;
    case RC_ADDR(0x0000ca84u): goto L_CA84;
    case RC_ADDR(0x0000ca86u): goto L_CA86;
    case RC_ADDR(0x0000ca88u): goto L_CA88;
    case RC_ADDR(0x0000ca8cu): goto L_CA8C;
    case RC_ADDR(0x0000ca92u): goto L_CA92;
    case RC_ADDR(0x0000ca96u): goto L_CA96;
    case RC_ADDR(0x0000ca9au): goto L_CA9A;
    case RC_ADDR(0x0000ca9cu): goto L_CA9C;
    case RC_ADDR(0x0000caa0u): goto L_CAA0;
    case RC_ADDR(0x0000caa4u): goto L_CAA4;
    case RC_ADDR(0x0000caa6u): goto L_CAA6;
    case RC_ADDR(0x0000caaau): goto L_CAAA;
    case RC_ADDR(0x0000caaeu): goto L_CAAE;
    case RC_ADDR(0x0000cab2u): goto L_CAB2;
    case RC_ADDR(0x0000cab6u): goto L_CAB6;
    case RC_ADDR(0x0000cab8u): goto L_CAB8;
    case RC_ADDR(0x0000cabcu): goto L_CABC;
    case RC_ADDR(0x0000cac0u): goto L_CAC0;
    case RC_ADDR(0x0000cac2u): goto L_CAC2;
    case RC_ADDR(0x0000cac6u): goto L_CAC6;
    case RC_ADDR(0x0000cacau): goto L_CACA;
    case RC_ADDR(0x0000caccu): goto L_CACC;
    case RC_ADDR(0x0000cad0u): goto L_CAD0;
    case RC_ADDR(0x0000cad6u): goto L_CAD6;
    case RC_ADDR(0x0000cad8u): goto L_CAD8;
    case RC_ADDR(0x0000cadcu): goto L_CADC;
    case RC_ADDR(0x0000cae0u): goto L_CAE0;
    case RC_ADDR(0x0000cae2u): goto L_CAE2;
    case RC_ADDR(0x0000cae6u): goto L_CAE6;
    case RC_ADDR(0x0000caeau): goto L_CAEA;
    case RC_ADDR(0x0000caeeu): goto L_CAEE;
    case RC_ADDR(0x0000caf0u): goto L_CAF0;
    case RC_ADDR(0x0000caf4u): goto L_CAF4;
    case RC_ADDR(0x0000caf8u): goto L_CAF8;
    case RC_ADDR(0x0000cafcu): goto L_CAFC;
    case RC_ADDR(0x0000cb00u): goto L_CB00;
    case RC_ADDR(0x0000cb02u): goto L_CB02;
    case RC_ADDR(0x0000cb06u): goto L_CB06;
    case RC_ADDR(0x0000cb0au): goto L_CB0A;
    case RC_ADDR(0x0000cb0cu): goto L_CB0C;
    case RC_ADDR(0x0000cb10u): goto L_CB10;
    case RC_ADDR(0x0000cb14u): goto L_CB14;
    case RC_ADDR(0x0000cb18u): goto L_CB18;
    case RC_ADDR(0x0000cb1au): goto L_CB1A;
    case RC_ADDR(0x0000cb1eu): goto L_CB1E;
    case RC_ADDR(0x0000cb22u): goto L_CB22;
    case RC_ADDR(0x0000cb26u): goto L_CB26;
    case RC_ADDR(0x0000cb28u): goto L_CB28;
    case RC_ADDR(0x0000cb2cu): goto L_CB2C;
    case RC_ADDR(0x0000cb30u): goto L_CB30;
    case RC_ADDR(0x0000cb34u): goto L_CB34;
    case RC_ADDR(0x0000cb36u): goto L_CB36;
    case RC_ADDR(0x0000cb3au): goto L_CB3A;
    case RC_ADDR(0x0000cb3eu): goto L_CB3E;
    case RC_ADDR(0x0000cb42u): goto L_CB42;
    case RC_ADDR(0x0000cb44u): goto L_CB44;
    case RC_ADDR(0x0000cb48u): goto L_CB48;
    case RC_ADDR(0x0000cb4cu): goto L_CB4C;
    case RC_ADDR(0x0000cb50u): goto L_CB50;
    case RC_ADDR(0x0000cb52u): goto L_CB52;
    case RC_ADDR(0x0000cb56u): goto L_CB56;
    case RC_ADDR(0x0000cb5cu): goto L_CB5C;
    case RC_ADDR(0x0000cb62u): goto L_CB62;
    case RC_ADDR(0x0000cb66u): goto L_CB66;
    case RC_ADDR(0x0000cb6au): goto L_CB6A;
    case RC_ADDR(0x0000cb6cu): goto L_CB6C;
    case RC_ADDR(0x0000cb6eu): goto L_CB6E;
    case RC_ADDR(0x0000cb70u): goto L_CB70;
    case RC_ADDR(0x0000cb74u): goto L_CB74;
    case RC_ADDR(0x0000cb78u): goto L_CB78;
    case RC_ADDR(0x0000cb7au): goto L_CB7A;
    case RC_ADDR(0x0000cb80u): goto L_CB80;
    case RC_ADDR(0x0000cb82u): goto L_CB82;
    case RC_ADDR(0x0000cb86u): goto L_CB86;
    case RC_ADDR(0x0000cb8au): goto L_CB8A;
    case RC_ADDR(0x0000cb90u): goto L_CB90;
    case RC_ADDR(0x0000cb94u): goto L_CB94;
    case RC_ADDR(0x0000cb98u): goto L_CB98;
    case RC_ADDR(0x0000cb9eu): goto L_CB9E;
    case RC_ADDR(0x0000cba4u): goto L_CBA4;
    case RC_ADDR(0x0000cba8u): goto L_CBA8;
    case RC_ADDR(0x0000cbacu): goto L_CBAC;
    case RC_ADDR(0x0000cbb0u): goto L_CBB0;
    case RC_ADDR(0x0000cbb4u): goto L_CBB4;
    case RC_ADDR(0x0000cbb8u): goto L_CBB8;
    case RC_ADDR(0x0000cbbcu): goto L_CBBC;
    case RC_ADDR(0x0000cbc2u): goto L_CBC2;
    case RC_ADDR(0x0000cbc8u): goto L_CBC8;
    case RC_ADDR(0x0000cbcau): goto L_CBCA;
    case RC_ADDR(0x0000cbd0u): goto L_CBD0;
    case RC_ADDR(0x0000cbd2u): goto L_CBD2;
    case RC_ADDR(0x0000cbd8u): goto L_CBD8;
    case RC_ADDR(0x0000cbdeu): goto L_CBDE;
    case RC_ADDR(0x0000cbe0u): goto L_CBE0;
    case RC_ADDR(0x0000cbe4u): goto L_CBE4;
    case RC_ADDR(0x0000cbe8u): goto L_CBE8;
    case RC_ADDR(0x0000cbecu): goto L_CBEC;
    case RC_ADDR(0x0000cbf0u): goto L_CBF0;
    case RC_ADDR(0x0000cbf4u): goto L_CBF4;
    case RC_ADDR(0x0000cbf8u): goto L_CBF8;
    case RC_ADDR(0x0000cbfcu): goto L_CBFC;
    case RC_ADDR(0x0000cc00u): goto L_CC00;
    case RC_ADDR(0x0000cc02u): goto L_CC02;
    case RC_ADDR(0x0000cc08u): goto L_CC08;
    case RC_ADDR(0x0000cc0eu): goto L_CC0E;
    case RC_ADDR(0x0000cc12u): goto L_CC12;
    case RC_ADDR(0x0000cc14u): goto L_CC14;
    case RC_ADDR(0x0000cc16u): goto L_CC16;
    case RC_ADDR(0x0000cc1au): goto L_CC1A;
    case RC_ADDR(0x0000cc1eu): goto L_CC1E;
    case RC_ADDR(0x0000cc22u): goto L_CC22;
    case RC_ADDR(0x0000cc26u): goto L_CC26;
    case RC_ADDR(0x0000cc2au): goto L_CC2A;
    case RC_ADDR(0x0000cc2eu): goto L_CC2E;
    case RC_ADDR(0x0000cc32u): goto L_CC32;
    case RC_ADDR(0x0000cc36u): goto L_CC36;
    case RC_ADDR(0x0000cc3au): goto L_CC3A;
    case RC_ADDR(0x0000cc3eu): goto L_CC3E;
    case RC_ADDR(0x0000cc42u): goto L_CC42;
    case RC_ADDR(0x0000cc46u): goto L_CC46;
    case RC_ADDR(0x0000cc4au): goto L_CC4A;
    case RC_ADDR(0x0000cc4eu): goto L_CC4E;
    case RC_ADDR(0x0000cc50u): goto L_CC50;
    case RC_ADDR(0x0000cc54u): goto L_CC54;
    case RC_ADDR(0x0000cc58u): goto L_CC58;
    case RC_ADDR(0x0000cc5cu): goto L_CC5C;
    case RC_ADDR(0x0000cc5eu): goto L_CC5E;
    case RC_ADDR(0x0000cc62u): goto L_CC62;
    case RC_ADDR(0x0000cc66u): goto L_CC66;
    case RC_ADDR(0x0000cc68u): goto L_CC68;
    case RC_ADDR(0x0000cc6cu): goto L_CC6C;
    case RC_ADDR(0x0000cc70u): goto L_CC70;
    case RC_ADDR(0x0000cc72u): goto L_CC72;
    case RC_ADDR(0x0000cc74u): goto L_CC74;
    case RC_ADDR(0x0000cc76u): goto L_CC76;
    case RC_ADDR(0x0000cc7au): goto L_CC7A;
    case RC_ADDR(0x0000cc80u): goto L_CC80;
    case RC_ADDR(0x0000cc82u): goto L_CC82;
    case RC_ADDR(0x0000cc88u): goto L_CC88;
    case RC_ADDR(0x0000cc8eu): goto L_CC8E;
    case RC_ADDR(0x0000cc90u): goto L_CC90;
    case RC_ADDR(0x0000cc96u): goto L_CC96;
    case RC_ADDR(0x0000cc9au): goto L_CC9A;
    case RC_ADDR(0x0000cc9cu): goto L_CC9C;
    case RC_ADDR(0x0000cca0u): goto L_CCA0;
    case RC_ADDR(0x0000cca4u): goto L_CCA4;
    case RC_ADDR(0x0000cca6u): goto L_CCA6;
    case RC_ADDR(0x0000cca8u): goto L_CCA8;
    case RC_ADDR(0x0000ccaau): goto L_CCAA;
    case RC_ADDR(0x0000ccaeu): goto L_CCAE;
    case RC_ADDR(0x0000ccb0u): goto L_CCB0;
    case RC_ADDR(0x0000ccb2u): goto L_CCB2;
    case RC_ADDR(0x0000ccb6u): goto L_CCB6;
    case RC_ADDR(0x0000ccbau): goto L_CCBA;
    case RC_ADDR(0x0000ccc0u): goto L_CCC0;
    case RC_ADDR(0x0000ccc6u): goto L_CCC6;
    case RC_ADDR(0x0000ccccu): goto L_CCCC;
    case RC_ADDR(0x0000ccd0u): goto L_CCD0;
    case RC_ADDR(0x0000ccd2u): goto L_CCD2;
    case RC_ADDR(0x0000ccd4u): goto L_CCD4;
    case RC_ADDR(0x0000ccd8u): goto L_CCD8;
    case RC_ADDR(0x0000ccdcu): goto L_CCDC;
    case RC_ADDR(0x0000cce0u): goto L_CCE0;
    case RC_ADDR(0x0000cce4u): goto L_CCE4;
    case RC_ADDR(0x0000cceau): goto L_CCEA;
    case RC_ADDR(0x0000cceeu): goto L_CCEE;
    case RC_ADDR(0x0000ccf0u): goto L_CCF0;
    case RC_ADDR(0x0000ccf4u): goto L_CCF4;
    case RC_ADDR(0x0000ccf8u): goto L_CCF8;
    case RC_ADDR(0x0000ccfcu): goto L_CCFC;
    case RC_ADDR(0x0000cd00u): goto L_CD00;
    case RC_ADDR(0x0000cd02u): goto L_CD02;
    case RC_ADDR(0x0000cd06u): goto L_CD06;
    case RC_ADDR(0x0000cd0au): goto L_CD0A;
    case RC_ADDR(0x0000cd0eu): goto L_CD0E;
    case RC_ADDR(0x0000cd10u): goto L_CD10;
    case RC_ADDR(0x0000cd14u): goto L_CD14;
    case RC_ADDR(0x0000cd18u): goto L_CD18;
    case RC_ADDR(0x0000cd1au): goto L_CD1A;
    case RC_ADDR(0x0000cd20u): goto L_CD20;
    case RC_ADDR(0x0000cd22u): goto L_CD22;
    case RC_ADDR(0x0000cd26u): goto L_CD26;
    case RC_ADDR(0x0000cd2cu): goto L_CD2C;
    case RC_ADDR(0x0000cd2eu): goto L_CD2E;
    case RC_ADDR(0x0000cd34u): goto L_CD34;
    case RC_ADDR(0x0000cd36u): goto L_CD36;
    case RC_ADDR(0x0000cd3au): goto L_CD3A;
    case RC_ADDR(0x0000cd3cu): goto L_CD3C;
    case RC_ADDR(0x0000cd40u): goto L_CD40;
    case RC_ADDR(0x0000cd42u): goto L_CD42;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CA1A:
    /* 0000ca1a   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000ca1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_CA1E:
    /* 0000ca1e   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000ca1eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_CA22:
    /* 0000ca22   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000ca22u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA28:
    /* 0000ca28   4  tst.w (e36,A4) */
    c->pc = RC_ADDR(0x0000ca28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe36u));
    rc_set_nzvc(c, t0, RC_W);

L_CA2C:
    /* 0000ca2c   4  bne 0000cba8 */
    c->pc = RC_ADDR(0x0000ca2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CBA8;

L_CA30:
    /* 0000ca30   4  clr.w (ffffd576,A4) */
    c->pc = RC_ADDR(0x0000ca30u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a8au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CA34:
    /* 0000ca34   6  move.l (e60,A4),(838,A4) */
    c->pc = RC_ADDR(0x0000ca34u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe60u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA3A:
    /* 0000ca3a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ca3au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CA3C:
    /* 0000ca3c   4  move.l (e28,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ca3cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA40:
    /* 0000ca40   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ca40u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA44:
    /* 0000ca44   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000ca44u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ca48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CA48:
    /* 0000ca48   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ca48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_CA4A:
    /* 0000ca4a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ca4au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CA4C:
    /* 0000ca4c   4  move.l (e1c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ca4cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe1cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA50:
    /* 0000ca50   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ca50u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA54:
    /* 0000ca54   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000ca54u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000ca58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CA58:
    /* 0000ca58   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ca58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_CA5A:
    /* 0000ca5a   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000ca5au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA60:
    /* 0000ca60   4  pea (0000cd46) */
    c->pc = RC_ADDR(0x0000ca60u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd46u));

L_CA64:
    /* 0000ca64   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000ca64u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000ca68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_CA68:
    /* 0000ca68   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ca68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CA6A:
    /* 0000ca6a   4  move.l D0,(e30,A4) */
    c->pc = RC_ADDR(0x0000ca6au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA6E:
    /* 0000ca6e   4  movea.l (e30,A4),A0 */
    c->pc = RC_ADDR(0x0000ca6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe30u));
    c->a[0] = t0;

L_CA72:
    /* 0000ca72   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000ca72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_CA76:
    /* 0000ca76   6  move.l (38,A1),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000ca76u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[1] + 0x38u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CA7C:
    /* 0000ca7c   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ca7cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CA80:
    /* 0000ca80   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ca80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA84:
    /* 0000ca84   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ca84u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CA86:
    /* 0000ca86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca86u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CA88:
    /* 0000ca88   4  lea (7f6,A4),A0 */
    c->pc = RC_ADDR(0x0000ca88u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7f6u);

L_CA8C:
    /* 0000ca8c   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000ca8cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA92:
    /* 0000ca92   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000ca92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA96:
    /* 0000ca96   4  and.w #f00,D0 */
    c->pc = RC_ADDR(0x0000ca96u);
    rc_step(c, m, 10);
    t0 = 0x00000f00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_CA9A:
    /* 0000ca9a   2  asr.w #4,D0 */
    c->pc = RC_ADDR(0x0000ca9au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_CA9C:
    /* 0000ca9c   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0000ca9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_CAA0:
    /* 0000caa0   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000caa0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CAA4:
    /* 0000caa4   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x0000caa4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_CAA6:
    /* 0000caa6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000caa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAAA:
    /* 0000caaa   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0000caaau);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_CAAE:
    /* 0000caae   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0000caaeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_CAB2:
    /* 0000cab2   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cab2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CAB6:
    /* 0000cab6   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x0000cab6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_CAB8:
    /* 0000cab8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000cab8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CABC:
    /* 0000cabc   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000cabcu);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_CAC0:
    /* 0000cac0   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0000cac0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_CAC2:
    /* 0000cac2   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0000cac2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_CAC6:
    /* 0000cac6   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cac6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CACA:
    /* 0000caca   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x0000cacau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_CACC:
    /* 0000cacc   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000caccu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CAD0:
    /* 0000cad0   6  cmpi.w #20,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cad0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_CAD6:
    /* 0000cad6   2  blt 0000ca80 */
    c->pc = RC_ADDR(0x0000cad6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CA80; }

L_CAD8:
    /* 0000cad8   4  pea (0000cd4a) */
    c->pc = RC_ADDR(0x0000cad8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd4au));

L_CADC:
    /* 0000cadc   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cadcu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cae0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CAE0:
    /* 0000cae0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cae0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CAE2:
    /* 0000cae2   4  move.l D0,(e28,A4) */
    c->pc = RC_ADDR(0x0000cae2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAE6:
    /* 0000cae6   4  pea (0000cd55) */
    c->pc = RC_ADDR(0x0000cae6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd55u));

L_CAEA:
    /* 0000caea   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000caeau);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000caeeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CAEE:
    /* 0000caee   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000caeeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CAF0:
    /* 0000caf0   4  move.l D0,(e1c,A4) */
    c->pc = RC_ADDR(0x0000caf0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAF4:
    /* 0000caf4   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x0000caf4u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAF8:
    /* 0000caf8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000caf8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAFC:
    /* 0000cafc   4  jsr (00005e3e) */
    c->pc = RC_ADDR(0x0000cafcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cb00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005e3eu);
    return;

L_CB00:
    /* 0000cb00   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000cb00u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_CB02:
    /* 0000cb02   4  pea (0000cd5f) */
    c->pc = RC_ADDR(0x0000cb02u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd5fu));

L_CB06:
    /* 0000cb06   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000cb06u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000cb0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_CB0A:
    /* 0000cb0a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb0au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB0C:
    /* 0000cb0c   4  move.l D0,(ac0,A4) */
    c->pc = RC_ADDR(0x0000cb0cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xac0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB10:
    /* 0000cb10   4  pea (0000cd6e) */
    c->pc = RC_ADDR(0x0000cb10u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd6eu));

L_CB14:
    /* 0000cb14   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cb14u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cb18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CB18:
    /* 0000cb18   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB1A:
    /* 0000cb1a   4  move.l D0,(ac4,A4) */
    c->pc = RC_ADDR(0x0000cb1au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xac4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB1E:
    /* 0000cb1e   4  pea (0000cd74) */
    c->pc = RC_ADDR(0x0000cb1eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd74u));

L_CB22:
    /* 0000cb22   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cb22u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cb26u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CB26:
    /* 0000cb26   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb26u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB28:
    /* 0000cb28   4  move.l D0,(e18,A4) */
    c->pc = RC_ADDR(0x0000cb28u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB2C:
    /* 0000cb2c   4  pea (0000cd7a) */
    c->pc = RC_ADDR(0x0000cb2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd7au));

L_CB30:
    /* 0000cb30   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cb30u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cb34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CB34:
    /* 0000cb34   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB36:
    /* 0000cb36   4  move.l D0,(e20,A4) */
    c->pc = RC_ADDR(0x0000cb36u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB3A:
    /* 0000cb3a   4  pea (0000cd81) */
    c->pc = RC_ADDR(0x0000cb3au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd81u));

L_CB3E:
    /* 0000cb3e   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cb3eu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cb42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CB42:
    /* 0000cb42   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB44:
    /* 0000cb44   4  move.l D0,(e24,A4) */
    c->pc = RC_ADDR(0x0000cb44u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB48:
    /* 0000cb48   4  pea (0000cd89) */
    c->pc = RC_ADDR(0x0000cb48u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000cd89u));

L_CB4C:
    /* 0000cb4c   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cb4cu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cb50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CB50:
    /* 0000cb50   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cb50u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CB52:
    /* 0000cb52   4  move.l D0,(e2c,A4) */
    c->pc = RC_ADDR(0x0000cb52u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe2cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB56:
    /* 0000cb56   6  move.w #a0,(aca,A4) */
    c->pc = RC_ADDR(0x0000cb56u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] + 0xacau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB5C:
    /* 0000cb5c   6  move.w #b4,(acc,A4) */
    c->pc = RC_ADDR(0x0000cb5cu);
    rc_step(c, m, 16);
    t0 = 0x000000b4u;
    rc_wr16(c, m, (c->a[4] + 0xaccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB62:
    /* 0000cb62   4  clr.w (ace,A4) */
    c->pc = RC_ADDR(0x0000cb62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xaceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB66:
    /* 0000cb66   4  clr.w (ad0,A4) */
    c->pc = RC_ADDR(0x0000cb66u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xad0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB6A:
    /* 0000cb6a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000cb6au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_CB6C:
    /* 0000cb6c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000cb6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB6E:
    /* 0000cb6e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cb6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CB70:
    /* 0000cb70   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000cb70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_CB74:
    /* 0000cb74   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cb74u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB78:
    /* 0000cb78   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000cb78u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_CB7A:
    /* 0000cb7a   6  cmp.l #5,D4 */
    c->pc = RC_ADDR(0x0000cb7au);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_CB80:
    /* 0000cb80   2  blt 0000cb6c */
    c->pc = RC_ADDR(0x0000cb80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CB6C; }

L_CB82:
    /* 0000cb82   4  clr.w (ca8,A4) */
    c->pc = RC_ADDR(0x0000cb82u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xca8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB86:
    /* 0000cb86   4  clr.w (caa,A4) */
    c->pc = RC_ADDR(0x0000cb86u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xcaau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB8A:
    /* 0000cb8a   6  move.w #1,(e34,A4) */
    c->pc = RC_ADDR(0x0000cb8au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB90:
    /* 0000cb90   4  clr.w (c94,A4) */
    c->pc = RC_ADDR(0x0000cb90u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc94u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB94:
    /* 0000cb94   4  clr.w (c92,A4) */
    c->pc = RC_ADDR(0x0000cb94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB98:
    /* 0000cb98   6  move.w #1,(e36,A4) */
    c->pc = RC_ADDR(0x0000cb98u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB9E:
    /* 0000cb9e   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000cb9eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBA4:
    /* 0000cba4   4  jsr (0000cd96) */
    c->pc = RC_ADDR(0x0000cba4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000cd96u);
    return;

L_CBA8:
    /* 0000cba8   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cba8u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cbacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_CBAC:
    /* 0000cbac   4  jsr (0000cf24) */
    c->pc = RC_ADDR(0x0000cbacu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cbb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000cf24u);
    return;

L_CBB0:
    /* 0000cbb0   4  jsr (0000cf4e) */
    c->pc = RC_ADDR(0x0000cbb0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cbb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000cf4eu);
    return;

L_CBB4:
    /* 0000cbb4   4  jsr (0000cdfe) */
    c->pc = RC_ADDR(0x0000cbb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cbb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000cdfeu);
    return;

L_CBB8:
    /* 0000cbb8   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0000cbb8u);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x0000cbbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bdcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b03eu);
    return;

L_CBBC:
    /* 0000cbbc   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000cbbcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBC2:
    /* 0000cbc2   6  cmpi.w #5,(ffffd576,A4) */
    c->pc = RC_ADDR(0x0000cbc2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8au));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_CBC8:
    /* 0000cbc8   2  beq 0000cbd2 */
    c->pc = RC_ADDR(0x0000cbc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CBD2;

L_CBCA:
    /* 0000cbca   6  cmpi.w #64,(e5a,A4) */
    c->pc = RC_ADDR(0x0000cbcau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe5au));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_CBD0:
    /* 0000cbd0   2  ble 0000cbf4 */
    c->pc = RC_ADDR(0x0000cbd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_CBF4;

L_CBD2:
    /* 0000cbd2   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0000cbd2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_CBD8:
    /* 0000cbd8   6  pea (000a0000).l */
    c->pc = RC_ADDR(0x0000cbd8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000a0000u);

L_CBDE:
    /* 0000cbde   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cbdeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CBE0:
    /* 0000cbe0   4  move.l (e30,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cbe0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBE4:
    /* 0000cbe4   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x0000cbe4u);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBE8:
    /* 0000cbe8   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000cbe8u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000cbecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CBEC:
    /* 0000cbec   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000cbecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_CBF0:
    /* 0000cbf0   4  clr.w (ffffd576,A4) */
    c->pc = RC_ADDR(0x0000cbf0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a8au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CBF4:
    /* 0000cbf4   4  move.w (ffffd576,A4),D0 */
    c->pc = RC_ADDR(0x0000cbf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBF8:
    /* 0000cbf8   4  addq.w #1,(ffffd576,A4) */
    c->pc = RC_ADDR(0x0000cbf8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2a8au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CBFC:
    /* 0000cbfc   4  cmp.w #3,D0 */
    c->pc = RC_ADDR(0x0000cbfcu);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CC00:
    /* 0000cc00   2  bne 0000cc22 */
    c->pc = RC_ADDR(0x0000cc00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CC22;

L_CC02:
    /* 0000cc02   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0000cc02u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_CC08:
    /* 0000cc08   6  pea (000c0000).l */
    c->pc = RC_ADDR(0x0000cc08u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000c0000u);

L_CC0E:
    /* 0000cc0e   4  pea (00000f00).l */
    c->pc = RC_ADDR(0x0000cc0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000f00u);

L_CC12:
    /* 0000cc12   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cc12u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CC14:
    /* 0000cc14   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000cc14u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CC16:
    /* 0000cc16   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x0000cc16u);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC1A:
    /* 0000cc1a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000cc1au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000cc1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CC1E:
    /* 0000cc1e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000cc1eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_CC22:
    /* 0000cc22   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cc22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC26:
    /* 0000cc26   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cc26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC2A:
    /* 0000cc2a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cc2au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC2E:
    /* 0000cc2e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000cc2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_CC32:
    /* 0000cc32   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000cc32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC36:
    /* 0000cc36   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000cc36u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000cc3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_CC3A:
    /* 0000cc3a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000cc3au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CC3E:
    /* 0000cc3e   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x0000cc3eu);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC42:
    /* 0000cc42   4  move.w (e44,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cc42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC46:
    /* 0000cc46   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000cc46u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC4A:
    /* 0000cc4a   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000cc4au);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000cc4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_CC4E:
    /* 0000cc4e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000cc4eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_CC50:
    /* 0000cc50   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x0000cc50u);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC54:
    /* 0000cc54   4  move.w (e44,A4),D0 */
    c->pc = RC_ADDR(0x0000cc54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC58:
    /* 0000cc58   4  add.w #32,D0 */
    c->pc = RC_ADDR(0x0000cc58u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CC5C:
    /* 0000cc5c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000cc5cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC5E:
    /* 0000cc5e   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000cc5eu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC62:
    /* 0000cc62   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000cc62u);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000cc66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_CC66:
    /* 0000cc66   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000cc66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_CC68:
    /* 0000cc68   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000cc68u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC6C:
    /* 0000cc6c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000cc6cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000cc70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_CC70:
    /* 0000cc70   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cc70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CC72:
    /* 0000cc72   2  moveq #14,D1 */
    c->pc = RC_ADDR(0x0000cc72u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000014u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_CC74:
    /* 0000cc74   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000cc74u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CC76:
    /* 0000cc76   4  add.w D1,(e44,A4) */
    c->pc = RC_ADDR(0x0000cc76u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_CC7A:
    /* 0000cc7a   6  cmpi.w #e1,(e44,A4) */
    c->pc = RC_ADDR(0x0000cc7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    rc_cmp(c, RC_W, t0, 0x000000e1u);

L_CC80:
    /* 0000cc80   2  bge 0000cc88 */
    c->pc = RC_ADDR(0x0000cc80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CC88;

L_CC82:
    /* 0000cc82   6  move.w #f0,(e44,A4) */
    c->pc = RC_ADDR(0x0000cc82u);
    rc_step(c, m, 16);
    t0 = 0x000000f0u;
    rc_wr16(c, m, (c->a[4] + 0xe44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC88:
    /* 0000cc88   6  cmpi.w #212,(e44,A4) */
    c->pc = RC_ADDR(0x0000cc88u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    rc_cmp(c, RC_W, t0, 0x00000212u);

L_CC8E:
    /* 0000cc8e   2  ble 0000cc96 */
    c->pc = RC_ADDR(0x0000cc8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_CC96;

L_CC90:
    /* 0000cc90   6  move.w #1f4,(e44,A4) */
    c->pc = RC_ADDR(0x0000cc90u);
    rc_step(c, m, 16);
    t0 = 0x000001f4u;
    rc_wr16(c, m, (c->a[4] + 0xe44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC96:
    /* 0000cc96   4  tst.w (caa,A4) */
    c->pc = RC_ADDR(0x0000cc96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcaau));
    rc_set_nzvc(c, t0, RC_W);

L_CC9A:
    /* 0000cc9a   2  beq 0000ccb2 */
    c->pc = RC_ADDR(0x0000cc9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CCB2;

L_CC9C:
    /* 0000cc9c   4  move.w (e34,A4),D0 */
    c->pc = RC_ADDR(0x0000cc9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCA0:
    /* 0000cca0   4  subq.w #1,(e34,A4) */
    c->pc = RC_ADDR(0x0000cca0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe34u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CCA4:
    /* 0000cca4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000cca4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_CCA6:
    /* 0000cca6   2  bne 0000ccb2 */
    c->pc = RC_ADDR(0x0000cca6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CCB2;

L_CCA8:
    /* 0000cca8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000cca8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_CCAA:
    /* 0000ccaa   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000ccaau);
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

L_CCAE:
    /* 0000ccae   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ccaeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CCB0:
    /* 0000ccb0   2  rts */
    c->pc = RC_ADDR(0x0000ccb0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_CCB2:
    /* 0000ccb2   4  subq.w #1,(e5a,A4) */
    c->pc = RC_ADDR(0x0000ccb2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe5au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CCB6:
    /* 0000ccb6   4  bne 0000cd40 */
    c->pc = RC_ADDR(0x0000ccb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CD40;

L_CCBA:
    /* 0000ccba   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000ccbau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CCC0:
    /* 0000ccc0   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0000ccc0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_CCC6:
    /* 0000ccc6   6  pea (001e0000).l */
    c->pc = RC_ADDR(0x0000ccc6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x001e0000u);

L_CCCC:
    /* 0000cccc   4  pea (00000f00).l */
    c->pc = RC_ADDR(0x0000ccccu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000f00u);

L_CCD0:
    /* 0000ccd0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ccd0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CCD2:
    /* 0000ccd2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000ccd2u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CCD4:
    /* 0000ccd4   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x0000ccd4u);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCD8:
    /* 0000ccd8   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000ccd8u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000ccdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CCDC:
    /* 0000ccdc   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000ccdcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_CCE0:
    /* 0000cce0   4  jsr (ffff8242,A4) */
    c->pc = RC_ADDR(0x0000cce0u);
    rc_step(c, m, 18);
    /* vector 96 */
    rc_push32(c, m, RC_ADDR(0x0000cce4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d38u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f860u);
    return;

L_CCE4:
    /* 0000cce4   6  move.w #35,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000cce4u);
    rc_step(c, m, 16);
    t0 = 0x00000035u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCEA:
    /* 0000ccea   4  tst.w (924,A4) */
    c->pc = RC_ADDR(0x0000cceau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x924u));
    rc_set_nzvc(c, t0, RC_W);

L_CCEE:
    /* 0000ccee   2  beq 0000cd36 */
    c->pc = RC_ADDR(0x0000cceeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CD36;

L_CCF0:
    /* 0000ccf0   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ccf0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCF4:
    /* 0000ccf4   4  move.w (e44,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ccf4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCF8:
    /* 0000ccf8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ccf8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCFC:
    /* 0000ccfc   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000ccfcu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000cd00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_CD00:
    /* 0000cd00   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000cd00u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_CD02:
    /* 0000cd02   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cd02u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD06:
    /* 0000cd06   4  move.w (e44,A4),D0 */
    c->pc = RC_ADDR(0x0000cd06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD0A:
    /* 0000cd0a   4  add.w #32,D0 */
    c->pc = RC_ADDR(0x0000cd0au);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CD0E:
    /* 0000cd0e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000cd0eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD10:
    /* 0000cd10   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000cd10u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD14:
    /* 0000cd14   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000cd14u);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000cd18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_CD18:
    /* 0000cd18   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000cd18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_CD1A:
    /* 0000cd1a   6  cmpi.w #3f,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000cd1au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000003fu);

L_CD20:
    /* 0000cd20   2  bge 0000cd26 */
    c->pc = RC_ADDR(0x0000cd20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CD26;

L_CD22:
    /* 0000cd22   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000cd22u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CD26:
    /* 0000cd26   6  cmpi.w #80,(e44,A4) */
    c->pc = RC_ADDR(0x0000cd26u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe44u));
    rc_cmp(c, RC_W, t0, 0x00000080u);

L_CD2C:
    /* 0000cd2c   2  ble 0000cd34 */
    c->pc = RC_ADDR(0x0000cd2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_CD34;

L_CD2E:
    /* 0000cd2e   6  subi.w #19,(e44,A4) */
    c->pc = RC_ADDR(0x0000cd2eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0xe44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000019u;
    rc_flags_sub(c, RC_W, t1, 0x00000019u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CD34:
    /* 0000cd34   2  bra 0000ccea */
    c->pc = RC_ADDR(0x0000cd34u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_CCEA;

L_CD36:
    /* 0000cd36   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000cd36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CD3A:
    /* 0000cd3a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000cd3au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_CD3C:
    /* 0000cd3c   4  bra 0000ccaa */
    c->pc = RC_ADDR(0x0000cd3cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_CCAA;

L_CD40:
    /* 0000cd40   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000cd40u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_CD42:
    /* 0000cd42   4  bra 0000ccaa */
    c->pc = RC_ADDR(0x0000cd42u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_CCAA;

}
