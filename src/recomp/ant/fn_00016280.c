/* fn_00016280 - 328 byte(s), 81 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016280(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016280u): goto L_16280;
    case RC_ADDR(0x00016284u): goto L_16284;
    case RC_ADDR(0x0001628au): goto L_1628A;
    case RC_ADDR(0x0001628cu): goto L_1628C;
    case RC_ADDR(0x00016290u): goto L_16290;
    case RC_ADDR(0x00016292u): goto L_16292;
    case RC_ADDR(0x00016298u): goto L_16298;
    case RC_ADDR(0x0001629cu): goto L_1629C;
    case RC_ADDR(0x000162a0u): goto L_162A0;
    case RC_ADDR(0x000162a6u): goto L_162A6;
    case RC_ADDR(0x000162aau): goto L_162AA;
    case RC_ADDR(0x000162aeu): goto L_162AE;
    case RC_ADDR(0x000162b2u): goto L_162B2;
    case RC_ADDR(0x000162b6u): goto L_162B6;
    case RC_ADDR(0x000162bcu): goto L_162BC;
    case RC_ADDR(0x000162beu): goto L_162BE;
    case RC_ADDR(0x000162c4u): goto L_162C4;
    case RC_ADDR(0x000162cau): goto L_162CA;
    case RC_ADDR(0x000162d0u): goto L_162D0;
    case RC_ADDR(0x000162d6u): goto L_162D6;
    case RC_ADDR(0x000162d8u): goto L_162D8;
    case RC_ADDR(0x000162deu): goto L_162DE;
    case RC_ADDR(0x000162e4u): goto L_162E4;
    case RC_ADDR(0x000162eau): goto L_162EA;
    case RC_ADDR(0x000162f0u): goto L_162F0;
    case RC_ADDR(0x000162f2u): goto L_162F2;
    case RC_ADDR(0x000162f8u): goto L_162F8;
    case RC_ADDR(0x000162feu): goto L_162FE;
    case RC_ADDR(0x00016304u): goto L_16304;
    case RC_ADDR(0x0001630au): goto L_1630A;
    case RC_ADDR(0x0001630cu): goto L_1630C;
    case RC_ADDR(0x00016312u): goto L_16312;
    case RC_ADDR(0x00016318u): goto L_16318;
    case RC_ADDR(0x0001631eu): goto L_1631E;
    case RC_ADDR(0x00016322u): goto L_16322;
    case RC_ADDR(0x00016326u): goto L_16326;
    case RC_ADDR(0x0001632au): goto L_1632A;
    case RC_ADDR(0x0001632eu): goto L_1632E;
    case RC_ADDR(0x00016332u): goto L_16332;
    case RC_ADDR(0x00016336u): goto L_16336;
    case RC_ADDR(0x0001633au): goto L_1633A;
    case RC_ADDR(0x0001633cu): goto L_1633C;
    case RC_ADDR(0x00016340u): goto L_16340;
    case RC_ADDR(0x00016344u): goto L_16344;
    case RC_ADDR(0x00016346u): goto L_16346;
    case RC_ADDR(0x0001634au): goto L_1634A;
    case RC_ADDR(0x0001634eu): goto L_1634E;
    case RC_ADDR(0x00016352u): goto L_16352;
    case RC_ADDR(0x00016354u): goto L_16354;
    case RC_ADDR(0x00016358u): goto L_16358;
    case RC_ADDR(0x0001635cu): goto L_1635C;
    case RC_ADDR(0x0001635eu): goto L_1635E;
    case RC_ADDR(0x00016362u): goto L_16362;
    case RC_ADDR(0x00016366u): goto L_16366;
    case RC_ADDR(0x0001636au): goto L_1636A;
    case RC_ADDR(0x0001636cu): goto L_1636C;
    case RC_ADDR(0x00016370u): goto L_16370;
    case RC_ADDR(0x00016374u): goto L_16374;
    case RC_ADDR(0x00016376u): goto L_16376;
    case RC_ADDR(0x0001637au): goto L_1637A;
    case RC_ADDR(0x0001637eu): goto L_1637E;
    case RC_ADDR(0x00016382u): goto L_16382;
    case RC_ADDR(0x00016384u): goto L_16384;
    case RC_ADDR(0x00016388u): goto L_16388;
    case RC_ADDR(0x0001638cu): goto L_1638C;
    case RC_ADDR(0x0001638eu): goto L_1638E;
    case RC_ADDR(0x00016392u): goto L_16392;
    case RC_ADDR(0x00016396u): goto L_16396;
    case RC_ADDR(0x0001639au): goto L_1639A;
    case RC_ADDR(0x0001639eu): goto L_1639E;
    case RC_ADDR(0x000163a2u): goto L_163A2;
    case RC_ADDR(0x000163a6u): goto L_163A6;
    case RC_ADDR(0x000163aau): goto L_163AA;
    case RC_ADDR(0x000163aeu): goto L_163AE;
    case RC_ADDR(0x000163b2u): goto L_163B2;
    case RC_ADDR(0x000163b8u): goto L_163B8;
    case RC_ADDR(0x000163bau): goto L_163BA;
    case RC_ADDR(0x000163beu): goto L_163BE;
    case RC_ADDR(0x000163c2u): goto L_163C2;
    case RC_ADDR(0x000163c4u): goto L_163C4;
    case RC_ADDR(0x000163c6u): goto L_163C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16280:
    /* 00016280   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016280u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16284:
    /* 00016284   6  cmpi.w #3e8,(1b4e,A4) */
    c->pc = RC_ADDR(0x00016284u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_1628A:
    /* 0001628a   2  bge 00016298 */
    c->pc = RC_ADDR(0x0001628au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16298;

L_1628C:
    /* 0001628c   4  tst.w (17f2,A4) */
    c->pc = RC_ADDR(0x0001628cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f2u));
    rc_set_nzvc(c, t0, RC_W);

L_16290:
    /* 00016290   2  bne 00016298 */
    c->pc = RC_ADDR(0x00016290u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16298;

L_16292:
    /* 00016292   6  move.w #1,(1b8c,A4) */
    c->pc = RC_ADDR(0x00016292u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b8cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16298:
    /* 00016298   4  tst.w (17f2,A4) */
    c->pc = RC_ADDR(0x00016298u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f2u));
    rc_set_nzvc(c, t0, RC_W);

L_1629C:
    /* 0001629c   4  beq 000163ba */
    c->pc = RC_ADDR(0x0001629cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_163BA;

L_162A0:
    /* 000162a0   6  cmpi.w #3e8,(1b4e,A4) */
    c->pc = RC_ADDR(0x000162a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_162A6:
    /* 000162a6   4  bne 000163ba */
    c->pc = RC_ADDR(0x000162a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_163BA;

L_162AA:
    /* 000162aa   4  clr.w (1b4c,A4) */
    c->pc = RC_ADDR(0x000162aau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_162AE:
    /* 000162ae   4  clr.w (1b4a,A4) */
    c->pc = RC_ADDR(0x000162aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_162B2:
    /* 000162b2   4  clr.w (1b4e,A4) */
    c->pc = RC_ADDR(0x000162b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b4eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_162B6:
    /* 000162b6   6  cmpi.w #f,(1b62,A4) */
    c->pc = RC_ADDR(0x000162b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_162BC:
    /* 000162bc   2  bne 000162d0 */
    c->pc = RC_ADDR(0x000162bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_162D0;

L_162BE:
    /* 000162be   6  move.w #ffd8,(1b62,A4) */
    c->pc = RC_ADDR(0x000162beu);
    rc_step(c, m, 16);
    t0 = 0x0000ffd8u;
    rc_wr16(c, m, (c->a[4] + 0x1b62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162C4:
    /* 000162c4   6  bset #0,(1b4f,A4) */
    c->pc = RC_ADDR(0x000162c4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1b4fu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_162CA:
    /* 000162ca   6  move.w #18,(1b4a,A4) */
    c->pc = RC_ADDR(0x000162cau);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] + 0x1b4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162D0:
    /* 000162d0   6  cmpi.w #126,(1b62,A4) */
    c->pc = RC_ADDR(0x000162d0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_162D6:
    /* 000162d6   2  bne 000162ea */
    c->pc = RC_ADDR(0x000162d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_162EA;

L_162D8:
    /* 000162d8   6  move.w #140,(1b62,A4) */
    c->pc = RC_ADDR(0x000162d8u);
    rc_step(c, m, 16);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] + 0x1b62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162DE:
    /* 000162de   6  bset #1,(1b4f,A4) */
    c->pc = RC_ADDR(0x000162deu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1b4fu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_162E4:
    /* 000162e4   6  move.w #ffe8,(1b4a,A4) */
    c->pc = RC_ADDR(0x000162e4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffe8u;
    rc_wr16(c, m, (c->a[4] + 0x1b4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162EA:
    /* 000162ea   6  cmpi.w #a,(1b64,A4) */
    c->pc = RC_ADDR(0x000162eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_162F0:
    /* 000162f0   2  bne 00016304 */
    c->pc = RC_ADDR(0x000162f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16304;

L_162F2:
    /* 000162f2   6  move.w #ffe0,(1b64,A4) */
    c->pc = RC_ADDR(0x000162f2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffe0u;
    rc_wr16(c, m, (c->a[4] + 0x1b64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_162F8:
    /* 000162f8   6  bset #2,(1b4f,A4) */
    c->pc = RC_ADDR(0x000162f8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1b4fu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_162FE:
    /* 000162fe   6  move.w #14,(1b4c,A4) */
    c->pc = RC_ADDR(0x000162feu);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x1b4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16304:
    /* 00016304   6  cmpi.w #b5,(1b64,A4) */
    c->pc = RC_ADDR(0x00016304u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_1630A:
    /* 0001630a   2  bne 0001631e */
    c->pc = RC_ADDR(0x0001630au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1631E;

L_1630C:
    /* 0001630c   6  move.w #c8,(1b64,A4) */
    c->pc = RC_ADDR(0x0001630cu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] + 0x1b64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16312:
    /* 00016312   6  bset #3,(1b4f,A4) */
    c->pc = RC_ADDR(0x00016312u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x1b4fu);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_16318:
    /* 00016318   6  move.w #ffec,(1b4c,A4) */
    c->pc = RC_ADDR(0x00016318u);
    rc_step(c, m, 16);
    t0 = 0x0000ffecu;
    rc_wr16(c, m, (c->a[4] + 0x1b4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1631E:
    /* 0001631e   4  move.w (1b62,A4),D0 */
    c->pc = RC_ADDR(0x0001631eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16322:
    /* 00016322   4  add.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00016322u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16326:
    /* 00016326   4  move.w D0,(1b52,A4) */
    c->pc = RC_ADDR(0x00016326u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b52u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1632A:
    /* 0001632a   4  move.w (1b64,A4),D0 */
    c->pc = RC_ADDR(0x0001632au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1632E:
    /* 0001632e   4  add.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x0001632eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16332:
    /* 00016332   4  move.w D0,(1b58,A4) */
    c->pc = RC_ADDR(0x00016332u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b58u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16336:
    /* 00016336   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x00016336u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1633A:
    /* 0001633a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001633au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1633C:
    /* 0001633c   4  lea (ffffb3cc,A4),A0 */
    c->pc = RC_ADDR(0x0001633cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c34u);

L_16340:
    /* 00016340   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016340u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16344:
    /* 00016344   2  ext.w D1 */
    c->pc = RC_ADDR(0x00016344u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_16346:
    /* 00016346   4  add.w (1b52,A4),D1 */
    c->pc = RC_ADDR(0x00016346u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b52u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1634A:
    /* 0001634a   4  move.w D1,(1b54,A4) */
    c->pc = RC_ADDR(0x0001634au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b54u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1634E:
    /* 0001634e   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x0001634eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16352:
    /* 00016352   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00016352u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16354:
    /* 00016354   4  lea (ffffb3e0,A4),A0 */
    c->pc = RC_ADDR(0x00016354u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c20u);

L_16358:
    /* 00016358   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016358u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1635C:
    /* 0001635c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001635cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1635E:
    /* 0001635e   4  add.w (1b58,A4),D1 */
    c->pc = RC_ADDR(0x0001635eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b58u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16362:
    /* 00016362   4  move.w D1,(1b5a,A4) */
    c->pc = RC_ADDR(0x00016362u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b5au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16366:
    /* 00016366   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x00016366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1636A:
    /* 0001636a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001636au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1636C:
    /* 0001636c   4  lea (ffffb3d6,A4),A0 */
    c->pc = RC_ADDR(0x0001636cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c2au);

L_16370:
    /* 00016370   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016370u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16374:
    /* 00016374   2  ext.w D1 */
    c->pc = RC_ADDR(0x00016374u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_16376:
    /* 00016376   4  add.w (1b52,A4),D1 */
    c->pc = RC_ADDR(0x00016376u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b52u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1637A:
    /* 0001637a   4  move.w D1,(1b56,A4) */
    c->pc = RC_ADDR(0x0001637au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b56u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1637E:
    /* 0001637e   4  move.w (1b4e,A4),D0 */
    c->pc = RC_ADDR(0x0001637eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b4eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16382:
    /* 00016382   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00016382u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16384:
    /* 00016384   4  lea (ffffb3ea,A4),A0 */
    c->pc = RC_ADDR(0x00016384u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c16u);

L_16388:
    /* 00016388   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00016388u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1638C:
    /* 0001638c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001638cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1638E:
    /* 0001638e   4  add.w (1b58,A4),D1 */
    c->pc = RC_ADDR(0x0001638eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b58u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16392:
    /* 00016392   4  move.w D1,(1b5c,A4) */
    c->pc = RC_ADDR(0x00016392u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b5cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16396:
    /* 00016396   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00016396u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1639A:
    /* 0001639a   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001639au);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1639E:
    /* 0001639e   4  move.l (1b92,A4),-(A7) */
    c->pc = RC_ADDR(0x0001639eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1b92u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_163A2:
    /* 000163a2   4  move.w (1b90,A4),-(A7) */
    c->pc = RC_ADDR(0x000163a2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163A6:
    /* 000163a6   4  move.l (ffffb3f4,A4),-(A7) */
    c->pc = RC_ADDR(0x000163a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c0cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_163AA:
    /* 000163aa   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000163aau);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000163aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_163AE:
    /* 000163ae   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000163aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_163B2:
    /* 000163b2   6  move.w #1,(1b8e,A4) */
    c->pc = RC_ADDR(0x000163b2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_163B8:
    /* 000163b8   2  bra 000163c4 */
    c->pc = RC_ADDR(0x000163b8u);
    rc_step(c, m, 10);
    goto L_163C4;

L_163BA:
    /* 000163ba   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000163bau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163BE:
    /* 000163be   4  jsr (000161aa) */
    c->pc = RC_ADDR(0x000163beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000163c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000161aau);
    return;

L_163C2:
    /* 000163c2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000163c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_163C4:
    /* 000163c4   2  unlk A5 */
    c->pc = RC_ADDR(0x000163c4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_163C6:
    /* 000163c6   2  rts */
    c->pc = RC_ADDR(0x000163c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
