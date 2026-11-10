/* fn_00001faa - 604 byte(s), 173 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001faa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00001faau): goto L_1FAA;
    case RC_ADDR(0x00001faeu): goto L_1FAE;
    case RC_ADDR(0x00001fb2u): goto L_1FB2;
    case RC_ADDR(0x00001fb6u): goto L_1FB6;
    case RC_ADDR(0x00001fbau): goto L_1FBA;
    case RC_ADDR(0x00001fbcu): goto L_1FBC;
    case RC_ADDR(0x00001fc0u): goto L_1FC0;
    case RC_ADDR(0x00001fc4u): goto L_1FC4;
    case RC_ADDR(0x00001fc8u): goto L_1FC8;
    case RC_ADDR(0x00001fccu): goto L_1FCC;
    case RC_ADDR(0x00001fd0u): goto L_1FD0;
    case RC_ADDR(0x00001fd2u): goto L_1FD2;
    case RC_ADDR(0x00001fd6u): goto L_1FD6;
    case RC_ADDR(0x00001fdau): goto L_1FDA;
    case RC_ADDR(0x00001fdcu): goto L_1FDC;
    case RC_ADDR(0x00001fe0u): goto L_1FE0;
    case RC_ADDR(0x00001fe4u): goto L_1FE4;
    case RC_ADDR(0x00001fe6u): goto L_1FE6;
    case RC_ADDR(0x00001fe8u): goto L_1FE8;
    case RC_ADDR(0x00001feeu): goto L_1FEE;
    case RC_ADDR(0x00001ff4u): goto L_1FF4;
    case RC_ADDR(0x00001ff8u): goto L_1FF8;
    case RC_ADDR(0x00001ffcu): goto L_1FFC;
    case RC_ADDR(0x00002000u): goto L_2000;
    case RC_ADDR(0x00002004u): goto L_2004;
    case RC_ADDR(0x00002006u): goto L_2006;
    case RC_ADDR(0x00002008u): goto L_2008;
    case RC_ADDR(0x0000200au): goto L_200A;
    case RC_ADDR(0x0000200eu): goto L_200E;
    case RC_ADDR(0x00002012u): goto L_2012;
    case RC_ADDR(0x00002014u): goto L_2014;
    case RC_ADDR(0x00002018u): goto L_2018;
    case RC_ADDR(0x0000201cu): goto L_201C;
    case RC_ADDR(0x00002020u): goto L_2020;
    case RC_ADDR(0x00002022u): goto L_2022;
    case RC_ADDR(0x00002026u): goto L_2026;
    case RC_ADDR(0x0000202au): goto L_202A;
    case RC_ADDR(0x0000202cu): goto L_202C;
    case RC_ADDR(0x00002030u): goto L_2030;
    case RC_ADDR(0x00002034u): goto L_2034;
    case RC_ADDR(0x00002038u): goto L_2038;
    case RC_ADDR(0x0000203cu): goto L_203C;
    case RC_ADDR(0x00002040u): goto L_2040;
    case RC_ADDR(0x00002044u): goto L_2044;
    case RC_ADDR(0x00002048u): goto L_2048;
    case RC_ADDR(0x0000204cu): goto L_204C;
    case RC_ADDR(0x0000204eu): goto L_204E;
    case RC_ADDR(0x00002052u): goto L_2052;
    case RC_ADDR(0x00002056u): goto L_2056;
    case RC_ADDR(0x00002058u): goto L_2058;
    case RC_ADDR(0x0000205cu): goto L_205C;
    case RC_ADDR(0x0000205eu): goto L_205E;
    case RC_ADDR(0x00002062u): goto L_2062;
    case RC_ADDR(0x00002066u): goto L_2066;
    case RC_ADDR(0x00002068u): goto L_2068;
    case RC_ADDR(0x0000206cu): goto L_206C;
    case RC_ADDR(0x0000206eu): goto L_206E;
    case RC_ADDR(0x00002072u): goto L_2072;
    case RC_ADDR(0x00002074u): goto L_2074;
    case RC_ADDR(0x00002076u): goto L_2076;
    case RC_ADDR(0x0000207au): goto L_207A;
    case RC_ADDR(0x0000207eu): goto L_207E;
    case RC_ADDR(0x00002082u): goto L_2082;
    case RC_ADDR(0x00002086u): goto L_2086;
    case RC_ADDR(0x0000208au): goto L_208A;
    case RC_ADDR(0x0000208eu): goto L_208E;
    case RC_ADDR(0x00002090u): goto L_2090;
    case RC_ADDR(0x00002092u): goto L_2092;
    case RC_ADDR(0x00002094u): goto L_2094;
    case RC_ADDR(0x00002098u): goto L_2098;
    case RC_ADDR(0x0000209cu): goto L_209C;
    case RC_ADDR(0x000020a0u): goto L_20A0;
    case RC_ADDR(0x000020a4u): goto L_20A4;
    case RC_ADDR(0x000020a8u): goto L_20A8;
    case RC_ADDR(0x000020aeu): goto L_20AE;
    case RC_ADDR(0x000020b0u): goto L_20B0;
    case RC_ADDR(0x000020b4u): goto L_20B4;
    case RC_ADDR(0x000020b8u): goto L_20B8;
    case RC_ADDR(0x000020bau): goto L_20BA;
    case RC_ADDR(0x000020bcu): goto L_20BC;
    case RC_ADDR(0x000020c0u): goto L_20C0;
    case RC_ADDR(0x000020c4u): goto L_20C4;
    case RC_ADDR(0x000020c8u): goto L_20C8;
    case RC_ADDR(0x000020cau): goto L_20CA;
    case RC_ADDR(0x000020ceu): goto L_20CE;
    case RC_ADDR(0x000020d2u): goto L_20D2;
    case RC_ADDR(0x000020d6u): goto L_20D6;
    case RC_ADDR(0x000020d8u): goto L_20D8;
    case RC_ADDR(0x000020dcu): goto L_20DC;
    case RC_ADDR(0x000020e2u): goto L_20E2;
    case RC_ADDR(0x000020e6u): goto L_20E6;
    case RC_ADDR(0x000020eau): goto L_20EA;
    case RC_ADDR(0x000020ecu): goto L_20EC;
    case RC_ADDR(0x000020f0u): goto L_20F0;
    case RC_ADDR(0x000020f4u): goto L_20F4;
    case RC_ADDR(0x000020f8u): goto L_20F8;
    case RC_ADDR(0x000020fau): goto L_20FA;
    case RC_ADDR(0x000020fcu): goto L_20FC;
    case RC_ADDR(0x00002100u): goto L_2100;
    case RC_ADDR(0x00002104u): goto L_2104;
    case RC_ADDR(0x00002108u): goto L_2108;
    case RC_ADDR(0x0000210cu): goto L_210C;
    case RC_ADDR(0x00002110u): goto L_2110;
    case RC_ADDR(0x00002114u): goto L_2114;
    case RC_ADDR(0x00002118u): goto L_2118;
    case RC_ADDR(0x0000211cu): goto L_211C;
    case RC_ADDR(0x0000211eu): goto L_211E;
    case RC_ADDR(0x00002122u): goto L_2122;
    case RC_ADDR(0x00002126u): goto L_2126;
    case RC_ADDR(0x0000212au): goto L_212A;
    case RC_ADDR(0x0000212cu): goto L_212C;
    case RC_ADDR(0x00002130u): goto L_2130;
    case RC_ADDR(0x00002132u): goto L_2132;
    case RC_ADDR(0x00002136u): goto L_2136;
    case RC_ADDR(0x0000213au): goto L_213A;
    case RC_ADDR(0x0000213eu): goto L_213E;
    case RC_ADDR(0x00002142u): goto L_2142;
    case RC_ADDR(0x00002144u): goto L_2144;
    case RC_ADDR(0x00002148u): goto L_2148;
    case RC_ADDR(0x0000214cu): goto L_214C;
    case RC_ADDR(0x0000214eu): goto L_214E;
    case RC_ADDR(0x00002152u): goto L_2152;
    case RC_ADDR(0x00002156u): goto L_2156;
    case RC_ADDR(0x0000215au): goto L_215A;
    case RC_ADDR(0x0000215cu): goto L_215C;
    case RC_ADDR(0x00002162u): goto L_2162;
    case RC_ADDR(0x00002166u): goto L_2166;
    case RC_ADDR(0x00002168u): goto L_2168;
    case RC_ADDR(0x0000216eu): goto L_216E;
    case RC_ADDR(0x00002172u): goto L_2172;
    case RC_ADDR(0x00002174u): goto L_2174;
    case RC_ADDR(0x00002176u): goto L_2176;
    case RC_ADDR(0x00002178u): goto L_2178;
    case RC_ADDR(0x0000217cu): goto L_217C;
    case RC_ADDR(0x0000217eu): goto L_217E;
    case RC_ADDR(0x00002180u): goto L_2180;
    case RC_ADDR(0x00002182u): goto L_2182;
    case RC_ADDR(0x00002184u): goto L_2184;
    case RC_ADDR(0x00002188u): goto L_2188;
    case RC_ADDR(0x0000218cu): goto L_218C;
    case RC_ADDR(0x00002190u): goto L_2190;
    case RC_ADDR(0x00002194u): goto L_2194;
    case RC_ADDR(0x00002198u): goto L_2198;
    case RC_ADDR(0x0000219au): goto L_219A;
    case RC_ADDR(0x0000219eu): goto L_219E;
    case RC_ADDR(0x000021a2u): goto L_21A2;
    case RC_ADDR(0x000021a6u): goto L_21A6;
    case RC_ADDR(0x000021a8u): goto L_21A8;
    case RC_ADDR(0x000021acu): goto L_21AC;
    case RC_ADDR(0x000021aeu): goto L_21AE;
    case RC_ADDR(0x000021b2u): goto L_21B2;
    case RC_ADDR(0x000021b4u): goto L_21B4;
    case RC_ADDR(0x000021bau): goto L_21BA;
    case RC_ADDR(0x000021bcu): goto L_21BC;
    case RC_ADDR(0x000021c0u): goto L_21C0;
    case RC_ADDR(0x000021c4u): goto L_21C4;
    case RC_ADDR(0x000021c8u): goto L_21C8;
    case RC_ADDR(0x000021cau): goto L_21CA;
    case RC_ADDR(0x000021ceu): goto L_21CE;
    case RC_ADDR(0x000021d2u): goto L_21D2;
    case RC_ADDR(0x000021d4u): goto L_21D4;
    case RC_ADDR(0x000021dau): goto L_21DA;
    case RC_ADDR(0x000021deu): goto L_21DE;
    case RC_ADDR(0x000021e0u): goto L_21E0;
    case RC_ADDR(0x000021e4u): goto L_21E4;
    case RC_ADDR(0x000021e8u): goto L_21E8;
    case RC_ADDR(0x000021eau): goto L_21EA;
    case RC_ADDR(0x000021eeu): goto L_21EE;
    case RC_ADDR(0x000021f2u): goto L_21F2;
    case RC_ADDR(0x000021f8u): goto L_21F8;
    case RC_ADDR(0x000021feu): goto L_21FE;
    case RC_ADDR(0x00002202u): goto L_2202;
    case RC_ADDR(0x00002204u): goto L_2204;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FAA:
    /* 00001faa   4  link.w A5,#ffffffdc */
    c->pc = RC_ADDR(0x00001faau);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x24u;

L_1FAE:
    /* 00001fae   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00001faeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001fb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_1FB2:
    /* 00001fb2   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00001fb2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_1FB6:
    /* 00001fb6   4  cmpi.b #40,(A0) */
    c->pc = RC_ADDR(0x00001fb6u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_1FBA:
    /* 00001fba   2  bne 00001fe8 */
    c->pc = RC_ADDR(0x00001fbau);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1FE8;

L_1FBC:
    /* 00001fbc   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00001fbcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_1FC0:
    /* 00001fc0   4  addq.l #1,(10,A5) */
    c->pc = RC_ADDR(0x00001fc0u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1FC4:
    /* 00001fc4   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001fc4u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_1FC8:
    /* 00001fc8   4  pea (00002206) */
    c->pc = RC_ADDR(0x00001fc8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002206u));

L_1FCC:
    /* 00001fcc   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x00001fccu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001fd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_1FD0:
    /* 00001fd0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001fd0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FD2:
    /* 00001fd2   4  movea.l (ffffa208,A4),A0 */
    c->pc = RC_ADDR(0x00001fd2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_1FD6:
    /* 00001fd6   4  tst.w (6,A0) */
    c->pc = RC_ADDR(0x00001fd6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1FDA:
    /* 00001fda   2  beq 00001fe8 */
    c->pc = RC_ADDR(0x00001fdau);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1FE8;

L_1FDC:
    /* 00001fdc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001fdcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE0:
    /* 00001fe0   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x00001fe0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001fe4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_1FE4:
    /* 00001fe4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001fe4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FE6:
    /* 00001fe6   2  bra 00001fd2 */
    c->pc = RC_ADDR(0x00001fe6u);
    rc_step(c, m);
    rc_tick();
    goto L_1FD2;

L_1FE8:
    /* 00001fe8   6  move.w #4,(fffffec2,A4) */
    c->pc = RC_ADDR(0x00001fe8u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FEE:
    /* 00001fee   6  move.w #139,(fffffec4,A4) */
    c->pc = RC_ADDR(0x00001feeu);
    rc_step(c, m);
    t0 = 0x00000139u;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FF4:
    /* 00001ff4   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00001ff4u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1FF8:
    /* 00001ff8   4  clr.w (ffffcf48,A4) */
    c->pc = RC_ADDR(0x00001ff8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x30b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FFC:
    /* 00001ffc   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00001ffcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2000:
    /* 00002000   4  jsr (00006c4c) */
    c->pc = RC_ADDR(0x00002000u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002004u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c4cu);
    return;

L_2004:
    /* 00002004   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002004u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2006:
    /* 00002006   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002006u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2008:
    /* 00002008   2  beq 00002014 */
    c->pc = RC_ADDR(0x00002008u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2014;

L_200A:
    /* 0000200a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000200au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_200E:
    /* 0000200e   4  jsr (00006c76) */
    c->pc = RC_ADDR(0x0000200eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002012u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_2012:
    /* 00002012   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002012u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2014:
    /* 00002014   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002014u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2018:
    /* 00002018   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002018u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_201C:
    /* 0000201c   4  jsr (00006b18) */
    c->pc = RC_ADDR(0x0000201cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002020u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006b18u);
    return;

L_2020:
    /* 00002020   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00002020u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2022:
    /* 00002022   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002022u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2026:
    /* 00002026   4  tst.l (14,A5) */
    c->pc = RC_ADDR(0x00002026u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_202A:
    /* 0000202a   2  beq 00002040 */
    c->pc = RC_ADDR(0x0000202au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2040;

L_202C:
    /* 0000202c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000202cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2030:
    /* 00002030   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002030u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2034:
    /* 00002034   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00002034u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2038:
    /* 00002038   4  jsr (00006cd4) */
    c->pc = RC_ADDR(0x00002038u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000203cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006cd4u);
    return;

L_203C:
    /* 0000203c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000203cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_2040:
    /* 00002040   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002040u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2044:
    /* 00002044   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002044u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2048:
    /* 00002048   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002048u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000204cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_204C:
    /* 0000204c   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000204cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_204E:
    /* 0000204e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000204eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2052:
    /* 00002052   4  jsr (00009ec2) */
    c->pc = RC_ADDR(0x00002052u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002056u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009ec2u);
    return;

L_2056:
    /* 00002056   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002056u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2058:
    /* 00002058   4  tst.w (fffff0b8,A4) */
    c->pc = RC_ADDR(0x00002058u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf48u));
    rc_set_nzvc(c, t0, RC_W);

L_205C:
    /* 0000205c   2  beq 0000206e */
    c->pc = RC_ADDR(0x0000205cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_206E;

L_205E:
    /* 0000205e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000205eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2062:
    /* 00002062   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x00002062u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002066u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_2066:
    /* 00002066   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002066u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2068:
    /* 00002068   4  subq.w #1,(fffff0b8,A4) */
    c->pc = RC_ADDR(0x00002068u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xf48u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_206C:
    /* 0000206c   2  bra 00002058 */
    c->pc = RC_ADDR(0x0000206cu);
    rc_step(c, m);
    rc_tick();
    goto L_2058;

L_206E:
    /* 0000206e   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000206eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_2072:
    /* 00002072   2  beq 000020bc */
    c->pc = RC_ADDR(0x00002072u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_20BC;

L_2074:
    /* 00002074   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002074u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2076:
    /* 00002076   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002076u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_207A:
    /* 0000207a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000207au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_207E:
    /* 0000207e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000207eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2082:
    /* 00002082   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x00002082u);
    rc_step(c, m);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x00002086u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_2086:
    /* 00002086   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00002086u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_208A:
    /* 0000208a   4  move.l D0,(ffffffdc,A5) */
    c->pc = RC_ADDR(0x0000208au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_208E:
    /* 0000208e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000208eu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2090:
    /* 00002090   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002090u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2092:
    /* 00002092   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002092u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2094:
    /* 00002094   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002094u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2098:
    /* 00002098   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002098u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_209C:
    /* 0000209c   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000209cu);
    rc_step(c, m);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000020a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_20A0:
    /* 000020a0   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000020a0u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_20A4:
    /* 000020a4   4  movea.l (ffffffdc,A5),A0 */
    c->pc = RC_ADDR(0x000020a4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x24u));
    c->a[0] = t0;

L_20A8:
    /* 000020a8   6  cmpi.w #1,(28,A0) */
    c->pc = RC_ADDR(0x000020a8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x28u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_20AE:
    /* 000020ae   2  ble 000020bc */
    c->pc = RC_ADDR(0x000020aeu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_20BC;

L_20B0:
    /* 000020b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000020b0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20B4:
    /* 000020b4   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x000020b4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000020b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_20B8:
    /* 000020b8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000020b8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20BA:
    /* 000020ba   2  bra 000020a4 */
    c->pc = RC_ADDR(0x000020bau);
    rc_step(c, m);
    rc_tick();
    goto L_20A4;

L_20BC:
    /* 000020bc   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000020bcu);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C0:
    /* 000020c0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000020c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C4:
    /* 000020c4   4  jsr (0000510e) */
    c->pc = RC_ADDR(0x000020c4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000020c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000510eu);
    return;

L_20C8:
    /* 000020c8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000020c8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_20CA:
    /* 000020ca   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000020cau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CE:
    /* 000020ce   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000020ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D2:
    /* 000020d2   4  subq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000020d2u);
    rc_step(c, m);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20D6:
    /* 000020d6   2  tst.w D0 */
    c->pc = RC_ADDR(0x000020d6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20D8:
    /* 000020d8   4  beq 000021f2 */
    c->pc = RC_ADDR(0x000020d8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21F2;

L_20DC:
    /* 000020dc   6  move.w #1,(fffffebc,A4) */
    c->pc = RC_ADDR(0x000020dcu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x144u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E2:
    /* 000020e2   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000020e2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E6:
    /* 000020e6   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000020e6u);
    rc_step(c, m);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000020eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_20EA:
    /* 000020ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000020eau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20EC:
    /* 000020ec   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000020ecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F0:
    /* 000020f0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000020f0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20F4:
    /* 000020f4   4  jsr (00001f84) */
    c->pc = RC_ADDR(0x000020f4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000020f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f84u);
    return;

L_20F8:
    /* 000020f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000020f8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20FA:
    /* 000020fa   2  tst.w D0 */
    c->pc = RC_ADDR(0x000020fau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20FC:
    /* 000020fc   4  beq 000021da */
    c->pc = RC_ADDR(0x000020fcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21DA;

L_2100:
    /* 00002100   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00002100u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2104:
    /* 00002104   4  pea (00002210) */
    c->pc = RC_ADDR(0x00002104u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00002210u));

L_2108:
    /* 00002108   4  pea (ffffffe0,A5) */
    c->pc = RC_ADDR(0x00002108u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x20u));

L_210C:
    /* 0000210c   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0000210cu);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00002110u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_2110:
    /* 00002110   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00002110u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_2114:
    /* 00002114   4  pea (ffffffe0,A5) */
    c->pc = RC_ADDR(0x00002114u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x20u));

L_2118:
    /* 00002118   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00002118u);
    rc_step(c, m);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0000211cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_211C:
    /* 0000211c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000211cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_211E:
    /* 0000211e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000211eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2122:
    /* 00002122   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00002122u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2126:
    /* 00002126   4  jsr (00004f5c) */
    c->pc = RC_ADDR(0x00002126u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000212au));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f5cu);
    return;

L_212A:
    /* 0000212a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000212au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_212C:
    /* 0000212c   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x0000212cu);
    rc_step(c, m);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2130:
    /* 00002130   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00002130u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_2132:
    /* 00002132   4  move.w D1,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x00002132u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2136:
    /* 00002136   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00002136u);
    rc_step(c, m);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_213A:
    /* 0000213a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000213au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_213E:
    /* 0000213e   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x0000213eu);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00002142u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_2142:
    /* 00002142   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002142u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2144:
    /* 00002144   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002144u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2148:
    /* 00002148   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x00002148u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000214cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_214C:
    /* 0000214c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000214cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_214E:
    /* 0000214e   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000214eu);
    rc_step(c, m);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2152:
    /* 00002152   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00002152u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2156:
    /* 00002156   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x00002156u);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x0000215au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_215A:
    /* 0000215a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000215au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_215C:
    /* 0000215c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000215cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2162:
    /* 00002162   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002162u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_2166:
    /* 00002166   2  beq 00002194 */
    c->pc = RC_ADDR(0x00002166u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2194;

L_2168:
    /* 00002168   6  pea (00050000).l */
    c->pc = RC_ADDR(0x00002168u);
    rc_step(c, m);
    rc_push32(c, m, 0x00050000u);

L_216E:
    /* 0000216e   4  move.l (fffff0e4,A4),D0 */
    c->pc = RC_ADDR(0x0000216eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf1cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2172:
    /* 00002172   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00002172u);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2174:
    /* 00002174   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00002174u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2176:
    /* 00002176   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00002176u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2178:
    /* 00002178   4  move.l (fffff0e0,A4),D0 */
    c->pc = RC_ADDR(0x00002178u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_217C:
    /* 0000217c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000217cu);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_217E:
    /* 0000217e   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000217eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2180:
    /* 00002180   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00002180u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2182:
    /* 00002182   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002182u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2184:
    /* 00002184   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00002184u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2188:
    /* 00002188   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00002188u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_218C:
    /* 0000218c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000218cu);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00002190u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_2190:
    /* 00002190   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00002190u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_2194:
    /* 00002194   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00002194u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_2198:
    /* 00002198   2  beq 000021b4 */
    c->pc = RC_ADDR(0x00002198u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21B4;

L_219A:
    /* 0000219a   4  subq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000219au);
    rc_step(c, m);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_219E:
    /* 0000219e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000219eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21A2:
    /* 000021a2   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x000021a2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000021a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_21A6:
    /* 000021a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000021a6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21A8:
    /* 000021a8   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x000021a8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_21AC:
    /* 000021ac   2  beq 000021b2 */
    c->pc = RC_ADDR(0x000021acu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21B2;

L_21AE:
    /* 000021ae   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000021aeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21B2:
    /* 000021b2   2  bra 00002194 */
    c->pc = RC_ADDR(0x000021b2u);
    rc_step(c, m);
    rc_tick();
    goto L_2194;

L_21B4:
    /* 000021b4   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x000021b4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21BA:
    /* 000021ba   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000021bau);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21BC:
    /* 000021bc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000021bcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21C0:
    /* 000021c0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000021c0u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21C4:
    /* 000021c4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000021c4u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000021c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_21C8:
    /* 000021c8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000021c8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21CA:
    /* 000021ca   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000021cau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21CE:
    /* 000021ce   4  jsr (0000335a) */
    c->pc = RC_ADDR(0x000021ceu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000021d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000335au);
    return;

L_21D2:
    /* 000021d2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000021d2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21D4:
    /* 000021d4   6  move.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x000021d4u);
    rc_step(c, m);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21DA:
    /* 000021da   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x000021dau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_21DE:
    /* 000021de   2  beq 000021ee */
    c->pc = RC_ADDR(0x000021deu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_21EE;

L_21E0:
    /* 000021e0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000021e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21E4:
    /* 000021e4   4  jsr (0000518e) */
    c->pc = RC_ADDR(0x000021e4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000021e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000518eu);
    return;

L_21E8:
    /* 000021e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000021e8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21EA:
    /* 000021ea   4  move.l D0,(10,A5) */
    c->pc = RC_ADDR(0x000021eau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21EE:
    /* 000021ee   4  bra 000020ce */
    c->pc = RC_ADDR(0x000021eeu);
    rc_step(c, m);
    rc_tick();
    goto L_20CE;

L_21F2:
    /* 000021f2   6  move.w #13,(fffffec2,A4) */
    c->pc = RC_ADDR(0x000021f2u);
    rc_step(c, m);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F8:
    /* 000021f8   6  move.w #12c,(fffffec4,A4) */
    c->pc = RC_ADDR(0x000021f8u);
    rc_step(c, m);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21FE:
    /* 000021fe   4  jsr (ffff80ec,A4) */
    c->pc = RC_ADDR(0x000021feu);
    rc_step(c, m);
    /* vector 39 */
    rc_push32(c, m, RC_ADDR(0x00002202u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b42u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009f92u);
    return;

L_2202:
    /* 00002202   2  unlk A5 */
    c->pc = RC_ADDR(0x00002202u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2204:
    /* 00002204   2  rts */
    c->pc = RC_ADDR(0x00002204u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
