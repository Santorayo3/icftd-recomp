/* fn_0000bc56 - 828 byte(s), 250 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000bc56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000bc56u): goto L_BC56;
    case RC_ADDR(0x0000bc5au): goto L_BC5A;
    case RC_ADDR(0x0000bc60u): goto L_BC60;
    case RC_ADDR(0x0000bc64u): goto L_BC64;
    case RC_ADDR(0x0000bc68u): goto L_BC68;
    case RC_ADDR(0x0000bc6cu): goto L_BC6C;
    case RC_ADDR(0x0000bc70u): goto L_BC70;
    case RC_ADDR(0x0000bc72u): goto L_BC72;
    case RC_ADDR(0x0000bc74u): goto L_BC74;
    case RC_ADDR(0x0000bc76u): goto L_BC76;
    case RC_ADDR(0x0000bc7au): goto L_BC7A;
    case RC_ADDR(0x0000bc7eu): goto L_BC7E;
    case RC_ADDR(0x0000bc80u): goto L_BC80;
    case RC_ADDR(0x0000bc82u): goto L_BC82;
    case RC_ADDR(0x0000bc86u): goto L_BC86;
    case RC_ADDR(0x0000bc88u): goto L_BC88;
    case RC_ADDR(0x0000bc8au): goto L_BC8A;
    case RC_ADDR(0x0000bc8cu): goto L_BC8C;
    case RC_ADDR(0x0000bc90u): goto L_BC90;
    case RC_ADDR(0x0000bc94u): goto L_BC94;
    case RC_ADDR(0x0000bc98u): goto L_BC98;
    case RC_ADDR(0x0000bc9au): goto L_BC9A;
    case RC_ADDR(0x0000bc9eu): goto L_BC9E;
    case RC_ADDR(0x0000bca0u): goto L_BCA0;
    case RC_ADDR(0x0000bca2u): goto L_BCA2;
    case RC_ADDR(0x0000bca4u): goto L_BCA4;
    case RC_ADDR(0x0000bca8u): goto L_BCA8;
    case RC_ADDR(0x0000bcacu): goto L_BCAC;
    case RC_ADDR(0x0000bcb0u): goto L_BCB0;
    case RC_ADDR(0x0000bcb2u): goto L_BCB2;
    case RC_ADDR(0x0000bcb6u): goto L_BCB6;
    case RC_ADDR(0x0000bcb8u): goto L_BCB8;
    case RC_ADDR(0x0000bcbcu): goto L_BCBC;
    case RC_ADDR(0x0000bcc0u): goto L_BCC0;
    case RC_ADDR(0x0000bcc4u): goto L_BCC4;
    case RC_ADDR(0x0000bcc6u): goto L_BCC6;
    case RC_ADDR(0x0000bcc8u): goto L_BCC8;
    case RC_ADDR(0x0000bccau): goto L_BCCA;
    case RC_ADDR(0x0000bcceu): goto L_BCCE;
    case RC_ADDR(0x0000bcd2u): goto L_BCD2;
    case RC_ADDR(0x0000bcd4u): goto L_BCD4;
    case RC_ADDR(0x0000bcd6u): goto L_BCD6;
    case RC_ADDR(0x0000bcdau): goto L_BCDA;
    case RC_ADDR(0x0000bcdcu): goto L_BCDC;
    case RC_ADDR(0x0000bcdeu): goto L_BCDE;
    case RC_ADDR(0x0000bce0u): goto L_BCE0;
    case RC_ADDR(0x0000bce4u): goto L_BCE4;
    case RC_ADDR(0x0000bce8u): goto L_BCE8;
    case RC_ADDR(0x0000bcecu): goto L_BCEC;
    case RC_ADDR(0x0000bceeu): goto L_BCEE;
    case RC_ADDR(0x0000bcf2u): goto L_BCF2;
    case RC_ADDR(0x0000bcf4u): goto L_BCF4;
    case RC_ADDR(0x0000bcf6u): goto L_BCF6;
    case RC_ADDR(0x0000bcf8u): goto L_BCF8;
    case RC_ADDR(0x0000bcfcu): goto L_BCFC;
    case RC_ADDR(0x0000bd00u): goto L_BD00;
    case RC_ADDR(0x0000bd04u): goto L_BD04;
    case RC_ADDR(0x0000bd06u): goto L_BD06;
    case RC_ADDR(0x0000bd08u): goto L_BD08;
    case RC_ADDR(0x0000bd0au): goto L_BD0A;
    case RC_ADDR(0x0000bd0eu): goto L_BD0E;
    case RC_ADDR(0x0000bd12u): goto L_BD12;
    case RC_ADDR(0x0000bd16u): goto L_BD16;
    case RC_ADDR(0x0000bd18u): goto L_BD18;
    case RC_ADDR(0x0000bd1cu): goto L_BD1C;
    case RC_ADDR(0x0000bd1eu): goto L_BD1E;
    case RC_ADDR(0x0000bd20u): goto L_BD20;
    case RC_ADDR(0x0000bd22u): goto L_BD22;
    case RC_ADDR(0x0000bd26u): goto L_BD26;
    case RC_ADDR(0x0000bd2au): goto L_BD2A;
    case RC_ADDR(0x0000bd2eu): goto L_BD2E;
    case RC_ADDR(0x0000bd30u): goto L_BD30;
    case RC_ADDR(0x0000bd36u): goto L_BD36;
    case RC_ADDR(0x0000bd3cu): goto L_BD3C;
    case RC_ADDR(0x0000bd40u): goto L_BD40;
    case RC_ADDR(0x0000bd44u): goto L_BD44;
    case RC_ADDR(0x0000bd48u): goto L_BD48;
    case RC_ADDR(0x0000bd4au): goto L_BD4A;
    case RC_ADDR(0x0000bd4cu): goto L_BD4C;
    case RC_ADDR(0x0000bd4eu): goto L_BD4E;
    case RC_ADDR(0x0000bd52u): goto L_BD52;
    case RC_ADDR(0x0000bd56u): goto L_BD56;
    case RC_ADDR(0x0000bd58u): goto L_BD58;
    case RC_ADDR(0x0000bd5au): goto L_BD5A;
    case RC_ADDR(0x0000bd5eu): goto L_BD5E;
    case RC_ADDR(0x0000bd60u): goto L_BD60;
    case RC_ADDR(0x0000bd62u): goto L_BD62;
    case RC_ADDR(0x0000bd64u): goto L_BD64;
    case RC_ADDR(0x0000bd68u): goto L_BD68;
    case RC_ADDR(0x0000bd6cu): goto L_BD6C;
    case RC_ADDR(0x0000bd70u): goto L_BD70;
    case RC_ADDR(0x0000bd72u): goto L_BD72;
    case RC_ADDR(0x0000bd76u): goto L_BD76;
    case RC_ADDR(0x0000bd78u): goto L_BD78;
    case RC_ADDR(0x0000bd7au): goto L_BD7A;
    case RC_ADDR(0x0000bd7cu): goto L_BD7C;
    case RC_ADDR(0x0000bd80u): goto L_BD80;
    case RC_ADDR(0x0000bd84u): goto L_BD84;
    case RC_ADDR(0x0000bd88u): goto L_BD88;
    case RC_ADDR(0x0000bd8au): goto L_BD8A;
    case RC_ADDR(0x0000bd8cu): goto L_BD8C;
    case RC_ADDR(0x0000bd8eu): goto L_BD8E;
    case RC_ADDR(0x0000bd92u): goto L_BD92;
    case RC_ADDR(0x0000bd96u): goto L_BD96;
    case RC_ADDR(0x0000bd9au): goto L_BD9A;
    case RC_ADDR(0x0000bd9cu): goto L_BD9C;
    case RC_ADDR(0x0000bda0u): goto L_BDA0;
    case RC_ADDR(0x0000bda2u): goto L_BDA2;
    case RC_ADDR(0x0000bda4u): goto L_BDA4;
    case RC_ADDR(0x0000bda6u): goto L_BDA6;
    case RC_ADDR(0x0000bdaau): goto L_BDAA;
    case RC_ADDR(0x0000bdaeu): goto L_BDAE;
    case RC_ADDR(0x0000bdb2u): goto L_BDB2;
    case RC_ADDR(0x0000bdb4u): goto L_BDB4;
    case RC_ADDR(0x0000bdbau): goto L_BDBA;
    case RC_ADDR(0x0000bdc0u): goto L_BDC0;
    case RC_ADDR(0x0000bdc2u): goto L_BDC2;
    case RC_ADDR(0x0000bdc4u): goto L_BDC4;
    case RC_ADDR(0x0000bdc8u): goto L_BDC8;
    case RC_ADDR(0x0000bdcau): goto L_BDCA;
    case RC_ADDR(0x0000bdceu): goto L_BDCE;
    case RC_ADDR(0x0000bdd2u): goto L_BDD2;
    case RC_ADDR(0x0000bdd6u): goto L_BDD6;
    case RC_ADDR(0x0000bdd8u): goto L_BDD8;
    case RC_ADDR(0x0000bddcu): goto L_BDDC;
    case RC_ADDR(0x0000bde0u): goto L_BDE0;
    case RC_ADDR(0x0000bde4u): goto L_BDE4;
    case RC_ADDR(0x0000bde6u): goto L_BDE6;
    case RC_ADDR(0x0000bdeau): goto L_BDEA;
    case RC_ADDR(0x0000bdeeu): goto L_BDEE;
    case RC_ADDR(0x0000bdf2u): goto L_BDF2;
    case RC_ADDR(0x0000bdf4u): goto L_BDF4;
    case RC_ADDR(0x0000bdf8u): goto L_BDF8;
    case RC_ADDR(0x0000bdfcu): goto L_BDFC;
    case RC_ADDR(0x0000be00u): goto L_BE00;
    case RC_ADDR(0x0000be04u): goto L_BE04;
    case RC_ADDR(0x0000be06u): goto L_BE06;
    case RC_ADDR(0x0000be08u): goto L_BE08;
    case RC_ADDR(0x0000be0au): goto L_BE0A;
    case RC_ADDR(0x0000be0cu): goto L_BE0C;
    case RC_ADDR(0x0000be0eu): goto L_BE0E;
    case RC_ADDR(0x0000be12u): goto L_BE12;
    case RC_ADDR(0x0000be16u): goto L_BE16;
    case RC_ADDR(0x0000be18u): goto L_BE18;
    case RC_ADDR(0x0000be1au): goto L_BE1A;
    case RC_ADDR(0x0000be1eu): goto L_BE1E;
    case RC_ADDR(0x0000be22u): goto L_BE22;
    case RC_ADDR(0x0000be26u): goto L_BE26;
    case RC_ADDR(0x0000be28u): goto L_BE28;
    case RC_ADDR(0x0000be2au): goto L_BE2A;
    case RC_ADDR(0x0000be2cu): goto L_BE2C;
    case RC_ADDR(0x0000be2eu): goto L_BE2E;
    case RC_ADDR(0x0000be30u): goto L_BE30;
    case RC_ADDR(0x0000be34u): goto L_BE34;
    case RC_ADDR(0x0000be38u): goto L_BE38;
    case RC_ADDR(0x0000be3au): goto L_BE3A;
    case RC_ADDR(0x0000be3cu): goto L_BE3C;
    case RC_ADDR(0x0000be40u): goto L_BE40;
    case RC_ADDR(0x0000be44u): goto L_BE44;
    case RC_ADDR(0x0000be48u): goto L_BE48;
    case RC_ADDR(0x0000be4cu): goto L_BE4C;
    case RC_ADDR(0x0000be4eu): goto L_BE4E;
    case RC_ADDR(0x0000be50u): goto L_BE50;
    case RC_ADDR(0x0000be52u): goto L_BE52;
    case RC_ADDR(0x0000be56u): goto L_BE56;
    case RC_ADDR(0x0000be5au): goto L_BE5A;
    case RC_ADDR(0x0000be5cu): goto L_BE5C;
    case RC_ADDR(0x0000be5eu): goto L_BE5E;
    case RC_ADDR(0x0000be62u): goto L_BE62;
    case RC_ADDR(0x0000be66u): goto L_BE66;
    case RC_ADDR(0x0000be6au): goto L_BE6A;
    case RC_ADDR(0x0000be70u): goto L_BE70;
    case RC_ADDR(0x0000be74u): goto L_BE74;
    case RC_ADDR(0x0000be78u): goto L_BE78;
    case RC_ADDR(0x0000be7eu): goto L_BE7E;
    case RC_ADDR(0x0000be84u): goto L_BE84;
    case RC_ADDR(0x0000be8au): goto L_BE8A;
    case RC_ADDR(0x0000be90u): goto L_BE90;
    case RC_ADDR(0x0000be94u): goto L_BE94;
    case RC_ADDR(0x0000be98u): goto L_BE98;
    case RC_ADDR(0x0000be9cu): goto L_BE9C;
    case RC_ADDR(0x0000bea0u): goto L_BEA0;
    case RC_ADDR(0x0000bea6u): goto L_BEA6;
    case RC_ADDR(0x0000beaau): goto L_BEAA;
    case RC_ADDR(0x0000beaeu): goto L_BEAE;
    case RC_ADDR(0x0000beb2u): goto L_BEB2;
    case RC_ADDR(0x0000beb6u): goto L_BEB6;
    case RC_ADDR(0x0000beb8u): goto L_BEB8;
    case RC_ADDR(0x0000bebau): goto L_BEBA;
    case RC_ADDR(0x0000bebeu): goto L_BEBE;
    case RC_ADDR(0x0000bec2u): goto L_BEC2;
    case RC_ADDR(0x0000bec6u): goto L_BEC6;
    case RC_ADDR(0x0000bec8u): goto L_BEC8;
    case RC_ADDR(0x0000becau): goto L_BECA;
    case RC_ADDR(0x0000beceu): goto L_BECE;
    case RC_ADDR(0x0000bed2u): goto L_BED2;
    case RC_ADDR(0x0000bed4u): goto L_BED4;
    case RC_ADDR(0x0000bed8u): goto L_BED8;
    case RC_ADDR(0x0000bedau): goto L_BEDA;
    case RC_ADDR(0x0000bedcu): goto L_BEDC;
    case RC_ADDR(0x0000bee0u): goto L_BEE0;
    case RC_ADDR(0x0000bee4u): goto L_BEE4;
    case RC_ADDR(0x0000bee8u): goto L_BEE8;
    case RC_ADDR(0x0000beecu): goto L_BEEC;
    case RC_ADDR(0x0000bef0u): goto L_BEF0;
    case RC_ADDR(0x0000bef6u): goto L_BEF6;
    case RC_ADDR(0x0000befau): goto L_BEFA;
    case RC_ADDR(0x0000befeu): goto L_BEFE;
    case RC_ADDR(0x0000bf02u): goto L_BF02;
    case RC_ADDR(0x0000bf04u): goto L_BF04;
    case RC_ADDR(0x0000bf08u): goto L_BF08;
    case RC_ADDR(0x0000bf0au): goto L_BF0A;
    case RC_ADDR(0x0000bf0cu): goto L_BF0C;
    case RC_ADDR(0x0000bf10u): goto L_BF10;
    case RC_ADDR(0x0000bf14u): goto L_BF14;
    case RC_ADDR(0x0000bf18u): goto L_BF18;
    case RC_ADDR(0x0000bf1cu): goto L_BF1C;
    case RC_ADDR(0x0000bf20u): goto L_BF20;
    case RC_ADDR(0x0000bf24u): goto L_BF24;
    case RC_ADDR(0x0000bf28u): goto L_BF28;
    case RC_ADDR(0x0000bf2cu): goto L_BF2C;
    case RC_ADDR(0x0000bf2eu): goto L_BF2E;
    case RC_ADDR(0x0000bf32u): goto L_BF32;
    case RC_ADDR(0x0000bf36u): goto L_BF36;
    case RC_ADDR(0x0000bf3au): goto L_BF3A;
    case RC_ADDR(0x0000bf3eu): goto L_BF3E;
    case RC_ADDR(0x0000bf42u): goto L_BF42;
    case RC_ADDR(0x0000bf46u): goto L_BF46;
    case RC_ADDR(0x0000bf48u): goto L_BF48;
    case RC_ADDR(0x0000bf4eu): goto L_BF4E;
    case RC_ADDR(0x0000bf50u): goto L_BF50;
    case RC_ADDR(0x0000bf54u): goto L_BF54;
    case RC_ADDR(0x0000bf56u): goto L_BF56;
    case RC_ADDR(0x0000bf58u): goto L_BF58;
    case RC_ADDR(0x0000bf5au): goto L_BF5A;
    case RC_ADDR(0x0000bf60u): goto L_BF60;
    case RC_ADDR(0x0000bf62u): goto L_BF62;
    case RC_ADDR(0x0000bf64u): goto L_BF64;
    case RC_ADDR(0x0000bf68u): goto L_BF68;
    case RC_ADDR(0x0000bf6au): goto L_BF6A;
    case RC_ADDR(0x0000bf6eu): goto L_BF6E;
    case RC_ADDR(0x0000bf72u): goto L_BF72;
    case RC_ADDR(0x0000bf76u): goto L_BF76;
    case RC_ADDR(0x0000bf7au): goto L_BF7A;
    case RC_ADDR(0x0000bf7eu): goto L_BF7E;
    case RC_ADDR(0x0000bf82u): goto L_BF82;
    case RC_ADDR(0x0000bf86u): goto L_BF86;
    case RC_ADDR(0x0000bf8au): goto L_BF8A;
    case RC_ADDR(0x0000bf8eu): goto L_BF8E;
    case RC_ADDR(0x0000bf90u): goto L_BF90;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BC56:
    /* 0000bc56   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000bc56u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_BC5A:
    /* 0000bc5a   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000bc5au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC60:
    /* 0000bc60   4  tst.w (7ba,A4) */
    c->pc = RC_ADDR(0x0000bc60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7bau));
    rc_set_nzvc(c, t0, RC_W);

L_BC64:
    /* 0000bc64   4  bne 0000bf2e */
    c->pc = RC_ADDR(0x0000bc64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BF2E;

L_BC68:
    /* 0000bc68   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bc68u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_BC6C:
    /* 0000bc6c   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bc6cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BC70:
    /* 0000bc70   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bc70u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BC72:
    /* 0000bc72   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bc72u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BC74:
    /* 0000bc74   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bc74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BC76:
    /* 0000bc76   4  lea (ffff9590,A4),A0 */
    c->pc = RC_ADDR(0x0000bc76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a70u);

L_BC7A:
    /* 0000bc7a   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000bc7au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_BC7E:
    /* 0000bc7e   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000bc7eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_BC80:
    /* 0000bc80   2  beq 0000bcb2 */
    c->pc = RC_ADDR(0x0000bc80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BCB2;

L_BC82:
    /* 0000bc82   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bc82u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BC86:
    /* 0000bc86   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bc86u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BC88:
    /* 0000bc88   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bc88u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BC8A:
    /* 0000bc8a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bc8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BC8C:
    /* 0000bc8c   4  lea (ffff9590,A4),A0 */
    c->pc = RC_ADDR(0x0000bc8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a70u);

L_BC90:
    /* 0000bc90   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bc90u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC94:
    /* 0000bc94   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bc94u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bc98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BC98:
    /* 0000bc98   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bc98u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BC9A:
    /* 0000bc9a   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000bc9au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BC9E:
    /* 0000bc9e   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000bc9eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_BCA0:
    /* 0000bca0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000bca0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_BCA2:
    /* 0000bca2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000bca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_BCA4:
    /* 0000bca4   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000bca4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_BCA8:
    /* 0000bca8   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000bca8u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BCAC:
    /* 0000bcac   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bcacu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_BCB0:
    /* 0000bcb0   2  bra 0000bc6c */
    c->pc = RC_ADDR(0x0000bcb0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_BC6C;

L_BCB2:
    /* 0000bcb2   4  move.w (e14,A4),D0 */
    c->pc = RC_ADDR(0x0000bcb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BCB6:
    /* 0000bcb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bcb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BCB8:
    /* 0000bcb8   4  bra 0000bdc2 */
    c->pc = RC_ADDR(0x0000bcb8u);
    rc_step(c, m, 10);
    goto L_BDC2;

L_BCBC:
    /* 0000bcbc   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bcbcu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_BCC0:
    /* 0000bcc0   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bcc0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BCC4:
    /* 0000bcc4   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bcc4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BCC6:
    /* 0000bcc6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bcc6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BCC8:
    /* 0000bcc8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bcc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BCCA:
    /* 0000bcca   4  lea (ffff95d0,A4),A0 */
    c->pc = RC_ADDR(0x0000bccau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a30u);

L_BCCE:
    /* 0000bcce   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000bcceu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_BCD2:
    /* 0000bcd2   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000bcd2u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_BCD4:
    /* 0000bcd4   2  beq 0000bd30 */
    c->pc = RC_ADDR(0x0000bcd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BD30;

L_BCD6:
    /* 0000bcd6   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bcd6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BCDA:
    /* 0000bcda   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bcdau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BCDC:
    /* 0000bcdc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bcdcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BCDE:
    /* 0000bcde   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bcdeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BCE0:
    /* 0000bce0   4  lea (ffff95d0,A4),A0 */
    c->pc = RC_ADDR(0x0000bce0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a30u);

L_BCE4:
    /* 0000bce4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bce4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BCE8:
    /* 0000bce8   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bce8u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bcecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BCEC:
    /* 0000bcec   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bcecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BCEE:
    /* 0000bcee   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000bceeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BCF2:
    /* 0000bcf2   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000bcf2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_BCF4:
    /* 0000bcf4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000bcf4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_BCF6:
    /* 0000bcf6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000bcf6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_BCF8:
    /* 0000bcf8   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000bcf8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_BCFC:
    /* 0000bcfc   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000bcfcu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD00:
    /* 0000bd00   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bd00u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD04:
    /* 0000bd04   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bd04u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BD06:
    /* 0000bd06   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bd06u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BD08:
    /* 0000bd08   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bd08u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BD0A:
    /* 0000bd0a   4  lea (ffff9650,A4),A0 */
    c->pc = RC_ADDR(0x0000bd0au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x69b0u);

L_BD0E:
    /* 0000bd0e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bd0eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD12:
    /* 0000bd12   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bd12u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bd16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BD16:
    /* 0000bd16   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bd16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD18:
    /* 0000bd18   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000bd18u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD1C:
    /* 0000bd1c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000bd1cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_BD1E:
    /* 0000bd1e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000bd1eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_BD20:
    /* 0000bd20   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000bd20u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_BD22:
    /* 0000bd22   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000bd22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_BD26:
    /* 0000bd26   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000bd26u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD2A:
    /* 0000bd2a   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bd2au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_BD2E:
    /* 0000bd2e   2  bra 0000bcc0 */
    c->pc = RC_ADDR(0x0000bd2eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_BCC0;

L_BD30:
    /* 0000bd30   6  move.w #ae,(dc8,A4) */
    c->pc = RC_ADDR(0x0000bd30u);
    rc_step(c, m, 16);
    t0 = 0x000000aeu;
    rc_wr16(c, m, (c->a[4] + 0xdc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD36:
    /* 0000bd36   6  move.w #54,(dca,A4) */
    c->pc = RC_ADDR(0x0000bd36u);
    rc_step(c, m, 16);
    t0 = 0x00000054u;
    rc_wr16(c, m, (c->a[4] + 0xdcau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BD3C:
    /* 0000bd3c   4  bra 0000bdce */
    c->pc = RC_ADDR(0x0000bd3cu);
    rc_step(c, m, 10);
    goto L_BDCE;

L_BD40:
    /* 0000bd40   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bd40u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_BD44:
    /* 0000bd44   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bd44u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD48:
    /* 0000bd48   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bd48u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BD4A:
    /* 0000bd4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bd4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BD4C:
    /* 0000bd4c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bd4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BD4E:
    /* 0000bd4e   4  lea (ffff95d0,A4),A0 */
    c->pc = RC_ADDR(0x0000bd4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6a30u);

L_BD52:
    /* 0000bd52   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000bd52u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_BD56:
    /* 0000bd56   2  tst.b (A1) */
    c->pc = RC_ADDR(0x0000bd56u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_BD58:
    /* 0000bd58   2  beq 0000bdb4 */
    c->pc = RC_ADDR(0x0000bd58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BDB4;

L_BD5A:
    /* 0000bd5a   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bd5au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD5E:
    /* 0000bd5e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bd5eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BD60:
    /* 0000bd60   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bd60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BD62:
    /* 0000bd62   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bd62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BD64:
    /* 0000bd64   4  lea (ffff9610,A4),A0 */
    c->pc = RC_ADDR(0x0000bd64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x69f0u);

L_BD68:
    /* 0000bd68   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bd68u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD6C:
    /* 0000bd6c   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bd6cu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bd70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BD70:
    /* 0000bd70   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bd70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD72:
    /* 0000bd72   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000bd72u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD76:
    /* 0000bd76   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000bd76u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_BD78:
    /* 0000bd78   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000bd78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_BD7A:
    /* 0000bd7a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000bd7au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_BD7C:
    /* 0000bd7c   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000bd7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_BD80:
    /* 0000bd80   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000bd80u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD84:
    /* 0000bd84   4  move.b (ffffffff,A5),D0 */
    c->pc = RC_ADDR(0x0000bd84u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BD88:
    /* 0000bd88   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000bd88u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_BD8A:
    /* 0000bd8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bd8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BD8C:
    /* 0000bd8c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bd8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BD8E:
    /* 0000bd8e   4  lea (ffff9690,A4),A0 */
    c->pc = RC_ADDR(0x0000bd8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6970u);

L_BD92:
    /* 0000bd92   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bd92u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD96:
    /* 0000bd96   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bd96u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bd9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BD9A:
    /* 0000bd9a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bd9au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD9C:
    /* 0000bd9c   4  move.b (ffffffff,A5),D1 */
    c->pc = RC_ADDR(0x0000bd9cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BDA0:
    /* 0000bda0   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000bda0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_BDA2:
    /* 0000bda2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000bda2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_BDA4:
    /* 0000bda4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000bda4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_BDA6:
    /* 0000bda6   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000bda6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_BDAA:
    /* 0000bdaa   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000bdaau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BDAE:
    /* 0000bdae   4  addq.b #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x0000bdaeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_BDB2:
    /* 0000bdb2   2  bra 0000bd44 */
    c->pc = RC_ADDR(0x0000bdb2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_BD44;

L_BDB4:
    /* 0000bdb4   6  move.w #ae,(dc8,A4) */
    c->pc = RC_ADDR(0x0000bdb4u);
    rc_step(c, m, 16);
    t0 = 0x000000aeu;
    rc_wr16(c, m, (c->a[4] + 0xdc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BDBA:
    /* 0000bdba   6  move.w #5b,(dca,A4) */
    c->pc = RC_ADDR(0x0000bdbau);
    rc_step(c, m, 16);
    t0 = 0x0000005bu;
    rc_wr16(c, m, (c->a[4] + 0xdcau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BDC0:
    /* 0000bdc0   2  bra 0000bdce */
    c->pc = RC_ADDR(0x0000bdc0u);
    rc_step(c, m, 10);
    goto L_BDCE;

L_BDC2:
    /* 0000bdc2   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000bdc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_BDC4:
    /* 0000bdc4   4  beq 0000bcbc */
    c->pc = RC_ADDR(0x0000bdc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_BCBC; }

L_BDC8:
    /* 0000bdc8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000bdc8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BDCA:
    /* 0000bdca   4  beq 0000bd40 */
    c->pc = RC_ADDR(0x0000bdcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_BD40; }

L_BDCE:
    /* 0000bdce   4  pea (0000bf92) */
    c->pc = RC_ADDR(0x0000bdceu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bf92u));

L_BDD2:
    /* 0000bdd2   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000bdd2u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000bdd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_BDD6:
    /* 0000bdd6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bdd6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BDD8:
    /* 0000bdd8   4  move.l D0,(cfc,A4) */
    c->pc = RC_ADDR(0x0000bdd8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcfcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BDDC:
    /* 0000bddc   4  pea (0000bfa0) */
    c->pc = RC_ADDR(0x0000bddcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bfa0u));

L_BDE0:
    /* 0000bde0   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bde0u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bde4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BDE4:
    /* 0000bde4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bde4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BDE6:
    /* 0000bde6   4  move.l D0,(cf4,A4) */
    c->pc = RC_ADDR(0x0000bde6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcf4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BDEA:
    /* 0000bdea   4  pea (0000bfa6) */
    c->pc = RC_ADDR(0x0000bdeau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bfa6u));

L_BDEE:
    /* 0000bdee   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000bdeeu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000bdf2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BDF2:
    /* 0000bdf2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bdf2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BDF4:
    /* 0000bdf4   4  move.l D0,(cf8,A4) */
    c->pc = RC_ADDR(0x0000bdf4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcf8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BDF8:
    /* 0000bdf8   4  clr.w (d02,A4) */
    c->pc = RC_ADDR(0x0000bdf8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xd02u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BDFC:
    /* 0000bdfc   4  clr.w (d00,A4) */
    c->pc = RC_ADDR(0x0000bdfcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xd00u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE00:
    /* 0000be00   4  tst.w (e14,A4) */
    c->pc = RC_ADDR(0x0000be00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe14u));
    rc_set_nzvc(c, t0, RC_W);

L_BE04:
    /* 0000be04   2  beq 0000be28 */
    c->pc = RC_ADDR(0x0000be04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BE28;

L_BE06:
    /* 0000be06   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be06u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE08:
    /* 0000be08   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be08u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE0A:
    /* 0000be0a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be0au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE0C:
    /* 0000be0c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be0cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE0E:
    /* 0000be0e   4  pea (0000bfac) */
    c->pc = RC_ADDR(0x0000be0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bfacu));

L_BE12:
    /* 0000be12   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000be12u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000be16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BE16:
    /* 0000be16   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000be16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BE18:
    /* 0000be18   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000be18u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE1A:
    /* 0000be1a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000be1au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE1E:
    /* 0000be1e   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000be1eu);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000be22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_BE22:
    /* 0000be22   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000be22u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BE26:
    /* 0000be26   2  bra 0000be48 */
    c->pc = RC_ADDR(0x0000be26u);
    rc_step(c, m, 10);
    goto L_BE48;

L_BE28:
    /* 0000be28   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be28u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE2A:
    /* 0000be2a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be2au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE2C:
    /* 0000be2c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be2cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE2E:
    /* 0000be2e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be2eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE30:
    /* 0000be30   4  pea (0000bfb2) */
    c->pc = RC_ADDR(0x0000be30u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bfb2u));

L_BE34:
    /* 0000be34   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000be34u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000be38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BE38:
    /* 0000be38   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000be38u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BE3A:
    /* 0000be3a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000be3au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE3C:
    /* 0000be3c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000be3cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE40:
    /* 0000be40   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000be40u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000be44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_BE44:
    /* 0000be44   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000be44u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BE48:
    /* 0000be48   4  move.w #50,-(A7) */
    c->pc = RC_ADDR(0x0000be48u);
    rc_step(c, m, 12);
    t0 = 0x00000050u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE4C:
    /* 0000be4c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be4cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE4E:
    /* 0000be4e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be4eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE50:
    /* 0000be50   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000be50u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE52:
    /* 0000be52   4  pea (0000bfb7) */
    c->pc = RC_ADDR(0x0000be52u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bfb7u));

L_BE56:
    /* 0000be56   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000be56u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000be5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_BE5A:
    /* 0000be5a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000be5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BE5C:
    /* 0000be5c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000be5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE5E:
    /* 0000be5e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000be5eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE62:
    /* 0000be62   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000be62u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000be66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_BE66:
    /* 0000be66   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000be66u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BE6A:
    /* 0000be6a   6  move.w #1,(7ba,A4) */
    c->pc = RC_ADDR(0x0000be6au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x7bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE70:
    /* 0000be70   4  clr.w (dd8,A4) */
    c->pc = RC_ADDR(0x0000be70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE74:
    /* 0000be74   4  clr.w (dd6,A4) */
    c->pc = RC_ADDR(0x0000be74u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE78:
    /* 0000be78   6  move.w #4,(ddc,A4) */
    c->pc = RC_ADDR(0x0000be78u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xddcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE7E:
    /* 0000be7e   6  move.w #4,(dda,A4) */
    c->pc = RC_ADDR(0x0000be7eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xddau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE84:
    /* 0000be84   6  move.w #76,(de0,A4) */
    c->pc = RC_ADDR(0x0000be84u);
    rc_step(c, m, 16);
    t0 = 0x00000076u;
    rc_wr16(c, m, (c->a[4] + 0xde0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE8A:
    /* 0000be8a   6  move.w #76,(dde,A4) */
    c->pc = RC_ADDR(0x0000be8au);
    rc_step(c, m, 16);
    t0 = 0x00000076u;
    rc_wr16(c, m, (c->a[4] + 0xddeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE90:
    /* 0000be90   4  clr.w (dd2,A4) */
    c->pc = RC_ADDR(0x0000be90u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE94:
    /* 0000be94   4  clr.w (dd0,A4) */
    c->pc = RC_ADDR(0x0000be94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE98:
    /* 0000be98   4  clr.w (dce,A4) */
    c->pc = RC_ADDR(0x0000be98u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE9C:
    /* 0000be9c   4  clr.w (dcc,A4) */
    c->pc = RC_ADDR(0x0000be9cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BEA0:
    /* 0000bea0   6  move.w #3c,(dd4,A4) */
    c->pc = RC_ADDR(0x0000bea0u);
    rc_step(c, m, 16);
    t0 = 0x0000003cu;
    rc_wr16(c, m, (c->a[4] + 0xdd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEA6:
    /* 0000bea6   4  clr.w (ffff9910,A4) */
    c->pc = RC_ADDR(0x0000bea6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x66f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BEAA:
    /* 0000beaa   4  clr.w (dcc,A4) */
    c->pc = RC_ADDR(0x0000beaau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BEAE:
    /* 0000beae   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000beaeu);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEB2:
    /* 0000beb2   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000beb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEB6:
    /* 0000beb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000beb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BEB8:
    /* 0000beb8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000beb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BEBA:
    /* 0000beba   4  lea (ffff96d2,A4),A0 */
    c->pc = RC_ADDR(0x0000bebau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x692eu);

L_BEBE:
    /* 0000bebe   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bebeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEC2:
    /* 0000bec2   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000bec2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEC6:
    /* 0000bec6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bec6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BEC8:
    /* 0000bec8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bec8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BECA:
    /* 0000beca   4  lea (ffff96d0,A4),A0 */
    c->pc = RC_ADDR(0x0000becau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6930u);

L_BECE:
    /* 0000bece   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000beceu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BED2:
    /* 0000bed2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000bed2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BED4:
    /* 0000bed4   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000bed4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BED8:
    /* 0000bed8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bed8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BEDA:
    /* 0000beda   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bedau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BEDC:
    /* 0000bedc   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000bedcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_BEE0:
    /* 0000bee0   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bee0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BEE4:
    /* 0000bee4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000bee4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEE8:
    /* 0000bee8   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000bee8u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000beecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_BEEC:
    /* 0000beec   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000beecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BEF0:
    /* 0000bef0   6  move.w #9,(dce,A4) */
    c->pc = RC_ADDR(0x0000bef0u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEF6:
    /* 0000bef6   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000bef6u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEFA:
    /* 0000befa   4  move.w (dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000befau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdcau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEFE:
    /* 0000befe   4  move.w (dc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000befeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdc8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF02:
    /* 0000bf02   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000bf02u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BF04:
    /* 0000bf04   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000bf04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF08:
    /* 0000bf08   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bf08u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BF0A:
    /* 0000bf0a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bf0au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BF0C:
    /* 0000bf0c   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000bf0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_BF10:
    /* 0000bf10   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bf10u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF14:
    /* 0000bf14   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000bf14u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF18:
    /* 0000bf18   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000bf18u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000bf1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_BF1C:
    /* 0000bf1c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000bf1cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BF20:
    /* 0000bf20   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x0000bf20u);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF24:
    /* 0000bf24   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0000bf24u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF28:
    /* 0000bf28   4  jsr (ffff8290,A4) */
    c->pc = RC_ADDR(0x0000bf28u);
    rc_step(c, m, 18);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0000bf2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d86u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021976u);
    return;

L_BF2C:
    /* 0000bf2c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000bf2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BF2E:
    /* 0000bf2e   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000bf2eu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000bf32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_BF32:
    /* 0000bf32   4  jsr (0000bfbe) */
    c->pc = RC_ADDR(0x0000bf32u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000bf36u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000bfbeu);
    return;

L_BF36:
    /* 0000bf36   4  jsr (0000c138) */
    c->pc = RC_ADDR(0x0000bf36u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000bf3au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c138u);
    return;

L_BF3A:
    /* 0000bf3a   4  jsr (0000c31e) */
    c->pc = RC_ADDR(0x0000bf3au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000bf3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c31eu);
    return;

L_BF3E:
    /* 0000bf3e   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0000bf3eu);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x0000bf42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bdcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b03eu);
    return;

L_BF42:
    /* 0000bf42   4  tst.w (ffff9910,A4) */
    c->pc = RC_ADDR(0x0000bf42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66f0u));
    rc_set_nzvc(c, t0, RC_W);

L_BF46:
    /* 0000bf46   2  beq 0000bf64 */
    c->pc = RC_ADDR(0x0000bf46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BF64;

L_BF48:
    /* 0000bf48   6  cmpi.w #8,(dcc,A4) */
    c->pc = RC_ADDR(0x0000bf48u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_BF4E:
    /* 0000bf4e   2  bne 0000bf5a */
    c->pc = RC_ADDR(0x0000bf4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BF5A;

L_BF50:
    /* 0000bf50   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000bf50u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BF54:
    /* 0000bf54   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000bf54u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BF56:
    /* 0000bf56   2  unlk A5 */
    c->pc = RC_ADDR(0x0000bf56u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BF58:
    /* 0000bf58   2  rts */
    c->pc = RC_ADDR(0x0000bf58u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_BF5A:
    /* 0000bf5a   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0000bf5au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF60:
    /* 0000bf60   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000bf60u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BF62:
    /* 0000bf62   2  bra 0000bf56 */
    c->pc = RC_ADDR(0x0000bf62u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_BF56;

L_BF64:
    /* 0000bf64   4  tst.w (dd4,A4) */
    c->pc = RC_ADDR(0x0000bf64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd4u));
    rc_set_nzvc(c, t0, RC_W);

L_BF68:
    /* 0000bf68   2  beq 0000bf6e */
    c->pc = RC_ADDR(0x0000bf68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BF6E;

L_BF6A:
    /* 0000bf6a   4  subq.w #1,(dd4,A4) */
    c->pc = RC_ADDR(0x0000bf6au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_BF6E:
    /* 0000bf6e   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF72:
    /* 0000bf72   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF76:
    /* 0000bf76   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF7A:
    /* 0000bf7a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000bf7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_BF7E:
    /* 0000bf7e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000bf7eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF82:
    /* 0000bf82   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000bf82u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000bf86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_BF86:
    /* 0000bf86   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000bf86u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BF8A:
    /* 0000bf8a   4  jsr (0000c636) */
    c->pc = RC_ADDR(0x0000bf8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000bf8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c636u);
    return;

L_BF8E:
    /* 0000bf8e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000bf8eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BF90:
    /* 0000bf90   2  bra 0000bf56 */
    c->pc = RC_ADDR(0x0000bf90u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_BF56;

}
