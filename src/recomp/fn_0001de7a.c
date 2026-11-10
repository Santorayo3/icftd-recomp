/* fn_0001de7a - 808 byte(s), 239 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001de7a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001de7au): goto L_1DE7A;
    case RC_ADDR(0x0001de7eu): goto L_1DE7E;
    case RC_ADDR(0x0001de82u): goto L_1DE82;
    case RC_ADDR(0x0001de86u): goto L_1DE86;
    case RC_ADDR(0x0001de8au): goto L_1DE8A;
    case RC_ADDR(0x0001de8cu): goto L_1DE8C;
    case RC_ADDR(0x0001de90u): goto L_1DE90;
    case RC_ADDR(0x0001de94u): goto L_1DE94;
    case RC_ADDR(0x0001de96u): goto L_1DE96;
    case RC_ADDR(0x0001de9au): goto L_1DE9A;
    case RC_ADDR(0x0001de9eu): goto L_1DE9E;
    case RC_ADDR(0x0001dea0u): goto L_1DEA0;
    case RC_ADDR(0x0001dea4u): goto L_1DEA4;
    case RC_ADDR(0x0001dea8u): goto L_1DEA8;
    case RC_ADDR(0x0001deaau): goto L_1DEAA;
    case RC_ADDR(0x0001deaeu): goto L_1DEAE;
    case RC_ADDR(0x0001deb2u): goto L_1DEB2;
    case RC_ADDR(0x0001deb6u): goto L_1DEB6;
    case RC_ADDR(0x0001deb8u): goto L_1DEB8;
    case RC_ADDR(0x0001debcu): goto L_1DEBC;
    case RC_ADDR(0x0001debeu): goto L_1DEBE;
    case RC_ADDR(0x0001dec2u): goto L_1DEC2;
    case RC_ADDR(0x0001dec6u): goto L_1DEC6;
    case RC_ADDR(0x0001dec8u): goto L_1DEC8;
    case RC_ADDR(0x0001deccu): goto L_1DECC;
    case RC_ADDR(0x0001deceu): goto L_1DECE;
    case RC_ADDR(0x0001ded0u): goto L_1DED0;
    case RC_ADDR(0x0001ded2u): goto L_1DED2;
    case RC_ADDR(0x0001ded6u): goto L_1DED6;
    case RC_ADDR(0x0001dedau): goto L_1DEDA;
    case RC_ADDR(0x0001dedeu): goto L_1DEDE;
    case RC_ADDR(0x0001dee0u): goto L_1DEE0;
    case RC_ADDR(0x0001dee4u): goto L_1DEE4;
    case RC_ADDR(0x0001dee8u): goto L_1DEE8;
    case RC_ADDR(0x0001deecu): goto L_1DEEC;
    case RC_ADDR(0x0001deeeu): goto L_1DEEE;
    case RC_ADDR(0x0001def2u): goto L_1DEF2;
    case RC_ADDR(0x0001def6u): goto L_1DEF6;
    case RC_ADDR(0x0001defau): goto L_1DEFA;
    case RC_ADDR(0x0001defcu): goto L_1DEFC;
    case RC_ADDR(0x0001defeu): goto L_1DEFE;
    case RC_ADDR(0x0001df02u): goto L_1DF02;
    case RC_ADDR(0x0001df06u): goto L_1DF06;
    case RC_ADDR(0x0001df08u): goto L_1DF08;
    case RC_ADDR(0x0001df0au): goto L_1DF0A;
    case RC_ADDR(0x0001df0cu): goto L_1DF0C;
    case RC_ADDR(0x0001df10u): goto L_1DF10;
    case RC_ADDR(0x0001df12u): goto L_1DF12;
    case RC_ADDR(0x0001df16u): goto L_1DF16;
    case RC_ADDR(0x0001df1au): goto L_1DF1A;
    case RC_ADDR(0x0001df1cu): goto L_1DF1C;
    case RC_ADDR(0x0001df20u): goto L_1DF20;
    case RC_ADDR(0x0001df22u): goto L_1DF22;
    case RC_ADDR(0x0001df24u): goto L_1DF24;
    case RC_ADDR(0x0001df28u): goto L_1DF28;
    case RC_ADDR(0x0001df2cu): goto L_1DF2C;
    case RC_ADDR(0x0001df2eu): goto L_1DF2E;
    case RC_ADDR(0x0001df32u): goto L_1DF32;
    case RC_ADDR(0x0001df36u): goto L_1DF36;
    case RC_ADDR(0x0001df3au): goto L_1DF3A;
    case RC_ADDR(0x0001df3cu): goto L_1DF3C;
    case RC_ADDR(0x0001df40u): goto L_1DF40;
    case RC_ADDR(0x0001df42u): goto L_1DF42;
    case RC_ADDR(0x0001df44u): goto L_1DF44;
    case RC_ADDR(0x0001df48u): goto L_1DF48;
    case RC_ADDR(0x0001df4cu): goto L_1DF4C;
    case RC_ADDR(0x0001df4eu): goto L_1DF4E;
    case RC_ADDR(0x0001df52u): goto L_1DF52;
    case RC_ADDR(0x0001df56u): goto L_1DF56;
    case RC_ADDR(0x0001df5au): goto L_1DF5A;
    case RC_ADDR(0x0001df5eu): goto L_1DF5E;
    case RC_ADDR(0x0001df62u): goto L_1DF62;
    case RC_ADDR(0x0001df64u): goto L_1DF64;
    case RC_ADDR(0x0001df68u): goto L_1DF68;
    case RC_ADDR(0x0001df6cu): goto L_1DF6C;
    case RC_ADDR(0x0001df6eu): goto L_1DF6E;
    case RC_ADDR(0x0001df70u): goto L_1DF70;
    case RC_ADDR(0x0001df74u): goto L_1DF74;
    case RC_ADDR(0x0001df78u): goto L_1DF78;
    case RC_ADDR(0x0001df7cu): goto L_1DF7C;
    case RC_ADDR(0x0001df80u): goto L_1DF80;
    case RC_ADDR(0x0001df84u): goto L_1DF84;
    case RC_ADDR(0x0001df86u): goto L_1DF86;
    case RC_ADDR(0x0001df8au): goto L_1DF8A;
    case RC_ADDR(0x0001df8cu): goto L_1DF8C;
    case RC_ADDR(0x0001df90u): goto L_1DF90;
    case RC_ADDR(0x0001df94u): goto L_1DF94;
    case RC_ADDR(0x0001df98u): goto L_1DF98;
    case RC_ADDR(0x0001df9au): goto L_1DF9A;
    case RC_ADDR(0x0001df9eu): goto L_1DF9E;
    case RC_ADDR(0x0001dfa0u): goto L_1DFA0;
    case RC_ADDR(0x0001dfa2u): goto L_1DFA2;
    case RC_ADDR(0x0001dfa6u): goto L_1DFA6;
    case RC_ADDR(0x0001dfaau): goto L_1DFAA;
    case RC_ADDR(0x0001dfacu): goto L_1DFAC;
    case RC_ADDR(0x0001dfb0u): goto L_1DFB0;
    case RC_ADDR(0x0001dfb4u): goto L_1DFB4;
    case RC_ADDR(0x0001dfb8u): goto L_1DFB8;
    case RC_ADDR(0x0001dfbcu): goto L_1DFBC;
    case RC_ADDR(0x0001dfc0u): goto L_1DFC0;
    case RC_ADDR(0x0001dfc2u): goto L_1DFC2;
    case RC_ADDR(0x0001dfc4u): goto L_1DFC4;
    case RC_ADDR(0x0001dfc8u): goto L_1DFC8;
    case RC_ADDR(0x0001dfcau): goto L_1DFCA;
    case RC_ADDR(0x0001dfceu): goto L_1DFCE;
    case RC_ADDR(0x0001dfd2u): goto L_1DFD2;
    case RC_ADDR(0x0001dfd4u): goto L_1DFD4;
    case RC_ADDR(0x0001dfd6u): goto L_1DFD6;
    case RC_ADDR(0x0001dfdau): goto L_1DFDA;
    case RC_ADDR(0x0001dfdeu): goto L_1DFDE;
    case RC_ADDR(0x0001dfe2u): goto L_1DFE2;
    case RC_ADDR(0x0001dfe6u): goto L_1DFE6;
    case RC_ADDR(0x0001dfeau): goto L_1DFEA;
    case RC_ADDR(0x0001dfecu): goto L_1DFEC;
    case RC_ADDR(0x0001dff0u): goto L_1DFF0;
    case RC_ADDR(0x0001dff4u): goto L_1DFF4;
    case RC_ADDR(0x0001dff6u): goto L_1DFF6;
    case RC_ADDR(0x0001dffau): goto L_1DFFA;
    case RC_ADDR(0x0001dffeu): goto L_1DFFE;
    case RC_ADDR(0x0001e002u): goto L_1E002;
    case RC_ADDR(0x0001e004u): goto L_1E004;
    case RC_ADDR(0x0001e006u): goto L_1E006;
    case RC_ADDR(0x0001e00au): goto L_1E00A;
    case RC_ADDR(0x0001e00eu): goto L_1E00E;
    case RC_ADDR(0x0001e012u): goto L_1E012;
    case RC_ADDR(0x0001e016u): goto L_1E016;
    case RC_ADDR(0x0001e018u): goto L_1E018;
    case RC_ADDR(0x0001e01cu): goto L_1E01C;
    case RC_ADDR(0x0001e020u): goto L_1E020;
    case RC_ADDR(0x0001e024u): goto L_1E024;
    case RC_ADDR(0x0001e026u): goto L_1E026;
    case RC_ADDR(0x0001e02au): goto L_1E02A;
    case RC_ADDR(0x0001e02eu): goto L_1E02E;
    case RC_ADDR(0x0001e032u): goto L_1E032;
    case RC_ADDR(0x0001e036u): goto L_1E036;
    case RC_ADDR(0x0001e038u): goto L_1E038;
    case RC_ADDR(0x0001e03au): goto L_1E03A;
    case RC_ADDR(0x0001e03eu): goto L_1E03E;
    case RC_ADDR(0x0001e044u): goto L_1E044;
    case RC_ADDR(0x0001e048u): goto L_1E048;
    case RC_ADDR(0x0001e04cu): goto L_1E04C;
    case RC_ADDR(0x0001e050u): goto L_1E050;
    case RC_ADDR(0x0001e054u): goto L_1E054;
    case RC_ADDR(0x0001e056u): goto L_1E056;
    case RC_ADDR(0x0001e05au): goto L_1E05A;
    case RC_ADDR(0x0001e05eu): goto L_1E05E;
    case RC_ADDR(0x0001e062u): goto L_1E062;
    case RC_ADDR(0x0001e064u): goto L_1E064;
    case RC_ADDR(0x0001e068u): goto L_1E068;
    case RC_ADDR(0x0001e06cu): goto L_1E06C;
    case RC_ADDR(0x0001e070u): goto L_1E070;
    case RC_ADDR(0x0001e072u): goto L_1E072;
    case RC_ADDR(0x0001e076u): goto L_1E076;
    case RC_ADDR(0x0001e078u): goto L_1E078;
    case RC_ADDR(0x0001e07cu): goto L_1E07C;
    case RC_ADDR(0x0001e080u): goto L_1E080;
    case RC_ADDR(0x0001e084u): goto L_1E084;
    case RC_ADDR(0x0001e088u): goto L_1E088;
    case RC_ADDR(0x0001e08cu): goto L_1E08C;
    case RC_ADDR(0x0001e090u): goto L_1E090;
    case RC_ADDR(0x0001e094u): goto L_1E094;
    case RC_ADDR(0x0001e09au): goto L_1E09A;
    case RC_ADDR(0x0001e09eu): goto L_1E09E;
    case RC_ADDR(0x0001e0a4u): goto L_1E0A4;
    case RC_ADDR(0x0001e0a8u): goto L_1E0A8;
    case RC_ADDR(0x0001e0aau): goto L_1E0AA;
    case RC_ADDR(0x0001e0aeu): goto L_1E0AE;
    case RC_ADDR(0x0001e0b2u): goto L_1E0B2;
    case RC_ADDR(0x0001e0b6u): goto L_1E0B6;
    case RC_ADDR(0x0001e0b8u): goto L_1E0B8;
    case RC_ADDR(0x0001e0bcu): goto L_1E0BC;
    case RC_ADDR(0x0001e0c0u): goto L_1E0C0;
    case RC_ADDR(0x0001e0c2u): goto L_1E0C2;
    case RC_ADDR(0x0001e0c6u): goto L_1E0C6;
    case RC_ADDR(0x0001e0c8u): goto L_1E0C8;
    case RC_ADDR(0x0001e0cau): goto L_1E0CA;
    case RC_ADDR(0x0001e0ceu): goto L_1E0CE;
    case RC_ADDR(0x0001e0d2u): goto L_1E0D2;
    case RC_ADDR(0x0001e0d6u): goto L_1E0D6;
    case RC_ADDR(0x0001e0d8u): goto L_1E0D8;
    case RC_ADDR(0x0001e0dcu): goto L_1E0DC;
    case RC_ADDR(0x0001e0deu): goto L_1E0DE;
    case RC_ADDR(0x0001e0e2u): goto L_1E0E2;
    case RC_ADDR(0x0001e0e6u): goto L_1E0E6;
    case RC_ADDR(0x0001e0e8u): goto L_1E0E8;
    case RC_ADDR(0x0001e0eau): goto L_1E0EA;
    case RC_ADDR(0x0001e0eeu): goto L_1E0EE;
    case RC_ADDR(0x0001e0f0u): goto L_1E0F0;
    case RC_ADDR(0x0001e0f8u): goto L_1E0F8;
    case RC_ADDR(0x0001e0fcu): goto L_1E0FC;
    case RC_ADDR(0x0001e100u): goto L_1E100;
    case RC_ADDR(0x0001e104u): goto L_1E104;
    case RC_ADDR(0x0001e108u): goto L_1E108;
    case RC_ADDR(0x0001e10au): goto L_1E10A;
    case RC_ADDR(0x0001e10cu): goto L_1E10C;
    case RC_ADDR(0x0001e110u): goto L_1E110;
    case RC_ADDR(0x0001e114u): goto L_1E114;
    case RC_ADDR(0x0001e116u): goto L_1E116;
    case RC_ADDR(0x0001e118u): goto L_1E118;
    case RC_ADDR(0x0001e11au): goto L_1E11A;
    case RC_ADDR(0x0001e11eu): goto L_1E11E;
    case RC_ADDR(0x0001e122u): goto L_1E122;
    case RC_ADDR(0x0001e124u): goto L_1E124;
    case RC_ADDR(0x0001e128u): goto L_1E128;
    case RC_ADDR(0x0001e12au): goto L_1E12A;
    case RC_ADDR(0x0001e12eu): goto L_1E12E;
    case RC_ADDR(0x0001e132u): goto L_1E132;
    case RC_ADDR(0x0001e136u): goto L_1E136;
    case RC_ADDR(0x0001e13au): goto L_1E13A;
    case RC_ADDR(0x0001e13eu): goto L_1E13E;
    case RC_ADDR(0x0001e142u): goto L_1E142;
    case RC_ADDR(0x0001e146u): goto L_1E146;
    case RC_ADDR(0x0001e14au): goto L_1E14A;
    case RC_ADDR(0x0001e14cu): goto L_1E14C;
    case RC_ADDR(0x0001e150u): goto L_1E150;
    case RC_ADDR(0x0001e154u): goto L_1E154;
    case RC_ADDR(0x0001e156u): goto L_1E156;
    case RC_ADDR(0x0001e15au): goto L_1E15A;
    case RC_ADDR(0x0001e15eu): goto L_1E15E;
    case RC_ADDR(0x0001e162u): goto L_1E162;
    case RC_ADDR(0x0001e164u): goto L_1E164;
    case RC_ADDR(0x0001e166u): goto L_1E166;
    case RC_ADDR(0x0001e16au): goto L_1E16A;
    case RC_ADDR(0x0001e16cu): goto L_1E16C;
    case RC_ADDR(0x0001e16eu): goto L_1E16E;
    case RC_ADDR(0x0001e172u): goto L_1E172;
    case RC_ADDR(0x0001e178u): goto L_1E178;
    case RC_ADDR(0x0001e17au): goto L_1E17A;
    case RC_ADDR(0x0001e17eu): goto L_1E17E;
    case RC_ADDR(0x0001e182u): goto L_1E182;
    case RC_ADDR(0x0001e186u): goto L_1E186;
    case RC_ADDR(0x0001e188u): goto L_1E188;
    case RC_ADDR(0x0001e18au): goto L_1E18A;
    case RC_ADDR(0x0001e18cu): goto L_1E18C;
    case RC_ADDR(0x0001e190u): goto L_1E190;
    case RC_ADDR(0x0001e194u): goto L_1E194;
    case RC_ADDR(0x0001e196u): goto L_1E196;
    case RC_ADDR(0x0001e19au): goto L_1E19A;
    case RC_ADDR(0x0001e19eu): goto L_1E19E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DE7A:
    /* 0001de7a   4  link.w A5,#ffffffe4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de7au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1cu;

L_1DE7E:
    /* 0001de7e   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de7eu);
    rc_push32(c, m, 0x000003edu);

L_1DE82:
    /* 0001de82   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de82u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE86:
    /* 0001de86   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de86u);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0001de8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_1DE8A:
    /* 0001de8a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de8au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DE8C:
    /* 0001de8c   4  move.l D0,(ffffcbac,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de8cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3454u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE90:
    /* 0001de90   4  tst.l (ffffcbac,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de90u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3454u));
    rc_set_nzvc(c, t0, RC_L);

L_1DE94:
    /* 0001de94   2  beq 0001deb8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de94u);
    if (rc_cond(c, 7)) goto L_1DEB8;

L_1DE96:
    /* 0001de96   4  move.l (ffffcbac,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de96u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3454u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE9A:
    /* 0001de9a   4  jsr (ffff829c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de9au);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0001de9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000205e6u);
    return;

L_1DE9E:
    /* 0001de9e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001de9eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DEA0:
    /* 0001dea0   4  move.l (ffffcbac,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dea0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3454u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DEA4:
    /* 0001dea4   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dea4u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0001dea8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_1DEA8:
    /* 0001dea8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dea8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DEAA:
    /* 0001deaa   4  pea (00000004).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deaau);
    rc_push32(c, m, 0x00000004u);

L_1DEAE:
    /* 0001deae   4  pea (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deaeu);
    rc_push32(c, m, (c->a[5] - 0xcu));

L_1DEB2:
    /* 0001deb2   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deb2u);
    rc_push32(c, m, RC_ADDR(0x0001deb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DEB6:
    /* 0001deb6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deb6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DEB8:
    /* 0001deb8   4  tst.l (ffffcbac,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deb8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3454u));
    rc_set_nzvc(c, t0, RC_L);

L_1DEBC:
    /* 0001debc   2  beq 0001dec8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001debcu);
    if (rc_cond(c, 7)) goto L_1DEC8;

L_1DEBE:
    /* 0001debe   4  move.l (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001debeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DEC2:
    /* 0001dec2   4  cmp.l (ffffcb26,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dec2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34dau));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1DEC6:
    /* 0001dec6   2  beq 0001ded2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dec6u);
    if (rc_cond(c, 7)) goto L_1DED2;

L_1DEC8:
    /* 0001dec8   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dec8u);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001deccu));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_1DECC:
    /* 0001decc   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deccu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DECE:
    /* 0001dece   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deceu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DED0:
    /* 0001ded0   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ded0u);
    rc_ret(c, m);
    return;

L_1DED2:
    /* 0001ded2   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ded2u);
    rc_push32(c, m, 0x00000002u);

L_1DED6:
    /* 0001ded6   4  pea (fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ded6u);
    rc_push32(c, m, (c->a[5] - 0xeu));

L_1DEDA:
    /* 0001deda   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dedau);
    rc_push32(c, m, RC_ADDR(0x0001dedeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DEDE:
    /* 0001dede   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dedeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DEE0:
    /* 0001dee0   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dee0u);
    rc_push32(c, m, 0x00000002u);

L_1DEE4:
    /* 0001dee4   4  pea (fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dee4u);
    rc_push32(c, m, (c->a[5] - 0x10u));

L_1DEE8:
    /* 0001dee8   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dee8u);
    rc_push32(c, m, RC_ADDR(0x0001deecu));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DEEC:
    /* 0001deec   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deecu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DEEE:
    /* 0001deee   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001deeeu);
    rc_push32(c, m, 0x00000002u);

L_1DEF2:
    /* 0001def2   4  pea (ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001def2u);
    rc_push32(c, m, (c->a[5] - 0x12u));

L_1DEF6:
    /* 0001def6   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001def6u);
    rc_push32(c, m, RC_ADDR(0x0001defau));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DEFA:
    /* 0001defa   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001defau);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DEFC:
    /* 0001defc   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001defcu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1DEFE:
    /* 0001defe   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001defeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF02:
    /* 0001df02   4  add.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df02u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DF06:
    /* 0001df06   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df06u);
    rc_ext_l(c, 0);

L_1DF08:
    /* 0001df08   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df08u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1DF0A:
    /* 0001df0a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df0au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF0C:
    /* 0001df0c   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df0cu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001df10u);
    rc_os_call(c, m, 0, -198);

L_1DF10:
    /* 0001df10   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df10u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DF12:
    /* 0001df12   4  move.l D0,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df12u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF16:
    /* 0001df16   4  tst.l (ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df16u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_1DF1A:
    /* 0001df1a   2  bne 0001df24 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df1au);
    if (rc_cond(c, 6)) goto L_1DF24;

L_1DF1C:
    /* 0001df1c   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df1cu);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001df20u));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_1DF20:
    /* 0001df20   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df20u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DF22:
    /* 0001df22   2  bra 0001dece */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df22u);
    rc_tick();
    goto L_1DECE;

L_1DF24:
    /* 0001df24   4  clr.w (290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df24u);
    rc_wr16(c, m, (c->a[4] + 0x290au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DF28:
    /* 0001df28   4  clr.w (ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df28u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DF2C:
    /* 0001df2c   2  bra 0001df7c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df2cu);
    goto L_1DF7C;

L_1DF2E:
    /* 0001df2e   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df2eu);
    rc_push32(c, m, 0x00000002u);

L_1DF32:
    /* 0001df32   4  pea (290c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df32u);
    rc_push32(c, m, (c->a[4] + 0x290cu));

L_1DF36:
    /* 0001df36   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df36u);
    rc_push32(c, m, RC_ADDR(0x0001df3au));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DF3A:
    /* 0001df3a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df3au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DF3C:
    /* 0001df3c   4  move.w (290c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df3cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF40:
    /* 0001df40   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df40u);
    rc_ext_l(c, 0);

L_1DF42:
    /* 0001df42   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df42u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF44:
    /* 0001df44   4  pea (290e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df44u);
    rc_push32(c, m, (c->a[4] + 0x290eu));

L_1DF48:
    /* 0001df48   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df48u);
    rc_push32(c, m, RC_ADDR(0x0001df4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DF4C:
    /* 0001df4c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df4cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DF4E:
    /* 0001df4e   4  move.w (290c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df4eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF52:
    /* 0001df52   4  lea (290e,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df52u);
    c->a[0] = (c->a[4] + 0x290eu);

L_1DF56:
    /* 0001df56   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df56u);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1DF5A:
    /* 0001df5a   4  pea (290e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df5au);
    rc_push32(c, m, (c->a[4] + 0x290eu));

L_1DF5E:
    /* 0001df5e   4  jsr (ffff8206,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df5eu);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x0001df62u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_1DF62:
    /* 0001df62   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df62u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DF64:
    /* 0001df64   4  move.w (290a,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df64u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF68:
    /* 0001df68   4  addq.w #1,(290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df68u);
    t3 = (c->a[4] + 0x290au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DF6C:
    /* 0001df6c   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df6cu);
    rc_ext_l(c, 1);

L_1DF6E:
    /* 0001df6e   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df6eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1DF70:
    /* 0001df70   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df70u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1DF74:
    /* 0001df74   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df74u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DF78:
    /* 0001df78   4  addq.w #1,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df78u);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DF7C:
    /* 0001df7c   4  move.w (ffffffe6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df7cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF80:
    /* 0001df80   4  cmp.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df80u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DF84:
    /* 0001df84   2  blt 0001df2e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df84u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DF2E; }

L_1DF86:
    /* 0001df86   4  clr.w (ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df86u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DF8A:
    /* 0001df8a   2  bra 0001dfe2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df8au);
    goto L_1DFE2;

L_1DF8C:
    /* 0001df8c   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df8cu);
    rc_push32(c, m, 0x00000002u);

L_1DF90:
    /* 0001df90   4  pea (290c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df90u);
    rc_push32(c, m, (c->a[4] + 0x290cu));

L_1DF94:
    /* 0001df94   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df94u);
    rc_push32(c, m, RC_ADDR(0x0001df98u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DF98:
    /* 0001df98   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df98u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DF9A:
    /* 0001df9a   4  move.w (290c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df9au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DF9E:
    /* 0001df9e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001df9eu);
    rc_ext_l(c, 0);

L_1DFA0:
    /* 0001dfa0   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfa0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFA2:
    /* 0001dfa2   4  pea (290e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfa2u);
    rc_push32(c, m, (c->a[4] + 0x290eu));

L_1DFA6:
    /* 0001dfa6   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfa6u);
    rc_push32(c, m, RC_ADDR(0x0001dfaau));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1DFAA:
    /* 0001dfaa   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfaau);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DFAC:
    /* 0001dfac   4  move.w (290c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfacu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFB0:
    /* 0001dfb0   4  lea (290e,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfb0u);
    c->a[0] = (c->a[4] + 0x290eu);

L_1DFB4:
    /* 0001dfb4   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfb4u);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1DFB8:
    /* 0001dfb8   4  pea (290e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfb8u);
    rc_push32(c, m, (c->a[4] + 0x290eu));

L_1DFBC:
    /* 0001dfbc   4  jsr (ffff8254,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfbcu);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0001dfc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_1DFC0:
    /* 0001dfc0   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfc0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DFC2:
    /* 0001dfc2   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfc2u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFC4:
    /* 0001dfc4   4  jsr (0001f1f0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfc4u);
    rc_push32(c, m, RC_ADDR(0x0001dfc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f1f0u);
    return;

L_1DFC8:
    /* 0001dfc8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfc8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DFCA:
    /* 0001dfca   4  move.w (290a,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfcau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFCE:
    /* 0001dfce   4  addq.w #1,(290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfceu);
    t3 = (c->a[4] + 0x290au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DFD2:
    /* 0001dfd2   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfd2u);
    rc_ext_l(c, 1);

L_1DFD4:
    /* 0001dfd4   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfd4u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1DFD6:
    /* 0001dfd6   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfd6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1DFDA:
    /* 0001dfda   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfdau);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFDE:
    /* 0001dfde   4  addq.w #1,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfdeu);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DFE2:
    /* 0001dfe2   4  move.w (ffffffe6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfe2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFE6:
    /* 0001dfe6   4  cmp.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfe6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DFEA:
    /* 0001dfea   2  blt 0001df8c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfeau);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DF8C; }

L_1DFEC:
    /* 0001dfec   4  clr.w (290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dfecu);
    rc_wr16(c, m, (c->a[4] + 0x290au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DFF0:
    /* 0001dff0   4  clr.w (ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dff0u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DFF4:
    /* 0001dff4   2  bra 0001e01c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dff4u);
    goto L_1E01C;

L_1DFF6:
    /* 0001dff6   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dff6u);
    rc_push32(c, m, 0x00000002u);

L_1DFFA:
    /* 0001dffa   4  move.w (290a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dffau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFFE:
    /* 0001dffe   4  addq.w #1,(290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dffeu);
    t3 = (c->a[4] + 0x290au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E002:
    /* 0001e002   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e002u);
    rc_ext_l(c, 0);

L_1E004:
    /* 0001e004   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e004u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E006:
    /* 0001e006   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e006u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1E00A:
    /* 0001e00a   4  movea.l (0,A0,D0.w),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e00au);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1E00E:
    /* 0001e00e   4  pea (a,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e00eu);
    rc_push32(c, m, (c->a[1] + 0xau));

L_1E012:
    /* 0001e012   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e012u);
    rc_push32(c, m, RC_ADDR(0x0001e016u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1E016:
    /* 0001e016   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e016u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E018:
    /* 0001e018   4  addq.w #1,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e018u);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E01C:
    /* 0001e01c   4  move.w (ffffffe6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e01cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E020:
    /* 0001e020   4  cmp.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e020u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E024:
    /* 0001e024   2  blt 0001dff6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e024u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DFF6; }

L_1E026:
    /* 0001e026   4  clr.w (ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e026u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E02A:
    /* 0001e02a   4  bra 0001e132 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e02au);
    goto L_1E132;

L_1E02E:
    /* 0001e02e   4  move.w (290a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e02eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x290au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E032:
    /* 0001e032   4  addq.w #1,(290a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e032u);
    t3 = (c->a[4] + 0x290au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E036:
    /* 0001e036   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e036u);
    rc_ext_l(c, 0);

L_1E038:
    /* 0001e038   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e038u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E03A:
    /* 0001e03a   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e03au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1E03E:
    /* 0001e03e   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e03eu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E044:
    /* 0001e044   4  pea (00000010).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e044u);
    rc_push32(c, m, 0x00000010u);

L_1E048:
    /* 0001e048   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e048u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E04C:
    /* 0001e04c   4  pea (a,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e04cu);
    rc_push32(c, m, (c->a[0] + 0xau));

L_1E050:
    /* 0001e050   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e050u);
    rc_push32(c, m, RC_ADDR(0x0001e054u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1E054:
    /* 0001e054   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e054u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E056:
    /* 0001e056   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e056u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E05A:
    /* 0001e05a   4  tst.w (c,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e05au);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_1E05E:
    /* 0001e05e   4  beq 0001e12e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e05eu);
    if (rc_cond(c, 7)) goto L_1E12E;

L_1E062:
    /* 0001e062   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e062u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E064:
    /* 0001e064   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e064u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E068:
    /* 0001e068   4  move.w (c,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e068u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E06C:
    /* 0001e06c   4  mulu.w #12,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e06cu);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_1E070:
    /* 0001e070   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e070u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E072:
    /* 0001e072   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e072u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001e076u);
    rc_os_call(c, m, 0, -198);

L_1E076:
    /* 0001e076   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e076u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E078:
    /* 0001e078   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e078u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E07C:
    /* 0001e07c   4  move.l D0,(1e,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e07cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E080:
    /* 0001e080   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e080u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E084:
    /* 0001e084   4  tst.l (1e,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e084u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_1E088:
    /* 0001e088   4  beq 0001e10c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e088u);
    if (rc_cond(c, 7)) goto L_1E10C;

L_1E08C:
    /* 0001e08c   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e08cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E090:
    /* 0001e090   4  movea.l (fffffffc,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e090u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_1E094:
    /* 0001e094   6  move.w (c,A0),(22,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e094u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_wr16(c, m, (c->a[1] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E09A:
    /* 0001e09a   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e09au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E09E:
    /* 0001e09e   6  move.l (1e,A0),(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e09eu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0A4:
    /* 0001e0a4   4  clr.w (ffffffe4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0a4u);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E0A8:
    /* 0001e0a8   2  bra 0001e0fc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0a8u);
    goto L_1E0FC;

L_1E0AA:
    /* 0001e0aa   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0aau);
    rc_push32(c, m, 0x00000002u);

L_1E0AE:
    /* 0001e0ae   4  pea (ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0aeu);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_1E0B2:
    /* 0001e0b2   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0b2u);
    rc_push32(c, m, RC_ADDR(0x0001e0b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1E0B6:
    /* 0001e0b6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0b6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E0B8:
    /* 0001e0b8   4  move.w (ffffffe8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0b8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E0BC:
    /* 0001e0bc   4  cmp.w (ffffcb24,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0bcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34dcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E0C0:
    /* 0001e0c0   2  beq 0001e0d8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0c0u);
    if (rc_cond(c, 7)) goto L_1E0D8;

L_1E0C2:
    /* 0001e0c2   4  move.w (ffffffe8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0c2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E0C6:
    /* 0001e0c6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0c6u);
    rc_ext_l(c, 0);

L_1E0C8:
    /* 0001e0c8   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0c8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E0CA:
    /* 0001e0ca   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0cau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1E0CE:
    /* 0001e0ce   4  movea.l (fffffff8,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0ceu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[1] = t0;

L_1E0D2:
    /* 0001e0d2   4  move.l (0,A0,D0.w),(A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0d2u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0D6:
    /* 0001e0d6   2  bra 0001e0de */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0d6u);
    goto L_1E0DE;

L_1E0D8:
    /* 0001e0d8   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0d8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1E0DC:
    /* 0001e0dc   2  clr.l (A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0dcu);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E0DE:
    /* 0001e0de   4  pea (0000000e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0deu);
    rc_push32(c, m, 0x0000000eu);

L_1E0E2:
    /* 0001e0e2   4  movea.l (fffffff8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0e2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1E0E6:
    /* 0001e0e6   2  addq.l #4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0e6u);
    c->a[0] += 0x00000004u;

L_1E0E8:
    /* 0001e0e8   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0e8u);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0EA:
    /* 0001e0ea   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0eau);
    rc_push32(c, m, RC_ADDR(0x0001e0eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1E0EE:
    /* 0001e0ee   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0eeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E0F0:
    /* 0001e0f0   8  addi.l #12,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0f0u);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000012u;
    rc_flags_add(c, RC_L, t1, 0x00000012u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E0F8:
    /* 0001e0f8   4  addq.w #1,(ffffffe4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0f8u);
    t3 = (c->a[5] - 0x1cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E0FC:
    /* 0001e0fc   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e0fcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1E100:
    /* 0001e100   4  move.w (ffffffe4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e100u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E104:
    /* 0001e104   4  cmp.w (c,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e104u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E108:
    /* 0001e108   2  blt 0001e0aa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e108u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1E0AA; }

L_1E10A:
    /* 0001e10a   2  bra 0001e12e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e10au);
    goto L_1E12E;

L_1E10C:
    /* 0001e10c   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e10cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E110:
    /* 0001e110   4  add.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e110u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E114:
    /* 0001e114   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e114u);
    rc_ext_l(c, 0);

L_1E116:
    /* 0001e116   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e116u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E118:
    /* 0001e118   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e118u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E11A:
    /* 0001e11a   4  move.l (ffffffea,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e11au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E11E:
    /* 0001e11e   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e11eu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001e122u);
    rc_os_call(c, m, 0, -210);

L_1E122:
    /* 0001e122   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e122u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E124:
    /* 0001e124   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e124u);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001e128u));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_1E128:
    /* 0001e128   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e128u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E12A:
    /* 0001e12a   4  bra 0001dece */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e12au);
    rc_tick();
    goto L_1DECE;

L_1E12E:
    /* 0001e12e   4  addq.w #1,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e12eu);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E132:
    /* 0001e132   4  move.w (ffffffe6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e132u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E136:
    /* 0001e136   4  cmp.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e136u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E13A:
    /* 0001e13a   4  blt 0001e02e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e13au);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1E02E; }

L_1E13E:
    /* 0001e13e   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e13eu);
    rc_push32(c, m, 0x00000002u);

L_1E142:
    /* 0001e142   4  pea (ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e142u);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_1E146:
    /* 0001e146   4  jsr (000204fa) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e146u);
    rc_push32(c, m, RC_ADDR(0x0001e14au));
    rc_depth++;
    c->pc = RC_ADDR(0x000204fau);
    return;

L_1E14A:
    /* 0001e14a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e14au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E14C:
    /* 0001e14c   4  move.w (ffffffe8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e14cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E150:
    /* 0001e150   4  cmp.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e150u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E154:
    /* 0001e154   2  blt 0001e17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e154u);
    if (rc_cond(c, 13)) goto L_1E17A;

L_1E156:
    /* 0001e156   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e156u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E15A:
    /* 0001e15a   4  add.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e15au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E15E:
    /* 0001e15e   4  move.w (ffffffe8,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e15eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E162:
    /* 0001e162   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e162u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1E164:
    /* 0001e164   2  bge 0001e17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e164u);
    if (rc_cond(c, 12)) goto L_1E17A;

L_1E166:
    /* 0001e166   4  move.w (ffffffe8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e166u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E16A:
    /* 0001e16a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e16au);
    rc_ext_l(c, 0);

L_1E16C:
    /* 0001e16c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e16cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E16E:
    /* 0001e16e   4  movea.l (ffffffea,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e16eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_1E172:
    /* 0001e172   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e172u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E178:
    /* 0001e178   2  bra 0001e17e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e178u);
    goto L_1E17E;

L_1E17A:
    /* 0001e17a   4  clr.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e17au);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E17E:
    /* 0001e17e   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e17eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E182:
    /* 0001e182   4  add.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e182u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1E186:
    /* 0001e186   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e186u);
    rc_ext_l(c, 0);

L_1E188:
    /* 0001e188   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e188u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1E18A:
    /* 0001e18a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e18au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E18C:
    /* 0001e18c   4  move.l (ffffffea,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e18cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E190:
    /* 0001e190   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e190u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001e194u);
    rc_os_call(c, m, 0, -210);

L_1E194:
    /* 0001e194   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e194u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E196:
    /* 0001e196   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e196u);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x0001e19au));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_1E19A:
    /* 0001e19a   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e19au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E19E:
    /* 0001e19e   4  bra 0001dece */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e19eu);
    rc_tick();
    goto L_1DECE;

}
