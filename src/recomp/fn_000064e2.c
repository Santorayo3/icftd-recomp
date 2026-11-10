/* fn_000064e2 - 1130 byte(s), 303 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000064e2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000064e2u): goto L_64E2;
    case RC_ADDR(0x000064e6u): goto L_64E6;
    case RC_ADDR(0x000064eau): goto L_64EA;
    case RC_ADDR(0x000064eeu): goto L_64EE;
    case RC_ADDR(0x000064f2u): goto L_64F2;
    case RC_ADDR(0x000064f6u): goto L_64F6;
    case RC_ADDR(0x000064f8u): goto L_64F8;
    case RC_ADDR(0x000064fcu): goto L_64FC;
    case RC_ADDR(0x00006500u): goto L_6500;
    case RC_ADDR(0x00006504u): goto L_6504;
    case RC_ADDR(0x00006508u): goto L_6508;
    case RC_ADDR(0x0000650cu): goto L_650C;
    case RC_ADDR(0x0000650eu): goto L_650E;
    case RC_ADDR(0x00006512u): goto L_6512;
    case RC_ADDR(0x00006516u): goto L_6516;
    case RC_ADDR(0x0000651au): goto L_651A;
    case RC_ADDR(0x0000651cu): goto L_651C;
    case RC_ADDR(0x00006520u): goto L_6520;
    case RC_ADDR(0x00006524u): goto L_6524;
    case RC_ADDR(0x00006528u): goto L_6528;
    case RC_ADDR(0x0000652cu): goto L_652C;
    case RC_ADDR(0x00006530u): goto L_6530;
    case RC_ADDR(0x00006534u): goto L_6534;
    case RC_ADDR(0x0000653au): goto L_653A;
    case RC_ADDR(0x00006540u): goto L_6540;
    case RC_ADDR(0x00006546u): goto L_6546;
    case RC_ADDR(0x0000654au): goto L_654A;
    case RC_ADDR(0x0000654eu): goto L_654E;
    case RC_ADDR(0x00006552u): goto L_6552;
    case RC_ADDR(0x00006556u): goto L_6556;
    case RC_ADDR(0x0000655au): goto L_655A;
    case RC_ADDR(0x0000655eu): goto L_655E;
    case RC_ADDR(0x00006562u): goto L_6562;
    case RC_ADDR(0x00006566u): goto L_6566;
    case RC_ADDR(0x00006568u): goto L_6568;
    case RC_ADDR(0x0000656cu): goto L_656C;
    case RC_ADDR(0x00006570u): goto L_6570;
    case RC_ADDR(0x00006574u): goto L_6574;
    case RC_ADDR(0x00006578u): goto L_6578;
    case RC_ADDR(0x0000657eu): goto L_657E;
    case RC_ADDR(0x00006582u): goto L_6582;
    case RC_ADDR(0x00006586u): goto L_6586;
    case RC_ADDR(0x0000658au): goto L_658A;
    case RC_ADDR(0x0000658cu): goto L_658C;
    case RC_ADDR(0x00006590u): goto L_6590;
    case RC_ADDR(0x00006592u): goto L_6592;
    case RC_ADDR(0x00006596u): goto L_6596;
    case RC_ADDR(0x00006598u): goto L_6598;
    case RC_ADDR(0x0000659eu): goto L_659E;
    case RC_ADDR(0x000065a0u): goto L_65A0;
    case RC_ADDR(0x000065a4u): goto L_65A4;
    case RC_ADDR(0x000065a8u): goto L_65A8;
    case RC_ADDR(0x000065acu): goto L_65AC;
    case RC_ADDR(0x000065b0u): goto L_65B0;
    case RC_ADDR(0x000065b4u): goto L_65B4;
    case RC_ADDR(0x000065b8u): goto L_65B8;
    case RC_ADDR(0x000065bcu): goto L_65BC;
    case RC_ADDR(0x000065c2u): goto L_65C2;
    case RC_ADDR(0x000065c4u): goto L_65C4;
    case RC_ADDR(0x000065cau): goto L_65CA;
    case RC_ADDR(0x000065d0u): goto L_65D0;
    case RC_ADDR(0x000065d2u): goto L_65D2;
    case RC_ADDR(0x000065d8u): goto L_65D8;
    case RC_ADDR(0x000065deu): goto L_65DE;
    case RC_ADDR(0x000065e0u): goto L_65E0;
    case RC_ADDR(0x000065e6u): goto L_65E6;
    case RC_ADDR(0x000065ecu): goto L_65EC;
    case RC_ADDR(0x000065eeu): goto L_65EE;
    case RC_ADDR(0x000065f4u): goto L_65F4;
    case RC_ADDR(0x000065fau): goto L_65FA;
    case RC_ADDR(0x00006600u): goto L_6600;
    case RC_ADDR(0x00006604u): goto L_6604;
    case RC_ADDR(0x00006606u): goto L_6606;
    case RC_ADDR(0x00006608u): goto L_6608;
    case RC_ADDR(0x0000660au): goto L_660A;
    case RC_ADDR(0x0000660cu): goto L_660C;
    case RC_ADDR(0x00006610u): goto L_6610;
    case RC_ADDR(0x00006612u): goto L_6612;
    case RC_ADDR(0x00006614u): goto L_6614;
    case RC_ADDR(0x00006616u): goto L_6616;
    case RC_ADDR(0x00006618u): goto L_6618;
    case RC_ADDR(0x0000661au): goto L_661A;
    case RC_ADDR(0x0000661eu): goto L_661E;
    case RC_ADDR(0x00006622u): goto L_6622;
    case RC_ADDR(0x00006626u): goto L_6626;
    case RC_ADDR(0x0000662au): goto L_662A;
    case RC_ADDR(0x0000662eu): goto L_662E;
    case RC_ADDR(0x00006632u): goto L_6632;
    case RC_ADDR(0x00006634u): goto L_6634;
    case RC_ADDR(0x00006638u): goto L_6638;
    case RC_ADDR(0x0000663cu): goto L_663C;
    case RC_ADDR(0x00006640u): goto L_6640;
    case RC_ADDR(0x00006642u): goto L_6642;
    case RC_ADDR(0x00006646u): goto L_6646;
    case RC_ADDR(0x0000664au): goto L_664A;
    case RC_ADDR(0x00006650u): goto L_6650;
    case RC_ADDR(0x00006652u): goto L_6652;
    case RC_ADDR(0x00006656u): goto L_6656;
    case RC_ADDR(0x0000665au): goto L_665A;
    case RC_ADDR(0x0000665eu): goto L_665E;
    case RC_ADDR(0x00006660u): goto L_6660;
    case RC_ADDR(0x00006664u): goto L_6664;
    case RC_ADDR(0x00006668u): goto L_6668;
    case RC_ADDR(0x0000666cu): goto L_666C;
    case RC_ADDR(0x00006670u): goto L_6670;
    case RC_ADDR(0x00006674u): goto L_6674;
    case RC_ADDR(0x00006678u): goto L_6678;
    case RC_ADDR(0x0000667cu): goto L_667C;
    case RC_ADDR(0x0000667eu): goto L_667E;
    case RC_ADDR(0x00006682u): goto L_6682;
    case RC_ADDR(0x00006686u): goto L_6686;
    case RC_ADDR(0x0000668au): goto L_668A;
    case RC_ADDR(0x0000668cu): goto L_668C;
    case RC_ADDR(0x00006690u): goto L_6690;
    case RC_ADDR(0x00006694u): goto L_6694;
    case RC_ADDR(0x00006698u): goto L_6698;
    case RC_ADDR(0x0000669au): goto L_669A;
    case RC_ADDR(0x000066a0u): goto L_66A0;
    case RC_ADDR(0x000066a4u): goto L_66A4;
    case RC_ADDR(0x000066a8u): goto L_66A8;
    case RC_ADDR(0x000066acu): goto L_66AC;
    case RC_ADDR(0x000066aeu): goto L_66AE;
    case RC_ADDR(0x000066b2u): goto L_66B2;
    case RC_ADDR(0x000066b4u): goto L_66B4;
    case RC_ADDR(0x000066b8u): goto L_66B8;
    case RC_ADDR(0x000066bcu): goto L_66BC;
    case RC_ADDR(0x000066beu): goto L_66BE;
    case RC_ADDR(0x000066c2u): goto L_66C2;
    case RC_ADDR(0x000066c6u): goto L_66C6;
    case RC_ADDR(0x000066c8u): goto L_66C8;
    case RC_ADDR(0x000066ccu): goto L_66CC;
    case RC_ADDR(0x000066d0u): goto L_66D0;
    case RC_ADDR(0x000066d2u): goto L_66D2;
    case RC_ADDR(0x000066d6u): goto L_66D6;
    case RC_ADDR(0x000066dau): goto L_66DA;
    case RC_ADDR(0x000066deu): goto L_66DE;
    case RC_ADDR(0x000066e2u): goto L_66E2;
    case RC_ADDR(0x000066e6u): goto L_66E6;
    case RC_ADDR(0x000066eau): goto L_66EA;
    case RC_ADDR(0x000066ecu): goto L_66EC;
    case RC_ADDR(0x000066f0u): goto L_66F0;
    case RC_ADDR(0x000066f6u): goto L_66F6;
    case RC_ADDR(0x000066fau): goto L_66FA;
    case RC_ADDR(0x000066feu): goto L_66FE;
    case RC_ADDR(0x00006700u): goto L_6700;
    case RC_ADDR(0x00006704u): goto L_6704;
    case RC_ADDR(0x00006708u): goto L_6708;
    case RC_ADDR(0x0000670cu): goto L_670C;
    case RC_ADDR(0x00006710u): goto L_6710;
    case RC_ADDR(0x00006716u): goto L_6716;
    case RC_ADDR(0x00006718u): goto L_6718;
    case RC_ADDR(0x0000671cu): goto L_671C;
    case RC_ADDR(0x0000671eu): goto L_671E;
    case RC_ADDR(0x00006722u): goto L_6722;
    case RC_ADDR(0x00006726u): goto L_6726;
    case RC_ADDR(0x0000672au): goto L_672A;
    case RC_ADDR(0x0000672eu): goto L_672E;
    case RC_ADDR(0x00006734u): goto L_6734;
    case RC_ADDR(0x00006738u): goto L_6738;
    case RC_ADDR(0x0000673cu): goto L_673C;
    case RC_ADDR(0x00006740u): goto L_6740;
    case RC_ADDR(0x00006746u): goto L_6746;
    case RC_ADDR(0x0000674au): goto L_674A;
    case RC_ADDR(0x0000674cu): goto L_674C;
    case RC_ADDR(0x0000674eu): goto L_674E;
    case RC_ADDR(0x00006752u): goto L_6752;
    case RC_ADDR(0x00006758u): goto L_6758;
    case RC_ADDR(0x0000675cu): goto L_675C;
    case RC_ADDR(0x00006762u): goto L_6762;
    case RC_ADDR(0x00006764u): goto L_6764;
    case RC_ADDR(0x00006768u): goto L_6768;
    case RC_ADDR(0x0000676cu): goto L_676C;
    case RC_ADDR(0x00006770u): goto L_6770;
    case RC_ADDR(0x00006772u): goto L_6772;
    case RC_ADDR(0x00006774u): goto L_6774;
    case RC_ADDR(0x00006776u): goto L_6776;
    case RC_ADDR(0x0000677cu): goto L_677C;
    case RC_ADDR(0x00006782u): goto L_6782;
    case RC_ADDR(0x00006786u): goto L_6786;
    case RC_ADDR(0x00006788u): goto L_6788;
    case RC_ADDR(0x0000678cu): goto L_678C;
    case RC_ADDR(0x00006790u): goto L_6790;
    case RC_ADDR(0x00006794u): goto L_6794;
    case RC_ADDR(0x00006798u): goto L_6798;
    case RC_ADDR(0x0000679cu): goto L_679C;
    case RC_ADDR(0x000067a0u): goto L_67A0;
    case RC_ADDR(0x000067a4u): goto L_67A4;
    case RC_ADDR(0x000067a6u): goto L_67A6;
    case RC_ADDR(0x000067aau): goto L_67AA;
    case RC_ADDR(0x000067aeu): goto L_67AE;
    case RC_ADDR(0x000067b2u): goto L_67B2;
    case RC_ADDR(0x000067b8u): goto L_67B8;
    case RC_ADDR(0x000067bcu): goto L_67BC;
    case RC_ADDR(0x000067beu): goto L_67BE;
    case RC_ADDR(0x000067c0u): goto L_67C0;
    case RC_ADDR(0x000067c4u): goto L_67C4;
    case RC_ADDR(0x000067c8u): goto L_67C8;
    case RC_ADDR(0x000067ccu): goto L_67CC;
    case RC_ADDR(0x000067ceu): goto L_67CE;
    case RC_ADDR(0x000067d2u): goto L_67D2;
    case RC_ADDR(0x000067d8u): goto L_67D8;
    case RC_ADDR(0x000067dcu): goto L_67DC;
    case RC_ADDR(0x000067e0u): goto L_67E0;
    case RC_ADDR(0x000067e2u): goto L_67E2;
    case RC_ADDR(0x000067e4u): goto L_67E4;
    case RC_ADDR(0x000067e8u): goto L_67E8;
    case RC_ADDR(0x000067ecu): goto L_67EC;
    case RC_ADDR(0x000067f0u): goto L_67F0;
    case RC_ADDR(0x000067f4u): goto L_67F4;
    case RC_ADDR(0x000067f6u): goto L_67F6;
    case RC_ADDR(0x000067f8u): goto L_67F8;
    case RC_ADDR(0x000067fau): goto L_67FA;
    case RC_ADDR(0x00006800u): goto L_6800;
    case RC_ADDR(0x00006806u): goto L_6806;
    case RC_ADDR(0x0000680au): goto L_680A;
    case RC_ADDR(0x00006810u): goto L_6810;
    case RC_ADDR(0x00006812u): goto L_6812;
    case RC_ADDR(0x00006818u): goto L_6818;
    case RC_ADDR(0x0000681au): goto L_681A;
    case RC_ADDR(0x0000681eu): goto L_681E;
    case RC_ADDR(0x00006820u): goto L_6820;
    case RC_ADDR(0x00006822u): goto L_6822;
    case RC_ADDR(0x00006826u): goto L_6826;
    case RC_ADDR(0x0000682au): goto L_682A;
    case RC_ADDR(0x0000682eu): goto L_682E;
    case RC_ADDR(0x00006830u): goto L_6830;
    case RC_ADDR(0x00006834u): goto L_6834;
    case RC_ADDR(0x00006838u): goto L_6838;
    case RC_ADDR(0x0000683au): goto L_683A;
    case RC_ADDR(0x0000683eu): goto L_683E;
    case RC_ADDR(0x00006840u): goto L_6840;
    case RC_ADDR(0x00006844u): goto L_6844;
    case RC_ADDR(0x00006848u): goto L_6848;
    case RC_ADDR(0x0000684cu): goto L_684C;
    case RC_ADDR(0x00006850u): goto L_6850;
    case RC_ADDR(0x00006854u): goto L_6854;
    case RC_ADDR(0x00006858u): goto L_6858;
    case RC_ADDR(0x0000685cu): goto L_685C;
    case RC_ADDR(0x00006860u): goto L_6860;
    case RC_ADDR(0x00006862u): goto L_6862;
    case RC_ADDR(0x00006866u): goto L_6866;
    case RC_ADDR(0x0000686au): goto L_686A;
    case RC_ADDR(0x0000686eu): goto L_686E;
    case RC_ADDR(0x00006870u): goto L_6870;
    case RC_ADDR(0x00006876u): goto L_6876;
    case RC_ADDR(0x0000687cu): goto L_687C;
    case RC_ADDR(0x00006882u): goto L_6882;
    case RC_ADDR(0x00006884u): goto L_6884;
    case RC_ADDR(0x00006888u): goto L_6888;
    case RC_ADDR(0x0000688cu): goto L_688C;
    case RC_ADDR(0x00006890u): goto L_6890;
    case RC_ADDR(0x00006894u): goto L_6894;
    case RC_ADDR(0x00006898u): goto L_6898;
    case RC_ADDR(0x0000689au): goto L_689A;
    case RC_ADDR(0x0000689eu): goto L_689E;
    case RC_ADDR(0x000068a2u): goto L_68A2;
    case RC_ADDR(0x000068a6u): goto L_68A6;
    case RC_ADDR(0x000068a8u): goto L_68A8;
    case RC_ADDR(0x000068aau): goto L_68AA;
    case RC_ADDR(0x000068aeu): goto L_68AE;
    case RC_ADDR(0x000068b2u): goto L_68B2;
    case RC_ADDR(0x000068b4u): goto L_68B4;
    case RC_ADDR(0x000068b8u): goto L_68B8;
    case RC_ADDR(0x000068bau): goto L_68BA;
    case RC_ADDR(0x000068beu): goto L_68BE;
    case RC_ADDR(0x000068c2u): goto L_68C2;
    case RC_ADDR(0x000068c6u): goto L_68C6;
    case RC_ADDR(0x000068cau): goto L_68CA;
    case RC_ADDR(0x000068ccu): goto L_68CC;
    case RC_ADDR(0x000068d0u): goto L_68D0;
    case RC_ADDR(0x000068d4u): goto L_68D4;
    case RC_ADDR(0x000068d6u): goto L_68D6;
    case RC_ADDR(0x000068dau): goto L_68DA;
    case RC_ADDR(0x000068deu): goto L_68DE;
    case RC_ADDR(0x000068e2u): goto L_68E2;
    case RC_ADDR(0x000068e8u): goto L_68E8;
    case RC_ADDR(0x000068ecu): goto L_68EC;
    case RC_ADDR(0x000068f0u): goto L_68F0;
    case RC_ADDR(0x000068f2u): goto L_68F2;
    case RC_ADDR(0x000068f6u): goto L_68F6;
    case RC_ADDR(0x000068fau): goto L_68FA;
    case RC_ADDR(0x000068feu): goto L_68FE;
    case RC_ADDR(0x00006900u): goto L_6900;
    case RC_ADDR(0x00006904u): goto L_6904;
    case RC_ADDR(0x00006908u): goto L_6908;
    case RC_ADDR(0x0000690cu): goto L_690C;
    case RC_ADDR(0x0000690eu): goto L_690E;
    case RC_ADDR(0x00006912u): goto L_6912;
    case RC_ADDR(0x00006914u): goto L_6914;
    case RC_ADDR(0x0000691au): goto L_691A;
    case RC_ADDR(0x0000691eu): goto L_691E;
    case RC_ADDR(0x00006922u): goto L_6922;
    case RC_ADDR(0x00006926u): goto L_6926;
    case RC_ADDR(0x0000692au): goto L_692A;
    case RC_ADDR(0x0000692eu): goto L_692E;
    case RC_ADDR(0x00006932u): goto L_6932;
    case RC_ADDR(0x00006936u): goto L_6936;
    case RC_ADDR(0x00006938u): goto L_6938;
    case RC_ADDR(0x0000693cu): goto L_693C;
    case RC_ADDR(0x00006940u): goto L_6940;
    case RC_ADDR(0x00006944u): goto L_6944;
    case RC_ADDR(0x00006948u): goto L_6948;
    case RC_ADDR(0x0000694au): goto L_694A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_64E2:
    /* 000064e2   4  link.w A5,#ffffffd4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064e2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2cu;

L_64E6:
    /* 000064e6   4  clr.w (ffffffd4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064e6u);
    rc_wr16(c, m, (c->a[5] - 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_64EA:
    /* 000064ea   4  jsr (000061cc) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064eau);
    rc_push32(c, m, RC_ADDR(0x000064eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000061ccu);
    return;

L_64EE:
    /* 000064ee   4  pea (0000694c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064eeu);
    rc_push32(c, m, RC_ADDR(0x0000694cu));

L_64F2:
    /* 000064f2   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064f2u);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000064f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_64F6:
    /* 000064f6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064f6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_64F8:
    /* 000064f8   4  clr.l (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064f8u);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_64FC:
    /* 000064fc   4  clr.l (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000064fcu);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6500:
    /* 00006500   4  clr.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006500u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6504:
    /* 00006504   4  pea (0000695b) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006504u);
    rc_push32(c, m, RC_ADDR(0x0000695bu));

L_6508:
    /* 00006508   4  jsr (00003456) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006508u);
    rc_push32(c, m, RC_ADDR(0x0000650cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003456u);
    return;

L_650C:
    /* 0000650c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000650cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_650E:
    /* 0000650e   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000650eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6512:
    /* 00006512   4  pea (00006960) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006512u);
    rc_push32(c, m, RC_ADDR(0x00006960u));

L_6516:
    /* 00006516   4  jsr (00003456) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006516u);
    rc_push32(c, m, RC_ADDR(0x0000651au));
    rc_depth++;
    c->pc = RC_ADDR(0x00003456u);
    return;

L_651A:
    /* 0000651a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000651au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_651C:
    /* 0000651c   4  move.l D0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000651cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6520:
    /* 00006520   4  jsr (0000334a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006520u);
    rc_push32(c, m, RC_ADDR(0x00006524u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_6524:
    /* 00006524   4  tst.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006524u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_6528:
    /* 00006528   4  beq 00006944 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006528u);
    if (rc_cond(c, 7)) goto L_6944;

L_652C:
    /* 0000652c   4  tst.l (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000652cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6530:
    /* 00006530   4  beq 00006944 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006530u);
    if (rc_cond(c, 7)) goto L_6944;

L_6534:
    /* 00006534   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006534u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_653A:
    /* 0000653a   6  move.w #5a,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000653au);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6540:
    /* 00006540   6  move.w #98,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006540u);
    t0 = 0x00000098u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6546:
    /* 00006546   4  clr.w (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006546u);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_654A:
    /* 0000654a   4  move.w #ffff,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000654au);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_654E:
    /* 0000654e   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000654eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6552:
    /* 00006552   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006552u);
    rc_push32(c, m, 0x0000000au);

L_6556:
    /* 00006556   4  pea (00000077).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006556u);
    rc_push32(c, m, 0x00000077u);

L_655A:
    /* 0000655a   4  pea (00000026).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000655au);
    rc_push32(c, m, 0x00000026u);

L_655E:
    /* 0000655e   4  pea (000000c8).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000655eu);
    rc_push32(c, m, 0x000000c8u);

L_6562:
    /* 00006562   4  pea (00000026).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006562u);
    rc_push32(c, m, 0x00000026u);

L_6566:
    /* 00006566   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006566u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6568:
    /* 00006568   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006568u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_656C:
    /* 0000656c   4  jsr (00005fe0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000656cu);
    rc_push32(c, m, RC_ADDR(0x00006570u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fe0u);
    return;

L_6570:
    /* 00006570   4  lea (20,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006570u);
    c->a[7] = (c->a[7] + 0x20u);

L_6574:
    /* 00006574   4  clr.w (fffff06e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006574u);
    rc_wr16(c, m, (c->a[4] - 0xf92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6578:
    /* 00006578   6  move.w #18,(fffff070,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006578u);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] - 0xf90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_657E:
    /* 0000657e   4  tst.w (ffffce40,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000657eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_6582:
    /* 00006582   4  bne 00006638 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006582u);
    if (rc_cond(c, 6)) goto L_6638;

L_6586:
    /* 00006586   4  tst.w (ffffce3c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006586u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_set_nzvc(c, t0, RC_W);

L_658A:
    /* 0000658a   2  bne 00006598 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000658au);
    if (rc_cond(c, 6)) goto L_6598;

L_658C:
    /* 0000658c   4  tst.w (ffffce3e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000658cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_set_nzvc(c, t0, RC_W);

L_6590:
    /* 00006590   2  bne 00006598 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006590u);
    if (rc_cond(c, 6)) goto L_6598;

L_6592:
    /* 00006592   4  clr.w (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006592u);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6596:
    /* 00006596   2  bra 000065a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006596u);
    goto L_65A4;

L_6598:
    /* 00006598   6  cmpi.w #8,(ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006598u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_659E:
    /* 0000659e   2  bge 000065a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000659eu);
    if (rc_cond(c, 12)) goto L_65A4;

L_65A0:
    /* 000065a0   4  addq.w #1,(ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065a0u);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_65A4:
    /* 000065a4   4  move.w (ffffce3c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065a4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_65A8:
    /* 000065a8   4  muls.w (ffffffec,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065a8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_muls(c, 0, t0);

L_65AC:
    /* 000065ac   4  add.w D0,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065acu);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_65B0:
    /* 000065b0   4  move.w (ffffce3e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065b0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_65B4:
    /* 000065b4   4  muls.w (ffffffec,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065b4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_muls(c, 0, t0);

L_65B8:
    /* 000065b8   4  add.w D0,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065b8u);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_65BC:
    /* 000065bc   6  cmpi.w #40,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065bcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000040u);

L_65C2:
    /* 000065c2   2  bge 000065ca */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065c2u);
    if (rc_cond(c, 12)) goto L_65CA;

L_65C4:
    /* 000065c4   6  move.w #40,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065c4u);
    t0 = 0x00000040u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_65CA:
    /* 000065ca   6  cmpi.w #aa,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065cau);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x000000aau);

L_65D0:
    /* 000065d0   2  ble 000065d8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065d0u);
    if (rc_cond(c, 15)) goto L_65D8;

L_65D2:
    /* 000065d2   6  move.w #aa,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065d2u);
    t0 = 0x000000aau;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_65D8:
    /* 000065d8   6  cmpi.w #97,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065d8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000097u);

L_65DE:
    /* 000065de   2  bge 000065e6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065deu);
    if (rc_cond(c, 12)) goto L_65E6;

L_65E0:
    /* 000065e0   6  move.w #97,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065e0u);
    t0 = 0x00000097u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_65E6:
    /* 000065e6   6  cmpi.w #ce,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065e6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x000000ceu);

L_65EC:
    /* 000065ec   2  ble 000065f4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065ecu);
    if (rc_cond(c, 15)) goto L_65F4;

L_65EE:
    /* 000065ee   6  move.w #ce,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065eeu);
    t0 = 0x000000ceu;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_65F4:
    /* 000065f4   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065f4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_65FA:
    /* 000065fa   6  pea (00140000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000065fau);
    rc_push32(c, m, RC_ADDR(0x00140000u));

L_6600:
    /* 00006600   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006600u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6604:
    /* 00006604   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006604u);
    rc_ext_l(c, 0);

L_6606:
    /* 00006606   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006606u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6608:
    /* 00006608   2  asl.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006608u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_660A:
    /* 0000660a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000660au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_660C:
    /* 0000660c   4  move.w (fffffff2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000660cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6610:
    /* 00006610   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006610u);
    rc_ext_l(c, 0);

L_6612:
    /* 00006612   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006612u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6614:
    /* 00006614   2  asl.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006614u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6616:
    /* 00006616   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006616u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6618:
    /* 00006618   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006618u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_661A:
    /* 0000661a   4  move.l (fffffff8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000661au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_661E:
    /* 0000661e   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000661eu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6622:
    /* 00006622   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006622u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006626u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6626:
    /* 00006626   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006626u);
    c->a[7] = (c->a[7] + 0x14u);

L_662A:
    /* 0000662a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000662au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_662E:
    /* 0000662e   4  jsr (00005fbe) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000662eu);
    rc_push32(c, m, RC_ADDR(0x00006632u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_6632:
    /* 00006632   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006632u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6634:
    /* 00006634   4  bra 0000657e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006634u);
    rc_tick();
    goto L_657E;

L_6638:
    /* 00006638   4  move.w (fffffff0,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006638u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_663C:
    /* 0000663c   4  sub.w #97,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000663cu);
    t0 = 0x00000097u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6640:
    /* 00006640   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006640u);
    rc_ext_l(c, 0);

L_6642:
    /* 00006642   4  divs.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006642u);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_6646:
    /* 00006646   4  move.w D0,(ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006646u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_664A:
    /* 0000664a   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000664au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6650:
    /* 00006650   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006650u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6652:
    /* 00006652   4  move.l (fffffff8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006652u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6656:
    /* 00006656   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006656u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_665A:
    /* 0000665a   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000665au);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000665eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_665E:
    /* 0000665e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000665eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6660:
    /* 00006660   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006660u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6664:
    /* 00006664   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006664u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6668:
    /* 00006668   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006668u);
    rc_push32(c, m, 0x0000000au);

L_666C:
    /* 0000666c   4  pea (000000c8).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000666cu);
    rc_push32(c, m, 0x000000c8u);

L_6670:
    /* 00006670   4  pea (00000026).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006670u);
    rc_push32(c, m, 0x00000026u);

L_6674:
    /* 00006674   4  pea (00000077).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006674u);
    rc_push32(c, m, 0x00000077u);

L_6678:
    /* 00006678   4  pea (00000026).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006678u);
    rc_push32(c, m, 0x00000026u);

L_667C:
    /* 0000667c   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000667cu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_667E:
    /* 0000667e   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000667eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6682:
    /* 00006682   4  jsr (00005fe0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006682u);
    rc_push32(c, m, RC_ADDR(0x00006686u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fe0u);
    return;

L_6686:
    /* 00006686   4  lea (20,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006686u);
    c->a[7] = (c->a[7] + 0x20u);

L_668A:
    /* 0000668a   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000668au);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_668C:
    /* 0000668c   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000668cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6690:
    /* 00006690   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006690u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6694:
    /* 00006694   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006694u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006698u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6698:
    /* 00006698   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006698u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_669A:
    /* 0000669a   6  move.w #1,(ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000669au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_66A0:
    /* 000066a0   4  move.w (ffffffee,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066a0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_66A4:
    /* 000066a4   4  lea (ffff83f9,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066a4u);
    c->a[0] = (c->a[4] - 0x7c07u);

L_66A8:
    /* 000066a8   4  move.b (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066a8u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_66AC:
    /* 000066ac   2  ext.w D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066acu);
    rc_ext_w(c, 1);

L_66AE:
    /* 000066ae   4  cmp.w (ffffefe4,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066aeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_66B2:
    /* 000066b2   2  bne 000066be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066b2u);
    if (rc_cond(c, 6)) goto L_66BE;

L_66B4:
    /* 000066b4   4  lea (00006965),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066b4u);
    c->a[0] = RC_ADDR(0x00006965u);

L_66B8:
    /* 000066b8   4  move.l A0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066b8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_66BC:
    /* 000066bc   2  bra 000066da */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066bcu);
    goto L_66DA;

L_66BE:
    /* 000066be   4  move.w (ffffffee,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066beu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_66C2:
    /* 000066c2   4  jsr (00006478) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066c2u);
    rc_push32(c, m, RC_ADDR(0x000066c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006478u);
    return;

L_66C6:
    /* 000066c6   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066c6u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_66C8:
    /* 000066c8   4  move.l D0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066c8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_66CC:
    /* 000066cc   4  tst.l (ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066ccu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_66D0:
    /* 000066d0   2  bne 000066da */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066d0u);
    if (rc_cond(c, 6)) goto L_66DA;

L_66D2:
    /* 000066d2   4  lea (000069a7),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066d2u);
    c->a[0] = RC_ADDR(0x000069a7u);

L_66D6:
    /* 000066d6   4  move.l A0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066d6u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_66DA:
    /* 000066da   4  tst.l (ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066dau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_66DE:
    /* 000066de   4  beq 00006908 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066deu);
    if (rc_cond(c, 7)) goto L_6908;

L_66E2:
    /* 000066e2   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066e2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_66E6:
    /* 000066e6   4  jsr (000062f6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066e6u);
    rc_push32(c, m, RC_ADDR(0x000066eau));
    rc_depth++;
    c->pc = RC_ADDR(0x000062f6u);
    return;

L_66EA:
    /* 000066ea   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066eau);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_66EC:
    /* 000066ec   4  move.w D0,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066ecu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_66F0:
    /* 000066f0   6  cmpi.w #ffff,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066f0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_66F6:
    /* 000066f6   4  ble 000068e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066f6u);
    if (rc_cond(c, 15)) goto L_68E8;

L_66FA:
    /* 000066fa   4  move.w (ffffffe6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066fau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_66FE:
    /* 000066fe   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000066feu);
    rc_ext_l(c, 0);

L_6700:
    /* 00006700   4  add.l D0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006700u);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6704:
    /* 00006704   4  clr.w (ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006704u);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6708:
    /* 00006708   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006708u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_670C:
    /* 0000670c   4  movea.l (ffffffe2,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000670cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_6710:
    /* 00006710   6  cmpi.b #3a,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006710u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_6716:
    /* 00006716   2  bne 00006758 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006716u);
    if (rc_cond(c, 6)) goto L_6758;

L_6718:
    /* 00006718   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006718u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_671C:
    /* 0000671c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000671cu);
    rc_ext_l(c, 0);

L_671E:
    /* 0000671e   4  add.l (ffffffe2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000671eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6722:
    /* 00006722   4  move.l D0,(ffffffda,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006722u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6726:
    /* 00006726   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006726u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_672A:
    /* 0000672a   4  movea.l (ffffffe2,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000672au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_672E:
    /* 0000672e   6  move.b (0,A0,D0.w),(ffffffd9,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000672eu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x27u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_6734:
    /* 00006734   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006734u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6738:
    /* 00006738   4  movea.l (ffffffe2,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006738u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_673C:
    /* 0000673c   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000673cu);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6740:
    /* 00006740   6  move.l (ffffffe2,A5),(ffffffde,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006740u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6746:
    /* 00006746   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006746u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_674A:
    /* 0000674a   2  addq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000674au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_674C:
    /* 0000674c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000674cu);
    rc_ext_l(c, 0);

L_674E:
    /* 0000674e   4  add.l D0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000674eu);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6752:
    /* 00006752   6  move.w #4,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006752u);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6758:
    /* 00006758   4  addq.w #1,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006758u);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_675C:
    /* 0000675c   6  cmpi.w #4,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000675cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_6762:
    /* 00006762   2  blt 00006708 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006762u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6708; }

L_6764:
    /* 00006764   4  pea (000069d0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006764u);
    rc_push32(c, m, RC_ADDR(0x000069d0u));

L_6768:
    /* 00006768   4  move.l (ffffffde,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006768u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_676C:
    /* 0000676c   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000676cu);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00006770u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_6770:
    /* 00006770   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006770u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6772:
    /* 00006772   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006772u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6774:
    /* 00006774   2  bne 0000677c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006774u);
    if (rc_cond(c, 6)) goto L_677C;

L_6776:
    /* 00006776   6  move.w #1,(ffffffd4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006776u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_677C:
    /* 0000677c   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000677cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6782:
    /* 00006782   4  tst.w (ffffffd4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006782u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_6786:
    /* 00006786   2  beq 000067b8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006786u);
    if (rc_cond(c, 7)) goto L_67B8;

L_6788:
    /* 00006788   4  move.w #ffff,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006788u);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_678C:
    /* 0000678c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000678cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6790:
    /* 00006790   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006790u);
    rc_push32(c, m, 0x0000000au);

L_6794:
    /* 00006794   4  pea (ffffffba).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006794u);
    rc_push32(c, m, 0xffffffbau);

L_6798:
    /* 00006798   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006798u);
    rc_push32(c, m, 0x00000014u);

L_679C:
    /* 0000679c   4  pea (0000001e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000679cu);
    rc_push32(c, m, 0x0000001eu);

L_67A0:
    /* 000067a0   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067a0u);
    rc_push32(c, m, 0x00000014u);

L_67A4:
    /* 000067a4   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067a4u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67A6:
    /* 000067a6   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067a6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_67AA:
    /* 000067aa   4  jsr (00005fe0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067aau);
    rc_push32(c, m, RC_ADDR(0x000067aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fe0u);
    return;

L_67AE:
    /* 000067ae   4  lea (20,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067aeu);
    c->a[7] = (c->a[7] + 0x20u);

L_67B2:
    /* 000067b2   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067b2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_67B8:
    /* 000067b8   4  tst.l (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067b8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_67BC:
    /* 000067bc   2  beq 000067d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067bcu);
    if (rc_cond(c, 7)) goto L_67D2;

L_67BE:
    /* 000067be   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067beu);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67C0:
    /* 000067c0   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067c0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_67C4:
    /* 000067c4   4  move.w #2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067c4u);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_67C8:
    /* 000067c8   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067c8u);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000067ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_67CC:
    /* 000067cc   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067ccu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_67CE:
    /* 000067ce   4  clr.l (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067ceu);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_67D2:
    /* 000067d2   6  move.w #ffff,(ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067d2u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_67D8:
    /* 000067d8   4  clr.w (ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067d8u);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_67DC:
    /* 000067dc   4  move.w (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067dcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_67E0:
    /* 000067e0   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067e0u);
    rc_ext_l(c, 0);

L_67E2:
    /* 000067e2   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067e2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_67E4:
    /* 000067e4   4  lea (ffff8b38,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067e4u);
    c->a[0] = (c->a[4] - 0x74c8u);

L_67E8:
    /* 000067e8   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067e8u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_67EC:
    /* 000067ec   4  move.l (ffffffde,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067ecu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_67F0:
    /* 000067f0   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067f0u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000067f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_67F4:
    /* 000067f4   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067f4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_67F6:
    /* 000067f6   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067f6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_67F8:
    /* 000067f8   2  bne 00006806 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067f8u);
    if (rc_cond(c, 6)) goto L_6806;

L_67FA:
    /* 000067fa   6  move.w (ffffffea,A5),(ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000067fau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6800:
    /* 00006800   6  move.w #7,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006800u);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6806:
    /* 00006806   4  addq.w #1,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006806u);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_680A:
    /* 0000680a   6  cmpi.w #7,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000680au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_6810:
    /* 00006810   2  blt 000067dc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006810u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_67DC; }

L_6812:
    /* 00006812   6  cmpi.w #ffff,(ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006812u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_6818:
    /* 00006818   2  ble 00006894 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006818u);
    if (rc_cond(c, 15)) goto L_6894;

L_681A:
    /* 0000681a   4  move.w (ffffffe8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000681au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_681E:
    /* 0000681e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000681eu);
    rc_ext_l(c, 0);

L_6820:
    /* 00006820   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006820u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_6822:
    /* 00006822   4  lea (ffff8b1c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006822u);
    c->a[0] = (c->a[4] - 0x74e4u);

L_6826:
    /* 00006826   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006826u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_682A:
    /* 0000682a   4  jsr (00003456) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000682au);
    rc_push32(c, m, RC_ADDR(0x0000682eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003456u);
    return;

L_682E:
    /* 0000682e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000682eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6830:
    /* 00006830   4  move.l D0,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006830u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6834:
    /* 00006834   4  tst.l (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006834u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_6838:
    /* 00006838   2  beq 00006894 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006838u);
    if (rc_cond(c, 7)) goto L_6894;

L_683A:
    /* 0000683a   4  tst.w (ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000683au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_683E:
    /* 0000683e   2  beq 00006870 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000683eu);
    if (rc_cond(c, 7)) goto L_6870;

L_6840:
    /* 00006840   4  clr.w (ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006840u);
    rc_wr16(c, m, (c->a[5] - 0x2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6844:
    /* 00006844   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006844u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6848:
    /* 00006848   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006848u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_684C:
    /* 0000684c   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000684cu);
    rc_push32(c, m, 0x0000000au);

L_6850:
    /* 00006850   4  pea (0000001e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006850u);
    rc_push32(c, m, 0x0000001eu);

L_6854:
    /* 00006854   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006854u);
    rc_push32(c, m, 0x00000014u);

L_6858:
    /* 00006858   4  pea (ffffffba).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006858u);
    rc_push32(c, m, 0xffffffbau);

L_685C:
    /* 0000685c   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000685cu);
    rc_push32(c, m, 0x00000014u);

L_6860:
    /* 00006860   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006860u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6862:
    /* 00006862   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006862u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6866:
    /* 00006866   4  jsr (00005fe0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006866u);
    rc_push32(c, m, RC_ADDR(0x0000686au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fe0u);
    return;

L_686A:
    /* 0000686a   4  lea (20,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000686au);
    c->a[7] = (c->a[7] + 0x20u);

L_686E:
    /* 0000686e   2  bra 00006894 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000686eu);
    goto L_6894;

L_6870:
    /* 00006870   6  pea (000a0000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006870u);
    rc_push32(c, m, RC_ADDR(0x000a0000u));

L_6876:
    /* 00006876   6  pea (001e0000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006876u);
    rc_push32(c, m, RC_ADDR(0x001e0000u));

L_687C:
    /* 0000687c   6  pea (00140000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000687cu);
    rc_push32(c, m, RC_ADDR(0x00140000u));

L_6882:
    /* 00006882   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006882u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6884:
    /* 00006884   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006884u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6888:
    /* 00006888   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006888u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_688C:
    /* 0000688c   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000688cu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006890u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6890:
    /* 00006890   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006890u);
    c->a[7] = (c->a[7] + 0x14u);

L_6894:
    /* 00006894   4  tst.w (ffffffd4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006894u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_6898:
    /* 00006898   2  beq 000068aa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006898u);
    if (rc_cond(c, 7)) goto L_68AA;

L_689A:
    /* 0000689a   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000689au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_689E:
    /* 0000689e   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000689eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68A2:
    /* 000068a2   4  jsr (00002218) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068a2u);
    rc_push32(c, m, RC_ADDR(0x000068a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002218u);
    return;

L_68A6:
    /* 000068a6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068a6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_68A8:
    /* 000068a8   2  bra 000068e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068a8u);
    goto L_68E8;

L_68AA:
    /* 000068aa   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068aau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68AE:
    /* 000068ae   4  jsr (00004f5c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068aeu);
    rc_push32(c, m, RC_ADDR(0x000068b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f5cu);
    return;

L_68B2:
    /* 000068b2   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068b2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_68B4:
    /* 000068b4   4  move.w #c5,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068b4u);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_68B8:
    /* 000068b8   2  sub.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068b8u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_68BA:
    /* 000068ba   4  move.w D1,(ffffcbc2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068bau);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_68BE:
    /* 000068be   4  move.w #8,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068beu);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_68C2:
    /* 000068c2   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068c2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68C6:
    /* 000068c6   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068c6u);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x000068cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_68CA:
    /* 000068ca   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068cau);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_68CC:
    /* 000068cc   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068ccu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68D0:
    /* 000068d0   4  jsr (00005fbe) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068d0u);
    rc_push32(c, m, RC_ADDR(0x000068d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_68D4:
    /* 000068d4   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068d4u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_68D6:
    /* 000068d6   4  jsr (ffff804a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068d6u);
    /* vector 12 */
    rc_push32(c, m, RC_ADDR(0x000068dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000330eu);
    return;

L_68DA:
    /* 000068da   4  movea.l (ffffffda,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068dau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[0] = t0;

L_68DE:
    /* 000068de   4  move.b (ffffffd9,A5),(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068deu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x27u));
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_68E2:
    /* 000068e2   6  move.w #c8,(ffffcbc2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068e2u);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_68E8:
    /* 000068e8   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068e8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_68EC:
    /* 000068ec   4  jsr (000062b0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068ecu);
    rc_push32(c, m, RC_ADDR(0x000068f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000062b0u);
    return;

L_68F0:
    /* 000068f0   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068f0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_68F2:
    /* 000068f2   4  move.l D0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068f2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_68F6:
    /* 000068f6   4  movea.l (ffffffe2,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068f6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_68FA:
    /* 000068fa   4  cmpi.b #40,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068fau);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_68FE:
    /* 000068fe   2  bne 00006904 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000068feu);
    if (rc_cond(c, 6)) goto L_6904;

L_6900:
    /* 00006900   4  clr.l (ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006900u);
    rc_wr32(c, m, (c->a[5] - 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6904:
    /* 00006904   4  bra 000066da */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006904u);
    rc_tick();
    goto L_66DA;

L_6908:
    /* 00006908   4  tst.w (ffffffd6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006908u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_690C:
    /* 0000690c   2  bne 00006944 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000690cu);
    if (rc_cond(c, 6)) goto L_6944;

L_690E:
    /* 0000690e   4  tst.w (ffffffd4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000690eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_6912:
    /* 00006912   2  bne 00006944 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006912u);
    if (rc_cond(c, 6)) goto L_6944;

L_6914:
    /* 00006914   6  move.l (8,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006914u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_691A:
    /* 0000691a   4  move.w #ffff,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000691au);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_691E:
    /* 0000691e   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000691eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6922:
    /* 00006922   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006922u);
    rc_push32(c, m, 0x0000000au);

L_6926:
    /* 00006926   4  pea (ffffffba).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006926u);
    rc_push32(c, m, 0xffffffbau);

L_692A:
    /* 0000692a   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000692au);
    rc_push32(c, m, 0x00000014u);

L_692E:
    /* 0000692e   4  pea (0000001e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000692eu);
    rc_push32(c, m, 0x0000001eu);

L_6932:
    /* 00006932   4  pea (00000014).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006932u);
    rc_push32(c, m, 0x00000014u);

L_6936:
    /* 00006936   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006936u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6938:
    /* 00006938   4  move.l (fffffff4,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006938u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_693C:
    /* 0000693c   4  jsr (00005fe0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000693cu);
    rc_push32(c, m, RC_ADDR(0x00006940u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fe0u);
    return;

L_6940:
    /* 00006940   4  lea (20,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006940u);
    c->a[7] = (c->a[7] + 0x20u);

L_6944:
    /* 00006944   4  jsr (00006274) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006944u);
    rc_push32(c, m, RC_ADDR(0x00006948u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006274u);
    return;

L_6948:
    /* 00006948   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006948u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_694A:
    /* 0000694a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000694au);
    rc_ret(c, m);
    return;

}
