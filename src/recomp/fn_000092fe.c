/* fn_000092fe - 734 byte(s), 212 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000092fe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000092feu): goto L_92FE;
    case RC_ADDR(0x00009302u): goto L_9302;
    case RC_ADDR(0x00009308u): goto L_9308;
    case RC_ADDR(0x0000930au): goto L_930A;
    case RC_ADDR(0x0000930eu): goto L_930E;
    case RC_ADDR(0x00009312u): goto L_9312;
    case RC_ADDR(0x00009314u): goto L_9314;
    case RC_ADDR(0x00009316u): goto L_9316;
    case RC_ADDR(0x00009318u): goto L_9318;
    case RC_ADDR(0x0000931au): goto L_931A;
    case RC_ADDR(0x0000931cu): goto L_931C;
    case RC_ADDR(0x00009320u): goto L_9320;
    case RC_ADDR(0x00009324u): goto L_9324;
    case RC_ADDR(0x00009326u): goto L_9326;
    case RC_ADDR(0x00009328u): goto L_9328;
    case RC_ADDR(0x0000932cu): goto L_932C;
    case RC_ADDR(0x0000932eu): goto L_932E;
    case RC_ADDR(0x00009332u): goto L_9332;
    case RC_ADDR(0x00009336u): goto L_9336;
    case RC_ADDR(0x0000933au): goto L_933A;
    case RC_ADDR(0x0000933eu): goto L_933E;
    case RC_ADDR(0x00009342u): goto L_9342;
    case RC_ADDR(0x00009346u): goto L_9346;
    case RC_ADDR(0x0000934au): goto L_934A;
    case RC_ADDR(0x0000934eu): goto L_934E;
    case RC_ADDR(0x00009352u): goto L_9352;
    case RC_ADDR(0x00009356u): goto L_9356;
    case RC_ADDR(0x0000935au): goto L_935A;
    case RC_ADDR(0x0000935cu): goto L_935C;
    case RC_ADDR(0x00009360u): goto L_9360;
    case RC_ADDR(0x00009364u): goto L_9364;
    case RC_ADDR(0x00009366u): goto L_9366;
    case RC_ADDR(0x0000936au): goto L_936A;
    case RC_ADDR(0x0000936eu): goto L_936E;
    case RC_ADDR(0x00009372u): goto L_9372;
    case RC_ADDR(0x00009374u): goto L_9374;
    case RC_ADDR(0x00009378u): goto L_9378;
    case RC_ADDR(0x0000937cu): goto L_937C;
    case RC_ADDR(0x0000937eu): goto L_937E;
    case RC_ADDR(0x00009380u): goto L_9380;
    case RC_ADDR(0x00009384u): goto L_9384;
    case RC_ADDR(0x00009388u): goto L_9388;
    case RC_ADDR(0x0000938cu): goto L_938C;
    case RC_ADDR(0x00009390u): goto L_9390;
    case RC_ADDR(0x00009394u): goto L_9394;
    case RC_ADDR(0x00009396u): goto L_9396;
    case RC_ADDR(0x00009398u): goto L_9398;
    case RC_ADDR(0x0000939cu): goto L_939C;
    case RC_ADDR(0x000093a0u): goto L_93A0;
    case RC_ADDR(0x000093a4u): goto L_93A4;
    case RC_ADDR(0x000093a6u): goto L_93A6;
    case RC_ADDR(0x000093aau): goto L_93AA;
    case RC_ADDR(0x000093aeu): goto L_93AE;
    case RC_ADDR(0x000093b2u): goto L_93B2;
    case RC_ADDR(0x000093b4u): goto L_93B4;
    case RC_ADDR(0x000093b8u): goto L_93B8;
    case RC_ADDR(0x000093bau): goto L_93BA;
    case RC_ADDR(0x000093bcu): goto L_93BC;
    case RC_ADDR(0x000093beu): goto L_93BE;
    case RC_ADDR(0x000093c2u): goto L_93C2;
    case RC_ADDR(0x000093c6u): goto L_93C6;
    case RC_ADDR(0x000093c8u): goto L_93C8;
    case RC_ADDR(0x000093ccu): goto L_93CC;
    case RC_ADDR(0x000093ceu): goto L_93CE;
    case RC_ADDR(0x000093d0u): goto L_93D0;
    case RC_ADDR(0x000093d2u): goto L_93D2;
    case RC_ADDR(0x000093d4u): goto L_93D4;
    case RC_ADDR(0x000093d8u): goto L_93D8;
    case RC_ADDR(0x000093dau): goto L_93DA;
    case RC_ADDR(0x000093deu): goto L_93DE;
    case RC_ADDR(0x000093e2u): goto L_93E2;
    case RC_ADDR(0x000093e6u): goto L_93E6;
    case RC_ADDR(0x000093e8u): goto L_93E8;
    case RC_ADDR(0x000093ecu): goto L_93EC;
    case RC_ADDR(0x000093eeu): goto L_93EE;
    case RC_ADDR(0x000093f2u): goto L_93F2;
    case RC_ADDR(0x000093f6u): goto L_93F6;
    case RC_ADDR(0x000093f8u): goto L_93F8;
    case RC_ADDR(0x000093fcu): goto L_93FC;
    case RC_ADDR(0x000093feu): goto L_93FE;
    case RC_ADDR(0x00009402u): goto L_9402;
    case RC_ADDR(0x00009408u): goto L_9408;
    case RC_ADDR(0x0000940au): goto L_940A;
    case RC_ADDR(0x0000940eu): goto L_940E;
    case RC_ADDR(0x00009412u): goto L_9412;
    case RC_ADDR(0x00009416u): goto L_9416;
    case RC_ADDR(0x00009418u): goto L_9418;
    case RC_ADDR(0x0000941eu): goto L_941E;
    case RC_ADDR(0x00009424u): goto L_9424;
    case RC_ADDR(0x00009426u): goto L_9426;
    case RC_ADDR(0x0000942au): goto L_942A;
    case RC_ADDR(0x0000942cu): goto L_942C;
    case RC_ADDR(0x00009430u): goto L_9430;
    case RC_ADDR(0x00009432u): goto L_9432;
    case RC_ADDR(0x00009436u): goto L_9436;
    case RC_ADDR(0x00009438u): goto L_9438;
    case RC_ADDR(0x0000943cu): goto L_943C;
    case RC_ADDR(0x00009442u): goto L_9442;
    case RC_ADDR(0x00009444u): goto L_9444;
    case RC_ADDR(0x00009448u): goto L_9448;
    case RC_ADDR(0x0000944cu): goto L_944C;
    case RC_ADDR(0x0000944eu): goto L_944E;
    case RC_ADDR(0x00009450u): goto L_9450;
    case RC_ADDR(0x00009452u): goto L_9452;
    case RC_ADDR(0x00009458u): goto L_9458;
    case RC_ADDR(0x0000945au): goto L_945A;
    case RC_ADDR(0x0000945eu): goto L_945E;
    case RC_ADDR(0x00009460u): goto L_9460;
    case RC_ADDR(0x00009466u): goto L_9466;
    case RC_ADDR(0x0000946cu): goto L_946C;
    case RC_ADDR(0x00009470u): goto L_9470;
    case RC_ADDR(0x00009474u): goto L_9474;
    case RC_ADDR(0x00009478u): goto L_9478;
    case RC_ADDR(0x0000947au): goto L_947A;
    case RC_ADDR(0x0000947eu): goto L_947E;
    case RC_ADDR(0x00009480u): goto L_9480;
    case RC_ADDR(0x00009482u): goto L_9482;
    case RC_ADDR(0x00009486u): goto L_9486;
    case RC_ADDR(0x00009488u): goto L_9488;
    case RC_ADDR(0x0000948cu): goto L_948C;
    case RC_ADDR(0x0000948eu): goto L_948E;
    case RC_ADDR(0x00009494u): goto L_9494;
    case RC_ADDR(0x0000949au): goto L_949A;
    case RC_ADDR(0x0000949eu): goto L_949E;
    case RC_ADDR(0x000094a2u): goto L_94A2;
    case RC_ADDR(0x000094a6u): goto L_94A6;
    case RC_ADDR(0x000094aau): goto L_94AA;
    case RC_ADDR(0x000094aeu): goto L_94AE;
    case RC_ADDR(0x000094b0u): goto L_94B0;
    case RC_ADDR(0x000094b4u): goto L_94B4;
    case RC_ADDR(0x000094b6u): goto L_94B6;
    case RC_ADDR(0x000094bau): goto L_94BA;
    case RC_ADDR(0x000094bcu): goto L_94BC;
    case RC_ADDR(0x000094beu): goto L_94BE;
    case RC_ADDR(0x000094c2u): goto L_94C2;
    case RC_ADDR(0x000094c4u): goto L_94C4;
    case RC_ADDR(0x000094c8u): goto L_94C8;
    case RC_ADDR(0x000094ceu): goto L_94CE;
    case RC_ADDR(0x000094d0u): goto L_94D0;
    case RC_ADDR(0x000094d4u): goto L_94D4;
    case RC_ADDR(0x000094d8u): goto L_94D8;
    case RC_ADDR(0x000094dau): goto L_94DA;
    case RC_ADDR(0x000094dcu): goto L_94DC;
    case RC_ADDR(0x000094e0u): goto L_94E0;
    case RC_ADDR(0x000094e4u): goto L_94E4;
    case RC_ADDR(0x000094e6u): goto L_94E6;
    case RC_ADDR(0x000094eau): goto L_94EA;
    case RC_ADDR(0x000094ecu): goto L_94EC;
    case RC_ADDR(0x000094f0u): goto L_94F0;
    case RC_ADDR(0x000094f2u): goto L_94F2;
    case RC_ADDR(0x000094f6u): goto L_94F6;
    case RC_ADDR(0x000094f8u): goto L_94F8;
    case RC_ADDR(0x000094fau): goto L_94FA;
    case RC_ADDR(0x000094feu): goto L_94FE;
    case RC_ADDR(0x00009504u): goto L_9504;
    case RC_ADDR(0x00009508u): goto L_9508;
    case RC_ADDR(0x0000950cu): goto L_950C;
    case RC_ADDR(0x0000950eu): goto L_950E;
    case RC_ADDR(0x00009512u): goto L_9512;
    case RC_ADDR(0x00009514u): goto L_9514;
    case RC_ADDR(0x00009518u): goto L_9518;
    case RC_ADDR(0x0000951au): goto L_951A;
    case RC_ADDR(0x0000951eu): goto L_951E;
    case RC_ADDR(0x00009524u): goto L_9524;
    case RC_ADDR(0x00009528u): goto L_9528;
    case RC_ADDR(0x0000952eu): goto L_952E;
    case RC_ADDR(0x00009532u): goto L_9532;
    case RC_ADDR(0x00009534u): goto L_9534;
    case RC_ADDR(0x00009538u): goto L_9538;
    case RC_ADDR(0x0000953cu): goto L_953C;
    case RC_ADDR(0x0000953eu): goto L_953E;
    case RC_ADDR(0x00009542u): goto L_9542;
    case RC_ADDR(0x00009544u): goto L_9544;
    case RC_ADDR(0x00009548u): goto L_9548;
    case RC_ADDR(0x0000954cu): goto L_954C;
    case RC_ADDR(0x00009550u): goto L_9550;
    case RC_ADDR(0x00009554u): goto L_9554;
    case RC_ADDR(0x00009556u): goto L_9556;
    case RC_ADDR(0x0000955au): goto L_955A;
    case RC_ADDR(0x0000955cu): goto L_955C;
    case RC_ADDR(0x00009560u): goto L_9560;
    case RC_ADDR(0x00009564u): goto L_9564;
    case RC_ADDR(0x00009568u): goto L_9568;
    case RC_ADDR(0x0000956cu): goto L_956C;
    case RC_ADDR(0x00009570u): goto L_9570;
    case RC_ADDR(0x00009574u): goto L_9574;
    case RC_ADDR(0x00009576u): goto L_9576;
    case RC_ADDR(0x0000957au): goto L_957A;
    case RC_ADDR(0x0000957eu): goto L_957E;
    case RC_ADDR(0x00009582u): goto L_9582;
    case RC_ADDR(0x00009586u): goto L_9586;
    case RC_ADDR(0x0000958au): goto L_958A;
    case RC_ADDR(0x0000958cu): goto L_958C;
    case RC_ADDR(0x00009590u): goto L_9590;
    case RC_ADDR(0x00009592u): goto L_9592;
    case RC_ADDR(0x00009598u): goto L_9598;
    case RC_ADDR(0x0000959au): goto L_959A;
    case RC_ADDR(0x0000959eu): goto L_959E;
    case RC_ADDR(0x000095a4u): goto L_95A4;
    case RC_ADDR(0x000095aau): goto L_95AA;
    case RC_ADDR(0x000095aeu): goto L_95AE;
    case RC_ADDR(0x000095b0u): goto L_95B0;
    case RC_ADDR(0x000095b4u): goto L_95B4;
    case RC_ADDR(0x000095b8u): goto L_95B8;
    case RC_ADDR(0x000095bau): goto L_95BA;
    case RC_ADDR(0x000095beu): goto L_95BE;
    case RC_ADDR(0x000095c4u): goto L_95C4;
    case RC_ADDR(0x000095c8u): goto L_95C8;
    case RC_ADDR(0x000095ccu): goto L_95CC;
    case RC_ADDR(0x000095d0u): goto L_95D0;
    case RC_ADDR(0x000095d4u): goto L_95D4;
    case RC_ADDR(0x000095d8u): goto L_95D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_92FE:
    /* 000092fe   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x000092feu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_9302:
    /* 00009302   6  cmpi.w #6,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00009302u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_9308:
    /* 00009308   2  bgt 0000931c */
    c->pc = RC_ADDR(0x00009308u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_931C;

L_930A:
    /* 0000930a   4  move.w #24,-(A7) */
    c->pc = RC_ADDR(0x0000930au);
    rc_step(c, m, 12);
    t0 = 0x00000024u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_930E:
    /* 0000930e   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000930eu);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00009312u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_9312:
    /* 00009312   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009312u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9314:
    /* 00009314   2  tst.w D0 */
    c->pc = RC_ADDR(0x00009314u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_9316:
    /* 00009316   2  bne 0000931c */
    c->pc = RC_ADDR(0x00009316u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_931C;

L_9318:
    /* 00009318   2  unlk A5 */
    c->pc = RC_ADDR(0x00009318u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_931A:
    /* 0000931a   2  rts */
    c->pc = RC_ADDR(0x0000931au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_931C:
    /* 0000931c   4  pea (000095dc) */
    c->pc = RC_ADDR(0x0000931cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000095dcu));

L_9320:
    /* 00009320   4  jsr (00007338) */
    c->pc = RC_ADDR(0x00009320u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009324u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007338u);
    return;

L_9324:
    /* 00009324   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009324u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9326:
    /* 00009326   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00009326u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9328:
    /* 00009328   4  jsr (0000737e) */
    c->pc = RC_ADDR(0x00009328u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000932cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000737eu);
    return;

L_932C:
    /* 0000932c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000932cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_932E:
    /* 0000932e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000932eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9332:
    /* 00009332   4  jsr (ffff8032,A4) */
    c->pc = RC_ADDR(0x00009332u);
    rc_step(c, m, 18);
    /* vector 8 */
    rc_push32(c, m, RC_ADDR(0x00009336u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000151au);
    return;

L_9336:
    /* 00009336   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009336u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_933A:
    /* 0000933a   4  pea (000095e8) */
    c->pc = RC_ADDR(0x0000933au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000095e8u));

L_933E:
    /* 0000933e   4  pea (000095df) */
    c->pc = RC_ADDR(0x0000933eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000095dfu));

L_9342:
    /* 00009342   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00009342u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00009346u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_9346:
    /* 00009346   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00009346u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_934A:
    /* 0000934a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000934au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_934E:
    /* 0000934e   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0000934eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9352:
    /* 00009352   4  pea (000095f3) */
    c->pc = RC_ADDR(0x00009352u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000095f3u));

L_9356:
    /* 00009356   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x00009356u);
    rc_step(c, m, 18);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x0000935au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000010beu);
    return;

L_935A:
    /* 0000935a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000935au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_935C:
    /* 0000935c   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000935cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9360:
    /* 00009360   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00009360u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9364:
    /* 00009364   2  moveq #e,D0 */
    c->pc = RC_ADDR(0x00009364u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9366:
    /* 00009366   4  sub.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00009366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_936A:
    /* 0000936a   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000936au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_936E:
    /* 0000936e   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000936eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_9372:
    /* 00009372   2  beq 000093a6 */
    c->pc = RC_ADDR(0x00009372u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_93A6;

L_9374:
    /* 00009374   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00009374u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9378:
    /* 00009378   4  add.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00009378u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_937C:
    /* 0000937c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000937cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_937E:
    /* 0000937e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000937eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9380:
    /* 00009380   4  lea (ffffefaa,A4),A0 */
    c->pc = RC_ADDR(0x00009380u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1056u);

L_9384:
    /* 00009384   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00009384u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9388:
    /* 00009388   4  or.w D1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00009388u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_938C:
    /* 0000938c   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x0000938cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9390:
    /* 00009390   4  add.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00009390u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9394:
    /* 00009394   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009394u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9396:
    /* 00009396   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009396u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9398:
    /* 00009398   4  lea (ffffefaa,A4),A0 */
    c->pc = RC_ADDR(0x00009398u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1056u);

L_939C:
    /* 0000939c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000939cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_93A0:
    /* 000093a0   4  subq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000093a0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_93A4:
    /* 000093a4   2  bra 0000936e */
    c->pc = RC_ADDR(0x000093a4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_936E;

L_93A6:
    /* 000093a6   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000093a6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_93AA:
    /* 000093aa   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000093aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93AE:
    /* 000093ae   4  add.w #eb,D0 */
    c->pc = RC_ADDR(0x000093aeu);
    rc_step(c, m, 10);
    t0 = 0x000000ebu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_93B2:
    /* 000093b2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000093b2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_93B4:
    /* 000093b4   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000093b4u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000093b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_93B8:
    /* 000093b8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000093b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_93BA:
    /* 000093ba   2  tst.w D0 */
    c->pc = RC_ADDR(0x000093bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_93BC:
    /* 000093bc   2  beq 000093fe */
    c->pc = RC_ADDR(0x000093bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_93FE;

L_93BE:
    /* 000093be   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000093beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93C2:
    /* 000093c2   4  add.w #e1,D0 */
    c->pc = RC_ADDR(0x000093c2u);
    rc_step(c, m, 10);
    t0 = 0x000000e1u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_93C6:
    /* 000093c6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000093c6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_93C8:
    /* 000093c8   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000093c8u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000093ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_93CC:
    /* 000093cc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000093ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_93CE:
    /* 000093ce   2  tst.w D0 */
    c->pc = RC_ADDR(0x000093ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_93D0:
    /* 000093d0   2  bne 000093fe */
    c->pc = RC_ADDR(0x000093d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_93FE;

L_93D2:
    /* 000093d2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000093d2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_93D4:
    /* 000093d4   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x000093d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93D8:
    /* 000093d8   2  asl.w D1,D0 */
    c->pc = RC_ADDR(0x000093d8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W));

L_93DA:
    /* 000093da   4  or.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000093dau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_93DE:
    /* 000093de   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000093deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93E2:
    /* 000093e2   4  add.w #eb,D0 */
    c->pc = RC_ADDR(0x000093e2u);
    rc_step(c, m, 10);
    t0 = 0x000000ebu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_93E6:
    /* 000093e6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000093e6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_93E8:
    /* 000093e8   4  jsr (00007108) */
    c->pc = RC_ADDR(0x000093e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000093ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007108u);
    return;

L_93EC:
    /* 000093ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000093ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_93EE:
    /* 000093ee   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000093eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93F2:
    /* 000093f2   4  add.w #f0,D0 */
    c->pc = RC_ADDR(0x000093f2u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_93F6:
    /* 000093f6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000093f6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_93F8:
    /* 000093f8   4  jsr (00007108) */
    c->pc = RC_ADDR(0x000093f8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000093fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007108u);
    return;

L_93FC:
    /* 000093fc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000093fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_93FE:
    /* 000093fe   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000093feu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9402:
    /* 00009402   6  cmpi.w #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00009402u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_9408:
    /* 00009408   2  blt 000093aa */
    c->pc = RC_ADDR(0x00009408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_93AA; }

L_940A:
    /* 0000940a   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000940au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_940E:
    /* 0000940e   4  move.w (ffff8430,A4),D0 */
    c->pc = RC_ADDR(0x0000940eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9412:
    /* 00009412   4  cmp.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00009412u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9416:
    /* 00009416   2  bne 00009426 */
    c->pc = RC_ADDR(0x00009416u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9426;

L_9418:
    /* 00009418   6  move.w #3e8,(ffff8430,A4) */
    c->pc = RC_ADDR(0x00009418u);
    rc_step(c, m, 16);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] - 0x7bd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_941E:
    /* 0000941e   6  move.w #11,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000941eu);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9424:
    /* 00009424   2  bra 00009466 */
    c->pc = RC_ADDR(0x00009424u);
    rc_step(c, m, 10);
    goto L_9466;

L_9426:
    /* 00009426   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00009426u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_942A:
    /* 0000942a   2  bne 00009466 */
    c->pc = RC_ADDR(0x0000942au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9466;

L_942C:
    /* 0000942c   4  tst.w (ffffefa8,A4) */
    c->pc = RC_ADDR(0x0000942cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1058u));
    rc_set_nzvc(c, t0, RC_W);

L_9430:
    /* 00009430   2  bne 00009466 */
    c->pc = RC_ADDR(0x00009430u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9466;

L_9432:
    /* 00009432   4  tst.w (ffffcf48,A4) */
    c->pc = RC_ADDR(0x00009432u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b8u));
    rc_set_nzvc(c, t0, RC_W);

L_9436:
    /* 00009436   2  bne 0000943c */
    c->pc = RC_ADDR(0x00009436u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_943C;

L_9438:
    /* 00009438   4  bra 00009318 */
    c->pc = RC_ADDR(0x00009438u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9318;

L_943C:
    /* 0000943c   6  cmpi.w #c,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x0000943cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_9442:
    /* 00009442   2  ble 00009460 */
    c->pc = RC_ADDR(0x00009442u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9460;

L_9444:
    /* 00009444   4  move.w #dc,-(A7) */
    c->pc = RC_ADDR(0x00009444u);
    rc_step(c, m, 12);
    t0 = 0x000000dcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9448:
    /* 00009448   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00009448u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0000944cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_944C:
    /* 0000944c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000944cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_944E:
    /* 0000944e   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000944eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_9450:
    /* 00009450   2  beq 0000945a */
    c->pc = RC_ADDR(0x00009450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_945A;

L_9452:
    /* 00009452   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00009452u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9458:
    /* 00009458   2  bra 0000945e */
    c->pc = RC_ADDR(0x00009458u);
    rc_step(c, m, 10);
    goto L_945E;

L_945A:
    /* 0000945a   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000945au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_945E:
    /* 0000945e   2  bra 00009466 */
    c->pc = RC_ADDR(0x0000945eu);
    rc_step(c, m, 10);
    goto L_9466;

L_9460:
    /* 00009460   6  move.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00009460u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9466:
    /* 00009466   6  move.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00009466u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_946C:
    /* 0000946c   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0000946cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9470:
    /* 00009470   4  clr.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x00009470u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9474:
    /* 00009474   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00009474u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_9478:
    /* 00009478   2  beq 0000949a */
    c->pc = RC_ADDR(0x00009478u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_949A;

L_947A:
    /* 0000947a   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x0000947au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_947E:
    /* 0000947e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000947eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9480:
    /* 00009480   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009480u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9482:
    /* 00009482   4  lea (ffffefaa,A4),A0 */
    c->pc = RC_ADDR(0x00009482u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1056u);

L_9486:
    /* 00009486   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00009486u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_9488:
    /* 00009488   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00009488u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_948C:
    /* 0000948c   2  or.w D0,(A0) */
    c->pc = RC_ADDR(0x0000948cu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_948E:
    /* 0000948e   6  move.w #3,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000948eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9494:
    /* 00009494   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00009494u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_949A:
    /* 0000949a   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0000949au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_949E:
    /* 0000949e   4  beq 000095d4 */
    c->pc = RC_ADDR(0x0000949eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_95D4;

L_94A2:
    /* 000094a2   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x000094a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_94A6:
    /* 000094a6   4  beq 00009534 */
    c->pc = RC_ADDR(0x000094a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9534;

L_94AA:
    /* 000094aa   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000094aau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94AE:
    /* 000094ae   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000094aeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_94B0:
    /* 000094b0   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x000094b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94B4:
    /* 000094b4   2  asl.w D1,D0 */
    c->pc = RC_ADDR(0x000094b4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W));

L_94B6:
    /* 000094b6   4  and.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000094b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_94BA:
    /* 000094ba   2  beq 00009524 */
    c->pc = RC_ADDR(0x000094bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9524;

L_94BC:
    /* 000094bc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000094bcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_94BE:
    /* 000094be   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x000094beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94C2:
    /* 000094c2   2  asl.w D1,D0 */
    c->pc = RC_ADDR(0x000094c2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W));

L_94C4:
    /* 000094c4   4  sub.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000094c4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_94C8:
    /* 000094c8   6  cmpi.w #11,(ffffefd6,A4) */
    c->pc = RC_ADDR(0x000094c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x102au));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_94CE:
    /* 000094ce   2  bge 000094d4 */
    c->pc = RC_ADDR(0x000094ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_94D4;

L_94D0:
    /* 000094d0   4  addq.w #1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000094d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_94D4:
    /* 000094d4   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000094d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94D8:
    /* 000094d8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000094d8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_94DA:
    /* 000094da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000094dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_94DC:
    /* 000094dc   4  lea (ffffefca,A4),A0 */
    c->pc = RC_ADDR(0x000094dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1036u);

L_94E0:
    /* 000094e0   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000094e0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_94E4:
    /* 000094e4   2  beq 000094f2 */
    c->pc = RC_ADDR(0x000094e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_94F2;

L_94E6:
    /* 000094e6   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000094e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94EA:
    /* 000094ea   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x000094eau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_94EC:
    /* 000094ec   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000094ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_94F0:
    /* 000094f0   2  bra 0000951e */
    c->pc = RC_ADDR(0x000094f0u);
    rc_step(c, m, 10);
    goto L_951E;

L_94F2:
    /* 000094f2   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000094f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94F6:
    /* 000094f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000094f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_94F8:
    /* 000094f8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000094f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_94FA:
    /* 000094fa   4  lea (ffffefca,A4),A0 */
    c->pc = RC_ADDR(0x000094fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x1036u);

L_94FE:
    /* 000094fe   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000094feu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9504:
    /* 00009504   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00009504u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9508:
    /* 00009508   4  add.w #e1,D0 */
    c->pc = RC_ADDR(0x00009508u);
    rc_step(c, m, 10);
    t0 = 0x000000e1u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_950C:
    /* 0000950c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000950cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_950E:
    /* 0000950e   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000950eu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00009512u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_9512:
    /* 00009512   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009512u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9514:
    /* 00009514   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00009514u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9518:
    /* 00009518   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00009518u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_951A:
    /* 0000951a   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000951au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_951E:
    /* 0000951e   6  move.w #5,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000951eu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9524:
    /* 00009524   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00009524u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9528:
    /* 00009528   6  cmpi.w #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00009528u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_952E:
    /* 0000952e   4  blt 000094ae */
    c->pc = RC_ADDR(0x0000952eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_94AE; }

L_9532:
    /* 00009532   2  bra 00009538 */
    c->pc = RC_ADDR(0x00009532u);
    rc_step(c, m, 10);
    goto L_9538;

L_9534:
    /* 00009534   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00009534u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9538:
    /* 00009538   4  tst.w (fffffebc,A4) */
    c->pc = RC_ADDR(0x00009538u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x144u));
    rc_set_nzvc(c, t0, RC_W);

L_953C:
    /* 0000953c   2  beq 00009548 */
    c->pc = RC_ADDR(0x0000953cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9548;

L_953E:
    /* 0000953e   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000953eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_9542:
    /* 00009542   2  bne 00009548 */
    c->pc = RC_ADDR(0x00009542u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9548;

L_9544:
    /* 00009544   4  bra 00009318 */
    c->pc = RC_ADDR(0x00009544u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9318;

L_9548:
    /* 00009548   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009548u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_954C:
    /* 0000954c   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000954cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9550:
    /* 00009550   4  jsr (000022ba) */
    c->pc = RC_ADDR(0x00009550u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009554u));
    rc_depth++;
    c->pc = RC_ADDR(0x000022bau);
    return;

L_9554:
    /* 00009554   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00009554u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_9556:
    /* 00009556   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00009556u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_955A:
    /* 0000955a   2  beq 00009576 */
    c->pc = RC_ADDR(0x0000955au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9576;

L_955C:
    /* 0000955c   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000955cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9560:
    /* 00009560   4  pea (00009602) */
    c->pc = RC_ADDR(0x00009560u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009602u));

L_9564:
    /* 00009564   4  pea (000095fe) */
    c->pc = RC_ADDR(0x00009564u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000095feu));

L_9568:
    /* 00009568   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009568u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_956C:
    /* 0000956c   4  jsr (00001faa) */
    c->pc = RC_ADDR(0x0000956cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009570u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001faau);
    return;

L_9570:
    /* 00009570   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009570u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9574:
    /* 00009574   2  bra 000095d0 */
    c->pc = RC_ADDR(0x00009574u);
    rc_step(c, m, 10);
    goto L_95D0;

L_9576:
    /* 00009576   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00009576u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_957A:
    /* 0000957a   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0000957au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_957E:
    /* 0000957e   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x0000957eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9582:
    /* 00009582   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009582u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9586:
    /* 00009586   4  jsr (000091fe) */
    c->pc = RC_ADDR(0x00009586u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000958au));
    rc_depth++;
    c->pc = RC_ADDR(0x000091feu);
    return;

L_958A:
    /* 0000958a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000958au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_958C:
    /* 0000958c   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0000958cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_9590:
    /* 00009590   2  beq 000095aa */
    c->pc = RC_ADDR(0x00009590u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_95AA;

L_9592:
    /* 00009592   6  cmpi.w #2,(ffffcf84,A4) */
    c->pc = RC_ADDR(0x00009592u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307cu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_9598:
    /* 00009598   2  bne 000095aa */
    c->pc = RC_ADDR(0x00009598u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_95AA;

L_959A:
    /* 0000959a   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0000959au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_959E:
    /* 0000959e   6  move.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000959eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_95A4:
    /* 000095a4   6  move.w #c,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000095a4u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_95AA:
    /* 000095aa   4  tst.w (fffffff0,A5) */
    c->pc = RC_ADDR(0x000095aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_95AE:
    /* 000095ae   2  beq 000095d0 */
    c->pc = RC_ADDR(0x000095aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_95D0;

L_95B0:
    /* 000095b0   4  move.w (ffffcf84,A4),D0 */
    c->pc = RC_ADDR(0x000095b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x307cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_95B4:
    /* 000095b4   4  cmp.w (ffffefd4,A4),D0 */
    c->pc = RC_ADDR(0x000095b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x102cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_95B8:
    /* 000095b8   2  bne 000095d0 */
    c->pc = RC_ADDR(0x000095b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_95D0;

L_95BA:
    /* 000095ba   4  subq.w #1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000095bau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_95BE:
    /* 000095be   6  move.w #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000095beu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_95C4:
    /* 000095c4   4  move.w (ffffefd6,A4),D0 */
    c->pc = RC_ADDR(0x000095c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x102au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_95C8:
    /* 000095c8   4  addq.w #1,(ffffefd6,A4) */
    c->pc = RC_ADDR(0x000095c8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x102au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_95CC:
    /* 000095cc   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000095ccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_95D0:
    /* 000095d0   4  bra 0000949a */
    c->pc = RC_ADDR(0x000095d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_949A;

L_95D4:
    /* 000095d4   4  addq.w #1,(ffffefa8,A4) */
    c->pc = RC_ADDR(0x000095d4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x1058u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_95D8:
    /* 000095d8   4  bra 00009318 */
    c->pc = RC_ADDR(0x000095d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9318;

}
