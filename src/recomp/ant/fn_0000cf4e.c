/* fn_0000cf4e - 790 byte(s), 220 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000cf4e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000cf4eu): goto L_CF4E;
    case RC_ADDR(0x0000cf52u): goto L_CF52;
    case RC_ADDR(0x0000cf56u): goto L_CF56;
    case RC_ADDR(0x0000cf5au): goto L_CF5A;
    case RC_ADDR(0x0000cf5cu): goto L_CF5C;
    case RC_ADDR(0x0000cf60u): goto L_CF60;
    case RC_ADDR(0x0000cf64u): goto L_CF64;
    case RC_ADDR(0x0000cf66u): goto L_CF66;
    case RC_ADDR(0x0000cf6au): goto L_CF6A;
    case RC_ADDR(0x0000cf6cu): goto L_CF6C;
    case RC_ADDR(0x0000cf70u): goto L_CF70;
    case RC_ADDR(0x0000cf74u): goto L_CF74;
    case RC_ADDR(0x0000cf78u): goto L_CF78;
    case RC_ADDR(0x0000cf80u): goto L_CF80;
    case RC_ADDR(0x0000cf82u): goto L_CF82;
    case RC_ADDR(0x0000cf86u): goto L_CF86;
    case RC_ADDR(0x0000cf88u): goto L_CF88;
    case RC_ADDR(0x0000cf8cu): goto L_CF8C;
    case RC_ADDR(0x0000cf90u): goto L_CF90;
    case RC_ADDR(0x0000cf94u): goto L_CF94;
    case RC_ADDR(0x0000cf98u): goto L_CF98;
    case RC_ADDR(0x0000cf9cu): goto L_CF9C;
    case RC_ADDR(0x0000cfa2u): goto L_CFA2;
    case RC_ADDR(0x0000cfa6u): goto L_CFA6;
    case RC_ADDR(0x0000cfaau): goto L_CFAA;
    case RC_ADDR(0x0000cfacu): goto L_CFAC;
    case RC_ADDR(0x0000cfb2u): goto L_CFB2;
    case RC_ADDR(0x0000cfb6u): goto L_CFB6;
    case RC_ADDR(0x0000cfbau): goto L_CFBA;
    case RC_ADDR(0x0000cfbeu): goto L_CFBE;
    case RC_ADDR(0x0000cfc0u): goto L_CFC0;
    case RC_ADDR(0x0000cfc4u): goto L_CFC4;
    case RC_ADDR(0x0000cfc8u): goto L_CFC8;
    case RC_ADDR(0x0000cfccu): goto L_CFCC;
    case RC_ADDR(0x0000cfd0u): goto L_CFD0;
    case RC_ADDR(0x0000cfd4u): goto L_CFD4;
    case RC_ADDR(0x0000cfd8u): goto L_CFD8;
    case RC_ADDR(0x0000cfdcu): goto L_CFDC;
    case RC_ADDR(0x0000cfdeu): goto L_CFDE;
    case RC_ADDR(0x0000cfe2u): goto L_CFE2;
    case RC_ADDR(0x0000cfe6u): goto L_CFE6;
    case RC_ADDR(0x0000cfeau): goto L_CFEA;
    case RC_ADDR(0x0000cfecu): goto L_CFEC;
    case RC_ADDR(0x0000cfeeu): goto L_CFEE;
    case RC_ADDR(0x0000cff2u): goto L_CFF2;
    case RC_ADDR(0x0000cff6u): goto L_CFF6;
    case RC_ADDR(0x0000cffau): goto L_CFFA;
    case RC_ADDR(0x0000cffeu): goto L_CFFE;
    case RC_ADDR(0x0000d002u): goto L_D002;
    case RC_ADDR(0x0000d006u): goto L_D006;
    case RC_ADDR(0x0000d008u): goto L_D008;
    case RC_ADDR(0x0000d00cu): goto L_D00C;
    case RC_ADDR(0x0000d010u): goto L_D010;
    case RC_ADDR(0x0000d014u): goto L_D014;
    case RC_ADDR(0x0000d018u): goto L_D018;
    case RC_ADDR(0x0000d01cu): goto L_D01C;
    case RC_ADDR(0x0000d01eu): goto L_D01E;
    case RC_ADDR(0x0000d022u): goto L_D022;
    case RC_ADDR(0x0000d026u): goto L_D026;
    case RC_ADDR(0x0000d02au): goto L_D02A;
    case RC_ADDR(0x0000d02eu): goto L_D02E;
    case RC_ADDR(0x0000d032u): goto L_D032;
    case RC_ADDR(0x0000d036u): goto L_D036;
    case RC_ADDR(0x0000d038u): goto L_D038;
    case RC_ADDR(0x0000d03cu): goto L_D03C;
    case RC_ADDR(0x0000d040u): goto L_D040;
    case RC_ADDR(0x0000d044u): goto L_D044;
    case RC_ADDR(0x0000d046u): goto L_D046;
    case RC_ADDR(0x0000d04au): goto L_D04A;
    case RC_ADDR(0x0000d04eu): goto L_D04E;
    case RC_ADDR(0x0000d052u): goto L_D052;
    case RC_ADDR(0x0000d056u): goto L_D056;
    case RC_ADDR(0x0000d05au): goto L_D05A;
    case RC_ADDR(0x0000d05eu): goto L_D05E;
    case RC_ADDR(0x0000d062u): goto L_D062;
    case RC_ADDR(0x0000d066u): goto L_D066;
    case RC_ADDR(0x0000d068u): goto L_D068;
    case RC_ADDR(0x0000d06cu): goto L_D06C;
    case RC_ADDR(0x0000d070u): goto L_D070;
    case RC_ADDR(0x0000d074u): goto L_D074;
    case RC_ADDR(0x0000d078u): goto L_D078;
    case RC_ADDR(0x0000d07au): goto L_D07A;
    case RC_ADDR(0x0000d07cu): goto L_D07C;
    case RC_ADDR(0x0000d080u): goto L_D080;
    case RC_ADDR(0x0000d082u): goto L_D082;
    case RC_ADDR(0x0000d086u): goto L_D086;
    case RC_ADDR(0x0000d088u): goto L_D088;
    case RC_ADDR(0x0000d08cu): goto L_D08C;
    case RC_ADDR(0x0000d08eu): goto L_D08E;
    case RC_ADDR(0x0000d092u): goto L_D092;
    case RC_ADDR(0x0000d096u): goto L_D096;
    case RC_ADDR(0x0000d09au): goto L_D09A;
    case RC_ADDR(0x0000d09eu): goto L_D09E;
    case RC_ADDR(0x0000d0a0u): goto L_D0A0;
    case RC_ADDR(0x0000d0a2u): goto L_D0A2;
    case RC_ADDR(0x0000d0a6u): goto L_D0A6;
    case RC_ADDR(0x0000d0a8u): goto L_D0A8;
    case RC_ADDR(0x0000d0acu): goto L_D0AC;
    case RC_ADDR(0x0000d0aeu): goto L_D0AE;
    case RC_ADDR(0x0000d0b2u): goto L_D0B2;
    case RC_ADDR(0x0000d0b4u): goto L_D0B4;
    case RC_ADDR(0x0000d0b6u): goto L_D0B6;
    case RC_ADDR(0x0000d0bau): goto L_D0BA;
    case RC_ADDR(0x0000d0beu): goto L_D0BE;
    case RC_ADDR(0x0000d0c2u): goto L_D0C2;
    case RC_ADDR(0x0000d0c4u): goto L_D0C4;
    case RC_ADDR(0x0000d0c8u): goto L_D0C8;
    case RC_ADDR(0x0000d0ccu): goto L_D0CC;
    case RC_ADDR(0x0000d0d0u): goto L_D0D0;
    case RC_ADDR(0x0000d0d2u): goto L_D0D2;
    case RC_ADDR(0x0000d0d6u): goto L_D0D6;
    case RC_ADDR(0x0000d0dau): goto L_D0DA;
    case RC_ADDR(0x0000d0dcu): goto L_D0DC;
    case RC_ADDR(0x0000d0deu): goto L_D0DE;
    case RC_ADDR(0x0000d0e2u): goto L_D0E2;
    case RC_ADDR(0x0000d0e6u): goto L_D0E6;
    case RC_ADDR(0x0000d0eau): goto L_D0EA;
    case RC_ADDR(0x0000d0f0u): goto L_D0F0;
    case RC_ADDR(0x0000d0f4u): goto L_D0F4;
    case RC_ADDR(0x0000d0f6u): goto L_D0F6;
    case RC_ADDR(0x0000d0fau): goto L_D0FA;
    case RC_ADDR(0x0000d0feu): goto L_D0FE;
    case RC_ADDR(0x0000d102u): goto L_D102;
    case RC_ADDR(0x0000d106u): goto L_D106;
    case RC_ADDR(0x0000d108u): goto L_D108;
    case RC_ADDR(0x0000d10au): goto L_D10A;
    case RC_ADDR(0x0000d10eu): goto L_D10E;
    case RC_ADDR(0x0000d110u): goto L_D110;
    case RC_ADDR(0x0000d114u): goto L_D114;
    case RC_ADDR(0x0000d116u): goto L_D116;
    case RC_ADDR(0x0000d11au): goto L_D11A;
    case RC_ADDR(0x0000d11cu): goto L_D11C;
    case RC_ADDR(0x0000d120u): goto L_D120;
    case RC_ADDR(0x0000d124u): goto L_D124;
    case RC_ADDR(0x0000d128u): goto L_D128;
    case RC_ADDR(0x0000d12cu): goto L_D12C;
    case RC_ADDR(0x0000d12eu): goto L_D12E;
    case RC_ADDR(0x0000d130u): goto L_D130;
    case RC_ADDR(0x0000d134u): goto L_D134;
    case RC_ADDR(0x0000d136u): goto L_D136;
    case RC_ADDR(0x0000d13au): goto L_D13A;
    case RC_ADDR(0x0000d13cu): goto L_D13C;
    case RC_ADDR(0x0000d140u): goto L_D140;
    case RC_ADDR(0x0000d142u): goto L_D142;
    case RC_ADDR(0x0000d144u): goto L_D144;
    case RC_ADDR(0x0000d148u): goto L_D148;
    case RC_ADDR(0x0000d14cu): goto L_D14C;
    case RC_ADDR(0x0000d150u): goto L_D150;
    case RC_ADDR(0x0000d152u): goto L_D152;
    case RC_ADDR(0x0000d156u): goto L_D156;
    case RC_ADDR(0x0000d15au): goto L_D15A;
    case RC_ADDR(0x0000d15eu): goto L_D15E;
    case RC_ADDR(0x0000d160u): goto L_D160;
    case RC_ADDR(0x0000d164u): goto L_D164;
    case RC_ADDR(0x0000d168u): goto L_D168;
    case RC_ADDR(0x0000d16au): goto L_D16A;
    case RC_ADDR(0x0000d16cu): goto L_D16C;
    case RC_ADDR(0x0000d170u): goto L_D170;
    case RC_ADDR(0x0000d174u): goto L_D174;
    case RC_ADDR(0x0000d178u): goto L_D178;
    case RC_ADDR(0x0000d17eu): goto L_D17E;
    case RC_ADDR(0x0000d182u): goto L_D182;
    case RC_ADDR(0x0000d186u): goto L_D186;
    case RC_ADDR(0x0000d18au): goto L_D18A;
    case RC_ADDR(0x0000d18cu): goto L_D18C;
    case RC_ADDR(0x0000d192u): goto L_D192;
    case RC_ADDR(0x0000d194u): goto L_D194;
    case RC_ADDR(0x0000d198u): goto L_D198;
    case RC_ADDR(0x0000d19cu): goto L_D19C;
    case RC_ADDR(0x0000d1a0u): goto L_D1A0;
    case RC_ADDR(0x0000d1a2u): goto L_D1A2;
    case RC_ADDR(0x0000d1a6u): goto L_D1A6;
    case RC_ADDR(0x0000d1aau): goto L_D1AA;
    case RC_ADDR(0x0000d1aeu): goto L_D1AE;
    case RC_ADDR(0x0000d1b0u): goto L_D1B0;
    case RC_ADDR(0x0000d1b4u): goto L_D1B4;
    case RC_ADDR(0x0000d1b8u): goto L_D1B8;
    case RC_ADDR(0x0000d1bcu): goto L_D1BC;
    case RC_ADDR(0x0000d1c0u): goto L_D1C0;
    case RC_ADDR(0x0000d1c4u): goto L_D1C4;
    case RC_ADDR(0x0000d1c8u): goto L_D1C8;
    case RC_ADDR(0x0000d1ccu): goto L_D1CC;
    case RC_ADDR(0x0000d1d0u): goto L_D1D0;
    case RC_ADDR(0x0000d1d4u): goto L_D1D4;
    case RC_ADDR(0x0000d1d8u): goto L_D1D8;
    case RC_ADDR(0x0000d1dcu): goto L_D1DC;
    case RC_ADDR(0x0000d1e0u): goto L_D1E0;
    case RC_ADDR(0x0000d1e4u): goto L_D1E4;
    case RC_ADDR(0x0000d1e8u): goto L_D1E8;
    case RC_ADDR(0x0000d1ecu): goto L_D1EC;
    case RC_ADDR(0x0000d1f0u): goto L_D1F0;
    case RC_ADDR(0x0000d1f2u): goto L_D1F2;
    case RC_ADDR(0x0000d1f6u): goto L_D1F6;
    case RC_ADDR(0x0000d1fau): goto L_D1FA;
    case RC_ADDR(0x0000d1feu): goto L_D1FE;
    case RC_ADDR(0x0000d204u): goto L_D204;
    case RC_ADDR(0x0000d208u): goto L_D208;
    case RC_ADDR(0x0000d20au): goto L_D20A;
    case RC_ADDR(0x0000d20eu): goto L_D20E;
    case RC_ADDR(0x0000d214u): goto L_D214;
    case RC_ADDR(0x0000d218u): goto L_D218;
    case RC_ADDR(0x0000d21cu): goto L_D21C;
    case RC_ADDR(0x0000d21eu): goto L_D21E;
    case RC_ADDR(0x0000d222u): goto L_D222;
    case RC_ADDR(0x0000d226u): goto L_D226;
    case RC_ADDR(0x0000d22au): goto L_D22A;
    case RC_ADDR(0x0000d22eu): goto L_D22E;
    case RC_ADDR(0x0000d232u): goto L_D232;
    case RC_ADDR(0x0000d236u): goto L_D236;
    case RC_ADDR(0x0000d23au): goto L_D23A;
    case RC_ADDR(0x0000d23eu): goto L_D23E;
    case RC_ADDR(0x0000d242u): goto L_D242;
    case RC_ADDR(0x0000d246u): goto L_D246;
    case RC_ADDR(0x0000d24au): goto L_D24A;
    case RC_ADDR(0x0000d24eu): goto L_D24E;
    case RC_ADDR(0x0000d250u): goto L_D250;
    case RC_ADDR(0x0000d254u): goto L_D254;
    case RC_ADDR(0x0000d25cu): goto L_D25C;
    case RC_ADDR(0x0000d260u): goto L_D260;
    case RC_ADDR(0x0000d262u): goto L_D262;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CF4E:
    /* 0000cf4e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000cf4eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_CF52:
    /* 0000cf52   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cf52u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CF56:
    /* 0000cf56   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cf56u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF5A:
    /* 0000cf5a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf5au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF5C:
    /* 0000cf5c   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000cf5cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_CF60:
    /* 0000cf60   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cf60u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_CF64:
    /* 0000cf64   2  beq 0000cf74 */
    c->pc = RC_ADDR(0x0000cf64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CF74;

L_CF66:
    /* 0000cf66   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cf66u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF6A:
    /* 0000cf6a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf6au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF6C:
    /* 0000cf6c   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000cf6cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_CF70:
    /* 0000cf70   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cf70u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CF74:
    /* 0000cf74   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cf74u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CF78:
    /* 0000cf78   8  cmpi.l #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cf78u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000005u);

L_CF80:
    /* 0000cf80   2  blt 0000cf56 */
    c->pc = RC_ADDR(0x0000cf80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CF56; }

L_CF82:
    /* 0000cf82   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0000cf82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_CF86:
    /* 0000cf86   2  bne 0000cf8c */
    c->pc = RC_ADDR(0x0000cf86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CF8C;

L_CF88:
    /* 0000cf88   4  clr.w (ffff9914,A4) */
    c->pc = RC_ADDR(0x0000cf88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x66ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CF8C:
    /* 0000cf8c   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0000cf8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_CF90:
    /* 0000cf90   4  beq 0000d260 */
    c->pc = RC_ADDR(0x0000cf90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D260;

L_CF94:
    /* 0000cf94   4  tst.w (ffff9914,A4) */
    c->pc = RC_ADDR(0x0000cf94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66ecu));
    rc_set_nzvc(c, t0, RC_W);

L_CF98:
    /* 0000cf98   4  bne 0000d260 */
    c->pc = RC_ADDR(0x0000cf98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D260;

L_CF9C:
    /* 0000cf9c   6  move.w #1,(ffff9914,A4) */
    c->pc = RC_ADDR(0x0000cf9cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x66ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFA2:
    /* 0000cfa2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cfa2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFA6:
    /* 0000cfa6   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000cfa6u);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x0000cfaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_CFAA:
    /* 0000cfaa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cfaau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CFAC:
    /* 0000cfac   6  cmpi.w #a,(ca8,A4) */
    c->pc = RC_ADDR(0x0000cfacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca8u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_CFB2:
    /* 0000cfb2   4  bge 0000d260 */
    c->pc = RC_ADDR(0x0000cfb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_D260;

L_CFB6:
    /* 0000cfb6   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cfb6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CFBA:
    /* 0000cfba   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cfbau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFBE:
    /* 0000cfbe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cfbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CFC0:
    /* 0000cfc0   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000cfc0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_CFC4:
    /* 0000cfc4   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cfc4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_CFC8:
    /* 0000cfc8   4  bne 0000d250 */
    c->pc = RC_ADDR(0x0000cfc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D250;

L_CFCC:
    /* 0000cfcc   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cfccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFD0:
    /* 0000cfd0   4  move.l (e18,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cfd0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFD4:
    /* 0000cfd4   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000cfd4u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFD8:
    /* 0000cfd8   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000cfd8u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000cfdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CFDC:
    /* 0000cfdc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000cfdcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_CFDE:
    /* 0000cfde   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000cfdeu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFE2:
    /* 0000cfe2   4  move.w (acc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cfe2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFE6:
    /* 0000cfe6   4  move.w (aca,A4),D0 */
    c->pc = RC_ADDR(0x0000cfe6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFEA:
    /* 0000cfea   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000cfeau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CFEC:
    /* 0000cfec   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000cfecu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFEE:
    /* 0000cfee   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000cfeeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFF2:
    /* 0000cff2   4  move.l (ac4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cff2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFF6:
    /* 0000cff6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cff6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFFA:
    /* 0000cffa   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000cffau);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000cffeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CFFE:
    /* 0000cffe   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000cffeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D002:
    /* 0000d002   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d002u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D006:
    /* 0000d006   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d006u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D008:
    /* 0000d008   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000d008u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_D00C:
    /* 0000d00c   4  move.w (aca,A4),D1 */
    c->pc = RC_ADDR(0x0000d00cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D010:
    /* 0000d010   4  sub.w #1b,D1 */
    c->pc = RC_ADDR(0x0000d010u);
    rc_step(c, m, 10);
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D014:
    /* 0000d014   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d014u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D018:
    /* 0000d018   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d018u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D01C:
    /* 0000d01c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d01cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D01E:
    /* 0000d01e   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000d01eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_D022:
    /* 0000d022   4  move.w (acc,A4),D1 */
    c->pc = RC_ADDR(0x0000d022u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D026:
    /* 0000d026   4  sub.w #3a,D1 */
    c->pc = RC_ADDR(0x0000d026u);
    rc_step(c, m, 10);
    t0 = 0x0000003au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D02A:
    /* 0000d02a   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d02au);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D02E:
    /* 0000d02e   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000d02eu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D032:
    /* 0000d032   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d032u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D036:
    /* 0000d036   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d036u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D038:
    /* 0000d038   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000d038u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_D03C:
    /* 0000d03c   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d03cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D040:
    /* 0000d040   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d040u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D044:
    /* 0000d044   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d044u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D046:
    /* 0000d046   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000d046u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_D04A:
    /* 0000d04a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d04au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D04E:
    /* 0000d04e   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d04eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D052:
    /* 0000d052   4  move.l (e18,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d052u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D056:
    /* 0000d056   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d056u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D05A:
    /* 0000d05a   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d05au);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d05eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D05E:
    /* 0000d05e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d05eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D062:
    /* 0000d062   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d062u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D066:
    /* 0000d066   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d066u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D068:
    /* 0000d068   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000d068u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_D06C:
    /* 0000d06c   4  move.w (e56,A4),D1 */
    c->pc = RC_ADDR(0x0000d06cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D070:
    /* 0000d070   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x0000d070u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D074:
    /* 0000d074   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d074u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D078:
    /* 0000d078   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d078u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D07A:
    /* 0000d07a   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d07au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D07C:
    /* 0000d07c   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000d07cu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000d080u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_D080:
    /* 0000d080   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d080u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D082:
    /* 0000d082   4  cmp.w #7,D0 */
    c->pc = RC_ADDR(0x0000d082u);
    rc_step(c, m, 8);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D086:
    /* 0000d086   2  bgt 0000d0f0 */
    c->pc = RC_ADDR(0x0000d086u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D0F0;

L_D088:
    /* 0000d088   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d088u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D08C:
    /* 0000d08c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d08cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D08E:
    /* 0000d08e   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000d08eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_D092:
    /* 0000d092   4  move.w (e58,A4),D1 */
    c->pc = RC_ADDR(0x0000d092u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D096:
    /* 0000d096   4  add.w #a,D1 */
    c->pc = RC_ADDR(0x0000d096u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D09A:
    /* 0000d09a   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d09au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D09E:
    /* 0000d09e   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d09eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D0A0:
    /* 0000d0a0   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d0a0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0A2:
    /* 0000d0a2   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000d0a2u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000d0a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_D0A6:
    /* 0000d0a6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d0a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D0A8:
    /* 0000d0a8   4  cmp.w #3,D0 */
    c->pc = RC_ADDR(0x0000d0a8u);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D0AC:
    /* 0000d0ac   2  bgt 0000d0f0 */
    c->pc = RC_ADDR(0x0000d0acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D0F0;

L_D0AE:
    /* 0000d0ae   4  tst.w (c92,A4) */
    c->pc = RC_ADDR(0x0000d0aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc92u));
    rc_set_nzvc(c, t0, RC_W);

L_D0B2:
    /* 0000d0b2   2  bne 0000d0f0 */
    c->pc = RC_ADDR(0x0000d0b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D0F0;

L_D0B4:
    /* 0000d0b4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d0b4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D0B6:
    /* 0000d0b6   4  move.l (e20,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d0b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0BA:
    /* 0000d0ba   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d0bau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0BE:
    /* 0000d0be   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000d0beu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000d0c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_D0C2:
    /* 0000d0c2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d0c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D0C4:
    /* 0000d0c4   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x0000d0c4u);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0C8:
    /* 0000d0c8   4  move.w (e58,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d0c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0CC:
    /* 0000d0cc   4  move.w (e56,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d0ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0D0:
    /* 0000d0d0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d0d0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D0D2:
    /* 0000d0d2   4  pea (0000d264) */
    c->pc = RC_ADDR(0x0000d0d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d264u));

L_D0D6:
    /* 0000d0d6   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000d0d6u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000d0dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_D0DA:
    /* 0000d0da   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d0dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D0DC:
    /* 0000d0dc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d0dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0DE:
    /* 0000d0de   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d0deu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0E2:
    /* 0000d0e2   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d0e2u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d0e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D0E6:
    /* 0000d0e6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d0e6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D0EA:
    /* 0000d0ea   6  move.w #1,(c92,A4) */
    c->pc = RC_ADDR(0x0000d0eau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0F0:
    /* 0000d0f0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d0f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0F4:
    /* 0000d0f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d0f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D0F6:
    /* 0000d0f6   4  lea (adc,A4),A0 */
    c->pc = RC_ADDR(0x0000d0f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xadcu);

L_D0FA:
    /* 0000d0fa   4  move.w (e56,A4),D1 */
    c->pc = RC_ADDR(0x0000d0fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0FE:
    /* 0000d0fe   4  add.w #2e,D1 */
    c->pc = RC_ADDR(0x0000d0feu);
    rc_step(c, m, 10);
    t0 = 0x0000002eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D102:
    /* 0000d102   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d102u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D106:
    /* 0000d106   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d106u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D108:
    /* 0000d108   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d108u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D10A:
    /* 0000d10a   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000d10au);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000d10eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_D10E:
    /* 0000d10e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d10eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D110:
    /* 0000d110   4  cmp.w #7,D0 */
    c->pc = RC_ADDR(0x0000d110u);
    rc_step(c, m, 8);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D114:
    /* 0000d114   2  bgt 0000d17e */
    c->pc = RC_ADDR(0x0000d114u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D17E;

L_D116:
    /* 0000d116   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d116u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D11A:
    /* 0000d11a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d11au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D11C:
    /* 0000d11c   4  lea (ae6,A4),A0 */
    c->pc = RC_ADDR(0x0000d11cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xae6u);

L_D120:
    /* 0000d120   4  move.w (e58,A4),D1 */
    c->pc = RC_ADDR(0x0000d120u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D124:
    /* 0000d124   4  add.w #a,D1 */
    c->pc = RC_ADDR(0x0000d124u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D128:
    /* 0000d128   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d128u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D12C:
    /* 0000d12c   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d12cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D12E:
    /* 0000d12e   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d12eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D130:
    /* 0000d130   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000d130u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000d134u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_D134:
    /* 0000d134   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d134u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D136:
    /* 0000d136   4  cmp.w #3,D0 */
    c->pc = RC_ADDR(0x0000d136u);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D13A:
    /* 0000d13a   2  bgt 0000d17e */
    c->pc = RC_ADDR(0x0000d13au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D17E;

L_D13C:
    /* 0000d13c   4  tst.w (c94,A4) */
    c->pc = RC_ADDR(0x0000d13cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc94u));
    rc_set_nzvc(c, t0, RC_W);

L_D140:
    /* 0000d140   2  bne 0000d17e */
    c->pc = RC_ADDR(0x0000d140u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D17E;

L_D142:
    /* 0000d142   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d142u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D144:
    /* 0000d144   4  move.l (e24,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d144u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D148:
    /* 0000d148   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d148u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D14C:
    /* 0000d14c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000d14cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000d150u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_D150:
    /* 0000d150   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d150u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D152:
    /* 0000d152   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x0000d152u);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D156:
    /* 0000d156   4  move.w (e58,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d156u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe58u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D15A:
    /* 0000d15a   4  move.w (e56,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d15au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe56u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D15E:
    /* 0000d15e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d15eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D160:
    /* 0000d160   4  pea (0000d26c) */
    c->pc = RC_ADDR(0x0000d160u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d26cu));

L_D164:
    /* 0000d164   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000d164u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000d168u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_D168:
    /* 0000d168   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d168u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D16A:
    /* 0000d16a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d16au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D16C:
    /* 0000d16c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d16cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D170:
    /* 0000d170   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d170u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d174u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D174:
    /* 0000d174   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d174u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D178:
    /* 0000d178   6  move.w #1,(c94,A4) */
    c->pc = RC_ADDR(0x0000d178u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc94u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D17E:
    /* 0000d17e   4  move.w (c92,A4),D0 */
    c->pc = RC_ADDR(0x0000d17eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D182:
    /* 0000d182   4  and.w (c94,A4),D0 */
    c->pc = RC_ADDR(0x0000d182u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc94u));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D186:
    /* 0000d186   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x0000d186u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D18A:
    /* 0000d18a   2  bne 0000d204 */
    c->pc = RC_ADDR(0x0000d18au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D204;

L_D18C:
    /* 0000d18c   6  move.w #2,(c92,A4) */
    c->pc = RC_ADDR(0x0000d18cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xc92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D192:
    /* 0000d192   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d192u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D194:
    /* 0000d194   4  move.l (e28,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d194u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe28u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D198:
    /* 0000d198   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d198u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D19C:
    /* 0000d19c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000d19cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000d1a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_D1A0:
    /* 0000d1a0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d1a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D1A2:
    /* 0000d1a2   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x0000d1a2u);
    rc_step(c, m, 12);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1A6:
    /* 0000d1a6   4  move.w (928,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1a6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x928u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1AA:
    /* 0000d1aa   4  move.w (926,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1aau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x926u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1AE:
    /* 0000d1ae   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d1aeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D1B0:
    /* 0000d1b0   4  move.l (e2c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1B4:
    /* 0000d1b4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d1b4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1B8:
    /* 0000d1b8   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000d1b8u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000d1bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_D1BC:
    /* 0000d1bc   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d1bcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D1C0:
    /* 0000d1c0   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d1c0u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1C4:
    /* 0000d1c4   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000d1c4u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1C8:
    /* 0000d1c8   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1CC:
    /* 0000d1cc   4  move.w (e46,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe46u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1D0:
    /* 0000d1d0   4  move.l (e3c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1D4:
    /* 0000d1d4   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d1d4u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d1d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D1D8:
    /* 0000d1d8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d1d8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D1DC:
    /* 0000d1dc   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000d1dcu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1E0:
    /* 0000d1e0   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000d1e0u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1E4:
    /* 0000d1e4   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1E8:
    /* 0000d1e8   4  move.w (e46,A4),D0 */
    c->pc = RC_ADDR(0x0000d1e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1EC:
    /* 0000d1ec   4  add.w #3e8,D0 */
    c->pc = RC_ADDR(0x0000d1ecu);
    rc_step(c, m, 10);
    t0 = 0x000003e8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D1F0:
    /* 0000d1f0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d1f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1F2:
    /* 0000d1f2   4  move.l (e3c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d1f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1F6:
    /* 0000d1f6   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000d1f6u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000d1fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_D1FA:
    /* 0000d1fa   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d1fau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D1FE:
    /* 0000d1fe   6  move.w #3e7,(e5a,A4) */
    c->pc = RC_ADDR(0x0000d1feu);
    rc_step(c, m, 16);
    t0 = 0x000003e7u;
    rc_wr16(c, m, (c->a[4] + 0xe5au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D204:
    /* 0000d204   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d204u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D208:
    /* 0000d208   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d208u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D20A:
    /* 0000d20a   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x0000d20au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_D20E:
    /* 0000d20e   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d20eu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D214:
    /* 0000d214   4  addq.w #1,(ca8,A4) */
    c->pc = RC_ADDR(0x0000d214u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xca8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D218:
    /* 0000d218   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000d218u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D21C:
    /* 0000d21c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000d21cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D21E:
    /* 0000d21e   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d21eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D222:
    /* 0000d222   4  move.w (cb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d222u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcb8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D226:
    /* 0000d226   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d226u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D22A:
    /* 0000d22a   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000d22au);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000d22eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_D22E:
    /* 0000d22e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d22eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D232:
    /* 0000d232   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000d232u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D236:
    /* 0000d236   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d236u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D23A:
    /* 0000d23a   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d23au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D23E:
    /* 0000d23e   4  move.w (cb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d23eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcb8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D242:
    /* 0000d242   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d242u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D246:
    /* 0000d246   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000d246u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000d24au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_D24A:
    /* 0000d24a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000d24au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_D24E:
    /* 0000d24e   2  bra 0000d260 */
    c->pc = RC_ADDR(0x0000d24eu);
    rc_step(c, m, 10);
    goto L_D260;

L_D250:
    /* 0000d250   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d250u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D254:
    /* 0000d254   8  cmpi.l #5,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d254u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000005u);

L_D25C:
    /* 0000d25c   4  blt 0000cfba */
    c->pc = RC_ADDR(0x0000d25cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CFBA; }

L_D260:
    /* 0000d260   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d260u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D262:
    /* 0000d262   2  rts */
    c->pc = RC_ADDR(0x0000d262u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
