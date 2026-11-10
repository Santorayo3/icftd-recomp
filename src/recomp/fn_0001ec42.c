/* fn_0001ec42 - 1020 byte(s), 272 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ec42(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001ec42u: goto L_1EC42;
    case 0x0001ec46u: goto L_1EC46;
    case 0x0001ec4au: goto L_1EC4A;
    case 0x0001ec4cu: goto L_1EC4C;
    case 0x0001ec50u: goto L_1EC50;
    case 0x0001ec52u: goto L_1EC52;
    case 0x0001ec54u: goto L_1EC54;
    case 0x0001ec58u: goto L_1EC58;
    case 0x0001ec5cu: goto L_1EC5C;
    case 0x0001ec5eu: goto L_1EC5E;
    case 0x0001ec62u: goto L_1EC62;
    case 0x0001ec64u: goto L_1EC64;
    case 0x0001ec68u: goto L_1EC68;
    case 0x0001ec6cu: goto L_1EC6C;
    case 0x0001ec70u: goto L_1EC70;
    case 0x0001ec76u: goto L_1EC76;
    case 0x0001ec78u: goto L_1EC78;
    case 0x0001ec7cu: goto L_1EC7C;
    case 0x0001ec80u: goto L_1EC80;
    case 0x0001ec84u: goto L_1EC84;
    case 0x0001ec86u: goto L_1EC86;
    case 0x0001ec8eu: goto L_1EC8E;
    case 0x0001ec90u: goto L_1EC90;
    case 0x0001ec94u: goto L_1EC94;
    case 0x0001ec98u: goto L_1EC98;
    case 0x0001ec9cu: goto L_1EC9C;
    case 0x0001ec9eu: goto L_1EC9E;
    case 0x0001eca2u: goto L_1ECA2;
    case 0x0001eca6u: goto L_1ECA6;
    case 0x0001ecaau: goto L_1ECAA;
    case 0x0001ecb2u: goto L_1ECB2;
    case 0x0001ecb4u: goto L_1ECB4;
    case 0x0001ecb8u: goto L_1ECB8;
    case 0x0001ecbcu: goto L_1ECBC;
    case 0x0001ecbeu: goto L_1ECBE;
    case 0x0001ecc2u: goto L_1ECC2;
    case 0x0001ecc6u: goto L_1ECC6;
    case 0x0001ecc8u: goto L_1ECC8;
    case 0x0001ecccu: goto L_1ECCC;
    case 0x0001ecd0u: goto L_1ECD0;
    case 0x0001ecd4u: goto L_1ECD4;
    case 0x0001ecd6u: goto L_1ECD6;
    case 0x0001ecdau: goto L_1ECDA;
    case 0x0001ecdcu: goto L_1ECDC;
    case 0x0001ecdeu: goto L_1ECDE;
    case 0x0001ece4u: goto L_1ECE4;
    case 0x0001ece8u: goto L_1ECE8;
    case 0x0001ececu: goto L_1ECEC;
    case 0x0001ecf0u: goto L_1ECF0;
    case 0x0001ecf4u: goto L_1ECF4;
    case 0x0001ecf8u: goto L_1ECF8;
    case 0x0001ecfau: goto L_1ECFA;
    case 0x0001ed00u: goto L_1ED00;
    case 0x0001ed04u: goto L_1ED04;
    case 0x0001ed08u: goto L_1ED08;
    case 0x0001ed0cu: goto L_1ED0C;
    case 0x0001ed12u: goto L_1ED12;
    case 0x0001ed16u: goto L_1ED16;
    case 0x0001ed1cu: goto L_1ED1C;
    case 0x0001ed20u: goto L_1ED20;
    case 0x0001ed26u: goto L_1ED26;
    case 0x0001ed2au: goto L_1ED2A;
    case 0x0001ed30u: goto L_1ED30;
    case 0x0001ed34u: goto L_1ED34;
    case 0x0001ed3au: goto L_1ED3A;
    case 0x0001ed3eu: goto L_1ED3E;
    case 0x0001ed44u: goto L_1ED44;
    case 0x0001ed4au: goto L_1ED4A;
    case 0x0001ed4eu: goto L_1ED4E;
    case 0x0001ed54u: goto L_1ED54;
    case 0x0001ed5au: goto L_1ED5A;
    case 0x0001ed5eu: goto L_1ED5E;
    case 0x0001ed62u: goto L_1ED62;
    case 0x0001ed64u: goto L_1ED64;
    case 0x0001ed66u: goto L_1ED66;
    case 0x0001ed6au: goto L_1ED6A;
    case 0x0001ed6eu: goto L_1ED6E;
    case 0x0001ed70u: goto L_1ED70;
    case 0x0001ed74u: goto L_1ED74;
    case 0x0001ed78u: goto L_1ED78;
    case 0x0001ed7cu: goto L_1ED7C;
    case 0x0001ed80u: goto L_1ED80;
    case 0x0001ed84u: goto L_1ED84;
    case 0x0001ed8au: goto L_1ED8A;
    case 0x0001ed8eu: goto L_1ED8E;
    case 0x0001ed92u: goto L_1ED92;
    case 0x0001ed96u: goto L_1ED96;
    case 0x0001ed9au: goto L_1ED9A;
    case 0x0001ed9cu: goto L_1ED9C;
    case 0x0001eda0u: goto L_1EDA0;
    case 0x0001eda4u: goto L_1EDA4;
    case 0x0001eda8u: goto L_1EDA8;
    case 0x0001edacu: goto L_1EDAC;
    case 0x0001edb0u: goto L_1EDB0;
    case 0x0001edb2u: goto L_1EDB2;
    case 0x0001edb8u: goto L_1EDB8;
    case 0x0001edbau: goto L_1EDBA;
    case 0x0001edbeu: goto L_1EDBE;
    case 0x0001edc2u: goto L_1EDC2;
    case 0x0001edc6u: goto L_1EDC6;
    case 0x0001edcau: goto L_1EDCA;
    case 0x0001edd0u: goto L_1EDD0;
    case 0x0001edd4u: goto L_1EDD4;
    case 0x0001edd6u: goto L_1EDD6;
    case 0x0001eddau: goto L_1EDDA;
    case 0x0001eddeu: goto L_1EDDE;
    case 0x0001ede2u: goto L_1EDE2;
    case 0x0001ede6u: goto L_1EDE6;
    case 0x0001ede8u: goto L_1EDE8;
    case 0x0001edecu: goto L_1EDEC;
    case 0x0001edf2u: goto L_1EDF2;
    case 0x0001edf4u: goto L_1EDF4;
    case 0x0001edf8u: goto L_1EDF8;
    case 0x0001edfcu: goto L_1EDFC;
    case 0x0001edfeu: goto L_1EDFE;
    case 0x0001ee02u: goto L_1EE02;
    case 0x0001ee06u: goto L_1EE06;
    case 0x0001ee0cu: goto L_1EE0C;
    case 0x0001ee10u: goto L_1EE10;
    case 0x0001ee16u: goto L_1EE16;
    case 0x0001ee1au: goto L_1EE1A;
    case 0x0001ee1eu: goto L_1EE1E;
    case 0x0001ee22u: goto L_1EE22;
    case 0x0001ee26u: goto L_1EE26;
    case 0x0001ee2cu: goto L_1EE2C;
    case 0x0001ee32u: goto L_1EE32;
    case 0x0001ee36u: goto L_1EE36;
    case 0x0001ee38u: goto L_1EE38;
    case 0x0001ee3cu: goto L_1EE3C;
    case 0x0001ee42u: goto L_1EE42;
    case 0x0001ee46u: goto L_1EE46;
    case 0x0001ee4au: goto L_1EE4A;
    case 0x0001ee4cu: goto L_1EE4C;
    case 0x0001ee50u: goto L_1EE50;
    case 0x0001ee58u: goto L_1EE58;
    case 0x0001ee5au: goto L_1EE5A;
    case 0x0001ee62u: goto L_1EE62;
    case 0x0001ee64u: goto L_1EE64;
    case 0x0001ee6cu: goto L_1EE6C;
    case 0x0001ee6eu: goto L_1EE6E;
    case 0x0001ee72u: goto L_1EE72;
    case 0x0001ee76u: goto L_1EE76;
    case 0x0001ee7au: goto L_1EE7A;
    case 0x0001ee7eu: goto L_1EE7E;
    case 0x0001ee80u: goto L_1EE80;
    case 0x0001ee82u: goto L_1EE82;
    case 0x0001ee86u: goto L_1EE86;
    case 0x0001ee8au: goto L_1EE8A;
    case 0x0001ee8eu: goto L_1EE8E;
    case 0x0001ee92u: goto L_1EE92;
    case 0x0001ee96u: goto L_1EE96;
    case 0x0001ee98u: goto L_1EE98;
    case 0x0001ee9eu: goto L_1EE9E;
    case 0x0001eea2u: goto L_1EEA2;
    case 0x0001eea6u: goto L_1EEA6;
    case 0x0001eea8u: goto L_1EEA8;
    case 0x0001eeaau: goto L_1EEAA;
    case 0x0001eeaeu: goto L_1EEAE;
    case 0x0001eeb0u: goto L_1EEB0;
    case 0x0001eeb4u: goto L_1EEB4;
    case 0x0001eeb8u: goto L_1EEB8;
    case 0x0001eebcu: goto L_1EEBC;
    case 0x0001eebeu: goto L_1EEBE;
    case 0x0001eec2u: goto L_1EEC2;
    case 0x0001eec4u: goto L_1EEC4;
    case 0x0001eec8u: goto L_1EEC8;
    case 0x0001eecau: goto L_1EECA;
    case 0x0001eeceu: goto L_1EECE;
    case 0x0001eed0u: goto L_1EED0;
    case 0x0001eed2u: goto L_1EED2;
    case 0x0001eed6u: goto L_1EED6;
    case 0x0001eedcu: goto L_1EEDC;
    case 0x0001eee0u: goto L_1EEE0;
    case 0x0001eee4u: goto L_1EEE4;
    case 0x0001eee8u: goto L_1EEE8;
    case 0x0001eeeau: goto L_1EEEA;
    case 0x0001eeeeu: goto L_1EEEE;
    case 0x0001eef0u: goto L_1EEF0;
    case 0x0001eef4u: goto L_1EEF4;
    case 0x0001eef6u: goto L_1EEF6;
    case 0x0001eefau: goto L_1EEFA;
    case 0x0001eefeu: goto L_1EEFE;
    case 0x0001ef00u: goto L_1EF00;
    case 0x0001ef04u: goto L_1EF04;
    case 0x0001ef0au: goto L_1EF0A;
    case 0x0001ef0cu: goto L_1EF0C;
    case 0x0001ef14u: goto L_1EF14;
    case 0x0001ef16u: goto L_1EF16;
    case 0x0001ef1au: goto L_1EF1A;
    case 0x0001ef1eu: goto L_1EF1E;
    case 0x0001ef22u: goto L_1EF22;
    case 0x0001ef26u: goto L_1EF26;
    case 0x0001ef2au: goto L_1EF2A;
    case 0x0001ef2eu: goto L_1EF2E;
    case 0x0001ef32u: goto L_1EF32;
    case 0x0001ef36u: goto L_1EF36;
    case 0x0001ef3au: goto L_1EF3A;
    case 0x0001ef3eu: goto L_1EF3E;
    case 0x0001ef46u: goto L_1EF46;
    case 0x0001ef48u: goto L_1EF48;
    case 0x0001ef4cu: goto L_1EF4C;
    case 0x0001ef4eu: goto L_1EF4E;
    case 0x0001ef52u: goto L_1EF52;
    case 0x0001ef56u: goto L_1EF56;
    case 0x0001ef5au: goto L_1EF5A;
    case 0x0001ef60u: goto L_1EF60;
    case 0x0001ef66u: goto L_1EF66;
    case 0x0001ef6au: goto L_1EF6A;
    case 0x0001ef6eu: goto L_1EF6E;
    case 0x0001ef72u: goto L_1EF72;
    case 0x0001ef78u: goto L_1EF78;
    case 0x0001ef7cu: goto L_1EF7C;
    case 0x0001ef80u: goto L_1EF80;
    case 0x0001ef82u: goto L_1EF82;
    case 0x0001ef86u: goto L_1EF86;
    case 0x0001ef8au: goto L_1EF8A;
    case 0x0001ef8cu: goto L_1EF8C;
    case 0x0001ef90u: goto L_1EF90;
    case 0x0001ef92u: goto L_1EF92;
    case 0x0001ef9au: goto L_1EF9A;
    case 0x0001ef9cu: goto L_1EF9C;
    case 0x0001efa0u: goto L_1EFA0;
    case 0x0001efa4u: goto L_1EFA4;
    case 0x0001efa6u: goto L_1EFA6;
    case 0x0001efa8u: goto L_1EFA8;
    case 0x0001efaau: goto L_1EFAA;
    case 0x0001efaeu: goto L_1EFAE;
    case 0x0001efb4u: goto L_1EFB4;
    case 0x0001efb6u: goto L_1EFB6;
    case 0x0001efb8u: goto L_1EFB8;
    case 0x0001efbau: goto L_1EFBA;
    case 0x0001efbcu: goto L_1EFBC;
    case 0x0001efbeu: goto L_1EFBE;
    case 0x0001efc0u: goto L_1EFC0;
    case 0x0001efc2u: goto L_1EFC2;
    case 0x0001efc4u: goto L_1EFC4;
    case 0x0001efc6u: goto L_1EFC6;
    case 0x0001efcau: goto L_1EFCA;
    case 0x0001efccu: goto L_1EFCC;
    case 0x0001efceu: goto L_1EFCE;
    case 0x0001efd2u: goto L_1EFD2;
    case 0x0001efd8u: goto L_1EFD8;
    case 0x0001efdcu: goto L_1EFDC;
    case 0x0001efe2u: goto L_1EFE2;
    case 0x0001efe4u: goto L_1EFE4;
    case 0x0001efe6u: goto L_1EFE6;
    case 0x0001efe8u: goto L_1EFE8;
    case 0x0001efeau: goto L_1EFEA;
    case 0x0001efecu: goto L_1EFEC;
    case 0x0001efeeu: goto L_1EFEE;
    case 0x0001eff2u: goto L_1EFF2;
    case 0x0001eff6u: goto L_1EFF6;
    case 0x0001effau: goto L_1EFFA;
    case 0x0001effcu: goto L_1EFFC;
    case 0x0001f000u: goto L_1F000;
    case 0x0001f002u: goto L_1F002;
    case 0x0001f006u: goto L_1F006;
    case 0x0001f00au: goto L_1F00A;
    case 0x0001f00cu: goto L_1F00C;
    case 0x0001f010u: goto L_1F010;
    case 0x0001f012u: goto L_1F012;
    case 0x0001f016u: goto L_1F016;
    case 0x0001f018u: goto L_1F018;
    case 0x0001f01cu: goto L_1F01C;
    case 0x0001f020u: goto L_1F020;
    case 0x0001f024u: goto L_1F024;
    case 0x0001f026u: goto L_1F026;
    case 0x0001f02au: goto L_1F02A;
    case 0x0001f030u: goto L_1F030;
    case 0x0001f032u: goto L_1F032;
    case 0x0001f036u: goto L_1F036;
    case 0x0001f03cu: goto L_1F03C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC42:
    /* 0001ec42   4  link.w A5,#ffffff6e */
    c->pc = 0x0001ec42u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x92u;

L_1EC46:
    /* 0001ec46   4  clr.w (ffffffba,A5) */
    c->pc = 0x0001ec46u;
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC4A:
    /* 0001ec4a   2  moveq #0,D0 */
    c->pc = 0x0001ec4au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EC4C:
    /* 0001ec4c   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001ec4cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC50:
    /* 0001ec50   2  asl.l #2,D0 */
    c->pc = 0x0001ec50u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1EC52:
    /* 0001ec52   2  movea.l D0,A0 */
    c->pc = 0x0001ec52u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1EC54:
    /* 0001ec54   4  adda.l (c,A5),A0 */
    c->pc = 0x0001ec54u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_1EC58:
    /* 0001ec58   4  clr.l (14,A0) */
    c->pc = 0x0001ec58u;
    rc_wr32(c, m, (c->a[0] + 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EC5C:
    /* 0001ec5c   2  moveq #0,D0 */
    c->pc = 0x0001ec5cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EC5E:
    /* 0001ec5e   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001ec5eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC62:
    /* 0001ec62   2  asl.l #2,D0 */
    c->pc = 0x0001ec62u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1EC64:
    /* 0001ec64   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001ec64u;
    c->a[0] = (c->a[5] - 0x2eu);

L_1EC68:
    /* 0001ec68   4  clr.l (0,A0,D0.w) */
    c->pc = 0x0001ec68u;
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EC6C:
    /* 0001ec6c   4  addq.w #1,(ffffffba,A5) */
    c->pc = 0x0001ec6cu;
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EC70:
    /* 0001ec70   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = 0x0001ec70u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1EC76:
    /* 0001ec76   2  bcs 0001ec4a */
    c->pc = 0x0001ec76u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1EC4A; }

L_1EC78:
    /* 0001ec78   4  clr.l (ffffffce,A5) */
    c->pc = 0x0001ec78u;
    rc_wr32(c, m, (c->a[5] - 0x32u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EC7C:
    /* 0001ec7c   4  clr.l (fffffffc,A5) */
    c->pc = 0x0001ec7cu;
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EC80:
    /* 0001ec80   4  tst.w (10,A5) */
    c->pc = 0x0001ec80u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_1EC84:
    /* 0001ec84   2  beq 0001ec90 */
    c->pc = 0x0001ec84u;
    if (rc_cond(c, 7)) goto L_1EC90;

L_1EC86:
    /* 0001ec86   8  move.l #1,(fffffffc,A5) */
    c->pc = 0x0001ec86u;
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EC8E:
    /* 0001ec8e   2  bra 0001eca2 */
    c->pc = 0x0001ec8eu;
    goto L_1ECA2;

L_1EC90:
    /* 0001ec90   4  pea (000003ed).l */
    c->pc = 0x0001ec90u;
    rc_push32(c, m, 0x000003edu);

L_1EC94:
    /* 0001ec94   4  move.l (8,A5),-(A7) */
    c->pc = 0x0001ec94u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EC98:
    /* 0001ec98   4  jsr (ffff8290,A4) */
    c->pc = 0x0001ec98u;
    /* vector 109 */
    rc_push32(c, m, 0x0001ec9cu);
    rc_depth++;
    c->pc = 0x00020476u;
    return;

L_1EC9C:
    /* 0001ec9c   2  addq.w #8,A7 */
    c->pc = 0x0001ec9cu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1EC9E:
    /* 0001ec9e   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x0001ec9eu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ECA2:
    /* 0001eca2   4  tst.l (fffffffc,A5) */
    c->pc = 0x0001eca2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1ECA6:
    /* 0001eca6   4  beq 0001efee */
    c->pc = 0x0001eca6u;
    if (rc_cond(c, 7)) goto L_1EFEE;

L_1ECAA:
    /* 0001ecaa   8  cmpi.l #1,(fffffffc,A5) */
    c->pc = 0x0001ecaau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1ECB2:
    /* 0001ecb2   2  bls 0001ecc8 */
    c->pc = 0x0001ecb2u;
    if (rc_cond(c, 3)) goto L_1ECC8;

L_1ECB4:
    /* 0001ecb4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0001ecb4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ECB8:
    /* 0001ecb8   4  jsr (ffff829c,A4) */
    c->pc = 0x0001ecb8u;
    /* vector 111 */
    rc_push32(c, m, 0x0001ecbcu);
    rc_depth++;
    c->pc = 0x000205e6u;
    return;

L_1ECBC:
    /* 0001ecbc   2  addq.w #4,A7 */
    c->pc = 0x0001ecbcu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ECBE:
    /* 0001ecbe   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0001ecbeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ECC2:
    /* 0001ecc2   4  jsr (ffff8296,A4) */
    c->pc = 0x0001ecc2u;
    /* vector 110 */
    rc_push32(c, m, 0x0001ecc6u);
    rc_depth++;
    c->pc = 0x00020490u;
    return;

L_1ECC6:
    /* 0001ecc6   2  addq.w #4,A7 */
    c->pc = 0x0001ecc6u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ECC8:
    /* 0001ecc8   4  pea (00000004).l */
    c->pc = 0x0001ecc8u;
    rc_push32(c, m, 0x00000004u);

L_1ECCC:
    /* 0001eccc   4  pea (ffffffc6,A5) */
    c->pc = 0x0001ecccu;
    rc_push32(c, m, (c->a[5] - 0x3au));

L_1ECD0:
    /* 0001ecd0   4  jsr (000204fa) */
    c->pc = 0x0001ecd0u;
    rc_push32(c, m, 0x0001ecd4u);
    rc_depth++;
    c->pc = 0x000204fau;
    return;

L_1ECD4:
    /* 0001ecd4   2  addq.w #8,A7 */
    c->pc = 0x0001ecd4u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ECD6:
    /* 0001ecd6   4  move.b (ffffcc78,A4),D0 */
    c->pc = 0x0001ecd6u;
    t0 = rc_rd8(c, m, (c->a[4] - 0x3388u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ECDA:
    /* 0001ecda   2  ext.w D0 */
    c->pc = 0x0001ecdau;
    rc_ext_w(c, 0);

L_1ECDC:
    /* 0001ecdc   2  ext.l D0 */
    c->pc = 0x0001ecdcu;
    rc_ext_l(c, 0);

L_1ECDE:
    /* 0001ecde   6  add.l #534d5300,D0 */
    c->pc = 0x0001ecdeu;
    t0 = 0x534d5300u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1ECE4:
    /* 0001ece4   4  cmp.l (ffffffc6,A5),D0 */
    c->pc = 0x0001ece4u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1ECE8:
    /* 0001ece8   4  bne 0001efea */
    c->pc = 0x0001ece8u;
    if (rc_cond(c, 6)) goto L_1EFEA;

L_1ECEC:
    /* 0001ecec   4  pea (00000016).l */
    c->pc = 0x0001ececu;
    rc_push32(c, m, 0x00000016u);

L_1ECF0:
    /* 0001ecf0   4  pea (2a6c,A4) */
    c->pc = 0x0001ecf0u;
    rc_push32(c, m, (c->a[4] + 0x2a6cu));

L_1ECF4:
    /* 0001ecf4   4  jsr (000204fa) */
    c->pc = 0x0001ecf4u;
    rc_push32(c, m, 0x0001ecf8u);
    rc_depth++;
    c->pc = 0x000204fau;
    return;

L_1ECF8:
    /* 0001ecf8   2  addq.w #8,A7 */
    c->pc = 0x0001ecf8u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ECFA:
    /* 0001ecfa   6  move.l (2a6c,A4),(fffffff8,A5) */
    c->pc = 0x0001ecfau;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a6cu));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED00:
    /* 0001ed00   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed00u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED04:
    /* 0001ed04   4  move.w (2a70,A4),(A0) */
    c->pc = 0x0001ed04u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a70u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED08:
    /* 0001ed08   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed08u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED0C:
    /* 0001ed0c   6  move.w (2a72,A4),(2,A0) */
    c->pc = 0x0001ed0cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a72u));
    rc_wr16(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED12:
    /* 0001ed12   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed12u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED16:
    /* 0001ed16   6  move.w (2a74,A4),(8,A0) */
    c->pc = 0x0001ed16u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a74u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED1C:
    /* 0001ed1c   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed1cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED20:
    /* 0001ed20   6  move.w (2a76,A4),(a,A0) */
    c->pc = 0x0001ed20u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a76u));
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED26:
    /* 0001ed26   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed26u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED2A:
    /* 0001ed2a   6  move.b (2a78,A4),(11,A0) */
    c->pc = 0x0001ed2au;
    t0 = rc_rd8(c, m, (c->a[4] + 0x2a78u));
    rc_wr8(c, m, (c->a[0] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ED30:
    /* 0001ed30   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed30u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED34:
    /* 0001ed34   6  move.b (2a79,A4),(4,A0) */
    c->pc = 0x0001ed34u;
    t0 = rc_rd8(c, m, (c->a[4] + 0x2a79u));
    rc_wr8(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ED3A:
    /* 0001ed3a   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed3au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED3E:
    /* 0001ed3e   6  move.w (2a7a,A4),(6,A0) */
    c->pc = 0x0001ed3eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a7au));
    rc_wr16(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED44:
    /* 0001ed44   6  move.w (2a80,A4),(ffffffbc,A5) */
    c->pc = 0x0001ed44u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x2a80u));
    rc_wr16(c, m, (c->a[5] - 0x44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED4A:
    /* 0001ed4a   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed4au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED4E:
    /* 0001ed4e   6  move.l (2a7c,A4),(34,A0) */
    c->pc = 0x0001ed4eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a7cu));
    rc_wr32(c, m, (c->a[0] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED54:
    /* 0001ed54   6  move.l (2a7c,A4),(ffffffc2,A5) */
    c->pc = 0x0001ed54u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a7cu));
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED5A:
    /* 0001ed5a   4  move.w (ffffffbc,A5),D0 */
    c->pc = 0x0001ed5au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED5E:
    /* 0001ed5e   4  and.w #ff00,D0 */
    c->pc = 0x0001ed5eu;
    t0 = 0x0000ff00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1ED62:
    /* 0001ed62   2  beq 0001edba */
    c->pc = 0x0001ed62u;
    if (rc_cond(c, 7)) goto L_1EDBA;

L_1ED64:
    /* 0001ed64   2  clr.l -(A7) */
    c->pc = 0x0001ed64u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1ED66:
    /* 0001ed66   4  pea (00000080).l */
    c->pc = 0x0001ed66u;
    rc_push32(c, m, 0x00000080u);

L_1ED6A:
    /* 0001ed6a   4  jsr (ffff8338,A4) */
    c->pc = 0x0001ed6au;
    /* vector 137: exec.library -198 */
    c->pc = 0x0001ed6eu;
    rc_os_call(c, m, 0, -198);

L_1ED6E:
    /* 0001ed6e   2  addq.w #8,A7 */
    c->pc = 0x0001ed6eu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ED70:
    /* 0001ed70   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed70u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED74:
    /* 0001ed74   4  move.l D0,(38,A0) */
    c->pc = 0x0001ed74u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED78:
    /* 0001ed78   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed78u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED7C:
    /* 0001ed7c   4  tst.l (38,A0) */
    c->pc = 0x0001ed7cu;
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    rc_set_nzvc(c, t0, RC_L);

L_1ED80:
    /* 0001ed80   4  beq 0001efee */
    c->pc = 0x0001ed80u;
    if (rc_cond(c, 7)) goto L_1EFEE;

L_1ED84:
    /* 0001ed84   6  andi.w #ff,(ffffffbc,A5) */
    c->pc = 0x0001ed84u;
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x000000ffu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1ED8A:
    /* 0001ed8a   4  pea (00000060).l */
    c->pc = 0x0001ed8au;
    rc_push32(c, m, 0x00000060u);

L_1ED8E:
    /* 0001ed8e   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ed8eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1ED92:
    /* 0001ed92   4  move.l (38,A0),-(A7) */
    c->pc = 0x0001ed92u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED96:
    /* 0001ed96   4  jsr (000204fa) */
    c->pc = 0x0001ed96u;
    rc_push32(c, m, 0x0001ed9au);
    rc_depth++;
    c->pc = 0x000204fau;
    return;

L_1ED9A:
    /* 0001ed9a   2  addq.w #8,A7 */
    c->pc = 0x0001ed9au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ED9C:
    /* 0001ed9c   4  pea (00000020).l */
    c->pc = 0x0001ed9cu;
    rc_push32(c, m, 0x00000020u);

L_1EDA0:
    /* 0001eda0   4  movea.l (c,A5),A0 */
    c->pc = 0x0001eda0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EDA4:
    /* 0001eda4   4  movea.l (38,A0),A1 */
    c->pc = 0x0001eda4u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    c->a[1] = t0;

L_1EDA8:
    /* 0001eda8   4  pea (60,A1) */
    c->pc = 0x0001eda8u;
    rc_push32(c, m, (c->a[1] + 0x60u));

L_1EDAC:
    /* 0001edac   4  jsr (000204fa) */
    c->pc = 0x0001edacu;
    rc_push32(c, m, 0x0001edb0u);
    rc_depth++;
    c->pc = 0x000204fau;
    return;

L_1EDB0:
    /* 0001edb0   2  addq.w #8,A7 */
    c->pc = 0x0001edb0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1EDB2:
    /* 0001edb2   6  move.w #1,(2a6a,A4) */
    c->pc = 0x0001edb2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2a6au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDB8:
    /* 0001edb8   2  bra 0001edbe */
    c->pc = 0x0001edb8u;
    goto L_1EDBE;

L_1EDBA:
    /* 0001edba   4  clr.w (2a6a,A4) */
    c->pc = 0x0001edbau;
    rc_wr16(c, m, (c->a[4] + 0x2a6au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EDBE:
    /* 0001edbe   4  movea.l (c,A5),A0 */
    c->pc = 0x0001edbeu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EDC2:
    /* 0001edc2   4  move.w (A0),(ffffffb6,A5) */
    c->pc = 0x0001edc2u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0x4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDC6:
    /* 0001edc6   4  movea.l (c,A5),A0 */
    c->pc = 0x0001edc6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EDCA:
    /* 0001edca   6  move.w (2,A0),(ffffffb4,A5) */
    c->pc = 0x0001edcau;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDD0:
    /* 0001edd0   4  movea.l (c,A5),A0 */
    c->pc = 0x0001edd0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EDD4:
    /* 0001edd4   2  moveq #0,D0 */
    c->pc = 0x0001edd4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EDD6:
    /* 0001edd6   4  move.b (11,A0),D0 */
    c->pc = 0x0001edd6u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1EDDA:
    /* 0001edda   4  move.w D0,(ffffffb2,A5) */
    c->pc = 0x0001eddau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDDE:
    /* 0001edde   4  move.w (ffffffb6,A5),D0 */
    c->pc = 0x0001eddeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDE2:
    /* 0001ede2   4  and.w #7,D0 */
    c->pc = 0x0001ede2u;
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1EDE6:
    /* 0001ede6   2  beq 0001edec */
    c->pc = 0x0001ede6u;
    if (rc_cond(c, 7)) goto L_1EDEC;

L_1EDE8:
    /* 0001ede8   4  addq.w #8,(ffffffb6,A5) */
    c->pc = 0x0001ede8u;
    t3 = (c->a[5] - 0x4au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EDEC:
    /* 0001edec   6  btst #3,(ffffffb7,A5) */
    c->pc = 0x0001edecu;
    t4 = 0x00000003u;
    t3 = (c->a[5] - 0x49u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1EDF2:
    /* 0001edf2   2  beq 0001edf8 */
    c->pc = 0x0001edf2u;
    if (rc_cond(c, 7)) goto L_1EDF8;

L_1EDF4:
    /* 0001edf4   4  addq.w #8,(ffffffb6,A5) */
    c->pc = 0x0001edf4u;
    t3 = (c->a[5] - 0x4au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EDF8:
    /* 0001edf8   4  move.w (ffffffb6,A5),D0 */
    c->pc = 0x0001edf8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDFC:
    /* 0001edfc   2  lsr.w #3,D0 */
    c->pc = 0x0001edfcu;
    c->d[0] = rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_1EDFE:
    /* 0001edfe   4  move.w D0,(ffffffb6,A5) */
    c->pc = 0x0001edfeu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE02:
    /* 0001ee02   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ee02u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EE06:
    /* 0001ee06   6  move.w (ffffffb6,A5),(c,A0) */
    c->pc = 0x0001ee06u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_wr16(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE0C:
    /* 0001ee0c   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ee0cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EE10:
    /* 0001ee10   6  move.w (ffffffb4,A5),(e,A0) */
    c->pc = 0x0001ee10u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    rc_wr16(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE16:
    /* 0001ee16   4  move.w (ffffffb6,A5),D0 */
    c->pc = 0x0001ee16u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE1A:
    /* 0001ee1a   4  mulu.w (ffffffb4,A5),D0 */
    c->pc = 0x0001ee1au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    rc_mulu(c, 0, t0);

L_1EE1E:
    /* 0001ee1e   4  move.w D0,(ffffffae,A5) */
    c->pc = 0x0001ee1eu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x52u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE22:
    /* 0001ee22   4  subq.w #1,(ffffffb4,A5) */
    c->pc = 0x0001ee22u;
    t3 = (c->a[5] - 0x4cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EE26:
    /* 0001ee26   6  move.l (2a82,A4),(ffffffce,A5) */
    c->pc = 0x0001ee26u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a82u));
    rc_wr32(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE2C:
    /* 0001ee2c   6  move.w (ffffffb2,A5),(ffffffb0,A5) */
    c->pc = 0x0001ee2cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4eu));
    rc_wr16(c, m, (c->a[5] - 0x50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE32:
    /* 0001ee32   4  clr.w (ffffffba,A5) */
    c->pc = 0x0001ee32u;
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EE36:
    /* 0001ee36   2  bra 0001ee76 */
    c->pc = 0x0001ee36u;
    goto L_1EE76;

L_1EE38:
    /* 0001ee38   4  move.l (ffffffc2,A5),D0 */
    c->pc = 0x0001ee38u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE3C:
    /* 0001ee3c   6  and.l #f,D0 */
    c->pc = 0x0001ee3cu;
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1EE42:
    /* 0001ee42   4  move.l D0,(ffffffc6,A5) */
    c->pc = 0x0001ee42u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE46:
    /* 0001ee46   4  move.l (ffffffc2,A5),D0 */
    c->pc = 0x0001ee46u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE4A:
    /* 0001ee4a   2  lsr.l #4,D0 */
    c->pc = 0x0001ee4au;
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L);

L_1EE4C:
    /* 0001ee4c   4  move.l D0,(ffffffc2,A5) */
    c->pc = 0x0001ee4cu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE50:
    /* 0001ee50   8  cmpi.l #c,(ffffffc6,A5) */
    c->pc = 0x0001ee50u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1EE58:
    /* 0001ee58   2  beq 0001ee6e */
    c->pc = 0x0001ee58u;
    if (rc_cond(c, 7)) goto L_1EE6E;

L_1EE5A:
    /* 0001ee5a   8  cmpi.l #d,(ffffffc6,A5) */
    c->pc = 0x0001ee5au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_1EE62:
    /* 0001ee62   2  beq 0001ee6e */
    c->pc = 0x0001ee62u;
    if (rc_cond(c, 7)) goto L_1EE6E;

L_1EE64:
    /* 0001ee64   8  cmpi.l #8,(ffffffc6,A5) */
    c->pc = 0x0001ee64u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_1EE6C:
    /* 0001ee6c   2  bne 0001ee72 */
    c->pc = 0x0001ee6cu;
    if (rc_cond(c, 6)) goto L_1EE72;

L_1EE6E:
    /* 0001ee6e   4  subq.w #1,(ffffffb0,A5) */
    c->pc = 0x0001ee6eu;
    t3 = (c->a[5] - 0x50u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EE72:
    /* 0001ee72   4  addq.w #1,(ffffffba,A5) */
    c->pc = 0x0001ee72u;
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EE76:
    /* 0001ee76   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001ee76u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE7A:
    /* 0001ee7a   4  cmp.w (ffffffb2,A5),D0 */
    c->pc = 0x0001ee7au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1EE7E:
    /* 0001ee7e   2  bcs 0001ee38 */
    c->pc = 0x0001ee7eu;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1EE38; }

L_1EE80:
    /* 0001ee80   2  moveq #0,D0 */
    c->pc = 0x0001ee80u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EE82:
    /* 0001ee82   4  move.w (ffffffae,A5),D0 */
    c->pc = 0x0001ee82u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x52u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE86:
    /* 0001ee86   4  move.l D0,(ffffffbe,A5) */
    c->pc = 0x0001ee86u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x42u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EE8A:
    /* 0001ee8a   4  tst.l (ffffffbe,A5) */
    c->pc = 0x0001ee8au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    rc_set_nzvc(c, t0, RC_L);

L_1EE8E:
    /* 0001ee8e   4  beq 0001efee */
    c->pc = 0x0001ee8eu;
    if (rc_cond(c, 7)) goto L_1EFEE;

L_1EE92:
    /* 0001ee92   4  clr.w (ffffffba,A5) */
    c->pc = 0x0001ee92u;
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EE96:
    /* 0001ee96   2  bra 0001eee0 */
    c->pc = 0x0001ee96u;
    goto L_1EEE0;

L_1EE98:
    /* 0001ee98   6  pea (00010002).l */
    c->pc = 0x0001ee98u;
    rc_push32(c, m, 0x00010002u);

L_1EE9E:
    /* 0001ee9e   4  move.l (ffffffbe,A5),-(A7) */
    c->pc = 0x0001ee9eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EEA2:
    /* 0001eea2   4  jsr (ffff8338,A4) */
    c->pc = 0x0001eea2u;
    /* vector 137: exec.library -198 */
    c->pc = 0x0001eea6u;
    rc_os_call(c, m, 0, -198);

L_1EEA6:
    /* 0001eea6   2  addq.w #8,A7 */
    c->pc = 0x0001eea6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1EEA8:
    /* 0001eea8   2  moveq #0,D1 */
    c->pc = 0x0001eea8u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1EEAA:
    /* 0001eeaa   4  move.w (ffffffba,A5),D1 */
    c->pc = 0x0001eeaau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EEAE:
    /* 0001eeae   2  asl.l #2,D1 */
    c->pc = 0x0001eeaeu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1EEB0:
    /* 0001eeb0   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001eeb0u;
    c->a[0] = (c->a[5] - 0x2eu);

L_1EEB4:
    /* 0001eeb4   4  move.l D0,(0,A0,D1.w) */
    c->pc = 0x0001eeb4u;
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EEB8:
    /* 0001eeb8   4  beq 0001efee */
    c->pc = 0x0001eeb8u;
    if (rc_cond(c, 7)) goto L_1EFEE;

L_1EEBC:
    /* 0001eebc   2  moveq #0,D0 */
    c->pc = 0x0001eebcu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EEBE:
    /* 0001eebe   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001eebeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EEC2:
    /* 0001eec2   2  asl.l #2,D0 */
    c->pc = 0x0001eec2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1EEC4:
    /* 0001eec4   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001eec4u;
    c->a[0] = (c->a[5] - 0x2eu);

L_1EEC8:
    /* 0001eec8   2  moveq #0,D1 */
    c->pc = 0x0001eec8u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1EECA:
    /* 0001eeca   4  move.w (ffffffba,A5),D1 */
    c->pc = 0x0001eecau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EECE:
    /* 0001eece   2  asl.l #2,D1 */
    c->pc = 0x0001eeceu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1EED0:
    /* 0001eed0   2  movea.l D1,A1 */
    c->pc = 0x0001eed0u;
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_1EED2:
    /* 0001eed2   4  adda.l (c,A5),A1 */
    c->pc = 0x0001eed2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] += t0;

L_1EED6:
    /* 0001eed6   6  move.l (0,A0,D0.w),(14,A1) */
    c->pc = 0x0001eed6u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EEDC:
    /* 0001eedc   4  addq.w #1,(ffffffba,A5) */
    c->pc = 0x0001eedcu;
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EEE0:
    /* 0001eee0   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001eee0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EEE4:
    /* 0001eee4   4  cmp.w (ffffffb0,A5),D0 */
    c->pc = 0x0001eee4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1EEE8:
    /* 0001eee8   2  bcs 0001ee98 */
    c->pc = 0x0001eee8u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1EE98; }

L_1EEEA:
    /* 0001eeea   4  tst.w (ffffffb0,A5) */
    c->pc = 0x0001eeeau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    rc_set_nzvc(c, t0, RC_W);

L_1EEEE:
    /* 0001eeee   2  beq 0001ef3e */
    c->pc = 0x0001eeeeu;
    if (rc_cond(c, 7)) goto L_1EF3E;

L_1EEF0:
    /* 0001eef0   4  tst.l (ffffffbe,A5) */
    c->pc = 0x0001eef0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    rc_set_nzvc(c, t0, RC_L);

L_1EEF4:
    /* 0001eef4   2  beq 0001ef3e */
    c->pc = 0x0001eef4u;
    if (rc_cond(c, 7)) goto L_1EF3E;

L_1EEF6:
    /* 0001eef6   4  movea.l (c,A5),A0 */
    c->pc = 0x0001eef6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EEFA:
    /* 0001eefa   4  cmpi.w #1,(A0) */
    c->pc = 0x0001eefau;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1EEFE:
    /* 0001eefe   2  bhi 0001ef0c */
    c->pc = 0x0001eefeu;
    if (rc_cond(c, 2)) goto L_1EF0C;

L_1EF00:
    /* 0001ef00   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ef00u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EF04:
    /* 0001ef04   6  cmpi.w #1,(2,A0) */
    c->pc = 0x0001ef04u;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1EF0A:
    /* 0001ef0a   2  bls 0001ef3e */
    c->pc = 0x0001ef0au;
    if (rc_cond(c, 3)) goto L_1EF3E;

L_1EF0C:
    /* 0001ef0c   8  cmpi.l #1,(fffffff8,A5) */
    c->pc = 0x0001ef0cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1EF14:
    /* 0001ef14   2  bls 0001ef3e */
    c->pc = 0x0001ef14u;
    if (rc_cond(c, 3)) goto L_1EF3E;

L_1EF16:
    /* 0001ef16   4  move.w (ffffffae,A5),-(A7) */
    c->pc = 0x0001ef16u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x52u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF1A:
    /* 0001ef1a   4  move.w (ffffffb0,A5),-(A7) */
    c->pc = 0x0001ef1au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF1E:
    /* 0001ef1e   4  move.w (ffffffbc,A5),-(A7) */
    c->pc = 0x0001ef1eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF22:
    /* 0001ef22   4  move.w (ffffffb4,A5),-(A7) */
    c->pc = 0x0001ef22u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF26:
    /* 0001ef26   4  move.w (ffffffb6,A5),-(A7) */
    c->pc = 0x0001ef26u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF2A:
    /* 0001ef2a   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ef2au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EF2E:
    /* 0001ef2e   4  pea (c,A0) */
    c->pc = 0x0001ef2eu;
    rc_push32(c, m, (c->a[0] + 0xcu));

L_1EF32:
    /* 0001ef32   4  move.l (ffffffce,A5),-(A7) */
    c->pc = 0x0001ef32u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x32u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF36:
    /* 0001ef36   4  jsr (0002011a) */
    c->pc = 0x0001ef36u;
    rc_push32(c, m, 0x0001ef3au);
    rc_depth++;
    c->pc = 0x0002011au;
    return;

L_1EF3A:
    /* 0001ef3a   4  lea (12,A7),A7 */
    c->pc = 0x0001ef3au;
    c->a[7] = (c->a[7] + 0x12u);

L_1EF3E:
    /* 0001ef3e   8  cmpi.l #1,(fffffffc,A5) */
    c->pc = 0x0001ef3eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1EF46:
    /* 0001ef46   2  bls 0001ef4e */
    c->pc = 0x0001ef46u;
    if (rc_cond(c, 3)) goto L_1EF4E;

L_1EF48:
    /* 0001ef48   4  jsr (ffff82a2,A4) */
    c->pc = 0x0001ef48u;
    /* vector 112 */
    rc_push32(c, m, 0x0001ef4cu);
    rc_depth++;
    c->pc = 0x000207f0u;
    return;

L_1EF4C:
    /* 0001ef4c   2  bra 0001ef56 */
    c->pc = 0x0001ef4cu;
    goto L_1EF56;

L_1EF4E:
    /* 0001ef4e   4  move.l (fffffff8,A5),D0 */
    c->pc = 0x0001ef4eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF52:
    /* 0001ef52   4  add.l D0,(2a82,A4) */
    c->pc = 0x0001ef52u;
    t3 = (c->a[4] + 0x2a82u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1EF56:
    /* 0001ef56   4  movea.l (c,A5),A0 */
    c->pc = 0x0001ef56u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EF5A:
    /* 0001ef5a   6  move.w #1,(12,A0) */
    c->pc = 0x0001ef5au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EF60:
    /* 0001ef60   6  move.l (2a7c,A4),(ffffffc2,A5) */
    c->pc = 0x0001ef60u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a7cu));
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF66:
    /* 0001ef66   4  clr.w (ffffffb8,A5) */
    c->pc = 0x0001ef66u;
    rc_wr16(c, m, (c->a[5] - 0x48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EF6A:
    /* 0001ef6a   4  clr.w (ffffffba,A5) */
    c->pc = 0x0001ef6au;
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EF6E:
    /* 0001ef6e   4  move.l (ffffffc2,A5),D0 */
    c->pc = 0x0001ef6eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF72:
    /* 0001ef72   6  and.l #f,D0 */
    c->pc = 0x0001ef72u;
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1EF78:
    /* 0001ef78   4  move.l D0,(ffffffc6,A5) */
    c->pc = 0x0001ef78u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF7C:
    /* 0001ef7c   4  move.l (ffffffc2,A5),D0 */
    c->pc = 0x0001ef7cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF80:
    /* 0001ef80   2  lsr.l #4,D0 */
    c->pc = 0x0001ef80u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L);

L_1EF82:
    /* 0001ef82   4  move.l D0,(ffffffc2,A5) */
    c->pc = 0x0001ef82u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF86:
    /* 0001ef86   4  move.l (ffffffc6,A5),D0 */
    c->pc = 0x0001ef86u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF8A:
    /* 0001ef8a   2  bra 0001efb6 */
    c->pc = 0x0001ef8au;
    goto L_1EFB6;

L_1EF8C:
    /* 0001ef8c   4  clr.l (fffffff2,A5) */
    c->pc = 0x0001ef8cu;
    rc_wr32(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EF90:
    /* 0001ef90   2  bra 0001efc4 */
    c->pc = 0x0001ef90u;
    goto L_1EFC4;

L_1EF92:
    /* 0001ef92   8  move.l #ffffffff,(fffffff2,A5) */
    c->pc = 0x0001ef92u;
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EF9A:
    /* 0001ef9a   2  bra 0001efc4 */
    c->pc = 0x0001ef9au;
    goto L_1EFC4;

L_1EF9C:
    /* 0001ef9c   4  move.w (ffffffb8,A5),D0 */
    c->pc = 0x0001ef9cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x48u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EFA0:
    /* 0001efa0   4  addq.w #1,(ffffffb8,A5) */
    c->pc = 0x0001efa0u;
    t3 = (c->a[5] - 0x48u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EFA4:
    /* 0001efa4   2  moveq #0,D1 */
    c->pc = 0x0001efa4u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1EFA6:
    /* 0001efa6   2  move.w D0,D1 */
    c->pc = 0x0001efa6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EFA8:
    /* 0001efa8   2  asl.l #2,D1 */
    c->pc = 0x0001efa8u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1EFAA:
    /* 0001efaa   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001efaau;
    c->a[0] = (c->a[5] - 0x2eu);

L_1EFAE:
    /* 0001efae   6  move.l (0,A0,D1.w),(fffffff2,A5) */
    c->pc = 0x0001efaeu;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EFB4:
    /* 0001efb4   2  bra 0001efc4 */
    c->pc = 0x0001efb4u;
    goto L_1EFC4;

L_1EFB6:
    /* 0001efb6   2  subq.l #8,D0 */
    c->pc = 0x0001efb6u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1EFB8:
    /* 0001efb8   2  beq 0001ef8c */
    c->pc = 0x0001efb8u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_1EF8C; }

L_1EFBA:
    /* 0001efba   2  subq.l #4,D0 */
    c->pc = 0x0001efbau;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1EFBC:
    /* 0001efbc   2  beq 0001ef8c */
    c->pc = 0x0001efbcu;
    if (rc_cond(c, 7)) { rc_tick(); goto L_1EF8C; }

L_1EFBE:
    /* 0001efbe   2  subq.l #1,D0 */
    c->pc = 0x0001efbeu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1EFC0:
    /* 0001efc0   2  beq 0001ef92 */
    c->pc = 0x0001efc0u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_1EF92; }

L_1EFC2:
    /* 0001efc2   2  bra 0001ef9c */
    c->pc = 0x0001efc2u;
    rc_tick();
    goto L_1EF9C;

L_1EFC4:
    /* 0001efc4   2  moveq #0,D0 */
    c->pc = 0x0001efc4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EFC6:
    /* 0001efc6   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001efc6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EFCA:
    /* 0001efca   2  asl.l #2,D0 */
    c->pc = 0x0001efcau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1EFCC:
    /* 0001efcc   2  movea.l D0,A0 */
    c->pc = 0x0001efccu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1EFCE:
    /* 0001efce   4  adda.l (c,A5),A0 */
    c->pc = 0x0001efceu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_1EFD2:
    /* 0001efd2   6  move.l (fffffff2,A5),(14,A0) */
    c->pc = 0x0001efd2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_wr32(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EFD8:
    /* 0001efd8   4  addq.w #1,(ffffffba,A5) */
    c->pc = 0x0001efd8u;
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EFDC:
    /* 0001efdc   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = 0x0001efdcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1EFE2:
    /* 0001efe2   2  bcs 0001ef6e */
    c->pc = 0x0001efe2u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1EF6E; }

L_1EFE4:
    /* 0001efe4   2  moveq #1,D0 */
    c->pc = 0x0001efe4u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EFE6:
    /* 0001efe6   2  unlk A5 */
    c->pc = 0x0001efe6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EFE8:
    /* 0001efe8   2  rts */
    c->pc = 0x0001efe8u;
    rc_ret(c, m);
    return;

L_1EFEA:
    /* 0001efea   2  moveq #0,D0 */
    c->pc = 0x0001efeau;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EFEC:
    /* 0001efec   2  bra 0001efe6 */
    c->pc = 0x0001efecu;
    rc_tick();
    goto L_1EFE6;

L_1EFEE:
    /* 0001efee   4  movea.l (c,A5),A0 */
    c->pc = 0x0001efeeu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1EFF2:
    /* 0001eff2   4  clr.w (12,A0) */
    c->pc = 0x0001eff2u;
    rc_wr16(c, m, (c->a[0] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EFF6:
    /* 0001eff6   4  clr.w (ffffffba,A5) */
    c->pc = 0x0001eff6u;
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EFFA:
    /* 0001effa   2  moveq #0,D0 */
    c->pc = 0x0001effau;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EFFC:
    /* 0001effc   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001effcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F000:
    /* 0001f000   2  asl.l #2,D0 */
    c->pc = 0x0001f000u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1F002:
    /* 0001f002   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001f002u;
    c->a[0] = (c->a[5] - 0x2eu);

L_1F006:
    /* 0001f006   4  tst.l (0,A0,D0.w) */
    c->pc = 0x0001f006u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_1F00A:
    /* 0001f00a   2  beq 0001f026 */
    c->pc = 0x0001f00au;
    if (rc_cond(c, 7)) goto L_1F026;

L_1F00C:
    /* 0001f00c   4  move.l (ffffffbe,A5),-(A7) */
    c->pc = 0x0001f00cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F010:
    /* 0001f010   2  moveq #0,D0 */
    c->pc = 0x0001f010u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F012:
    /* 0001f012   4  move.w (ffffffba,A5),D0 */
    c->pc = 0x0001f012u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F016:
    /* 0001f016   2  asl.l #2,D0 */
    c->pc = 0x0001f016u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1F018:
    /* 0001f018   4  lea (ffffffd2,A5),A0 */
    c->pc = 0x0001f018u;
    c->a[0] = (c->a[5] - 0x2eu);

L_1F01C:
    /* 0001f01c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0001f01cu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F020:
    /* 0001f020   4  jsr (ffff8344,A4) */
    c->pc = 0x0001f020u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001f024u;
    rc_os_call(c, m, 0, -210);

L_1F024:
    /* 0001f024   2  addq.w #8,A7 */
    c->pc = 0x0001f024u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F026:
    /* 0001f026   4  addq.w #1,(ffffffba,A5) */
    c->pc = 0x0001f026u;
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F02A:
    /* 0001f02a   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = 0x0001f02au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1F030:
    /* 0001f030   2  bcs 0001effa */
    c->pc = 0x0001f030u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1EFFA; }

L_1F032:
    /* 0001f032   4  jsr (ffff82a2,A4) */
    c->pc = 0x0001f032u;
    /* vector 112 */
    rc_push32(c, m, 0x0001f036u);
    rc_depth++;
    c->pc = 0x000207f0u;
    return;

L_1F036:
    /* 0001f036   6  move.l #3039,D0 */
    c->pc = 0x0001f036u;
    t0 = 0x00003039u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F03C:
    /* 0001f03c   2  bra 0001efe6 */
    c->pc = 0x0001f03cu;
    rc_tick();
    goto L_1EFE6;

}
