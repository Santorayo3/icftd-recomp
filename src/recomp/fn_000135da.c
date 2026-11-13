/* fn_000135da - 1358 byte(s), 370 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000135da(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000135dau): goto L_135DA;
    case RC_ADDR(0x000135deu): goto L_135DE;
    case RC_ADDR(0x000135e2u): goto L_135E2;
    case RC_ADDR(0x000135e4u): goto L_135E4;
    case RC_ADDR(0x000135e6u): goto L_135E6;
    case RC_ADDR(0x000135e8u): goto L_135E8;
    case RC_ADDR(0x000135ecu): goto L_135EC;
    case RC_ADDR(0x000135eeu): goto L_135EE;
    case RC_ADDR(0x000135f2u): goto L_135F2;
    case RC_ADDR(0x000135f4u): goto L_135F4;
    case RC_ADDR(0x000135f8u): goto L_135F8;
    case RC_ADDR(0x000135fau): goto L_135FA;
    case RC_ADDR(0x00013600u): goto L_13600;
    case RC_ADDR(0x00013606u): goto L_13606;
    case RC_ADDR(0x00013608u): goto L_13608;
    case RC_ADDR(0x0001360cu): goto L_1360C;
    case RC_ADDR(0x00013610u): goto L_13610;
    case RC_ADDR(0x00013614u): goto L_13614;
    case RC_ADDR(0x00013618u): goto L_13618;
    case RC_ADDR(0x0001361cu): goto L_1361C;
    case RC_ADDR(0x00013620u): goto L_13620;
    case RC_ADDR(0x00013624u): goto L_13624;
    case RC_ADDR(0x00013628u): goto L_13628;
    case RC_ADDR(0x0001362au): goto L_1362A;
    case RC_ADDR(0x0001362eu): goto L_1362E;
    case RC_ADDR(0x00013632u): goto L_13632;
    case RC_ADDR(0x00013634u): goto L_13634;
    case RC_ADDR(0x00013638u): goto L_13638;
    case RC_ADDR(0x0001363cu): goto L_1363C;
    case RC_ADDR(0x00013640u): goto L_13640;
    case RC_ADDR(0x00013644u): goto L_13644;
    case RC_ADDR(0x00013648u): goto L_13648;
    case RC_ADDR(0x0001364cu): goto L_1364C;
    case RC_ADDR(0x00013650u): goto L_13650;
    case RC_ADDR(0x00013654u): goto L_13654;
    case RC_ADDR(0x00013658u): goto L_13658;
    case RC_ADDR(0x0001365au): goto L_1365A;
    case RC_ADDR(0x0001365cu): goto L_1365C;
    case RC_ADDR(0x0001365eu): goto L_1365E;
    case RC_ADDR(0x00013664u): goto L_13664;
    case RC_ADDR(0x00013668u): goto L_13668;
    case RC_ADDR(0x0001366eu): goto L_1366E;
    case RC_ADDR(0x00013670u): goto L_13670;
    case RC_ADDR(0x00013674u): goto L_13674;
    case RC_ADDR(0x00013678u): goto L_13678;
    case RC_ADDR(0x0001367cu): goto L_1367C;
    case RC_ADDR(0x00013680u): goto L_13680;
    case RC_ADDR(0x00013682u): goto L_13682;
    case RC_ADDR(0x00013686u): goto L_13686;
    case RC_ADDR(0x0001368au): goto L_1368A;
    case RC_ADDR(0x0001368cu): goto L_1368C;
    case RC_ADDR(0x00013690u): goto L_13690;
    case RC_ADDR(0x00013694u): goto L_13694;
    case RC_ADDR(0x00013696u): goto L_13696;
    case RC_ADDR(0x0001369au): goto L_1369A;
    case RC_ADDR(0x0001369eu): goto L_1369E;
    case RC_ADDR(0x000136a0u): goto L_136A0;
    case RC_ADDR(0x000136a4u): goto L_136A4;
    case RC_ADDR(0x000136a8u): goto L_136A8;
    case RC_ADDR(0x000136aau): goto L_136AA;
    case RC_ADDR(0x000136aeu): goto L_136AE;
    case RC_ADDR(0x000136b4u): goto L_136B4;
    case RC_ADDR(0x000136b8u): goto L_136B8;
    case RC_ADDR(0x000136bcu): goto L_136BC;
    case RC_ADDR(0x000136c0u): goto L_136C0;
    case RC_ADDR(0x000136c4u): goto L_136C4;
    case RC_ADDR(0x000136c8u): goto L_136C8;
    case RC_ADDR(0x000136ccu): goto L_136CC;
    case RC_ADDR(0x000136d0u): goto L_136D0;
    case RC_ADDR(0x000136d4u): goto L_136D4;
    case RC_ADDR(0x000136d8u): goto L_136D8;
    case RC_ADDR(0x000136dau): goto L_136DA;
    case RC_ADDR(0x000136deu): goto L_136DE;
    case RC_ADDR(0x000136e2u): goto L_136E2;
    case RC_ADDR(0x000136e6u): goto L_136E6;
    case RC_ADDR(0x000136eau): goto L_136EA;
    case RC_ADDR(0x000136eeu): goto L_136EE;
    case RC_ADDR(0x000136f2u): goto L_136F2;
    case RC_ADDR(0x000136f4u): goto L_136F4;
    case RC_ADDR(0x000136f8u): goto L_136F8;
    case RC_ADDR(0x000136fcu): goto L_136FC;
    case RC_ADDR(0x00013702u): goto L_13702;
    case RC_ADDR(0x00013706u): goto L_13706;
    case RC_ADDR(0x0001370au): goto L_1370A;
    case RC_ADDR(0x0001370eu): goto L_1370E;
    case RC_ADDR(0x00013712u): goto L_13712;
    case RC_ADDR(0x00013718u): goto L_13718;
    case RC_ADDR(0x0001371cu): goto L_1371C;
    case RC_ADDR(0x00013720u): goto L_13720;
    case RC_ADDR(0x00013722u): goto L_13722;
    case RC_ADDR(0x00013726u): goto L_13726;
    case RC_ADDR(0x0001372au): goto L_1372A;
    case RC_ADDR(0x0001372cu): goto L_1372C;
    case RC_ADDR(0x00013730u): goto L_13730;
    case RC_ADDR(0x00013734u): goto L_13734;
    case RC_ADDR(0x00013736u): goto L_13736;
    case RC_ADDR(0x00013738u): goto L_13738;
    case RC_ADDR(0x0001373cu): goto L_1373C;
    case RC_ADDR(0x00013740u): goto L_13740;
    case RC_ADDR(0x00013744u): goto L_13744;
    case RC_ADDR(0x00013748u): goto L_13748;
    case RC_ADDR(0x0001374au): goto L_1374A;
    case RC_ADDR(0x0001374eu): goto L_1374E;
    case RC_ADDR(0x00013752u): goto L_13752;
    case RC_ADDR(0x00013756u): goto L_13756;
    case RC_ADDR(0x0001375au): goto L_1375A;
    case RC_ADDR(0x0001375eu): goto L_1375E;
    case RC_ADDR(0x00013762u): goto L_13762;
    case RC_ADDR(0x00013764u): goto L_13764;
    case RC_ADDR(0x00013768u): goto L_13768;
    case RC_ADDR(0x0001376cu): goto L_1376C;
    case RC_ADDR(0x00013770u): goto L_13770;
    case RC_ADDR(0x00013772u): goto L_13772;
    case RC_ADDR(0x00013776u): goto L_13776;
    case RC_ADDR(0x0001377au): goto L_1377A;
    case RC_ADDR(0x0001377cu): goto L_1377C;
    case RC_ADDR(0x00013780u): goto L_13780;
    case RC_ADDR(0x00013784u): goto L_13784;
    case RC_ADDR(0x00013788u): goto L_13788;
    case RC_ADDR(0x0001378au): goto L_1378A;
    case RC_ADDR(0x00013790u): goto L_13790;
    case RC_ADDR(0x00013792u): goto L_13792;
    case RC_ADDR(0x00013796u): goto L_13796;
    case RC_ADDR(0x0001379au): goto L_1379A;
    case RC_ADDR(0x0001379cu): goto L_1379C;
    case RC_ADDR(0x000137a0u): goto L_137A0;
    case RC_ADDR(0x000137a2u): goto L_137A2;
    case RC_ADDR(0x000137a4u): goto L_137A4;
    case RC_ADDR(0x000137aau): goto L_137AA;
    case RC_ADDR(0x000137aeu): goto L_137AE;
    case RC_ADDR(0x000137b2u): goto L_137B2;
    case RC_ADDR(0x000137b6u): goto L_137B6;
    case RC_ADDR(0x000137b8u): goto L_137B8;
    case RC_ADDR(0x000137beu): goto L_137BE;
    case RC_ADDR(0x000137c0u): goto L_137C0;
    case RC_ADDR(0x000137c4u): goto L_137C4;
    case RC_ADDR(0x000137c8u): goto L_137C8;
    case RC_ADDR(0x000137cau): goto L_137CA;
    case RC_ADDR(0x000137ceu): goto L_137CE;
    case RC_ADDR(0x000137d0u): goto L_137D0;
    case RC_ADDR(0x000137d2u): goto L_137D2;
    case RC_ADDR(0x000137d8u): goto L_137D8;
    case RC_ADDR(0x000137dcu): goto L_137DC;
    case RC_ADDR(0x000137deu): goto L_137DE;
    case RC_ADDR(0x000137e2u): goto L_137E2;
    case RC_ADDR(0x000137e6u): goto L_137E6;
    case RC_ADDR(0x000137eau): goto L_137EA;
    case RC_ADDR(0x000137ecu): goto L_137EC;
    case RC_ADDR(0x000137f0u): goto L_137F0;
    case RC_ADDR(0x000137f4u): goto L_137F4;
    case RC_ADDR(0x000137f8u): goto L_137F8;
    case RC_ADDR(0x000137fau): goto L_137FA;
    case RC_ADDR(0x000137feu): goto L_137FE;
    case RC_ADDR(0x00013802u): goto L_13802;
    case RC_ADDR(0x00013804u): goto L_13804;
    case RC_ADDR(0x00013808u): goto L_13808;
    case RC_ADDR(0x0001380au): goto L_1380A;
    case RC_ADDR(0x0001380eu): goto L_1380E;
    case RC_ADDR(0x00013812u): goto L_13812;
    case RC_ADDR(0x00013814u): goto L_13814;
    case RC_ADDR(0x00013818u): goto L_13818;
    case RC_ADDR(0x0001381cu): goto L_1381C;
    case RC_ADDR(0x00013820u): goto L_13820;
    case RC_ADDR(0x00013822u): goto L_13822;
    case RC_ADDR(0x00013826u): goto L_13826;
    case RC_ADDR(0x0001382cu): goto L_1382C;
    case RC_ADDR(0x00013830u): goto L_13830;
    case RC_ADDR(0x00013832u): goto L_13832;
    case RC_ADDR(0x00013834u): goto L_13834;
    case RC_ADDR(0x00013838u): goto L_13838;
    case RC_ADDR(0x0001383au): goto L_1383A;
    case RC_ADDR(0x0001383eu): goto L_1383E;
    case RC_ADDR(0x00013840u): goto L_13840;
    case RC_ADDR(0x00013844u): goto L_13844;
    case RC_ADDR(0x00013846u): goto L_13846;
    case RC_ADDR(0x0001384au): goto L_1384A;
    case RC_ADDR(0x0001384cu): goto L_1384C;
    case RC_ADDR(0x00013850u): goto L_13850;
    case RC_ADDR(0x00013854u): goto L_13854;
    case RC_ADDR(0x00013856u): goto L_13856;
    case RC_ADDR(0x0001385au): goto L_1385A;
    case RC_ADDR(0x0001385eu): goto L_1385E;
    case RC_ADDR(0x00013860u): goto L_13860;
    case RC_ADDR(0x00013864u): goto L_13864;
    case RC_ADDR(0x00013868u): goto L_13868;
    case RC_ADDR(0x0001386au): goto L_1386A;
    case RC_ADDR(0x0001386eu): goto L_1386E;
    case RC_ADDR(0x00013872u): goto L_13872;
    case RC_ADDR(0x00013874u): goto L_13874;
    case RC_ADDR(0x0001388cu): goto L_1388C;
    case RC_ADDR(0x00013892u): goto L_13892;
    case RC_ADDR(0x00013894u): goto L_13894;
    case RC_ADDR(0x00013896u): goto L_13896;
    case RC_ADDR(0x0001389au): goto L_1389A;
    case RC_ADDR(0x0001389eu): goto L_1389E;
    case RC_ADDR(0x000138a0u): goto L_138A0;
    case RC_ADDR(0x000138a4u): goto L_138A4;
    case RC_ADDR(0x000138a8u): goto L_138A8;
    case RC_ADDR(0x000138acu): goto L_138AC;
    case RC_ADDR(0x000138b0u): goto L_138B0;
    case RC_ADDR(0x000138b4u): goto L_138B4;
    case RC_ADDR(0x000138b8u): goto L_138B8;
    case RC_ADDR(0x000138bau): goto L_138BA;
    case RC_ADDR(0x000138beu): goto L_138BE;
    case RC_ADDR(0x000138c2u): goto L_138C2;
    case RC_ADDR(0x000138c4u): goto L_138C4;
    case RC_ADDR(0x000138c8u): goto L_138C8;
    case RC_ADDR(0x000138cau): goto L_138CA;
    case RC_ADDR(0x000138ccu): goto L_138CC;
    case RC_ADDR(0x000138ceu): goto L_138CE;
    case RC_ADDR(0x000138d4u): goto L_138D4;
    case RC_ADDR(0x000138d8u): goto L_138D8;
    case RC_ADDR(0x000138deu): goto L_138DE;
    case RC_ADDR(0x000138e2u): goto L_138E2;
    case RC_ADDR(0x000138e8u): goto L_138E8;
    case RC_ADDR(0x000138ecu): goto L_138EC;
    case RC_ADDR(0x000138f0u): goto L_138F0;
    case RC_ADDR(0x000138f2u): goto L_138F2;
    case RC_ADDR(0x000138f6u): goto L_138F6;
    case RC_ADDR(0x000138fau): goto L_138FA;
    case RC_ADDR(0x000138fcu): goto L_138FC;
    case RC_ADDR(0x00013900u): goto L_13900;
    case RC_ADDR(0x00013904u): goto L_13904;
    case RC_ADDR(0x00013908u): goto L_13908;
    case RC_ADDR(0x0001390cu): goto L_1390C;
    case RC_ADDR(0x0001390eu): goto L_1390E;
    case RC_ADDR(0x00013912u): goto L_13912;
    case RC_ADDR(0x00013916u): goto L_13916;
    case RC_ADDR(0x0001391au): goto L_1391A;
    case RC_ADDR(0x0001391cu): goto L_1391C;
    case RC_ADDR(0x00013920u): goto L_13920;
    case RC_ADDR(0x00013924u): goto L_13924;
    case RC_ADDR(0x00013928u): goto L_13928;
    case RC_ADDR(0x0001392cu): goto L_1392C;
    case RC_ADDR(0x00013930u): goto L_13930;
    case RC_ADDR(0x00013934u): goto L_13934;
    case RC_ADDR(0x00013938u): goto L_13938;
    case RC_ADDR(0x0001393cu): goto L_1393C;
    case RC_ADDR(0x00013940u): goto L_13940;
    case RC_ADDR(0x00013944u): goto L_13944;
    case RC_ADDR(0x00013948u): goto L_13948;
    case RC_ADDR(0x0001394cu): goto L_1394C;
    case RC_ADDR(0x00013950u): goto L_13950;
    case RC_ADDR(0x00013954u): goto L_13954;
    case RC_ADDR(0x00013958u): goto L_13958;
    case RC_ADDR(0x0001395cu): goto L_1395C;
    case RC_ADDR(0x00013960u): goto L_13960;
    case RC_ADDR(0x00013964u): goto L_13964;
    case RC_ADDR(0x00013966u): goto L_13966;
    case RC_ADDR(0x0001396au): goto L_1396A;
    case RC_ADDR(0x0001396eu): goto L_1396E;
    case RC_ADDR(0x00013972u): goto L_13972;
    case RC_ADDR(0x00013978u): goto L_13978;
    case RC_ADDR(0x0001397eu): goto L_1397E;
    case RC_ADDR(0x00013980u): goto L_13980;
    case RC_ADDR(0x00013984u): goto L_13984;
    case RC_ADDR(0x0001398au): goto L_1398A;
    case RC_ADDR(0x00013990u): goto L_13990;
    case RC_ADDR(0x00013994u): goto L_13994;
    case RC_ADDR(0x00013996u): goto L_13996;
    case RC_ADDR(0x0001399au): goto L_1399A;
    case RC_ADDR(0x0001399eu): goto L_1399E;
    case RC_ADDR(0x000139a2u): goto L_139A2;
    case RC_ADDR(0x000139a4u): goto L_139A4;
    case RC_ADDR(0x000139a6u): goto L_139A6;
    case RC_ADDR(0x000139aau): goto L_139AA;
    case RC_ADDR(0x000139acu): goto L_139AC;
    case RC_ADDR(0x000139b0u): goto L_139B0;
    case RC_ADDR(0x000139b4u): goto L_139B4;
    case RC_ADDR(0x000139b8u): goto L_139B8;
    case RC_ADDR(0x000139beu): goto L_139BE;
    case RC_ADDR(0x000139c0u): goto L_139C0;
    case RC_ADDR(0x000139c4u): goto L_139C4;
    case RC_ADDR(0x000139cau): goto L_139CA;
    case RC_ADDR(0x000139d0u): goto L_139D0;
    case RC_ADDR(0x000139d4u): goto L_139D4;
    case RC_ADDR(0x000139d6u): goto L_139D6;
    case RC_ADDR(0x000139dau): goto L_139DA;
    case RC_ADDR(0x000139deu): goto L_139DE;
    case RC_ADDR(0x000139e2u): goto L_139E2;
    case RC_ADDR(0x000139e4u): goto L_139E4;
    case RC_ADDR(0x000139e6u): goto L_139E6;
    case RC_ADDR(0x000139eau): goto L_139EA;
    case RC_ADDR(0x000139ecu): goto L_139EC;
    case RC_ADDR(0x000139f0u): goto L_139F0;
    case RC_ADDR(0x000139f4u): goto L_139F4;
    case RC_ADDR(0x000139fau): goto L_139FA;
    case RC_ADDR(0x000139feu): goto L_139FE;
    case RC_ADDR(0x00013a00u): goto L_13A00;
    case RC_ADDR(0x00013a04u): goto L_13A04;
    case RC_ADDR(0x00013a06u): goto L_13A06;
    case RC_ADDR(0x00013a0au): goto L_13A0A;
    case RC_ADDR(0x00013a0eu): goto L_13A0E;
    case RC_ADDR(0x00013a12u): goto L_13A12;
    case RC_ADDR(0x00013a16u): goto L_13A16;
    case RC_ADDR(0x00013a1au): goto L_13A1A;
    case RC_ADDR(0x00013a20u): goto L_13A20;
    case RC_ADDR(0x00013a24u): goto L_13A24;
    case RC_ADDR(0x00013a28u): goto L_13A28;
    case RC_ADDR(0x00013a2au): goto L_13A2A;
    case RC_ADDR(0x00013a2eu): goto L_13A2E;
    case RC_ADDR(0x00013a32u): goto L_13A32;
    case RC_ADDR(0x00013a36u): goto L_13A36;
    case RC_ADDR(0x00013a3au): goto L_13A3A;
    case RC_ADDR(0x00013a3eu): goto L_13A3E;
    case RC_ADDR(0x00013a44u): goto L_13A44;
    case RC_ADDR(0x00013a48u): goto L_13A48;
    case RC_ADDR(0x00013a4au): goto L_13A4A;
    case RC_ADDR(0x00013a4cu): goto L_13A4C;
    case RC_ADDR(0x00013a50u): goto L_13A50;
    case RC_ADDR(0x00013a52u): goto L_13A52;
    case RC_ADDR(0x00013a58u): goto L_13A58;
    case RC_ADDR(0x00013a5au): goto L_13A5A;
    case RC_ADDR(0x00013a60u): goto L_13A60;
    case RC_ADDR(0x00013a62u): goto L_13A62;
    case RC_ADDR(0x00013a68u): goto L_13A68;
    case RC_ADDR(0x00013a6au): goto L_13A6A;
    case RC_ADDR(0x00013a70u): goto L_13A70;
    case RC_ADDR(0x00013a72u): goto L_13A72;
    case RC_ADDR(0x00013a78u): goto L_13A78;
    case RC_ADDR(0x00013a7au): goto L_13A7A;
    case RC_ADDR(0x00013a80u): goto L_13A80;
    case RC_ADDR(0x00013a82u): goto L_13A82;
    case RC_ADDR(0x00013a88u): goto L_13A88;
    case RC_ADDR(0x00013a8au): goto L_13A8A;
    case RC_ADDR(0x00013a90u): goto L_13A90;
    case RC_ADDR(0x00013aa8u): goto L_13AA8;
    case RC_ADDR(0x00013aaeu): goto L_13AAE;
    case RC_ADDR(0x00013ab0u): goto L_13AB0;
    case RC_ADDR(0x00013ab2u): goto L_13AB2;
    case RC_ADDR(0x00013ab6u): goto L_13AB6;
    case RC_ADDR(0x00013abau): goto L_13ABA;
    case RC_ADDR(0x00013abeu): goto L_13ABE;
    case RC_ADDR(0x00013ac2u): goto L_13AC2;
    case RC_ADDR(0x00013ac4u): goto L_13AC4;
    case RC_ADDR(0x00013ac8u): goto L_13AC8;
    case RC_ADDR(0x00013accu): goto L_13ACC;
    case RC_ADDR(0x00013ad0u): goto L_13AD0;
    case RC_ADDR(0x00013ad4u): goto L_13AD4;
    case RC_ADDR(0x00013ad8u): goto L_13AD8;
    case RC_ADDR(0x00013adcu): goto L_13ADC;
    case RC_ADDR(0x00013adeu): goto L_13ADE;
    case RC_ADDR(0x00013ae2u): goto L_13AE2;
    case RC_ADDR(0x00013ae6u): goto L_13AE6;
    case RC_ADDR(0x00013aeau): goto L_13AEA;
    case RC_ADDR(0x00013aecu): goto L_13AEC;
    case RC_ADDR(0x00013af0u): goto L_13AF0;
    case RC_ADDR(0x00013af6u): goto L_13AF6;
    case RC_ADDR(0x00013af8u): goto L_13AF8;
    case RC_ADDR(0x00013afcu): goto L_13AFC;
    case RC_ADDR(0x00013b00u): goto L_13B00;
    case RC_ADDR(0x00013b04u): goto L_13B04;
    case RC_ADDR(0x00013b08u): goto L_13B08;
    case RC_ADDR(0x00013b0eu): goto L_13B0E;
    case RC_ADDR(0x00013b12u): goto L_13B12;
    case RC_ADDR(0x00013b18u): goto L_13B18;
    case RC_ADDR(0x00013b1cu): goto L_13B1C;
    case RC_ADDR(0x00013b20u): goto L_13B20;
    case RC_ADDR(0x00013b24u): goto L_13B24;
    case RC_ADDR(0x00013b2au): goto L_13B2A;
    case RC_ADDR(0x00013b2eu): goto L_13B2E;
    case RC_ADDR(0x00013b32u): goto L_13B32;
    case RC_ADDR(0x00013b36u): goto L_13B36;
    case RC_ADDR(0x00013b3au): goto L_13B3A;
    case RC_ADDR(0x00013b3eu): goto L_13B3E;
    case RC_ADDR(0x00013b40u): goto L_13B40;
    case RC_ADDR(0x00013b44u): goto L_13B44;
    case RC_ADDR(0x00013b4au): goto L_13B4A;
    case RC_ADDR(0x00013b4cu): goto L_13B4C;
    case RC_ADDR(0x00013b50u): goto L_13B50;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_135DA:
    /* 000135da   4  link.w A5,#ffffffe2 */
    c->pc = RC_ADDR(0x000135dau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1eu;

L_135DE:
    /* 000135de   4  tst.w (fffffd58,A4) */
    c->pc = RC_ADDR(0x000135deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    rc_set_nzvc(c, t0, RC_W);

L_135E2:
    /* 000135e2   2  bne 000135e8 */
    c->pc = RC_ADDR(0x000135e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_135E8;

L_135E4:
    /* 000135e4   2  unlk A5 */
    c->pc = RC_ADDR(0x000135e4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_135E6:
    /* 000135e6   2  rts */
    c->pc = RC_ADDR(0x000135e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_135E8:
    /* 000135e8   4  tst.w (fffffd66,A4) */
    c->pc = RC_ADDR(0x000135e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x29au));
    rc_set_nzvc(c, t0, RC_W);

L_135EC:
    /* 000135ec   2  beq 00013608 */
    c->pc = RC_ADDR(0x000135ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13608;

L_135EE:
    /* 000135ee   4  subq.w #1,(fffffd66,A4) */
    c->pc = RC_ADDR(0x000135eeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x29au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_135F2:
    /* 000135f2   2  bne 00013608 */
    c->pc = RC_ADDR(0x000135f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13608;

L_135F4:
    /* 000135f4   4  tst.w (af6,A4) */
    c->pc = RC_ADDR(0x000135f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_135F8:
    /* 000135f8   2  bne 00013608 */
    c->pc = RC_ADDR(0x000135f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13608;

L_135FA:
    /* 000135fa   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x000135fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13600:
    /* 00013600   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x00013600u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13606:
    /* 00013606   2  bra 000135e4 */
    c->pc = RC_ADDR(0x00013606u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_135E4;

L_13608:
    /* 00013608   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00013608u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1360C:
    /* 0001360c   4  jsr (00013530) */
    c->pc = RC_ADDR(0x0001360cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013610u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013530u);
    return;

L_13610:
    /* 00013610   4  jsr (00015008) */
    c->pc = RC_ADDR(0x00013610u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013614u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015008u);
    return;

L_13614:
    /* 00013614   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00013614u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13618:
    /* 00013618   4  bra 000136b8 */
    c->pc = RC_ADDR(0x00013618u);
    rc_step(c, m, 10);
    goto L_136B8;

L_1361C:
    /* 0001361c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001361cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13620:
    /* 00013620   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013620u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13624:
    /* 00013624   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00013624u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc84u);

L_13628:
    /* 00013628   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00013628u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1362A:
    /* 0001362a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001362au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1362E:
    /* 0001362e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001362eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13632:
    /* 00013632   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00013632u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13634:
    /* 00013634   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00013634u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13638:
    /* 00013638   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00013638u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1363C:
    /* 0001363c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001363cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13640:
    /* 00013640   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00013640u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13644:
    /* 00013644   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00013644u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13648:
    /* 00013648   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00013648u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1364C:
    /* 0001364c   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0001364cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13650:
    /* 00013650   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x00013650u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13654:
    /* 00013654   4  jsr (00012c06) */
    c->pc = RC_ADDR(0x00013654u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013658u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012c06u);
    return;

L_13658:
    /* 00013658   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00013658u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1365A:
    /* 0001365a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001365au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1365C:
    /* 0001365c   2  beq 00013670 */
    c->pc = RC_ADDR(0x0001365cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13670;

L_1365E:
    /* 0001365e   6  move.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x0001365eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13664:
    /* 00013664   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013664u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13668:
    /* 00013668   6  move.b #1,(15,A0) */
    c->pc = RC_ADDR(0x00013668u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x15u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1366E:
    /* 0001366e   2  bra 00013678 */
    c->pc = RC_ADDR(0x0001366eu);
    rc_step(c, m, 10);
    goto L_13678;

L_13670:
    /* 00013670   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013670u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13674:
    /* 00013674   4  clr.b (15,A0) */
    c->pc = RC_ADDR(0x00013674u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x15u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13678:
    /* 00013678   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013678u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1367C:
    /* 0001367c   4  cmp.w (fffffd5c,A4),D0 */
    c->pc = RC_ADDR(0x0001367cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13680:
    /* 00013680   2  blt 0001368c */
    c->pc = RC_ADDR(0x00013680u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1368C;

L_13682:
    /* 00013682   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013682u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13686:
    /* 00013686   4  cmp.w (fffffd5e,A4),D0 */
    c->pc = RC_ADDR(0x00013686u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1368A:
    /* 0001368a   2  blt 000136aa */
    c->pc = RC_ADDR(0x0001368au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_136AA;

L_1368C:
    /* 0001368c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001368cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13690:
    /* 00013690   4  tst.b (15,A0) */
    c->pc = RC_ADDR(0x00013690u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x15u));
    rc_set_nzvc(c, t0, RC_B);

L_13694:
    /* 00013694   2  beq 000136a0 */
    c->pc = RC_ADDR(0x00013694u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_136A0;

L_13696:
    /* 00013696   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013696u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1369A:
    /* 0001369a   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x0001369au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_1369E:
    /* 0001369e   2  bge 000136aa */
    c->pc = RC_ADDR(0x0001369eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_136AA;

L_136A0:
    /* 000136a0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000136a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_136A4:
    /* 000136a4   4  clr.b (13,A0) */
    c->pc = RC_ADDR(0x000136a4u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_136A8:
    /* 000136a8   2  bra 000136b4 */
    c->pc = RC_ADDR(0x000136a8u);
    rc_step(c, m, 10);
    goto L_136B4;

L_136AA:
    /* 000136aa   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000136aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_136AE:
    /* 000136ae   6  move.b #1,(13,A0) */
    c->pc = RC_ADDR(0x000136aeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x13u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_136B4:
    /* 000136b4   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000136b4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_136B8:
    /* 000136b8   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000136b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136BC:
    /* 000136bc   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x000136bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_136C0:
    /* 000136c0   4  blt 0001361c */
    c->pc = RC_ADDR(0x000136c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1361C; }

L_136C4:
    /* 000136c4   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000136c4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_136C8:
    /* 000136c8   4  bra 00013b2e */
    c->pc = RC_ADDR(0x000136c8u);
    rc_step(c, m, 10);
    goto L_13B2E;

L_136CC:
    /* 000136cc   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000136ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136D0:
    /* 000136d0   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000136d0u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_136D4:
    /* 000136d4   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x000136d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc84u);

L_136D8:
    /* 000136d8   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x000136d8u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_136DA:
    /* 000136da   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000136dau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_136DE:
    /* 000136de   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000136deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_136E2:
    /* 000136e2   4  tst.b (13,A0) */
    c->pc = RC_ADDR(0x000136e2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_136E6:
    /* 000136e6   4  beq 00013b2a */
    c->pc = RC_ADDR(0x000136e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13B2A;

L_136EA:
    /* 000136ea   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000136eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_136EE:
    /* 000136ee   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x000136eeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_136F2:
    /* 000136f2   2  ext.w D0 */
    c->pc = RC_ADDR(0x000136f2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_136F4:
    /* 000136f4   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000136f4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_136F8:
    /* 000136f8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000136f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_136FC:
    /* 000136fc   6  cmpi.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x000136fcu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_13702:
    /* 00013702   4  ble 00013b2a */
    c->pc = RC_ADDR(0x00013702u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13B2A;

L_13706:
    /* 00013706   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013706u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1370A:
    /* 0001370a   4  move.w (A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001370au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1370E:
    /* 0001370e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001370eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13712:
    /* 00013712   6  move.w (2,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013712u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13718:
    /* 00013718   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013718u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1371C:
    /* 0001371c   4  move.b (10,A0),D0 */
    c->pc = RC_ADDR(0x0001371cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13720:
    /* 00013720   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013720u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_13722:
    /* 00013722   4  move.w D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00013722u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13726:
    /* 00013726   4  tst.w (fffffd64,A4) */
    c->pc = RC_ADDR(0x00013726u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x29cu));
    rc_set_nzvc(c, t0, RC_W);

L_1372A:
    /* 0001372a   2  beq 00013738 */
    c->pc = RC_ADDR(0x0001372au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13738;

L_1372C:
    /* 0001372c   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0001372cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13730:
    /* 00013730   4  jsr (00012a84) */
    c->pc = RC_ADDR(0x00013730u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013734u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012a84u);
    return;

L_13734:
    /* 00013734   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013734u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13736:
    /* 00013736   2  bra 0001374a */
    c->pc = RC_ADDR(0x00013736u);
    rc_step(c, m, 10);
    goto L_1374A;

L_13738:
    /* 00013738   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00013738u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1373C:
    /* 0001373c   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0001373cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13740:
    /* 00013740   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00013740u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13744:
    /* 00013744   4  jsr (0001348c) */
    c->pc = RC_ADDR(0x00013744u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013748u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001348cu);
    return;

L_13748:
    /* 00013748   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00013748u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1374A:
    /* 0001374a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001374au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1374E:
    /* 0001374e   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x0001374eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_13752:
    /* 00013752   4  bne 000138a0 */
    c->pc = RC_ADDR(0x00013752u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_138A0;

L_13756:
    /* 00013756   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00013756u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1375A:
    /* 0001375a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001375au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1375E:
    /* 0001375e   4  tst.b (14,A0) */
    c->pc = RC_ADDR(0x0001375eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_set_nzvc(c, t0, RC_B);

L_13762:
    /* 00013762   2  beq 0001377c */
    c->pc = RC_ADDR(0x00013762u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1377C;

L_13764:
    /* 00013764   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013764u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13768:
    /* 00013768   4  subq.b #1,(14,A0) */
    c->pc = RC_ADDR(0x00013768u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x14u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1376C:
    /* 0001376c   4  tst.b (14,A0) */
    c->pc = RC_ADDR(0x0001376cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_set_nzvc(c, t0, RC_B);

L_13770:
    /* 00013770   2  bne 0001377c */
    c->pc = RC_ADDR(0x00013770u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1377C;

L_13772:
    /* 00013772   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00013772u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13776:
    /* 00013776   4  jsr (00012a84) */
    c->pc = RC_ADDR(0x00013776u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001377au));
    rc_depth++;
    c->pc = RC_ADDR(0x00012a84u);
    return;

L_1377A:
    /* 0001377a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001377au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1377C:
    /* 0001377c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001377cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13780:
    /* 00013780   4  move.w (8,A0),D0 */
    c->pc = RC_ADDR(0x00013780u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13784:
    /* 00013784   4  cmp.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013784u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13788:
    /* 00013788   2  bls 00013792 */
    c->pc = RC_ADDR(0x00013788u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_13792;

L_1378A:
    /* 0001378a   6  bset #0,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x0001378au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_13790:
    /* 00013790   2  bra 000137aa */
    c->pc = RC_ADDR(0x00013790u);
    rc_step(c, m, 10);
    goto L_137AA;

L_13792:
    /* 00013792   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013792u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13796:
    /* 00013796   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013796u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1379A:
    /* 0001379a   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0001379au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1379C:
    /* 0001379c   4  move.w (8,A0),D1 */
    c->pc = RC_ADDR(0x0001379cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137A0:
    /* 000137a0   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000137a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_137A2:
    /* 000137a2   2  bcc 000137aa */
    c->pc = RC_ADDR(0x000137a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_137AA;

L_137A4:
    /* 000137a4   6  bset #1,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x000137a4u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_137AA:
    /* 000137aa   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000137aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_137AE:
    /* 000137ae   4  move.w (a,A0),D0 */
    c->pc = RC_ADDR(0x000137aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137B2:
    /* 000137b2   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000137b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_137B6:
    /* 000137b6   2  bls 000137c0 */
    c->pc = RC_ADDR(0x000137b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_137C0;

L_137B8:
    /* 000137b8   6  bset #2,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x000137b8u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_137BE:
    /* 000137be   2  bra 000137d8 */
    c->pc = RC_ADDR(0x000137beu);
    rc_step(c, m, 10);
    goto L_137D8;

L_137C0:
    /* 000137c0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000137c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_137C4:
    /* 000137c4   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000137c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137C8:
    /* 000137c8   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x000137c8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_137CA:
    /* 000137ca   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x000137cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_137CE:
    /* 000137ce   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000137ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_137D0:
    /* 000137d0   2  bcc 000137d8 */
    c->pc = RC_ADDR(0x000137d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_137D8;

L_137D2:
    /* 000137d2   6  bset #3,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x000137d2u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_137D8:
    /* 000137d8   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x000137d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_137DC:
    /* 000137dc   2  bne 000137fa */
    c->pc = RC_ADDR(0x000137dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_137FA;

L_137DE:
    /* 000137de   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000137deu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_137E2:
    /* 000137e2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000137e2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_137E6:
    /* 000137e6   4  jsr (00013430) */
    c->pc = RC_ADDR(0x000137e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000137eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00013430u);
    return;

L_137EA:
    /* 000137ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000137eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_137EC:
    /* 000137ec   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000137ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_137F0:
    /* 000137f0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000137f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_137F4:
    /* 000137f4   4  jsr (000133d4) */
    c->pc = RC_ADDR(0x000137f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000137f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000133d4u);
    return;

L_137F8:
    /* 000137f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000137f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_137FA:
    /* 000137fa   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000137fau);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_137FE:
    /* 000137fe   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000137feu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00013802u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_13802:
    /* 00013802   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013802u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13804:
    /* 00013804   4  cmp.w #1e,D0 */
    c->pc = RC_ADDR(0x00013804u);
    rc_step(c, m, 8);
    t0 = 0x0000001eu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13808:
    /* 00013808   2  bge 00013822 */
    c->pc = RC_ADDR(0x00013808u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13822;

L_1380A:
    /* 0001380a   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001380au);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1380E:
    /* 0001380e   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001380eu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00013812u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_13812:
    /* 00013812   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00013812u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13814:
    /* 00013814   4  add.w #a,D0 */
    c->pc = RC_ADDR(0x00013814u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13818:
    /* 00013818   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1381C:
    /* 0001381c   4  move.b D0,(c,A0) */
    c->pc = RC_ADDR(0x0001381cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13820:
    /* 00013820   2  bra 0001382c */
    c->pc = RC_ADDR(0x00013820u);
    rc_step(c, m, 10);
    goto L_1382C;

L_13822:
    /* 00013822   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013822u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13826:
    /* 00013826   6  move.b #2,(c,A0) */
    c->pc = RC_ADDR(0x00013826u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1382C:
    /* 0001382c   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x0001382cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13830:
    /* 00013830   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013830u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13832:
    /* 00013832   2  bra 0001388c */
    c->pc = RC_ADDR(0x00013832u);
    rc_step(c, m, 10);
    goto L_1388C;

L_13834:
    /* 00013834   4  addq.w #3,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013834u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13838:
    /* 00013838   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013838u);
    rc_step(c, m, 10);
    goto L_1389E;

L_1383A:
    /* 0001383a   4  subq.w #3,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001383au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1383E:
    /* 0001383e   2  bra 0001389e */
    c->pc = RC_ADDR(0x0001383eu);
    rc_step(c, m, 10);
    goto L_1389E;

L_13840:
    /* 00013840   4  addq.w #3,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013840u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13844:
    /* 00013844   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013844u);
    rc_step(c, m, 10);
    goto L_1389E;

L_13846:
    /* 00013846   4  subq.w #3,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013846u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1384A:
    /* 0001384a   2  bra 0001389e */
    c->pc = RC_ADDR(0x0001384au);
    rc_step(c, m, 10);
    goto L_1389E;

L_1384C:
    /* 0001384c   4  addq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001384cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13850:
    /* 00013850   4  addq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013850u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13854:
    /* 00013854   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013854u);
    rc_step(c, m, 10);
    goto L_1389E;

L_13856:
    /* 00013856   4  addq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013856u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1385A:
    /* 0001385a   4  subq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001385au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1385E:
    /* 0001385e   2  bra 0001389e */
    c->pc = RC_ADDR(0x0001385eu);
    rc_step(c, m, 10);
    goto L_1389E;

L_13860:
    /* 00013860   4  subq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013860u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13864:
    /* 00013864   4  addq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013864u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13868:
    /* 00013868   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013868u);
    rc_step(c, m, 10);
    goto L_1389E;

L_1386A:
    /* 0001386a   4  subq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001386au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1386E:
    /* 0001386e   4  subq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001386eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13872:
    /* 00013872   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013872u);
    rc_step(c, m, 10);
    goto L_1389E;

L_13874:
    /* 00013874   2  bra 0001389e */
    c->pc = RC_ADDR(0x00013874u);
    rc_step(c, m, 10);
    goto L_1389E;

L_1388C:
    /* 0001388c   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x0001388cu);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_13892:
    /* 00013892   2  bcc 00013874 */
    c->pc = RC_ADDR(0x00013892u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_13874; }

L_13894:
    /* 00013894   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013894u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13896:
    /* 00013896   4  move.w (00013876),D0 */
    c->pc = RC_ADDR(0x00013896u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00013876u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1389A:
    /* 0001389a   4  jmp (0001389c) */
    c->pc = RC_ADDR(0x0001389au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001389cu) + t4);
    c->pc = t3;
    return;

L_1389E:
    /* 0001389e   2  bra 000138a8 */
    c->pc = RC_ADDR(0x0001389eu);
    rc_step(c, m, 10);
    goto L_138A8;

L_138A0:
    /* 000138a0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000138a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_138A4:
    /* 000138a4   4  subq.b #1,(c,A0) */
    c->pc = RC_ADDR(0x000138a4u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xcu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_138A8:
    /* 000138a8   4  clr.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x000138a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_138AC:
    /* 000138ac   4  move.w (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x000138acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_138B0:
    /* 000138b0   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000138b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138B4:
    /* 000138b4   4  add.w #12,D0 */
    c->pc = RC_ADDR(0x000138b4u);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_138B8:
    /* 000138b8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000138b8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_138BA:
    /* 000138ba   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000138bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138BE:
    /* 000138be   4  add.w #12,D0 */
    c->pc = RC_ADDR(0x000138beu);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_138C2:
    /* 000138c2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000138c2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_138C4:
    /* 000138c4   4  jsr (00013d5e) */
    c->pc = RC_ADDR(0x000138c4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000138c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d5eu);
    return;

L_138C8:
    /* 000138c8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000138c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_138CA:
    /* 000138ca   2  tst.w D0 */
    c->pc = RC_ADDR(0x000138cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_138CC:
    /* 000138cc   2  beq 000138e8 */
    c->pc = RC_ADDR(0x000138ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_138E8;

L_138CE:
    /* 000138ce   6  move.w #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x000138ceu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_138D4:
    /* 000138d4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000138d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_138D8:
    /* 000138d8   6  move.w (6,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000138d8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_138DE:
    /* 000138de   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000138deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_138E2:
    /* 000138e2   6  move.w (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000138e2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_138E8:
    /* 000138e8   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x000138e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_138EC:
    /* 000138ec   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x000138ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_138F0:
    /* 000138f0   2  bra 0001395c */
    c->pc = RC_ADDR(0x000138f0u);
    rc_step(c, m, 10);
    goto L_1395C;

L_138F2:
    /* 000138f2   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000138f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138F6:
    /* 000138f6   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000138f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_138FA:
    /* 000138fa   2  beq 00013958 */
    c->pc = RC_ADDR(0x000138fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13958;

L_138FC:
    /* 000138fc   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000138fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13900:
    /* 00013900   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013900u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13904:
    /* 00013904   4  lea (fffff38f,A4),A0 */
    c->pc = RC_ADDR(0x00013904u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc71u);

L_13908:
    /* 00013908   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013908u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1390C:
    /* 0001390c   2  beq 00013958 */
    c->pc = RC_ADDR(0x0001390cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13958;

L_1390E:
    /* 0001390e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001390eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13912:
    /* 00013912   4  move.w (2,A0),-(A7) */
    c->pc = RC_ADDR(0x00013912u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13916:
    /* 00013916   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013916u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1391A:
    /* 0001391a   2  move.w (A0),-(A7) */
    c->pc = RC_ADDR(0x0001391au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1391C:
    /* 0001391c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001391cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13920:
    /* 00013920   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013920u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13924:
    /* 00013924   4  lea (fffff37e,A4),A0 */
    c->pc = RC_ADDR(0x00013924u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc82u);

L_13928:
    /* 00013928   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00013928u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1392C:
    /* 0001392c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001392cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13930:
    /* 00013930   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013930u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13934:
    /* 00013934   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00013934u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc84u);

L_13938:
    /* 00013938   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00013938u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1393C:
    /* 0001393c   4  move.w #1e,-(A7) */
    c->pc = RC_ADDR(0x0001393cu);
    rc_step(c, m, 12);
    t0 = 0x0000001eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13940:
    /* 00013940   4  move.w #23,-(A7) */
    c->pc = RC_ADDR(0x00013940u);
    rc_step(c, m, 12);
    t0 = 0x00000023u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13944:
    /* 00013944   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00013944u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13948:
    /* 00013948   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00013948u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1394C:
    /* 0001394c   4  jsr (00013cca) */
    c->pc = RC_ADDR(0x0001394cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013950u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013ccau);
    return;

L_13950:
    /* 00013950   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x00013950u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_13954:
    /* 00013954   4  or.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00013954u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13958:
    /* 00013958   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00013958u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1395C:
    /* 0001395c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001395cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13960:
    /* 00013960   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x00013960u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13964:
    /* 00013964   2  blt 000138f2 */
    c->pc = RC_ADDR(0x00013964u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_138F2; }

L_13966:
    /* 00013966   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00013966u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1396A:
    /* 0001396a   4  beq 000139fa */
    c->pc = RC_ADDR(0x0001396au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_139FA;

L_1396E:
    /* 0001396e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001396eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13972:
    /* 00013972   6  move.b #1,(c,A0) */
    c->pc = RC_ADDR(0x00013972u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13978:
    /* 00013978   6  btst #0,(ffffffed,A5) */
    c->pc = RC_ADDR(0x00013978u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x13u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1397E:
    /* 0001397e   2  beq 000139a6 */
    c->pc = RC_ADDR(0x0001397eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_139A6;

L_13980:
    /* 00013980   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013980u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13984:
    /* 00013984   6  move.w (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013984u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1398A:
    /* 0001398a   6  andi.w #c,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001398au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000000cu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13990:
    /* 00013990   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00013990u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_13994:
    /* 00013994   2  bne 000139a4 */
    c->pc = RC_ADDR(0x00013994u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_139A4;

L_13996:
    /* 00013996   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00013996u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1399A:
    /* 0001399a   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0001399au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1399E:
    /* 0001399e   4  jsr (000133d4) */
    c->pc = RC_ADDR(0x0001399eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000139a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000133d4u);
    return;

L_139A2:
    /* 000139a2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000139a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_139A4:
    /* 000139a4   2  bra 000139b8 */
    c->pc = RC_ADDR(0x000139a4u);
    rc_step(c, m, 10);
    goto L_139B8;

L_139A6:
    /* 000139a6   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x000139a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_139AA:
    /* 000139aa   2  bne 000139b8 */
    c->pc = RC_ADDR(0x000139aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_139B8;

L_139AC:
    /* 000139ac   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000139acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_139B0:
    /* 000139b0   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x000139b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_139B4:
    /* 000139b4   4  move.w (A0),(4,A1) */
    c->pc = RC_ADDR(0x000139b4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139B8:
    /* 000139b8   6  btst #1,(ffffffed,A5) */
    c->pc = RC_ADDR(0x000139b8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x13u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_139BE:
    /* 000139be   2  beq 000139e6 */
    c->pc = RC_ADDR(0x000139beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_139E6;

L_139C0:
    /* 000139c0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000139c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_139C4:
    /* 000139c4   6  move.w (6,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000139c4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139CA:
    /* 000139ca   6  andi.w #3,(ffffffea,A5) */
    c->pc = RC_ADDR(0x000139cau);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x00000003u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_139D0:
    /* 000139d0   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x000139d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_139D4:
    /* 000139d4   2  bne 000139e4 */
    c->pc = RC_ADDR(0x000139d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_139E4;

L_139D6:
    /* 000139d6   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000139d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_139DA:
    /* 000139da   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000139dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_139DE:
    /* 000139de   4  jsr (00013430) */
    c->pc = RC_ADDR(0x000139deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000139e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013430u);
    return;

L_139E2:
    /* 000139e2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000139e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_139E4:
    /* 000139e4   2  bra 000139fa */
    c->pc = RC_ADDR(0x000139e4u);
    rc_step(c, m, 10);
    goto L_139FA;

L_139E6:
    /* 000139e6   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x000139e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_139EA:
    /* 000139ea   2  bne 000139fa */
    c->pc = RC_ADDR(0x000139eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_139FA;

L_139EC:
    /* 000139ec   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000139ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_139F0:
    /* 000139f0   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x000139f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_139F4:
    /* 000139f4   6  move.w (2,A0),(6,A1) */
    c->pc = RC_ADDR(0x000139f4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[1] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139FA:
    /* 000139fa   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x000139fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_139FE:
    /* 000139fe   2  bne 00013a20 */
    c->pc = RC_ADDR(0x000139feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13A20;

L_13A00:
    /* 00013a00   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00013a00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_13A04:
    /* 00013a04   2  bne 00013a20 */
    c->pc = RC_ADDR(0x00013a04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13A20;

L_13A06:
    /* 00013a06   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013a06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13A0A:
    /* 00013a0a   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00013a0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_13A0E:
    /* 00013a0e   4  move.w (A0),(4,A1) */
    c->pc = RC_ADDR(0x00013a0eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A12:
    /* 00013a12   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013a12u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13A16:
    /* 00013a16   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00013a16u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_13A1A:
    /* 00013a1a   6  move.w (2,A0),(6,A1) */
    c->pc = RC_ADDR(0x00013a1au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[1] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A20:
    /* 00013a20   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013a20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13A24:
    /* 00013a24   4  move.b (10,A0),D0 */
    c->pc = RC_ADDR(0x00013a24u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13A28:
    /* 00013a28   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013a28u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_13A2A:
    /* 00013a2a   4  cmp.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00013a2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13A2E:
    /* 00013a2e   4  beq 00013aba */
    c->pc = RC_ADDR(0x00013a2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13ABA;

L_13A32:
    /* 00013a32   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013a32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13A36:
    /* 00013a36   4  clr.b (e,A0) */
    c->pc = RC_ADDR(0x00013a36u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13A3A:
    /* 00013a3a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013a3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13A3E:
    /* 00013a3e   6  move.b #1,(11,A0) */
    c->pc = RC_ADDR(0x00013a3eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13A44:
    /* 00013a44   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00013a44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A48:
    /* 00013a48   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013a48u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13A4A:
    /* 00013a4a   2  bra 00013aa8 */
    c->pc = RC_ADDR(0x00013a4au);
    rc_step(c, m, 10);
    goto L_13AA8;

L_13A4C:
    /* 00013a4c   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13A50:
    /* 00013a50   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a50u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A52:
    /* 00013a52   6  move.w #1c,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a52u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A58:
    /* 00013a58   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a58u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A5A:
    /* 00013a5a   6  move.w #10,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a5au);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A60:
    /* 00013a60   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a60u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A62:
    /* 00013a62   6  move.w #4,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a62u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A68:
    /* 00013a68   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a68u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A6A:
    /* 00013a6a   6  move.w #14,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a6au);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A70:
    /* 00013a70   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a70u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A72:
    /* 00013a72   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a72u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A78:
    /* 00013a78   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a78u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A7A:
    /* 00013a7a   6  move.w #18,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a7au);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A80:
    /* 00013a80   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a80u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A82:
    /* 00013a82   6  move.w #c,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a82u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A88:
    /* 00013a88   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a88u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13A8A:
    /* 00013a8a   6  andi.w #fc,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013a8au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x000000fcu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13A90:
    /* 00013a90   2  bra 00013aba */
    c->pc = RC_ADDR(0x00013a90u);
    rc_step(c, m, 10);
    goto L_13ABA;

L_13AA8:
    /* 00013aa8   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00013aa8u);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_13AAE:
    /* 00013aae   2  bcc 00013a8a */
    c->pc = RC_ADDR(0x00013aaeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_13A8A; }

L_13AB0:
    /* 00013ab0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013ab0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13AB2:
    /* 00013ab2   4  move.w (00013a92),D0 */
    c->pc = RC_ADDR(0x00013ab2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00013a92u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AB6:
    /* 00013ab6   4  jmp (00013ab8) */
    c->pc = RC_ADDR(0x00013ab6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00013ab8u) + t4);
    c->pc = t3;
    return;

L_13ABA:
    /* 00013aba   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013abau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13ABE:
    /* 00013abe   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x00013abeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_13AC2:
    /* 00013ac2   2  bne 00013b04 */
    c->pc = RC_ADDR(0x00013ac2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13B04;

L_13AC4:
    /* 00013ac4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013ac4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13AC8:
    /* 00013ac8   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00013ac8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_13ACC:
    /* 00013acc   4  move.b (11,A1),D0 */
    c->pc = RC_ADDR(0x00013accu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13AD0:
    /* 00013ad0   4  add.b D0,(e,A0) */
    c->pc = RC_ADDR(0x00013ad0u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xeu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_B);
    rc_flags_add(c, RC_B, t1, rc_d_get(c, 0, RC_B), t2, 0);
    rc_wr8(c, m, t3, t2);

L_13AD4:
    /* 00013ad4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013ad4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13AD8:
    /* 00013ad8   4  move.b (11,A0),D0 */
    c->pc = RC_ADDR(0x00013ad8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13ADC:
    /* 00013adc   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013adcu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_13ADE:
    /* 00013ade   4  add.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00013adeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13AE2:
    /* 00013ae2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013ae2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13AE6:
    /* 00013ae6   4  tst.b (e,A0) */
    c->pc = RC_ADDR(0x00013ae6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xeu));
    rc_set_nzvc(c, t0, RC_B);

L_13AEA:
    /* 00013aea   2  beq 00013af8 */
    c->pc = RC_ADDR(0x00013aeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13AF8;

L_13AEC:
    /* 00013aec   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013aecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13AF0:
    /* 00013af0   6  cmpi.b #2,(e,A0) */
    c->pc = RC_ADDR(0x00013af0u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0xeu));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_13AF6:
    /* 00013af6   2  bne 00013b04 */
    c->pc = RC_ADDR(0x00013af6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13B04;

L_13AF8:
    /* 00013af8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013af8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13AFC:
    /* 00013afc   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00013afcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_13B00:
    /* 00013b00   4  neg.b (11,A0) */
    c->pc = RC_ADDR(0x00013b00u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x11u);
    t1 = rc_rd8(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_B, 0u, t1, t2, 0);
    rc_wr8(c, m, t3, t2);

L_13B04:
    /* 00013b04   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B08:
    /* 00013b08   6  move.b (ffffffef,A5),(d,A0) */
    c->pc = RC_ADDR(0x00013b08u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x11u));
    rc_wr8(c, m, (c->a[0] + 0xdu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13B0E:
    /* 00013b0e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B12:
    /* 00013b12   6  move.b (ffffffeb,A5),(10,A0) */
    c->pc = RC_ADDR(0x00013b12u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x15u));
    rc_wr8(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13B18:
    /* 00013b18   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B1C:
    /* 00013b1c   4  move.w (fffffffa,A5),(A0) */
    c->pc = RC_ADDR(0x00013b1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B20:
    /* 00013b20   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B24:
    /* 00013b24   6  move.w (fffffff8,A5),(2,A0) */
    c->pc = RC_ADDR(0x00013b24u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B2A:
    /* 00013b2a   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00013b2au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13B2E:
    /* 00013b2e   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013b2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B32:
    /* 00013b32   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x00013b32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13B36:
    /* 00013b36   4  blt 000136cc */
    c->pc = RC_ADDR(0x00013b36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_136CC; }

L_13B3A:
    /* 00013b3a   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00013b3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_13B3E:
    /* 00013b3e   2  beq 00013b4c */
    c->pc = RC_ADDR(0x00013b3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13B4C;

L_13B40:
    /* 00013b40   4  jsr (00016df8) */
    c->pc = RC_ADDR(0x00013b40u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013b44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016df8u);
    return;

L_13B44:
    /* 00013b44   6  move.w #1,(fffffd4c,A4) */
    c->pc = RC_ADDR(0x00013b44u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B4A:
    /* 00013b4a   2  bra 00013b50 */
    c->pc = RC_ADDR(0x00013b4au);
    rc_step(c, m, 10);
    goto L_13B50;

L_13B4C:
    /* 00013b4c   4  jsr (00016e3e) */
    c->pc = RC_ADDR(0x00013b4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013b50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016e3eu);
    return;

L_13B50:
    /* 00013b50   4  bra 000135e4 */
    c->pc = RC_ADDR(0x00013b50u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_135E4;

}
