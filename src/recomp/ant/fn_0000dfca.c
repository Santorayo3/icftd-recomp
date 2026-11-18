/* fn_0000dfca - 768 byte(s), 241 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000dfca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dfcau): goto L_DFCA;
    case RC_ADDR(0x0000dfceu): goto L_DFCE;
    case RC_ADDR(0x0000dfd2u): goto L_DFD2;
    case RC_ADDR(0x0000dfd8u): goto L_DFD8;
    case RC_ADDR(0x0000dfdcu): goto L_DFDC;
    case RC_ADDR(0x0000dfdeu): goto L_DFDE;
    case RC_ADDR(0x0000dfe2u): goto L_DFE2;
    case RC_ADDR(0x0000dfe4u): goto L_DFE4;
    case RC_ADDR(0x0000dfe8u): goto L_DFE8;
    case RC_ADDR(0x0000dfecu): goto L_DFEC;
    case RC_ADDR(0x0000dfeeu): goto L_DFEE;
    case RC_ADDR(0x0000dff2u): goto L_DFF2;
    case RC_ADDR(0x0000dff6u): goto L_DFF6;
    case RC_ADDR(0x0000dffau): goto L_DFFA;
    case RC_ADDR(0x0000dffeu): goto L_DFFE;
    case RC_ADDR(0x0000e002u): goto L_E002;
    case RC_ADDR(0x0000e006u): goto L_E006;
    case RC_ADDR(0x0000e00au): goto L_E00A;
    case RC_ADDR(0x0000e010u): goto L_E010;
    case RC_ADDR(0x0000e012u): goto L_E012;
    case RC_ADDR(0x0000e016u): goto L_E016;
    case RC_ADDR(0x0000e018u): goto L_E018;
    case RC_ADDR(0x0000e01eu): goto L_E01E;
    case RC_ADDR(0x0000e024u): goto L_E024;
    case RC_ADDR(0x0000e026u): goto L_E026;
    case RC_ADDR(0x0000e02au): goto L_E02A;
    case RC_ADDR(0x0000e02cu): goto L_E02C;
    case RC_ADDR(0x0000e032u): goto L_E032;
    case RC_ADDR(0x0000e034u): goto L_E034;
    case RC_ADDR(0x0000e038u): goto L_E038;
    case RC_ADDR(0x0000e03cu): goto L_E03C;
    case RC_ADDR(0x0000e03eu): goto L_E03E;
    case RC_ADDR(0x0000e042u): goto L_E042;
    case RC_ADDR(0x0000e044u): goto L_E044;
    case RC_ADDR(0x0000e048u): goto L_E048;
    case RC_ADDR(0x0000e04cu): goto L_E04C;
    case RC_ADDR(0x0000e050u): goto L_E050;
    case RC_ADDR(0x0000e054u): goto L_E054;
    case RC_ADDR(0x0000e056u): goto L_E056;
    case RC_ADDR(0x0000e058u): goto L_E058;
    case RC_ADDR(0x0000e05eu): goto L_E05E;
    case RC_ADDR(0x0000e060u): goto L_E060;
    case RC_ADDR(0x0000e064u): goto L_E064;
    case RC_ADDR(0x0000e068u): goto L_E068;
    case RC_ADDR(0x0000e06au): goto L_E06A;
    case RC_ADDR(0x0000e06cu): goto L_E06C;
    case RC_ADDR(0x0000e06eu): goto L_E06E;
    case RC_ADDR(0x0000e070u): goto L_E070;
    case RC_ADDR(0x0000e076u): goto L_E076;
    case RC_ADDR(0x0000e078u): goto L_E078;
    case RC_ADDR(0x0000e07au): goto L_E07A;
    case RC_ADDR(0x0000e07cu): goto L_E07C;
    case RC_ADDR(0x0000e080u): goto L_E080;
    case RC_ADDR(0x0000e084u): goto L_E084;
    case RC_ADDR(0x0000e086u): goto L_E086;
    case RC_ADDR(0x0000e088u): goto L_E088;
    case RC_ADDR(0x0000e08au): goto L_E08A;
    case RC_ADDR(0x0000e08eu): goto L_E08E;
    case RC_ADDR(0x0000e092u): goto L_E092;
    case RC_ADDR(0x0000e096u): goto L_E096;
    case RC_ADDR(0x0000e098u): goto L_E098;
    case RC_ADDR(0x0000e09au): goto L_E09A;
    case RC_ADDR(0x0000e09cu): goto L_E09C;
    case RC_ADDR(0x0000e09eu): goto L_E09E;
    case RC_ADDR(0x0000e0a2u): goto L_E0A2;
    case RC_ADDR(0x0000e0a4u): goto L_E0A4;
    case RC_ADDR(0x0000e0aau): goto L_E0AA;
    case RC_ADDR(0x0000e0acu): goto L_E0AC;
    case RC_ADDR(0x0000e0aeu): goto L_E0AE;
    case RC_ADDR(0x0000e0b0u): goto L_E0B0;
    case RC_ADDR(0x0000e0b4u): goto L_E0B4;
    case RC_ADDR(0x0000e0b8u): goto L_E0B8;
    case RC_ADDR(0x0000e0bau): goto L_E0BA;
    case RC_ADDR(0x0000e0c0u): goto L_E0C0;
    case RC_ADDR(0x0000e0c2u): goto L_E0C2;
    case RC_ADDR(0x0000e0c8u): goto L_E0C8;
    case RC_ADDR(0x0000e0ccu): goto L_E0CC;
    case RC_ADDR(0x0000e0d2u): goto L_E0D2;
    case RC_ADDR(0x0000e0d6u): goto L_E0D6;
    case RC_ADDR(0x0000e0d8u): goto L_E0D8;
    case RC_ADDR(0x0000e0dau): goto L_E0DA;
    case RC_ADDR(0x0000e0dcu): goto L_E0DC;
    case RC_ADDR(0x0000e0e0u): goto L_E0E0;
    case RC_ADDR(0x0000e0e4u): goto L_E0E4;
    case RC_ADDR(0x0000e0e6u): goto L_E0E6;
    case RC_ADDR(0x0000e0eau): goto L_E0EA;
    case RC_ADDR(0x0000e0ecu): goto L_E0EC;
    case RC_ADDR(0x0000e0eeu): goto L_E0EE;
    case RC_ADDR(0x0000e0f2u): goto L_E0F2;
    case RC_ADDR(0x0000e0f4u): goto L_E0F4;
    case RC_ADDR(0x0000e0f6u): goto L_E0F6;
    case RC_ADDR(0x0000e0fau): goto L_E0FA;
    case RC_ADDR(0x0000e100u): goto L_E100;
    case RC_ADDR(0x0000e102u): goto L_E102;
    case RC_ADDR(0x0000e104u): goto L_E104;
    case RC_ADDR(0x0000e108u): goto L_E108;
    case RC_ADDR(0x0000e10cu): goto L_E10C;
    case RC_ADDR(0x0000e10eu): goto L_E10E;
    case RC_ADDR(0x0000e110u): goto L_E110;
    case RC_ADDR(0x0000e114u): goto L_E114;
    case RC_ADDR(0x0000e118u): goto L_E118;
    case RC_ADDR(0x0000e11cu): goto L_E11C;
    case RC_ADDR(0x0000e120u): goto L_E120;
    case RC_ADDR(0x0000e122u): goto L_E122;
    case RC_ADDR(0x0000e124u): goto L_E124;
    case RC_ADDR(0x0000e128u): goto L_E128;
    case RC_ADDR(0x0000e12cu): goto L_E12C;
    case RC_ADDR(0x0000e12eu): goto L_E12E;
    case RC_ADDR(0x0000e130u): goto L_E130;
    case RC_ADDR(0x0000e134u): goto L_E134;
    case RC_ADDR(0x0000e138u): goto L_E138;
    case RC_ADDR(0x0000e13cu): goto L_E13C;
    case RC_ADDR(0x0000e140u): goto L_E140;
    case RC_ADDR(0x0000e142u): goto L_E142;
    case RC_ADDR(0x0000e144u): goto L_E144;
    case RC_ADDR(0x0000e148u): goto L_E148;
    case RC_ADDR(0x0000e14eu): goto L_E14E;
    case RC_ADDR(0x0000e152u): goto L_E152;
    case RC_ADDR(0x0000e154u): goto L_E154;
    case RC_ADDR(0x0000e156u): goto L_E156;
    case RC_ADDR(0x0000e15cu): goto L_E15C;
    case RC_ADDR(0x0000e160u): goto L_E160;
    case RC_ADDR(0x0000e164u): goto L_E164;
    case RC_ADDR(0x0000e166u): goto L_E166;
    case RC_ADDR(0x0000e168u): goto L_E168;
    case RC_ADDR(0x0000e16cu): goto L_E16C;
    case RC_ADDR(0x0000e172u): goto L_E172;
    case RC_ADDR(0x0000e178u): goto L_E178;
    case RC_ADDR(0x0000e17au): goto L_E17A;
    case RC_ADDR(0x0000e17eu): goto L_E17E;
    case RC_ADDR(0x0000e180u): goto L_E180;
    case RC_ADDR(0x0000e184u): goto L_E184;
    case RC_ADDR(0x0000e18au): goto L_E18A;
    case RC_ADDR(0x0000e18cu): goto L_E18C;
    case RC_ADDR(0x0000e190u): goto L_E190;
    case RC_ADDR(0x0000e192u): goto L_E192;
    case RC_ADDR(0x0000e194u): goto L_E194;
    case RC_ADDR(0x0000e198u): goto L_E198;
    case RC_ADDR(0x0000e19cu): goto L_E19C;
    case RC_ADDR(0x0000e1a0u): goto L_E1A0;
    case RC_ADDR(0x0000e1a4u): goto L_E1A4;
    case RC_ADDR(0x0000e1a6u): goto L_E1A6;
    case RC_ADDR(0x0000e1a8u): goto L_E1A8;
    case RC_ADDR(0x0000e1acu): goto L_E1AC;
    case RC_ADDR(0x0000e1b0u): goto L_E1B0;
    case RC_ADDR(0x0000e1b4u): goto L_E1B4;
    case RC_ADDR(0x0000e1b6u): goto L_E1B6;
    case RC_ADDR(0x0000e1b8u): goto L_E1B8;
    case RC_ADDR(0x0000e1bcu): goto L_E1BC;
    case RC_ADDR(0x0000e1c0u): goto L_E1C0;
    case RC_ADDR(0x0000e1c2u): goto L_E1C2;
    case RC_ADDR(0x0000e1c4u): goto L_E1C4;
    case RC_ADDR(0x0000e1c8u): goto L_E1C8;
    case RC_ADDR(0x0000e1cau): goto L_E1CA;
    case RC_ADDR(0x0000e1ceu): goto L_E1CE;
    case RC_ADDR(0x0000e1d0u): goto L_E1D0;
    case RC_ADDR(0x0000e1d4u): goto L_E1D4;
    case RC_ADDR(0x0000e1d6u): goto L_E1D6;
    case RC_ADDR(0x0000e1d8u): goto L_E1D8;
    case RC_ADDR(0x0000e1dau): goto L_E1DA;
    case RC_ADDR(0x0000e1dcu): goto L_E1DC;
    case RC_ADDR(0x0000e1e0u): goto L_E1E0;
    case RC_ADDR(0x0000e1e4u): goto L_E1E4;
    case RC_ADDR(0x0000e1e6u): goto L_E1E6;
    case RC_ADDR(0x0000e1e8u): goto L_E1E8;
    case RC_ADDR(0x0000e1ecu): goto L_E1EC;
    case RC_ADDR(0x0000e1eeu): goto L_E1EE;
    case RC_ADDR(0x0000e1f2u): goto L_E1F2;
    case RC_ADDR(0x0000e1f4u): goto L_E1F4;
    case RC_ADDR(0x0000e1f8u): goto L_E1F8;
    case RC_ADDR(0x0000e1fcu): goto L_E1FC;
    case RC_ADDR(0x0000e1feu): goto L_E1FE;
    case RC_ADDR(0x0000e200u): goto L_E200;
    case RC_ADDR(0x0000e204u): goto L_E204;
    case RC_ADDR(0x0000e208u): goto L_E208;
    case RC_ADDR(0x0000e20cu): goto L_E20C;
    case RC_ADDR(0x0000e20eu): goto L_E20E;
    case RC_ADDR(0x0000e210u): goto L_E210;
    case RC_ADDR(0x0000e212u): goto L_E212;
    case RC_ADDR(0x0000e214u): goto L_E214;
    case RC_ADDR(0x0000e218u): goto L_E218;
    case RC_ADDR(0x0000e21eu): goto L_E21E;
    case RC_ADDR(0x0000e220u): goto L_E220;
    case RC_ADDR(0x0000e222u): goto L_E222;
    case RC_ADDR(0x0000e224u): goto L_E224;
    case RC_ADDR(0x0000e226u): goto L_E226;
    case RC_ADDR(0x0000e22au): goto L_E22A;
    case RC_ADDR(0x0000e22cu): goto L_E22C;
    case RC_ADDR(0x0000e22eu): goto L_E22E;
    case RC_ADDR(0x0000e232u): goto L_E232;
    case RC_ADDR(0x0000e236u): goto L_E236;
    case RC_ADDR(0x0000e238u): goto L_E238;
    case RC_ADDR(0x0000e23au): goto L_E23A;
    case RC_ADDR(0x0000e23eu): goto L_E23E;
    case RC_ADDR(0x0000e242u): goto L_E242;
    case RC_ADDR(0x0000e244u): goto L_E244;
    case RC_ADDR(0x0000e248u): goto L_E248;
    case RC_ADDR(0x0000e24au): goto L_E24A;
    case RC_ADDR(0x0000e24cu): goto L_E24C;
    case RC_ADDR(0x0000e24eu): goto L_E24E;
    case RC_ADDR(0x0000e250u): goto L_E250;
    case RC_ADDR(0x0000e254u): goto L_E254;
    case RC_ADDR(0x0000e256u): goto L_E256;
    case RC_ADDR(0x0000e258u): goto L_E258;
    case RC_ADDR(0x0000e25cu): goto L_E25C;
    case RC_ADDR(0x0000e260u): goto L_E260;
    case RC_ADDR(0x0000e262u): goto L_E262;
    case RC_ADDR(0x0000e264u): goto L_E264;
    case RC_ADDR(0x0000e268u): goto L_E268;
    case RC_ADDR(0x0000e26cu): goto L_E26C;
    case RC_ADDR(0x0000e26eu): goto L_E26E;
    case RC_ADDR(0x0000e272u): goto L_E272;
    case RC_ADDR(0x0000e274u): goto L_E274;
    case RC_ADDR(0x0000e276u): goto L_E276;
    case RC_ADDR(0x0000e278u): goto L_E278;
    case RC_ADDR(0x0000e27cu): goto L_E27C;
    case RC_ADDR(0x0000e280u): goto L_E280;
    case RC_ADDR(0x0000e282u): goto L_E282;
    case RC_ADDR(0x0000e284u): goto L_E284;
    case RC_ADDR(0x0000e286u): goto L_E286;
    case RC_ADDR(0x0000e28au): goto L_E28A;
    case RC_ADDR(0x0000e28cu): goto L_E28C;
    case RC_ADDR(0x0000e28eu): goto L_E28E;
    case RC_ADDR(0x0000e292u): goto L_E292;
    case RC_ADDR(0x0000e296u): goto L_E296;
    case RC_ADDR(0x0000e298u): goto L_E298;
    case RC_ADDR(0x0000e29au): goto L_E29A;
    case RC_ADDR(0x0000e29eu): goto L_E29E;
    case RC_ADDR(0x0000e2a2u): goto L_E2A2;
    case RC_ADDR(0x0000e2a4u): goto L_E2A4;
    case RC_ADDR(0x0000e2a8u): goto L_E2A8;
    case RC_ADDR(0x0000e2aau): goto L_E2AA;
    case RC_ADDR(0x0000e2acu): goto L_E2AC;
    case RC_ADDR(0x0000e2b0u): goto L_E2B0;
    case RC_ADDR(0x0000e2b2u): goto L_E2B2;
    case RC_ADDR(0x0000e2b6u): goto L_E2B6;
    case RC_ADDR(0x0000e2b8u): goto L_E2B8;
    case RC_ADDR(0x0000e2beu): goto L_E2BE;
    case RC_ADDR(0x0000e2c2u): goto L_E2C2;
    case RC_ADDR(0x0000e2c6u): goto L_E2C6;
    case RC_ADDR(0x0000e2c8u): goto L_E2C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DFCA:
    /* 0000dfca   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000dfcau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DFCE:
    /* 0000dfce   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000dfceu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DFD2:
    /* 0000dfd2   6  move.w (e82,A4),(ee0,A4) */
    c->pc = RC_ADDR(0x0000dfd2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_wr16(c, m, (c->a[4] + 0xee0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFD8:
    /* 0000dfd8   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0000dfd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_DFDC:
    /* 0000dfdc   2  beq 0000e02c */
    c->pc = RC_ADDR(0x0000dfdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E02C;

L_DFDE:
    /* 0000dfde   4  tst.w (1134,A4) */
    c->pc = RC_ADDR(0x0000dfdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1134u));
    rc_set_nzvc(c, t0, RC_W);

L_DFE2:
    /* 0000dfe2   2  beq 0000e02c */
    c->pc = RC_ADDR(0x0000dfe2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E02C;

L_DFE4:
    /* 0000dfe4   4  subq.w #1,(1134,A4) */
    c->pc = RC_ADDR(0x0000dfe4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1134u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DFE8:
    /* 0000dfe8   4  tst.w (ee2,A4) */
    c->pc = RC_ADDR(0x0000dfe8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_set_nzvc(c, t0, RC_W);

L_DFEC:
    /* 0000dfec   2  bne 0000e00a */
    c->pc = RC_ADDR(0x0000dfecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E00A;

L_DFEE:
    /* 0000dfee   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000dfeeu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFF2:
    /* 0000dff2   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000dff2u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFF6:
    /* 0000dff6   4  move.l (112e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dff6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x112eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DFFA:
    /* 0000dffa   4  move.w (1128,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dffau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1128u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFFE:
    /* 0000dffe   4  move.l (1122,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dffeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1122u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E002:
    /* 0000e002   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000e002u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000e006u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_E006:
    /* 0000e006   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000e006u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_E00A:
    /* 0000e00a   6  cmpi.w #5,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e00au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_E010:
    /* 0000e010   2  bge 0000e018 */
    c->pc = RC_ADDR(0x0000e010u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E018;

L_E012:
    /* 0000e012   4  addq.w #1,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e012u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xee2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E016:
    /* 0000e016   2  bra 0000e01e */
    c->pc = RC_ADDR(0x0000e016u);
    rc_step(c, m, 10);
    goto L_E01E;

L_E018:
    /* 0000e018   6  move.w #4,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e018u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xee2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E01E:
    /* 0000e01e   6  cmpi.w #3e8,(f06,A4) */
    c->pc = RC_ADDR(0x0000e01eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf06u));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_E024:
    /* 0000e024   2  bge 0000e02a */
    c->pc = RC_ADDR(0x0000e024u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E02A;

L_E026:
    /* 0000e026   4  addq.w #1,(f06,A4) */
    c->pc = RC_ADDR(0x0000e026u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xf06u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E02A:
    /* 0000e02a   2  bra 0000e04c */
    c->pc = RC_ADDR(0x0000e02au);
    rc_step(c, m, 10);
    goto L_E04C;

L_E02C:
    /* 0000e02c   6  cmpi.w #1,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e02cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_E032:
    /* 0000e032   2  bne 0000e03e */
    c->pc = RC_ADDR(0x0000e032u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E03E;

L_E034:
    /* 0000e034   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000e034u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E038:
    /* 0000e038   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000e038u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000e03cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_E03C:
    /* 0000e03c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e03cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E03E:
    /* 0000e03e   4  tst.w (ee2,A4) */
    c->pc = RC_ADDR(0x0000e03eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_set_nzvc(c, t0, RC_W);

L_E042:
    /* 0000e042   2  beq 0000e048 */
    c->pc = RC_ADDR(0x0000e042u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E048;

L_E044:
    /* 0000e044   4  subq.w #1,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e044u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xee2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E048:
    /* 0000e048   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000e048u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E04C:
    /* 0000e04c   4  move.w (ee2,A4),D0 */
    c->pc = RC_ADDR(0x0000e04cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E050:
    /* 0000e050   4  muls.w #b,D0 */
    c->pc = RC_ADDR(0x0000e050u);
    rc_step(c, m, 42);
    t0 = 0x0000000bu;
    rc_muls(c, 0, t0);

L_E054:
    /* 0000e054   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e054u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E056:
    /* 0000e056   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0000e056u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E058:
    /* 0000e058   6  cmpi.w #28,(1134,A4) */
    c->pc = RC_ADDR(0x0000e058u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1134u));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_E05E:
    /* 0000e05e   2  bge 0000e070 */
    c->pc = RC_ADDR(0x0000e05eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E070;

L_E060:
    /* 0000e060   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000e060u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E064:
    /* 0000e064   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e064u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e068u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E068:
    /* 0000e068   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e068u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E06A:
    /* 0000e06a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000e06au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E06C:
    /* 0000e06c   2  bne 0000e070 */
    c->pc = RC_ADDR(0x0000e06cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E070;

L_E06E:
    /* 0000e06e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000e06eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_E070:
    /* 0000e070   6  move.w D4,(00dff0d8).l */
    c->pc = RC_ADDR(0x0000e070u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, 0x00dff0d8u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E076:
    /* 0000e076   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000e076u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_E078:
    /* 0000e078   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e078u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E07A:
    /* 0000e07a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e07au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E07C:
    /* 0000e07c   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000e07cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_E080:
    /* 0000e080   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e080u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_E084:
    /* 0000e084   2  beq 0000e0b8 */
    c->pc = RC_ADDR(0x0000e084u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E0B8;

L_E086:
    /* 0000e086   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e086u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E088:
    /* 0000e088   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e088u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E08A:
    /* 0000e08a   4  lea (efe,A4),A0 */
    c->pc = RC_ADDR(0x0000e08au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xefeu);

L_E08E:
    /* 0000e08e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e08eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E092:
    /* 0000e092   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e092u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E096:
    /* 0000e096   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000e096u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E098:
    /* 0000e098   2  beq 0000e0ac */
    c->pc = RC_ADDR(0x0000e098u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E0AC;

L_E09A:
    /* 0000e09a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e09au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E09C:
    /* 0000e09c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e09cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E09E:
    /* 0000e09e   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000e09eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_E0A2:
    /* 0000e0a2   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000e0a2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_E0A4:
    /* 0000e0a4   6  bchg #0,(1,A0) */
    c->pc = RC_ADDR(0x0000e0a4u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x1u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_E0AA:
    /* 0000e0aa   2  bra 0000e0b8 */
    c->pc = RC_ADDR(0x0000e0aau);
    rc_step(c, m, 10);
    goto L_E0B8;

L_E0AC:
    /* 0000e0ac   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e0acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E0AE:
    /* 0000e0ae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e0aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E0B0:
    /* 0000e0b0   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000e0b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_E0B4:
    /* 0000e0b4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e0b4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E0B8:
    /* 0000e0b8   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000e0b8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_E0BA:
    /* 0000e0ba   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0000e0bau);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_E0C0:
    /* 0000e0c0   2  blt 0000e078 */
    c->pc = RC_ADDR(0x0000e0c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E078; }

L_E0C2:
    /* 0000e0c2   6  cmpi.w #5,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e0c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_E0C8:
    /* 0000e0c8   4  bne 0000e160 */
    c->pc = RC_ADDR(0x0000e0c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E160;

L_E0CC:
    /* 0000e0cc   6  cmpi.w #8,(f06,A4) */
    c->pc = RC_ADDR(0x0000e0ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf06u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_E0D2:
    /* 0000e0d2   4  ble 0000e160 */
    c->pc = RC_ADDR(0x0000e0d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_E160;

L_E0D6:
    /* 0000e0d6   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000e0d6u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_E0D8:
    /* 0000e0d8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e0d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E0DA:
    /* 0000e0da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e0dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E0DC:
    /* 0000e0dc   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000e0dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_E0E0:
    /* 0000e0e0   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e0e0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_E0E4:
    /* 0000e0e4   2  bne 0000e154 */
    c->pc = RC_ADDR(0x0000e0e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E154;

L_E0E6:
    /* 0000e0e6   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000e0e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0EA:
    /* 0000e0ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e0eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E0EC:
    /* 0000e0ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e0ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E0EE:
    /* 0000e0ee   4  lea (ffff9ac4,A4),A0 */
    c->pc = RC_ADDR(0x0000e0eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x653cu);

L_E0F2:
    /* 0000e0f2   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000e0f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E0F4:
    /* 0000e0f4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e0f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E0F6:
    /* 0000e0f6   4  lea (ee6,A4),A1 */
    c->pc = RC_ADDR(0x0000e0f6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xee6u);

L_E0FA:
    /* 0000e0fa   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000e0fau);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E100:
    /* 0000e100   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e100u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E102:
    /* 0000e102   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e102u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E104:
    /* 0000e104   4  lea (eee,A4),A0 */
    c->pc = RC_ADDR(0x0000e104u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeeeu);

L_E108:
    /* 0000e108   4  move.w (e82,A4),D1 */
    c->pc = RC_ADDR(0x0000e108u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E10C:
    /* 0000e10c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e10cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E10E:
    /* 0000e10e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e10eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E110:
    /* 0000e110   4  lea (ffff9ae4,A4),A1 */
    c->pc = RC_ADDR(0x0000e110u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x651cu);

L_E114:
    /* 0000e114   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e114u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E118:
    /* 0000e118   4  add.w (e76,A4),D2 */
    c->pc = RC_ADDR(0x0000e118u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E11C:
    /* 0000e11c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e11cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E120:
    /* 0000e120   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e120u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E122:
    /* 0000e122   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e122u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E124:
    /* 0000e124   4  lea (ef6,A4),A0 */
    c->pc = RC_ADDR(0x0000e124u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xef6u);

L_E128:
    /* 0000e128   4  move.w (e82,A4),D1 */
    c->pc = RC_ADDR(0x0000e128u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E12C:
    /* 0000e12c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e12cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E12E:
    /* 0000e12e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e12eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E130:
    /* 0000e130   4  lea (ffff9b04,A4),A1 */
    c->pc = RC_ADDR(0x0000e130u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x64fcu);

L_E134:
    /* 0000e134   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e134u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E138:
    /* 0000e138   4  add.w (e78,A4),D2 */
    c->pc = RC_ADDR(0x0000e138u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E13C:
    /* 0000e13c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e13cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E140:
    /* 0000e140   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e140u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E142:
    /* 0000e142   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e142u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E144:
    /* 0000e144   4  lea (efe,A4),A0 */
    c->pc = RC_ADDR(0x0000e144u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xefeu);

L_E148:
    /* 0000e148   6  move.w #18,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e148u);
    rc_step(c, m, 18);
    t0 = 0x00000018u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E14E:
    /* 0000e14e   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000e14eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E152:
    /* 0000e152   2  bra 0000e160 */
    c->pc = RC_ADDR(0x0000e152u);
    rc_step(c, m, 10);
    goto L_E160;

L_E154:
    /* 0000e154   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000e154u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_E156:
    /* 0000e156   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0000e156u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_E15C:
    /* 0000e15c   4  blt 0000e0d8 */
    c->pc = RC_ADDR(0x0000e15cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E0D8; }

L_E160:
    /* 0000e160   4  move.w (ee0,A4),D0 */
    c->pc = RC_ADDR(0x0000e160u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E164:
    /* 0000e164   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e164u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E166:
    /* 0000e166   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e166u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E168:
    /* 0000e168   4  lea (ffff9c52,A4),A0 */
    c->pc = RC_ADDR(0x0000e168u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x63aeu);

L_E16C:
    /* 0000e16c   6  move.w (0,A0,D0.w),(ee4,A4) */
    c->pc = RC_ADDR(0x0000e16cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xee4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E172:
    /* 0000e172   6  btst #0,(ee1,A4) */
    c->pc = RC_ADDR(0x0000e172u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xee1u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E178:
    /* 0000e178   2  bne 0000e184 */
    c->pc = RC_ADDR(0x0000e178u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E184;

L_E17A:
    /* 0000e17a   4  move.w (ee2,A4),D0 */
    c->pc = RC_ADDR(0x0000e17au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E17E:
    /* 0000e17e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000e17eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E180:
    /* 0000e180   4  add.w D0,(ee4,A4) */
    c->pc = RC_ADDR(0x0000e180u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xee4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E184:
    /* 0000e184   6  cmpi.w #8,(f06,A4) */
    c->pc = RC_ADDR(0x0000e184u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xf06u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_E18A:
    /* 0000e18a   2  ble 0000e1d6 */
    c->pc = RC_ADDR(0x0000e18au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_E1D6;

L_E18C:
    /* 0000e18c   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000e18cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E190:
    /* 0000e190   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e190u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E192:
    /* 0000e192   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e192u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E194:
    /* 0000e194   4  lea (ffff99c4,A4),A0 */
    c->pc = RC_ADDR(0x0000e194u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x663cu);

L_E198:
    /* 0000e198   4  move.w (0,A0,D0.w),D5 */
    c->pc = RC_ADDR(0x0000e198u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E19C:
    /* 0000e19c   4  add.w (e76,A4),D5 */
    c->pc = RC_ADDR(0x0000e19cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_E1A0:
    /* 0000e1a0   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000e1a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1A4:
    /* 0000e1a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e1a4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E1A6:
    /* 0000e1a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e1a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E1A8:
    /* 0000e1a8   4  lea (ffff99e4,A4),A0 */
    c->pc = RC_ADDR(0x0000e1a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x661cu);

L_E1AC:
    /* 0000e1ac   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0000e1acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1B0:
    /* 0000e1b0   4  add.w (e78,A4),D6 */
    c->pc = RC_ADDR(0x0000e1b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_E1B4:
    /* 0000e1b4   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0000e1b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1B6:
    /* 0000e1b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e1b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E1B8:
    /* 0000e1b8   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000e1b8u);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_E1BC:
    /* 0000e1bc   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000e1bcu);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_E1C0:
    /* 0000e1c0   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x0000e1c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1C2:
    /* 0000e1c2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e1c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E1C4:
    /* 0000e1c4   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000e1c4u);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_E1C8:
    /* 0000e1c8   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000e1c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E1CA:
    /* 0000e1ca   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000e1cau);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E1CE:
    /* 0000e1ce   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000e1ceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1D0:
    /* 0000e1d0   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000e1d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000e1d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_E1D4:
    /* 0000e1d4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e1d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E1D6:
    /* 0000e1d6   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000e1d6u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_E1D8:
    /* 0000e1d8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e1d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1DA:
    /* 0000e1da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e1dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E1DC:
    /* 0000e1dc   4  lea (1008,A4),A0 */
    c->pc = RC_ADDR(0x0000e1dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1008u);

L_E1E0:
    /* 0000e1e0   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0000e1e0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1E4:
    /* 0000e1e4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e1e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1E6:
    /* 0000e1e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e1e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E1E8:
    /* 0000e1e8   4  lea (f08,A4),A0 */
    c->pc = RC_ADDR(0x0000e1e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf08u);

L_E1EC:
    /* 0000e1ec   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000e1ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1EE:
    /* 0000e1ee   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e1eeu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1F2:
    /* 0000e1f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e1f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E1F4:
    /* 0000e1f4   4  bra 0000e2aa */
    c->pc = RC_ADDR(0x0000e1f4u);
    rc_step(c, m, 10);
    goto L_E2AA;

L_E1F8:
    /* 0000e1f8   4  bra 0000e2b6 */
    c->pc = RC_ADDR(0x0000e1f8u);
    rc_step(c, m, 10);
    goto L_E2B6;

L_E1FC:
    /* 0000e1fc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e1fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1FE:
    /* 0000e1fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e1feu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E200:
    /* 0000e200   4  lea (1088,A4),A0 */
    c->pc = RC_ADDR(0x0000e200u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1088u);

L_E204:
    /* 0000e204   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e204u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E208:
    /* 0000e208   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e208u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E20C:
    /* 0000e20c   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000e20cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E20E:
    /* 0000e20e   2  beq 0000e274 */
    c->pc = RC_ADDR(0x0000e20eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E274;

L_E210:
    /* 0000e210   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e210u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E212:
    /* 0000e212   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e212u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E214:
    /* 0000e214   4  lea (1088,A4),A0 */
    c->pc = RC_ADDR(0x0000e214u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1088u);

L_E218:
    /* 0000e218   6  btst #0,(1,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e218u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x1u + t4);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E21E:
    /* 0000e21e   2  beq 0000e24a */
    c->pc = RC_ADDR(0x0000e21eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E24A;

L_E220:
    /* 0000e220   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000e220u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E222:
    /* 0000e222   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e222u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E224:
    /* 0000e224   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e224u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E226:
    /* 0000e226   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000e226u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_E22A:
    /* 0000e22a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000e22au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E22C:
    /* 0000e22c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e22cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E22E:
    /* 0000e22e   4  lea (f88,A4),A1 */
    c->pc = RC_ADDR(0x0000e22eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xf88u);

L_E232:
    /* 0000e232   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e232u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E236:
    /* 0000e236   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000e236u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_E238:
    /* 0000e238   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000e238u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_E23A:
    /* 0000e23a   4  lea (ffff9b5a,A4),A1 */
    c->pc = RC_ADDR(0x0000e23au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x64a6u);

L_E23E:
    /* 0000e23e   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000e23eu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E242:
    /* 0000e242   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000e242u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E244:
    /* 0000e244   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e244u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E248:
    /* 0000e248   2  bra 0000e272 */
    c->pc = RC_ADDR(0x0000e248u);
    rc_step(c, m, 10);
    goto L_E272;

L_E24A:
    /* 0000e24a   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000e24au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E24C:
    /* 0000e24c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e24cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E24E:
    /* 0000e24e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e24eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E250:
    /* 0000e250   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000e250u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_E254:
    /* 0000e254   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000e254u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E256:
    /* 0000e256   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e256u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E258:
    /* 0000e258   4  lea (f88,A4),A1 */
    c->pc = RC_ADDR(0x0000e258u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xf88u);

L_E25C:
    /* 0000e25c   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e25cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E260:
    /* 0000e260   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000e260u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_E262:
    /* 0000e262   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000e262u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_E264:
    /* 0000e264   4  lea (ffff9b90,A4),A1 */
    c->pc = RC_ADDR(0x0000e264u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x6470u);

L_E268:
    /* 0000e268   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000e268u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E26C:
    /* 0000e26c   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000e26cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E26E:
    /* 0000e26e   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e26eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E272:
    /* 0000e272   2  bra 0000e2a8 */
    c->pc = RC_ADDR(0x0000e272u);
    rc_step(c, m, 10);
    goto L_E2A8;

L_E274:
    /* 0000e274   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000e274u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E276:
    /* 0000e276   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e276u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E278:
    /* 0000e278   4  lea (f08,A4),A0 */
    c->pc = RC_ADDR(0x0000e278u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf08u);

L_E27C:
    /* 0000e27c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e27cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E280:
    /* 0000e280   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000e280u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E282:
    /* 0000e282   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e282u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E284:
    /* 0000e284   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e284u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E286:
    /* 0000e286   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000e286u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_E28A:
    /* 0000e28a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000e28au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E28C:
    /* 0000e28c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e28cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E28E:
    /* 0000e28e   4  lea (f88,A4),A1 */
    c->pc = RC_ADDR(0x0000e28eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xf88u);

L_E292:
    /* 0000e292   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e292u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E296:
    /* 0000e296   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000e296u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_E298:
    /* 0000e298   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0000e298u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_E29A:
    /* 0000e29a   4  lea (ffff9bc6,A4),A1 */
    c->pc = RC_ADDR(0x0000e29au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x643au);

L_E29E:
    /* 0000e29e   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x0000e29eu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2A2:
    /* 0000e2a2   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000e2a2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E2A4:
    /* 0000e2a4   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e2a4u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2A8:
    /* 0000e2a8   2  bra 0000e2b6 */
    c->pc = RC_ADDR(0x0000e2a8u);
    rc_step(c, m, 10);
    goto L_E2B6;

L_E2AA:
    /* 0000e2aa   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000e2aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_E2AC:
    /* 0000e2ac   4  beq 0000e1f8 */
    c->pc = RC_ADDR(0x0000e2acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_E1F8; }

L_E2B0:
    /* 0000e2b0   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000e2b0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E2B2:
    /* 0000e2b2   4  beq 0000e1fc */
    c->pc = RC_ADDR(0x0000e2b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_E1FC; }

L_E2B6:
    /* 0000e2b6   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000e2b6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_E2B8:
    /* 0000e2b8   6  cmp.l #40,D4 */
    c->pc = RC_ADDR(0x0000e2b8u);
    rc_step(c, m, 14);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_E2BE:
    /* 0000e2be   4  blt 0000e1d8 */
    c->pc = RC_ADDR(0x0000e2beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E1D8; }

L_E2C2:
    /* 0000e2c2   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0000e2c2u);
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
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_E2C6:
    /* 0000e2c6   2  unlk A5 */
    c->pc = RC_ADDR(0x0000e2c6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E2C8:
    /* 0000e2c8   2  rts */
    c->pc = RC_ADDR(0x0000e2c8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
