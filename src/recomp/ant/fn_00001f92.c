/* fn_00001f92 - 618 byte(s), 168 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001f92(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00001f92u): goto L_1F92;
    case RC_ADDR(0x00001f96u): goto L_1F96;
    case RC_ADDR(0x00001f9au): goto L_1F9A;
    case RC_ADDR(0x00001f9eu): goto L_1F9E;
    case RC_ADDR(0x00001fa2u): goto L_1FA2;
    case RC_ADDR(0x00001fa8u): goto L_1FA8;
    case RC_ADDR(0x00001faeu): goto L_1FAE;
    case RC_ADDR(0x00001fb4u): goto L_1FB4;
    case RC_ADDR(0x00001fbau): goto L_1FBA;
    case RC_ADDR(0x00001fbeu): goto L_1FBE;
    case RC_ADDR(0x00001fc2u): goto L_1FC2;
    case RC_ADDR(0x00001fc6u): goto L_1FC6;
    case RC_ADDR(0x00001fcau): goto L_1FCA;
    case RC_ADDR(0x00001fceu): goto L_1FCE;
    case RC_ADDR(0x00001fd4u): goto L_1FD4;
    case RC_ADDR(0x00001fd8u): goto L_1FD8;
    case RC_ADDR(0x00001fdcu): goto L_1FDC;
    case RC_ADDR(0x00001fdeu): goto L_1FDE;
    case RC_ADDR(0x00001fe2u): goto L_1FE2;
    case RC_ADDR(0x00001fe6u): goto L_1FE6;
    case RC_ADDR(0x00001feau): goto L_1FEA;
    case RC_ADDR(0x00001fecu): goto L_1FEC;
    case RC_ADDR(0x00001ff0u): goto L_1FF0;
    case RC_ADDR(0x00001ff6u): goto L_1FF6;
    case RC_ADDR(0x00001ffau): goto L_1FFA;
    case RC_ADDR(0x00001ffeu): goto L_1FFE;
    case RC_ADDR(0x00002002u): goto L_2002;
    case RC_ADDR(0x00002004u): goto L_2004;
    case RC_ADDR(0x00002008u): goto L_2008;
    case RC_ADDR(0x0000200cu): goto L_200C;
    case RC_ADDR(0x00002010u): goto L_2010;
    case RC_ADDR(0x00002012u): goto L_2012;
    case RC_ADDR(0x00002016u): goto L_2016;
    case RC_ADDR(0x0000201au): goto L_201A;
    case RC_ADDR(0x0000201eu): goto L_201E;
    case RC_ADDR(0x00002020u): goto L_2020;
    case RC_ADDR(0x00002024u): goto L_2024;
    case RC_ADDR(0x00002028u): goto L_2028;
    case RC_ADDR(0x0000202cu): goto L_202C;
    case RC_ADDR(0x0000202eu): goto L_202E;
    case RC_ADDR(0x00002034u): goto L_2034;
    case RC_ADDR(0x00002038u): goto L_2038;
    case RC_ADDR(0x0000203au): goto L_203A;
    case RC_ADDR(0x0000203eu): goto L_203E;
    case RC_ADDR(0x00002042u): goto L_2042;
    case RC_ADDR(0x00002046u): goto L_2046;
    case RC_ADDR(0x0000204cu): goto L_204C;
    case RC_ADDR(0x0000204eu): goto L_204E;
    case RC_ADDR(0x00002050u): goto L_2050;
    case RC_ADDR(0x00002052u): goto L_2052;
    case RC_ADDR(0x00002058u): goto L_2058;
    case RC_ADDR(0x0000205au): goto L_205A;
    case RC_ADDR(0x00002060u): goto L_2060;
    case RC_ADDR(0x00002062u): goto L_2062;
    case RC_ADDR(0x00002066u): goto L_2066;
    case RC_ADDR(0x00002068u): goto L_2068;
    case RC_ADDR(0x0000206eu): goto L_206E;
    case RC_ADDR(0x00002072u): goto L_2072;
    case RC_ADDR(0x00002076u): goto L_2076;
    case RC_ADDR(0x0000207au): goto L_207A;
    case RC_ADDR(0x0000207eu): goto L_207E;
    case RC_ADDR(0x00002080u): goto L_2080;
    case RC_ADDR(0x00002084u): goto L_2084;
    case RC_ADDR(0x00002088u): goto L_2088;
    case RC_ADDR(0x0000208cu): goto L_208C;
    case RC_ADDR(0x00002092u): goto L_2092;
    case RC_ADDR(0x00002096u): goto L_2096;
    case RC_ADDR(0x0000209cu): goto L_209C;
    case RC_ADDR(0x000020a0u): goto L_20A0;
    case RC_ADDR(0x000020a4u): goto L_20A4;
    case RC_ADDR(0x000020a8u): goto L_20A8;
    case RC_ADDR(0x000020acu): goto L_20AC;
    case RC_ADDR(0x000020aeu): goto L_20AE;
    case RC_ADDR(0x000020b0u): goto L_20B0;
    case RC_ADDR(0x000020b2u): goto L_20B2;
    case RC_ADDR(0x000020b6u): goto L_20B6;
    case RC_ADDR(0x000020bau): goto L_20BA;
    case RC_ADDR(0x000020beu): goto L_20BE;
    case RC_ADDR(0x000020c0u): goto L_20C0;
    case RC_ADDR(0x000020c2u): goto L_20C2;
    case RC_ADDR(0x000020c4u): goto L_20C4;
    case RC_ADDR(0x000020c8u): goto L_20C8;
    case RC_ADDR(0x000020cau): goto L_20CA;
    case RC_ADDR(0x000020ccu): goto L_20CC;
    case RC_ADDR(0x000020d0u): goto L_20D0;
    case RC_ADDR(0x000020d4u): goto L_20D4;
    case RC_ADDR(0x000020d8u): goto L_20D8;
    case RC_ADDR(0x000020dau): goto L_20DA;
    case RC_ADDR(0x000020deu): goto L_20DE;
    case RC_ADDR(0x000020e2u): goto L_20E2;
    case RC_ADDR(0x000020e6u): goto L_20E6;
    case RC_ADDR(0x000020eau): goto L_20EA;
    case RC_ADDR(0x000020eeu): goto L_20EE;
    case RC_ADDR(0x000020f0u): goto L_20F0;
    case RC_ADDR(0x000020f4u): goto L_20F4;
    case RC_ADDR(0x000020f8u): goto L_20F8;
    case RC_ADDR(0x000020fau): goto L_20FA;
    case RC_ADDR(0x000020feu): goto L_20FE;
    case RC_ADDR(0x00002100u): goto L_2100;
    case RC_ADDR(0x00002102u): goto L_2102;
    case RC_ADDR(0x00002106u): goto L_2106;
    case RC_ADDR(0x0000210au): goto L_210A;
    case RC_ADDR(0x0000210cu): goto L_210C;
    case RC_ADDR(0x0000210eu): goto L_210E;
    case RC_ADDR(0x00002112u): goto L_2112;
    case RC_ADDR(0x00002114u): goto L_2114;
    case RC_ADDR(0x00002118u): goto L_2118;
    case RC_ADDR(0x0000211cu): goto L_211C;
    case RC_ADDR(0x00002120u): goto L_2120;
    case RC_ADDR(0x00002122u): goto L_2122;
    case RC_ADDR(0x00002126u): goto L_2126;
    case RC_ADDR(0x0000212au): goto L_212A;
    case RC_ADDR(0x0000212cu): goto L_212C;
    case RC_ADDR(0x00002130u): goto L_2130;
    case RC_ADDR(0x00002136u): goto L_2136;
    case RC_ADDR(0x00002138u): goto L_2138;
    case RC_ADDR(0x0000213eu): goto L_213E;
    case RC_ADDR(0x00002140u): goto L_2140;
    case RC_ADDR(0x00002144u): goto L_2144;
    case RC_ADDR(0x00002148u): goto L_2148;
    case RC_ADDR(0x0000214cu): goto L_214C;
    case RC_ADDR(0x0000214eu): goto L_214E;
    case RC_ADDR(0x00002154u): goto L_2154;
    case RC_ADDR(0x00002156u): goto L_2156;
    case RC_ADDR(0x0000215cu): goto L_215C;
    case RC_ADDR(0x0000215eu): goto L_215E;
    case RC_ADDR(0x00002162u): goto L_2162;
    case RC_ADDR(0x00002164u): goto L_2164;
    case RC_ADDR(0x00002168u): goto L_2168;
    case RC_ADDR(0x0000216au): goto L_216A;
    case RC_ADDR(0x00002170u): goto L_2170;
    case RC_ADDR(0x00002172u): goto L_2172;
    case RC_ADDR(0x00002176u): goto L_2176;
    case RC_ADDR(0x0000217au): goto L_217A;
    case RC_ADDR(0x0000217cu): goto L_217C;
    case RC_ADDR(0x00002182u): goto L_2182;
    case RC_ADDR(0x00002186u): goto L_2186;
    case RC_ADDR(0x0000218cu): goto L_218C;
    case RC_ADDR(0x0000218eu): goto L_218E;
    case RC_ADDR(0x00002194u): goto L_2194;
    case RC_ADDR(0x00002196u): goto L_2196;
    case RC_ADDR(0x0000219au): goto L_219A;
    case RC_ADDR(0x0000219cu): goto L_219C;
    case RC_ADDR(0x000021a0u): goto L_21A0;
    case RC_ADDR(0x000021a2u): goto L_21A2;
    case RC_ADDR(0x000021a6u): goto L_21A6;
    case RC_ADDR(0x000021aau): goto L_21AA;
    case RC_ADDR(0x000021aeu): goto L_21AE;
    case RC_ADDR(0x000021b0u): goto L_21B0;
    case RC_ADDR(0x000021b4u): goto L_21B4;
    case RC_ADDR(0x000021b8u): goto L_21B8;
    case RC_ADDR(0x000021bau): goto L_21BA;
    case RC_ADDR(0x000021beu): goto L_21BE;
    case RC_ADDR(0x000021c2u): goto L_21C2;
    case RC_ADDR(0x000021c6u): goto L_21C6;
    case RC_ADDR(0x000021c8u): goto L_21C8;
    case RC_ADDR(0x000021ccu): goto L_21CC;
    case RC_ADDR(0x000021d2u): goto L_21D2;
    case RC_ADDR(0x000021d4u): goto L_21D4;
    case RC_ADDR(0x000021dau): goto L_21DA;
    case RC_ADDR(0x000021dcu): goto L_21DC;
    case RC_ADDR(0x000021e0u): goto L_21E0;
    case RC_ADDR(0x000021e4u): goto L_21E4;
    case RC_ADDR(0x000021e8u): goto L_21E8;
    case RC_ADDR(0x000021eau): goto L_21EA;
    case RC_ADDR(0x000021f0u): goto L_21F0;
    case RC_ADDR(0x000021f2u): goto L_21F2;
    case RC_ADDR(0x000021f8u): goto L_21F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F92:
    /* 00001f92   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00001f92u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1F96:
    /* 00001f96   4  jsr (00001af8) */
    c->pc = RC_ADDR(0x00001f96u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001f9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00001af8u);
    return;

L_1F9A:
    /* 00001f9a   4  clr.w (836,A4) */
    c->pc = RC_ADDR(0x00001f9au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x836u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F9E:
    /* 00001f9e   4  clr.w (ffffd6f2,A4) */
    c->pc = RC_ADDR(0x00001f9eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x290eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FA2:
    /* 00001fa2   6  move.w #1,(ffffd6f4,A4) */
    c->pc = RC_ADDR(0x00001fa2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x290cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA8:
    /* 00001fa8   6  move.w (fffff78c,A4),(ffff83f0,A4) */
    c->pc = RC_ADDR(0x00001fa8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[4] - 0x7c10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAE:
    /* 00001fae   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001faeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB4:
    /* 00001fb4   6  move.w #1,(ffffd6f0,A4) */
    c->pc = RC_ADDR(0x00001fb4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2910u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBA:
    /* 00001fba   4  clr.w (ffff8588,A4) */
    c->pc = RC_ADDR(0x00001fbau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FBE:
    /* 00001fbe   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x00001fbeu);
    rc_step(c, m, 18);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x00001fc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cf0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec6au);
    return;

L_1FC2:
    /* 00001fc2   4  tst.w (ffffd6f4,A4) */
    c->pc = RC_ADDR(0x00001fc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x290cu));
    rc_set_nzvc(c, t0, RC_W);

L_1FC6:
    /* 00001fc6   4  beq 00002186 */
    c->pc = RC_ADDR(0x00001fc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2186;

L_1FCA:
    /* 00001fca   4  clr.w (ffffd6f4,A4) */
    c->pc = RC_ADDR(0x00001fcau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x290cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FCE:
    /* 00001fce   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00001fceu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD4:
    /* 00001fd4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001fd4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD8:
    /* 00001fd8   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00001fd8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001fdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_1FDC:
    /* 00001fdc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001fdcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FDE:
    /* 00001fde   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001fdeu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE2:
    /* 00001fe2   4  move.l (fffff744,A4),-(A7) */
    c->pc = RC_ADDR(0x00001fe2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8bcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE6:
    /* 00001fe6   4  jsr (00001d18) */
    c->pc = RC_ADDR(0x00001fe6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001feau));
    rc_depth++;
    c->pc = RC_ADDR(0x00001d18u);
    return;

L_1FEA:
    /* 00001fea   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00001feau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1FEC:
    /* 00001fec   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001fecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FF0:
    /* 00001ff0   6  cmpi.w #ff9a,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00001ff0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9au);

L_1FF6:
    /* 00001ff6   4  beq 0000211c */
    c->pc = RC_ADDR(0x00001ff6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_211C;

L_1FFA:
    /* 00001ffa   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00001ffau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FFE:
    /* 00001ffe   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00001ffeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002002u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_2002:
    /* 00002002   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00002002u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2004:
    /* 00002004   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002004u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2008:
    /* 00002008   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002008u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_200C:
    /* 0000200c   4  move.b (24,A0),D0 */
    c->pc = RC_ADDR(0x0000200cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x24u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2010:
    /* 00002010   2  ext.w D0 */
    c->pc = RC_ADDR(0x00002010u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2012:
    /* 00002012   4  move.w D0,(ffffd6f8,A4) */
    c->pc = RC_ADDR(0x00002012u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2908u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2016:
    /* 00002016   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002016u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_201A:
    /* 0000201a   4  move.b (25,A0),D0 */
    c->pc = RC_ADDR(0x0000201au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x25u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_201E:
    /* 0000201e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000201eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_2020:
    /* 00002020   4  move.w D0,(ffffd6fa,A4) */
    c->pc = RC_ADDR(0x00002020u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2906u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2024:
    /* 00002024   4  clr.w (ffffd6f6,A4) */
    c->pc = RC_ADDR(0x00002024u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x290au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2028:
    /* 00002028   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00002028u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_202C:
    /* 0000202c   2  beq 0000203e */
    c->pc = RC_ADDR(0x0000202cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_203E;

L_202E:
    /* 0000202e   6  move.w #1,(ffffd6f6,A4) */
    c->pc = RC_ADDR(0x0000202eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x290au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2034:
    /* 00002034   4  move.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00002034u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2038:
    /* 00002038   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00002038u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_203A:
    /* 0000203a   4  move.w D0,(ffffd6fa,A4) */
    c->pc = RC_ADDR(0x0000203au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2906u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_203E:
    /* 0000203e   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x0000203eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2042:
    /* 00002042   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00002042u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2046:
    /* 00002046   6  cmpi.w #ff9b,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00002046u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9bu);

L_204C:
    /* 0000204c   2  bne 00002052 */
    c->pc = RC_ADDR(0x0000204cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2052;

L_204E:
    /* 0000204e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000204eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2050:
    /* 00002050   2  rts */
    c->pc = RC_ADDR(0x00002050u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2052:
    /* 00002052   6  cmpi.w #ff9c,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00002052u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_2058:
    /* 00002058   2  bne 0000207a */
    c->pc = RC_ADDR(0x00002058u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_207A;

L_205A:
    /* 0000205a   6  cmpi.w #14,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000205au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_2060:
    /* 00002060   2  bne 00002072 */
    c->pc = RC_ADDR(0x00002060u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2072;

L_2062:
    /* 00002062   4  tst.w (ffff858a,A4) */
    c->pc = RC_ADDR(0x00002062u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a76u));
    rc_set_nzvc(c, t0, RC_W);

L_2066:
    /* 00002066   2  beq 00002072 */
    c->pc = RC_ADDR(0x00002066u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2072;

L_2068:
    /* 00002068   6  move.w #1,(ffff8460,A4) */
    c->pc = RC_ADDR(0x00002068u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7ba0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_206E:
    /* 0000206e   4  bra 00002130 */
    c->pc = RC_ADDR(0x0000206eu);
    rc_step(c, m, 10);
    goto L_2130;

L_2072:
    /* 00002072   4  jsr (ffff803e,A4) */
    c->pc = RC_ADDR(0x00002072u);
    rc_step(c, m, 18);
    /* vector 10 */
    rc_push32(c, m, RC_ADDR(0x00002076u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000026e4u);
    return;

L_2076:
    /* 00002076   4  bra 0000211c */
    c->pc = RC_ADDR(0x00002076u);
    rc_step(c, m, 10);
    goto L_211C;

L_207A:
    /* 0000207a   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000207au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_207E:
    /* 0000207e   2  beq 0000208c */
    c->pc = RC_ADDR(0x0000207eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_208C;

L_2080:
    /* 00002080   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002080u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2084:
    /* 00002084   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00002084u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00002088u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_2088:
    /* 00002088   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00002088u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000208cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_208C:
    /* 0000208c   6  cmpi.w #ffff,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000208cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_2092:
    /* 00002092   4  ble 0000211c */
    c->pc = RC_ADDR(0x00002092u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_211C;

L_2096:
    /* 00002096   6  move.w (fffff78c,A4),(ffff83f0,A4) */
    c->pc = RC_ADDR(0x00002096u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[4] - 0x7c10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_209C:
    /* 0000209c   4  jsr (00003800) */
    c->pc = RC_ADDR(0x0000209cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000020a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003800u);
    return;

L_20A0:
    /* 000020a0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000020a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A4:
    /* 000020a4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000020a4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A8:
    /* 000020a8   4  jsr (00005e3e) */
    c->pc = RC_ADDR(0x000020a8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000020acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005e3eu);
    return;

L_20AC:
    /* 000020ac   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000020acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_20AE:
    /* 000020ae   2  tst.w D0 */
    c->pc = RC_ADDR(0x000020aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20B0:
    /* 000020b0   2  bne 000020cc */
    c->pc = RC_ADDR(0x000020b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20CC;

L_20B2:
    /* 000020b2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000020b2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20B6:
    /* 000020b6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000020b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20BA:
    /* 000020ba   4  jsr (00003628) */
    c->pc = RC_ADDR(0x000020bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000020beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003628u);
    return;

L_20BE:
    /* 000020be   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000020beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_20C0:
    /* 000020c0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000020c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20C2:
    /* 000020c2   2  beq 00002130 */
    c->pc = RC_ADDR(0x000020c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2130;

L_20C4:
    /* 000020c4   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000020c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_20C8:
    /* 000020c8   2  bne 00002130 */
    c->pc = RC_ADDR(0x000020c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2130;

L_20CA:
    /* 000020ca   2  bra 00002100 */
    c->pc = RC_ADDR(0x000020cau);
    rc_step(c, m, 10);
    goto L_2100;

L_20CC:
    /* 000020cc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000020ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D0:
    /* 000020d0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000020d0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D4:
    /* 000020d4   4  jsr (000025ac) */
    c->pc = RC_ADDR(0x000020d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000020d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000025acu);
    return;

L_20D8:
    /* 000020d8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000020d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_20DA:
    /* 000020da   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000020dau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DE:
    /* 000020de   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000020deu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E2:
    /* 000020e2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000020e2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E6:
    /* 000020e6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000020e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EA:
    /* 000020ea   4  jsr (000030a6) */
    c->pc = RC_ADDR(0x000020eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000020eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000030a6u);
    return;

L_20EE:
    /* 000020ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000020eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20F0:
    /* 000020f0   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000020f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F4:
    /* 000020f4   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000020f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_20F8:
    /* 000020f8   2  bne 00002130 */
    c->pc = RC_ADDR(0x000020f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2130;

L_20FA:
    /* 000020fa   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000020fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_20FE:
    /* 000020fe   2  blt 00002130 */
    c->pc = RC_ADDR(0x000020feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_2130;

L_2100:
    /* 00002100   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002100u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2102:
    /* 00002102   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00002102u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2106:
    /* 00002106   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00002106u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000210au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_210A:
    /* 0000210a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000210au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_210C:
    /* 0000210c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000210cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_210E:
    /* 0000210e   4  jsr (00001d18) */
    c->pc = RC_ADDR(0x0000210eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001d18u);
    return;

L_2112:
    /* 00002112   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002112u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2114:
    /* 00002114   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00002114u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2118:
    /* 00002118   4  bra 0000208c */
    c->pc = RC_ADDR(0x00002118u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_208C;

L_211C:
    /* 0000211c   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x0000211cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_2120:
    /* 00002120   2  beq 00002130 */
    c->pc = RC_ADDR(0x00002120u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2130;

L_2122:
    /* 00002122   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00002122u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2126:
    /* 00002126   4  cmp.w (ffff83f0,A4),D0 */
    c->pc = RC_ADDR(0x00002126u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_212A:
    /* 0000212a   2  bne 00002130 */
    c->pc = RC_ADDR(0x0000212au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2130;

L_212C:
    /* 0000212c   4  jsr (00001f26) */
    c->pc = RC_ADDR(0x0000212cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002130u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f26u);
    return;

L_2130:
    /* 00002130   6  cmpi.w #22,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002130u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000022u);

L_2136:
    /* 00002136   2  bcs 00002140 */
    c->pc = RC_ADDR(0x00002136u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_2140;

L_2138:
    /* 00002138   6  cmpi.w #25,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002138u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000025u);

L_213E:
    /* 0000213e   2  bls 0000214e */
    c->pc = RC_ADDR(0x0000213eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_214E;

L_2140:
    /* 00002140   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002140u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2144:
    /* 00002144   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002144u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2148:
    /* 00002148   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00002148u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000214cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_214C:
    /* 0000214c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000214cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_214E:
    /* 0000214e   6  cmpi.w #5,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000214eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_2154:
    /* 00002154   2  bcs 0000215e */
    c->pc = RC_ADDR(0x00002154u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_215E;

L_2156:
    /* 00002156   6  cmpi.w #f,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002156u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_215C:
    /* 0000215c   2  bne 00002182 */
    c->pc = RC_ADDR(0x0000215cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2182;

L_215E:
    /* 0000215e   4  tst.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x0000215eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c0eu));
    rc_set_nzvc(c, t0, RC_W);

L_2162:
    /* 00002162   2  bne 00002172 */
    c->pc = RC_ADDR(0x00002162u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2172;

L_2164:
    /* 00002164   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00002164u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_2168:
    /* 00002168   2  bne 00002172 */
    c->pc = RC_ADDR(0x00002168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2172;

L_216A:
    /* 0000216a   6  move.w #b,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000216au);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2170:
    /* 00002170   2  bra 00002182 */
    c->pc = RC_ADDR(0x00002170u);
    rc_step(c, m, 10);
    goto L_2182;

L_2172:
    /* 00002172   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002172u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2176:
    /* 00002176   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x00002176u);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0000217au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_217A:
    /* 0000217a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000217au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_217C:
    /* 0000217c   6  move.w #1,(ffff85a6,A4) */
    c->pc = RC_ADDR(0x0000217cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a5au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2182:
    /* 00002182   4  bra 00001fc2 */
    c->pc = RC_ADDR(0x00002182u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FC2;

L_2186:
    /* 00002186   6  cmpi.w #21,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00002186u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000021u);

L_218C:
    /* 0000218c   2  bls 000021c8 */
    c->pc = RC_ADDR(0x0000218cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_21C8;

L_218E:
    /* 0000218e   6  cmpi.w #26,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000218eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_2194:
    /* 00002194   2  bcc 000021c8 */
    c->pc = RC_ADDR(0x00002194u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21C8;

L_2196:
    /* 00002196   4  tst.w (ffff8586,A4) */
    c->pc = RC_ADDR(0x00002196u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a7au));
    rc_set_nzvc(c, t0, RC_W);

L_219A:
    /* 0000219a   2  bne 000021c8 */
    c->pc = RC_ADDR(0x0000219au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21C8;

L_219C:
    /* 0000219c   4  tst.w (ffff858c,A4) */
    c->pc = RC_ADDR(0x0000219cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a74u));
    rc_set_nzvc(c, t0, RC_W);

L_21A0:
    /* 000021a0   2  bne 000021c8 */
    c->pc = RC_ADDR(0x000021a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21C8;

L_21A2:
    /* 000021a2   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x000021a2u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21A6:
    /* 000021a6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000021a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21AA:
    /* 000021aa   4  jsr (00005e3e) */
    c->pc = RC_ADDR(0x000021aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000021aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005e3eu);
    return;

L_21AE:
    /* 000021ae   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000021aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_21B0:
    /* 000021b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000021b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21B4:
    /* 000021b4   4  jsr (00002f16) */
    c->pc = RC_ADDR(0x000021b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000021b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002f16u);
    return;

L_21B8:
    /* 000021b8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000021b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21BA:
    /* 000021ba   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000021bau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21BE:
    /* 000021be   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000021beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C2:
    /* 000021c2   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000021c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000021c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_21C6:
    /* 000021c6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000021c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_21C8:
    /* 000021c8   4  clr.w (ffff858c,A4) */
    c->pc = RC_ADDR(0x000021c8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21CC:
    /* 000021cc   6  cmpi.w #b,(fffff78c,A4) */
    c->pc = RC_ADDR(0x000021ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_21D2:
    /* 000021d2   2  bne 000021e4 */
    c->pc = RC_ADDR(0x000021d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21E4;

L_21D4:
    /* 000021d4   6  cmpi.w #5,(ffff83f0,A4) */
    c->pc = RC_ADDR(0x000021d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c10u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_21DA:
    /* 000021da   2  bcc 000021e4 */
    c->pc = RC_ADDR(0x000021dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21E4;

L_21DC:
    /* 000021dc   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x000021dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21E0:
    /* 000021e0   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x000021e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21E4:
    /* 000021e4   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000021e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_21E8:
    /* 000021e8   2  beq 000021f8 */
    c->pc = RC_ADDR(0x000021e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21F8;

L_21EA:
    /* 000021ea   6  cmpi.w #1d,(fffff78c,A4) */
    c->pc = RC_ADDR(0x000021eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_21F0:
    /* 000021f0   2  beq 000021f8 */
    c->pc = RC_ADDR(0x000021f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21F8;

L_21F2:
    /* 000021f2   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x000021f2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F8:
    /* 000021f8   4  bra 0000204e */
    c->pc = RC_ADDR(0x000021f8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_204E;

}
