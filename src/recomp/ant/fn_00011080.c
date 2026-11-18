/* fn_00011080 - 982 byte(s), 336 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011080(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011080u): goto L_11080;
    case RC_ADDR(0x00011084u): goto L_11084;
    case RC_ADDR(0x00011088u): goto L_11088;
    case RC_ADDR(0x0001108cu): goto L_1108C;
    case RC_ADDR(0x00011090u): goto L_11090;
    case RC_ADDR(0x00011092u): goto L_11092;
    case RC_ADDR(0x00011096u): goto L_11096;
    case RC_ADDR(0x00011098u): goto L_11098;
    case RC_ADDR(0x0001109cu): goto L_1109C;
    case RC_ADDR(0x000110a0u): goto L_110A0;
    case RC_ADDR(0x000110a4u): goto L_110A4;
    case RC_ADDR(0x000110a8u): goto L_110A8;
    case RC_ADDR(0x000110aau): goto L_110AA;
    case RC_ADDR(0x000110aeu): goto L_110AE;
    case RC_ADDR(0x000110b2u): goto L_110B2;
    case RC_ADDR(0x000110b4u): goto L_110B4;
    case RC_ADDR(0x000110b8u): goto L_110B8;
    case RC_ADDR(0x000110beu): goto L_110BE;
    case RC_ADDR(0x000110c2u): goto L_110C2;
    case RC_ADDR(0x000110c6u): goto L_110C6;
    case RC_ADDR(0x000110cau): goto L_110CA;
    case RC_ADDR(0x000110ccu): goto L_110CC;
    case RC_ADDR(0x000110d0u): goto L_110D0;
    case RC_ADDR(0x000110d6u): goto L_110D6;
    case RC_ADDR(0x000110d8u): goto L_110D8;
    case RC_ADDR(0x000110dcu): goto L_110DC;
    case RC_ADDR(0x000110e2u): goto L_110E2;
    case RC_ADDR(0x000110e4u): goto L_110E4;
    case RC_ADDR(0x000110e8u): goto L_110E8;
    case RC_ADDR(0x000110ecu): goto L_110EC;
    case RC_ADDR(0x000110eeu): goto L_110EE;
    case RC_ADDR(0x000110f0u): goto L_110F0;
    case RC_ADDR(0x000110f2u): goto L_110F2;
    case RC_ADDR(0x000110f6u): goto L_110F6;
    case RC_ADDR(0x000110fau): goto L_110FA;
    case RC_ADDR(0x000110feu): goto L_110FE;
    case RC_ADDR(0x00011102u): goto L_11102;
    case RC_ADDR(0x00011104u): goto L_11104;
    case RC_ADDR(0x00011108u): goto L_11108;
    case RC_ADDR(0x0001110au): goto L_1110A;
    case RC_ADDR(0x0001110eu): goto L_1110E;
    case RC_ADDR(0x00011110u): goto L_11110;
    case RC_ADDR(0x00011112u): goto L_11112;
    case RC_ADDR(0x00011116u): goto L_11116;
    case RC_ADDR(0x00011118u): goto L_11118;
    case RC_ADDR(0x0001111cu): goto L_1111C;
    case RC_ADDR(0x0001111eu): goto L_1111E;
    case RC_ADDR(0x00011120u): goto L_11120;
    case RC_ADDR(0x00011122u): goto L_11122;
    case RC_ADDR(0x00011126u): goto L_11126;
    case RC_ADDR(0x00011128u): goto L_11128;
    case RC_ADDR(0x0001112au): goto L_1112A;
    case RC_ADDR(0x0001112eu): goto L_1112E;
    case RC_ADDR(0x00011130u): goto L_11130;
    case RC_ADDR(0x00011134u): goto L_11134;
    case RC_ADDR(0x00011136u): goto L_11136;
    case RC_ADDR(0x00011138u): goto L_11138;
    case RC_ADDR(0x0001113cu): goto L_1113C;
    case RC_ADDR(0x00011142u): goto L_11142;
    case RC_ADDR(0x00011146u): goto L_11146;
    case RC_ADDR(0x00011148u): goto L_11148;
    case RC_ADDR(0x0001114cu): goto L_1114C;
    case RC_ADDR(0x00011150u): goto L_11150;
    case RC_ADDR(0x00011154u): goto L_11154;
    case RC_ADDR(0x00011156u): goto L_11156;
    case RC_ADDR(0x0001115au): goto L_1115A;
    case RC_ADDR(0x0001115eu): goto L_1115E;
    case RC_ADDR(0x00011160u): goto L_11160;
    case RC_ADDR(0x00011162u): goto L_11162;
    case RC_ADDR(0x00011164u): goto L_11164;
    case RC_ADDR(0x00011168u): goto L_11168;
    case RC_ADDR(0x0001116au): goto L_1116A;
    case RC_ADDR(0x0001116eu): goto L_1116E;
    case RC_ADDR(0x00011172u): goto L_11172;
    case RC_ADDR(0x00011174u): goto L_11174;
    case RC_ADDR(0x00011178u): goto L_11178;
    case RC_ADDR(0x0001117eu): goto L_1117E;
    case RC_ADDR(0x00011180u): goto L_11180;
    case RC_ADDR(0x00011184u): goto L_11184;
    case RC_ADDR(0x00011186u): goto L_11186;
    case RC_ADDR(0x0001118cu): goto L_1118C;
    case RC_ADDR(0x0001118eu): goto L_1118E;
    case RC_ADDR(0x00011192u): goto L_11192;
    case RC_ADDR(0x00011194u): goto L_11194;
    case RC_ADDR(0x00011198u): goto L_11198;
    case RC_ADDR(0x0001119cu): goto L_1119C;
    case RC_ADDR(0x000111a0u): goto L_111A0;
    case RC_ADDR(0x000111a2u): goto L_111A2;
    case RC_ADDR(0x000111a4u): goto L_111A4;
    case RC_ADDR(0x000111a8u): goto L_111A8;
    case RC_ADDR(0x000111aau): goto L_111AA;
    case RC_ADDR(0x000111aeu): goto L_111AE;
    case RC_ADDR(0x000111b2u): goto L_111B2;
    case RC_ADDR(0x000111b6u): goto L_111B6;
    case RC_ADDR(0x000111b8u): goto L_111B8;
    case RC_ADDR(0x000111bau): goto L_111BA;
    case RC_ADDR(0x000111bcu): goto L_111BC;
    case RC_ADDR(0x000111beu): goto L_111BE;
    case RC_ADDR(0x000111c2u): goto L_111C2;
    case RC_ADDR(0x000111c4u): goto L_111C4;
    case RC_ADDR(0x000111c6u): goto L_111C6;
    case RC_ADDR(0x000111ccu): goto L_111CC;
    case RC_ADDR(0x000111ceu): goto L_111CE;
    case RC_ADDR(0x000111d2u): goto L_111D2;
    case RC_ADDR(0x000111d4u): goto L_111D4;
    case RC_ADDR(0x000111d8u): goto L_111D8;
    case RC_ADDR(0x000111dcu): goto L_111DC;
    case RC_ADDR(0x000111deu): goto L_111DE;
    case RC_ADDR(0x000111e2u): goto L_111E2;
    case RC_ADDR(0x000111e6u): goto L_111E6;
    case RC_ADDR(0x000111eau): goto L_111EA;
    case RC_ADDR(0x000111ecu): goto L_111EC;
    case RC_ADDR(0x000111f0u): goto L_111F0;
    case RC_ADDR(0x000111f2u): goto L_111F2;
    case RC_ADDR(0x000111f6u): goto L_111F6;
    case RC_ADDR(0x000111f8u): goto L_111F8;
    case RC_ADDR(0x000111fcu): goto L_111FC;
    case RC_ADDR(0x000111feu): goto L_111FE;
    case RC_ADDR(0x00011200u): goto L_11200;
    case RC_ADDR(0x00011204u): goto L_11204;
    case RC_ADDR(0x00011208u): goto L_11208;
    case RC_ADDR(0x0001120cu): goto L_1120C;
    case RC_ADDR(0x00011210u): goto L_11210;
    case RC_ADDR(0x00011212u): goto L_11212;
    case RC_ADDR(0x00011214u): goto L_11214;
    case RC_ADDR(0x00011216u): goto L_11216;
    case RC_ADDR(0x00011218u): goto L_11218;
    case RC_ADDR(0x0001121au): goto L_1121A;
    case RC_ADDR(0x0001121cu): goto L_1121C;
    case RC_ADDR(0x0001121eu): goto L_1121E;
    case RC_ADDR(0x00011220u): goto L_11220;
    case RC_ADDR(0x00011222u): goto L_11222;
    case RC_ADDR(0x00011228u): goto L_11228;
    case RC_ADDR(0x0001122au): goto L_1122A;
    case RC_ADDR(0x00011230u): goto L_11230;
    case RC_ADDR(0x00011232u): goto L_11232;
    case RC_ADDR(0x00011234u): goto L_11234;
    case RC_ADDR(0x00011236u): goto L_11236;
    case RC_ADDR(0x00011238u): goto L_11238;
    case RC_ADDR(0x0001123au): goto L_1123A;
    case RC_ADDR(0x0001123cu): goto L_1123C;
    case RC_ADDR(0x00011240u): goto L_11240;
    case RC_ADDR(0x00011244u): goto L_11244;
    case RC_ADDR(0x00011246u): goto L_11246;
    case RC_ADDR(0x0001124au): goto L_1124A;
    case RC_ADDR(0x0001124cu): goto L_1124C;
    case RC_ADDR(0x00011250u): goto L_11250;
    case RC_ADDR(0x00011254u): goto L_11254;
    case RC_ADDR(0x00011258u): goto L_11258;
    case RC_ADDR(0x0001125cu): goto L_1125C;
    case RC_ADDR(0x0001125eu): goto L_1125E;
    case RC_ADDR(0x00011260u): goto L_11260;
    case RC_ADDR(0x00011262u): goto L_11262;
    case RC_ADDR(0x00011264u): goto L_11264;
    case RC_ADDR(0x00011268u): goto L_11268;
    case RC_ADDR(0x0001126au): goto L_1126A;
    case RC_ADDR(0x0001126cu): goto L_1126C;
    case RC_ADDR(0x00011270u): goto L_11270;
    case RC_ADDR(0x00011274u): goto L_11274;
    case RC_ADDR(0x00011278u): goto L_11278;
    case RC_ADDR(0x0001127au): goto L_1127A;
    case RC_ADDR(0x0001127cu): goto L_1127C;
    case RC_ADDR(0x00011280u): goto L_11280;
    case RC_ADDR(0x00011284u): goto L_11284;
    case RC_ADDR(0x00011286u): goto L_11286;
    case RC_ADDR(0x0001128au): goto L_1128A;
    case RC_ADDR(0x0001128cu): goto L_1128C;
    case RC_ADDR(0x0001128eu): goto L_1128E;
    case RC_ADDR(0x00011290u): goto L_11290;
    case RC_ADDR(0x00011294u): goto L_11294;
    case RC_ADDR(0x00011298u): goto L_11298;
    case RC_ADDR(0x0001129cu): goto L_1129C;
    case RC_ADDR(0x0001129eu): goto L_1129E;
    case RC_ADDR(0x000112a2u): goto L_112A2;
    case RC_ADDR(0x000112a4u): goto L_112A4;
    case RC_ADDR(0x000112a6u): goto L_112A6;
    case RC_ADDR(0x000112a8u): goto L_112A8;
    case RC_ADDR(0x000112acu): goto L_112AC;
    case RC_ADDR(0x000112aeu): goto L_112AE;
    case RC_ADDR(0x000112b2u): goto L_112B2;
    case RC_ADDR(0x000112b4u): goto L_112B4;
    case RC_ADDR(0x000112b6u): goto L_112B6;
    case RC_ADDR(0x000112b8u): goto L_112B8;
    case RC_ADDR(0x000112bau): goto L_112BA;
    case RC_ADDR(0x000112c0u): goto L_112C0;
    case RC_ADDR(0x000112c2u): goto L_112C2;
    case RC_ADDR(0x000112c4u): goto L_112C4;
    case RC_ADDR(0x000112c8u): goto L_112C8;
    case RC_ADDR(0x000112cau): goto L_112CA;
    case RC_ADDR(0x000112ceu): goto L_112CE;
    case RC_ADDR(0x000112d0u): goto L_112D0;
    case RC_ADDR(0x000112d2u): goto L_112D2;
    case RC_ADDR(0x000112d6u): goto L_112D6;
    case RC_ADDR(0x000112d8u): goto L_112D8;
    case RC_ADDR(0x000112dau): goto L_112DA;
    case RC_ADDR(0x000112dcu): goto L_112DC;
    case RC_ADDR(0x000112e0u): goto L_112E0;
    case RC_ADDR(0x000112e4u): goto L_112E4;
    case RC_ADDR(0x000112e8u): goto L_112E8;
    case RC_ADDR(0x000112eau): goto L_112EA;
    case RC_ADDR(0x000112ecu): goto L_112EC;
    case RC_ADDR(0x000112eeu): goto L_112EE;
    case RC_ADDR(0x000112f2u): goto L_112F2;
    case RC_ADDR(0x000112f6u): goto L_112F6;
    case RC_ADDR(0x000112f8u): goto L_112F8;
    case RC_ADDR(0x000112fcu): goto L_112FC;
    case RC_ADDR(0x00011300u): goto L_11300;
    case RC_ADDR(0x00011302u): goto L_11302;
    case RC_ADDR(0x00011304u): goto L_11304;
    case RC_ADDR(0x00011306u): goto L_11306;
    case RC_ADDR(0x0001130au): goto L_1130A;
    case RC_ADDR(0x0001130cu): goto L_1130C;
    case RC_ADDR(0x0001130eu): goto L_1130E;
    case RC_ADDR(0x00011312u): goto L_11312;
    case RC_ADDR(0x00011314u): goto L_11314;
    case RC_ADDR(0x00011316u): goto L_11316;
    case RC_ADDR(0x0001131au): goto L_1131A;
    case RC_ADDR(0x0001131cu): goto L_1131C;
    case RC_ADDR(0x0001131eu): goto L_1131E;
    case RC_ADDR(0x00011322u): goto L_11322;
    case RC_ADDR(0x00011326u): goto L_11326;
    case RC_ADDR(0x0001132au): goto L_1132A;
    case RC_ADDR(0x0001132eu): goto L_1132E;
    case RC_ADDR(0x00011332u): goto L_11332;
    case RC_ADDR(0x00011336u): goto L_11336;
    case RC_ADDR(0x00011338u): goto L_11338;
    case RC_ADDR(0x0001133au): goto L_1133A;
    case RC_ADDR(0x0001133eu): goto L_1133E;
    case RC_ADDR(0x00011342u): goto L_11342;
    case RC_ADDR(0x00011344u): goto L_11344;
    case RC_ADDR(0x00011348u): goto L_11348;
    case RC_ADDR(0x0001134au): goto L_1134A;
    case RC_ADDR(0x0001134cu): goto L_1134C;
    case RC_ADDR(0x00011350u): goto L_11350;
    case RC_ADDR(0x00011352u): goto L_11352;
    case RC_ADDR(0x00011354u): goto L_11354;
    case RC_ADDR(0x00011356u): goto L_11356;
    case RC_ADDR(0x00011358u): goto L_11358;
    case RC_ADDR(0x0001135au): goto L_1135A;
    case RC_ADDR(0x0001135eu): goto L_1135E;
    case RC_ADDR(0x00011362u): goto L_11362;
    case RC_ADDR(0x00011366u): goto L_11366;
    case RC_ADDR(0x0001136au): goto L_1136A;
    case RC_ADDR(0x0001136cu): goto L_1136C;
    case RC_ADDR(0x0001136eu): goto L_1136E;
    case RC_ADDR(0x00011372u): goto L_11372;
    case RC_ADDR(0x00011374u): goto L_11374;
    case RC_ADDR(0x00011376u): goto L_11376;
    case RC_ADDR(0x0001137au): goto L_1137A;
    case RC_ADDR(0x0001137eu): goto L_1137E;
    case RC_ADDR(0x00011380u): goto L_11380;
    case RC_ADDR(0x00011382u): goto L_11382;
    case RC_ADDR(0x00011386u): goto L_11386;
    case RC_ADDR(0x0001138au): goto L_1138A;
    case RC_ADDR(0x0001138cu): goto L_1138C;
    case RC_ADDR(0x0001138eu): goto L_1138E;
    case RC_ADDR(0x00011392u): goto L_11392;
    case RC_ADDR(0x00011394u): goto L_11394;
    case RC_ADDR(0x00011396u): goto L_11396;
    case RC_ADDR(0x00011398u): goto L_11398;
    case RC_ADDR(0x0001139au): goto L_1139A;
    case RC_ADDR(0x0001139cu): goto L_1139C;
    case RC_ADDR(0x0001139eu): goto L_1139E;
    case RC_ADDR(0x000113a0u): goto L_113A0;
    case RC_ADDR(0x000113a2u): goto L_113A2;
    case RC_ADDR(0x000113a4u): goto L_113A4;
    case RC_ADDR(0x000113a6u): goto L_113A6;
    case RC_ADDR(0x000113a8u): goto L_113A8;
    case RC_ADDR(0x000113acu): goto L_113AC;
    case RC_ADDR(0x000113b0u): goto L_113B0;
    case RC_ADDR(0x000113b2u): goto L_113B2;
    case RC_ADDR(0x000113b6u): goto L_113B6;
    case RC_ADDR(0x000113b8u): goto L_113B8;
    case RC_ADDR(0x000113bau): goto L_113BA;
    case RC_ADDR(0x000113bcu): goto L_113BC;
    case RC_ADDR(0x000113beu): goto L_113BE;
    case RC_ADDR(0x000113c0u): goto L_113C0;
    case RC_ADDR(0x000113c2u): goto L_113C2;
    case RC_ADDR(0x000113c4u): goto L_113C4;
    case RC_ADDR(0x000113c6u): goto L_113C6;
    case RC_ADDR(0x000113c8u): goto L_113C8;
    case RC_ADDR(0x000113ccu): goto L_113CC;
    case RC_ADDR(0x000113d0u): goto L_113D0;
    case RC_ADDR(0x000113d4u): goto L_113D4;
    case RC_ADDR(0x000113d8u): goto L_113D8;
    case RC_ADDR(0x000113dau): goto L_113DA;
    case RC_ADDR(0x000113dcu): goto L_113DC;
    case RC_ADDR(0x000113e0u): goto L_113E0;
    case RC_ADDR(0x000113e4u): goto L_113E4;
    case RC_ADDR(0x000113e6u): goto L_113E6;
    case RC_ADDR(0x000113eau): goto L_113EA;
    case RC_ADDR(0x000113ecu): goto L_113EC;
    case RC_ADDR(0x000113f0u): goto L_113F0;
    case RC_ADDR(0x000113f4u): goto L_113F4;
    case RC_ADDR(0x000113f6u): goto L_113F6;
    case RC_ADDR(0x000113fau): goto L_113FA;
    case RC_ADDR(0x000113feu): goto L_113FE;
    case RC_ADDR(0x00011400u): goto L_11400;
    case RC_ADDR(0x00011402u): goto L_11402;
    case RC_ADDR(0x00011406u): goto L_11406;
    case RC_ADDR(0x00011408u): goto L_11408;
    case RC_ADDR(0x0001140cu): goto L_1140C;
    case RC_ADDR(0x0001140eu): goto L_1140E;
    case RC_ADDR(0x00011410u): goto L_11410;
    case RC_ADDR(0x00011412u): goto L_11412;
    case RC_ADDR(0x00011414u): goto L_11414;
    case RC_ADDR(0x00011416u): goto L_11416;
    case RC_ADDR(0x00011418u): goto L_11418;
    case RC_ADDR(0x0001141au): goto L_1141A;
    case RC_ADDR(0x0001141cu): goto L_1141C;
    case RC_ADDR(0x0001141eu): goto L_1141E;
    case RC_ADDR(0x00011420u): goto L_11420;
    case RC_ADDR(0x00011422u): goto L_11422;
    case RC_ADDR(0x00011426u): goto L_11426;
    case RC_ADDR(0x00011428u): goto L_11428;
    case RC_ADDR(0x0001142au): goto L_1142A;
    case RC_ADDR(0x0001142cu): goto L_1142C;
    case RC_ADDR(0x0001142eu): goto L_1142E;
    case RC_ADDR(0x00011430u): goto L_11430;
    case RC_ADDR(0x00011432u): goto L_11432;
    case RC_ADDR(0x00011434u): goto L_11434;
    case RC_ADDR(0x00011436u): goto L_11436;
    case RC_ADDR(0x00011438u): goto L_11438;
    case RC_ADDR(0x0001143au): goto L_1143A;
    case RC_ADDR(0x0001143cu): goto L_1143C;
    case RC_ADDR(0x0001143eu): goto L_1143E;
    case RC_ADDR(0x00011440u): goto L_11440;
    case RC_ADDR(0x00011442u): goto L_11442;
    case RC_ADDR(0x00011446u): goto L_11446;
    case RC_ADDR(0x00011448u): goto L_11448;
    case RC_ADDR(0x0001144au): goto L_1144A;
    case RC_ADDR(0x0001144cu): goto L_1144C;
    case RC_ADDR(0x0001144eu): goto L_1144E;
    case RC_ADDR(0x00011450u): goto L_11450;
    case RC_ADDR(0x00011452u): goto L_11452;
    case RC_ADDR(0x00011454u): goto L_11454;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11080:
    /* 00011080   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x00011080u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_11084:
    /* 00011084   4  bge 00011452 */
    c->pc = RC_ADDR(0x00011084u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_11452;

L_11088:
    /* 00011088   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x00011088u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_1108C:
    /* 0001108c   4  lea (10a,A6),A2 */
    c->pc = RC_ADDR(0x0001108cu);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0x10au);

L_11090:
    /* 00011090   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00011090u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11092:
    /* 00011092   4  mulu.w #1a,D0 */
    c->pc = RC_ADDR(0x00011092u);
    rc_step(c, m, 42);
    t0 = 0x0000001au;
    rc_mulu(c, 0, t0);

L_11096:
    /* 00011096   2  adda.w D0,A2 */
    c->pc = RC_ADDR(0x00011096u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] += rc_ext(t0, RC_W);

L_11098:
    /* 00011098   4  move.b (0,A1),D0 */
    c->pc = RC_ADDR(0x00011098u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1109C:
    /* 0001109c   4  beq 0001119c */
    c->pc = RC_ADDR(0x0001109cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1119C;

L_110A0:
    /* 000110a0   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x000110a0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_110A4:
    /* 000110a4   4  bne 00011180 */
    c->pc = RC_ADDR(0x000110a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11180;

L_110A8:
    /* 000110a8   2  clr.l D1 */
    c->pc = RC_ADDR(0x000110a8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_110AA:
    /* 000110aa   4  move.b (3,A1),D1 */
    c->pc = RC_ADDR(0x000110aau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x3u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_110AE:
    /* 000110ae   4  cmpi.w #24,D1 */
    c->pc = RC_ADDR(0x000110aeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_110B2:
    /* 000110b2   2  bge 000110c6 */
    c->pc = RC_ADDR(0x000110b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_110C6;

L_110B4:
    /* 000110b4   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x000110b4u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_110B8:
    /* 000110b8   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x000110b8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_110BE:
    /* 000110be   4  beq 00011452 */
    c->pc = RC_ADDR(0x000110beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11452;

L_110C2:
    /* 000110c2   4  bra 0001119c */
    c->pc = RC_ADDR(0x000110c2u);
    rc_step(c, m, 10);
    goto L_1119C;

L_110C6:
    /* 000110c6   4  cmpi.w #6c,D1 */
    c->pc = RC_ADDR(0x000110c6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000006cu);

L_110CA:
    /* 000110ca   2  bge 000110b4 */
    c->pc = RC_ADDR(0x000110cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) { rc_tick(); goto L_110B4; }

L_110CC:
    /* 000110cc   4  subi.w #24,D1 */
    c->pc = RC_ADDR(0x000110ccu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000024u;
    rc_flags_sub(c, RC_W, t1, 0x00000024u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_110D0:
    /* 000110d0   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x000110d0u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_110D6:
    /* 000110d6   2  bne 000110dc */
    c->pc = RC_ADDR(0x000110d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_110DC;

L_110D8:
    /* 000110d8   4  clr.l (c,A2) */
    c->pc = RC_ADDR(0x000110d8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_110DC:
    /* 000110dc   6  cmpi.b #1,(1,A1) */
    c->pc = RC_ADDR(0x000110dcu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_110E2:
    /* 000110e2   2  beq 000110e8 */
    c->pc = RC_ADDR(0x000110e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_110E8;

L_110E4:
    /* 000110e4   4  clr.w (a,A2) */
    c->pc = RC_ADDR(0x000110e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_110E8:
    /* 000110e8   4  divu.w #c,D1 */
    c->pc = RC_ADDR(0x000110e8u);
    rc_step(c, m, 144);
    t0 = 0x0000000cu;
    rc_divu(c, m, 1, t0);

L_110EC:
    /* 000110ec   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x000110ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110EE:
    /* 000110ee   2  swap D1 */
    c->pc = RC_ADDR(0x000110eeu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_110F0:
    /* 000110f0   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x000110f0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_110F2:
    /* 000110f2   4  lea (00010f34),A0 */
    c->pc = RC_ADDR(0x000110f2u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00010f34u);

L_110F6:
    /* 000110f6   4  move.w #d5c8,D0 */
    c->pc = RC_ADDR(0x000110f6u);
    rc_step(c, m, 8);
    t0 = 0x0000d5c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_110FA:
    /* 000110fa   4  mulu.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000110fau);
    rc_step(c, m, 48);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_mulu(c, 0, t0);

L_110FE:
    /* 000110fe   4  addi.w #11,D2 */
    c->pc = RC_ADDR(0x000110feu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000011u;
    rc_flags_add(c, RC_W, t1, 0x00000011u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11102:
    /* 00011102   2  lsr.l D2,D0 */
    c->pc = RC_ADDR(0x00011102u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[2] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11104:
    /* 00011104   4  tst.w (0,A2) */
    c->pc = RC_ADDR(0x00011104u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    rc_set_nzvc(c, t0, RC_W);

L_11108:
    /* 00011108   2  bne 00011110 */
    c->pc = RC_ADDR(0x00011108u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11110;

L_1110A:
    /* 0001110a   4  clr.w (2,A2) */
    c->pc = RC_ADDR(0x0001110au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1110E:
    /* 0001110e   2  bra 00011138 */
    c->pc = RC_ADDR(0x0001110eu);
    rc_step(c, m, 10);
    goto L_11138;

L_11110:
    /* 00011110   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00011110u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11112:
    /* 00011112   4  sub.w (0,A2),D1 */
    c->pc = RC_ADDR(0x00011112u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11116:
    /* 00011116   2  ext.l D1 */
    c->pc = RC_ADDR(0x00011116u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_11118:
    /* 00011118   4  move.w (196,A3),D2 */
    c->pc = RC_ADDR(0x00011118u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x196u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1111C:
    /* 0001111c   2  swap D2 */
    c->pc = RC_ADDR(0x0001111cu);
    rc_step(c, m, 4);
    t0 = c->d[2];
    c->d[2] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[2], RC_L);

L_1111E:
    /* 0001111e   2  clr.w D2 */
    c->pc = RC_ADDR(0x0001111eu);
    rc_step(c, m, 4);
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11120:
    /* 00011120   2  lsr.l #1,D2 */
    c->pc = RC_ADDR(0x00011120u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_11122:
    /* 00011122   4  divu.w (22,A6),D2 */
    c->pc = RC_ADDR(0x00011122u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 2, t0);

L_11126:
    /* 00011126   2  lsr.w #3,D2 */
    c->pc = RC_ADDR(0x00011126u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 2, RC_W), RC_W));

L_11128:
    /* 00011128   2  addq.w #1,D2 */
    c->pc = RC_ADDR(0x00011128u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1112A:
    /* 0001112a   4  move.w D2,(2,A2) */
    c->pc = RC_ADDR(0x0001112au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1112E:
    /* 0001112e   2  divs.w D2,D1 */
    c->pc = RC_ADDR(0x0001112eu);
    rc_step(c, m, 158);
    t0 = rc_d_get(c, 2, RC_W);
    rc_divs(c, m, 1, t0);

L_11130:
    /* 00011130   4  move.w D1,(4,A2) */
    c->pc = RC_ADDR(0x00011130u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11134:
    /* 00011134   2  mulu.w D2,D1 */
    c->pc = RC_ADDR(0x00011134u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 1, t0);

L_11136:
    /* 00011136   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011136u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11138:
    /* 00011138   4  move.w D0,(0,A2) */
    c->pc = RC_ADDR(0x00011138u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1113C:
    /* 0001113c   6  move.w #1,(18,A2) */
    c->pc = RC_ADDR(0x0001113cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11142:
    /* 00011142   4  tst.w (1a6,A3) */
    c->pc = RC_ADDR(0x00011142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_set_nzvc(c, t0, RC_W);

L_11146:
    /* 00011146   2  bne 0001114c */
    c->pc = RC_ADDR(0x00011146u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1114C;

L_11148:
    /* 00011148   4  clr.w (16,A2) */
    c->pc = RC_ADDR(0x00011148u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1114C:
    /* 0001114c   4  clr.w (12,A2) */
    c->pc = RC_ADDR(0x0001114cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11150:
    /* 00011150   4  tst.w (1a2,A3) */
    c->pc = RC_ADDR(0x00011150u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a2u));
    rc_set_nzvc(c, t0, RC_W);

L_11154:
    /* 00011154   2  beq 00011178 */
    c->pc = RC_ADDR(0x00011154u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11178;

L_11156:
    /* 00011156   4  clr.w (10,A2) */
    c->pc = RC_ADDR(0x00011156u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1115A:
    /* 0001115a   4  move.w (1a4,A3),D0 */
    c->pc = RC_ADDR(0x0001115au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1115E:
    /* 0001115e   2  swap D0 */
    c->pc = RC_ADDR(0x0001115eu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_11160:
    /* 00011160   2  clr.w D0 */
    c->pc = RC_ADDR(0x00011160u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11162:
    /* 00011162   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00011162u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_11164:
    /* 00011164   4  divu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x00011164u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 0, t0);

L_11168:
    /* 00011168   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x00011168u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_1116A:
    /* 0001116a   4  move.w D0,(12,A2) */
    c->pc = RC_ADDR(0x0001116au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1116E:
    /* 0001116e   4  move.b (88,A3),D0 */
    c->pc = RC_ADDR(0x0001116eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[3] + 0x88u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11172:
    /* 00011172   2  ext.w D0 */
    c->pc = RC_ADDR(0x00011172u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_11174:
    /* 00011174   4  move.w D0,(14,A2) */
    c->pc = RC_ADDR(0x00011174u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11178:
    /* 00011178   6  move.w #ffff,(a,A1) */
    c->pc = RC_ADDR(0x00011178u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1117E:
    /* 0001117e   2  bra 0001119c */
    c->pc = RC_ADDR(0x0001117eu);
    rc_step(c, m, 10);
    goto L_1119C;

L_11180:
    /* 00011180   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x00011180u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_11184:
    /* 00011184   2  bne 0001118e */
    c->pc = RC_ADDR(0x00011184u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1118E;

L_11186:
    /* 00011186   6  move.w #6,(a,A2) */
    c->pc = RC_ADDR(0x00011186u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1118C:
    /* 0001118c   2  bra 0001119c */
    c->pc = RC_ADDR(0x0001118cu);
    rc_step(c, m, 10);
    goto L_1119C;

L_1118E:
    /* 0001118e   4  cmpi.b #3,D0 */
    c->pc = RC_ADDR(0x0001118eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000003u);

L_11192:
    /* 00011192   2  bne 0001119c */
    c->pc = RC_ADDR(0x00011192u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1119C;

L_11194:
    /* 00011194   4  bsr 00010d10 */
    c->pc = RC_ADDR(0x00011194u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011198u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d10u);
    return;

L_11198:
    /* 00011198   4  bra 00011452 */
    c->pc = RC_ADDR(0x00011198u);
    rc_step(c, m, 10);
    goto L_11452;

L_1119C:
    /* 0001119c   4  tst.w (12,A2) */
    c->pc = RC_ADDR(0x0001119cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_111A0:
    /* 000111a0   2  bmi 000111e2 */
    c->pc = RC_ADDR(0x000111a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_111E2;

L_111A2:
    /* 000111a2   2  beq 000111aa */
    c->pc = RC_ADDR(0x000111a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_111AA;

L_111A4:
    /* 000111a4   4  subq.w #1,(12,A2) */
    c->pc = RC_ADDR(0x000111a4u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_111A8:
    /* 000111a8   2  bra 000111e2 */
    c->pc = RC_ADDR(0x000111a8u);
    rc_step(c, m, 10);
    goto L_111E2;

L_111AA:
    /* 000111aa   4  move.w (10,A2),D0 */
    c->pc = RC_ADDR(0x000111aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111AE:
    /* 000111ae   4  move.w (1a0,A3),D1 */
    c->pc = RC_ADDR(0x000111aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111B2:
    /* 000111b2   4  mulu.w (22,A6),D1 */
    c->pc = RC_ADDR(0x000111b2u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 1, t0);

L_111B6:
    /* 000111b6   2  asl.l #6,D1 */
    c->pc = RC_ADDR(0x000111b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 1, RC_L), RC_L));

L_111B8:
    /* 000111b8   2  swap D1 */
    c->pc = RC_ADDR(0x000111b8u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_111BA:
    /* 000111ba   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x000111bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_111BC:
    /* 000111bc   2  bcc 000111ce */
    c->pc = RC_ADDR(0x000111bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_111CE;

L_111BE:
    /* 000111be   4  tst.w (1a2,A3) */
    c->pc = RC_ADDR(0x000111beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a2u));
    rc_set_nzvc(c, t0, RC_W);

L_111C2:
    /* 000111c2   2  beq 000111ce */
    c->pc = RC_ADDR(0x000111c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_111CE;

L_111C4:
    /* 000111c4   2  bmi 000111ce */
    c->pc = RC_ADDR(0x000111c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_111CE;

L_111C6:
    /* 000111c6   6  move.w #ffff,(12,A2) */
    c->pc = RC_ADDR(0x000111c6u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_111CC:
    /* 000111cc   2  bra 000111e2 */
    c->pc = RC_ADDR(0x000111ccu);
    rc_step(c, m, 10);
    goto L_111E2;

L_111CE:
    /* 000111ce   4  move.w D0,(10,A2) */
    c->pc = RC_ADDR(0x000111ceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_111D2:
    /* 000111d2   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x000111d2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_111D4:
    /* 000111d4   4  lea (88,A3),A0 */
    c->pc = RC_ADDR(0x000111d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[3] + 0x88u);

L_111D8:
    /* 000111d8   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000111d8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_111DC:
    /* 000111dc   2  ext.w D0 */
    c->pc = RC_ADDR(0x000111dcu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_111DE:
    /* 000111de   4  move.w D0,(14,A2) */
    c->pc = RC_ADDR(0x000111deu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_111E2:
    /* 000111e2   4  move.w (a,A2),D0 */
    c->pc = RC_ADDR(0x000111e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111E6:
    /* 000111e6   4  lea (0,A3,D0.w),A0 */
    c->pc = RC_ADDR(0x000111e6u);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[0] = (c->a[3] + 0x0u + t4);

L_111EA:
    /* 000111ea   2  clr.l D1 */
    c->pc = RC_ADDR(0x000111eau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_111EC:
    /* 000111ec   4  move.w (1aa,A0),D1 */
    c->pc = RC_ADDR(0x000111ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x1aau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111F0:
    /* 000111f0   2  swap D1 */
    c->pc = RC_ADDR(0x000111f0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_111F2:
    /* 000111f2   4  move.l (c,A2),D2 */
    c->pc = RC_ADDR(0x000111f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_111F6:
    /* 000111f6   2  clr.l D3 */
    c->pc = RC_ADDR(0x000111f6u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_111F8:
    /* 000111f8   4  move.w (1b2,A0),D3 */
    c->pc = RC_ADDR(0x000111f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x1b2u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111FC:
    /* 000111fc   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x000111fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_111FE:
    /* 000111fe   2  lsr.w #5,D0 */
    c->pc = RC_ADDR(0x000111feu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_11200:
    /* 00011200   4  eori.w #7,D0 */
    c->pc = RC_ADDR(0x00011200u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000007u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11204:
    /* 00011204   4  andi.w #1f,D3 */
    c->pc = RC_ADDR(0x00011204u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000001fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11208:
    /* 00011208   4  addi.w #21,D3 */
    c->pc = RC_ADDR(0x00011208u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000021u;
    rc_flags_add(c, RC_W, t1, 0x00000021u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1120C:
    /* 0001120c   4  mulu.w (22,A6),D3 */
    c->pc = RC_ADDR(0x0001120cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 3, t0);

L_11210:
    /* 00011210   2  asl.l #3,D3 */
    c->pc = RC_ADDR(0x00011210u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 3, RC_L), RC_L));

L_11212:
    /* 00011212   2  lsr.l D0,D3 */
    c->pc = RC_ADDR(0x00011212u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 3, RC_L), RC_L));

L_11214:
    /* 00011214   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x00011214u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11216:
    /* 00011216   2  sub.l D2,D0 */
    c->pc = RC_ADDR(0x00011216u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11218:
    /* 00011218   2  bpl 0001121c */
    c->pc = RC_ADDR(0x00011218u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1121C;

L_1121A:
    /* 0001121a   2  neg.l D0 */
    c->pc = RC_ADDR(0x0001121au);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1121C:
    /* 0001121c   2  cmp.l D3,D0 */
    c->pc = RC_ADDR(0x0001121cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1121E:
    /* 0001121e   2  bgt 00011232 */
    c->pc = RC_ADDR(0x0001121eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_11232;

L_11220:
    /* 00011220   2  move.l D1,D2 */
    c->pc = RC_ADDR(0x00011220u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11222:
    /* 00011222   6  cmpi.w #4,(a,A2) */
    c->pc = RC_ADDR(0x00011222u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_11228:
    /* 00011228   2  bge 0001123c */
    c->pc = RC_ADDR(0x00011228u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1123C;

L_1122A:
    /* 0001122a   6  addi.w #2,(a,A2) */
    c->pc = RC_ADDR(0x0001122au);
    rc_step(c, m, 20);
    t3 = (c->a[2] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11230:
    /* 00011230   2  bra 0001123c */
    c->pc = RC_ADDR(0x00011230u);
    rc_step(c, m, 10);
    goto L_1123C;

L_11232:
    /* 00011232   2  cmp.l D1,D2 */
    c->pc = RC_ADDR(0x00011232u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_11234:
    /* 00011234   2  blt 0001123a */
    c->pc = RC_ADDR(0x00011234u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1123A;

L_11236:
    /* 00011236   2  sub.l D3,D2 */
    c->pc = RC_ADDR(0x00011236u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_11238:
    /* 00011238   2  bra 0001123c */
    c->pc = RC_ADDR(0x00011238u);
    rc_step(c, m, 10);
    goto L_1123C;

L_1123A:
    /* 0001123a   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x0001123au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_1123C:
    /* 0001123c   4  move.l D2,(c,A2) */
    c->pc = RC_ADDR(0x0001123cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11240:
    /* 00011240   4  move.w (0,A2),D0 */
    c->pc = RC_ADDR(0x00011240u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11244:
    /* 00011244   2  moveq #5,D2 */
    c->pc = RC_ADDR(0x00011244u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000005u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_11246:
    /* 00011246   4  tst.w (2,A2) */
    c->pc = RC_ADDR(0x00011246u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1124A:
    /* 0001124a   2  beq 00011258 */
    c->pc = RC_ADDR(0x0001124au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11258;

L_1124C:
    /* 0001124c   4  subq.w #1,(2,A2) */
    c->pc = RC_ADDR(0x0001124cu);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11250:
    /* 00011250   4  add.w (4,A2),D0 */
    c->pc = RC_ADDR(0x00011250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11254:
    /* 00011254   4  move.w D0,(0,A2) */
    c->pc = RC_ADDR(0x00011254u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11258:
    /* 00011258   4  cmpi.w #1ac,D0 */
    c->pc = RC_ADDR(0x00011258u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_1125C:
    /* 0001125c   2  ble 00011264 */
    c->pc = RC_ADDR(0x0001125cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_11264;

L_1125E:
    /* 0001125e   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001125eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_11260:
    /* 00011260   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x00011260u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11262:
    /* 00011262   2  bra 00011258 */
    c->pc = RC_ADDR(0x00011262u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11258;

L_11264:
    /* 00011264   4  move.w D2,(8,A2) */
    c->pc = RC_ADDR(0x00011264u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11268:
    /* 00011268   2  moveq #40,D1 */
    c->pc = RC_ADDR(0x00011268u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000040u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1126A:
    /* 0001126a   2  lsr.w D2,D1 */
    c->pc = RC_ADDR(0x0001126au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_1126C:
    /* 0001126c   4  move.w D1,(10,A1) */
    c->pc = RC_ADDR(0x0001126cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11270:
    /* 00011270   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x00011270u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11274:
    /* 00011274   4  move.w (198,A3),D2 */
    c->pc = RC_ADDR(0x00011274u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x198u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11278:
    /* 00011278   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x00011278u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_1127A:
    /* 0001127a   2  asr.w #7,D1 */
    c->pc = RC_ADDR(0x0001127au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000007u, rc_d_get(c, 1, RC_W), RC_W));

L_1127C:
    /* 0001127c   4  move.w (4,A6),D2 */
    c->pc = RC_ADDR(0x0001127cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11280:
    /* 00011280   4  subi.w #80,D2 */
    c->pc = RC_ADDR(0x00011280u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000080u;
    rc_flags_sub(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11284:
    /* 00011284   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00011284u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11286:
    /* 00011286   4  addi.w #1000,D1 */
    c->pc = RC_ADDR(0x00011286u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00001000u;
    rc_flags_add(c, RC_W, t1, 0x00001000u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1128A:
    /* 0001128a   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0001128au);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1128C:
    /* 0001128c   2  moveq #c,D1 */
    c->pc = RC_ADDR(0x0001128cu);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000cu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1128E:
    /* 0001128e   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001128eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11290:
    /* 00011290   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x00011290u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11294:
    /* 00011294   4  move.w (190,A3),D0 */
    c->pc = RC_ADDR(0x00011294u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x190u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11298:
    /* 00011298   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x00011298u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1129C:
    /* 0001129c   2  neg.w D1 */
    c->pc = RC_ADDR(0x0001129cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1129E:
    /* 0001129e   4  move.w (194,A3),D2 */
    c->pc = RC_ADDR(0x0001129eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x194u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112A2:
    /* 000112a2   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x000112a2u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_112A4:
    /* 000112a4   2  asr.w #8,D1 */
    c->pc = RC_ADDR(0x000112a4u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_112A6:
    /* 000112a6   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x000112a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112A8:
    /* 000112a8   4  tst.w (192,A3) */
    c->pc = RC_ADDR(0x000112a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x192u));
    rc_set_nzvc(c, t0, RC_W);

L_112AC:
    /* 000112ac   2  beq 000112ba */
    c->pc = RC_ADDR(0x000112acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_112BA;

L_112AE:
    /* 000112ae   4  move.l (c,A2),D1 */
    c->pc = RC_ADDR(0x000112aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_112B2:
    /* 000112b2   2  swap D1 */
    c->pc = RC_ADDR(0x000112b2u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_112B4:
    /* 000112b4   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x000112b4u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_112B6:
    /* 000112b6   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x000112b6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_112B8:
    /* 000112b8   2  bra 000112c4 */
    c->pc = RC_ADDR(0x000112b8u);
    rc_step(c, m, 10);
    goto L_112C4;

L_112BA:
    /* 000112ba   6  cmpi.w #6,(a,A2) */
    c->pc = RC_ADDR(0x000112bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_112C0:
    /* 000112c0   2  bne 000112c4 */
    c->pc = RC_ADDR(0x000112c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_112C4;

L_112C2:
    /* 000112c2   2  clr.w D0 */
    c->pc = RC_ADDR(0x000112c2u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_112C4:
    /* 000112c4   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x000112c4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_112C8:
    /* 000112c8   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000112c8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112CA:
    /* 000112ca   4  mulu.w (0,A6),D0 */
    c->pc = RC_ADDR(0x000112cau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_mulu(c, 0, t0);

L_112CE:
    /* 000112ce   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x000112ceu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_112D0:
    /* 000112d0   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000112d0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112D2:
    /* 000112d2   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x000112d2u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_112D6:
    /* 000112d6   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x000112d6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_112D8:
    /* 000112d8   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000112d8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112DA:
    /* 000112da   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x000112dau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_112DC:
    /* 000112dc   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x000112dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_112E0:
    /* 000112e0   4  move.w (19c,A3),D0 */
    c->pc = RC_ADDR(0x000112e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112E4:
    /* 000112e4   4  move.l (c,A2),D1 */
    c->pc = RC_ADDR(0x000112e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_112E8:
    /* 000112e8   2  swap D1 */
    c->pc = RC_ADDR(0x000112e8u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_112EA:
    /* 000112ea   2  mulu.w D0,D1 */
    c->pc = RC_ADDR(0x000112eau);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 1, t0);

L_112EC:
    /* 000112ec   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x000112ecu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_112EE:
    /* 000112ee   4  move.w (19a,A3),D0 */
    c->pc = RC_ADDR(0x000112eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112F2:
    /* 000112f2   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x000112f2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_112F6:
    /* 000112f6   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x000112f6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_112F8:
    /* 000112f8   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x000112f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_112FC:
    /* 000112fc   4  move.w (19e,A3),D2 */
    c->pc = RC_ADDR(0x000112fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11300:
    /* 00011300   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x00011300u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_11302:
    /* 00011302   2  asr.w #8,D1 */
    c->pc = RC_ADDR(0x00011302u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_11304:
    /* 00011304   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00011304u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11306:
    /* 00011306   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x00011306u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1130A:
    /* 0001130a   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x0001130au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_1130C:
    /* 0001130c   2  asl.w #7,D0 */
    c->pc = RC_ADDR(0x0001130cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 0, RC_W), RC_W));

L_1130E:
    /* 0001130e   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x0001130eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_11312:
    /* 00011312   2  move.l A0,D1 */
    c->pc = RC_ADDR(0x00011312u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11314:
    /* 00011314   2  bne 0001131c */
    c->pc = RC_ADDR(0x00011314u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1131C;

L_11316:
    /* 00011316   4  lea (8,A3),A0 */
    c->pc = RC_ADDR(0x00011316u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[3] + 0x8u);

L_1131A:
    /* 0001131a   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001131au);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1131C:
    /* 0001131c   2  adda.w D0,A0 */
    c->pc = RC_ADDR(0x0001131cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_1131E:
    /* 0001131e   4  move.w (6,A2),D0 */
    c->pc = RC_ADDR(0x0001131eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11322:
    /* 00011322   4  eori.w #80,D0 */
    c->pc = RC_ADDR(0x00011322u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000080u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_11326:
    /* 00011326   4  move.w D0,(6,A2) */
    c->pc = RC_ADDR(0x00011326u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1132A:
    /* 0001132a   4  movea.l (106,A6),A4 */
    c->pc = RC_ADDR(0x0001132au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[4] = t0;

L_1132E:
    /* 0001132e   4  lea (0,A4,D0.w),A4 */
    c->pc = RC_ADDR(0x0001132eu);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[4] = (c->a[4] + 0x0u + t4);

L_11332:
    /* 00011332   4  move.w #100,D0 */
    c->pc = RC_ADDR(0x00011332u);
    rc_step(c, m, 8);
    t0 = 0x00000100u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11336:
    /* 00011336   2  mulu.w D7,D0 */
    c->pc = RC_ADDR(0x00011336u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 7, RC_W);
    rc_mulu(c, 0, t0);

L_11338:
    /* 00011338   2  adda.w D0,A4 */
    c->pc = RC_ADDR(0x00011338u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[4] += rc_ext(t0, RC_W);

L_1133A:
    /* 0001133a   4  move.l A4,(c,A1) */
    c->pc = RC_ADDR(0x0001133au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1133E:
    /* 0001133e   4  tst.w (1a6,A3) */
    c->pc = RC_ADDR(0x0001133eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_set_nzvc(c, t0, RC_W);

L_11342:
    /* 00011342   2  bne 0001135e */
    c->pc = RC_ADDR(0x00011342u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1135E;

L_11344:
    /* 00011344   4  move.w (8,A2),D3 */
    c->pc = RC_ADDR(0x00011344u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11348:
    /* 00011348   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00011348u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1134A:
    /* 0001134a   2  bset D3,D1 */
    c->pc = RC_ADDR(0x0001134au);
    rc_step(c, m, 8);
    t4 = c->d[3] & 31u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_1134C:
    /* 0001134c   4  move.w #80,D4 */
    c->pc = RC_ADDR(0x0001134cu);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11350:
    /* 00011350   2  lsr.w D3,D4 */
    c->pc = RC_ADDR(0x00011350u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[3] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_11352:
    /* 00011352   2  move.b (A0),(A4)+ */
    c->pc = RC_ADDR(0x00011352u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11354:
    /* 00011354   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x00011354u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_11356:
    /* 00011356   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x00011356u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_11358:
    /* 00011358   2  bne 00011352 */
    c->pc = RC_ADDR(0x00011358u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11352; }

L_1135A:
    /* 0001135a   4  bra 00011452 */
    c->pc = RC_ADDR(0x0001135au);
    rc_step(c, m, 10);
    goto L_11452;

L_1135E:
    /* 0001135e   4  tst.w (1a8,A3) */
    c->pc = RC_ADDR(0x0001135eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a8u));
    rc_set_nzvc(c, t0, RC_W);

L_11362:
    /* 00011362   4  bne 000113d0 */
    c->pc = RC_ADDR(0x00011362u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_113D0;

L_11366:
    /* 00011366   4  move.w (8,A2),D3 */
    c->pc = RC_ADDR(0x00011366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1136A:
    /* 0001136a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001136au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1136C:
    /* 0001136c   2  bset D3,D1 */
    c->pc = RC_ADDR(0x0001136cu);
    rc_step(c, m, 8);
    t4 = c->d[3] & 31u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_1136E:
    /* 0001136e   4  move.w (10,A1),D2 */
    c->pc = RC_ADDR(0x0001136eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x10u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11372:
    /* 00011372   2  asl.w #1,D2 */
    c->pc = RC_ADDR(0x00011372u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_11374:
    /* 00011374   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x00011374u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11376:
    /* 00011376   4  move.w (1a6,A3),D4 */
    c->pc = RC_ADDR(0x00011376u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1137A:
    /* 0001137a   4  mulu.w (22,A6),D4 */
    c->pc = RC_ADDR(0x0001137au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 4, t0);

L_1137E:
    /* 0001137e   2  moveq #d,D0 */
    c->pc = RC_ADDR(0x0001137eu);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000du;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11380:
    /* 00011380   2  lsr.l D0,D4 */
    c->pc = RC_ADDR(0x00011380u);
    rc_step(c, m, 8);
    rc_d_set(c, 4, RC_L, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 4, RC_L), RC_L));

L_11382:
    /* 00011382   4  add.w (16,A2),D4 */
    c->pc = RC_ADDR(0x00011382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x16u));
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_11386:
    /* 00011386   4  move.w D4,(16,A2) */
    c->pc = RC_ADDR(0x00011386u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1138A:
    /* 0001138a   2  moveq #9,D0 */
    c->pc = RC_ADDR(0x0001138au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000009u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1138C:
    /* 0001138c   2  lsr.w D0,D4 */
    c->pc = RC_ADDR(0x0001138cu);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_1138E:
    /* 0001138e   4  lea (0,A0,D4.w),A5 */
    c->pc = RC_ADDR(0x0001138eu);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[4], RC_W);
    c->a[5] = (c->a[0] + 0x0u + t4);

L_11392:
    /* 00011392   2  lsr.w D3,D4 */
    c->pc = RC_ADDR(0x00011392u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[3] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_11394:
    /* 00011394   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x00011394u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11396:
    /* 00011396   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00011396u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11398:
    /* 00011398   2  ext.w D0 */
    c->pc = RC_ADDR(0x00011398u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1139A:
    /* 0001139a   2  move.b (A5),D3 */
    c->pc = RC_ADDR(0x0001139au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[5]);
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1139C:
    /* 0001139c   2  ext.w D3 */
    c->pc = RC_ADDR(0x0001139cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 3);

L_1139E:
    /* 0001139e   2  add.w D3,D0 */
    c->pc = RC_ADDR(0x0001139eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113A0:
    /* 000113a0   2  asr.w #1,D0 */
    c->pc = RC_ADDR(0x000113a0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_113A2:
    /* 000113a2   2  move.b D0,(A4)+ */
    c->pc = RC_ADDR(0x000113a2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_113A4:
    /* 000113a4   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x000113a4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_113A6:
    /* 000113a6   2  adda.w D1,A5 */
    c->pc = RC_ADDR(0x000113a6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[5] += rc_ext(t0, RC_W);

L_113A8:
    /* 000113a8   4  dbf D2,00011396 */
    c->pc = RC_ADDR(0x000113a8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11396; }
    }

L_113AC:
    /* 000113ac   4  suba.w #80,A5 */
    c->pc = RC_ADDR(0x000113acu);
    rc_step(c, m, 14);
    t0 = 0x00000080u;
    c->a[5] -= rc_ext(t0, RC_W);

L_113B0:
    /* 000113b0   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x000113b0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_113B2:
    /* 000113b2   4  bmi 00011452 */
    c->pc = RC_ADDR(0x000113b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_11452;

L_113B6:
    /* 000113b6   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x000113b6u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_113B8:
    /* 000113b8   2  ext.w D0 */
    c->pc = RC_ADDR(0x000113b8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_113BA:
    /* 000113ba   2  move.b (A5),D3 */
    c->pc = RC_ADDR(0x000113bau);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[5]);
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_113BC:
    /* 000113bc   2  ext.w D3 */
    c->pc = RC_ADDR(0x000113bcu);
    rc_step(c, m, 4);
    rc_ext_w(c, 3);

L_113BE:
    /* 000113be   2  add.w D3,D0 */
    c->pc = RC_ADDR(0x000113beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113C0:
    /* 000113c0   2  asr.w #1,D0 */
    c->pc = RC_ADDR(0x000113c0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_113C2:
    /* 000113c2   2  move.b D0,(A4)+ */
    c->pc = RC_ADDR(0x000113c2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_113C4:
    /* 000113c4   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x000113c4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_113C6:
    /* 000113c6   2  adda.w D1,A5 */
    c->pc = RC_ADDR(0x000113c6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[5] += rc_ext(t0, RC_W);

L_113C8:
    /* 000113c8   4  dbf D4,000113b6 */
    c->pc = RC_ADDR(0x000113c8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_113B6; }
    }

L_113CC:
    /* 000113cc   4  bra 00011452 */
    c->pc = RC_ADDR(0x000113ccu);
    rc_step(c, m, 10);
    goto L_11452;

L_113D0:
    /* 000113d0   4  move.w (1a6,A3),D0 */
    c->pc = RC_ADDR(0x000113d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113D4:
    /* 000113d4   4  mulu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x000113d4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 0, t0);

L_113D8:
    /* 000113d8   2  moveq #b,D1 */
    c->pc = RC_ADDR(0x000113d8u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000bu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_113DA:
    /* 000113da   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x000113dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_113DC:
    /* 000113dc   4  muls.w (18,A2),D0 */
    c->pc = RC_ADDR(0x000113dcu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[2] + 0x18u));
    rc_muls(c, 0, t0);

L_113E0:
    /* 000113e0   4  add.w (16,A2),D0 */
    c->pc = RC_ADDR(0x000113e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x16u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113E4:
    /* 000113e4   2  bvc 000113f6 */
    c->pc = RC_ADDR(0x000113e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 8)) goto L_113F6;

L_113E6:
    /* 000113e6   4  cmpi.w #8000,D0 */
    c->pc = RC_ADDR(0x000113e6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008000u);

L_113EA:
    /* 000113ea   2  bne 000113f0 */
    c->pc = RC_ADDR(0x000113eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_113F0;

L_113EC:
    /* 000113ec   4  add.w (18,A2),D0 */
    c->pc = RC_ADDR(0x000113ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x18u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113F0:
    /* 000113f0   4  neg.w (18,A2) */
    c->pc = RC_ADDR(0x000113f0u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x18u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_113F4:
    /* 000113f4   2  neg.w D0 */
    c->pc = RC_ADDR(0x000113f4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_113F6:
    /* 000113f6   4  move.w D0,(16,A2) */
    c->pc = RC_ADDR(0x000113f6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_113FA:
    /* 000113fa   4  move.w (1a8,A3),D1 */
    c->pc = RC_ADDR(0x000113fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113FE:
    /* 000113fe   2  muls.w D1,D0 */
    c->pc = RC_ADDR(0x000113feu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_muls(c, 0, t0);

L_11400:
    /* 00011400   2  moveq #11,D1 */
    c->pc = RC_ADDR(0x00011400u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000011u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_11402:
    /* 00011402   4  add.w (8,A2),D1 */
    c->pc = RC_ADDR(0x00011402u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11406:
    /* 00011406   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00011406u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11408:
    /* 00011408   4  move.w (10,A1),D2 */
    c->pc = RC_ADDR(0x00011408u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x10u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1140C:
    /* 0001140c   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x0001140cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1140E:
    /* 0001140e   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x0001140eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11410:
    /* 00011410   2  sub.w D0,D3 */
    c->pc = RC_ADDR(0x00011410u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_11412:
    /* 00011412   2  move.w D2,D6 */
    c->pc = RC_ADDR(0x00011412u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11414:
    /* 00011414   2  beq 00011432 */
    c->pc = RC_ADDR(0x00011414u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11432;

L_11416:
    /* 00011416   2  clr.w D0 */
    c->pc = RC_ADDR(0x00011416u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11418:
    /* 00011418   2  clr.w D1 */
    c->pc = RC_ADDR(0x00011418u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1141A:
    /* 0001141a   2  moveq #40,D4 */
    c->pc = RC_ADDR(0x0001141au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000040u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1141C:
    /* 0001141c   2  divu.w D2,D4 */
    c->pc = RC_ADDR(0x0001141cu);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 2, RC_W);
    rc_divu(c, m, 4, t0);

L_1141E:
    /* 0001141e   2  move.w D4,D5 */
    c->pc = RC_ADDR(0x0001141eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11420:
    /* 00011420   2  swap D4 */
    c->pc = RC_ADDR(0x00011420u);
    rc_step(c, m, 4);
    t0 = c->d[4];
    c->d[4] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[4], RC_L);

L_11422:
    /* 00011422   4  move.b (0,A0,D0.w),(A4)+ */
    c->pc = RC_ADDR(0x00011422u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11426:
    /* 00011426   2  sub.w D4,D1 */
    c->pc = RC_ADDR(0x00011426u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11428:
    /* 00011428   2  bcc 0001142c */
    c->pc = RC_ADDR(0x00011428u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1142C;

L_1142A:
    /* 0001142a   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x0001142au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1142C:
    /* 0001142c   2  addx.w D5,D0 */
    c->pc = RC_ADDR(0x0001142cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_W, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 0, RC_W, t2);

L_1142E:
    /* 0001142e   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x0001142eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_11430:
    /* 00011430   2  bne 00011422 */
    c->pc = RC_ADDR(0x00011430u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11422; }

L_11432:
    /* 00011432   2  move.w D3,D6 */
    c->pc = RC_ADDR(0x00011432u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11434:
    /* 00011434   2  beq 00011452 */
    c->pc = RC_ADDR(0x00011434u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11452;

L_11436:
    /* 00011436   2  moveq #40,D0 */
    c->pc = RC_ADDR(0x00011436u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000040u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11438:
    /* 00011438   2  clr.w D1 */
    c->pc = RC_ADDR(0x00011438u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1143A:
    /* 0001143a   2  moveq #40,D4 */
    c->pc = RC_ADDR(0x0001143au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000040u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1143C:
    /* 0001143c   2  divu.w D3,D4 */
    c->pc = RC_ADDR(0x0001143cu);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 4, t0);

L_1143E:
    /* 0001143e   2  move.w D4,D5 */
    c->pc = RC_ADDR(0x0001143eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11440:
    /* 00011440   2  swap D4 */
    c->pc = RC_ADDR(0x00011440u);
    rc_step(c, m, 4);
    t0 = c->d[4];
    c->d[4] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[4], RC_L);

L_11442:
    /* 00011442   4  move.b (0,A0,D0.w),(A4)+ */
    c->pc = RC_ADDR(0x00011442u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11446:
    /* 00011446   2  sub.w D4,D1 */
    c->pc = RC_ADDR(0x00011446u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11448:
    /* 00011448   2  bcc 0001144c */
    c->pc = RC_ADDR(0x00011448u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1144C;

L_1144A:
    /* 0001144a   2  add.w D3,D1 */
    c->pc = RC_ADDR(0x0001144au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1144C:
    /* 0001144c   2  addx.w D5,D0 */
    c->pc = RC_ADDR(0x0001144cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_W, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 0, RC_W, t2);

L_1144E:
    /* 0001144e   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x0001144eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_11450:
    /* 00011450   2  bne 00011442 */
    c->pc = RC_ADDR(0x00011450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11442; }

L_11452:
    /* 00011452   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011452u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11454:
    /* 00011454   2  rts */
    c->pc = RC_ADDR(0x00011454u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
