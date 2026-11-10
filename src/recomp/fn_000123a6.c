/* fn_000123a6 - 236 byte(s), 64 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000123a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000123a6u): goto L_123A6;
    case RC_ADDR(0x000123aau): goto L_123AA;
    case RC_ADDR(0x000123aeu): goto L_123AE;
    case RC_ADDR(0x000123b2u): goto L_123B2;
    case RC_ADDR(0x000123b6u): goto L_123B6;
    case RC_ADDR(0x000123b8u): goto L_123B8;
    case RC_ADDR(0x000123bcu): goto L_123BC;
    case RC_ADDR(0x000123c0u): goto L_123C0;
    case RC_ADDR(0x000123c4u): goto L_123C4;
    case RC_ADDR(0x000123c8u): goto L_123C8;
    case RC_ADDR(0x000123cau): goto L_123CA;
    case RC_ADDR(0x000123ccu): goto L_123CC;
    case RC_ADDR(0x000123d2u): goto L_123D2;
    case RC_ADDR(0x000123d4u): goto L_123D4;
    case RC_ADDR(0x000123d6u): goto L_123D6;
    case RC_ADDR(0x000123dcu): goto L_123DC;
    case RC_ADDR(0x000123deu): goto L_123DE;
    case RC_ADDR(0x000123e0u): goto L_123E0;
    case RC_ADDR(0x000123e6u): goto L_123E6;
    case RC_ADDR(0x000123e8u): goto L_123E8;
    case RC_ADDR(0x000123eau): goto L_123EA;
    case RC_ADDR(0x000123f0u): goto L_123F0;
    case RC_ADDR(0x000123f6u): goto L_123F6;
    case RC_ADDR(0x000123f8u): goto L_123F8;
    case RC_ADDR(0x000123fcu): goto L_123FC;
    case RC_ADDR(0x000123feu): goto L_123FE;
    case RC_ADDR(0x00012402u): goto L_12402;
    case RC_ADDR(0x00012408u): goto L_12408;
    case RC_ADDR(0x0001240eu): goto L_1240E;
    case RC_ADDR(0x00012410u): goto L_12410;
    case RC_ADDR(0x00012414u): goto L_12414;
    case RC_ADDR(0x00012416u): goto L_12416;
    case RC_ADDR(0x0001241au): goto L_1241A;
    case RC_ADDR(0x00012420u): goto L_12420;
    case RC_ADDR(0x00012426u): goto L_12426;
    case RC_ADDR(0x0001242cu): goto L_1242C;
    case RC_ADDR(0x00012432u): goto L_12432;
    case RC_ADDR(0x00012436u): goto L_12436;
    case RC_ADDR(0x00012438u): goto L_12438;
    case RC_ADDR(0x0001243cu): goto L_1243C;
    case RC_ADDR(0x00012440u): goto L_12440;
    case RC_ADDR(0x00012444u): goto L_12444;
    case RC_ADDR(0x00012448u): goto L_12448;
    case RC_ADDR(0x0001244cu): goto L_1244C;
    case RC_ADDR(0x00012450u): goto L_12450;
    case RC_ADDR(0x00012454u): goto L_12454;
    case RC_ADDR(0x00012456u): goto L_12456;
    case RC_ADDR(0x0001245au): goto L_1245A;
    case RC_ADDR(0x0001245eu): goto L_1245E;
    case RC_ADDR(0x00012460u): goto L_12460;
    case RC_ADDR(0x00012464u): goto L_12464;
    case RC_ADDR(0x00012466u): goto L_12466;
    case RC_ADDR(0x0001246au): goto L_1246A;
    case RC_ADDR(0x0001246cu): goto L_1246C;
    case RC_ADDR(0x00012470u): goto L_12470;
    case RC_ADDR(0x00012474u): goto L_12474;
    case RC_ADDR(0x00012478u): goto L_12478;
    case RC_ADDR(0x0001247au): goto L_1247A;
    case RC_ADDR(0x0001247eu): goto L_1247E;
    case RC_ADDR(0x00012482u): goto L_12482;
    case RC_ADDR(0x00012486u): goto L_12486;
    case RC_ADDR(0x0001248au): goto L_1248A;
    case RC_ADDR(0x0001248eu): goto L_1248E;
    case RC_ADDR(0x00012490u): goto L_12490;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_123A6:
    /* 000123a6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000123a6u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_123AA:
    /* 000123aa   4  tst.w (fffffdaa,A4) */
    c->pc = RC_ADDR(0x000123aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x256u));
    rc_set_nzvc(c, t0, RC_W);

L_123AE:
    /* 000123ae   4  bne 00012432 */
    c->pc = RC_ADDR(0x000123aeu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_12432;

L_123B2:
    /* 000123b2   4  tst.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x000123b2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fc8u));
    rc_set_nzvc(c, t0, RC_W);

L_123B6:
    /* 000123b6   2  beq 00012432 */
    c->pc = RC_ADDR(0x000123b6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_12432;

L_123B8:
    /* 000123b8   4  clr.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x000123b8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_123BC:
    /* 000123bc   4  clr.w (fffffda2,A4) */
    c->pc = RC_ADDR(0x000123bcu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x25eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_123C0:
    /* 000123c0   4  clr.w (fffffda4,A4) */
    c->pc = RC_ADDR(0x000123c0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x25cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_123C4:
    /* 000123c4   4  move.w (fffff28c,A4),D0 */
    c->pc = RC_ADDR(0x000123c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_123C8:
    /* 000123c8   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000123c8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_123CA:
    /* 000123ca   2  bcc 000123d2 */
    c->pc = RC_ADDR(0x000123cau);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_123D2;

L_123CC:
    /* 000123cc   6  move.w #4,(fffffda2,A4) */
    c->pc = RC_ADDR(0x000123ccu);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x25eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123D2:
    /* 000123d2   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000123d2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_123D4:
    /* 000123d4   2  bcc 000123dc */
    c->pc = RC_ADDR(0x000123d4u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_123DC;

L_123D6:
    /* 000123d6   6  move.w #fffc,(fffffda2,A4) */
    c->pc = RC_ADDR(0x000123d6u);
    rc_step(c, m);
    t0 = 0x0000fffcu;
    rc_wr16(c, m, (c->a[4] - 0x25eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123DC:
    /* 000123dc   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000123dcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_123DE:
    /* 000123de   2  bcc 000123e6 */
    c->pc = RC_ADDR(0x000123deu);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_123E6;

L_123E0:
    /* 000123e0   6  move.w #3,(fffffda4,A4) */
    c->pc = RC_ADDR(0x000123e0u);
    rc_step(c, m);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x25cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123E6:
    /* 000123e6   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000123e6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_123E8:
    /* 000123e8   2  bcc 000123f0 */
    c->pc = RC_ADDR(0x000123e8u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_123F0;

L_123EA:
    /* 000123ea   6  move.w #fffd,(fffffda4,A4) */
    c->pc = RC_ADDR(0x000123eau);
    rc_step(c, m);
    t0 = 0x0000fffdu;
    rc_wr16(c, m, (c->a[4] - 0x25cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123F0:
    /* 000123f0   6  cmpi.w #1,(fffffdac,A4) */
    c->pc = RC_ADDR(0x000123f0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x254u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_123F6:
    /* 000123f6   2  bne 00012410 */
    c->pc = RC_ADDR(0x000123f6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_12410;

L_123F8:
    /* 000123f8   4  tst.w (fffffdb2,A4) */
    c->pc = RC_ADDR(0x000123f8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x24eu));
    rc_set_nzvc(c, t0, RC_W);

L_123FC:
    /* 000123fc   2  beq 00012410 */
    c->pc = RC_ADDR(0x000123fcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_12410;

L_123FE:
    /* 000123fe   4  subq.w #1,(fffffdb2,A4) */
    c->pc = RC_ADDR(0x000123feu);
    rc_step(c, m);
    t3 = (c->a[4] - 0x24eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12402:
    /* 00012402   6  move.w #f,(fffffdaa,A4) */
    c->pc = RC_ADDR(0x00012402u);
    rc_step(c, m);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12408:
    /* 00012408   6  move.w #2,(ffffcdf0,A4) */
    c->pc = RC_ADDR(0x00012408u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x3210u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1240E:
    /* 0001240e   2  bra 00012426 */
    c->pc = RC_ADDR(0x0001240eu);
    rc_step(c, m);
    goto L_12426;

L_12410:
    /* 00012410   4  tst.w (fffffdb4,A4) */
    c->pc = RC_ADDR(0x00012410u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x24cu));
    rc_set_nzvc(c, t0, RC_W);

L_12414:
    /* 00012414   2  beq 00012426 */
    c->pc = RC_ADDR(0x00012414u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_12426;

L_12416:
    /* 00012416   4  subq.w #1,(fffffdb4,A4) */
    c->pc = RC_ADDR(0x00012416u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x24cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1241A:
    /* 0001241a   6  move.w #c,(fffffdaa,A4) */
    c->pc = RC_ADDR(0x0001241au);
    rc_step(c, m);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] - 0x256u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12420:
    /* 00012420   6  move.w #3,(ffffcdf0,A4) */
    c->pc = RC_ADDR(0x00012420u);
    rc_step(c, m);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x3210u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12426:
    /* 00012426   6  move.w (fffffd8a,A4),(fffffda6,A4) */
    c->pc = RC_ADDR(0x00012426u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_wr16(c, m, (c->a[4] - 0x25au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1242C:
    /* 0001242c   6  move.w (fffffd8c,A4),(fffffda8,A4) */
    c->pc = RC_ADDR(0x0001242cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_wr16(c, m, (c->a[4] - 0x258u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12432:
    /* 00012432   4  tst.w (fffffdaa,A4) */
    c->pc = RC_ADDR(0x00012432u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x256u));
    rc_set_nzvc(c, t0, RC_W);

L_12436:
    /* 00012436   2  beq 0001248e */
    c->pc = RC_ADDR(0x00012436u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1248E;

L_12438:
    /* 00012438   4  move.w (fffffda2,A4),D0 */
    c->pc = RC_ADDR(0x00012438u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x25eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1243C:
    /* 0001243c   4  add.w D0,(fffffda6,A4) */
    c->pc = RC_ADDR(0x0001243cu);
    rc_step(c, m);
    t3 = (c->a[4] - 0x25au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12440:
    /* 00012440   4  move.w (fffffda4,A4),D0 */
    c->pc = RC_ADDR(0x00012440u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x25cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12444:
    /* 00012444   4  add.w D0,(fffffda8,A4) */
    c->pc = RC_ADDR(0x00012444u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x258u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12448:
    /* 00012448   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x00012448u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1244C:
    /* 0001244c   4  move.w (fffffda8,A4),D0 */
    c->pc = RC_ADDR(0x0001244cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x258u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12450:
    /* 00012450   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00012450u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12454:
    /* 00012454   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012454u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12456:
    /* 00012456   4  move.w (fffffda6,A4),D0 */
    c->pc = RC_ADDR(0x00012456u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x25au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1245A:
    /* 0001245a   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x0001245au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1245E:
    /* 0001245e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001245eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12460:
    /* 00012460   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00012460u);
    rc_step(c, m);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00012464u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_12464:
    /* 00012464   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00012464u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12466:
    /* 00012466   4  subq.w #1,(fffffdaa,A4) */
    c->pc = RC_ADDR(0x00012466u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x256u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1246A:
    /* 0001246a   2  bne 0001248e */
    c->pc = RC_ADDR(0x0001246au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1248E;

L_1246C:
    /* 0001246c   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x0001246cu);
    rc_step(c, m);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12470:
    /* 00012470   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00012470u);
    rc_step(c, m);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12474:
    /* 00012474   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00012474u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12478:
    /* 00012478   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00012478u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1247A:
    /* 0001247a   4  move.w (ffffcdf0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001247au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3210u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1247E:
    /* 0001247e   4  move.w (fffffda8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001247eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x258u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12482:
    /* 00012482   4  move.w (fffffda6,A4),-(A7) */
    c->pc = RC_ADDR(0x00012482u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x25au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12486:
    /* 00012486   4  jsr (000124de) */
    c->pc = RC_ADDR(0x00012486u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001248au));
    rc_depth++;
    c->pc = RC_ADDR(0x000124deu);
    return;

L_1248A:
    /* 0001248a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001248au);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1248E:
    /* 0001248e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001248eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12490:
    /* 00012490   2  rts */
    c->pc = RC_ADDR(0x00012490u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
