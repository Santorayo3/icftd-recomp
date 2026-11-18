/* fn_00016ff8 - 818 byte(s), 219 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016ff8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016ff8u): goto L_16FF8;
    case RC_ADDR(0x00016ffcu): goto L_16FFC;
    case RC_ADDR(0x00017000u): goto L_17000;
    case RC_ADDR(0x00017004u): goto L_17004;
    case RC_ADDR(0x00017008u): goto L_17008;
    case RC_ADDR(0x0001700cu): goto L_1700C;
    case RC_ADDR(0x0001700eu): goto L_1700E;
    case RC_ADDR(0x00017012u): goto L_17012;
    case RC_ADDR(0x00017014u): goto L_17014;
    case RC_ADDR(0x00017018u): goto L_17018;
    case RC_ADDR(0x0001701au): goto L_1701A;
    case RC_ADDR(0x00017020u): goto L_17020;
    case RC_ADDR(0x00017026u): goto L_17026;
    case RC_ADDR(0x0001702cu): goto L_1702C;
    case RC_ADDR(0x00017032u): goto L_17032;
    case RC_ADDR(0x00017036u): goto L_17036;
    case RC_ADDR(0x0001703au): goto L_1703A;
    case RC_ADDR(0x0001703cu): goto L_1703C;
    case RC_ADDR(0x0001703eu): goto L_1703E;
    case RC_ADDR(0x00017042u): goto L_17042;
    case RC_ADDR(0x00017046u): goto L_17046;
    case RC_ADDR(0x00017048u): goto L_17048;
    case RC_ADDR(0x0001704cu): goto L_1704C;
    case RC_ADDR(0x00017050u): goto L_17050;
    case RC_ADDR(0x00017054u): goto L_17054;
    case RC_ADDR(0x00017056u): goto L_17056;
    case RC_ADDR(0x00017058u): goto L_17058;
    case RC_ADDR(0x0001705cu): goto L_1705C;
    case RC_ADDR(0x00017060u): goto L_17060;
    case RC_ADDR(0x00017062u): goto L_17062;
    case RC_ADDR(0x00017066u): goto L_17066;
    case RC_ADDR(0x0001706au): goto L_1706A;
    case RC_ADDR(0x00017070u): goto L_17070;
    case RC_ADDR(0x00017074u): goto L_17074;
    case RC_ADDR(0x00017078u): goto L_17078;
    case RC_ADDR(0x0001707au): goto L_1707A;
    case RC_ADDR(0x0001707eu): goto L_1707E;
    case RC_ADDR(0x00017084u): goto L_17084;
    case RC_ADDR(0x00017088u): goto L_17088;
    case RC_ADDR(0x0001708au): goto L_1708A;
    case RC_ADDR(0x0001708cu): goto L_1708C;
    case RC_ADDR(0x00017090u): goto L_17090;
    case RC_ADDR(0x00017092u): goto L_17092;
    case RC_ADDR(0x00017094u): goto L_17094;
    case RC_ADDR(0x00017098u): goto L_17098;
    case RC_ADDR(0x0001709cu): goto L_1709C;
    case RC_ADDR(0x0001709eu): goto L_1709E;
    case RC_ADDR(0x000170a2u): goto L_170A2;
    case RC_ADDR(0x000170a4u): goto L_170A4;
    case RC_ADDR(0x000170a6u): goto L_170A6;
    case RC_ADDR(0x000170aau): goto L_170AA;
    case RC_ADDR(0x000170b0u): goto L_170B0;
    case RC_ADDR(0x000170b4u): goto L_170B4;
    case RC_ADDR(0x000170b6u): goto L_170B6;
    case RC_ADDR(0x000170bau): goto L_170BA;
    case RC_ADDR(0x000170beu): goto L_170BE;
    case RC_ADDR(0x000170c0u): goto L_170C0;
    case RC_ADDR(0x000170c4u): goto L_170C4;
    case RC_ADDR(0x000170c8u): goto L_170C8;
    case RC_ADDR(0x000170ccu): goto L_170CC;
    case RC_ADDR(0x000170d0u): goto L_170D0;
    case RC_ADDR(0x000170d2u): goto L_170D2;
    case RC_ADDR(0x000170d6u): goto L_170D6;
    case RC_ADDR(0x000170dau): goto L_170DA;
    case RC_ADDR(0x000170e0u): goto L_170E0;
    case RC_ADDR(0x000170e4u): goto L_170E4;
    case RC_ADDR(0x000170e8u): goto L_170E8;
    case RC_ADDR(0x000170ecu): goto L_170EC;
    case RC_ADDR(0x000170eeu): goto L_170EE;
    case RC_ADDR(0x000170f0u): goto L_170F0;
    case RC_ADDR(0x000170f4u): goto L_170F4;
    case RC_ADDR(0x000170f8u): goto L_170F8;
    case RC_ADDR(0x000170fcu): goto L_170FC;
    case RC_ADDR(0x00017100u): goto L_17100;
    case RC_ADDR(0x00017104u): goto L_17104;
    case RC_ADDR(0x00017106u): goto L_17106;
    case RC_ADDR(0x00017108u): goto L_17108;
    case RC_ADDR(0x0001710cu): goto L_1710C;
    case RC_ADDR(0x00017110u): goto L_17110;
    case RC_ADDR(0x00017112u): goto L_17112;
    case RC_ADDR(0x00017114u): goto L_17114;
    case RC_ADDR(0x00017118u): goto L_17118;
    case RC_ADDR(0x0001711cu): goto L_1711C;
    case RC_ADDR(0x00017120u): goto L_17120;
    case RC_ADDR(0x00017124u): goto L_17124;
    case RC_ADDR(0x00017128u): goto L_17128;
    case RC_ADDR(0x0001712cu): goto L_1712C;
    case RC_ADDR(0x00017132u): goto L_17132;
    case RC_ADDR(0x00017136u): goto L_17136;
    case RC_ADDR(0x00017138u): goto L_17138;
    case RC_ADDR(0x0001713au): goto L_1713A;
    case RC_ADDR(0x0001713eu): goto L_1713E;
    case RC_ADDR(0x00017144u): goto L_17144;
    case RC_ADDR(0x00017148u): goto L_17148;
    case RC_ADDR(0x0001714au): goto L_1714A;
    case RC_ADDR(0x0001714cu): goto L_1714C;
    case RC_ADDR(0x00017150u): goto L_17150;
    case RC_ADDR(0x00017156u): goto L_17156;
    case RC_ADDR(0x0001715au): goto L_1715A;
    case RC_ADDR(0x0001715eu): goto L_1715E;
    case RC_ADDR(0x00017162u): goto L_17162;
    case RC_ADDR(0x00017168u): goto L_17168;
    case RC_ADDR(0x0001716au): goto L_1716A;
    case RC_ADDR(0x0001716eu): goto L_1716E;
    case RC_ADDR(0x00017170u): goto L_17170;
    case RC_ADDR(0x00017176u): goto L_17176;
    case RC_ADDR(0x00017178u): goto L_17178;
    case RC_ADDR(0x0001717eu): goto L_1717E;
    case RC_ADDR(0x00017180u): goto L_17180;
    case RC_ADDR(0x00017186u): goto L_17186;
    case RC_ADDR(0x0001718au): goto L_1718A;
    case RC_ADDR(0x0001718eu): goto L_1718E;
    case RC_ADDR(0x00017194u): goto L_17194;
    case RC_ADDR(0x00017196u): goto L_17196;
    case RC_ADDR(0x0001719au): goto L_1719A;
    case RC_ADDR(0x0001719eu): goto L_1719E;
    case RC_ADDR(0x000171a0u): goto L_171A0;
    case RC_ADDR(0x000171a6u): goto L_171A6;
    case RC_ADDR(0x000171aau): goto L_171AA;
    case RC_ADDR(0x000171acu): goto L_171AC;
    case RC_ADDR(0x000171aeu): goto L_171AE;
    case RC_ADDR(0x000171b2u): goto L_171B2;
    case RC_ADDR(0x000171b6u): goto L_171B6;
    case RC_ADDR(0x000171b8u): goto L_171B8;
    case RC_ADDR(0x000171bau): goto L_171BA;
    case RC_ADDR(0x000171beu): goto L_171BE;
    case RC_ADDR(0x000171c4u): goto L_171C4;
    case RC_ADDR(0x000171c8u): goto L_171C8;
    case RC_ADDR(0x000171cau): goto L_171CA;
    case RC_ADDR(0x000171ccu): goto L_171CC;
    case RC_ADDR(0x000171d0u): goto L_171D0;
    case RC_ADDR(0x000171d6u): goto L_171D6;
    case RC_ADDR(0x000171d8u): goto L_171D8;
    case RC_ADDR(0x000171dcu): goto L_171DC;
    case RC_ADDR(0x000171e0u): goto L_171E0;
    case RC_ADDR(0x000171e4u): goto L_171E4;
    case RC_ADDR(0x000171e8u): goto L_171E8;
    case RC_ADDR(0x000171eeu): goto L_171EE;
    case RC_ADDR(0x000171f0u): goto L_171F0;
    case RC_ADDR(0x000171f6u): goto L_171F6;
    case RC_ADDR(0x000171fcu): goto L_171FC;
    case RC_ADDR(0x000171feu): goto L_171FE;
    case RC_ADDR(0x00017204u): goto L_17204;
    case RC_ADDR(0x0001720au): goto L_1720A;
    case RC_ADDR(0x0001720cu): goto L_1720C;
    case RC_ADDR(0x00017212u): goto L_17212;
    case RC_ADDR(0x00017218u): goto L_17218;
    case RC_ADDR(0x0001721au): goto L_1721A;
    case RC_ADDR(0x00017220u): goto L_17220;
    case RC_ADDR(0x00017224u): goto L_17224;
    case RC_ADDR(0x00017228u): goto L_17228;
    case RC_ADDR(0x0001722au): goto L_1722A;
    case RC_ADDR(0x0001722eu): goto L_1722E;
    case RC_ADDR(0x00017232u): goto L_17232;
    case RC_ADDR(0x00017236u): goto L_17236;
    case RC_ADDR(0x00017238u): goto L_17238;
    case RC_ADDR(0x0001723cu): goto L_1723C;
    case RC_ADDR(0x00017240u): goto L_17240;
    case RC_ADDR(0x00017242u): goto L_17242;
    case RC_ADDR(0x00017244u): goto L_17244;
    case RC_ADDR(0x00017248u): goto L_17248;
    case RC_ADDR(0x0001724au): goto L_1724A;
    case RC_ADDR(0x0001724eu): goto L_1724E;
    case RC_ADDR(0x00017250u): goto L_17250;
    case RC_ADDR(0x00017254u): goto L_17254;
    case RC_ADDR(0x00017258u): goto L_17258;
    case RC_ADDR(0x0001725cu): goto L_1725C;
    case RC_ADDR(0x0001725eu): goto L_1725E;
    case RC_ADDR(0x00017260u): goto L_17260;
    case RC_ADDR(0x00017264u): goto L_17264;
    case RC_ADDR(0x00017266u): goto L_17266;
    case RC_ADDR(0x0001726au): goto L_1726A;
    case RC_ADDR(0x0001726cu): goto L_1726C;
    case RC_ADDR(0x00017270u): goto L_17270;
    case RC_ADDR(0x00017274u): goto L_17274;
    case RC_ADDR(0x00017278u): goto L_17278;
    case RC_ADDR(0x0001727au): goto L_1727A;
    case RC_ADDR(0x0001727eu): goto L_1727E;
    case RC_ADDR(0x00017282u): goto L_17282;
    case RC_ADDR(0x00017286u): goto L_17286;
    case RC_ADDR(0x0001728au): goto L_1728A;
    case RC_ADDR(0x0001728eu): goto L_1728E;
    case RC_ADDR(0x00017292u): goto L_17292;
    case RC_ADDR(0x00017296u): goto L_17296;
    case RC_ADDR(0x0001729cu): goto L_1729C;
    case RC_ADDR(0x0001729eu): goto L_1729E;
    case RC_ADDR(0x000172a2u): goto L_172A2;
    case RC_ADDR(0x000172a6u): goto L_172A6;
    case RC_ADDR(0x000172aau): goto L_172AA;
    case RC_ADDR(0x000172aeu): goto L_172AE;
    case RC_ADDR(0x000172b2u): goto L_172B2;
    case RC_ADDR(0x000172b6u): goto L_172B6;
    case RC_ADDR(0x000172bau): goto L_172BA;
    case RC_ADDR(0x000172beu): goto L_172BE;
    case RC_ADDR(0x000172c2u): goto L_172C2;
    case RC_ADDR(0x000172c6u): goto L_172C6;
    case RC_ADDR(0x000172cau): goto L_172CA;
    case RC_ADDR(0x000172ceu): goto L_172CE;
    case RC_ADDR(0x000172d2u): goto L_172D2;
    case RC_ADDR(0x000172d6u): goto L_172D6;
    case RC_ADDR(0x000172d8u): goto L_172D8;
    case RC_ADDR(0x000172dcu): goto L_172DC;
    case RC_ADDR(0x000172e0u): goto L_172E0;
    case RC_ADDR(0x000172e4u): goto L_172E4;
    case RC_ADDR(0x000172e6u): goto L_172E6;
    case RC_ADDR(0x000172eau): goto L_172EA;
    case RC_ADDR(0x000172eeu): goto L_172EE;
    case RC_ADDR(0x000172f4u): goto L_172F4;
    case RC_ADDR(0x000172f6u): goto L_172F6;
    case RC_ADDR(0x000172fcu): goto L_172FC;
    case RC_ADDR(0x00017302u): goto L_17302;
    case RC_ADDR(0x00017304u): goto L_17304;
    case RC_ADDR(0x0001730au): goto L_1730A;
    case RC_ADDR(0x00017310u): goto L_17310;
    case RC_ADDR(0x00017312u): goto L_17312;
    case RC_ADDR(0x00017318u): goto L_17318;
    case RC_ADDR(0x0001731eu): goto L_1731E;
    case RC_ADDR(0x00017320u): goto L_17320;
    case RC_ADDR(0x00017326u): goto L_17326;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16FF8:
    /* 00016ff8   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00016ff8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_16FFC:
    /* 00016ffc   4  tst.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00016ffcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4da8u));
    rc_set_nzvc(c, t0, RC_W);

L_17000:
    /* 00017000   4  beq 000170b0 */
    c->pc = RC_ADDR(0x00017000u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_170B0;

L_17004:
    /* 00017004   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x00017004u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17008:
    /* 00017008   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x00017008u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_1700C:
    /* 0001700c   2  beq 0001708c */
    c->pc = RC_ADDR(0x0001700cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1708C;

L_1700E:
    /* 0001700e   4  tst.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x0001700eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_set_nzvc(c, t0, RC_W);

L_17012:
    /* 00017012   2  bne 0001708c */
    c->pc = RC_ADDR(0x00017012u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1708C;

L_17014:
    /* 00017014   4  tst.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00017014u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_set_nzvc(c, t0, RC_W);

L_17018:
    /* 00017018   2  bne 0001708c */
    c->pc = RC_ADDR(0x00017018u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1708C;

L_1701A:
    /* 0001701a   6  move.w #1,(1846,A4) */
    c->pc = RC_ADDR(0x0001701au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1846u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17020:
    /* 00017020   6  move.w #1,(6e8,A4) */
    c->pc = RC_ADDR(0x00017020u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17026:
    /* 00017026   6  move.w (6ee,A4),(6f2,A4) */
    c->pc = RC_ADDR(0x00017026u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_wr16(c, m, (c->a[4] + 0x6f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1702C:
    /* 0001702c   6  move.w (6f0,A4),(6f4,A4) */
    c->pc = RC_ADDR(0x0001702cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_wr16(c, m, (c->a[4] + 0x6f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17032:
    /* 00017032   4  clr.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00017032u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ab2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17036:
    /* 00017036   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017036u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1703A:
    /* 0001703a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001703au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1703C:
    /* 0001703c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001703cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1703E:
    /* 0001703e   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x0001703eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_17042:
    /* 00017042   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00017042u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17046:
    /* 00017046   2  subq.w #5,D1 */
    c->pc = RC_ADDR(0x00017046u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17048:
    /* 00017048   4  sub.w (17f4,A4),D1 */
    c->pc = RC_ADDR(0x00017048u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1704C:
    /* 0001704c   4  move.w D1,(6fc,A4) */
    c->pc = RC_ADDR(0x0001704cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17050:
    /* 00017050   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017050u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17054:
    /* 00017054   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017054u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17056:
    /* 00017056   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017056u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17058:
    /* 00017058   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x00017058u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_1705C:
    /* 0001705c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001705cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17060:
    /* 00017060   2  addq.w #5,D1 */
    c->pc = RC_ADDR(0x00017060u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17062:
    /* 00017062   4  sub.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x00017062u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17066:
    /* 00017066   4  move.w D1,(6fe,A4) */
    c->pc = RC_ADDR(0x00017066u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6feu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1706A:
    /* 0001706a   6  move.w #ffff,(1c3e,A4) */
    c->pc = RC_ADDR(0x0001706au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1c3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17070:
    /* 00017070   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00017070u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17074:
    /* 00017074   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x00017074u);
    rc_step(c, m, 18);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x00017078u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bbeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af72u);
    return;

L_17078:
    /* 00017078   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017078u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1707A:
    /* 0001707a   4  clr.w (1c4a,A4) */
    c->pc = RC_ADDR(0x0001707au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1707E:
    /* 0001707e   6  move.w #1,(1c64,A4) */
    c->pc = RC_ADDR(0x0001707eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1c64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17084:
    /* 00017084   4  clr.w (ffffb256,A4) */
    c->pc = RC_ADDR(0x00017084u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4daau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17088:
    /* 00017088   2  unlk A5 */
    c->pc = RC_ADDR(0x00017088u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1708A:
    /* 0001708a   2  rts */
    c->pc = RC_ADDR(0x0001708au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1708C:
    /* 0001708c   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x0001708cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17090:
    /* 00017090   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017090u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17092:
    /* 00017092   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017092u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17094:
    /* 00017094   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00017094u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_17098:
    /* 00017098   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00017098u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1709C:
    /* 0001709c   2  bne 000170b0 */
    c->pc = RC_ADDR(0x0001709cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_170B0;

L_1709E:
    /* 0001709e   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x0001709eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_170A2:
    /* 000170a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000170a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_170A4:
    /* 000170a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000170a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_170A6:
    /* 000170a6   4  lea (1c66,A4),A0 */
    c->pc = RC_ADDR(0x000170a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c66u);

L_170AA:
    /* 000170aa   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000170aau);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_170B0:
    /* 000170b0   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x000170b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_170B4:
    /* 000170b4   2  beq 000170d6 */
    c->pc = RC_ADDR(0x000170b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_170D6;

L_170B6:
    /* 000170b6   4  addq.w #1,(1c4a,A4) */
    c->pc = RC_ADDR(0x000170b6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1c4au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_170BA:
    /* 000170ba   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x000170bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_170BE:
    /* 000170be   2  beq 000170d2 */
    c->pc = RC_ADDR(0x000170beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_170D2;

L_170C0:
    /* 000170c0   4  clr.w (1c64,A4) */
    c->pc = RC_ADDR(0x000170c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c64u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_170C4:
    /* 000170c4   4  move.w (ffffb24a,A4),-(A7) */
    c->pc = RC_ADDR(0x000170c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_170C8:
    /* 000170c8   4  move.w (1c3e,A4),-(A7) */
    c->pc = RC_ADDR(0x000170c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_170CC:
    /* 000170cc   4  jsr (00016bb6) */
    c->pc = RC_ADDR(0x000170ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000170d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016bb6u);
    return;

L_170D0:
    /* 000170d0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000170d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_170D2:
    /* 000170d2   4  bra 000172ce */
    c->pc = RC_ADDR(0x000170d2u);
    rc_step(c, m, 10);
    goto L_172CE;

L_170D6:
    /* 000170d6   4  clr.w (1c4a,A4) */
    c->pc = RC_ADDR(0x000170d6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_170DA:
    /* 000170da   6  move.w #1,(1c64,A4) */
    c->pc = RC_ADDR(0x000170dau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1c64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_170E0:
    /* 000170e0   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x000170e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_170E4:
    /* 000170e4   4  beq 0001729e */
    c->pc = RC_ADDR(0x000170e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1729E;

L_170E8:
    /* 000170e8   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000170e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_170EC:
    /* 000170ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000170ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_170EE:
    /* 000170ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000170eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_170F0:
    /* 000170f0   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x000170f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_170F4:
    /* 000170f4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000170f4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_170F8:
    /* 000170f8   4  cmp.w (ffffb250,A4),D1 */
    c->pc = RC_ADDR(0x000170f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_170FC:
    /* 000170fc   4  beq 000171e0 */
    c->pc = RC_ADDR(0x000170fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_171E0;

L_17100:
    /* 00017100   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017100u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17104:
    /* 00017104   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017104u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17106:
    /* 00017106   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017106u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17108:
    /* 00017108   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x00017108u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_1710C:
    /* 0001710c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001710cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17110:
    /* 00017110   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017110u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17112:
    /* 00017112   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00017112u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_17114:
    /* 00017114   4  lea (ffffb486,A4),A0 */
    c->pc = RC_ADDR(0x00017114u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4b7au);

L_17118:
    /* 00017118   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00017118u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1711C:
    /* 0001711c   4  cmp.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x0001711cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17120:
    /* 00017120   4  beq 000171e0 */
    c->pc = RC_ADDR(0x00017120u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_171E0;

L_17124:
    /* 00017124   4  tst.w (1c40,A4) */
    c->pc = RC_ADDR(0x00017124u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c40u));
    rc_set_nzvc(c, t0, RC_W);

L_17128:
    /* 00017128   4  bne 000171d8 */
    c->pc = RC_ADDR(0x00017128u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_171D8;

L_1712C:
    /* 0001712c   6  move.w #4,(1c40,A4) */
    c->pc = RC_ADDR(0x0001712cu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1c40u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17132:
    /* 00017132   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017132u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17136:
    /* 00017136   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017136u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17138:
    /* 00017138   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017138u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1713A:
    /* 0001713a   4  lea (1bf6,A4),A0 */
    c->pc = RC_ADDR(0x0001713au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bf6u);

L_1713E:
    /* 0001713e   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001713eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17144:
    /* 00017144   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00017144u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17148:
    /* 00017148   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017148u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1714A:
    /* 0001714a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001714au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1714C:
    /* 0001714c   4  lea (ffffb460,A4),A0 */
    c->pc = RC_ADDR(0x0001714cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4ba0u);

L_17150:
    /* 00017150   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00017150u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17156:
    /* 00017156   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00017156u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1715A:
    /* 0001715a   4  sub.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001715au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1715E:
    /* 0001715e   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001715eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17162:
    /* 00017162   6  cmpi.w #4,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00017162u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_17168:
    /* 00017168   2  bgt 00017178 */
    c->pc = RC_ADDR(0x00017168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_17178;

L_1716A:
    /* 0001716a   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001716au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1716E:
    /* 0001716e   2  bge 00017180 */
    c->pc = RC_ADDR(0x0001716eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17180;

L_17170:
    /* 00017170   6  cmpi.w #fffc,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00017170u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x0000fffcu);

L_17176:
    /* 00017176   2  ble 00017180 */
    c->pc = RC_ADDR(0x00017176u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_17180;

L_17178:
    /* 00017178   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00017178u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1717E:
    /* 0001717e   2  bra 00017186 */
    c->pc = RC_ADDR(0x0001717eu);
    rc_step(c, m, 10);
    goto L_17186;

L_17180:
    /* 00017180   6  move.w #ffff,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00017180u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17186:
    /* 00017186   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00017186u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1718A:
    /* 0001718a   4  add.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001718au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1718E:
    /* 0001718e   6  cmpi.w #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001718eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_17194:
    /* 00017194   2  blt 0001719a */
    c->pc = RC_ADDR(0x00017194u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1719A;

L_17196:
    /* 00017196   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00017196u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1719A:
    /* 0001719a   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001719au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1719E:
    /* 0001719e   2  bge 000171a6 */
    c->pc = RC_ADDR(0x0001719eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_171A6;

L_171A0:
    /* 000171a0   6  move.w #7,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000171a0u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171A6:
    /* 000171a6   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000171a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_171AA:
    /* 000171aa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000171aau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_171AC:
    /* 000171ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000171acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_171AE:
    /* 000171ae   4  lea (ffffb476,A4),A0 */
    c->pc = RC_ADDR(0x000171aeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4b8au);

L_171B2:
    /* 000171b2   4  move.w (1c3e,A4),D1 */
    c->pc = RC_ADDR(0x000171b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_171B6:
    /* 000171b6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000171b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_171B8:
    /* 000171b8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000171b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_171BA:
    /* 000171ba   4  lea (1bee,A4),A1 */
    c->pc = RC_ADDR(0x000171bau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1beeu);

L_171BE:
    /* 000171be   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000171beu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171C4:
    /* 000171c4   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x000171c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_171C8:
    /* 000171c8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000171c8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_171CA:
    /* 000171ca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000171cau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_171CC:
    /* 000171cc   4  lea (1bf6,A4),A0 */
    c->pc = RC_ADDR(0x000171ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bf6u);

L_171D0:
    /* 000171d0   6  move.w (fffffff8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000171d0u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171D6:
    /* 000171d6   2  bra 000171dc */
    c->pc = RC_ADDR(0x000171d6u);
    rc_step(c, m, 10);
    goto L_171DC;

L_171D8:
    /* 000171d8   4  subq.w #1,(1c40,A4) */
    c->pc = RC_ADDR(0x000171d8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1c40u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_171DC:
    /* 000171dc   4  bra 00017274 */
    c->pc = RC_ADDR(0x000171dcu);
    rc_step(c, m, 10);
    goto L_17274;

L_171E0:
    /* 000171e0   4  clr.w (1c70,A4) */
    c->pc = RC_ADDR(0x000171e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c70u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_171E4:
    /* 000171e4   4  clr.w (1c6e,A4) */
    c->pc = RC_ADDR(0x000171e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c6eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_171E8:
    /* 000171e8   6  btst #0,(ffffb251,A4) */
    c->pc = RC_ADDR(0x000171e8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_171EE:
    /* 000171ee   2  beq 000171f6 */
    c->pc = RC_ADDR(0x000171eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_171F6;

L_171F0:
    /* 000171f0   6  move.w #2,(1c6e,A4) */
    c->pc = RC_ADDR(0x000171f0u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1c6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_171F6:
    /* 000171f6   6  btst #1,(ffffb251,A4) */
    c->pc = RC_ADDR(0x000171f6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_171FC:
    /* 000171fc   2  beq 00017204 */
    c->pc = RC_ADDR(0x000171fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17204;

L_171FE:
    /* 000171fe   6  move.w #fffe,(1c6e,A4) */
    c->pc = RC_ADDR(0x000171feu);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[4] + 0x1c6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17204:
    /* 00017204   6  btst #3,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00017204u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1720A:
    /* 0001720a   2  beq 00017212 */
    c->pc = RC_ADDR(0x0001720au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17212;

L_1720C:
    /* 0001720c   6  move.w #fffe,(1c70,A4) */
    c->pc = RC_ADDR(0x0001720cu);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[4] + 0x1c70u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17212:
    /* 00017212   6  btst #2,(ffffb251,A4) */
    c->pc = RC_ADDR(0x00017212u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4dafu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17218:
    /* 00017218   2  beq 00017220 */
    c->pc = RC_ADDR(0x00017218u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17220;

L_1721A:
    /* 0001721a   6  move.w #2,(1c70,A4) */
    c->pc = RC_ADDR(0x0001721au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1c70u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17220:
    /* 00017220   4  move.w (1c70,A4),-(A7) */
    c->pc = RC_ADDR(0x00017220u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c70u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17224:
    /* 00017224   4  jsr (00016664) */
    c->pc = RC_ADDR(0x00017224u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017228u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016664u);
    return;

L_17228:
    /* 00017228   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017228u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1722A:
    /* 0001722a   4  move.w D0,(fffffa30,A4) */
    c->pc = RC_ADDR(0x0001722au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1722E:
    /* 0001722e   4  move.w (1c6e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001722eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c6eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17232:
    /* 00017232   4  jsr (00016664) */
    c->pc = RC_ADDR(0x00017232u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017236u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016664u);
    return;

L_17236:
    /* 00017236   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017236u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17238:
    /* 00017238   4  move.w D0,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00017238u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1723C:
    /* 0001723c   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x0001723cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17240:
    /* 00017240   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017240u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17242:
    /* 00017242   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017242u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17244:
    /* 00017244   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00017244u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_17248:
    /* 00017248   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00017248u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1724A:
    /* 0001724a   4  move.w (1c6e,A4),D0 */
    c->pc = RC_ADDR(0x0001724au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c6eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1724E:
    /* 0001724e   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0001724eu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17250:
    /* 00017250   4  move.w (1c6e,A4),D0 */
    c->pc = RC_ADDR(0x00017250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c6eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17254:
    /* 00017254   4  add.w D0,(6fc,A4) */
    c->pc = RC_ADDR(0x00017254u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17258:
    /* 00017258   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017258u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1725C:
    /* 0001725c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001725cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1725E:
    /* 0001725e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001725eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17260:
    /* 00017260   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x00017260u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_17264:
    /* 00017264   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00017264u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_17266:
    /* 00017266   4  move.w (1c70,A4),D0 */
    c->pc = RC_ADDR(0x00017266u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c70u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1726A:
    /* 0001726a   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0001726au);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1726C:
    /* 0001726c   4  move.w (1c70,A4),D0 */
    c->pc = RC_ADDR(0x0001726cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c70u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17270:
    /* 00017270   4  add.w D0,(6fe,A4) */
    c->pc = RC_ADDR(0x00017270u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17274:
    /* 00017274   4  tst.w (1c72,A4) */
    c->pc = RC_ADDR(0x00017274u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c72u));
    rc_set_nzvc(c, t0, RC_W);

L_17278:
    /* 00017278   2  bne 0001729c */
    c->pc = RC_ADDR(0x00017278u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1729C;

L_1727A:
    /* 0001727a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0001727au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1727E:
    /* 0001727e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001727eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17282:
    /* 00017282   4  move.l (1c98,A4),-(A7) */
    c->pc = RC_ADDR(0x00017282u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c98u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17286:
    /* 00017286   4  move.w (1c94,A4),-(A7) */
    c->pc = RC_ADDR(0x00017286u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c94u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1728A:
    /* 0001728a   4  move.l (1c8c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001728au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1728E:
    /* 0001728e   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001728eu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00017292u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_17292:
    /* 00017292   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00017292u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_17296:
    /* 00017296   6  move.w #1,(1c72,A4) */
    c->pc = RC_ADDR(0x00017296u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1c72u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1729C:
    /* 0001729c   2  bra 000172ce */
    c->pc = RC_ADDR(0x0001729cu);
    rc_step(c, m, 10);
    goto L_172CE;

L_1729E:
    /* 0001729e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0001729eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172A2:
    /* 000172a2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000172a2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172A6:
    /* 000172a6   4  move.l (1c9c,A4),-(A7) */
    c->pc = RC_ADDR(0x000172a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c9cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_172AA:
    /* 000172aa   4  move.w (1c96,A4),-(A7) */
    c->pc = RC_ADDR(0x000172aau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c96u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172AE:
    /* 000172ae   4  move.l (1c90,A4),-(A7) */
    c->pc = RC_ADDR(0x000172aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_172B2:
    /* 000172b2   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000172b2u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000172b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_172B6:
    /* 000172b6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000172b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_172BA:
    /* 000172ba   4  clr.w (1c72,A4) */
    c->pc = RC_ADDR(0x000172bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c72u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172BE:
    /* 000172be   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x000172beu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172C2:
    /* 000172c2   4  clr.w (1c70,A4) */
    c->pc = RC_ADDR(0x000172c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c70u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172C6:
    /* 000172c6   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x000172c6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172CA:
    /* 000172ca   4  clr.w (1c6e,A4) */
    c->pc = RC_ADDR(0x000172cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c6eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172CE:
    /* 000172ce   4  move.w (1c3e,A4),-(A7) */
    c->pc = RC_ADDR(0x000172ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172D2:
    /* 000172d2   4  jsr (000168d8) */
    c->pc = RC_ADDR(0x000172d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000172d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000168d8u);
    return;

L_172D6:
    /* 000172d6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000172d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_172D8:
    /* 000172d8   4  move.w D0,(1b96,A4) */
    c->pc = RC_ADDR(0x000172d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_172DC:
    /* 000172dc   4  move.w (1c3e,A4),-(A7) */
    c->pc = RC_ADDR(0x000172dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172E0:
    /* 000172e0   4  jsr (000168fc) */
    c->pc = RC_ADDR(0x000172e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000172e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000168fcu);
    return;

L_172E4:
    /* 000172e4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000172e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_172E6:
    /* 000172e6   4  move.w D0,(1b98,A4) */
    c->pc = RC_ADDR(0x000172e6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b98u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_172EA:
    /* 000172ea   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x000172eau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_172EE:
    /* 000172ee   6  cmpi.w #be,(6fc,A4) */
    c->pc = RC_ADDR(0x000172eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_172F4:
    /* 000172f4   2  ble 000172fc */
    c->pc = RC_ADDR(0x000172f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_172FC;

L_172F6:
    /* 000172f6   6  bset #0,(701,A4) */
    c->pc = RC_ADDR(0x000172f6u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_172FC:
    /* 000172fc   6  cmpi.w #6e,(6fc,A4) */
    c->pc = RC_ADDR(0x000172fcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x0000006eu);

L_17302:
    /* 00017302   2  bge 0001730a */
    c->pc = RC_ADDR(0x00017302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1730A;

L_17304:
    /* 00017304   6  bset #1,(701,A4) */
    c->pc = RC_ADDR(0x00017304u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1730A:
    /* 0001730a   6  cmpi.w #96,(6fe,A4) */
    c->pc = RC_ADDR(0x0001730au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x00000096u);

L_17310:
    /* 00017310   2  ble 00017318 */
    c->pc = RC_ADDR(0x00017310u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_17318;

L_17312:
    /* 00017312   6  bset #2,(701,A4) */
    c->pc = RC_ADDR(0x00017312u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_17318:
    /* 00017318   6  cmpi.w #32,(6fe,A4) */
    c->pc = RC_ADDR(0x00017318u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x00000032u);

L_1731E:
    /* 0001731e   2  bge 00017326 */
    c->pc = RC_ADDR(0x0001731eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_17326;

L_17320:
    /* 00017320   6  bset #3,(701,A4) */
    c->pc = RC_ADDR(0x00017320u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_17326:
    /* 00017326   4  bra 00017088 */
    c->pc = RC_ADDR(0x00017326u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_17088;

}
