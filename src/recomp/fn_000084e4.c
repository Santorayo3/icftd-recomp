/* fn_000084e4 - 444 byte(s), 130 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000084e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000084e4u): goto L_84E4;
    case RC_ADDR(0x000084e8u): goto L_84E8;
    case RC_ADDR(0x000084ecu): goto L_84EC;
    case RC_ADDR(0x000084eeu): goto L_84EE;
    case RC_ADDR(0x000084f4u): goto L_84F4;
    case RC_ADDR(0x000084f6u): goto L_84F6;
    case RC_ADDR(0x000084fau): goto L_84FA;
    case RC_ADDR(0x000084fcu): goto L_84FC;
    case RC_ADDR(0x00008500u): goto L_8500;
    case RC_ADDR(0x00008502u): goto L_8502;
    case RC_ADDR(0x00008506u): goto L_8506;
    case RC_ADDR(0x00008508u): goto L_8508;
    case RC_ADDR(0x0000850cu): goto L_850C;
    case RC_ADDR(0x00008510u): goto L_8510;
    case RC_ADDR(0x00008512u): goto L_8512;
    case RC_ADDR(0x00008518u): goto L_8518;
    case RC_ADDR(0x0000851au): goto L_851A;
    case RC_ADDR(0x0000851eu): goto L_851E;
    case RC_ADDR(0x00008520u): goto L_8520;
    case RC_ADDR(0x00008524u): goto L_8524;
    case RC_ADDR(0x00008526u): goto L_8526;
    case RC_ADDR(0x0000852au): goto L_852A;
    case RC_ADDR(0x0000852cu): goto L_852C;
    case RC_ADDR(0x00008530u): goto L_8530;
    case RC_ADDR(0x00008534u): goto L_8534;
    case RC_ADDR(0x00008536u): goto L_8536;
    case RC_ADDR(0x0000853cu): goto L_853C;
    case RC_ADDR(0x0000853eu): goto L_853E;
    case RC_ADDR(0x00008542u): goto L_8542;
    case RC_ADDR(0x00008544u): goto L_8544;
    case RC_ADDR(0x00008548u): goto L_8548;
    case RC_ADDR(0x0000854au): goto L_854A;
    case RC_ADDR(0x0000854eu): goto L_854E;
    case RC_ADDR(0x00008550u): goto L_8550;
    case RC_ADDR(0x00008554u): goto L_8554;
    case RC_ADDR(0x00008558u): goto L_8558;
    case RC_ADDR(0x0000855au): goto L_855A;
    case RC_ADDR(0x00008560u): goto L_8560;
    case RC_ADDR(0x00008562u): goto L_8562;
    case RC_ADDR(0x00008566u): goto L_8566;
    case RC_ADDR(0x00008568u): goto L_8568;
    case RC_ADDR(0x0000856cu): goto L_856C;
    case RC_ADDR(0x0000856eu): goto L_856E;
    case RC_ADDR(0x00008572u): goto L_8572;
    case RC_ADDR(0x00008574u): goto L_8574;
    case RC_ADDR(0x00008578u): goto L_8578;
    case RC_ADDR(0x0000857cu): goto L_857C;
    case RC_ADDR(0x0000857eu): goto L_857E;
    case RC_ADDR(0x00008582u): goto L_8582;
    case RC_ADDR(0x00008584u): goto L_8584;
    case RC_ADDR(0x00008588u): goto L_8588;
    case RC_ADDR(0x0000858au): goto L_858A;
    case RC_ADDR(0x0000858eu): goto L_858E;
    case RC_ADDR(0x00008590u): goto L_8590;
    case RC_ADDR(0x00008594u): goto L_8594;
    case RC_ADDR(0x00008598u): goto L_8598;
    case RC_ADDR(0x0000859au): goto L_859A;
    case RC_ADDR(0x0000859eu): goto L_859E;
    case RC_ADDR(0x000085a0u): goto L_85A0;
    case RC_ADDR(0x000085a4u): goto L_85A4;
    case RC_ADDR(0x000085a6u): goto L_85A6;
    case RC_ADDR(0x000085aau): goto L_85AA;
    case RC_ADDR(0x000085aeu): goto L_85AE;
    case RC_ADDR(0x000085b0u): goto L_85B0;
    case RC_ADDR(0x000085b4u): goto L_85B4;
    case RC_ADDR(0x000085b6u): goto L_85B6;
    case RC_ADDR(0x000085bau): goto L_85BA;
    case RC_ADDR(0x000085bcu): goto L_85BC;
    case RC_ADDR(0x000085c0u): goto L_85C0;
    case RC_ADDR(0x000085c2u): goto L_85C2;
    case RC_ADDR(0x000085c6u): goto L_85C6;
    case RC_ADDR(0x000085cau): goto L_85CA;
    case RC_ADDR(0x000085ccu): goto L_85CC;
    case RC_ADDR(0x000085d0u): goto L_85D0;
    case RC_ADDR(0x000085d2u): goto L_85D2;
    case RC_ADDR(0x000085d6u): goto L_85D6;
    case RC_ADDR(0x000085d8u): goto L_85D8;
    case RC_ADDR(0x000085dcu): goto L_85DC;
    case RC_ADDR(0x000085e2u): goto L_85E2;
    case RC_ADDR(0x000085e4u): goto L_85E4;
    case RC_ADDR(0x000085eau): goto L_85EA;
    case RC_ADDR(0x000085f0u): goto L_85F0;
    case RC_ADDR(0x000085f2u): goto L_85F2;
    case RC_ADDR(0x000085f8u): goto L_85F8;
    case RC_ADDR(0x000085feu): goto L_85FE;
    case RC_ADDR(0x00008600u): goto L_8600;
    case RC_ADDR(0x00008606u): goto L_8606;
    case RC_ADDR(0x0000860cu): goto L_860C;
    case RC_ADDR(0x0000860eu): goto L_860E;
    case RC_ADDR(0x00008614u): goto L_8614;
    case RC_ADDR(0x00008618u): goto L_8618;
    case RC_ADDR(0x0000861cu): goto L_861C;
    case RC_ADDR(0x00008620u): goto L_8620;
    case RC_ADDR(0x00008624u): goto L_8624;
    case RC_ADDR(0x00008628u): goto L_8628;
    case RC_ADDR(0x0000862au): goto L_862A;
    case RC_ADDR(0x0000862eu): goto L_862E;
    case RC_ADDR(0x00008632u): goto L_8632;
    case RC_ADDR(0x00008636u): goto L_8636;
    case RC_ADDR(0x0000863cu): goto L_863C;
    case RC_ADDR(0x00008640u): goto L_8640;
    case RC_ADDR(0x00008644u): goto L_8644;
    case RC_ADDR(0x00008648u): goto L_8648;
    case RC_ADDR(0x0000864cu): goto L_864C;
    case RC_ADDR(0x0000864eu): goto L_864E;
    case RC_ADDR(0x00008652u): goto L_8652;
    case RC_ADDR(0x00008656u): goto L_8656;
    case RC_ADDR(0x0000865au): goto L_865A;
    case RC_ADDR(0x0000865cu): goto L_865C;
    case RC_ADDR(0x0000865eu): goto L_865E;
    case RC_ADDR(0x00008660u): goto L_8660;
    case RC_ADDR(0x00008664u): goto L_8664;
    case RC_ADDR(0x00008666u): goto L_8666;
    case RC_ADDR(0x0000866au): goto L_866A;
    case RC_ADDR(0x0000866eu): goto L_866E;
    case RC_ADDR(0x00008672u): goto L_8672;
    case RC_ADDR(0x00008674u): goto L_8674;
    case RC_ADDR(0x00008676u): goto L_8676;
    case RC_ADDR(0x00008678u): goto L_8678;
    case RC_ADDR(0x0000867cu): goto L_867C;
    case RC_ADDR(0x0000867eu): goto L_867E;
    case RC_ADDR(0x00008680u): goto L_8680;
    case RC_ADDR(0x00008684u): goto L_8684;
    case RC_ADDR(0x00008688u): goto L_8688;
    case RC_ADDR(0x0000868cu): goto L_868C;
    case RC_ADDR(0x00008690u): goto L_8690;
    case RC_ADDR(0x00008694u): goto L_8694;
    case RC_ADDR(0x00008698u): goto L_8698;
    case RC_ADDR(0x0000869cu): goto L_869C;
    case RC_ADDR(0x0000869eu): goto L_869E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_84E4:
    /* 000084e4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000084e4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_84E8:
    /* 000084e8   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x000084e8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_84EC:
    /* 000084ec   2  ble 0000850c */
    c->pc = RC_ADDR(0x000084ecu);
    if (rc_cond(c, 15)) goto L_850C;

L_84EE:
    /* 000084ee   6  cmpi.w #12c,(8a,A4) */
    c->pc = RC_ADDR(0x000084eeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_cmp(c, RC_W, t0, 0x0000012cu);

L_84F4:
    /* 000084f4   2  bge 000084fc */
    c->pc = RC_ADDR(0x000084f4u);
    if (rc_cond(c, 12)) goto L_84FC;

L_84F6:
    /* 000084f6   4  addq.w #2,(8e,A4) */
    c->pc = RC_ADDR(0x000084f6u);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_84FA:
    /* 000084fa   2  bra 0000850c */
    c->pc = RC_ADDR(0x000084fau);
    goto L_850C;

L_84FC:
    /* 000084fc   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x000084fcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8500:
    /* 00008500   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008500u);
    rc_ext_l(c, 0);

L_8502:
    /* 00008502   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00008502u);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_8506:
    /* 00008506   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00008506u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8508:
    /* 00008508   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x00008508u);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_850C:
    /* 0000850c   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000850cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_8510:
    /* 00008510   2  bge 00008530 */
    c->pc = RC_ADDR(0x00008510u);
    if (rc_cond(c, 12)) goto L_8530;

L_8512:
    /* 00008512   6  cmpi.w #28,(8a,A4) */
    c->pc = RC_ADDR(0x00008512u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_8518:
    /* 00008518   2  ble 00008520 */
    c->pc = RC_ADDR(0x00008518u);
    if (rc_cond(c, 15)) goto L_8520;

L_851A:
    /* 0000851a   4  subq.w #2,(8e,A4) */
    c->pc = RC_ADDR(0x0000851au);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_851E:
    /* 0000851e   2  bra 00008530 */
    c->pc = RC_ADDR(0x0000851eu);
    goto L_8530;

L_8520:
    /* 00008520   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x00008520u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8524:
    /* 00008524   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008524u);
    rc_ext_l(c, 0);

L_8526:
    /* 00008526   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00008526u);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_852A:
    /* 0000852a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000852au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_852C:
    /* 0000852c   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x0000852cu);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8530:
    /* 00008530   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x00008530u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_8534:
    /* 00008534   2  ble 00008554 */
    c->pc = RC_ADDR(0x00008534u);
    if (rc_cond(c, 15)) goto L_8554;

L_8536:
    /* 00008536   6  cmpi.w #a0,(8c,A4) */
    c->pc = RC_ADDR(0x00008536u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_cmp(c, RC_W, t0, 0x000000a0u);

L_853C:
    /* 0000853c   2  bge 00008544 */
    c->pc = RC_ADDR(0x0000853cu);
    if (rc_cond(c, 12)) goto L_8544;

L_853E:
    /* 0000853e   4  addq.w #2,(90,A4) */
    c->pc = RC_ADDR(0x0000853eu);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8542:
    /* 00008542   2  bra 00008554 */
    c->pc = RC_ADDR(0x00008542u);
    goto L_8554;

L_8544:
    /* 00008544   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x00008544u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8548:
    /* 00008548   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008548u);
    rc_ext_l(c, 0);

L_854A:
    /* 0000854a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000854au);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_854E:
    /* 0000854e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000854eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8550:
    /* 00008550   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x00008550u);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8554:
    /* 00008554   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x00008554u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_8558:
    /* 00008558   2  bge 00008578 */
    c->pc = RC_ADDR(0x00008558u);
    if (rc_cond(c, 12)) goto L_8578;

L_855A:
    /* 0000855a   6  cmpi.w #46,(8c,A4) */
    c->pc = RC_ADDR(0x0000855au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_cmp(c, RC_W, t0, 0x00000046u);

L_8560:
    /* 00008560   2  ble 00008568 */
    c->pc = RC_ADDR(0x00008560u);
    if (rc_cond(c, 15)) goto L_8568;

L_8562:
    /* 00008562   4  subq.w #2,(90,A4) */
    c->pc = RC_ADDR(0x00008562u);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8566:
    /* 00008566   2  bra 00008578 */
    c->pc = RC_ADDR(0x00008566u);
    goto L_8578;

L_8568:
    /* 00008568   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x00008568u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_856C:
    /* 0000856c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000856cu);
    rc_ext_l(c, 0);

L_856E:
    /* 0000856e   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000856eu);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_8572:
    /* 00008572   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00008572u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8574:
    /* 00008574   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x00008574u);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8578:
    /* 00008578   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x00008578u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_857C:
    /* 0000857c   2  bne 000085aa */
    c->pc = RC_ADDR(0x0000857cu);
    if (rc_cond(c, 6)) goto L_85AA;

L_857E:
    /* 0000857e   4  tst.w (8e,A4) */
    c->pc = RC_ADDR(0x0000857eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_set_nzvc(c, t0, RC_W);

L_8582:
    /* 00008582   2  ble 00008594 */
    c->pc = RC_ADDR(0x00008582u);
    if (rc_cond(c, 15)) goto L_8594;

L_8584:
    /* 00008584   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x00008584u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8588:
    /* 00008588   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008588u);
    rc_ext_l(c, 0);

L_858A:
    /* 0000858a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000858au);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_858E:
    /* 0000858e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000858eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8590:
    /* 00008590   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x00008590u);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8594:
    /* 00008594   4  tst.w (8e,A4) */
    c->pc = RC_ADDR(0x00008594u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_set_nzvc(c, t0, RC_W);

L_8598:
    /* 00008598   2  bge 000085aa */
    c->pc = RC_ADDR(0x00008598u);
    if (rc_cond(c, 12)) goto L_85AA;

L_859A:
    /* 0000859a   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000859au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_859E:
    /* 0000859e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000859eu);
    rc_ext_l(c, 0);

L_85A0:
    /* 000085a0   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x000085a0u);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_85A4:
    /* 000085a4   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000085a4u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_85A6:
    /* 000085a6   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x000085a6u);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_85AA:
    /* 000085aa   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x000085aau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_85AE:
    /* 000085ae   2  bne 000085dc */
    c->pc = RC_ADDR(0x000085aeu);
    if (rc_cond(c, 6)) goto L_85DC;

L_85B0:
    /* 000085b0   4  tst.w (90,A4) */
    c->pc = RC_ADDR(0x000085b0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_set_nzvc(c, t0, RC_W);

L_85B4:
    /* 000085b4   2  ble 000085c6 */
    c->pc = RC_ADDR(0x000085b4u);
    if (rc_cond(c, 15)) goto L_85C6;

L_85B6:
    /* 000085b6   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x000085b6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_85BA:
    /* 000085ba   2  ext.l D0 */
    c->pc = RC_ADDR(0x000085bau);
    rc_ext_l(c, 0);

L_85BC:
    /* 000085bc   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x000085bcu);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_85C0:
    /* 000085c0   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000085c0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_85C2:
    /* 000085c2   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x000085c2u);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_85C6:
    /* 000085c6   4  tst.w (90,A4) */
    c->pc = RC_ADDR(0x000085c6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_set_nzvc(c, t0, RC_W);

L_85CA:
    /* 000085ca   2  bge 000085dc */
    c->pc = RC_ADDR(0x000085cau);
    if (rc_cond(c, 12)) goto L_85DC;

L_85CC:
    /* 000085cc   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x000085ccu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_85D0:
    /* 000085d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000085d0u);
    rc_ext_l(c, 0);

L_85D2:
    /* 000085d2   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x000085d2u);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_85D6:
    /* 000085d6   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000085d6u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_85D8:
    /* 000085d8   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x000085d8u);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_85DC:
    /* 000085dc   6  cmpi.w #fff8,(8e,A4) */
    c->pc = RC_ADDR(0x000085dcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_85E2:
    /* 000085e2   2  bge 000085ea */
    c->pc = RC_ADDR(0x000085e2u);
    if (rc_cond(c, 12)) goto L_85EA;

L_85E4:
    /* 000085e4   6  move.w #fff8,(8e,A4) */
    c->pc = RC_ADDR(0x000085e4u);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0x8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_85EA:
    /* 000085ea   6  cmpi.w #8,(8e,A4) */
    c->pc = RC_ADDR(0x000085eau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_85F0:
    /* 000085f0   2  ble 000085f8 */
    c->pc = RC_ADDR(0x000085f0u);
    if (rc_cond(c, 15)) goto L_85F8;

L_85F2:
    /* 000085f2   6  move.w #8,(8e,A4) */
    c->pc = RC_ADDR(0x000085f2u);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_85F8:
    /* 000085f8   6  cmpi.w #fff8,(90,A4) */
    c->pc = RC_ADDR(0x000085f8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_85FE:
    /* 000085fe   2  bge 00008606 */
    c->pc = RC_ADDR(0x000085feu);
    if (rc_cond(c, 12)) goto L_8606;

L_8600:
    /* 00008600   6  move.w #fff8,(90,A4) */
    c->pc = RC_ADDR(0x00008600u);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0x90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8606:
    /* 00008606   6  cmpi.w #8,(90,A4) */
    c->pc = RC_ADDR(0x00008606u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_860C:
    /* 0000860c   2  ble 00008614 */
    c->pc = RC_ADDR(0x0000860cu);
    if (rc_cond(c, 15)) goto L_8614;

L_860E:
    /* 0000860e   6  move.w #8,(90,A4) */
    c->pc = RC_ADDR(0x0000860eu);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8614:
    /* 00008614   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x00008614u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8618:
    /* 00008618   4  add.w D0,(8a,A4) */
    c->pc = RC_ADDR(0x00008618u);
    t3 = (c->a[4] + 0x8au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_861C:
    /* 0000861c   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000861cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8620:
    /* 00008620   4  add.w D0,(8c,A4) */
    c->pc = RC_ADDR(0x00008620u);
    t3 = (c->a[4] + 0x8cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8624:
    /* 00008624   4  jsr (ffff8380,A4) */
    c->pc = RC_ADDR(0x00008624u);
    /* vector 149 */
    rc_push32(c, m, RC_ADDR(0x00008628u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d0u);
    return;

L_8628:
    /* 00008628   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00008628u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_862A:
    /* 0000862a   4  movea.l (80,A4),A0 */
    c->pc = RC_ADDR(0x0000862au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    c->a[0] = t0;

L_862E:
    /* 0000862e   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000862eu);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8632:
    /* 00008632   4  move.l (30,A1),-(A7) */
    c->pc = RC_ADDR(0x00008632u);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8636:
    /* 00008636   6  pea (00043210).l */
    c->pc = RC_ADDR(0x00008636u);
    rc_push32(c, m, RC_ADDR(0x00043210u));

L_863C:
    /* 0000863c   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x0000863cu);
    rc_push32(c, m, RC_ADDR(0x000000cau));

L_8640:
    /* 00008640   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00008640u);
    rc_push32(c, m, RC_ADDR(0x000000c8u));

L_8644:
    /* 00008644   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00008644u);
    rc_push32(c, m, RC_ADDR(0x000000c8u));

L_8648:
    /* 00008648   4  move.w (8c,A4),D0 */
    c->pc = RC_ADDR(0x00008648u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_864C:
    /* 0000864c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000864cu);
    rc_ext_l(c, 0);

L_864E:
    /* 0000864e   4  movea.l (80,A4),A0 */
    c->pc = RC_ADDR(0x0000864eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    c->a[0] = t0;

L_8652:
    /* 00008652   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00008652u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8656:
    /* 00008656   4  move.w (a,A1),D1 */
    c->pc = RC_ADDR(0x00008656u);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_865A:
    /* 0000865a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000865au);
    rc_ext_l(c, 1);

L_865C:
    /* 0000865c   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0000865cu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_865E:
    /* 0000865e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000865eu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8660:
    /* 00008660   4  move.w (8a,A4),D0 */
    c->pc = RC_ADDR(0x00008660u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8664:
    /* 00008664   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008664u);
    rc_ext_l(c, 0);

L_8666:
    /* 00008666   4  movea.l (80,A4),A0 */
    c->pc = RC_ADDR(0x00008666u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    c->a[0] = t0;

L_866A:
    /* 0000866a   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0000866au);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_866E:
    /* 0000866e   4  move.w (8,A1),D1 */
    c->pc = RC_ADDR(0x0000866eu);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8672:
    /* 00008672   2  ext.l D1 */
    c->pc = RC_ADDR(0x00008672u);
    rc_ext_l(c, 1);

L_8674:
    /* 00008674   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x00008674u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8676:
    /* 00008676   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00008676u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8678:
    /* 00008678   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = RC_ADDR(0x00008678u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_867C:
    /* 0000867c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000867cu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_867E:
    /* 0000867e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000867eu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8680:
    /* 00008680   4  movea.l (80,A4),A0 */
    c->pc = RC_ADDR(0x00008680u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    c->a[0] = t0;

L_8684:
    /* 00008684   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00008684u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8688:
    /* 00008688   4  pea (c,A1) */
    c->pc = RC_ADDR(0x00008688u);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_868C:
    /* 0000868c   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000868cu);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00008690u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_8690:
    /* 00008690   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x00008690u);
    c->a[7] = (c->a[7] + 0x30u);

L_8694:
    /* 00008694   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00008694u);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00008698u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021948u);
    return;

L_8698:
    /* 00008698   4  jsr (ffff8362,A4) */
    c->pc = RC_ADDR(0x00008698u);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x0000869cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000217f4u);
    return;

L_869C:
    /* 0000869c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000869cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_869E:
    /* 0000869e   2  rts */
    c->pc = RC_ADDR(0x0000869eu);
    rc_ret(c, m);
    return;

}
