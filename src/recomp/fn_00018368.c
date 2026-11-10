/* fn_00018368 - 520 byte(s), 137 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00018368(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00018368u): goto L_18368;
    case RC_ADDR(0x0001836cu): goto L_1836C;
    case RC_ADDR(0x00018370u): goto L_18370;
    case RC_ADDR(0x00018372u): goto L_18372;
    case RC_ADDR(0x00018378u): goto L_18378;
    case RC_ADDR(0x0001837eu): goto L_1837E;
    case RC_ADDR(0x00018384u): goto L_18384;
    case RC_ADDR(0x0001838au): goto L_1838A;
    case RC_ADDR(0x0001838eu): goto L_1838E;
    case RC_ADDR(0x00018392u): goto L_18392;
    case RC_ADDR(0x00018396u): goto L_18396;
    case RC_ADDR(0x0001839au): goto L_1839A;
    case RC_ADDR(0x0001839cu): goto L_1839C;
    case RC_ADDR(0x0001839eu): goto L_1839E;
    case RC_ADDR(0x000183a2u): goto L_183A2;
    case RC_ADDR(0x000183a6u): goto L_183A6;
    case RC_ADDR(0x000183aau): goto L_183AA;
    case RC_ADDR(0x000183acu): goto L_183AC;
    case RC_ADDR(0x000183b0u): goto L_183B0;
    case RC_ADDR(0x000183b6u): goto L_183B6;
    case RC_ADDR(0x000183b8u): goto L_183B8;
    case RC_ADDR(0x000183bcu): goto L_183BC;
    case RC_ADDR(0x000183beu): goto L_183BE;
    case RC_ADDR(0x000183c0u): goto L_183C0;
    case RC_ADDR(0x000183c4u): goto L_183C4;
    case RC_ADDR(0x000183cau): goto L_183CA;
    case RC_ADDR(0x000183d0u): goto L_183D0;
    case RC_ADDR(0x000183d2u): goto L_183D2;
    case RC_ADDR(0x000183d8u): goto L_183D8;
    case RC_ADDR(0x000183dau): goto L_183DA;
    case RC_ADDR(0x000183deu): goto L_183DE;
    case RC_ADDR(0x000183e0u): goto L_183E0;
    case RC_ADDR(0x000183e2u): goto L_183E2;
    case RC_ADDR(0x000183e6u): goto L_183E6;
    case RC_ADDR(0x000183ecu): goto L_183EC;
    case RC_ADDR(0x000183f0u): goto L_183F0;
    case RC_ADDR(0x000183f2u): goto L_183F2;
    case RC_ADDR(0x000183f4u): goto L_183F4;
    case RC_ADDR(0x000183f8u): goto L_183F8;
    case RC_ADDR(0x000183feu): goto L_183FE;
    case RC_ADDR(0x00018402u): goto L_18402;
    case RC_ADDR(0x00018404u): goto L_18404;
    case RC_ADDR(0x00018406u): goto L_18406;
    case RC_ADDR(0x0001840au): goto L_1840A;
    case RC_ADDR(0x0001840eu): goto L_1840E;
    case RC_ADDR(0x00018410u): goto L_18410;
    case RC_ADDR(0x00018414u): goto L_18414;
    case RC_ADDR(0x00018418u): goto L_18418;
    case RC_ADDR(0x0001841cu): goto L_1841C;
    case RC_ADDR(0x0001841eu): goto L_1841E;
    case RC_ADDR(0x00018422u): goto L_18422;
    case RC_ADDR(0x00018426u): goto L_18426;
    case RC_ADDR(0x0001842au): goto L_1842A;
    case RC_ADDR(0x0001842cu): goto L_1842C;
    case RC_ADDR(0x0001842eu): goto L_1842E;
    case RC_ADDR(0x00018432u): goto L_18432;
    case RC_ADDR(0x00018436u): goto L_18436;
    case RC_ADDR(0x0001843au): goto L_1843A;
    case RC_ADDR(0x0001843eu): goto L_1843E;
    case RC_ADDR(0x00018444u): goto L_18444;
    case RC_ADDR(0x0001844au): goto L_1844A;
    case RC_ADDR(0x0001844eu): goto L_1844E;
    case RC_ADDR(0x00018450u): goto L_18450;
    case RC_ADDR(0x00018452u): goto L_18452;
    case RC_ADDR(0x00018456u): goto L_18456;
    case RC_ADDR(0x0001845cu): goto L_1845C;
    case RC_ADDR(0x00018460u): goto L_18460;
    case RC_ADDR(0x00018466u): goto L_18466;
    case RC_ADDR(0x0001846cu): goto L_1846C;
    case RC_ADDR(0x00018470u): goto L_18470;
    case RC_ADDR(0x00018476u): goto L_18476;
    case RC_ADDR(0x0001847cu): goto L_1847C;
    case RC_ADDR(0x00018482u): goto L_18482;
    case RC_ADDR(0x00018486u): goto L_18486;
    case RC_ADDR(0x0001848au): goto L_1848A;
    case RC_ADDR(0x0001848cu): goto L_1848C;
    case RC_ADDR(0x0001848eu): goto L_1848E;
    case RC_ADDR(0x00018492u): goto L_18492;
    case RC_ADDR(0x00018496u): goto L_18496;
    case RC_ADDR(0x0001849au): goto L_1849A;
    case RC_ADDR(0x000184a0u): goto L_184A0;
    case RC_ADDR(0x000184a2u): goto L_184A2;
    case RC_ADDR(0x000184a6u): goto L_184A6;
    case RC_ADDR(0x000184aau): goto L_184AA;
    case RC_ADDR(0x000184aeu): goto L_184AE;
    case RC_ADDR(0x000184b0u): goto L_184B0;
    case RC_ADDR(0x000184b4u): goto L_184B4;
    case RC_ADDR(0x000184b6u): goto L_184B6;
    case RC_ADDR(0x000184bau): goto L_184BA;
    case RC_ADDR(0x000184beu): goto L_184BE;
    case RC_ADDR(0x000184c0u): goto L_184C0;
    case RC_ADDR(0x000184c4u): goto L_184C4;
    case RC_ADDR(0x000184c6u): goto L_184C6;
    case RC_ADDR(0x000184cau): goto L_184CA;
    case RC_ADDR(0x000184ceu): goto L_184CE;
    case RC_ADDR(0x000184d2u): goto L_184D2;
    case RC_ADDR(0x000184d6u): goto L_184D6;
    case RC_ADDR(0x000184d8u): goto L_184D8;
    case RC_ADDR(0x000184dcu): goto L_184DC;
    case RC_ADDR(0x000184e2u): goto L_184E2;
    case RC_ADDR(0x000184e4u): goto L_184E4;
    case RC_ADDR(0x000184eau): goto L_184EA;
    case RC_ADDR(0x000184eeu): goto L_184EE;
    case RC_ADDR(0x000184f0u): goto L_184F0;
    case RC_ADDR(0x000184f4u): goto L_184F4;
    case RC_ADDR(0x000184fau): goto L_184FA;
    case RC_ADDR(0x000184fcu): goto L_184FC;
    case RC_ADDR(0x00018502u): goto L_18502;
    case RC_ADDR(0x00018506u): goto L_18506;
    case RC_ADDR(0x0001850au): goto L_1850A;
    case RC_ADDR(0x0001850cu): goto L_1850C;
    case RC_ADDR(0x00018510u): goto L_18510;
    case RC_ADDR(0x00018514u): goto L_18514;
    case RC_ADDR(0x00018518u): goto L_18518;
    case RC_ADDR(0x0001851cu): goto L_1851C;
    case RC_ADDR(0x00018520u): goto L_18520;
    case RC_ADDR(0x00018522u): goto L_18522;
    case RC_ADDR(0x00018526u): goto L_18526;
    case RC_ADDR(0x0001852au): goto L_1852A;
    case RC_ADDR(0x0001852eu): goto L_1852E;
    case RC_ADDR(0x00018534u): goto L_18534;
    case RC_ADDR(0x00018538u): goto L_18538;
    case RC_ADDR(0x0001853cu): goto L_1853C;
    case RC_ADDR(0x00018540u): goto L_18540;
    case RC_ADDR(0x00018544u): goto L_18544;
    case RC_ADDR(0x00018548u): goto L_18548;
    case RC_ADDR(0x0001854au): goto L_1854A;
    case RC_ADDR(0x0001854cu): goto L_1854C;
    case RC_ADDR(0x00018550u): goto L_18550;
    case RC_ADDR(0x00018554u): goto L_18554;
    case RC_ADDR(0x00018558u): goto L_18558;
    case RC_ADDR(0x0001855cu): goto L_1855C;
    case RC_ADDR(0x00018560u): goto L_18560;
    case RC_ADDR(0x00018564u): goto L_18564;
    case RC_ADDR(0x00018568u): goto L_18568;
    case RC_ADDR(0x0001856cu): goto L_1856C;
    case RC_ADDR(0x0001856eu): goto L_1856E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18368:
    /* 00018368   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00018368u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1836C:
    /* 0001836c   4  tst.w (ffffc6bc,A4) */
    c->pc = RC_ADDR(0x0001836cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3944u));
    rc_set_nzvc(c, t0, RC_W);

L_18370:
    /* 00018370   2  beq 00018396 */
    c->pc = RC_ADDR(0x00018370u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_18396;

L_18372:
    /* 00018372   6  move.w #168,(1cb6,A4) */
    c->pc = RC_ADDR(0x00018372u);
    rc_step(c, m);
    t0 = 0x00000168u;
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18378:
    /* 00018378   6  move.w #168,(47a,A4) */
    c->pc = RC_ADDR(0x00018378u);
    rc_step(c, m);
    t0 = 0x00000168u;
    rc_wr16(c, m, (c->a[4] + 0x47au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1837E:
    /* 0001837e   6  move.w #1ae,(1cb8,A4) */
    c->pc = RC_ADDR(0x0001837eu);
    rc_step(c, m);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18384:
    /* 00018384   6  move.w #1ae,(47c,A4) */
    c->pc = RC_ADDR(0x00018384u);
    rc_step(c, m);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x47cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1838A:
    /* 0001838a   4  clr.w (478,A4) */
    c->pc = RC_ADDR(0x0001838au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x478u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1838E:
    /* 0001838e   4  clr.w (482,A4) */
    c->pc = RC_ADDR(0x0001838eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x482u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18392:
    /* 00018392   4  bra 0001845c */
    c->pc = RC_ADDR(0x00018392u);
    rc_step(c, m);
    goto L_1845C;

L_18396:
    /* 00018396   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x00018396u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1839A:
    /* 0001839a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001839au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1839C:
    /* 0001839c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001839cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1839E:
    /* 0001839e   4  lea (ffffc65c,A4),A0 */
    c->pc = RC_ADDR(0x0001839eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x39a4u);

L_183A2:
    /* 000183a2   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000183a2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_183A6:
    /* 000183a6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000183a6u);
    rc_step(c, m);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000183aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_183AA:
    /* 000183aa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000183aau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_183AC:
    /* 000183ac   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000183acu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_183B0:
    /* 000183b0   6  cmpi.w #d,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000183b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000du);

L_183B6:
    /* 000183b6   2  beq 00018396 */
    c->pc = RC_ADDR(0x000183b6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) { rc_tick(); goto L_18396; }

L_183B8:
    /* 000183b8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000183b8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_183BC:
    /* 000183bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000183bcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_183BE:
    /* 000183be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000183beu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_183C0:
    /* 000183c0   4  lea (1c2e,A4),A0 */
    c->pc = RC_ADDR(0x000183c0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1c2eu);

L_183C4:
    /* 000183c4   6  move.w (0,A0,D0.w),(1cba,A4) */
    c->pc = RC_ADDR(0x000183c4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_183CA:
    /* 000183ca   6  cmpi.w #2,(1cba,A4) */
    c->pc = RC_ADDR(0x000183cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_183D0:
    /* 000183d0   2  blt 00018396 */
    c->pc = RC_ADDR(0x000183d0u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18396; }

L_183D2:
    /* 000183d2   6  cmpi.w #3,(1cba,A4) */
    c->pc = RC_ADDR(0x000183d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_183D8:
    /* 000183d8   2  bgt 00018396 */
    c->pc = RC_ADDR(0x000183d8u);
    rc_step(c, m);
    if (rc_cond(c, 14)) { rc_tick(); goto L_18396; }

L_183DA:
    /* 000183da   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000183dau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_183DE:
    /* 000183de   2  ext.l D0 */
    c->pc = RC_ADDR(0x000183deu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_183E0:
    /* 000183e0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000183e0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_183E2:
    /* 000183e2   4  lea (1c5a,A4),A0 */
    c->pc = RC_ADDR(0x000183e2u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1c5au);

L_183E6:
    /* 000183e6   6  move.w (0,A0,D0.w),(1cb6,A4) */
    c->pc = RC_ADDR(0x000183e6u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_183EC:
    /* 000183ec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000183ecu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_183F0:
    /* 000183f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000183f0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_183F2:
    /* 000183f2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000183f2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_183F4:
    /* 000183f4   4  lea (1c86,A4),A0 */
    c->pc = RC_ADDR(0x000183f4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1c86u);

L_183F8:
    /* 000183f8   6  move.w (0,A0,D0.w),(1cb8,A4) */
    c->pc = RC_ADDR(0x000183f8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1cb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_183FE:
    /* 000183fe   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x000183feu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18402:
    /* 00018402   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018402u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_18404:
    /* 00018404   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018404u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_18406:
    /* 00018406   4  lea (ffffc662,A4),A0 */
    c->pc = RC_ADDR(0x00018406u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x399eu);

L_1840A:
    /* 0001840a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001840au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1840E:
    /* 0001840e   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x0001840eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18410:
    /* 00018410   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018410u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18414:
    /* 00018414   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00018414u);
    rc_step(c, m);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_18418:
    /* 00018418   4  bchg #0,D0 */
    c->pc = RC_ADDR(0x00018418u);
    rc_step(c, m);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_1841C:
    /* 0001841c   2  muls.w D0,D1 */
    c->pc = RC_ADDR(0x0001841cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_muls(c, 1, t0);

L_1841E:
    /* 0001841e   4  add.w (1cb6,A4),D1 */
    c->pc = RC_ADDR(0x0001841eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18422:
    /* 00018422   4  move.w D1,(47a,A4) */
    c->pc = RC_ADDR(0x00018422u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x47au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18426:
    /* 00018426   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x00018426u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1842A:
    /* 0001842a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001842au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1842C:
    /* 0001842c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001842cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1842E:
    /* 0001842e   4  lea (ffffc670,A4),A0 */
    c->pc = RC_ADDR(0x0001842eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3990u);

L_18432:
    /* 00018432   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00018432u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18436:
    /* 00018436   4  add.w (1cb8,A4),D1 */
    c->pc = RC_ADDR(0x00018436u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1843A:
    /* 0001843a   4  move.w D1,(47c,A4) */
    c->pc = RC_ADDR(0x0001843au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x47cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1843E:
    /* 0001843e   6  move.w #2,(478,A4) */
    c->pc = RC_ADDR(0x0001843eu);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x478u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18444:
    /* 00018444   6  move.w #1,(48c,A4) */
    c->pc = RC_ADDR(0x00018444u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x48cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1844A:
    /* 0001844a   4  move.w (1cba,A4),D0 */
    c->pc = RC_ADDR(0x0001844au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1844E:
    /* 0001844e   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x0001844eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_18450:
    /* 00018450   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x00018450u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18452:
    /* 00018452   4  move.w D0,(1cbc,A4) */
    c->pc = RC_ADDR(0x00018452u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1cbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18456:
    /* 00018456   6  move.w #2,(482,A4) */
    c->pc = RC_ADDR(0x00018456u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x482u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1845C:
    /* 0001845c   4  clr.w (1f48,A4) */
    c->pc = RC_ADDR(0x0001845cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1f48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18460:
    /* 00018460   6  move.w #3,(47e,A4) */
    c->pc = RC_ADDR(0x00018460u);
    rc_step(c, m);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x47eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18466:
    /* 00018466   6  move.w #2,(480,A4) */
    c->pc = RC_ADDR(0x00018466u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x480u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1846C:
    /* 0001846c   4  clr.w (1cb2,A4) */
    c->pc = RC_ADDR(0x0001846cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1cb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18470:
    /* 00018470   6  move.w #ffff,(1cb4,A4) */
    c->pc = RC_ADDR(0x00018470u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1cb4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18476:
    /* 00018476   6  move.w #1,(486,A4) */
    c->pc = RC_ADDR(0x00018476u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x486u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1847C:
    /* 0001847c   6  move.w #4,(48a,A4) */
    c->pc = RC_ADDR(0x0001847cu);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x48au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18482:
    /* 00018482   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018482u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18486:
    /* 00018486   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018486u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1848A:
    /* 0001848a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001848au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1848C:
    /* 0001848c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001848cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1848E:
    /* 0001848e   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x0001848eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_18492:
    /* 00018492   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018492u);
    rc_step(c, m);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18496:
    /* 00018496   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018496u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1849A:
    /* 0001849a   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001849au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_184A0:
    /* 000184a0   2  blt 00018486 */
    c->pc = RC_ADDR(0x000184a0u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18486; }

L_184A2:
    /* 000184a2   4  clr.w (1cca,A4) */
    c->pc = RC_ADDR(0x000184a2u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1ccau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_184A6:
    /* 000184a6   4  jsr (00018570) */
    c->pc = RC_ADDR(0x000184a6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000184aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00018570u);
    return;

L_184AA:
    /* 000184aa   4  move.w (1cb6,A4),D0 */
    c->pc = RC_ADDR(0x000184aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184AE:
    /* 000184ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x000184aeu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_184B0:
    /* 000184b0   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x000184b0u);
    rc_step(c, m);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_184B4:
    /* 000184b4   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x000184b4u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_184B6:
    /* 000184b6   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000184b6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_184BA:
    /* 000184ba   4  move.w (1cb8,A4),D0 */
    c->pc = RC_ADDR(0x000184bau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184BE:
    /* 000184be   2  ext.l D0 */
    c->pc = RC_ADDR(0x000184beu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_184C0:
    /* 000184c0   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x000184c0u);
    rc_step(c, m);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_184C4:
    /* 000184c4   2  subq.w #2,D0 */
    c->pc = RC_ADDR(0x000184c4u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_184C6:
    /* 000184c6   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184c6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_184CA:
    /* 000184ca   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000184cau);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184CE:
    /* 000184ce   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184ceu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184D2:
    /* 000184d2   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000184d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_184D6:
    /* 000184d6   2  bge 000184dc */
    c->pc = RC_ADDR(0x000184d6u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_184DC;

L_184D8:
    /* 000184d8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000184d8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_184DC:
    /* 000184dc   6  cmpi.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000184dcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_184E2:
    /* 000184e2   2  ble 000184ea */
    c->pc = RC_ADDR(0x000184e2u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_184EA;

L_184E4:
    /* 000184e4   6  move.w #a,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000184e4u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_184EA:
    /* 000184ea   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000184eau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_184EE:
    /* 000184ee   2  bge 000184f4 */
    c->pc = RC_ADDR(0x000184eeu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_184F4;

L_184F0:
    /* 000184f0   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000184f0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_184F4:
    /* 000184f4   6  cmpi.w #7,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184f4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_184FA:
    /* 000184fa   2  ble 00018502 */
    c->pc = RC_ADDR(0x000184fau);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_18502;

L_184FC:
    /* 000184fc   6  move.w #7,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184fcu);
    rc_step(c, m);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18502:
    /* 00018502   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00018502u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18506:
    /* 00018506   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x00018506u);
    rc_step(c, m);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_1850A:
    /* 0001850a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001850au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1850C:
    /* 0001850c   4  divs.w #10,D0 */
    c->pc = RC_ADDR(0x0001850cu);
    rc_step(c, m);
    t0 = 0x00000010u;
    rc_divs(c, m, 0, t0);

L_18510:
    /* 00018510   4  move.w D0,(74e,A4) */
    c->pc = RC_ADDR(0x00018510u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x74eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18514:
    /* 00018514   4  move.w D0,(a16,A4) */
    c->pc = RC_ADDR(0x00018514u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xa16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18518:
    /* 00018518   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018518u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1851C:
    /* 0001851c   4  muls.w #28,D0 */
    c->pc = RC_ADDR(0x0001851cu);
    rc_step(c, m);
    t0 = 0x00000028u;
    rc_muls(c, 0, t0);

L_18520:
    /* 00018520   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018520u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_18522:
    /* 00018522   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00018522u);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_18526:
    /* 00018526   4  move.w D0,(750,A4) */
    c->pc = RC_ADDR(0x00018526u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x750u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1852A:
    /* 0001852a   4  move.w D0,(a18,A4) */
    c->pc = RC_ADDR(0x0001852au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xa18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1852E:
    /* 0001852e   6  move.w #f,(fffff27e,A4) */
    c->pc = RC_ADDR(0x0001852eu);
    rc_step(c, m);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0xd82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18534:
    /* 00018534   4  clr.w (fffff280,A4) */
    c->pc = RC_ADDR(0x00018534u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18538:
    /* 00018538   4  clr.l (fffff282,A4) */
    c->pc = RC_ADDR(0x00018538u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1853C:
    /* 0001853c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001853cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18540:
    /* 00018540   4  muls.w (fffff2f2,A4),D0 */
    c->pc = RC_ADDR(0x00018540u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_muls(c, 0, t0);

L_18544:
    /* 00018544   4  add.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018544u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18548:
    /* 00018548   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00018548u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1854A:
    /* 0001854a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001854au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1854C:
    /* 0001854c   4  move.l D0,(fffff2e4,A4) */
    c->pc = RC_ADDR(0x0001854cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18550:
    /* 00018550   4  clr.l (fffff2e0,A4) */
    c->pc = RC_ADDR(0x00018550u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18554:
    /* 00018554   4  clr.l (fffff2dc,A4) */
    c->pc = RC_ADDR(0x00018554u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0xd24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18558:
    /* 00018558   4  clr.w (fffff2d8,A4) */
    c->pc = RC_ADDR(0x00018558u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1855C:
    /* 0001855c   4  clr.w (fffff2d6,A4) */
    c->pc = RC_ADDR(0x0001855cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18560:
    /* 00018560   4  clr.w (fffff2d4,A4) */
    c->pc = RC_ADDR(0x00018560u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18564:
    /* 00018564   4  clr.w (fffff2d2,A4) */
    c->pc = RC_ADDR(0x00018564u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xd2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18568:
    /* 00018568   4  jsr (ffff8194,A4) */
    c->pc = RC_ADDR(0x00018568u);
    rc_step(c, m);
    /* vector 67 */
    rc_push32(c, m, RC_ADDR(0x0001856cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021beau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017fdcu);
    return;

L_1856C:
    /* 0001856c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001856cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1856E:
    /* 0001856e   2  rts */
    c->pc = RC_ADDR(0x0001856eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
