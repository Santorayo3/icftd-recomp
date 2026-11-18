/* fn_000144b0 - 936 byte(s), 256 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000144b0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000144b0u): goto L_144B0;
    case RC_ADDR(0x000144b4u): goto L_144B4;
    case RC_ADDR(0x000144b8u): goto L_144B8;
    case RC_ADDR(0x000144bau): goto L_144BA;
    case RC_ADDR(0x000144bcu): goto L_144BC;
    case RC_ADDR(0x000144c0u): goto L_144C0;
    case RC_ADDR(0x000144c4u): goto L_144C4;
    case RC_ADDR(0x000144c8u): goto L_144C8;
    case RC_ADDR(0x000144cau): goto L_144CA;
    case RC_ADDR(0x000144ceu): goto L_144CE;
    case RC_ADDR(0x000144d0u): goto L_144D0;
    case RC_ADDR(0x000144d2u): goto L_144D2;
    case RC_ADDR(0x000144d6u): goto L_144D6;
    case RC_ADDR(0x000144d8u): goto L_144D8;
    case RC_ADDR(0x000144dau): goto L_144DA;
    case RC_ADDR(0x000144deu): goto L_144DE;
    case RC_ADDR(0x000144e2u): goto L_144E2;
    case RC_ADDR(0x000144e4u): goto L_144E4;
    case RC_ADDR(0x000144eau): goto L_144EA;
    case RC_ADDR(0x000144ecu): goto L_144EC;
    case RC_ADDR(0x000144f0u): goto L_144F0;
    case RC_ADDR(0x000144f2u): goto L_144F2;
    case RC_ADDR(0x000144f4u): goto L_144F4;
    case RC_ADDR(0x000144f8u): goto L_144F8;
    case RC_ADDR(0x000144fcu): goto L_144FC;
    case RC_ADDR(0x00014500u): goto L_14500;
    case RC_ADDR(0x00014502u): goto L_14502;
    case RC_ADDR(0x00014506u): goto L_14506;
    case RC_ADDR(0x00014508u): goto L_14508;
    case RC_ADDR(0x0001450au): goto L_1450A;
    case RC_ADDR(0x0001450eu): goto L_1450E;
    case RC_ADDR(0x00014510u): goto L_14510;
    case RC_ADDR(0x00014514u): goto L_14514;
    case RC_ADDR(0x00014518u): goto L_14518;
    case RC_ADDR(0x0001451cu): goto L_1451C;
    case RC_ADDR(0x00014520u): goto L_14520;
    case RC_ADDR(0x00014522u): goto L_14522;
    case RC_ADDR(0x00014528u): goto L_14528;
    case RC_ADDR(0x0001452cu): goto L_1452C;
    case RC_ADDR(0x0001452eu): goto L_1452E;
    case RC_ADDR(0x00014532u): goto L_14532;
    case RC_ADDR(0x00014534u): goto L_14534;
    case RC_ADDR(0x00014538u): goto L_14538;
    case RC_ADDR(0x0001453eu): goto L_1453E;
    case RC_ADDR(0x00014540u): goto L_14540;
    case RC_ADDR(0x00014544u): goto L_14544;
    case RC_ADDR(0x00014546u): goto L_14546;
    case RC_ADDR(0x0001454au): goto L_1454A;
    case RC_ADDR(0x0001454cu): goto L_1454C;
    case RC_ADDR(0x00014550u): goto L_14550;
    case RC_ADDR(0x00014554u): goto L_14554;
    case RC_ADDR(0x00014558u): goto L_14558;
    case RC_ADDR(0x0001455eu): goto L_1455E;
    case RC_ADDR(0x00014562u): goto L_14562;
    case RC_ADDR(0x00014566u): goto L_14566;
    case RC_ADDR(0x0001456au): goto L_1456A;
    case RC_ADDR(0x0001456cu): goto L_1456C;
    case RC_ADDR(0x00014570u): goto L_14570;
    case RC_ADDR(0x00014576u): goto L_14576;
    case RC_ADDR(0x0001457au): goto L_1457A;
    case RC_ADDR(0x00014580u): goto L_14580;
    case RC_ADDR(0x00014584u): goto L_14584;
    case RC_ADDR(0x0001458au): goto L_1458A;
    case RC_ADDR(0x0001458eu): goto L_1458E;
    case RC_ADDR(0x00014594u): goto L_14594;
    case RC_ADDR(0x00014598u): goto L_14598;
    case RC_ADDR(0x0001459eu): goto L_1459E;
    case RC_ADDR(0x000145a0u): goto L_145A0;
    case RC_ADDR(0x000145a6u): goto L_145A6;
    case RC_ADDR(0x000145a8u): goto L_145A8;
    case RC_ADDR(0x000145aeu): goto L_145AE;
    case RC_ADDR(0x000145b2u): goto L_145B2;
    case RC_ADDR(0x000145b8u): goto L_145B8;
    case RC_ADDR(0x000145bau): goto L_145BA;
    case RC_ADDR(0x000145c0u): goto L_145C0;
    case RC_ADDR(0x000145c2u): goto L_145C2;
    case RC_ADDR(0x000145c8u): goto L_145C8;
    case RC_ADDR(0x000145ccu): goto L_145CC;
    case RC_ADDR(0x000145d2u): goto L_145D2;
    case RC_ADDR(0x000145d4u): goto L_145D4;
    case RC_ADDR(0x000145dau): goto L_145DA;
    case RC_ADDR(0x000145dcu): goto L_145DC;
    case RC_ADDR(0x000145e2u): goto L_145E2;
    case RC_ADDR(0x000145e4u): goto L_145E4;
    case RC_ADDR(0x000145e8u): goto L_145E8;
    case RC_ADDR(0x000145ecu): goto L_145EC;
    case RC_ADDR(0x000145eeu): goto L_145EE;
    case RC_ADDR(0x000145f2u): goto L_145F2;
    case RC_ADDR(0x000145f8u): goto L_145F8;
    case RC_ADDR(0x000145fau): goto L_145FA;
    case RC_ADDR(0x00014600u): goto L_14600;
    case RC_ADDR(0x00014602u): goto L_14602;
    case RC_ADDR(0x00014608u): goto L_14608;
    case RC_ADDR(0x0001460au): goto L_1460A;
    case RC_ADDR(0x00014610u): goto L_14610;
    case RC_ADDR(0x00014612u): goto L_14612;
    case RC_ADDR(0x00014618u): goto L_14618;
    case RC_ADDR(0x0001461au): goto L_1461A;
    case RC_ADDR(0x00014620u): goto L_14620;
    case RC_ADDR(0x00014622u): goto L_14622;
    case RC_ADDR(0x00014628u): goto L_14628;
    case RC_ADDR(0x0001462au): goto L_1462A;
    case RC_ADDR(0x00014630u): goto L_14630;
    case RC_ADDR(0x00014634u): goto L_14634;
    case RC_ADDR(0x00014636u): goto L_14636;
    case RC_ADDR(0x0001463au): goto L_1463A;
    case RC_ADDR(0x0001463cu): goto L_1463C;
    case RC_ADDR(0x0001463eu): goto L_1463E;
    case RC_ADDR(0x00014640u): goto L_14640;
    case RC_ADDR(0x00014644u): goto L_14644;
    case RC_ADDR(0x0001464au): goto L_1464A;
    case RC_ADDR(0x0001464eu): goto L_1464E;
    case RC_ADDR(0x00014650u): goto L_14650;
    case RC_ADDR(0x00014654u): goto L_14654;
    case RC_ADDR(0x00014656u): goto L_14656;
    case RC_ADDR(0x0001465au): goto L_1465A;
    case RC_ADDR(0x0001465cu): goto L_1465C;
    case RC_ADDR(0x00014660u): goto L_14660;
    case RC_ADDR(0x00014662u): goto L_14662;
    case RC_ADDR(0x00014666u): goto L_14666;
    case RC_ADDR(0x00014668u): goto L_14668;
    case RC_ADDR(0x0001466cu): goto L_1466C;
    case RC_ADDR(0x0001466eu): goto L_1466E;
    case RC_ADDR(0x00014672u): goto L_14672;
    case RC_ADDR(0x00014674u): goto L_14674;
    case RC_ADDR(0x0001467au): goto L_1467A;
    case RC_ADDR(0x0001467eu): goto L_1467E;
    case RC_ADDR(0x00014680u): goto L_14680;
    case RC_ADDR(0x00014684u): goto L_14684;
    case RC_ADDR(0x00014686u): goto L_14686;
    case RC_ADDR(0x0001468cu): goto L_1468C;
    case RC_ADDR(0x0001468eu): goto L_1468E;
    case RC_ADDR(0x00014694u): goto L_14694;
    case RC_ADDR(0x00014698u): goto L_14698;
    case RC_ADDR(0x0001469au): goto L_1469A;
    case RC_ADDR(0x0001469cu): goto L_1469C;
    case RC_ADDR(0x000146a0u): goto L_146A0;
    case RC_ADDR(0x000146a6u): goto L_146A6;
    case RC_ADDR(0x000146aau): goto L_146AA;
    case RC_ADDR(0x000146acu): goto L_146AC;
    case RC_ADDR(0x000146aeu): goto L_146AE;
    case RC_ADDR(0x000146b2u): goto L_146B2;
    case RC_ADDR(0x000146b8u): goto L_146B8;
    case RC_ADDR(0x000146beu): goto L_146BE;
    case RC_ADDR(0x000146c0u): goto L_146C0;
    case RC_ADDR(0x000146c6u): goto L_146C6;
    case RC_ADDR(0x000146c8u): goto L_146C8;
    case RC_ADDR(0x000146ccu): goto L_146CC;
    case RC_ADDR(0x000146d0u): goto L_146D0;
    case RC_ADDR(0x000146d4u): goto L_146D4;
    case RC_ADDR(0x000146dau): goto L_146DA;
    case RC_ADDR(0x000146e0u): goto L_146E0;
    case RC_ADDR(0x000146e4u): goto L_146E4;
    case RC_ADDR(0x000146e6u): goto L_146E6;
    case RC_ADDR(0x000146eau): goto L_146EA;
    case RC_ADDR(0x000146eeu): goto L_146EE;
    case RC_ADDR(0x000146f0u): goto L_146F0;
    case RC_ADDR(0x000146f4u): goto L_146F4;
    case RC_ADDR(0x000146f8u): goto L_146F8;
    case RC_ADDR(0x000146fcu): goto L_146FC;
    case RC_ADDR(0x000146feu): goto L_146FE;
    case RC_ADDR(0x00014702u): goto L_14702;
    case RC_ADDR(0x00014704u): goto L_14704;
    case RC_ADDR(0x00014708u): goto L_14708;
    case RC_ADDR(0x0001470cu): goto L_1470C;
    case RC_ADDR(0x00014710u): goto L_14710;
    case RC_ADDR(0x00014712u): goto L_14712;
    case RC_ADDR(0x00014716u): goto L_14716;
    case RC_ADDR(0x0001471au): goto L_1471A;
    case RC_ADDR(0x0001471eu): goto L_1471E;
    case RC_ADDR(0x00014722u): goto L_14722;
    case RC_ADDR(0x00014724u): goto L_14724;
    case RC_ADDR(0x00014728u): goto L_14728;
    case RC_ADDR(0x0001472au): goto L_1472A;
    case RC_ADDR(0x0001472eu): goto L_1472E;
    case RC_ADDR(0x00014732u): goto L_14732;
    case RC_ADDR(0x00014736u): goto L_14736;
    case RC_ADDR(0x00014738u): goto L_14738;
    case RC_ADDR(0x0001473cu): goto L_1473C;
    case RC_ADDR(0x00014740u): goto L_14740;
    case RC_ADDR(0x00014744u): goto L_14744;
    case RC_ADDR(0x00014748u): goto L_14748;
    case RC_ADDR(0x0001474au): goto L_1474A;
    case RC_ADDR(0x0001474eu): goto L_1474E;
    case RC_ADDR(0x00014752u): goto L_14752;
    case RC_ADDR(0x00014754u): goto L_14754;
    case RC_ADDR(0x00014758u): goto L_14758;
    case RC_ADDR(0x0001475au): goto L_1475A;
    case RC_ADDR(0x0001475cu): goto L_1475C;
    case RC_ADDR(0x0001475eu): goto L_1475E;
    case RC_ADDR(0x00014762u): goto L_14762;
    case RC_ADDR(0x00014764u): goto L_14764;
    case RC_ADDR(0x00014768u): goto L_14768;
    case RC_ADDR(0x0001476cu): goto L_1476C;
    case RC_ADDR(0x0001476eu): goto L_1476E;
    case RC_ADDR(0x00014772u): goto L_14772;
    case RC_ADDR(0x00014774u): goto L_14774;
    case RC_ADDR(0x00014778u): goto L_14778;
    case RC_ADDR(0x0001477cu): goto L_1477C;
    case RC_ADDR(0x00014780u): goto L_14780;
    case RC_ADDR(0x00014784u): goto L_14784;
    case RC_ADDR(0x00014786u): goto L_14786;
    case RC_ADDR(0x0001478au): goto L_1478A;
    case RC_ADDR(0x0001478eu): goto L_1478E;
    case RC_ADDR(0x00014792u): goto L_14792;
    case RC_ADDR(0x00014798u): goto L_14798;
    case RC_ADDR(0x0001479cu): goto L_1479C;
    case RC_ADDR(0x000147a0u): goto L_147A0;
    case RC_ADDR(0x000147a4u): goto L_147A4;
    case RC_ADDR(0x000147aau): goto L_147AA;
    case RC_ADDR(0x000147aeu): goto L_147AE;
    case RC_ADDR(0x000147b2u): goto L_147B2;
    case RC_ADDR(0x000147b6u): goto L_147B6;
    case RC_ADDR(0x000147b8u): goto L_147B8;
    case RC_ADDR(0x000147bcu): goto L_147BC;
    case RC_ADDR(0x000147c0u): goto L_147C0;
    case RC_ADDR(0x000147c4u): goto L_147C4;
    case RC_ADDR(0x000147c6u): goto L_147C6;
    case RC_ADDR(0x000147c8u): goto L_147C8;
    case RC_ADDR(0x000147ccu): goto L_147CC;
    case RC_ADDR(0x000147d0u): goto L_147D0;
    case RC_ADDR(0x000147d4u): goto L_147D4;
    case RC_ADDR(0x000147d6u): goto L_147D6;
    case RC_ADDR(0x000147dau): goto L_147DA;
    case RC_ADDR(0x000147deu): goto L_147DE;
    case RC_ADDR(0x000147e2u): goto L_147E2;
    case RC_ADDR(0x000147e4u): goto L_147E4;
    case RC_ADDR(0x000147e6u): goto L_147E6;
    case RC_ADDR(0x000147eau): goto L_147EA;
    case RC_ADDR(0x000147ecu): goto L_147EC;
    case RC_ADDR(0x000147f0u): goto L_147F0;
    case RC_ADDR(0x000147f4u): goto L_147F4;
    case RC_ADDR(0x000147f6u): goto L_147F6;
    case RC_ADDR(0x000147fau): goto L_147FA;
    case RC_ADDR(0x000147fcu): goto L_147FC;
    case RC_ADDR(0x00014800u): goto L_14800;
    case RC_ADDR(0x00014804u): goto L_14804;
    case RC_ADDR(0x00014808u): goto L_14808;
    case RC_ADDR(0x0001480cu): goto L_1480C;
    case RC_ADDR(0x00014810u): goto L_14810;
    case RC_ADDR(0x00014814u): goto L_14814;
    case RC_ADDR(0x00014818u): goto L_14818;
    case RC_ADDR(0x0001481eu): goto L_1481E;
    case RC_ADDR(0x00014822u): goto L_14822;
    case RC_ADDR(0x00014826u): goto L_14826;
    case RC_ADDR(0x0001482au): goto L_1482A;
    case RC_ADDR(0x00014830u): goto L_14830;
    case RC_ADDR(0x00014834u): goto L_14834;
    case RC_ADDR(0x00014838u): goto L_14838;
    case RC_ADDR(0x0001483cu): goto L_1483C;
    case RC_ADDR(0x00014842u): goto L_14842;
    case RC_ADDR(0x00014846u): goto L_14846;
    case RC_ADDR(0x0001484au): goto L_1484A;
    case RC_ADDR(0x0001484eu): goto L_1484E;
    case RC_ADDR(0x00014854u): goto L_14854;
    case RC_ADDR(0x00014856u): goto L_14856;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_144B0:
    /* 000144b0   4  link.w A5,#ffffffe4 */
    c->pc = RC_ADDR(0x000144b0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1cu;

L_144B4:
    /* 000144b4   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000144b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_144B8:
    /* 000144b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000144b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_144BA:
    /* 000144ba   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000144bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_144BC:
    /* 000144bc   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x000144bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_144C0:
    /* 000144c0   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000144c0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_144C4:
    /* 000144c4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000144c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_144C8:
    /* 000144c8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000144c8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_144CA:
    /* 000144ca   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x000144cau);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_144CE:
    /* 000144ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000144ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_144D0:
    /* 000144d0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000144d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_144D2:
    /* 000144d2   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000144d2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_144D6:
    /* 000144d6   2  ext.w D0 */
    c->pc = RC_ADDR(0x000144d6u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_144D8:
    /* 000144d8   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000144d8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_144DA:
    /* 000144da   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000144dau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_144DE:
    /* 000144de   4  tst.w (1ab4,A4) */
    c->pc = RC_ADDR(0x000144deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab4u));
    rc_set_nzvc(c, t0, RC_W);

L_144E2:
    /* 000144e2   2  beq 000144ec */
    c->pc = RC_ADDR(0x000144e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_144EC;

L_144E4:
    /* 000144e4   6  move.w #5a,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000144e4u);
    rc_step(c, m, 16);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_144EA:
    /* 000144ea   2  bra 00014514 */
    c->pc = RC_ADDR(0x000144eau);
    rc_step(c, m, 10);
    goto L_14514;

L_144EC:
    /* 000144ec   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000144ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_144F0:
    /* 000144f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000144f0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_144F2:
    /* 000144f2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000144f2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_144F4:
    /* 000144f4   4  lea (ffff851a,A4),A0 */
    c->pc = RC_ADDR(0x000144f4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7ae6u);

L_144F8:
    /* 000144f8   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000144f8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_144FC:
    /* 000144fc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000144fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14500:
    /* 00014500   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014500u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14502:
    /* 00014502   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00014502u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14506:
    /* 00014506   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014506u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14508:
    /* 00014508   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00014508u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1450A:
    /* 0001450a   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001450au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1450E:
    /* 0001450e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001450eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14510:
    /* 00014510   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00014510u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14514:
    /* 00014514   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00014514u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14518:
    /* 00014518   4  move.w (1ab8,A4),D0 */
    c->pc = RC_ADDR(0x00014518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1451C:
    /* 0001451c   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001451cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14520:
    /* 00014520   2  bne 00014528 */
    c->pc = RC_ADDR(0x00014520u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14528;

L_14522:
    /* 00014522   6  move.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00014522u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14528:
    /* 00014528   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014528u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1452C:
    /* 0001452c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001452cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1452E:
    /* 0001452e   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x0001452eu);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_14532:
    /* 00014532   2  swap D0 */
    c->pc = RC_ADDR(0x00014532u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14534:
    /* 00014534   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00014534u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14538:
    /* 00014538   6  cmpi.w #7,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00014538u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_1453E:
    /* 0001453e   2  bgt 00014546 */
    c->pc = RC_ADDR(0x0001453eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_14546;

L_14540:
    /* 00014540   4  tst.w (1ab4,A4) */
    c->pc = RC_ADDR(0x00014540u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab4u));
    rc_set_nzvc(c, t0, RC_W);

L_14544:
    /* 00014544   2  beq 0001455e */
    c->pc = RC_ADDR(0x00014544u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1455E;

L_14546:
    /* 00014546   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00014546u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_1454A:
    /* 0001454a   2  beq 0001455e */
    c->pc = RC_ADDR(0x0001454au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1455E;

L_1454C:
    /* 0001454c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001454cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14550:
    /* 00014550   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014550u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14554:
    /* 00014554   4  lea (fffffb36,A4),A0 */
    c->pc = RC_ADDR(0x00014554u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cau);

L_14558:
    /* 00014558   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014558u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1455E:
    /* 0001455e   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x0001455eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14562:
    /* 00014562   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00014562u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14566:
    /* 00014566   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00014566u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1456A:
    /* 0001456a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001456au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1456C:
    /* 0001456c   4  bra 0001462a */
    c->pc = RC_ADDR(0x0001456cu);
    rc_step(c, m, 10);
    goto L_1462A;

L_14570:
    /* 00014570   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00014570u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14576:
    /* 00014576   4  bra 0001465c */
    c->pc = RC_ADDR(0x00014576u);
    rc_step(c, m, 10);
    goto L_1465C;

L_1457A:
    /* 0001457a   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001457au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14580:
    /* 00014580   4  bra 0001465c */
    c->pc = RC_ADDR(0x00014580u);
    rc_step(c, m, 10);
    goto L_1465C;

L_14584:
    /* 00014584   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00014584u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1458A:
    /* 0001458a   4  bra 0001465c */
    c->pc = RC_ADDR(0x0001458au);
    rc_step(c, m, 10);
    goto L_1465C;

L_1458E:
    /* 0001458e   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001458eu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14594:
    /* 00014594   4  bra 0001465c */
    c->pc = RC_ADDR(0x00014594u);
    rc_step(c, m, 10);
    goto L_1465C;

L_14598:
    /* 00014598   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00014598u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1459E:
    /* 0001459e   2  ble 000145a8 */
    c->pc = RC_ADDR(0x0001459eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_145A8;

L_145A0:
    /* 000145a0   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000145a0u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145A6:
    /* 000145a6   2  bra 000145ae */
    c->pc = RC_ADDR(0x000145a6u);
    rc_step(c, m, 10);
    goto L_145AE;

L_145A8:
    /* 000145a8   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000145a8u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145AE:
    /* 000145ae   4  bra 0001465c */
    c->pc = RC_ADDR(0x000145aeu);
    rc_step(c, m, 10);
    goto L_1465C;

L_145B2:
    /* 000145b2   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000145b2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_145B8:
    /* 000145b8   2  ble 000145c2 */
    c->pc = RC_ADDR(0x000145b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_145C2;

L_145BA:
    /* 000145ba   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000145bau);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145C0:
    /* 000145c0   2  bra 000145c8 */
    c->pc = RC_ADDR(0x000145c0u);
    rc_step(c, m, 10);
    goto L_145C8;

L_145C2:
    /* 000145c2   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000145c2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145C8:
    /* 000145c8   4  bra 0001465c */
    c->pc = RC_ADDR(0x000145c8u);
    rc_step(c, m, 10);
    goto L_1465C;

L_145CC:
    /* 000145cc   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000145ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_145D2:
    /* 000145d2   2  ble 000145dc */
    c->pc = RC_ADDR(0x000145d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_145DC;

L_145D4:
    /* 000145d4   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000145d4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145DA:
    /* 000145da   2  bra 000145e2 */
    c->pc = RC_ADDR(0x000145dau);
    rc_step(c, m, 10);
    goto L_145E2;

L_145DC:
    /* 000145dc   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000145dcu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145E2:
    /* 000145e2   2  bra 0001465c */
    c->pc = RC_ADDR(0x000145e2u);
    rc_step(c, m, 10);
    goto L_1465C;

L_145E4:
    /* 000145e4   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000145e4u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_145E8:
    /* 000145e8   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x000145e8u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x000145ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_145EC:
    /* 000145ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000145ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_145EE:
    /* 000145ee   4  move.w D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000145eeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145F2:
    /* 000145f2   6  cmpi.w #2ee,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000145f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000002eeu);

L_145F8:
    /* 000145f8   2  ble 00014602 */
    c->pc = RC_ADDR(0x000145f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14602;

L_145FA:
    /* 000145fa   6  move.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000145fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14600:
    /* 00014600   2  bra 00014628 */
    c->pc = RC_ADDR(0x00014600u);
    rc_step(c, m, 10);
    goto L_14628;

L_14602:
    /* 00014602   6  cmpi.w #1f4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00014602u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000001f4u);

L_14608:
    /* 00014608   2  ble 00014612 */
    c->pc = RC_ADDR(0x00014608u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14612;

L_1460A:
    /* 0001460a   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001460au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14610:
    /* 00014610   2  bra 00014628 */
    c->pc = RC_ADDR(0x00014610u);
    rc_step(c, m, 10);
    goto L_14628;

L_14612:
    /* 00014612   6  cmpi.w #fa,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00014612u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000000fau);

L_14618:
    /* 00014618   2  ble 00014622 */
    c->pc = RC_ADDR(0x00014618u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14622;

L_1461A:
    /* 0001461a   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0001461au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14620:
    /* 00014620   2  bra 00014628 */
    c->pc = RC_ADDR(0x00014620u);
    rc_step(c, m, 10);
    goto L_14628;

L_14622:
    /* 00014622   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00014622u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14628:
    /* 00014628   2  bra 0001465c */
    c->pc = RC_ADDR(0x00014628u);
    rc_step(c, m, 10);
    goto L_1465C;

L_1462A:
    /* 0001462a   6  sub.l #41,D0 */
    c->pc = RC_ADDR(0x0001462au);
    rc_step(c, m, 16);
    t0 = 0x00000041u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14630:
    /* 00014630   4  beq 00014598 */
    c->pc = RC_ADDR(0x00014630u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_14598; }

L_14634:
    /* 00014634   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00014634u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14636:
    /* 00014636   4  beq 000145b2 */
    c->pc = RC_ADDR(0x00014636u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_145B2; }

L_1463A:
    /* 0001463a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001463au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1463C:
    /* 0001463c   2  beq 000145cc */
    c->pc = RC_ADDR(0x0001463cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_145CC; }

L_1463E:
    /* 0001463e   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0001463eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14640:
    /* 00014640   4  beq 00014584 */
    c->pc = RC_ADDR(0x00014640u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_14584; }

L_14644:
    /* 00014644   6  sub.l #9,D0 */
    c->pc = RC_ADDR(0x00014644u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1464A:
    /* 0001464a   4  beq 00014570 */
    c->pc = RC_ADDR(0x0001464au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_14570; }

L_1464E:
    /* 0001464e   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x0001464eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14650:
    /* 00014650   4  beq 0001457a */
    c->pc = RC_ADDR(0x00014650u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1457A; }

L_14654:
    /* 00014654   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x00014654u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14656:
    /* 00014656   4  beq 0001458e */
    c->pc = RC_ADDR(0x00014656u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1458E; }

L_1465A:
    /* 0001465a   2  bra 000145e4 */
    c->pc = RC_ADDR(0x0001465au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_145E4;

L_1465C:
    /* 0001465c   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x0001465cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_14660:
    /* 00014660   2  beq 00014694 */
    c->pc = RC_ADDR(0x00014660u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14694;

L_14662:
    /* 00014662   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00014662u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_14666:
    /* 00014666   2  beq 0001467a */
    c->pc = RC_ADDR(0x00014666u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1467A;

L_14668:
    /* 00014668   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00014668u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_1466C:
    /* 0001466c   2  ble 00014674 */
    c->pc = RC_ADDR(0x0001466cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14674;

L_1466E:
    /* 0001466e   4  clr.w (1aba,A4) */
    c->pc = RC_ADDR(0x0001466eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1abau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14672:
    /* 00014672   2  bra 0001467a */
    c->pc = RC_ADDR(0x00014672u);
    rc_step(c, m, 10);
    goto L_1467A;

L_14674:
    /* 00014674   6  move.w #1,(1aba,A4) */
    c->pc = RC_ADDR(0x00014674u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1abau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1467A:
    /* 0001467a   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x0001467au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1467E:
    /* 0001467e   2  beq 00014694 */
    c->pc = RC_ADDR(0x0001467eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14694;

L_14680:
    /* 00014680   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00014680u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_14684:
    /* 00014684   2  ble 0001468e */
    c->pc = RC_ADDR(0x00014684u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1468E;

L_14686:
    /* 00014686   6  move.w #2,(1aba,A4) */
    c->pc = RC_ADDR(0x00014686u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1abau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1468C:
    /* 0001468c   2  bra 00014694 */
    c->pc = RC_ADDR(0x0001468cu);
    rc_step(c, m, 10);
    goto L_14694;

L_1468E:
    /* 0001468e   6  move.w #3,(1aba,A4) */
    c->pc = RC_ADDR(0x0001468eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1abau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14694:
    /* 00014694   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00014694u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14698:
    /* 00014698   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014698u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1469A:
    /* 0001469a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001469au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1469C:
    /* 0001469c   4  lea (ffffb5d8,A4),A0 */
    c->pc = RC_ADDR(0x0001469cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a28u);

L_146A0:
    /* 000146a0   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000146a0u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146A6:
    /* 000146a6   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000146a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_146AA:
    /* 000146aa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000146aau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_146AC:
    /* 000146ac   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000146acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_146AE:
    /* 000146ae   4  lea (ffffb5da,A4),A0 */
    c->pc = RC_ADDR(0x000146aeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a26u);

L_146B2:
    /* 000146b2   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x000146b2u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146B8:
    /* 000146b8   6  cmpi.w #7,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000146b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_146BE:
    /* 000146be   2  ble 000146d4 */
    c->pc = RC_ADDR(0x000146beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_146D4;

L_146C0:
    /* 000146c0   6  cmpi.w #b,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000146c0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_146C6:
    /* 000146c6   2  bge 000146d4 */
    c->pc = RC_ADDR(0x000146c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_146D4;

L_146C8:
    /* 000146c8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000146c8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_146CC:
    /* 000146cc   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000146ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_146D0:
    /* 000146d0   4  bra 0001480c */
    c->pc = RC_ADDR(0x000146d0u);
    rc_step(c, m, 10);
    goto L_1480C;

L_146D4:
    /* 000146d4   6  move.w #a0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x000146d4u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146DA:
    /* 000146da   6  move.w #64,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x000146dau);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146E0:
    /* 000146e0   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x000146e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_146E4:
    /* 000146e4   2  bge 000146ea */
    c->pc = RC_ADDR(0x000146e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_146EA;

L_146E6:
    /* 000146e6   4  clr.w (ffffffe8,A5) */
    c->pc = RC_ADDR(0x000146e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x18u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_146EA:
    /* 000146ea   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x000146eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_146EE:
    /* 000146ee   2  bge 000146f4 */
    c->pc = RC_ADDR(0x000146eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_146F4;

L_146F0:
    /* 000146f0   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x000146f0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_146F4:
    /* 000146f4   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x000146f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_146F8:
    /* 000146f8   4  muls.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000146f8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_muls(c, 0, t0);

L_146FC:
    /* 000146fc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000146fcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146FE:
    /* 000146fe   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x000146feu);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00014702u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_14702:
    /* 00014702   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014702u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14704:
    /* 00014704   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x00014704u);
    rc_step(c, m, 42);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_14708:
    /* 00014708   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00014708u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1470C:
    /* 0001470c   4  muls.w (ffffffe8,A5),D1 */
    c->pc = RC_ADDR(0x0001470cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_muls(c, 1, t0);

L_14710:
    /* 00014710   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00014710u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14712:
    /* 00014712   4  add.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00014712u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14716:
    /* 00014716   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014716u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1471A:
    /* 0001471a   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001471au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1471E:
    /* 0001471e   4  muls.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0001471eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_muls(c, 0, t0);

L_14722:
    /* 00014722   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014722u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14724:
    /* 00014724   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00014724u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00014728u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_14728:
    /* 00014728   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014728u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1472A:
    /* 0001472a   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x0001472au);
    rc_step(c, m, 42);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_1472E:
    /* 0001472e   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001472eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14732:
    /* 00014732   4  muls.w (ffffffe6,A5),D1 */
    c->pc = RC_ADDR(0x00014732u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_muls(c, 1, t0);

L_14736:
    /* 00014736   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00014736u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14738:
    /* 00014738   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014738u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1473C:
    /* 0001473c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001473cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14740:
    /* 00014740   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00014740u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14744:
    /* 00014744   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00014744u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14748:
    /* 00014748   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014748u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1474A:
    /* 0001474a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001474au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1474E:
    /* 0001474e   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x0001474eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14752:
    /* 00014752   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014752u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14754:
    /* 00014754   4  jsr (00014482) */
    c->pc = RC_ADDR(0x00014754u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014758u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014482u);
    return;

L_14758:
    /* 00014758   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00014758u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1475A:
    /* 0001475a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001475au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1475C:
    /* 0001475c   2  beq 00014774 */
    c->pc = RC_ADDR(0x0001475cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14774;

L_1475E:
    /* 0001475e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001475eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14762:
    /* 00014762   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x00014762u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_14764:
    /* 00014764   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014764u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14768:
    /* 00014768   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00014768u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1476C:
    /* 0001476c   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x0001476cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_1476E:
    /* 0001476e   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001476eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14772:
    /* 00014772   2  bra 00014740 */
    c->pc = RC_ADDR(0x00014772u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14740;

L_14774:
    /* 00014774   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014774u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14778:
    /* 00014778   4  bra 00014800 */
    c->pc = RC_ADDR(0x00014778u);
    rc_step(c, m, 10);
    goto L_14800;

L_1477C:
    /* 0001477c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001477cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14780:
    /* 00014780   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014780u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14784:
    /* 00014784   2  beq 000147fc */
    c->pc = RC_ADDR(0x00014784u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_147FC;

L_14786:
    /* 00014786   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014786u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1478A:
    /* 0001478a   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001478au);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1478E:
    /* 0001478e   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x0001478eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_14792:
    /* 00014792   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00014792u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14798:
    /* 00014798   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014798u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1479C:
    /* 0001479c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001479cu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_147A0:
    /* 000147a0   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x000147a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_147A4:
    /* 000147a4   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x000147a4u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_147AA:
    /* 000147aa   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000147aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147AE:
    /* 000147ae   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x000147aeu);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147B2:
    /* 000147b2   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000147b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_147B6:
    /* 000147b6   2  ble 000147fc */
    c->pc = RC_ADDR(0x000147b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_147FC;

L_147B8:
    /* 000147b8   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000147b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147BC:
    /* 000147bc   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x000147bcu);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147C0:
    /* 000147c0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000147c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147C4:
    /* 000147c4   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000147c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_147C6:
    /* 000147c6   2  bge 000147fc */
    c->pc = RC_ADDR(0x000147c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_147FC;

L_147C8:
    /* 000147c8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000147c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147CC:
    /* 000147cc   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x000147ccu);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147D0:
    /* 000147d0   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000147d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_147D4:
    /* 000147d4   2  ble 000147fc */
    c->pc = RC_ADDR(0x000147d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_147FC;

L_147D6:
    /* 000147d6   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000147d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147DA:
    /* 000147da   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x000147dau);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_147DE:
    /* 000147de   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000147deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147E2:
    /* 000147e2   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000147e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_147E4:
    /* 000147e4   2  bge 000147fc */
    c->pc = RC_ADDR(0x000147e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_147FC;

L_147E6:
    /* 000147e6   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000147e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147EA:
    /* 000147ea   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x000147eau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_147EC:
    /* 000147ec   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000147ecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_147F0:
    /* 000147f0   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x000147f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147F4:
    /* 000147f4   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x000147f4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_147F6:
    /* 000147f6   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000147f6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_147FA:
    /* 000147fa   2  bra 000147aa */
    c->pc = RC_ADDR(0x000147fau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_147AA;

L_147FC:
    /* 000147fc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000147fcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14800:
    /* 00014800   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014800u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14804:
    /* 00014804   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00014804u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14808:
    /* 00014808   4  blt 0001477c */
    c->pc = RC_ADDR(0x00014808u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1477C; }

L_1480C:
    /* 0001480c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001480cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14810:
    /* 00014810   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014810u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14814:
    /* 00014814   4  lea (fffffb28,A4),A0 */
    c->pc = RC_ADDR(0x00014814u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d8u);

L_14818:
    /* 00014818   6  move.w (fffffffc,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014818u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1481E:
    /* 0001481e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001481eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14822:
    /* 00014822   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014822u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14826:
    /* 00014826   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00014826u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_1482A:
    /* 0001482a   6  move.w (fffffffc,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001482au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14830:
    /* 00014830   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014830u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14834:
    /* 00014834   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014834u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14838:
    /* 00014838   4  lea (fffffb2a,A4),A0 */
    c->pc = RC_ADDR(0x00014838u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d6u);

L_1483C:
    /* 0001483c   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001483cu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14842:
    /* 00014842   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014842u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14846:
    /* 00014846   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014846u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1484A:
    /* 0001484a   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x0001484au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_1484E:
    /* 0001484e   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001484eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14854:
    /* 00014854   2  unlk A5 */
    c->pc = RC_ADDR(0x00014854u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14856:
    /* 00014856   2  rts */
    c->pc = RC_ADDR(0x00014856u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
