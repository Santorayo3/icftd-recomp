/* fn_00009238 - 1030 byte(s), 304 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009238(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009238u): goto L_9238;
    case RC_ADDR(0x0000923cu): goto L_923C;
    case RC_ADDR(0x00009240u): goto L_9240;
    case RC_ADDR(0x00009246u): goto L_9246;
    case RC_ADDR(0x0000924au): goto L_924A;
    case RC_ADDR(0x0000924eu): goto L_924E;
    case RC_ADDR(0x00009252u): goto L_9252;
    case RC_ADDR(0x00009256u): goto L_9256;
    case RC_ADDR(0x0000925au): goto L_925A;
    case RC_ADDR(0x0000925eu): goto L_925E;
    case RC_ADDR(0x00009262u): goto L_9262;
    case RC_ADDR(0x00009264u): goto L_9264;
    case RC_ADDR(0x00009268u): goto L_9268;
    case RC_ADDR(0x0000926cu): goto L_926C;
    case RC_ADDR(0x00009270u): goto L_9270;
    case RC_ADDR(0x00009272u): goto L_9272;
    case RC_ADDR(0x00009276u): goto L_9276;
    case RC_ADDR(0x0000927au): goto L_927A;
    case RC_ADDR(0x0000927eu): goto L_927E;
    case RC_ADDR(0x00009280u): goto L_9280;
    case RC_ADDR(0x00009284u): goto L_9284;
    case RC_ADDR(0x00009286u): goto L_9286;
    case RC_ADDR(0x00009288u): goto L_9288;
    case RC_ADDR(0x0000928au): goto L_928A;
    case RC_ADDR(0x0000928eu): goto L_928E;
    case RC_ADDR(0x00009292u): goto L_9292;
    case RC_ADDR(0x00009294u): goto L_9294;
    case RC_ADDR(0x00009296u): goto L_9296;
    case RC_ADDR(0x00009298u): goto L_9298;
    case RC_ADDR(0x0000929au): goto L_929A;
    case RC_ADDR(0x0000929eu): goto L_929E;
    case RC_ADDR(0x000092a2u): goto L_92A2;
    case RC_ADDR(0x000092a6u): goto L_92A6;
    case RC_ADDR(0x000092a8u): goto L_92A8;
    case RC_ADDR(0x000092aau): goto L_92AA;
    case RC_ADDR(0x000092acu): goto L_92AC;
    case RC_ADDR(0x000092b0u): goto L_92B0;
    case RC_ADDR(0x000092b4u): goto L_92B4;
    case RC_ADDR(0x000092b6u): goto L_92B6;
    case RC_ADDR(0x000092b8u): goto L_92B8;
    case RC_ADDR(0x000092bau): goto L_92BA;
    case RC_ADDR(0x000092bcu): goto L_92BC;
    case RC_ADDR(0x000092beu): goto L_92BE;
    case RC_ADDR(0x000092c2u): goto L_92C2;
    case RC_ADDR(0x000092c6u): goto L_92C6;
    case RC_ADDR(0x000092cau): goto L_92CA;
    case RC_ADDR(0x000092ccu): goto L_92CC;
    case RC_ADDR(0x000092ceu): goto L_92CE;
    case RC_ADDR(0x000092d0u): goto L_92D0;
    case RC_ADDR(0x000092d4u): goto L_92D4;
    case RC_ADDR(0x000092d8u): goto L_92D8;
    case RC_ADDR(0x000092dau): goto L_92DA;
    case RC_ADDR(0x000092dcu): goto L_92DC;
    case RC_ADDR(0x000092e0u): goto L_92E0;
    case RC_ADDR(0x000092e2u): goto L_92E2;
    case RC_ADDR(0x000092e4u): goto L_92E4;
    case RC_ADDR(0x000092e6u): goto L_92E6;
    case RC_ADDR(0x000092e8u): goto L_92E8;
    case RC_ADDR(0x000092ecu): goto L_92EC;
    case RC_ADDR(0x000092f0u): goto L_92F0;
    case RC_ADDR(0x000092f4u): goto L_92F4;
    case RC_ADDR(0x000092f6u): goto L_92F6;
    case RC_ADDR(0x000092f8u): goto L_92F8;
    case RC_ADDR(0x000092fau): goto L_92FA;
    case RC_ADDR(0x000092feu): goto L_92FE;
    case RC_ADDR(0x00009302u): goto L_9302;
    case RC_ADDR(0x00009304u): goto L_9304;
    case RC_ADDR(0x00009306u): goto L_9306;
    case RC_ADDR(0x00009308u): goto L_9308;
    case RC_ADDR(0x0000930au): goto L_930A;
    case RC_ADDR(0x00009310u): goto L_9310;
    case RC_ADDR(0x00009312u): goto L_9312;
    case RC_ADDR(0x00009314u): goto L_9314;
    case RC_ADDR(0x00009316u): goto L_9316;
    case RC_ADDR(0x00009318u): goto L_9318;
    case RC_ADDR(0x0000931au): goto L_931A;
    case RC_ADDR(0x0000931eu): goto L_931E;
    case RC_ADDR(0x00009322u): goto L_9322;
    case RC_ADDR(0x00009324u): goto L_9324;
    case RC_ADDR(0x00009326u): goto L_9326;
    case RC_ADDR(0x0000932au): goto L_932A;
    case RC_ADDR(0x0000932eu): goto L_932E;
    case RC_ADDR(0x00009332u): goto L_9332;
    case RC_ADDR(0x00009338u): goto L_9338;
    case RC_ADDR(0x0000933au): goto L_933A;
    case RC_ADDR(0x0000933eu): goto L_933E;
    case RC_ADDR(0x00009342u): goto L_9342;
    case RC_ADDR(0x00009346u): goto L_9346;
    case RC_ADDR(0x00009348u): goto L_9348;
    case RC_ADDR(0x0000934cu): goto L_934C;
    case RC_ADDR(0x00009350u): goto L_9350;
    case RC_ADDR(0x00009354u): goto L_9354;
    case RC_ADDR(0x00009356u): goto L_9356;
    case RC_ADDR(0x0000935cu): goto L_935C;
    case RC_ADDR(0x0000935eu): goto L_935E;
    case RC_ADDR(0x00009360u): goto L_9360;
    case RC_ADDR(0x00009364u): goto L_9364;
    case RC_ADDR(0x00009368u): goto L_9368;
    case RC_ADDR(0x0000936au): goto L_936A;
    case RC_ADDR(0x0000936cu): goto L_936C;
    case RC_ADDR(0x0000936eu): goto L_936E;
    case RC_ADDR(0x00009370u): goto L_9370;
    case RC_ADDR(0x00009372u): goto L_9372;
    case RC_ADDR(0x00009376u): goto L_9376;
    case RC_ADDR(0x0000937au): goto L_937A;
    case RC_ADDR(0x0000937cu): goto L_937C;
    case RC_ADDR(0x0000937eu): goto L_937E;
    case RC_ADDR(0x00009382u): goto L_9382;
    case RC_ADDR(0x00009386u): goto L_9386;
    case RC_ADDR(0x0000938au): goto L_938A;
    case RC_ADDR(0x0000938cu): goto L_938C;
    case RC_ADDR(0x0000938eu): goto L_938E;
    case RC_ADDR(0x00009390u): goto L_9390;
    case RC_ADDR(0x00009394u): goto L_9394;
    case RC_ADDR(0x00009398u): goto L_9398;
    case RC_ADDR(0x0000939cu): goto L_939C;
    case RC_ADDR(0x000093a0u): goto L_93A0;
    case RC_ADDR(0x000093a2u): goto L_93A2;
    case RC_ADDR(0x000093a4u): goto L_93A4;
    case RC_ADDR(0x000093a6u): goto L_93A6;
    case RC_ADDR(0x000093a8u): goto L_93A8;
    case RC_ADDR(0x000093aau): goto L_93AA;
    case RC_ADDR(0x000093aeu): goto L_93AE;
    case RC_ADDR(0x000093b0u): goto L_93B0;
    case RC_ADDR(0x000093b2u): goto L_93B2;
    case RC_ADDR(0x000093b6u): goto L_93B6;
    case RC_ADDR(0x000093bau): goto L_93BA;
    case RC_ADDR(0x000093bcu): goto L_93BC;
    case RC_ADDR(0x000093beu): goto L_93BE;
    case RC_ADDR(0x000093c2u): goto L_93C2;
    case RC_ADDR(0x000093c6u): goto L_93C6;
    case RC_ADDR(0x000093cau): goto L_93CA;
    case RC_ADDR(0x000093ceu): goto L_93CE;
    case RC_ADDR(0x000093d0u): goto L_93D0;
    case RC_ADDR(0x000093d2u): goto L_93D2;
    case RC_ADDR(0x000093d4u): goto L_93D4;
    case RC_ADDR(0x000093d8u): goto L_93D8;
    case RC_ADDR(0x000093dcu): goto L_93DC;
    case RC_ADDR(0x000093e0u): goto L_93E0;
    case RC_ADDR(0x000093e2u): goto L_93E2;
    case RC_ADDR(0x000093e4u): goto L_93E4;
    case RC_ADDR(0x000093e6u): goto L_93E6;
    case RC_ADDR(0x000093e8u): goto L_93E8;
    case RC_ADDR(0x000093eau): goto L_93EA;
    case RC_ADDR(0x000093eeu): goto L_93EE;
    case RC_ADDR(0x000093f0u): goto L_93F0;
    case RC_ADDR(0x000093f2u): goto L_93F2;
    case RC_ADDR(0x000093f6u): goto L_93F6;
    case RC_ADDR(0x000093fau): goto L_93FA;
    case RC_ADDR(0x000093fcu): goto L_93FC;
    case RC_ADDR(0x000093feu): goto L_93FE;
    case RC_ADDR(0x00009402u): goto L_9402;
    case RC_ADDR(0x00009406u): goto L_9406;
    case RC_ADDR(0x0000940au): goto L_940A;
    case RC_ADDR(0x0000940eu): goto L_940E;
    case RC_ADDR(0x00009410u): goto L_9410;
    case RC_ADDR(0x00009412u): goto L_9412;
    case RC_ADDR(0x00009414u): goto L_9414;
    case RC_ADDR(0x00009418u): goto L_9418;
    case RC_ADDR(0x0000941cu): goto L_941C;
    case RC_ADDR(0x0000941eu): goto L_941E;
    case RC_ADDR(0x00009424u): goto L_9424;
    case RC_ADDR(0x00009428u): goto L_9428;
    case RC_ADDR(0x0000942cu): goto L_942C;
    case RC_ADDR(0x00009430u): goto L_9430;
    case RC_ADDR(0x00009432u): goto L_9432;
    case RC_ADDR(0x00009436u): goto L_9436;
    case RC_ADDR(0x0000943au): goto L_943A;
    case RC_ADDR(0x0000943eu): goto L_943E;
    case RC_ADDR(0x00009444u): goto L_9444;
    case RC_ADDR(0x00009448u): goto L_9448;
    case RC_ADDR(0x0000944au): goto L_944A;
    case RC_ADDR(0x0000944cu): goto L_944C;
    case RC_ADDR(0x00009450u): goto L_9450;
    case RC_ADDR(0x00009454u): goto L_9454;
    case RC_ADDR(0x00009458u): goto L_9458;
    case RC_ADDR(0x0000945cu): goto L_945C;
    case RC_ADDR(0x00009462u): goto L_9462;
    case RC_ADDR(0x00009468u): goto L_9468;
    case RC_ADDR(0x0000946eu): goto L_946E;
    case RC_ADDR(0x00009472u): goto L_9472;
    case RC_ADDR(0x00009476u): goto L_9476;
    case RC_ADDR(0x00009478u): goto L_9478;
    case RC_ADDR(0x0000947cu): goto L_947C;
    case RC_ADDR(0x00009480u): goto L_9480;
    case RC_ADDR(0x00009482u): goto L_9482;
    case RC_ADDR(0x00009484u): goto L_9484;
    case RC_ADDR(0x00009488u): goto L_9488;
    case RC_ADDR(0x0000948eu): goto L_948E;
    case RC_ADDR(0x00009490u): goto L_9490;
    case RC_ADDR(0x00009494u): goto L_9494;
    case RC_ADDR(0x0000949au): goto L_949A;
    case RC_ADDR(0x0000949eu): goto L_949E;
    case RC_ADDR(0x000094a2u): goto L_94A2;
    case RC_ADDR(0x000094a8u): goto L_94A8;
    case RC_ADDR(0x000094aeu): goto L_94AE;
    case RC_ADDR(0x000094b0u): goto L_94B0;
    case RC_ADDR(0x000094b4u): goto L_94B4;
    case RC_ADDR(0x000094b6u): goto L_94B6;
    case RC_ADDR(0x000094b8u): goto L_94B8;
    case RC_ADDR(0x000094bcu): goto L_94BC;
    case RC_ADDR(0x000094c0u): goto L_94C0;
    case RC_ADDR(0x000094c4u): goto L_94C4;
    case RC_ADDR(0x000094c8u): goto L_94C8;
    case RC_ADDR(0x000094ccu): goto L_94CC;
    case RC_ADDR(0x000094d0u): goto L_94D0;
    case RC_ADDR(0x000094d4u): goto L_94D4;
    case RC_ADDR(0x000094dau): goto L_94DA;
    case RC_ADDR(0x000094e0u): goto L_94E0;
    case RC_ADDR(0x000094e4u): goto L_94E4;
    case RC_ADDR(0x000094e8u): goto L_94E8;
    case RC_ADDR(0x000094eau): goto L_94EA;
    case RC_ADDR(0x000094ecu): goto L_94EC;
    case RC_ADDR(0x000094eeu): goto L_94EE;
    case RC_ADDR(0x000094f2u): goto L_94F2;
    case RC_ADDR(0x000094f6u): goto L_94F6;
    case RC_ADDR(0x000094f8u): goto L_94F8;
    case RC_ADDR(0x000094feu): goto L_94FE;
    case RC_ADDR(0x00009500u): goto L_9500;
    case RC_ADDR(0x00009506u): goto L_9506;
    case RC_ADDR(0x0000950cu): goto L_950C;
    case RC_ADDR(0x00009510u): goto L_9510;
    case RC_ADDR(0x00009514u): goto L_9514;
    case RC_ADDR(0x0000951au): goto L_951A;
    case RC_ADDR(0x0000951cu): goto L_951C;
    case RC_ADDR(0x00009520u): goto L_9520;
    case RC_ADDR(0x00009524u): goto L_9524;
    case RC_ADDR(0x00009528u): goto L_9528;
    case RC_ADDR(0x0000952cu): goto L_952C;
    case RC_ADDR(0x00009530u): goto L_9530;
    case RC_ADDR(0x00009534u): goto L_9534;
    case RC_ADDR(0x00009538u): goto L_9538;
    case RC_ADDR(0x0000953cu): goto L_953C;
    case RC_ADDR(0x00009540u): goto L_9540;
    case RC_ADDR(0x00009548u): goto L_9548;
    case RC_ADDR(0x0000954cu): goto L_954C;
    case RC_ADDR(0x00009552u): goto L_9552;
    case RC_ADDR(0x00009554u): goto L_9554;
    case RC_ADDR(0x00009558u): goto L_9558;
    case RC_ADDR(0x0000955au): goto L_955A;
    case RC_ADDR(0x0000955cu): goto L_955C;
    case RC_ADDR(0x0000955eu): goto L_955E;
    case RC_ADDR(0x00009562u): goto L_9562;
    case RC_ADDR(0x00009566u): goto L_9566;
    case RC_ADDR(0x00009568u): goto L_9568;
    case RC_ADDR(0x0000956au): goto L_956A;
    case RC_ADDR(0x0000956eu): goto L_956E;
    case RC_ADDR(0x00009572u): goto L_9572;
    case RC_ADDR(0x00009576u): goto L_9576;
    case RC_ADDR(0x0000957au): goto L_957A;
    case RC_ADDR(0x0000957eu): goto L_957E;
    case RC_ADDR(0x00009582u): goto L_9582;
    case RC_ADDR(0x00009586u): goto L_9586;
    case RC_ADDR(0x0000958au): goto L_958A;
    case RC_ADDR(0x0000958eu): goto L_958E;
    case RC_ADDR(0x00009592u): goto L_9592;
    case RC_ADDR(0x00009598u): goto L_9598;
    case RC_ADDR(0x0000959cu): goto L_959C;
    case RC_ADDR(0x000095a0u): goto L_95A0;
    case RC_ADDR(0x000095a4u): goto L_95A4;
    case RC_ADDR(0x000095a8u): goto L_95A8;
    case RC_ADDR(0x000095acu): goto L_95AC;
    case RC_ADDR(0x000095b0u): goto L_95B0;
    case RC_ADDR(0x000095b6u): goto L_95B6;
    case RC_ADDR(0x000095b8u): goto L_95B8;
    case RC_ADDR(0x000095bau): goto L_95BA;
    case RC_ADDR(0x000095beu): goto L_95BE;
    case RC_ADDR(0x000095c2u): goto L_95C2;
    case RC_ADDR(0x000095c4u): goto L_95C4;
    case RC_ADDR(0x000095c6u): goto L_95C6;
    case RC_ADDR(0x000095cau): goto L_95CA;
    case RC_ADDR(0x000095ceu): goto L_95CE;
    case RC_ADDR(0x000095d0u): goto L_95D0;
    case RC_ADDR(0x000095d4u): goto L_95D4;
    case RC_ADDR(0x000095d8u): goto L_95D8;
    case RC_ADDR(0x000095dcu): goto L_95DC;
    case RC_ADDR(0x000095deu): goto L_95DE;
    case RC_ADDR(0x000095e2u): goto L_95E2;
    case RC_ADDR(0x000095e6u): goto L_95E6;
    case RC_ADDR(0x000095e8u): goto L_95E8;
    case RC_ADDR(0x000095ecu): goto L_95EC;
    case RC_ADDR(0x000095f2u): goto L_95F2;
    case RC_ADDR(0x000095f4u): goto L_95F4;
    case RC_ADDR(0x000095fau): goto L_95FA;
    case RC_ADDR(0x000095fcu): goto L_95FC;
    case RC_ADDR(0x00009600u): goto L_9600;
    case RC_ADDR(0x00009602u): goto L_9602;
    case RC_ADDR(0x00009604u): goto L_9604;
    case RC_ADDR(0x00009608u): goto L_9608;
    case RC_ADDR(0x0000960cu): goto L_960C;
    case RC_ADDR(0x00009610u): goto L_9610;
    case RC_ADDR(0x00009614u): goto L_9614;
    case RC_ADDR(0x00009616u): goto L_9616;
    case RC_ADDR(0x0000961au): goto L_961A;
    case RC_ADDR(0x0000961eu): goto L_961E;
    case RC_ADDR(0x00009622u): goto L_9622;
    case RC_ADDR(0x00009624u): goto L_9624;
    case RC_ADDR(0x00009628u): goto L_9628;
    case RC_ADDR(0x0000962cu): goto L_962C;
    case RC_ADDR(0x00009630u): goto L_9630;
    case RC_ADDR(0x00009632u): goto L_9632;
    case RC_ADDR(0x00009634u): goto L_9634;
    case RC_ADDR(0x00009638u): goto L_9638;
    case RC_ADDR(0x0000963au): goto L_963A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9238:
    /* 00009238   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009238u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_923C:
    /* 0000923c   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000923cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_9240:
    /* 00009240   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00009240u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9246:
    /* 00009246   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00009246u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000924au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_924A:
    /* 0000924a   4  tst.w (7ba,A4) */
    c->pc = RC_ADDR(0x0000924au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7bau));
    rc_set_nzvc(c, t0, RC_W);

L_924E:
    /* 0000924e   4  bne 0000953c */
    c->pc = RC_ADDR(0x0000924eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_953C;

L_9252:
    /* 00009252   4  clr.w (cac,A4) */
    c->pc = RC_ADDR(0x00009252u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xcacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9256:
    /* 00009256   4  clr.w (85a,A4) */
    c->pc = RC_ADDR(0x00009256u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x85au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_925A:
    /* 0000925a   4  pea (0000963e) */
    c->pc = RC_ADDR(0x0000925au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000963eu));

L_925E:
    /* 0000925e   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000925eu);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00009262u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_9262:
    /* 00009262   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009262u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9264:
    /* 00009264   4  move.l D0,(ac0,A4) */
    c->pc = RC_ADDR(0x00009264u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xac0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9268:
    /* 00009268   4  pea (0000964d) */
    c->pc = RC_ADDR(0x00009268u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000964du));

L_926C:
    /* 0000926c   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000926cu);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00009270u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_9270:
    /* 00009270   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009270u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9272:
    /* 00009272   4  move.l D0,(ac4,A4) */
    c->pc = RC_ADDR(0x00009272u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xac4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9276:
    /* 00009276   4  pea (0000965d) */
    c->pc = RC_ADDR(0x00009276u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000965du));

L_927A:
    /* 0000927a   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000927au);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000927eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_927E:
    /* 0000927e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000927eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9280:
    /* 00009280   4  move.l D0,(abc,A4) */
    c->pc = RC_ADDR(0x00009280u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xabcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9284:
    /* 00009284   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00009284u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_9286:
    /* 00009286   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009286u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9288:
    /* 00009288   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009288u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_928A:
    /* 0000928a   4  lea (ffff90a8,A4),A0 */
    c->pc = RC_ADDR(0x0000928au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6f58u);

L_928E:
    /* 0000928e   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0000928eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_9292:
    /* 00009292   2  tst.b (A1) */
    c->pc = RC_ADDR(0x00009292u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[1]);
    rc_set_nzvc(c, t0, RC_B);

L_9294:
    /* 00009294   2  beq 000092b8 */
    c->pc = RC_ADDR(0x00009294u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_92B8;

L_9296:
    /* 00009296   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00009296u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9298:
    /* 00009298   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009298u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_929A:
    /* 0000929a   4  lea (ffff90a8,A4),A0 */
    c->pc = RC_ADDR(0x0000929au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6f58u);

L_929E:
    /* 0000929e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000929eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_92A2:
    /* 000092a2   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x000092a2u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000092a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_92A6:
    /* 000092a6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000092a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_92A8:
    /* 000092a8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000092a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_92AA:
    /* 000092aa   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000092aau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_92AC:
    /* 000092ac   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x000092acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_92B0:
    /* 000092b0   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000092b0u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_92B4:
    /* 000092b4   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x000092b4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_92B6:
    /* 000092b6   2  bra 00009286 */
    c->pc = RC_ADDR(0x000092b6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9286;

L_92B8:
    /* 000092b8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x000092b8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_92BA:
    /* 000092ba   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000092bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_92BC:
    /* 000092bc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000092bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_92BE:
    /* 000092be   4  lea (ffff90e4,A4),A0 */
    c->pc = RC_ADDR(0x000092beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6f1cu);

L_92C2:
    /* 000092c2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000092c2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_92C6:
    /* 000092c6   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000092c6u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000092cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_92CA:
    /* 000092ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000092cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_92CC:
    /* 000092cc   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000092ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_92CE:
    /* 000092ce   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000092ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_92D0:
    /* 000092d0   4  lea (b7a,A4),A0 */
    c->pc = RC_ADDR(0x000092d0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb7au);

L_92D4:
    /* 000092d4   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000092d4u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_92D8:
    /* 000092d8   2  bne 000092e4 */
    c->pc = RC_ADDR(0x000092d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_92E4;

L_92DA:
    /* 000092da   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000092dau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_92DC:
    /* 000092dc   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x000092dcu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_92E0:
    /* 000092e0   2  unlk A5 */
    c->pc = RC_ADDR(0x000092e0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_92E2:
    /* 000092e2   2  rts */
    c->pc = RC_ADDR(0x000092e2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_92E4:
    /* 000092e4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000092e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_92E6:
    /* 000092e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000092e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_92E8:
    /* 000092e8   4  lea (ffff9170,A4),A0 */
    c->pc = RC_ADDR(0x000092e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6e90u);

L_92EC:
    /* 000092ec   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000092ecu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_92F0:
    /* 000092f0   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000092f0u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000092f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_92F4:
    /* 000092f4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000092f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_92F6:
    /* 000092f6   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000092f6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_92F8:
    /* 000092f8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000092f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_92FA:
    /* 000092fa   4  lea (c06,A4),A0 */
    c->pc = RC_ADDR(0x000092fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc06u);

L_92FE:
    /* 000092fe   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000092feu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9302:
    /* 00009302   2  bne 00009308 */
    c->pc = RC_ADDR(0x00009302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9308;

L_9304:
    /* 00009304   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00009304u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9306:
    /* 00009306   2  bra 000092dc */
    c->pc = RC_ADDR(0x00009306u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_92DC;

L_9308:
    /* 00009308   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00009308u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_930A:
    /* 0000930a   6  cmp.l #23,D4 */
    c->pc = RC_ADDR(0x0000930au);
    rc_step(c, m, 14);
    t0 = 0x00000023u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9310:
    /* 00009310   2  blt 000092ba */
    c->pc = RC_ADDR(0x00009310u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_92BA; }

L_9312:
    /* 00009312   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009312u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9314:
    /* 00009314   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009314u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9316:
    /* 00009316   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009316u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9318:
    /* 00009318   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009318u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_931A:
    /* 0000931a   4  pea (00009666) */
    c->pc = RC_ADDR(0x0000931au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009666u));

L_931E:
    /* 0000931e   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000931eu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00009322u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_9322:
    /* 00009322   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009322u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9324:
    /* 00009324   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009324u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9326:
    /* 00009326   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009326u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_932A:
    /* 0000932a   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000932au);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000932eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_932E:
    /* 0000932e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000932eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9332:
    /* 00009332   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x00009332u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_9338:
    /* 00009338   2  bne 0000938a */
    c->pc = RC_ADDR(0x00009338u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_938A;

L_933A:
    /* 0000933a   4  pea (0000966a) */
    c->pc = RC_ADDR(0x0000933au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000966au));

L_933E:
    /* 0000933e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000933eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9342:
    /* 00009342   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x00009342u);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x00009346u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_9346:
    /* 00009346   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009346u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9348:
    /* 00009348   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009348u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_934C:
    /* 0000934c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000934cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9350:
    /* 00009350   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00009350u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009354u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_9354:
    /* 00009354   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00009354u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_9356:
    /* 00009356   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00009356u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_935C:
    /* 0000935c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000935cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_935E:
    /* 0000935e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000935eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9360:
    /* 00009360   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00009360u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9364:
    /* 00009364   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00009364u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00009368u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_9368:
    /* 00009368   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009368u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_936A:
    /* 0000936a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000936au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_936C:
    /* 0000936c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000936cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_936E:
    /* 0000936e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000936eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9370:
    /* 00009370   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009370u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9372:
    /* 00009372   4  pea (0000968f) */
    c->pc = RC_ADDR(0x00009372u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000968fu));

L_9376:
    /* 00009376   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00009376u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000937au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_937A:
    /* 0000937a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000937au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_937C:
    /* 0000937c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000937cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_937E:
    /* 0000937e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000937eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9382:
    /* 00009382   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00009382u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009386u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_9386:
    /* 00009386   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009386u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_938A:
    /* 0000938a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000938au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_938C:
    /* 0000938c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000938cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_938E:
    /* 0000938e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000938eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9390:
    /* 00009390   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x00009390u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_9394:
    /* 00009394   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009394u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_9398:
    /* 00009398   4  beq 0000941c */
    c->pc = RC_ADDR(0x00009398u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_941C;

L_939C:
    /* 0000939c   4  move.w (a62,A4),D0 */
    c->pc = RC_ADDR(0x0000939cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93A0:
    /* 000093a0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000093a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_93A2:
    /* 000093a2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000093a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_93A4:
    /* 000093a4   2  moveq #1e,D1 */
    c->pc = RC_ADDR(0x000093a4u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000001eu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_93A6:
    /* 000093a6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000093a6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_93A8:
    /* 000093a8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000093a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93AA:
    /* 000093aa   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x000093aau);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x000093aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_93AE:
    /* 000093ae   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000093aeu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93B0:
    /* 000093b0   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x000093b0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_93B2:
    /* 000093b2   4  lea (ffff8dc2,A4),A0 */
    c->pc = RC_ADDR(0x000093b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x723eu);

L_93B6:
    /* 000093b6   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000093b6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93BA:
    /* 000093ba   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000093bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93BC:
    /* 000093bc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000093bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_93BE:
    /* 000093be   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x000093beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_93C2:
    /* 000093c2   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x000093c2u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_93C6:
    /* 000093c6   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x000093c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_93CA:
    /* 000093ca   4  sub.w (8,A0),D0 */
    c->pc = RC_ADDR(0x000093cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_93CE:
    /* 000093ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000093ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_93D0:
    /* 000093d0   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000093d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93D2:
    /* 000093d2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000093d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_93D4:
    /* 000093d4   4  lea (a80,A4),A0 */
    c->pc = RC_ADDR(0x000093d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa80u);

L_93D8:
    /* 000093d8   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000093d8u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_93DC:
    /* 000093dc   4  move.w (a62,A4),D0 */
    c->pc = RC_ADDR(0x000093dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93E0:
    /* 000093e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000093e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_93E2:
    /* 000093e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000093e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_93E4:
    /* 000093e4   2  moveq #1e,D1 */
    c->pc = RC_ADDR(0x000093e4u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000001eu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_93E6:
    /* 000093e6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000093e6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_93E8:
    /* 000093e8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000093e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93EA:
    /* 000093ea   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x000093eau);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x000093eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_93EE:
    /* 000093ee   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000093eeu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93F0:
    /* 000093f0   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x000093f0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_93F2:
    /* 000093f2   4  lea (ffff8e94,A4),A0 */
    c->pc = RC_ADDR(0x000093f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x716cu);

L_93F6:
    /* 000093f6   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000093f6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_93FA:
    /* 000093fa   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000093fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_93FC:
    /* 000093fc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000093fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_93FE:
    /* 000093fe   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x000093feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_9402:
    /* 00009402   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x00009402u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_9406:
    /* 00009406   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00009406u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_940A:
    /* 0000940a   4  sub.w (a,A0),D0 */
    c->pc = RC_ADDR(0x0000940au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_940E:
    /* 0000940e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000940eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9410:
    /* 00009410   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00009410u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9412:
    /* 00009412   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00009412u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_9414:
    /* 00009414   4  lea (a9c,A4),A0 */
    c->pc = RC_ADDR(0x00009414u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa9cu);

L_9418:
    /* 00009418   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00009418u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_941C:
    /* 0000941c   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000941cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_941E:
    /* 0000941e   6  cmp.l #7,D4 */
    c->pc = RC_ADDR(0x0000941eu);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9424:
    /* 00009424   4  blt 0000938c */
    c->pc = RC_ADDR(0x00009424u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_938C; }

L_9428:
    /* 00009428   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00009428u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_942C:
    /* 0000942c   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000942cu);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x00009430u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_9430:
    /* 00009430   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009430u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9432:
    /* 00009432   4  move.w D0,(b36,A4) */
    c->pc = RC_ADDR(0x00009432u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xb36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9436:
    /* 00009436   4  clr.w (b38,A4) */
    c->pc = RC_ADDR(0x00009436u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_943A:
    /* 0000943a   4  clr.w (b02,A4) */
    c->pc = RC_ADDR(0x0000943au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb02u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_943E:
    /* 0000943e   6  move.w #154,(b04,A4) */
    c->pc = RC_ADDR(0x0000943eu);
    rc_step(c, m, 16);
    t0 = 0x00000154u;
    rc_wr16(c, m, (c->a[4] + 0xb04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9444:
    /* 00009444   4  move.w (a62,A4),D0 */
    c->pc = RC_ADDR(0x00009444u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9448:
    /* 00009448   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009448u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_944A:
    /* 0000944a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000944au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_944C:
    /* 0000944c   4  lea (ffff8f66,A4),A0 */
    c->pc = RC_ADDR(0x0000944cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x709au);

L_9450:
    /* 00009450   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00009450u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9454:
    /* 00009454   4  sub.w #7e,D1 */
    c->pc = RC_ADDR(0x00009454u);
    rc_step(c, m, 10);
    t0 = 0x0000007eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_9458:
    /* 00009458   4  move.w D1,(b14,A4) */
    c->pc = RC_ADDR(0x00009458u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xb14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_945C:
    /* 0000945c   6  move.w #6c,(b26,A4) */
    c->pc = RC_ADDR(0x0000945cu);
    rc_step(c, m, 16);
    t0 = 0x0000006cu;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9462:
    /* 00009462   6  move.w #6c,(b24,A4) */
    c->pc = RC_ADDR(0x00009462u);
    rc_step(c, m, 16);
    t0 = 0x0000006cu;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9468:
    /* 00009468   6  move.w #2,(ac8,A4) */
    c->pc = RC_ADDR(0x00009468u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xac8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_946E:
    /* 0000946e   4  clr.w (c96,A4) */
    c->pc = RC_ADDR(0x0000946eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xc96u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9472:
    /* 00009472   4  tst.w (b00,A4) */
    c->pc = RC_ADDR(0x00009472u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb00u));
    rc_set_nzvc(c, t0, RC_W);

L_9476:
    /* 00009476   2  bne 00009488 */
    c->pc = RC_ADDR(0x00009476u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9488;

L_9478:
    /* 00009478   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009478u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_947C:
    /* 0000947c   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000947cu);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x00009480u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_9480:
    /* 00009480   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009480u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9482:
    /* 00009482   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00009482u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9484:
    /* 00009484   4  move.w D0,(b00,A4) */
    c->pc = RC_ADDR(0x00009484u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xb00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9488:
    /* 00009488   6  cmpi.w #1,(afe,A4) */
    c->pc = RC_ADDR(0x00009488u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafeu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_948E:
    /* 0000948e   2  bne 000094ae */
    c->pc = RC_ADDR(0x0000948eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_94AE;

L_9490:
    /* 00009490   4  clr.w (cac,A4) */
    c->pc = RC_ADDR(0x00009490u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xcacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9494:
    /* 00009494   6  move.w #c,(b02,A4) */
    c->pc = RC_ADDR(0x00009494u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_949A:
    /* 0000949a   4  clr.w (b04,A4) */
    c->pc = RC_ADDR(0x0000949au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb04u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_949E:
    /* 0000949e   4  clr.w (b14,A4) */
    c->pc = RC_ADDR(0x0000949eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94A2:
    /* 000094a2   6  move.w #2d,(b24,A4) */
    c->pc = RC_ADDR(0x000094a2u);
    rc_step(c, m, 16);
    t0 = 0x0000002du;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_94A8:
    /* 000094a8   6  move.w #6,(ac8,A4) */
    c->pc = RC_ADDR(0x000094a8u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0xac8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_94AE:
    /* 000094ae   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000094aeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94B0:
    /* 000094b0   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000094b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_94B4:
    /* 000094b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000094b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_94B6:
    /* 000094b6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000094b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_94B8:
    /* 000094b8   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x000094b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_94BC:
    /* 000094bc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000094bcu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_94C0:
    /* 000094c0   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x000094c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_94C4:
    /* 000094c4   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000094c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_94C8:
    /* 000094c8   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x000094c8u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x000094ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_94CC:
    /* 000094cc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000094ccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_94D0:
    /* 000094d0   4  move.l D0,(af0,A4) */
    c->pc = RC_ADDR(0x000094d0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xaf0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_94D4:
    /* 000094d4   6  move.w #a0,(aca,A4) */
    c->pc = RC_ADDR(0x000094d4u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] + 0xacau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_94DA:
    /* 000094da   6  move.w #78,(acc,A4) */
    c->pc = RC_ADDR(0x000094dau);
    rc_step(c, m, 16);
    t0 = 0x00000078u;
    rc_wr16(c, m, (c->a[4] + 0xaccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_94E0:
    /* 000094e0   4  clr.w (ace,A4) */
    c->pc = RC_ADDR(0x000094e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xaceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94E4:
    /* 000094e4   4  clr.w (ad0,A4) */
    c->pc = RC_ADDR(0x000094e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xad0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94E8:
    /* 000094e8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x000094e8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_94EA:
    /* 000094ea   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000094eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_94EC:
    /* 000094ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000094ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_94EE:
    /* 000094ee   4  lea (ad2,A4),A0 */
    c->pc = RC_ADDR(0x000094eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xad2u);

L_94F2:
    /* 000094f2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000094f2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_94F6:
    /* 000094f6   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x000094f6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_94F8:
    /* 000094f8   6  cmp.l #3,D4 */
    c->pc = RC_ADDR(0x000094f8u);
    rc_step(c, m, 14);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_94FE:
    /* 000094fe   2  blt 000094ea */
    c->pc = RC_ADDR(0x000094feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_94EA; }

L_9500:
    /* 00009500   6  move.w #1,(c94,A4) */
    c->pc = RC_ADDR(0x00009500u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc94u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9506:
    /* 00009506   6  move.w #1,(c92,A4) */
    c->pc = RC_ADDR(0x00009506u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_950C:
    /* 0000950c   4  clr.w (ca8,A4) */
    c->pc = RC_ADDR(0x0000950cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xca8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9510:
    /* 00009510   4  clr.w (caa,A4) */
    c->pc = RC_ADDR(0x00009510u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xcaau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9514:
    /* 00009514   6  move.w #1,(7ba,A4) */
    c->pc = RC_ADDR(0x00009514u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x7bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_951A:
    /* 0000951a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000951au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_951C:
    /* 0000951c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000951cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9520:
    /* 00009520   4  move.l (cba,A4),-(A7) */
    c->pc = RC_ADDR(0x00009520u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9524:
    /* 00009524   4  move.w (cb6,A4),-(A7) */
    c->pc = RC_ADDR(0x00009524u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcb6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9528:
    /* 00009528   4  move.l (cae,A4),-(A7) */
    c->pc = RC_ADDR(0x00009528u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcaeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_952C:
    /* 0000952c   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0000952cu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00009530u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_9530:
    /* 00009530   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009530u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9534:
    /* 00009534   4  clr.w (ca6,A4) */
    c->pc = RC_ADDR(0x00009534u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xca6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9538:
    /* 00009538   4  clr.w (ffffd5ca,A4) */
    c->pc = RC_ADDR(0x00009538u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a36u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_953C:
    /* 0000953c   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x0000953cu);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x00009540u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bdcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b03eu);
    return;

L_9540:
    /* 00009540   8  move.w (ca6,A4),(00dff0c8).l */
    c->pc = RC_ADDR(0x00009540u);
    rc_step(c, m, 24);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca6u));
    rc_wr16(c, m, 0x00dff0c8u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9548:
    /* 00009548   4  jsr (000096ce) */
    c->pc = RC_ADDR(0x00009548u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000954cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000096ceu);
    return;

L_954C:
    /* 0000954c   6  cmpi.w #c,(b02,A4) */
    c->pc = RC_ADDR(0x0000954cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_9552:
    /* 00009552   2  blt 00009576 */
    c->pc = RC_ADDR(0x00009552u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_9576;

L_9554:
    /* 00009554   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00009554u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9558:
    /* 00009558   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009558u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_955A:
    /* 0000955a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000955au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_955C:
    /* 0000955c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000955cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_955E:
    /* 0000955e   4  pea (00009693) */
    c->pc = RC_ADDR(0x0000955eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009693u));

L_9562:
    /* 00009562   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00009562u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00009566u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_9566:
    /* 00009566   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009566u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9568:
    /* 00009568   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009568u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_956A:
    /* 0000956a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000956au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_956E:
    /* 0000956e   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000956eu);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009572u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_9572:
    /* 00009572   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009572u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9576:
    /* 00009576   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00009576u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_957A:
    /* 0000957a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000957au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_957E:
    /* 0000957e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000957eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9582:
    /* 00009582   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00009582u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_9586:
    /* 00009586   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00009586u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_958A:
    /* 0000958a   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000958au);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000958eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_958E:
    /* 0000958e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000958eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9592:
    /* 00009592   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00009592u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9598:
    /* 00009598   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00009598u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_959C:
    /* 0000959c   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000959cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95A0:
    /* 000095a0   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000095a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95A4:
    /* 000095a4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000095a4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95A8:
    /* 000095a8   4  jsr (00009b3e) */
    c->pc = RC_ADDR(0x000095a8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000095acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b3eu);
    return;

L_95AC:
    /* 000095ac   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000095acu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_95B0:
    /* 000095b0   6  cmpi.w #c,(b02,A4) */
    c->pc = RC_ADDR(0x000095b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_95B6:
    /* 000095b6   2  bge 000095d4 */
    c->pc = RC_ADDR(0x000095b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_95D4;

L_95B8:
    /* 000095b8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000095b8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_95BA:
    /* 000095ba   4  pea (00009697) */
    c->pc = RC_ADDR(0x000095bau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009697u));

L_95BE:
    /* 000095be   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x000095beu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000095c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_95C2:
    /* 000095c2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000095c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_95C4:
    /* 000095c4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000095c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95C6:
    /* 000095c6   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000095c6u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_95CA:
    /* 000095ca   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000095cau);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000095ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_95CE:
    /* 000095ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000095ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_95D0:
    /* 000095d0   4  jsr (00009d42) */
    c->pc = RC_ADDR(0x000095d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000095d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009d42u);
    return;

L_95D4:
    /* 000095d4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000095d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_95D8:
    /* 000095d8   4  jsr (00009f60) */
    c->pc = RC_ADDR(0x000095d8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000095dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009f60u);
    return;

L_95DC:
    /* 000095dc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000095dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_95DE:
    /* 000095de   4  jsr (00009edc) */
    c->pc = RC_ADDR(0x000095deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000095e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009edcu);
    return;

L_95E2:
    /* 000095e2   4  tst.w (caa,A4) */
    c->pc = RC_ADDR(0x000095e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xcaau));
    rc_set_nzvc(c, t0, RC_W);

L_95E6:
    /* 000095e6   2  beq 00009638 */
    c->pc = RC_ADDR(0x000095e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9638;

L_95E8:
    /* 000095e8   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x000095e8u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x000095ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_95EC:
    /* 000095ec   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x000095ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_95F2:
    /* 000095f2   2  bne 00009632 */
    c->pc = RC_ADDR(0x000095f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9632;

L_95F4:
    /* 000095f4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000095f4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_95FA:
    /* 000095fa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000095fau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_95FC:
    /* 000095fc   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000095fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9600:
    /* 00009600   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009600u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9602:
    /* 00009602   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009602u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9604:
    /* 00009604   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x00009604u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_9608:
    /* 00009608   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009608u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_960C:
    /* 0000960c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000960cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9610:
    /* 00009610   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00009610u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00009614u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_9614:
    /* 00009614   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009614u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9616:
    /* 00009616   4  pea (0000969b) */
    c->pc = RC_ADDR(0x00009616u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000969bu));

L_961A:
    /* 0000961a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000961au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_961E:
    /* 0000961e   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x0000961eu);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x00009622u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_9622:
    /* 00009622   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009622u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9624:
    /* 00009624   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009624u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9628:
    /* 00009628   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009628u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_962C:
    /* 0000962c   4  jsr (00006500) */
    c->pc = RC_ADDR(0x0000962cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009630u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_9630:
    /* 00009630   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00009630u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_9632:
    /* 00009632   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00009632u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9634:
    /* 00009634   4  bra 000092dc */
    c->pc = RC_ADDR(0x00009634u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_92DC;

L_9638:
    /* 00009638   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00009638u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_963A:
    /* 0000963a   4  bra 000092dc */
    c->pc = RC_ADDR(0x0000963au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_92DC;

}
