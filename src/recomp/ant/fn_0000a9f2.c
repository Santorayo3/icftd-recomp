/* fn_0000a9f2 - 580 byte(s), 164 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a9f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a9f2u): goto L_A9F2;
    case RC_ADDR(0x0000a9f6u): goto L_A9F6;
    case RC_ADDR(0x0000a9fau): goto L_A9FA;
    case RC_ADDR(0x0000a9feu): goto L_A9FE;
    case RC_ADDR(0x0000aa00u): goto L_AA00;
    case RC_ADDR(0x0000aa04u): goto L_AA04;
    case RC_ADDR(0x0000aa08u): goto L_AA08;
    case RC_ADDR(0x0000aa0au): goto L_AA0A;
    case RC_ADDR(0x0000aa0eu): goto L_AA0E;
    case RC_ADDR(0x0000aa14u): goto L_AA14;
    case RC_ADDR(0x0000aa1au): goto L_AA1A;
    case RC_ADDR(0x0000aa1eu): goto L_AA1E;
    case RC_ADDR(0x0000aa22u): goto L_AA22;
    case RC_ADDR(0x0000aa24u): goto L_AA24;
    case RC_ADDR(0x0000aa28u): goto L_AA28;
    case RC_ADDR(0x0000aa2au): goto L_AA2A;
    case RC_ADDR(0x0000aa2cu): goto L_AA2C;
    case RC_ADDR(0x0000aa2eu): goto L_AA2E;
    case RC_ADDR(0x0000aa30u): goto L_AA30;
    case RC_ADDR(0x0000aa34u): goto L_AA34;
    case RC_ADDR(0x0000aa38u): goto L_AA38;
    case RC_ADDR(0x0000aa3cu): goto L_AA3C;
    case RC_ADDR(0x0000aa40u): goto L_AA40;
    case RC_ADDR(0x0000aa44u): goto L_AA44;
    case RC_ADDR(0x0000aa48u): goto L_AA48;
    case RC_ADDR(0x0000aa4eu): goto L_AA4E;
    case RC_ADDR(0x0000aa52u): goto L_AA52;
    case RC_ADDR(0x0000aa54u): goto L_AA54;
    case RC_ADDR(0x0000aa58u): goto L_AA58;
    case RC_ADDR(0x0000aa5au): goto L_AA5A;
    case RC_ADDR(0x0000aa5eu): goto L_AA5E;
    case RC_ADDR(0x0000aa60u): goto L_AA60;
    case RC_ADDR(0x0000aa62u): goto L_AA62;
    case RC_ADDR(0x0000aa64u): goto L_AA64;
    case RC_ADDR(0x0000aa66u): goto L_AA66;
    case RC_ADDR(0x0000aa6au): goto L_AA6A;
    case RC_ADDR(0x0000aa6eu): goto L_AA6E;
    case RC_ADDR(0x0000aa72u): goto L_AA72;
    case RC_ADDR(0x0000aa76u): goto L_AA76;
    case RC_ADDR(0x0000aa7au): goto L_AA7A;
    case RC_ADDR(0x0000aa7cu): goto L_AA7C;
    case RC_ADDR(0x0000aa80u): goto L_AA80;
    case RC_ADDR(0x0000aa84u): goto L_AA84;
    case RC_ADDR(0x0000aa88u): goto L_AA88;
    case RC_ADDR(0x0000aa8cu): goto L_AA8C;
    case RC_ADDR(0x0000aa8eu): goto L_AA8E;
    case RC_ADDR(0x0000aa92u): goto L_AA92;
    case RC_ADDR(0x0000aa96u): goto L_AA96;
    case RC_ADDR(0x0000aa9au): goto L_AA9A;
    case RC_ADDR(0x0000aa9cu): goto L_AA9C;
    case RC_ADDR(0x0000aaa0u): goto L_AAA0;
    case RC_ADDR(0x0000aaa4u): goto L_AAA4;
    case RC_ADDR(0x0000aaa8u): goto L_AAA8;
    case RC_ADDR(0x0000aaacu): goto L_AAAC;
    case RC_ADDR(0x0000aab0u): goto L_AAB0;
    case RC_ADDR(0x0000aab4u): goto L_AAB4;
    case RC_ADDR(0x0000aab8u): goto L_AAB8;
    case RC_ADDR(0x0000aabcu): goto L_AABC;
    case RC_ADDR(0x0000aac0u): goto L_AAC0;
    case RC_ADDR(0x0000aac4u): goto L_AAC4;
    case RC_ADDR(0x0000aac8u): goto L_AAC8;
    case RC_ADDR(0x0000aacau): goto L_AACA;
    case RC_ADDR(0x0000aaceu): goto L_AACE;
    case RC_ADDR(0x0000aad2u): goto L_AAD2;
    case RC_ADDR(0x0000aad6u): goto L_AAD6;
    case RC_ADDR(0x0000aadau): goto L_AADA;
    case RC_ADDR(0x0000aadcu): goto L_AADC;
    case RC_ADDR(0x0000aae0u): goto L_AAE0;
    case RC_ADDR(0x0000aae4u): goto L_AAE4;
    case RC_ADDR(0x0000aae8u): goto L_AAE8;
    case RC_ADDR(0x0000aaeau): goto L_AAEA;
    case RC_ADDR(0x0000aaeeu): goto L_AAEE;
    case RC_ADDR(0x0000aaf2u): goto L_AAF2;
    case RC_ADDR(0x0000aaf6u): goto L_AAF6;
    case RC_ADDR(0x0000aafau): goto L_AAFA;
    case RC_ADDR(0x0000aafeu): goto L_AAFE;
    case RC_ADDR(0x0000ab02u): goto L_AB02;
    case RC_ADDR(0x0000ab06u): goto L_AB06;
    case RC_ADDR(0x0000ab0au): goto L_AB0A;
    case RC_ADDR(0x0000ab0eu): goto L_AB0E;
    case RC_ADDR(0x0000ab12u): goto L_AB12;
    case RC_ADDR(0x0000ab16u): goto L_AB16;
    case RC_ADDR(0x0000ab1au): goto L_AB1A;
    case RC_ADDR(0x0000ab1eu): goto L_AB1E;
    case RC_ADDR(0x0000ab22u): goto L_AB22;
    case RC_ADDR(0x0000ab26u): goto L_AB26;
    case RC_ADDR(0x0000ab2au): goto L_AB2A;
    case RC_ADDR(0x0000ab2eu): goto L_AB2E;
    case RC_ADDR(0x0000ab32u): goto L_AB32;
    case RC_ADDR(0x0000ab36u): goto L_AB36;
    case RC_ADDR(0x0000ab3au): goto L_AB3A;
    case RC_ADDR(0x0000ab3eu): goto L_AB3E;
    case RC_ADDR(0x0000ab42u): goto L_AB42;
    case RC_ADDR(0x0000ab46u): goto L_AB46;
    case RC_ADDR(0x0000ab4au): goto L_AB4A;
    case RC_ADDR(0x0000ab4eu): goto L_AB4E;
    case RC_ADDR(0x0000ab52u): goto L_AB52;
    case RC_ADDR(0x0000ab56u): goto L_AB56;
    case RC_ADDR(0x0000ab5au): goto L_AB5A;
    case RC_ADDR(0x0000ab5eu): goto L_AB5E;
    case RC_ADDR(0x0000ab62u): goto L_AB62;
    case RC_ADDR(0x0000ab66u): goto L_AB66;
    case RC_ADDR(0x0000ab68u): goto L_AB68;
    case RC_ADDR(0x0000ab6cu): goto L_AB6C;
    case RC_ADDR(0x0000ab70u): goto L_AB70;
    case RC_ADDR(0x0000ab72u): goto L_AB72;
    case RC_ADDR(0x0000ab76u): goto L_AB76;
    case RC_ADDR(0x0000ab7au): goto L_AB7A;
    case RC_ADDR(0x0000ab7cu): goto L_AB7C;
    case RC_ADDR(0x0000ab7eu): goto L_AB7E;
    case RC_ADDR(0x0000ab82u): goto L_AB82;
    case RC_ADDR(0x0000ab86u): goto L_AB86;
    case RC_ADDR(0x0000ab88u): goto L_AB88;
    case RC_ADDR(0x0000ab8cu): goto L_AB8C;
    case RC_ADDR(0x0000ab90u): goto L_AB90;
    case RC_ADDR(0x0000ab92u): goto L_AB92;
    case RC_ADDR(0x0000ab94u): goto L_AB94;
    case RC_ADDR(0x0000ab96u): goto L_AB96;
    case RC_ADDR(0x0000ab9cu): goto L_AB9C;
    case RC_ADDR(0x0000aba0u): goto L_ABA0;
    case RC_ADDR(0x0000aba6u): goto L_ABA6;
    case RC_ADDR(0x0000abaau): goto L_ABAA;
    case RC_ADDR(0x0000abacu): goto L_ABAC;
    case RC_ADDR(0x0000abb0u): goto L_ABB0;
    case RC_ADDR(0x0000abb2u): goto L_ABB2;
    case RC_ADDR(0x0000abb6u): goto L_ABB6;
    case RC_ADDR(0x0000abbcu): goto L_ABBC;
    case RC_ADDR(0x0000abc0u): goto L_ABC0;
    case RC_ADDR(0x0000abc6u): goto L_ABC6;
    case RC_ADDR(0x0000abcau): goto L_ABCA;
    case RC_ADDR(0x0000abccu): goto L_ABCC;
    case RC_ADDR(0x0000abd0u): goto L_ABD0;
    case RC_ADDR(0x0000abd2u): goto L_ABD2;
    case RC_ADDR(0x0000abd6u): goto L_ABD6;
    case RC_ADDR(0x0000abd8u): goto L_ABD8;
    case RC_ADDR(0x0000abdcu): goto L_ABDC;
    case RC_ADDR(0x0000abdeu): goto L_ABDE;
    case RC_ADDR(0x0000abe0u): goto L_ABE0;
    case RC_ADDR(0x0000abe2u): goto L_ABE2;
    case RC_ADDR(0x0000abe4u): goto L_ABE4;
    case RC_ADDR(0x0000abe6u): goto L_ABE6;
    case RC_ADDR(0x0000abeau): goto L_ABEA;
    case RC_ADDR(0x0000abecu): goto L_ABEC;
    case RC_ADDR(0x0000abf2u): goto L_ABF2;
    case RC_ADDR(0x0000abf6u): goto L_ABF6;
    case RC_ADDR(0x0000abfcu): goto L_ABFC;
    case RC_ADDR(0x0000abfeu): goto L_ABFE;
    case RC_ADDR(0x0000ac00u): goto L_AC00;
    case RC_ADDR(0x0000ac02u): goto L_AC02;
    case RC_ADDR(0x0000ac04u): goto L_AC04;
    case RC_ADDR(0x0000ac08u): goto L_AC08;
    case RC_ADDR(0x0000ac0cu): goto L_AC0C;
    case RC_ADDR(0x0000ac10u): goto L_AC10;
    case RC_ADDR(0x0000ac14u): goto L_AC14;
    case RC_ADDR(0x0000ac16u): goto L_AC16;
    case RC_ADDR(0x0000ac1au): goto L_AC1A;
    case RC_ADDR(0x0000ac1eu): goto L_AC1E;
    case RC_ADDR(0x0000ac22u): goto L_AC22;
    case RC_ADDR(0x0000ac24u): goto L_AC24;
    case RC_ADDR(0x0000ac28u): goto L_AC28;
    case RC_ADDR(0x0000ac2cu): goto L_AC2C;
    case RC_ADDR(0x0000ac30u): goto L_AC30;
    case RC_ADDR(0x0000ac32u): goto L_AC32;
    case RC_ADDR(0x0000ac34u): goto L_AC34;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A9F2:
    /* 0000a9f2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000a9f2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_A9F6:
    /* 0000a9f6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000a9f6u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000a9fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_A9FA:
    /* 0000a9fa   4  tst.w (9c6,A4) */
    c->pc = RC_ADDR(0x0000a9fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c6u));
    rc_set_nzvc(c, t0, RC_W);

L_A9FE:
    /* 0000a9fe   2  beq 0000aa4e */
    c->pc = RC_ADDR(0x0000a9feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AA4E;

L_AA00:
    /* 0000aa00   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000aa00u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_AA04:
    /* 0000aa04   4  jsr (ffff80f2,A4) */
    c->pc = RC_ADDR(0x0000aa04u);
    rc_step(c, m, 18);
    /* vector 40 */
    rc_push32(c, m, RC_ADDR(0x0000aa08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023be8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b090u);
    return;

L_AA08:
    /* 0000aa08   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000aa08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AA0A:
    /* 0000aa0a   4  movea.l (ffffa428,A4),A0 */
    c->pc = RC_ADDR(0x0000aa0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[0] = t0;

L_AA0E:
    /* 0000aa0e   6  move.w #ac,(2,A0) */
    c->pc = RC_ADDR(0x0000aa0eu);
    rc_step(c, m, 16);
    t0 = 0x000000acu;
    rc_wr16(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA14:
    /* 0000aa14   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000aa14u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA1A:
    /* 0000aa1a   4  pea (0000ac36) */
    c->pc = RC_ADDR(0x0000aa1au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ac36u));

L_AA1E:
    /* 0000aa1e   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000aa1eu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000aa22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_AA22:
    /* 0000aa22   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000aa22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AA24:
    /* 0000aa24   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000aa24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA28:
    /* 0000aa28   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000aa28u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AA2A:
    /* 0000aa2a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000aa2au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AA2C:
    /* 0000aa2c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000aa2cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AA2E:
    /* 0000aa2e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000aa2eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA30:
    /* 0000aa30   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000aa30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA34:
    /* 0000aa34   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000aa34u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA38:
    /* 0000aa38   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000aa38u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000aa3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_AA3C:
    /* 0000aa3c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000aa3cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_AA40:
    /* 0000aa40   4  clr.w (9c6,A4) */
    c->pc = RC_ADDR(0x0000aa40u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA44:
    /* 0000aa44   4  clr.w (ffffd570,A4) */
    c->pc = RC_ADDR(0x0000aa44u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a90u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA48:
    /* 0000aa48   6  move.l (ffffd5c0,A4),(ffffd572,A4) */
    c->pc = RC_ADDR(0x0000aa48u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a40u));
    rc_wr32(c, m, (c->a[4] - 0x2a8eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA4E:
    /* 0000aa4e   4  tst.l (ffffd572,A4) */
    c->pc = RC_ADDR(0x0000aa4eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a8eu));
    rc_set_nzvc(c, t0, RC_L);

L_AA52:
    /* 0000aa52   2  beq 0000aa60 */
    c->pc = RC_ADDR(0x0000aa52u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AA60;

L_AA54:
    /* 0000aa54   4  tst.l (ffffd572,A4) */
    c->pc = RC_ADDR(0x0000aa54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a8eu));
    rc_set_nzvc(c, t0, RC_L);

L_AA58:
    /* 0000aa58   2  beq 0000aa60 */
    c->pc = RC_ADDR(0x0000aa58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AA60;

L_AA5A:
    /* 0000aa5a   4  subq.l #1,(ffffd572,A4) */
    c->pc = RC_ADDR(0x0000aa5au);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2a8eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_AA5E:
    /* 0000aa5e   2  bra 0000aa54 */
    c->pc = RC_ADDR(0x0000aa5eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AA54;

L_AA60:
    /* 0000aa60   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000aa60u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA62:
    /* 0000aa62   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000aa62u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AA64:
    /* 0000aa64   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000aa64u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AA66:
    /* 0000aa66   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000aa66u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_AA6A:
    /* 0000aa6a   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000aa6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AA6E:
    /* 0000aa6e   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000aa6eu);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000aa72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_AA72:
    /* 0000aa72   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000aa72u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AA76:
    /* 0000aa76   4  move.w (ffffd570,A4),D0 */
    c->pc = RC_ADDR(0x0000aa76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AA7A:
    /* 0000aa7a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000aa7au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AA7C:
    /* 0000aa7c   4  bra 0000ab96 */
    c->pc = RC_ADDR(0x0000aa7cu);
    rc_step(c, m, 10);
    goto L_AB96;

L_AA80:
    /* 0000aa80   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0000aa80u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_AA84:
    /* 0000aa84   4  pea (0000006e).l */
    c->pc = RC_ADDR(0x0000aa84u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006eu);

L_AA88:
    /* 0000aa88   4  jsr (000107f4) */
    c->pc = RC_ADDR(0x0000aa88u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aa8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000107f4u);
    return;

L_AA8C:
    /* 0000aa8c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000aa8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AA8E:
    /* 0000aa8e   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000aa8eu);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AA92:
    /* 0000aa92   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0000aa92u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_AA96:
    /* 0000aa96   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0000aa96u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0000aa9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_AA9A:
    /* 0000aa9a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000aa9au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AA9C:
    /* 0000aa9c   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000aa9cu);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AAA0:
    /* 0000aaa0   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000aaa0u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAA4:
    /* 0000aaa4   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000aaa4u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAA8:
    /* 0000aaa8   4  move.l (cd6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aaa8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcd6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAAC:
    /* 0000aaac   4  move.w (cd0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aaacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcd0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAB0:
    /* 0000aab0   4  move.l (cc4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aab0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAB4:
    /* 0000aab4   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000aab4u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000aab8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_AAB8:
    /* 0000aab8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000aab8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AABC:
    /* 0000aabc   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000aabcu);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AAC0:
    /* 0000aac0   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000aac0u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAC4:
    /* 0000aac4   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000aac4u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000aac8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AAC8:
    /* 0000aac8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000aac8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AACA:
    /* 0000aaca   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000aacau);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AACE:
    /* 0000aace   4  pea (000000dc).l */
    c->pc = RC_ADDR(0x0000aaceu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000dcu);

L_AAD2:
    /* 0000aad2   4  pea (00000190).l */
    c->pc = RC_ADDR(0x0000aad2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_AAD6:
    /* 0000aad6   4  jsr (000107f4) */
    c->pc = RC_ADDR(0x0000aad6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aadau));
    rc_depth++;
    c->pc = RC_ADDR(0x000107f4u);
    return;

L_AADA:
    /* 0000aada   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000aadau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AADC:
    /* 0000aadc   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000aadcu);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AAE0:
    /* 0000aae0   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000aae0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_AAE4:
    /* 0000aae4   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0000aae4u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0000aae8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_AAE8:
    /* 0000aae8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000aae8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AAEA:
    /* 0000aaea   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000aaeau);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAEE:
    /* 0000aaee   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000aaeeu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAF2:
    /* 0000aaf2   4  move.l (cda,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aaf2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAF6:
    /* 0000aaf6   4  move.w (cd2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aaf6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcd2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAFA:
    /* 0000aafa   4  move.l (cc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000aafau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcc8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAFE:
    /* 0000aafe   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000aafeu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000ab02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_AB02:
    /* 0000ab02   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ab02u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AB06:
    /* 0000ab06   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab06u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB0A:
    /* 0000ab0a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000ab0au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB0E:
    /* 0000ab0e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ab0eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB12:
    /* 0000ab12   4  move.l (cda,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab12u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB16:
    /* 0000ab16   4  move.w (cd2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcd2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB1A:
    /* 0000ab1a   4  move.l (cc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcc8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB1E:
    /* 0000ab1e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000ab1eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000ab22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_AB22:
    /* 0000ab22   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ab22u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AB26:
    /* 0000ab26   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab26u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB2A:
    /* 0000ab2a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000ab2au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB2E:
    /* 0000ab2e   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000ab2eu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB32:
    /* 0000ab32   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB36:
    /* 0000ab36   4  move.w #384,-(A7) */
    c->pc = RC_ADDR(0x0000ab36u);
    rc_step(c, m, 12);
    t0 = 0x00000384u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB3A:
    /* 0000ab3a   4  move.l (ccc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB3E:
    /* 0000ab3e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000ab3eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000ab42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_AB42:
    /* 0000ab42   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ab42u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AB46:
    /* 0000ab46   4  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab46u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB4A:
    /* 0000ab4a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000ab4au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB4E:
    /* 0000ab4e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ab4eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB52:
    /* 0000ab52   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab52u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB56:
    /* 0000ab56   4  move.w #384,-(A7) */
    c->pc = RC_ADDR(0x0000ab56u);
    rc_step(c, m, 12);
    t0 = 0x00000384u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB5A:
    /* 0000ab5a   4  move.l (ccc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab5au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB5E:
    /* 0000ab5e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000ab5eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000ab62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_AB62:
    /* 0000ab62   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ab62u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AB66:
    /* 0000ab66   2  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab66u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB68:
    /* 0000ab68   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ab68u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB6C:
    /* 0000ab6c   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000ab6cu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000ab70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AB70:
    /* 0000ab70   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ab70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AB72:
    /* 0000ab72   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000ab72u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB76:
    /* 0000ab76   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000ab76u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000ab7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AB7A:
    /* 0000ab7a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ab7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AB7C:
    /* 0000ab7c   2  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab7cu);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB7E:
    /* 0000ab7e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000ab7eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_AB82:
    /* 0000ab82   4  jsr (0001082c) */
    c->pc = RC_ADDR(0x0000ab82u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ab86u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001082cu);
    return;

L_AB86:
    /* 0000ab86   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ab86u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AB88:
    /* 0000ab88   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0000ab88u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_AB8C:
    /* 0000ab8c   4  jsr (0001082c) */
    c->pc = RC_ADDR(0x0000ab8cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ab90u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001082cu);
    return;

L_AB90:
    /* 0000ab90   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ab90u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_AB92:
    /* 0000ab92   2  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab92u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB94:
    /* 0000ab94   2  bra 0000abe6 */
    c->pc = RC_ADDR(0x0000ab94u);
    rc_step(c, m, 10);
    goto L_ABE6;

L_AB96:
    /* 0000ab96   6  sub.l #a0,D0 */
    c->pc = RC_ADDR(0x0000ab96u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AB9C:
    /* 0000ab9c   4  beq 0000aa80 */
    c->pc = RC_ADDR(0x0000ab9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AA80; }

L_ABA0:
    /* 0000aba0   6  sub.l #28,D0 */
    c->pc = RC_ADDR(0x0000aba0u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABA6:
    /* 0000aba6   4  beq 0000aa92 */
    c->pc = RC_ADDR(0x0000aba6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AA92; }

L_ABAA:
    /* 0000abaa   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000abaau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABAC:
    /* 0000abac   4  beq 0000aaa0 */
    c->pc = RC_ADDR(0x0000abacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AAA0; }

L_ABB0:
    /* 0000abb0   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000abb0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABB2:
    /* 0000abb2   4  beq 0000aac0 */
    c->pc = RC_ADDR(0x0000abb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AAC0; }

L_ABB6:
    /* 0000abb6   6  sub.l #52,D0 */
    c->pc = RC_ADDR(0x0000abb6u);
    rc_step(c, m, 16);
    t0 = 0x00000052u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABBC:
    /* 0000abbc   4  beq 0000aace */
    c->pc = RC_ADDR(0x0000abbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AACE; }

L_ABC0:
    /* 0000abc0   6  sub.l #5d,D0 */
    c->pc = RC_ADDR(0x0000abc0u);
    rc_step(c, m, 16);
    t0 = 0x0000005du;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABC6:
    /* 0000abc6   4  beq 0000aae0 */
    c->pc = RC_ADDR(0x0000abc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AAE0; }

L_ABCA:
    /* 0000abca   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000abcau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABCC:
    /* 0000abcc   4  beq 0000ab0a */
    c->pc = RC_ADDR(0x0000abccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AB0A; }

L_ABD0:
    /* 0000abd0   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x0000abd0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABD2:
    /* 0000abd2   4  beq 0000ab2a */
    c->pc = RC_ADDR(0x0000abd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AB2A; }

L_ABD6:
    /* 0000abd6   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000abd6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABD8:
    /* 0000abd8   4  beq 0000ab4a */
    c->pc = RC_ADDR(0x0000abd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AB4A; }

L_ABDC:
    /* 0000abdc   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x0000abdcu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABDE:
    /* 0000abde   2  beq 0000ab68 */
    c->pc = RC_ADDR(0x0000abdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AB68; }

L_ABE0:
    /* 0000abe0   2  subq.l #6,D0 */
    c->pc = RC_ADDR(0x0000abe0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_ABE2:
    /* 0000abe2   2  beq 0000ab7e */
    c->pc = RC_ADDR(0x0000abe2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AB7E; }

L_ABE4:
    /* 0000abe4   2  bra 0000ab94 */
    c->pc = RC_ADDR(0x0000abe4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AB94;

L_ABE6:
    /* 0000abe6   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0000abe6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_ABEA:
    /* 0000abea   2  beq 0000abf2 */
    c->pc = RC_ADDR(0x0000abeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_ABF2;

L_ABEC:
    /* 0000abec   6  move.w #1f4,(ffffd570,A4) */
    c->pc = RC_ADDR(0x0000abecu);
    rc_step(c, m, 16);
    t0 = 0x000001f4u;
    rc_wr16(c, m, (c->a[4] - 0x2a90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABF2:
    /* 0000abf2   4  addq.w #1,(ffffd570,A4) */
    c->pc = RC_ADDR(0x0000abf2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2a90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ABF6:
    /* 0000abf6   6  cmpi.w #1ea,(ffffd570,A4) */
    c->pc = RC_ADDR(0x0000abf6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a90u));
    rc_cmp(c, RC_W, t0, 0x000001eau);

L_ABFC:
    /* 0000abfc   2  bge 0000ac04 */
    c->pc = RC_ADDR(0x0000abfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_AC04;

L_ABFE:
    /* 0000abfe   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000abfeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AC00:
    /* 0000ac00   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ac00u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AC02:
    /* 0000ac02   2  rts */
    c->pc = RC_ADDR(0x0000ac02u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_AC04:
    /* 0000ac04   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000ac04u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000ac08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_AC08:
    /* 0000ac08   4  move.l (cd6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac08u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcd6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC0C:
    /* 0000ac0c   4  move.l (cc4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac0cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC10:
    /* 0000ac10   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000ac10u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000ac14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_AC14:
    /* 0000ac14   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ac14u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AC16:
    /* 0000ac16   4  move.l (cda,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC1A:
    /* 0000ac1a   4  move.l (cc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcc8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC1E:
    /* 0000ac1e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000ac1eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000ac22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_AC22:
    /* 0000ac22   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ac22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AC24:
    /* 0000ac24   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC28:
    /* 0000ac28   4  move.l (ccc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ac28u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC2C:
    /* 0000ac2c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000ac2cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000ac30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_AC30:
    /* 0000ac30   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ac30u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AC32:
    /* 0000ac32   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000ac32u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_AC34:
    /* 0000ac34   2  bra 0000ac00 */
    c->pc = RC_ADDR(0x0000ac34u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_AC00;

}
