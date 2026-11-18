/* fn_0001ff16 - 808 byte(s), 239 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ff16(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ff16u): goto L_1FF16;
    case RC_ADDR(0x0001ff1au): goto L_1FF1A;
    case RC_ADDR(0x0001ff1eu): goto L_1FF1E;
    case RC_ADDR(0x0001ff22u): goto L_1FF22;
    case RC_ADDR(0x0001ff26u): goto L_1FF26;
    case RC_ADDR(0x0001ff28u): goto L_1FF28;
    case RC_ADDR(0x0001ff2cu): goto L_1FF2C;
    case RC_ADDR(0x0001ff30u): goto L_1FF30;
    case RC_ADDR(0x0001ff32u): goto L_1FF32;
    case RC_ADDR(0x0001ff36u): goto L_1FF36;
    case RC_ADDR(0x0001ff3au): goto L_1FF3A;
    case RC_ADDR(0x0001ff3cu): goto L_1FF3C;
    case RC_ADDR(0x0001ff40u): goto L_1FF40;
    case RC_ADDR(0x0001ff44u): goto L_1FF44;
    case RC_ADDR(0x0001ff46u): goto L_1FF46;
    case RC_ADDR(0x0001ff4au): goto L_1FF4A;
    case RC_ADDR(0x0001ff4eu): goto L_1FF4E;
    case RC_ADDR(0x0001ff52u): goto L_1FF52;
    case RC_ADDR(0x0001ff54u): goto L_1FF54;
    case RC_ADDR(0x0001ff58u): goto L_1FF58;
    case RC_ADDR(0x0001ff5au): goto L_1FF5A;
    case RC_ADDR(0x0001ff5eu): goto L_1FF5E;
    case RC_ADDR(0x0001ff62u): goto L_1FF62;
    case RC_ADDR(0x0001ff64u): goto L_1FF64;
    case RC_ADDR(0x0001ff68u): goto L_1FF68;
    case RC_ADDR(0x0001ff6au): goto L_1FF6A;
    case RC_ADDR(0x0001ff6cu): goto L_1FF6C;
    case RC_ADDR(0x0001ff6eu): goto L_1FF6E;
    case RC_ADDR(0x0001ff72u): goto L_1FF72;
    case RC_ADDR(0x0001ff76u): goto L_1FF76;
    case RC_ADDR(0x0001ff7au): goto L_1FF7A;
    case RC_ADDR(0x0001ff7cu): goto L_1FF7C;
    case RC_ADDR(0x0001ff80u): goto L_1FF80;
    case RC_ADDR(0x0001ff84u): goto L_1FF84;
    case RC_ADDR(0x0001ff88u): goto L_1FF88;
    case RC_ADDR(0x0001ff8au): goto L_1FF8A;
    case RC_ADDR(0x0001ff8eu): goto L_1FF8E;
    case RC_ADDR(0x0001ff92u): goto L_1FF92;
    case RC_ADDR(0x0001ff96u): goto L_1FF96;
    case RC_ADDR(0x0001ff98u): goto L_1FF98;
    case RC_ADDR(0x0001ff9au): goto L_1FF9A;
    case RC_ADDR(0x0001ff9eu): goto L_1FF9E;
    case RC_ADDR(0x0001ffa2u): goto L_1FFA2;
    case RC_ADDR(0x0001ffa4u): goto L_1FFA4;
    case RC_ADDR(0x0001ffa6u): goto L_1FFA6;
    case RC_ADDR(0x0001ffa8u): goto L_1FFA8;
    case RC_ADDR(0x0001ffacu): goto L_1FFAC;
    case RC_ADDR(0x0001ffaeu): goto L_1FFAE;
    case RC_ADDR(0x0001ffb2u): goto L_1FFB2;
    case RC_ADDR(0x0001ffb6u): goto L_1FFB6;
    case RC_ADDR(0x0001ffb8u): goto L_1FFB8;
    case RC_ADDR(0x0001ffbcu): goto L_1FFBC;
    case RC_ADDR(0x0001ffbeu): goto L_1FFBE;
    case RC_ADDR(0x0001ffc0u): goto L_1FFC0;
    case RC_ADDR(0x0001ffc4u): goto L_1FFC4;
    case RC_ADDR(0x0001ffc8u): goto L_1FFC8;
    case RC_ADDR(0x0001ffcau): goto L_1FFCA;
    case RC_ADDR(0x0001ffceu): goto L_1FFCE;
    case RC_ADDR(0x0001ffd2u): goto L_1FFD2;
    case RC_ADDR(0x0001ffd6u): goto L_1FFD6;
    case RC_ADDR(0x0001ffd8u): goto L_1FFD8;
    case RC_ADDR(0x0001ffdcu): goto L_1FFDC;
    case RC_ADDR(0x0001ffdeu): goto L_1FFDE;
    case RC_ADDR(0x0001ffe0u): goto L_1FFE0;
    case RC_ADDR(0x0001ffe4u): goto L_1FFE4;
    case RC_ADDR(0x0001ffe8u): goto L_1FFE8;
    case RC_ADDR(0x0001ffeau): goto L_1FFEA;
    case RC_ADDR(0x0001ffeeu): goto L_1FFEE;
    case RC_ADDR(0x0001fff2u): goto L_1FFF2;
    case RC_ADDR(0x0001fff6u): goto L_1FFF6;
    case RC_ADDR(0x0001fffau): goto L_1FFFA;
    case RC_ADDR(0x0001fffeu): goto L_1FFFE;
    case RC_ADDR(0x00020000u): goto L_20000;
    case RC_ADDR(0x00020004u): goto L_20004;
    case RC_ADDR(0x00020008u): goto L_20008;
    case RC_ADDR(0x0002000au): goto L_2000A;
    case RC_ADDR(0x0002000cu): goto L_2000C;
    case RC_ADDR(0x00020010u): goto L_20010;
    case RC_ADDR(0x00020014u): goto L_20014;
    case RC_ADDR(0x00020018u): goto L_20018;
    case RC_ADDR(0x0002001cu): goto L_2001C;
    case RC_ADDR(0x00020020u): goto L_20020;
    case RC_ADDR(0x00020022u): goto L_20022;
    case RC_ADDR(0x00020026u): goto L_20026;
    case RC_ADDR(0x00020028u): goto L_20028;
    case RC_ADDR(0x0002002cu): goto L_2002C;
    case RC_ADDR(0x00020030u): goto L_20030;
    case RC_ADDR(0x00020034u): goto L_20034;
    case RC_ADDR(0x00020036u): goto L_20036;
    case RC_ADDR(0x0002003au): goto L_2003A;
    case RC_ADDR(0x0002003cu): goto L_2003C;
    case RC_ADDR(0x0002003eu): goto L_2003E;
    case RC_ADDR(0x00020042u): goto L_20042;
    case RC_ADDR(0x00020046u): goto L_20046;
    case RC_ADDR(0x00020048u): goto L_20048;
    case RC_ADDR(0x0002004cu): goto L_2004C;
    case RC_ADDR(0x00020050u): goto L_20050;
    case RC_ADDR(0x00020054u): goto L_20054;
    case RC_ADDR(0x00020058u): goto L_20058;
    case RC_ADDR(0x0002005cu): goto L_2005C;
    case RC_ADDR(0x0002005eu): goto L_2005E;
    case RC_ADDR(0x00020060u): goto L_20060;
    case RC_ADDR(0x00020064u): goto L_20064;
    case RC_ADDR(0x00020066u): goto L_20066;
    case RC_ADDR(0x0002006au): goto L_2006A;
    case RC_ADDR(0x0002006eu): goto L_2006E;
    case RC_ADDR(0x00020070u): goto L_20070;
    case RC_ADDR(0x00020072u): goto L_20072;
    case RC_ADDR(0x00020076u): goto L_20076;
    case RC_ADDR(0x0002007au): goto L_2007A;
    case RC_ADDR(0x0002007eu): goto L_2007E;
    case RC_ADDR(0x00020082u): goto L_20082;
    case RC_ADDR(0x00020086u): goto L_20086;
    case RC_ADDR(0x00020088u): goto L_20088;
    case RC_ADDR(0x0002008cu): goto L_2008C;
    case RC_ADDR(0x00020090u): goto L_20090;
    case RC_ADDR(0x00020092u): goto L_20092;
    case RC_ADDR(0x00020096u): goto L_20096;
    case RC_ADDR(0x0002009au): goto L_2009A;
    case RC_ADDR(0x0002009eu): goto L_2009E;
    case RC_ADDR(0x000200a0u): goto L_200A0;
    case RC_ADDR(0x000200a2u): goto L_200A2;
    case RC_ADDR(0x000200a6u): goto L_200A6;
    case RC_ADDR(0x000200aau): goto L_200AA;
    case RC_ADDR(0x000200aeu): goto L_200AE;
    case RC_ADDR(0x000200b2u): goto L_200B2;
    case RC_ADDR(0x000200b4u): goto L_200B4;
    case RC_ADDR(0x000200b8u): goto L_200B8;
    case RC_ADDR(0x000200bcu): goto L_200BC;
    case RC_ADDR(0x000200c0u): goto L_200C0;
    case RC_ADDR(0x000200c2u): goto L_200C2;
    case RC_ADDR(0x000200c6u): goto L_200C6;
    case RC_ADDR(0x000200cau): goto L_200CA;
    case RC_ADDR(0x000200ceu): goto L_200CE;
    case RC_ADDR(0x000200d2u): goto L_200D2;
    case RC_ADDR(0x000200d4u): goto L_200D4;
    case RC_ADDR(0x000200d6u): goto L_200D6;
    case RC_ADDR(0x000200dau): goto L_200DA;
    case RC_ADDR(0x000200e0u): goto L_200E0;
    case RC_ADDR(0x000200e4u): goto L_200E4;
    case RC_ADDR(0x000200e8u): goto L_200E8;
    case RC_ADDR(0x000200ecu): goto L_200EC;
    case RC_ADDR(0x000200f0u): goto L_200F0;
    case RC_ADDR(0x000200f2u): goto L_200F2;
    case RC_ADDR(0x000200f6u): goto L_200F6;
    case RC_ADDR(0x000200fau): goto L_200FA;
    case RC_ADDR(0x000200feu): goto L_200FE;
    case RC_ADDR(0x00020100u): goto L_20100;
    case RC_ADDR(0x00020104u): goto L_20104;
    case RC_ADDR(0x00020108u): goto L_20108;
    case RC_ADDR(0x0002010cu): goto L_2010C;
    case RC_ADDR(0x0002010eu): goto L_2010E;
    case RC_ADDR(0x00020112u): goto L_20112;
    case RC_ADDR(0x00020114u): goto L_20114;
    case RC_ADDR(0x00020118u): goto L_20118;
    case RC_ADDR(0x0002011cu): goto L_2011C;
    case RC_ADDR(0x00020120u): goto L_20120;
    case RC_ADDR(0x00020124u): goto L_20124;
    case RC_ADDR(0x00020128u): goto L_20128;
    case RC_ADDR(0x0002012cu): goto L_2012C;
    case RC_ADDR(0x00020130u): goto L_20130;
    case RC_ADDR(0x00020136u): goto L_20136;
    case RC_ADDR(0x0002013au): goto L_2013A;
    case RC_ADDR(0x00020140u): goto L_20140;
    case RC_ADDR(0x00020144u): goto L_20144;
    case RC_ADDR(0x00020146u): goto L_20146;
    case RC_ADDR(0x0002014au): goto L_2014A;
    case RC_ADDR(0x0002014eu): goto L_2014E;
    case RC_ADDR(0x00020152u): goto L_20152;
    case RC_ADDR(0x00020154u): goto L_20154;
    case RC_ADDR(0x00020158u): goto L_20158;
    case RC_ADDR(0x0002015cu): goto L_2015C;
    case RC_ADDR(0x0002015eu): goto L_2015E;
    case RC_ADDR(0x00020162u): goto L_20162;
    case RC_ADDR(0x00020164u): goto L_20164;
    case RC_ADDR(0x00020166u): goto L_20166;
    case RC_ADDR(0x0002016au): goto L_2016A;
    case RC_ADDR(0x0002016eu): goto L_2016E;
    case RC_ADDR(0x00020172u): goto L_20172;
    case RC_ADDR(0x00020174u): goto L_20174;
    case RC_ADDR(0x00020178u): goto L_20178;
    case RC_ADDR(0x0002017au): goto L_2017A;
    case RC_ADDR(0x0002017eu): goto L_2017E;
    case RC_ADDR(0x00020182u): goto L_20182;
    case RC_ADDR(0x00020184u): goto L_20184;
    case RC_ADDR(0x00020186u): goto L_20186;
    case RC_ADDR(0x0002018au): goto L_2018A;
    case RC_ADDR(0x0002018cu): goto L_2018C;
    case RC_ADDR(0x00020194u): goto L_20194;
    case RC_ADDR(0x00020198u): goto L_20198;
    case RC_ADDR(0x0002019cu): goto L_2019C;
    case RC_ADDR(0x000201a0u): goto L_201A0;
    case RC_ADDR(0x000201a4u): goto L_201A4;
    case RC_ADDR(0x000201a6u): goto L_201A6;
    case RC_ADDR(0x000201a8u): goto L_201A8;
    case RC_ADDR(0x000201acu): goto L_201AC;
    case RC_ADDR(0x000201b0u): goto L_201B0;
    case RC_ADDR(0x000201b2u): goto L_201B2;
    case RC_ADDR(0x000201b4u): goto L_201B4;
    case RC_ADDR(0x000201b6u): goto L_201B6;
    case RC_ADDR(0x000201bau): goto L_201BA;
    case RC_ADDR(0x000201beu): goto L_201BE;
    case RC_ADDR(0x000201c0u): goto L_201C0;
    case RC_ADDR(0x000201c4u): goto L_201C4;
    case RC_ADDR(0x000201c6u): goto L_201C6;
    case RC_ADDR(0x000201cau): goto L_201CA;
    case RC_ADDR(0x000201ceu): goto L_201CE;
    case RC_ADDR(0x000201d2u): goto L_201D2;
    case RC_ADDR(0x000201d6u): goto L_201D6;
    case RC_ADDR(0x000201dau): goto L_201DA;
    case RC_ADDR(0x000201deu): goto L_201DE;
    case RC_ADDR(0x000201e2u): goto L_201E2;
    case RC_ADDR(0x000201e6u): goto L_201E6;
    case RC_ADDR(0x000201e8u): goto L_201E8;
    case RC_ADDR(0x000201ecu): goto L_201EC;
    case RC_ADDR(0x000201f0u): goto L_201F0;
    case RC_ADDR(0x000201f2u): goto L_201F2;
    case RC_ADDR(0x000201f6u): goto L_201F6;
    case RC_ADDR(0x000201fau): goto L_201FA;
    case RC_ADDR(0x000201feu): goto L_201FE;
    case RC_ADDR(0x00020200u): goto L_20200;
    case RC_ADDR(0x00020202u): goto L_20202;
    case RC_ADDR(0x00020206u): goto L_20206;
    case RC_ADDR(0x00020208u): goto L_20208;
    case RC_ADDR(0x0002020au): goto L_2020A;
    case RC_ADDR(0x0002020eu): goto L_2020E;
    case RC_ADDR(0x00020214u): goto L_20214;
    case RC_ADDR(0x00020216u): goto L_20216;
    case RC_ADDR(0x0002021au): goto L_2021A;
    case RC_ADDR(0x0002021eu): goto L_2021E;
    case RC_ADDR(0x00020222u): goto L_20222;
    case RC_ADDR(0x00020224u): goto L_20224;
    case RC_ADDR(0x00020226u): goto L_20226;
    case RC_ADDR(0x00020228u): goto L_20228;
    case RC_ADDR(0x0002022cu): goto L_2022C;
    case RC_ADDR(0x00020230u): goto L_20230;
    case RC_ADDR(0x00020232u): goto L_20232;
    case RC_ADDR(0x00020236u): goto L_20236;
    case RC_ADDR(0x0002023au): goto L_2023A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FF16:
    /* 0001ff16   4  link.w A5,#ffffffe4 */
    c->pc = RC_ADDR(0x0001ff16u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1cu;

L_1FF1A:
    /* 0001ff1a   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0001ff1au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_1FF1E:
    /* 0001ff1e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ff1eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF22:
    /* 0001ff22   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x0001ff22u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0001ff26u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1FF26:
    /* 0001ff26   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff26u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF28:
    /* 0001ff28   4  move.l D0,(ffffd330,A4) */
    c->pc = RC_ADDR(0x0001ff28u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cd0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF2C:
    /* 0001ff2c   4  tst.l (ffffd330,A4) */
    c->pc = RC_ADDR(0x0001ff2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd0u));
    rc_set_nzvc(c, t0, RC_L);

L_1FF30:
    /* 0001ff30   2  beq 0001ff54 */
    c->pc = RC_ADDR(0x0001ff30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FF54;

L_1FF32:
    /* 0001ff32   4  move.l (ffffd330,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ff32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF36:
    /* 0001ff36   4  jsr (ffff82c0,A4) */
    c->pc = RC_ADDR(0x0001ff36u);
    rc_step(c, m, 18);
    /* vector 117 */
    rc_push32(c, m, RC_ADDR(0x0001ff3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022688u);
    return;

L_1FF3A:
    /* 0001ff3a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001ff3au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FF3C:
    /* 0001ff3c   4  move.l (ffffd330,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ff3cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF40:
    /* 0001ff40   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x0001ff40u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001ff44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_1FF44:
    /* 0001ff44   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001ff44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FF46:
    /* 0001ff46   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0001ff46u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_1FF4A:
    /* 0001ff4a   4  pea (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001ff4au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xcu));

L_1FF4E:
    /* 0001ff4e   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ff4eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ff52u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FF52:
    /* 0001ff52   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff52u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF54:
    /* 0001ff54   4  tst.l (ffffd330,A4) */
    c->pc = RC_ADDR(0x0001ff54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd0u));
    rc_set_nzvc(c, t0, RC_L);

L_1FF58:
    /* 0001ff58   2  beq 0001ff64 */
    c->pc = RC_ADDR(0x0001ff58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FF64;

L_1FF5A:
    /* 0001ff5a   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001ff5au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FF5E:
    /* 0001ff5e   4  cmp.l (ffffd2aa,A4),D0 */
    c->pc = RC_ADDR(0x0001ff5eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d56u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1FF62:
    /* 0001ff62   2  beq 0001ff6e */
    c->pc = RC_ADDR(0x0001ff62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FF6E;

L_1FF64:
    /* 0001ff64   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x0001ff64u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x0001ff68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_1FF68:
    /* 0001ff68   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ff68u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FF6A:
    /* 0001ff6a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ff6au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FF6C:
    /* 0001ff6c   2  rts */
    c->pc = RC_ADDR(0x0001ff6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1FF6E:
    /* 0001ff6e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001ff6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1FF72:
    /* 0001ff72   4  pea (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001ff72u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xeu));

L_1FF76:
    /* 0001ff76   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ff76u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ff7au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FF7A:
    /* 0001ff7a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF7C:
    /* 0001ff7c   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001ff7cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1FF80:
    /* 0001ff80   4  pea (fffffff0,A5) */
    c->pc = RC_ADDR(0x0001ff80u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x10u));

L_1FF84:
    /* 0001ff84   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ff84u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ff88u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FF88:
    /* 0001ff88   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF8A:
    /* 0001ff8a   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001ff8au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1FF8E:
    /* 0001ff8e   4  pea (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001ff8eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x12u));

L_1FF92:
    /* 0001ff92   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ff92u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ff96u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FF96:
    /* 0001ff96   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ff96u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FF98:
    /* 0001ff98   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ff98u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1FF9A:
    /* 0001ff9a   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0001ff9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FF9E:
    /* 0001ff9e   4  add.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001ff9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FFA2:
    /* 0001ffa2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ffa2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FFA4:
    /* 0001ffa4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ffa4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1FFA6:
    /* 0001ffa6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ffa6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFA8:
    /* 0001ffa8   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001ffa8u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001ffacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1FFAC:
    /* 0001ffac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ffacu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FFAE:
    /* 0001ffae   4  move.l D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001ffaeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFB2:
    /* 0001ffb2   4  tst.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x0001ffb2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_1FFB6:
    /* 0001ffb6   2  bne 0001ffc0 */
    c->pc = RC_ADDR(0x0001ffb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FFC0;

L_1FFB8:
    /* 0001ffb8   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x0001ffb8u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x0001ffbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_1FFBC:
    /* 0001ffbc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ffbcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FFBE:
    /* 0001ffbe   2  bra 0001ff6a */
    c->pc = RC_ADDR(0x0001ffbeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FF6A;

L_1FFC0:
    /* 0001ffc0   4  clr.w (333a,A4) */
    c->pc = RC_ADDR(0x0001ffc0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x333au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FFC4:
    /* 0001ffc4   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x0001ffc4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FFC8:
    /* 0001ffc8   2  bra 00020018 */
    c->pc = RC_ADDR(0x0001ffc8u);
    rc_step(c, m, 10);
    goto L_20018;

L_1FFCA:
    /* 0001ffca   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001ffcau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1FFCE:
    /* 0001ffce   4  pea (333c,A4) */
    c->pc = RC_ADDR(0x0001ffceu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333cu));

L_1FFD2:
    /* 0001ffd2   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ffd2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ffd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FFD6:
    /* 0001ffd6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ffd6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FFD8:
    /* 0001ffd8   4  move.w (333c,A4),D0 */
    c->pc = RC_ADDR(0x0001ffd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FFDC:
    /* 0001ffdc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ffdcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FFDE:
    /* 0001ffde   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ffdeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FFE0:
    /* 0001ffe0   4  pea (333e,A4) */
    c->pc = RC_ADDR(0x0001ffe0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333eu));

L_1FFE4:
    /* 0001ffe4   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0001ffe4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ffe8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_1FFE8:
    /* 0001ffe8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ffe8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FFEA:
    /* 0001ffea   4  move.w (333c,A4),D0 */
    c->pc = RC_ADDR(0x0001ffeau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FFEE:
    /* 0001ffee   4  lea (333e,A4),A0 */
    c->pc = RC_ADDR(0x0001ffeeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x333eu);

L_1FFF2:
    /* 0001fff2   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001fff2u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1FFF6:
    /* 0001fff6   4  pea (333e,A4) */
    c->pc = RC_ADDR(0x0001fff6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333eu));

L_1FFFA:
    /* 0001fffa   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0001fffau);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0001fffeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_1FFFE:
    /* 0001fffe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fffeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20000:
    /* 00020000   4  move.w (333a,A4),D1 */
    c->pc = RC_ADDR(0x00020000u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20004:
    /* 00020004   4  addq.w #1,(333a,A4) */
    c->pc = RC_ADDR(0x00020004u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x333au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20008:
    /* 00020008   2  ext.l D1 */
    c->pc = RC_ADDR(0x00020008u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_2000A:
    /* 0002000a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0002000au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_2000C:
    /* 0002000c   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x0002000cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_20010:
    /* 00020010   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00020010u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20014:
    /* 00020014   4  addq.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00020014u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20018:
    /* 00020018   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x00020018u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2001C:
    /* 0002001c   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0002001cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20020:
    /* 00020020   2  blt 0001ffca */
    c->pc = RC_ADDR(0x00020020u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1FFCA; }

L_20022:
    /* 00020022   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00020022u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20026:
    /* 00020026   2  bra 0002007e */
    c->pc = RC_ADDR(0x00020026u);
    rc_step(c, m, 10);
    goto L_2007E;

L_20028:
    /* 00020028   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00020028u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_2002C:
    /* 0002002c   4  pea (333c,A4) */
    c->pc = RC_ADDR(0x0002002cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333cu));

L_20030:
    /* 00020030   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020030u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020034u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20034:
    /* 00020034   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020034u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20036:
    /* 00020036   4  move.w (333c,A4),D0 */
    c->pc = RC_ADDR(0x00020036u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2003A:
    /* 0002003a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002003au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2003C:
    /* 0002003c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002003cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2003E:
    /* 0002003e   4  pea (333e,A4) */
    c->pc = RC_ADDR(0x0002003eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333eu));

L_20042:
    /* 00020042   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020042u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020046u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20046:
    /* 00020046   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020046u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20048:
    /* 00020048   4  move.w (333c,A4),D0 */
    c->pc = RC_ADDR(0x00020048u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2004C:
    /* 0002004c   4  lea (333e,A4),A0 */
    c->pc = RC_ADDR(0x0002004cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x333eu);

L_20050:
    /* 00020050   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020050u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20054:
    /* 00020054   4  pea (333e,A4) */
    c->pc = RC_ADDR(0x00020054u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x333eu));

L_20058:
    /* 00020058   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00020058u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0002005cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_2005C:
    /* 0002005c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002005cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2005E:
    /* 0002005e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002005eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20060:
    /* 00020060   4  jsr (00021282) */
    c->pc = RC_ADDR(0x00020060u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020064u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021282u);
    return;

L_20064:
    /* 00020064   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020064u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20066:
    /* 00020066   4  move.w (333a,A4),D1 */
    c->pc = RC_ADDR(0x00020066u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2006A:
    /* 0002006a   4  addq.w #1,(333a,A4) */
    c->pc = RC_ADDR(0x0002006au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x333au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2006E:
    /* 0002006e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0002006eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_20070:
    /* 00020070   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00020070u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_20072:
    /* 00020072   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00020072u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_20076:
    /* 00020076   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00020076u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2007A:
    /* 0002007a   4  addq.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x0002007au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2007E:
    /* 0002007e   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x0002007eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20082:
    /* 00020082   4  cmp.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00020082u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20086:
    /* 00020086   2  blt 00020028 */
    c->pc = RC_ADDR(0x00020086u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_20028; }

L_20088:
    /* 00020088   4  clr.w (333a,A4) */
    c->pc = RC_ADDR(0x00020088u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x333au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2008C:
    /* 0002008c   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x0002008cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20090:
    /* 00020090   2  bra 000200b8 */
    c->pc = RC_ADDR(0x00020090u);
    rc_step(c, m, 10);
    goto L_200B8;

L_20092:
    /* 00020092   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00020092u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_20096:
    /* 00020096   4  move.w (333a,A4),D0 */
    c->pc = RC_ADDR(0x00020096u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2009A:
    /* 0002009a   4  addq.w #1,(333a,A4) */
    c->pc = RC_ADDR(0x0002009au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x333au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2009E:
    /* 0002009e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002009eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_200A0:
    /* 000200a0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000200a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_200A2:
    /* 000200a2   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000200a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_200A6:
    /* 000200a6   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x000200a6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_200AA:
    /* 000200aa   4  pea (a,A1) */
    c->pc = RC_ADDR(0x000200aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0xau));

L_200AE:
    /* 000200ae   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x000200aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000200b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_200B2:
    /* 000200b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000200b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_200B4:
    /* 000200b4   4  addq.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x000200b4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_200B8:
    /* 000200b8   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x000200b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200BC:
    /* 000200bc   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000200bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_200C0:
    /* 000200c0   2  blt 00020092 */
    c->pc = RC_ADDR(0x000200c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_20092; }

L_200C2:
    /* 000200c2   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x000200c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_200C6:
    /* 000200c6   4  bra 000201ce */
    c->pc = RC_ADDR(0x000200c6u);
    rc_step(c, m, 10);
    goto L_201CE;

L_200CA:
    /* 000200ca   4  move.w (333a,A4),D0 */
    c->pc = RC_ADDR(0x000200cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x333au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_200CE:
    /* 000200ce   4  addq.w #1,(333a,A4) */
    c->pc = RC_ADDR(0x000200ceu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x333au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_200D2:
    /* 000200d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000200d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_200D4:
    /* 000200d4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000200d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_200D6:
    /* 000200d6   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x000200d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_200DA:
    /* 000200da   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000200dau);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_200E0:
    /* 000200e0   4  pea (00000010).l */
    c->pc = RC_ADDR(0x000200e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000010u);

L_200E4:
    /* 000200e4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000200e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_200E8:
    /* 000200e8   4  pea (a,A0) */
    c->pc = RC_ADDR(0x000200e8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xau));

L_200EC:
    /* 000200ec   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x000200ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000200f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_200F0:
    /* 000200f0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000200f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_200F2:
    /* 000200f2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000200f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_200F6:
    /* 000200f6   4  tst.w (c,A0) */
    c->pc = RC_ADDR(0x000200f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_200FA:
    /* 000200fa   4  beq 000201ca */
    c->pc = RC_ADDR(0x000200fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_201CA;

L_200FE:
    /* 000200fe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000200feu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20100:
    /* 00020100   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020100u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20104:
    /* 00020104   4  move.w (c,A0),D0 */
    c->pc = RC_ADDR(0x00020104u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20108:
    /* 00020108   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00020108u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_2010C:
    /* 0002010c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002010cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2010E:
    /* 0002010e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0002010eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00020112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_20112:
    /* 00020112   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020112u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20114:
    /* 00020114   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020114u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20118:
    /* 00020118   4  move.l D0,(1e,A0) */
    c->pc = RC_ADDR(0x00020118u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2011C:
    /* 0002011c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0002011cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_20120:
    /* 00020120   4  tst.l (1e,A0) */
    c->pc = RC_ADDR(0x00020120u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_20124:
    /* 00020124   4  beq 000201a8 */
    c->pc = RC_ADDR(0x00020124u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_201A8;

L_20128:
    /* 00020128   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020128u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2012C:
    /* 0002012c   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x0002012cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_20130:
    /* 00020130   6  move.w (c,A0),(22,A1) */
    c->pc = RC_ADDR(0x00020130u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_wr16(c, m, (c->a[1] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20136:
    /* 00020136   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020136u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2013A:
    /* 0002013a   6  move.l (1e,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0002013au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20140:
    /* 00020140   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00020140u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20144:
    /* 00020144   2  bra 00020198 */
    c->pc = RC_ADDR(0x00020144u);
    rc_step(c, m, 10);
    goto L_20198;

L_20146:
    /* 00020146   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00020146u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_2014A:
    /* 0002014a   4  pea (ffffffe8,A5) */
    c->pc = RC_ADDR(0x0002014au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_2014E:
    /* 0002014e   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x0002014eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020152u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20152:
    /* 00020152   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020152u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20154:
    /* 00020154   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x00020154u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20158:
    /* 00020158   4  cmp.w (ffffd2a8,A4),D0 */
    c->pc = RC_ADDR(0x00020158u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d58u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2015C:
    /* 0002015c   2  beq 00020174 */
    c->pc = RC_ADDR(0x0002015cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20174;

L_2015E:
    /* 0002015e   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x0002015eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20162:
    /* 00020162   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020162u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_20164:
    /* 00020164   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020164u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20166:
    /* 00020166   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x00020166u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_2016A:
    /* 0002016a   4  movea.l (fffffff8,A5),A1 */
    c->pc = RC_ADDR(0x0002016au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[1] = t0;

L_2016E:
    /* 0002016e   4  move.l (0,A0,D0.w),(A1) */
    c->pc = RC_ADDR(0x0002016eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20172:
    /* 00020172   2  bra 0002017a */
    c->pc = RC_ADDR(0x00020172u);
    rc_step(c, m, 10);
    goto L_2017A;

L_20174:
    /* 00020174   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00020174u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_20178:
    /* 00020178   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00020178u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2017A:
    /* 0002017a   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x0002017au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_2017E:
    /* 0002017e   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0002017eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_20182:
    /* 00020182   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00020182u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_20184:
    /* 00020184   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00020184u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20186:
    /* 00020186   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020186u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002018au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_2018A:
    /* 0002018a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002018au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2018C:
    /* 0002018c   8  addi.l #12,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0002018cu);
    rc_step(c, m, 32);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000012u;
    rc_flags_add(c, RC_L, t1, 0x00000012u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20194:
    /* 00020194   4  addq.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00020194u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20198:
    /* 00020198   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00020198u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2019C:
    /* 0002019c   4  move.w (ffffffe4,A5),D0 */
    c->pc = RC_ADDR(0x0002019cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201A0:
    /* 000201a0   4  cmp.w (c,A0),D0 */
    c->pc = RC_ADDR(0x000201a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_201A4:
    /* 000201a4   2  blt 00020146 */
    c->pc = RC_ADDR(0x000201a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_20146; }

L_201A6:
    /* 000201a6   2  bra 000201ca */
    c->pc = RC_ADDR(0x000201a6u);
    rc_step(c, m, 10);
    goto L_201CA;

L_201A8:
    /* 000201a8   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000201a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201AC:
    /* 000201ac   4  add.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000201acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_201B0:
    /* 000201b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000201b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_201B2:
    /* 000201b2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000201b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_201B4:
    /* 000201b4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000201b4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_201B6:
    /* 000201b6   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x000201b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_201BA:
    /* 000201ba   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000201bau);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000201beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_201BE:
    /* 000201be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000201beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_201C0:
    /* 000201c0   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x000201c0u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x000201c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_201C4:
    /* 000201c4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000201c4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_201C6:
    /* 000201c6   4  bra 0001ff6a */
    c->pc = RC_ADDR(0x000201c6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FF6A;

L_201CA:
    /* 000201ca   4  addq.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x000201cau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_201CE:
    /* 000201ce   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x000201ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201D2:
    /* 000201d2   4  cmp.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000201d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_201D6:
    /* 000201d6   4  blt 000200ca */
    c->pc = RC_ADDR(0x000201d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_200CA; }

L_201DA:
    /* 000201da   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000201dau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_201DE:
    /* 000201de   4  pea (ffffffe8,A5) */
    c->pc = RC_ADDR(0x000201deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_201E2:
    /* 000201e2   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x000201e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000201e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_201E6:
    /* 000201e6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000201e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_201E8:
    /* 000201e8   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x000201e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201EC:
    /* 000201ec   4  cmp.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000201ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_201F0:
    /* 000201f0   2  blt 00020216 */
    c->pc = RC_ADDR(0x000201f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_20216;

L_201F2:
    /* 000201f2   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000201f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201F6:
    /* 000201f6   4  add.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000201f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_201FA:
    /* 000201fa   4  move.w (ffffffe8,A5),D1 */
    c->pc = RC_ADDR(0x000201fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_201FE:
    /* 000201fe   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000201feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20200:
    /* 00020200   2  bge 00020216 */
    c->pc = RC_ADDR(0x00020200u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_20216;

L_20202:
    /* 00020202   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x00020202u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20206:
    /* 00020206   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020206u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_20208:
    /* 00020208   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020208u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2020A:
    /* 0002020a   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x0002020au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_2020E:
    /* 0002020e   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002020eu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20214:
    /* 00020214   2  bra 0002021a */
    c->pc = RC_ADDR(0x00020214u);
    rc_step(c, m, 10);
    goto L_2021A;

L_20216:
    /* 00020216   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00020216u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2021A:
    /* 0002021a   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0002021au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2021E:
    /* 0002021e   4  add.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0002021eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20222:
    /* 00020222   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020222u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_20224:
    /* 00020224   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020224u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20226:
    /* 00020226   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020226u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20228:
    /* 00020228   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x00020228u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2022C:
    /* 0002022c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0002022cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00020230u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_20230:
    /* 00020230   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020230u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20232:
    /* 00020232   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x00020232u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x00020236u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_20236:
    /* 00020236   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00020236u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2023A:
    /* 0002023a   4  bra 0001ff6a */
    c->pc = RC_ADDR(0x0002023au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FF6A;

}
