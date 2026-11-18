/* fn_0000b0d8 - 410 byte(s), 112 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b0d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b0d8u): goto L_B0D8;
    case RC_ADDR(0x0000b0dcu): goto L_B0DC;
    case RC_ADDR(0x0000b0e2u): goto L_B0E2;
    case RC_ADDR(0x0000b0e6u): goto L_B0E6;
    case RC_ADDR(0x0000b0eau): goto L_B0EA;
    case RC_ADDR(0x0000b0ecu): goto L_B0EC;
    case RC_ADDR(0x0000b0f0u): goto L_B0F0;
    case RC_ADDR(0x0000b0f4u): goto L_B0F4;
    case RC_ADDR(0x0000b0f8u): goto L_B0F8;
    case RC_ADDR(0x0000b0feu): goto L_B0FE;
    case RC_ADDR(0x0000b102u): goto L_B102;
    case RC_ADDR(0x0000b106u): goto L_B106;
    case RC_ADDR(0x0000b10au): goto L_B10A;
    case RC_ADDR(0x0000b10eu): goto L_B10E;
    case RC_ADDR(0x0000b112u): goto L_B112;
    case RC_ADDR(0x0000b116u): goto L_B116;
    case RC_ADDR(0x0000b11au): goto L_B11A;
    case RC_ADDR(0x0000b11eu): goto L_B11E;
    case RC_ADDR(0x0000b122u): goto L_B122;
    case RC_ADDR(0x0000b128u): goto L_B128;
    case RC_ADDR(0x0000b12cu): goto L_B12C;
    case RC_ADDR(0x0000b130u): goto L_B130;
    case RC_ADDR(0x0000b134u): goto L_B134;
    case RC_ADDR(0x0000b138u): goto L_B138;
    case RC_ADDR(0x0000b13cu): goto L_B13C;
    case RC_ADDR(0x0000b140u): goto L_B140;
    case RC_ADDR(0x0000b144u): goto L_B144;
    case RC_ADDR(0x0000b148u): goto L_B148;
    case RC_ADDR(0x0000b14cu): goto L_B14C;
    case RC_ADDR(0x0000b150u): goto L_B150;
    case RC_ADDR(0x0000b154u): goto L_B154;
    case RC_ADDR(0x0000b158u): goto L_B158;
    case RC_ADDR(0x0000b15cu): goto L_B15C;
    case RC_ADDR(0x0000b160u): goto L_B160;
    case RC_ADDR(0x0000b164u): goto L_B164;
    case RC_ADDR(0x0000b168u): goto L_B168;
    case RC_ADDR(0x0000b16au): goto L_B16A;
    case RC_ADDR(0x0000b16eu): goto L_B16E;
    case RC_ADDR(0x0000b172u): goto L_B172;
    case RC_ADDR(0x0000b176u): goto L_B176;
    case RC_ADDR(0x0000b17au): goto L_B17A;
    case RC_ADDR(0x0000b17eu): goto L_B17E;
    case RC_ADDR(0x0000b182u): goto L_B182;
    case RC_ADDR(0x0000b186u): goto L_B186;
    case RC_ADDR(0x0000b18au): goto L_B18A;
    case RC_ADDR(0x0000b18eu): goto L_B18E;
    case RC_ADDR(0x0000b192u): goto L_B192;
    case RC_ADDR(0x0000b196u): goto L_B196;
    case RC_ADDR(0x0000b19au): goto L_B19A;
    case RC_ADDR(0x0000b19eu): goto L_B19E;
    case RC_ADDR(0x0000b1a2u): goto L_B1A2;
    case RC_ADDR(0x0000b1a6u): goto L_B1A6;
    case RC_ADDR(0x0000b1acu): goto L_B1AC;
    case RC_ADDR(0x0000b1b0u): goto L_B1B0;
    case RC_ADDR(0x0000b1b4u): goto L_B1B4;
    case RC_ADDR(0x0000b1b8u): goto L_B1B8;
    case RC_ADDR(0x0000b1bcu): goto L_B1BC;
    case RC_ADDR(0x0000b1c0u): goto L_B1C0;
    case RC_ADDR(0x0000b1c2u): goto L_B1C2;
    case RC_ADDR(0x0000b1c4u): goto L_B1C4;
    case RC_ADDR(0x0000b1c8u): goto L_B1C8;
    case RC_ADDR(0x0000b1ccu): goto L_B1CC;
    case RC_ADDR(0x0000b1ceu): goto L_B1CE;
    case RC_ADDR(0x0000b1d2u): goto L_B1D2;
    case RC_ADDR(0x0000b1d6u): goto L_B1D6;
    case RC_ADDR(0x0000b1d8u): goto L_B1D8;
    case RC_ADDR(0x0000b1dcu): goto L_B1DC;
    case RC_ADDR(0x0000b1e0u): goto L_B1E0;
    case RC_ADDR(0x0000b1e2u): goto L_B1E2;
    case RC_ADDR(0x0000b1e6u): goto L_B1E6;
    case RC_ADDR(0x0000b1eau): goto L_B1EA;
    case RC_ADDR(0x0000b1f4u): goto L_B1F4;
    case RC_ADDR(0x0000b1fau): goto L_B1FA;
    case RC_ADDR(0x0000b1fcu): goto L_B1FC;
    case RC_ADDR(0x0000b1feu): goto L_B1FE;
    case RC_ADDR(0x0000b202u): goto L_B202;
    case RC_ADDR(0x0000b206u): goto L_B206;
    case RC_ADDR(0x0000b20au): goto L_B20A;
    case RC_ADDR(0x0000b210u): goto L_B210;
    case RC_ADDR(0x0000b212u): goto L_B212;
    case RC_ADDR(0x0000b216u): goto L_B216;
    case RC_ADDR(0x0000b218u): goto L_B218;
    case RC_ADDR(0x0000b21au): goto L_B21A;
    case RC_ADDR(0x0000b21eu): goto L_B21E;
    case RC_ADDR(0x0000b220u): goto L_B220;
    case RC_ADDR(0x0000b224u): goto L_B224;
    case RC_ADDR(0x0000b226u): goto L_B226;
    case RC_ADDR(0x0000b22au): goto L_B22A;
    case RC_ADDR(0x0000b230u): goto L_B230;
    case RC_ADDR(0x0000b234u): goto L_B234;
    case RC_ADDR(0x0000b236u): goto L_B236;
    case RC_ADDR(0x0000b23au): goto L_B23A;
    case RC_ADDR(0x0000b23cu): goto L_B23C;
    case RC_ADDR(0x0000b240u): goto L_B240;
    case RC_ADDR(0x0000b242u): goto L_B242;
    case RC_ADDR(0x0000b246u): goto L_B246;
    case RC_ADDR(0x0000b248u): goto L_B248;
    case RC_ADDR(0x0000b24cu): goto L_B24C;
    case RC_ADDR(0x0000b24eu): goto L_B24E;
    case RC_ADDR(0x0000b252u): goto L_B252;
    case RC_ADDR(0x0000b254u): goto L_B254;
    case RC_ADDR(0x0000b258u): goto L_B258;
    case RC_ADDR(0x0000b25au): goto L_B25A;
    case RC_ADDR(0x0000b25eu): goto L_B25E;
    case RC_ADDR(0x0000b262u): goto L_B262;
    case RC_ADDR(0x0000b266u): goto L_B266;
    case RC_ADDR(0x0000b268u): goto L_B268;
    case RC_ADDR(0x0000b26cu): goto L_B26C;
    case RC_ADDR(0x0000b270u): goto L_B270;
    case RC_ADDR(0x0000b274u): goto L_B274;
    case RC_ADDR(0x0000b276u): goto L_B276;
    case RC_ADDR(0x0000b278u): goto L_B278;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B0D8:
    /* 0000b0d8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000b0d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_B0DC:
    /* 0000b0dc   6  move.w #ff,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0000b0dcu);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0E2:
    /* 0000b0e2   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b0e2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B0E6:
    /* 0000b0e6   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x0000b0e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0EA:
    /* 0000b0ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b0eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B0EC:
    /* 0000b0ec   4  bra 0000b218 */
    c->pc = RC_ADDR(0x0000b0ecu);
    rc_step(c, m, 10);
    goto L_B218;

L_B0F0:
    /* 0000b0f0   4  lea (ffff9dec,A4),A0 */
    c->pc = RC_ADDR(0x0000b0f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6214u);

L_B0F4:
    /* 0000b0f4   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b0f4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0F8:
    /* 0000b0f8   6  move.w #aa,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0000b0f8u);
    rc_step(c, m, 16);
    t0 = 0x000000aau;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0FE:
    /* 0000b0fe   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b0feu);
    rc_step(c, m, 10);
    goto L_B262;

L_B102:
    /* 0000b102   4  lea (ffffa2e4,A4),A0 */
    c->pc = RC_ADDR(0x0000b102u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5d1cu);

L_B106:
    /* 0000b106   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b106u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B10A:
    /* 0000b10a   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b10au);
    rc_step(c, m, 10);
    goto L_B262;

L_B10E:
    /* 0000b10e   4  lea (ffffa1a6,A4),A0 */
    c->pc = RC_ADDR(0x0000b10eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5e5au);

L_B112:
    /* 0000b112   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b112u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B116:
    /* 0000b116   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b116u);
    rc_step(c, m, 10);
    goto L_B262;

L_B11A:
    /* 0000b11a   4  lea (ffffa3b8,A4),A0 */
    c->pc = RC_ADDR(0x0000b11au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5c48u);

L_B11E:
    /* 0000b11e   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b11eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B122:
    /* 0000b122   6  move.w #78,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0000b122u);
    rc_step(c, m, 16);
    t0 = 0x00000078u;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B128:
    /* 0000b128   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b128u);
    rc_step(c, m, 10);
    goto L_B262;

L_B12C:
    /* 0000b12c   4  lea (ffffa068,A4),A0 */
    c->pc = RC_ADDR(0x0000b12cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5f98u);

L_B130:
    /* 0000b130   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b130u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B134:
    /* 0000b134   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b134u);
    rc_step(c, m, 10);
    goto L_B262;

L_B138:
    /* 0000b138   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b138u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B13C:
    /* 0000b13c   4  pea (0000b283) */
    c->pc = RC_ADDR(0x0000b13cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b283u));

L_B140:
    /* 0000b140   4  pea (0000b27a) */
    c->pc = RC_ADDR(0x0000b140u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b27au));

L_B144:
    /* 0000b144   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000b144u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000b148u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_B148:
    /* 0000b148   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000b148u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_B14C:
    /* 0000b14c   4  pea (cf0,A4) */
    c->pc = RC_ADDR(0x0000b14cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcf0u));

L_B150:
    /* 0000b150   4  pea (cee,A4) */
    c->pc = RC_ADDR(0x0000b150u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xceeu));

L_B154:
    /* 0000b154   4  pea (0000b286) */
    c->pc = RC_ADDR(0x0000b154u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b286u));

L_B158:
    /* 0000b158   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000b158u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000b15cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_B15C:
    /* 0000b15c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b15cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B160:
    /* 0000b160   4  move.l D0,(ffff957c,A4) */
    c->pc = RC_ADDR(0x0000b160u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x6a84u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B164:
    /* 0000b164   4  move.w #30,-(A7) */
    c->pc = RC_ADDR(0x0000b164u);
    rc_step(c, m, 12);
    t0 = 0x00000030u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B168:
    /* 0000b168   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b168u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B16A:
    /* 0000b16a   4  move.l (cf0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b16au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcf0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B16E:
    /* 0000b16e   4  move.w (cee,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b16eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xceeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B172:
    /* 0000b172   4  move.l (ffff957c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b172u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B176:
    /* 0000b176   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000b176u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000b17au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_B17A:
    /* 0000b17a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b17au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B17E:
    /* 0000b17e   4  move.w #30,-(A7) */
    c->pc = RC_ADDR(0x0000b17eu);
    rc_step(c, m, 12);
    t0 = 0x00000030u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B182:
    /* 0000b182   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b182u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B186:
    /* 0000b186   4  move.l (cf0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b186u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcf0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B18A:
    /* 0000b18a   4  move.w (cee,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b18au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xceeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B18E:
    /* 0000b18e   4  move.l (ffff957c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b18eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6a84u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B192:
    /* 0000b192   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000b192u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0000b196u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_B196:
    /* 0000b196   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b196u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B19A:
    /* 0000b19a   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b19au);
    rc_step(c, m, 10);
    goto L_B262;

L_B19E:
    /* 0000b19e   4  lea (ffff9d18,A4),A0 */
    c->pc = RC_ADDR(0x0000b19eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x62e8u);

L_B1A2:
    /* 0000b1a2   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1a2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1A6:
    /* 0000b1a6   6  move.w #d2,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0000b1a6u);
    rc_step(c, m, 16);
    t0 = 0x000000d2u;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B1AC:
    /* 0000b1ac   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b1acu);
    rc_step(c, m, 10);
    goto L_B262;

L_B1B0:
    /* 0000b1b0   4  lea (ffffa13c,A4),A0 */
    c->pc = RC_ADDR(0x0000b1b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5ec4u);

L_B1B4:
    /* 0000b1b4   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1b4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1B8:
    /* 0000b1b8   4  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b1b8u);
    rc_step(c, m, 10);
    goto L_B262;

L_B1BC:
    /* 0000b1bc   4  move.w (ffff9580,A4),D0 */
    c->pc = RC_ADDR(0x0000b1bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a80u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B1C0:
    /* 0000b1c0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b1c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B1C2:
    /* 0000b1c2   2  bra 0000b1f4 */
    c->pc = RC_ADDR(0x0000b1c2u);
    rc_step(c, m, 10);
    goto L_B1F4;

L_B1C4:
    /* 0000b1c4   4  lea (ffff9ec0,A4),A0 */
    c->pc = RC_ADDR(0x0000b1c4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6140u);

L_B1C8:
    /* 0000b1c8   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1c8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1CC:
    /* 0000b1cc   2  bra 0000b206 */
    c->pc = RC_ADDR(0x0000b1ccu);
    rc_step(c, m, 10);
    goto L_B206;

L_B1CE:
    /* 0000b1ce   4  lea (ffff9f2a,A4),A0 */
    c->pc = RC_ADDR(0x0000b1ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x60d6u);

L_B1D2:
    /* 0000b1d2   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1d2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1D6:
    /* 0000b1d6   2  bra 0000b206 */
    c->pc = RC_ADDR(0x0000b1d6u);
    rc_step(c, m, 10);
    goto L_B206;

L_B1D8:
    /* 0000b1d8   4  lea (ffff9f94,A4),A0 */
    c->pc = RC_ADDR(0x0000b1d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x606cu);

L_B1DC:
    /* 0000b1dc   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1dcu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1E0:
    /* 0000b1e0   2  bra 0000b206 */
    c->pc = RC_ADDR(0x0000b1e0u);
    rc_step(c, m, 10);
    goto L_B206;

L_B1E2:
    /* 0000b1e2   4  lea (ffff9ffe,A4),A0 */
    c->pc = RC_ADDR(0x0000b1e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6002u);

L_B1E6:
    /* 0000b1e6   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b1e6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1EA:
    /* 0000b1ea   2  bra 0000b206 */
    c->pc = RC_ADDR(0x0000b1eau);
    rc_step(c, m, 10);
    goto L_B206;

L_B1F4:
    /* 0000b1f4   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x0000b1f4u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B1FA:
    /* 0000b1fa   2  bcc 0000b206 */
    c->pc = RC_ADDR(0x0000b1fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_B206;

L_B1FC:
    /* 0000b1fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b1fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_B1FE:
    /* 0000b1fe   4  move.w (0000b1ec),D0 */
    c->pc = RC_ADDR(0x0000b1feu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000b1ecu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B202:
    /* 0000b202   4  jmp (0000b204) */
    c->pc = RC_ADDR(0x0000b202u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000b204u) + t4);
    c->pc = t3;
    return;

L_B206:
    /* 0000b206   4  addq.w #1,(ffff9580,A4) */
    c->pc = RC_ADDR(0x0000b206u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x6a80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B20A:
    /* 0000b20a   6  cmpi.w #3,(ffff9580,A4) */
    c->pc = RC_ADDR(0x0000b20au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a80u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_B210:
    /* 0000b210   2  ble 0000b216 */
    c->pc = RC_ADDR(0x0000b210u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_B216;

L_B212:
    /* 0000b212   4  clr.w (ffff9580,A4) */
    c->pc = RC_ADDR(0x0000b212u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x6a80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B216:
    /* 0000b216   2  bra 0000b262 */
    c->pc = RC_ADDR(0x0000b216u);
    rc_step(c, m, 10);
    goto L_B262;

L_B218:
    /* 0000b218   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x0000b218u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B21A:
    /* 0000b21a   4  beq 0000b0f0 */
    c->pc = RC_ADDR(0x0000b21au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B0F0; }

L_B21E:
    /* 0000b21e   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b21eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B220:
    /* 0000b220   4  beq 0000b0f0 */
    c->pc = RC_ADDR(0x0000b220u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B0F0; }

L_B224:
    /* 0000b224   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b224u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B226:
    /* 0000b226   4  beq 0000b0f0 */
    c->pc = RC_ADDR(0x0000b226u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B0F0; }

L_B22A:
    /* 0000b22a   6  sub.l #e,D0 */
    c->pc = RC_ADDR(0x0000b22au);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B230:
    /* 0000b230   4  beq 0000b102 */
    c->pc = RC_ADDR(0x0000b230u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B102; }

L_B234:
    /* 0000b234   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b234u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B236:
    /* 0000b236   4  beq 0000b10e */
    c->pc = RC_ADDR(0x0000b236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B10E; }

L_B23A:
    /* 0000b23a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b23au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B23C:
    /* 0000b23c   4  beq 0000b11a */
    c->pc = RC_ADDR(0x0000b23cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B11A; }

L_B240:
    /* 0000b240   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x0000b240u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B242:
    /* 0000b242   4  beq 0000b12c */
    c->pc = RC_ADDR(0x0000b242u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B12C; }

L_B246:
    /* 0000b246   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b246u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B248:
    /* 0000b248   4  beq 0000b138 */
    c->pc = RC_ADDR(0x0000b248u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B138; }

L_B24C:
    /* 0000b24c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000b24cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B24E:
    /* 0000b24e   4  beq 0000b138 */
    c->pc = RC_ADDR(0x0000b24eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B138; }

L_B252:
    /* 0000b252   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000b252u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B254:
    /* 0000b254   4  beq 0000b19e */
    c->pc = RC_ADDR(0x0000b254u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B19E; }

L_B258:
    /* 0000b258   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x0000b258u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_B25A:
    /* 0000b25a   4  beq 0000b1b0 */
    c->pc = RC_ADDR(0x0000b25au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_B1B0; }

L_B25E:
    /* 0000b25e   4  bra 0000b1bc */
    c->pc = RC_ADDR(0x0000b25eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_B1BC;

L_B262:
    /* 0000b262   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b262u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_B266:
    /* 0000b266   2  beq 0000b276 */
    c->pc = RC_ADDR(0x0000b266u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B276;

L_B268:
    /* 0000b268   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000b268u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_B26C:
    /* 0000b26c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b26cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B270:
    /* 0000b270   4  jsr (0000b0be) */
    c->pc = RC_ADDR(0x0000b270u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b274u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0beu);
    return;

L_B274:
    /* 0000b274   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b274u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B276:
    /* 0000b276   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b276u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B278:
    /* 0000b278   2  rts */
    c->pc = RC_ADDR(0x0000b278u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
