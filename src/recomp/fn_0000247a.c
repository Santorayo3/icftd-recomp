/* fn_0000247a - 1684 byte(s), 471 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000247a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000247au: goto L_247A;
    case 0x0000247eu: goto L_247E;
    case 0x00002482u: goto L_2482;
    case 0x00002486u: goto L_2486;
    case 0x0000248au: goto L_248A;
    case 0x0000248eu: goto L_248E;
    case 0x00002494u: goto L_2494;
    case 0x00002498u: goto L_2498;
    case 0x0000249cu: goto L_249C;
    case 0x000024a0u: goto L_24A0;
    case 0x000024a6u: goto L_24A6;
    case 0x000024acu: goto L_24AC;
    case 0x000024b0u: goto L_24B0;
    case 0x000024b6u: goto L_24B6;
    case 0x000024bau: goto L_24BA;
    case 0x000024beu: goto L_24BE;
    case 0x000024c0u: goto L_24C0;
    case 0x000024c4u: goto L_24C4;
    case 0x000024c8u: goto L_24C8;
    case 0x000024ccu: goto L_24CC;
    case 0x000024d2u: goto L_24D2;
    case 0x000024d4u: goto L_24D4;
    case 0x000024dau: goto L_24DA;
    case 0x000024dcu: goto L_24DC;
    case 0x000024e2u: goto L_24E2;
    case 0x000024e4u: goto L_24E4;
    case 0x000024e8u: goto L_24E8;
    case 0x000024eeu: goto L_24EE;
    case 0x000024f4u: goto L_24F4;
    case 0x000024f6u: goto L_24F6;
    case 0x000024fau: goto L_24FA;
    case 0x000024feu: goto L_24FE;
    case 0x00002500u: goto L_2500;
    case 0x00002502u: goto L_2502;
    case 0x00002504u: goto L_2504;
    case 0x00002508u: goto L_2508;
    case 0x0000250eu: goto L_250E;
    case 0x00002514u: goto L_2514;
    case 0x00002516u: goto L_2516;
    case 0x0000251au: goto L_251A;
    case 0x0000251cu: goto L_251C;
    case 0x00002520u: goto L_2520;
    case 0x00002524u: goto L_2524;
    case 0x00002528u: goto L_2528;
    case 0x0000252au: goto L_252A;
    case 0x0000252eu: goto L_252E;
    case 0x00002532u: goto L_2532;
    case 0x00002536u: goto L_2536;
    case 0x0000253au: goto L_253A;
    case 0x00002540u: goto L_2540;
    case 0x00002546u: goto L_2546;
    case 0x00002548u: goto L_2548;
    case 0x0000254au: goto L_254A;
    case 0x0000254cu: goto L_254C;
    case 0x00002550u: goto L_2550;
    case 0x00002554u: goto L_2554;
    case 0x00002558u: goto L_2558;
    case 0x0000255cu: goto L_255C;
    case 0x00002562u: goto L_2562;
    case 0x00002566u: goto L_2566;
    case 0x0000256au: goto L_256A;
    case 0x0000256eu: goto L_256E;
    case 0x00002572u: goto L_2572;
    case 0x00002574u: goto L_2574;
    case 0x00002578u: goto L_2578;
    case 0x0000257au: goto L_257A;
    case 0x0000257cu: goto L_257C;
    case 0x00002580u: goto L_2580;
    case 0x00002584u: goto L_2584;
    case 0x00002588u: goto L_2588;
    case 0x0000258cu: goto L_258C;
    case 0x0000258eu: goto L_258E;
    case 0x00002592u: goto L_2592;
    case 0x00002594u: goto L_2594;
    case 0x00002596u: goto L_2596;
    case 0x0000259au: goto L_259A;
    case 0x0000259eu: goto L_259E;
    case 0x000025a2u: goto L_25A2;
    case 0x000025a6u: goto L_25A6;
    case 0x000025a8u: goto L_25A8;
    case 0x000025acu: goto L_25AC;
    case 0x000025aeu: goto L_25AE;
    case 0x000025b0u: goto L_25B0;
    case 0x000025b4u: goto L_25B4;
    case 0x000025b8u: goto L_25B8;
    case 0x000025bcu: goto L_25BC;
    case 0x000025beu: goto L_25BE;
    case 0x000025c2u: goto L_25C2;
    case 0x000025c6u: goto L_25C6;
    case 0x000025c8u: goto L_25C8;
    case 0x000025cau: goto L_25CA;
    case 0x000025ceu: goto L_25CE;
    case 0x000025d2u: goto L_25D2;
    case 0x000025d6u: goto L_25D6;
    case 0x000025d8u: goto L_25D8;
    case 0x000025dau: goto L_25DA;
    case 0x000025deu: goto L_25DE;
    case 0x000025e2u: goto L_25E2;
    case 0x000025e6u: goto L_25E6;
    case 0x000025eau: goto L_25EA;
    case 0x000025ecu: goto L_25EC;
    case 0x000025f2u: goto L_25F2;
    case 0x000025f4u: goto L_25F4;
    case 0x000025f8u: goto L_25F8;
    case 0x000025fcu: goto L_25FC;
    case 0x000025feu: goto L_25FE;
    case 0x00002600u: goto L_2600;
    case 0x00002604u: goto L_2604;
    case 0x00002608u: goto L_2608;
    case 0x0000260cu: goto L_260C;
    case 0x00002610u: goto L_2610;
    case 0x00002614u: goto L_2614;
    case 0x00002616u: goto L_2616;
    case 0x0000261au: goto L_261A;
    case 0x0000261cu: goto L_261C;
    case 0x00002620u: goto L_2620;
    case 0x00002622u: goto L_2622;
    case 0x00002624u: goto L_2624;
    case 0x00002628u: goto L_2628;
    case 0x0000262au: goto L_262A;
    case 0x0000262eu: goto L_262E;
    case 0x00002630u: goto L_2630;
    case 0x00002632u: goto L_2632;
    case 0x00002636u: goto L_2636;
    case 0x0000263cu: goto L_263C;
    case 0x00002640u: goto L_2640;
    case 0x00002642u: goto L_2642;
    case 0x00002644u: goto L_2644;
    case 0x00002648u: goto L_2648;
    case 0x0000264cu: goto L_264C;
    case 0x00002650u: goto L_2650;
    case 0x00002652u: goto L_2652;
    case 0x00002656u: goto L_2656;
    case 0x00002658u: goto L_2658;
    case 0x0000265cu: goto L_265C;
    case 0x0000265eu: goto L_265E;
    case 0x00002662u: goto L_2662;
    case 0x00002666u: goto L_2666;
    case 0x0000266au: goto L_266A;
    case 0x0000266cu: goto L_266C;
    case 0x0000266eu: goto L_266E;
    case 0x00002672u: goto L_2672;
    case 0x00002678u: goto L_2678;
    case 0x0000267au: goto L_267A;
    case 0x0000267eu: goto L_267E;
    case 0x00002682u: goto L_2682;
    case 0x00002686u: goto L_2686;
    case 0x00002688u: goto L_2688;
    case 0x0000268au: goto L_268A;
    case 0x0000268eu: goto L_268E;
    case 0x00002694u: goto L_2694;
    case 0x00002698u: goto L_2698;
    case 0x0000269au: goto L_269A;
    case 0x0000269cu: goto L_269C;
    case 0x0000269eu: goto L_269E;
    case 0x000026a2u: goto L_26A2;
    case 0x000026a6u: goto L_26A6;
    case 0x000026aau: goto L_26AA;
    case 0x000026aeu: goto L_26AE;
    case 0x000026b0u: goto L_26B0;
    case 0x000026b4u: goto L_26B4;
    case 0x000026b6u: goto L_26B6;
    case 0x000026b8u: goto L_26B8;
    case 0x000026bcu: goto L_26BC;
    case 0x000026c2u: goto L_26C2;
    case 0x000026c6u: goto L_26C6;
    case 0x000026cau: goto L_26CA;
    case 0x000026ceu: goto L_26CE;
    case 0x000026d2u: goto L_26D2;
    case 0x000026d4u: goto L_26D4;
    case 0x000026d8u: goto L_26D8;
    case 0x000026dau: goto L_26DA;
    case 0x000026dcu: goto L_26DC;
    case 0x000026e0u: goto L_26E0;
    case 0x000026e6u: goto L_26E6;
    case 0x000026eau: goto L_26EA;
    case 0x000026ecu: goto L_26EC;
    case 0x000026eeu: goto L_26EE;
    case 0x000026f2u: goto L_26F2;
    case 0x000026f8u: goto L_26F8;
    case 0x000026fcu: goto L_26FC;
    case 0x00002700u: goto L_2700;
    case 0x00002702u: goto L_2702;
    case 0x00002706u: goto L_2706;
    case 0x00002708u: goto L_2708;
    case 0x0000270eu: goto L_270E;
    case 0x00002710u: goto L_2710;
    case 0x00002714u: goto L_2714;
    case 0x0000271au: goto L_271A;
    case 0x0000271eu: goto L_271E;
    case 0x00002722u: goto L_2722;
    case 0x00002726u: goto L_2726;
    case 0x00002728u: goto L_2728;
    case 0x0000272cu: goto L_272C;
    case 0x0000272eu: goto L_272E;
    case 0x00002730u: goto L_2730;
    case 0x00002734u: goto L_2734;
    case 0x0000273au: goto L_273A;
    case 0x0000273eu: goto L_273E;
    case 0x00002740u: goto L_2740;
    case 0x00002742u: goto L_2742;
    case 0x00002746u: goto L_2746;
    case 0x0000274cu: goto L_274C;
    case 0x00002750u: goto L_2750;
    case 0x00002752u: goto L_2752;
    case 0x00002758u: goto L_2758;
    case 0x0000275cu: goto L_275C;
    case 0x00002760u: goto L_2760;
    case 0x00002764u: goto L_2764;
    case 0x00002768u: goto L_2768;
    case 0x0000276au: goto L_276A;
    case 0x0000276cu: goto L_276C;
    case 0x00002770u: goto L_2770;
    case 0x00002774u: goto L_2774;
    case 0x00002778u: goto L_2778;
    case 0x0000277cu: goto L_277C;
    case 0x00002780u: goto L_2780;
    case 0x00002782u: goto L_2782;
    case 0x00002786u: goto L_2786;
    case 0x00002788u: goto L_2788;
    case 0x0000278au: goto L_278A;
    case 0x0000278eu: goto L_278E;
    case 0x00002794u: goto L_2794;
    case 0x00002798u: goto L_2798;
    case 0x0000279cu: goto L_279C;
    case 0x000027a0u: goto L_27A0;
    case 0x000027a4u: goto L_27A4;
    case 0x000027a6u: goto L_27A6;
    case 0x000027aau: goto L_27AA;
    case 0x000027acu: goto L_27AC;
    case 0x000027aeu: goto L_27AE;
    case 0x000027b2u: goto L_27B2;
    case 0x000027b8u: goto L_27B8;
    case 0x000027bcu: goto L_27BC;
    case 0x000027beu: goto L_27BE;
    case 0x000027c0u: goto L_27C0;
    case 0x000027c4u: goto L_27C4;
    case 0x000027cau: goto L_27CA;
    case 0x000027ceu: goto L_27CE;
    case 0x000027d2u: goto L_27D2;
    case 0x000027d6u: goto L_27D6;
    case 0x000027dau: goto L_27DA;
    case 0x000027dcu: goto L_27DC;
    case 0x000027e0u: goto L_27E0;
    case 0x000027e2u: goto L_27E2;
    case 0x000027e4u: goto L_27E4;
    case 0x000027e8u: goto L_27E8;
    case 0x000027eeu: goto L_27EE;
    case 0x000027f2u: goto L_27F2;
    case 0x000027f6u: goto L_27F6;
    case 0x000027fau: goto L_27FA;
    case 0x000027feu: goto L_27FE;
    case 0x00002800u: goto L_2800;
    case 0x00002804u: goto L_2804;
    case 0x00002806u: goto L_2806;
    case 0x00002808u: goto L_2808;
    case 0x0000280cu: goto L_280C;
    case 0x00002812u: goto L_2812;
    case 0x00002816u: goto L_2816;
    case 0x0000281au: goto L_281A;
    case 0x0000281eu: goto L_281E;
    case 0x00002822u: goto L_2822;
    case 0x00002824u: goto L_2824;
    case 0x00002828u: goto L_2828;
    case 0x0000282au: goto L_282A;
    case 0x0000282cu: goto L_282C;
    case 0x00002830u: goto L_2830;
    case 0x00002836u: goto L_2836;
    case 0x0000283au: goto L_283A;
    case 0x0000283eu: goto L_283E;
    case 0x00002842u: goto L_2842;
    case 0x00002846u: goto L_2846;
    case 0x00002848u: goto L_2848;
    case 0x0000284cu: goto L_284C;
    case 0x0000284eu: goto L_284E;
    case 0x00002850u: goto L_2850;
    case 0x00002854u: goto L_2854;
    case 0x0000285au: goto L_285A;
    case 0x0000285eu: goto L_285E;
    case 0x00002862u: goto L_2862;
    case 0x00002864u: goto L_2864;
    case 0x00002868u: goto L_2868;
    case 0x0000286au: goto L_286A;
    case 0x00002870u: goto L_2870;
    case 0x00002872u: goto L_2872;
    case 0x00002876u: goto L_2876;
    case 0x0000287cu: goto L_287C;
    case 0x00002880u: goto L_2880;
    case 0x00002884u: goto L_2884;
    case 0x00002888u: goto L_2888;
    case 0x0000288cu: goto L_288C;
    case 0x0000288eu: goto L_288E;
    case 0x00002892u: goto L_2892;
    case 0x00002894u: goto L_2894;
    case 0x0000289au: goto L_289A;
    case 0x0000289eu: goto L_289E;
    case 0x000028a2u: goto L_28A2;
    case 0x000028a6u: goto L_28A6;
    case 0x000028aau: goto L_28AA;
    case 0x000028aeu: goto L_28AE;
    case 0x000028b0u: goto L_28B0;
    case 0x000028b4u: goto L_28B4;
    case 0x000028b6u: goto L_28B6;
    case 0x000028b8u: goto L_28B8;
    case 0x000028bcu: goto L_28BC;
    case 0x000028c2u: goto L_28C2;
    case 0x000028c6u: goto L_28C6;
    case 0x000028cau: goto L_28CA;
    case 0x000028ceu: goto L_28CE;
    case 0x000028d0u: goto L_28D0;
    case 0x000028d2u: goto L_28D2;
    case 0x000028d6u: goto L_28D6;
    case 0x000028dcu: goto L_28DC;
    case 0x000028e0u: goto L_28E0;
    case 0x000028e4u: goto L_28E4;
    case 0x000028e8u: goto L_28E8;
    case 0x000028eau: goto L_28EA;
    case 0x000028eeu: goto L_28EE;
    case 0x000028f0u: goto L_28F0;
    case 0x000028f4u: goto L_28F4;
    case 0x000028f8u: goto L_28F8;
    case 0x000028fau: goto L_28FA;
    case 0x000028fcu: goto L_28FC;
    case 0x00002900u: goto L_2900;
    case 0x00002906u: goto L_2906;
    case 0x0000290au: goto L_290A;
    case 0x0000290cu: goto L_290C;
    case 0x0000290eu: goto L_290E;
    case 0x00002912u: goto L_2912;
    case 0x00002918u: goto L_2918;
    case 0x0000291cu: goto L_291C;
    case 0x00002920u: goto L_2920;
    case 0x00002922u: goto L_2922;
    case 0x00002924u: goto L_2924;
    case 0x00002928u: goto L_2928;
    case 0x0000292eu: goto L_292E;
    case 0x00002932u: goto L_2932;
    case 0x00002936u: goto L_2936;
    case 0x0000293au: goto L_293A;
    case 0x0000293cu: goto L_293C;
    case 0x0000293eu: goto L_293E;
    case 0x00002940u: goto L_2940;
    case 0x00002942u: goto L_2942;
    case 0x00002948u: goto L_2948;
    case 0x0000294cu: goto L_294C;
    case 0x0000294eu: goto L_294E;
    case 0x00002952u: goto L_2952;
    case 0x00002958u: goto L_2958;
    case 0x0000295cu: goto L_295C;
    case 0x00002962u: goto L_2962;
    case 0x00002966u: goto L_2966;
    case 0x00002968u: goto L_2968;
    case 0x0000296cu: goto L_296C;
    case 0x00002972u: goto L_2972;
    case 0x00002976u: goto L_2976;
    case 0x00002978u: goto L_2978;
    case 0x0000297cu: goto L_297C;
    case 0x0000297eu: goto L_297E;
    case 0x00002982u: goto L_2982;
    case 0x00002988u: goto L_2988;
    case 0x0000298cu: goto L_298C;
    case 0x0000298eu: goto L_298E;
    case 0x00002992u: goto L_2992;
    case 0x00002994u: goto L_2994;
    case 0x00002998u: goto L_2998;
    case 0x0000299au: goto L_299A;
    case 0x0000299eu: goto L_299E;
    case 0x000029a0u: goto L_29A0;
    case 0x000029a4u: goto L_29A4;
    case 0x000029a8u: goto L_29A8;
    case 0x000029aau: goto L_29AA;
    case 0x000029aeu: goto L_29AE;
    case 0x000029b4u: goto L_29B4;
    case 0x000029b8u: goto L_29B8;
    case 0x000029bcu: goto L_29BC;
    case 0x000029c0u: goto L_29C0;
    case 0x000029c4u: goto L_29C4;
    case 0x000029c8u: goto L_29C8;
    case 0x000029ccu: goto L_29CC;
    case 0x000029ceu: goto L_29CE;
    case 0x000029d2u: goto L_29D2;
    case 0x000029d6u: goto L_29D6;
    case 0x000029d8u: goto L_29D8;
    case 0x000029dcu: goto L_29DC;
    case 0x000029e0u: goto L_29E0;
    case 0x000029e4u: goto L_29E4;
    case 0x000029eau: goto L_29EA;
    case 0x000029eeu: goto L_29EE;
    case 0x000029f0u: goto L_29F0;
    case 0x000029f2u: goto L_29F2;
    case 0x000029f6u: goto L_29F6;
    case 0x000029fcu: goto L_29FC;
    case 0x00002a02u: goto L_2A02;
    case 0x00002a04u: goto L_2A04;
    case 0x00002a08u: goto L_2A08;
    case 0x00002a0au: goto L_2A0A;
    case 0x00002a0eu: goto L_2A0E;
    case 0x00002a10u: goto L_2A10;
    case 0x00002a12u: goto L_2A12;
    case 0x00002a16u: goto L_2A16;
    case 0x00002a18u: goto L_2A18;
    case 0x00002a1cu: goto L_2A1C;
    case 0x00002a1eu: goto L_2A1E;
    case 0x00002a20u: goto L_2A20;
    case 0x00002a24u: goto L_2A24;
    case 0x00002a2au: goto L_2A2A;
    case 0x00002a2cu: goto L_2A2C;
    case 0x00002a30u: goto L_2A30;
    case 0x00002a32u: goto L_2A32;
    case 0x00002a34u: goto L_2A34;
    case 0x00002a38u: goto L_2A38;
    case 0x00002a3eu: goto L_2A3E;
    case 0x00002a44u: goto L_2A44;
    case 0x00002a48u: goto L_2A48;
    case 0x00002a4au: goto L_2A4A;
    case 0x00002a4cu: goto L_2A4C;
    case 0x00002a50u: goto L_2A50;
    case 0x00002a56u: goto L_2A56;
    case 0x00002a58u: goto L_2A58;
    case 0x00002a5cu: goto L_2A5C;
    case 0x00002a5eu: goto L_2A5E;
    case 0x00002a60u: goto L_2A60;
    case 0x00002a64u: goto L_2A64;
    case 0x00002a6au: goto L_2A6A;
    case 0x00002a70u: goto L_2A70;
    case 0x00002a74u: goto L_2A74;
    case 0x00002a76u: goto L_2A76;
    case 0x00002a78u: goto L_2A78;
    case 0x00002a7cu: goto L_2A7C;
    case 0x00002a82u: goto L_2A82;
    case 0x00002a88u: goto L_2A88;
    case 0x00002a8cu: goto L_2A8C;
    case 0x00002a8eu: goto L_2A8E;
    case 0x00002a90u: goto L_2A90;
    case 0x00002a94u: goto L_2A94;
    case 0x00002a98u: goto L_2A98;
    case 0x00002a9cu: goto L_2A9C;
    case 0x00002a9eu: goto L_2A9E;
    case 0x00002aa2u: goto L_2AA2;
    case 0x00002aa4u: goto L_2AA4;
    case 0x00002aa6u: goto L_2AA6;
    case 0x00002aaau: goto L_2AAA;
    case 0x00002aacu: goto L_2AAC;
    case 0x00002ab0u: goto L_2AB0;
    case 0x00002ab2u: goto L_2AB2;
    case 0x00002ab4u: goto L_2AB4;
    case 0x00002abau: goto L_2ABA;
    case 0x00002abeu: goto L_2ABE;
    case 0x00002ac2u: goto L_2AC2;
    case 0x00002ac6u: goto L_2AC6;
    case 0x00002ac8u: goto L_2AC8;
    case 0x00002acau: goto L_2ACA;
    case 0x00002aceu: goto L_2ACE;
    case 0x00002ad2u: goto L_2AD2;
    case 0x00002ad4u: goto L_2AD4;
    case 0x00002ad8u: goto L_2AD8;
    case 0x00002adau: goto L_2ADA;
    case 0x00002ae0u: goto L_2AE0;
    case 0x00002ae4u: goto L_2AE4;
    case 0x00002ae8u: goto L_2AE8;
    case 0x00002aeau: goto L_2AEA;
    case 0x00002aeeu: goto L_2AEE;
    case 0x00002af0u: goto L_2AF0;
    case 0x00002af4u: goto L_2AF4;
    case 0x00002af8u: goto L_2AF8;
    case 0x00002afcu: goto L_2AFC;
    case 0x00002afeu: goto L_2AFE;
    case 0x00002b02u: goto L_2B02;
    case 0x00002b04u: goto L_2B04;
    case 0x00002b08u: goto L_2B08;
    case 0x00002b0cu: goto L_2B0C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_247A:
    /* 0000247a   4  link.w A5,#ffffff66 */
    c->pc = 0x0000247au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x9au;

L_247E:
    /* 0000247e   4  clr.w (ffffcf86,A4) */
    c->pc = 0x0000247eu;
    rc_wr16(c, m, (c->a[4] - 0x307au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2482:
    /* 00002482   4  jsr (0000334a) */
    c->pc = 0x00002482u;
    rc_push32(c, m, 0x00002486u);
    rc_depth++;
    c->pc = 0x0000334au;
    return;

L_2486:
    /* 00002486   4  clr.w (ffff8b54,A4) */
    c->pc = 0x00002486u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_248A:
    /* 0000248a   4  clr.w (ffff83d6,A4) */
    c->pc = 0x0000248au;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_248E:
    /* 0000248e   6  move.l (8,A5),(ffffcf7c,A4) */
    c->pc = 0x0000248eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x3084u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2494:
    /* 00002494   4  clr.w (ffffcf84,A4) */
    c->pc = 0x00002494u;
    rc_wr16(c, m, (c->a[4] - 0x307cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2498:
    /* 00002498   4  clr.w (fffffffa,A5) */
    c->pc = 0x00002498u;
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_249C:
    /* 0000249c   4  clr.w (ffffcf80,A4) */
    c->pc = 0x0000249cu;
    rc_wr16(c, m, (c->a[4] - 0x3080u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24A0:
    /* 000024a0   6  move.w #1,(ffffff68,A5) */
    c->pc = 0x000024a0u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x98u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24A6:
    /* 000024a6   6  move.w #1,(ffffff84,A5) */
    c->pc = 0x000024a6u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24AC:
    /* 000024ac   4  clr.w (ffffff82,A5) */
    c->pc = 0x000024acu;
    rc_wr16(c, m, (c->a[5] - 0x7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24B0:
    /* 000024b0   6  move.w #1,(ffffff80,A5) */
    c->pc = 0x000024b0u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24B6:
    /* 000024b6   4  movea.l (8,A5),A0 */
    c->pc = 0x000024b6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_24BA:
    /* 000024ba   4  move.b (1,A0),D0 */
    c->pc = 0x000024bau;
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_24BE:
    /* 000024be   2  ext.w D0 */
    c->pc = 0x000024beu;
    rc_ext_w(c, 0);

L_24C0:
    /* 000024c0   4  move.w D0,(fffffffc,A5) */
    c->pc = 0x000024c0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24C4:
    /* 000024c4   4  clr.w (ffffff7e,A5) */
    c->pc = 0x000024c4u;
    rc_wr16(c, m, (c->a[5] - 0x82u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24C8:
    /* 000024c8   4  clr.w (ffffff66,A5) */
    c->pc = 0x000024c8u;
    rc_wr16(c, m, (c->a[5] - 0x9au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24CC:
    /* 000024cc   6  cmpi.w #17,(ffffefe4,A4) */
    c->pc = 0x000024ccu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_24D2:
    /* 000024d2   2  bne 000024ee */
    c->pc = 0x000024d2u;
    if (rc_cond(c, 6)) goto L_24EE;

L_24D4:
    /* 000024d4   6  cmpi.w #1,(fffffffc,A5) */
    c->pc = 0x000024d4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_24DA:
    /* 000024da   2  ble 000024ee */
    c->pc = 0x000024dau;
    if (rc_cond(c, 15)) goto L_24EE;

L_24DC:
    /* 000024dc   6  cmpi.b #22,(fffff0ba,A4) */
    c->pc = 0x000024dcu;
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_24E2:
    /* 000024e2   2  beq 000024ee */
    c->pc = 0x000024e2u;
    if (rc_cond(c, 7)) goto L_24EE;

L_24E4:
    /* 000024e4   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x000024e4u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_24E8:
    /* 000024e8   6  move.w #1,(ffffff7e,A5) */
    c->pc = 0x000024e8u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_24EE:
    /* 000024ee   6  cmpi.w #1f,(ffffefe4,A4) */
    c->pc = 0x000024eeu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x0000001fu);

L_24F4:
    /* 000024f4   2  bne 0000250e */
    c->pc = 0x000024f4u;
    if (rc_cond(c, 6)) goto L_250E;

L_24F6:
    /* 000024f6   4  move.w #e9,-(A7) */
    c->pc = 0x000024f6u;
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_24FA:
    /* 000024fa   4  jsr (ffff8086,A4) */
    c->pc = 0x000024fau;
    /* vector 22 */
    rc_push32(c, m, 0x000024feu);
    rc_depth++;
    c->pc = 0x0000711cu;
    return;

L_24FE:
    /* 000024fe   2  addq.w #2,A7 */
    c->pc = 0x000024feu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2500:
    /* 00002500   2  tst.w D0 */
    c->pc = 0x00002500u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2502:
    /* 00002502   2  beq 0000250e */
    c->pc = 0x00002502u;
    if (rc_cond(c, 7)) goto L_250E;

L_2504:
    /* 00002504   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x00002504u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2508:
    /* 00002508   6  move.w #1,(ffffff66,A5) */
    c->pc = 0x00002508u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_250E:
    /* 0000250e   6  cmpi.w #1,(fffffffc,A5) */
    c->pc = 0x0000250eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_2514:
    /* 00002514   2  bne 0000251c */
    c->pc = 0x00002514u;
    if (rc_cond(c, 6)) goto L_251C;

L_2516:
    /* 00002516   4  clr.w (ffffff80,A5) */
    c->pc = 0x00002516u;
    rc_wr16(c, m, (c->a[5] - 0x80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_251A:
    /* 0000251a   2  bra 0000252e */
    c->pc = 0x0000251au;
    goto L_252E;

L_251C:
    /* 0000251c   4  move.w #ffff,-(A7) */
    c->pc = 0x0000251cu;
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2520:
    /* 00002520   4  move.l (c,A5),-(A7) */
    c->pc = 0x00002520u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2524:
    /* 00002524   4  jsr (00005eac) */
    c->pc = 0x00002524u;
    rc_push32(c, m, 0x00002528u);
    rc_depth++;
    c->pc = 0x00005eacu;
    return;

L_2528:
    /* 00002528   2  addq.w #6,A7 */
    c->pc = 0x00002528u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_252A:
    /* 0000252a   4  clr.w (ffffcf48,A4) */
    c->pc = 0x0000252au;
    rc_wr16(c, m, (c->a[4] - 0x30b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_252E:
    /* 0000252e   4  tst.w (ffffff84,A5) */
    c->pc = 0x0000252eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x7cu));
    rc_set_nzvc(c, t0, RC_W);

L_2532:
    /* 00002532   4  beq 00002b0c */
    c->pc = 0x00002532u;
    if (rc_cond(c, 7)) goto L_2B0C;

L_2536:
    /* 00002536   4  movea.l (8,A5),A0 */
    c->pc = 0x00002536u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_253A:
    /* 0000253a   6  move.l (2,A0),(ffffff8a,A5) */
    c->pc = 0x0000253au;
    t0 = rc_rd32(c, m, (c->a[0] + 0x2u));
    rc_wr32(c, m, (c->a[5] - 0x76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2540:
    /* 00002540   6  move.w #96,(fffff272,A4) */
    c->pc = 0x00002540u;
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0xd8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2546:
    /* 00002546   2  clr.w -(A7) */
    c->pc = 0x00002546u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2548:
    /* 00002548   2  clr.l -(A7) */
    c->pc = 0x00002548u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_254A:
    /* 0000254a   2  clr.l -(A7) */
    c->pc = 0x0000254au;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_254C:
    /* 0000254c   4  movea.l (c,A5),A0 */
    c->pc = 0x0000254cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_2550:
    /* 00002550   4  move.l (2c,A0),-(A7) */
    c->pc = 0x00002550u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2554:
    /* 00002554   4  jsr (ffff8278,A4) */
    c->pc = 0x00002554u;
    /* vector 105 */
    rc_push32(c, m, 0x00002558u);
    rc_depth++;
    c->pc = 0x0001fa02u;
    return;

L_2558:
    /* 00002558   4  lea (e,A7),A7 */
    c->pc = 0x00002558u;
    c->a[7] = (c->a[7] + 0xeu);

L_255C:
    /* 0000255c   6  move.w (fffffffc,A5),(fffffff4,A5) */
    c->pc = 0x0000255cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2562:
    /* 00002562   4  clr.w (fffffffe,A5) */
    c->pc = 0x00002562u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2566:
    /* 00002566   4  bra 000029b8 */
    c->pc = 0x00002566u;
    goto L_29B8;

L_256A:
    /* 0000256a   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x0000256au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_256E:
    /* 0000256e   4  move.b (4,A0),D0 */
    c->pc = 0x0000256eu;
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2572:
    /* 00002572   2  ext.w D0 */
    c->pc = 0x00002572u;
    rc_ext_w(c, 0);

L_2574:
    /* 00002574   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x00002574u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2578:
    /* 00002578   2  ext.l D1 */
    c->pc = 0x00002578u;
    rc_ext_l(c, 1);

L_257A:
    /* 0000257a   2  asl.l #1,D1 */
    c->pc = 0x0000257au;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_257C:
    /* 0000257c   4  lea (ffffffde,A5),A0 */
    c->pc = 0x0000257cu;
    c->a[0] = (c->a[5] - 0x22u);

L_2580:
    /* 00002580   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x00002580u;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2584:
    /* 00002584   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x00002584u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_2588:
    /* 00002588   4  move.b (5,A0),D0 */
    c->pc = 0x00002588u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_258C:
    /* 0000258c   2  ext.w D0 */
    c->pc = 0x0000258cu;
    rc_ext_w(c, 0);

L_258E:
    /* 0000258e   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x0000258eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2592:
    /* 00002592   2  ext.l D1 */
    c->pc = 0x00002592u;
    rc_ext_l(c, 1);

L_2594:
    /* 00002594   2  asl.l #1,D1 */
    c->pc = 0x00002594u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_2596:
    /* 00002596   4  lea (ffffffa2,A5),A0 */
    c->pc = 0x00002596u;
    c->a[0] = (c->a[5] - 0x5eu);

L_259A:
    /* 0000259a   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x0000259au;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_259E:
    /* 0000259e   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x0000259eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_25A2:
    /* 000025a2   4  move.b (6,A0),D0 */
    c->pc = 0x000025a2u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_25A6:
    /* 000025a6   2  ext.w D0 */
    c->pc = 0x000025a6u;
    rc_ext_w(c, 0);

L_25A8:
    /* 000025a8   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x000025a8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_25AC:
    /* 000025ac   2  ext.l D1 */
    c->pc = 0x000025acu;
    rc_ext_l(c, 1);

L_25AE:
    /* 000025ae   2  asl.l #1,D1 */
    c->pc = 0x000025aeu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_25B0:
    /* 000025b0   4  lea (ffffffca,A5),A0 */
    c->pc = 0x000025b0u;
    c->a[0] = (c->a[5] - 0x36u);

L_25B4:
    /* 000025b4   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x000025b4u;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_25B8:
    /* 000025b8   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x000025b8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_25BC:
    /* 000025bc   2  moveq #0,D0 */
    c->pc = 0x000025bcu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_25BE:
    /* 000025be   4  move.b (c,A0),D0 */
    c->pc = 0x000025beu;
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_25C2:
    /* 000025c2   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x000025c2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_25C6:
    /* 000025c6   2  ext.l D1 */
    c->pc = 0x000025c6u;
    rc_ext_l(c, 1);

L_25C8:
    /* 000025c8   2  asl.l #1,D1 */
    c->pc = 0x000025c8u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_25CA:
    /* 000025ca   4  lea (ffffffb6,A5),A0 */
    c->pc = 0x000025cau;
    c->a[0] = (c->a[5] - 0x4au);

L_25CE:
    /* 000025ce   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x000025ceu;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_25D2:
    /* 000025d2   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000025d2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_25D6:
    /* 000025d6   2  ext.l D0 */
    c->pc = 0x000025d6u;
    rc_ext_l(c, 0);

L_25D8:
    /* 000025d8   2  asl.l #1,D0 */
    c->pc = 0x000025d8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_25DA:
    /* 000025da   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000025dau;
    c->a[0] = (c->a[5] - 0x72u);

L_25DE:
    /* 000025de   4  clr.w (0,A0,D0.w) */
    c->pc = 0x000025deu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_25E2:
    /* 000025e2   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000025e2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_25E6:
    /* 000025e6   4  cmp.w (fffffffa,A5),D0 */
    c->pc = 0x000025e6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_25EA:
    /* 000025ea   2  bne 000025f4 */
    c->pc = 0x000025eau;
    if (rc_cond(c, 6)) goto L_25F4;

L_25EC:
    /* 000025ec   6  move.w #8,(fffffff8,A5) */
    c->pc = 0x000025ecu;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_25F2:
    /* 000025f2   2  bra 000025f8 */
    c->pc = 0x000025f2u;
    goto L_25F8;

L_25F4:
    /* 000025f4   4  clr.w (fffffff8,A5) */
    c->pc = 0x000025f4u;
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_25F8:
    /* 000025f8   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000025f8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_25FC:
    /* 000025fc   2  ext.l D0 */
    c->pc = 0x000025fcu;
    rc_ext_l(c, 0);

L_25FE:
    /* 000025fe   2  asl.l #1,D0 */
    c->pc = 0x000025feu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2600:
    /* 00002600   4  lea (ffffff6a,A5),A0 */
    c->pc = 0x00002600u;
    c->a[0] = (c->a[5] - 0x96u);

L_2604:
    /* 00002604   4  clr.w (0,A0,D0.w) */
    c->pc = 0x00002604u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2608:
    /* 00002608   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x00002608u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_260C:
    /* 0000260c   4  move.l (A0),(ffffff86,A5) */
    c->pc = 0x0000260cu;
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2610:
    /* 00002610   4  tst.w (ffffff7e,A5) */
    c->pc = 0x00002610u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x82u));
    rc_set_nzvc(c, t0, RC_W);

L_2614:
    /* 00002614   2  beq 00002624 */
    c->pc = 0x00002614u;
    if (rc_cond(c, 7)) goto L_2624;

L_2616:
    /* 00002616   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00002616u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_261A:
    /* 0000261a   2  subq.w #1,D0 */
    c->pc = 0x0000261au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_261C:
    /* 0000261c   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x0000261cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2620:
    /* 00002620   2  cmp.w D0,D1 */
    c->pc = 0x00002620u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2622:
    /* 00002622   2  bge 0000262a */
    c->pc = 0x00002622u;
    if (rc_cond(c, 12)) goto L_262A;

L_2624:
    /* 00002624   4  tst.w (ffffff66,A5) */
    c->pc = 0x00002624u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x9au));
    rc_set_nzvc(c, t0, RC_W);

L_2628:
    /* 00002628   2  beq 00002694 */
    c->pc = 0x00002628u;
    if (rc_cond(c, 7)) goto L_2694;

L_262A:
    /* 0000262a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000262au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_262E:
    /* 0000262e   2  ext.l D0 */
    c->pc = 0x0000262eu;
    rc_ext_l(c, 0);

L_2630:
    /* 00002630   2  asl.l #1,D0 */
    c->pc = 0x00002630u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2632:
    /* 00002632   4  lea (ffffffde,A5),A0 */
    c->pc = 0x00002632u;
    c->a[0] = (c->a[5] - 0x22u);

L_2636:
    /* 00002636   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x00002636u;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_263C:
    /* 0000263c   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000263cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2640:
    /* 00002640   2  ext.l D0 */
    c->pc = 0x00002640u;
    rc_ext_l(c, 0);

L_2642:
    /* 00002642   2  asl.l #1,D0 */
    c->pc = 0x00002642u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2644:
    /* 00002644   4  lea (ffffffb6,A5),A0 */
    c->pc = 0x00002644u;
    c->a[0] = (c->a[5] - 0x4au);

L_2648:
    /* 00002648   4  clr.w (0,A0,D0.w) */
    c->pc = 0x00002648u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_264C:
    /* 0000264c   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0000264cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2650:
    /* 00002650   2  subq.w #1,D0 */
    c->pc = 0x00002650u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2652:
    /* 00002652   4  cmp.w (fffffffe,A5),D0 */
    c->pc = 0x00002652u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2656:
    /* 00002656   2  bne 00002694 */
    c->pc = 0x00002656u;
    if (rc_cond(c, 6)) goto L_2694;

L_2658:
    /* 00002658   4  tst.w (ffffff7e,A5) */
    c->pc = 0x00002658u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x82u));
    rc_set_nzvc(c, t0, RC_W);

L_265C:
    /* 0000265c   2  beq 0000267a */
    c->pc = 0x0000265cu;
    if (rc_cond(c, 7)) goto L_267A;

L_265E:
    /* 0000265e   4  lea (00002b0e),A0 */
    c->pc = 0x0000265eu;
    c->a[0] = 0x00002b0eu;

L_2662:
    /* 00002662   4  move.l A0,(ffffff86,A5) */
    c->pc = 0x00002662u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2666:
    /* 00002666   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002666u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_266A:
    /* 0000266a   2  ext.l D0 */
    c->pc = 0x0000266au;
    rc_ext_l(c, 0);

L_266C:
    /* 0000266c   2  asl.l #1,D0 */
    c->pc = 0x0000266cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_266E:
    /* 0000266e   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x0000266eu;
    c->a[0] = (c->a[5] - 0x72u);

L_2672:
    /* 00002672   6  move.w #4,(0,A0,D0.w) */
    c->pc = 0x00002672u;
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2678:
    /* 00002678   2  bra 00002694 */
    c->pc = 0x00002678u;
    goto L_2694;

L_267A:
    /* 0000267a   4  lea (00002b14),A0 */
    c->pc = 0x0000267au;
    c->a[0] = 0x00002b14u;

L_267E:
    /* 0000267e   4  move.l A0,(ffffff86,A5) */
    c->pc = 0x0000267eu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2682:
    /* 00002682   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002682u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2686:
    /* 00002686   2  ext.l D0 */
    c->pc = 0x00002686u;
    rc_ext_l(c, 0);

L_2688:
    /* 00002688   2  asl.l #1,D0 */
    c->pc = 0x00002688u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_268A:
    /* 0000268a   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x0000268au;
    c->a[0] = (c->a[5] - 0x72u);

L_268E:
    /* 0000268e   6  move.w #f,(0,A0,D0.w) */
    c->pc = 0x0000268eu;
    t0 = 0x0000000fu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2694:
    /* 00002694   4  movea.l (ffffff86,A5),A0 */
    c->pc = 0x00002694u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[0] = t0;

L_2698:
    /* 00002698   2  move.b (A0),D0 */
    c->pc = 0x00002698u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_269A:
    /* 0000269a   2  ext.w D0 */
    c->pc = 0x0000269au;
    rc_ext_w(c, 0);

L_269C:
    /* 0000269c   2  ext.l D0 */
    c->pc = 0x0000269cu;
    rc_ext_l(c, 0);

L_269E:
    /* 0000269e   4  bra 0000293e */
    c->pc = 0x0000269eu;
    goto L_293E;

L_26A2:
    /* 000026a2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x000026a2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_26A6:
    /* 000026a6   4  pea (00002b22) */
    c->pc = 0x000026a6u;
    rc_push32(c, m, 0x00002b22u);

L_26AA:
    /* 000026aa   4  jsr (00004f0a) */
    c->pc = 0x000026aau;
    rc_push32(c, m, 0x000026aeu);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_26AE:
    /* 000026ae   2  addq.w #6,A7 */
    c->pc = 0x000026aeu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_26B0:
    /* 000026b0   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000026b0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_26B4:
    /* 000026b4   2  ext.l D0 */
    c->pc = 0x000026b4u;
    rc_ext_l(c, 0);

L_26B6:
    /* 000026b6   2  asl.l #1,D0 */
    c->pc = 0x000026b6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_26B8:
    /* 000026b8   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000026b8u;
    c->a[0] = (c->a[5] - 0x72u);

L_26BC:
    /* 000026bc   6  move.w #2,(0,A0,D0.w) */
    c->pc = 0x000026bcu;
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_26C2:
    /* 000026c2   4  bra 000029a0 */
    c->pc = 0x000026c2u;
    goto L_29A0;

L_26C6:
    /* 000026c6   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x000026c6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_26CA:
    /* 000026ca   4  pea (00002b2c) */
    c->pc = 0x000026cau;
    rc_push32(c, m, 0x00002b2cu);

L_26CE:
    /* 000026ce   4  jsr (00004f0a) */
    c->pc = 0x000026ceu;
    rc_push32(c, m, 0x000026d2u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_26D2:
    /* 000026d2   2  addq.w #6,A7 */
    c->pc = 0x000026d2u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_26D4:
    /* 000026d4   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000026d4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_26D8:
    /* 000026d8   2  ext.l D0 */
    c->pc = 0x000026d8u;
    rc_ext_l(c, 0);

L_26DA:
    /* 000026da   2  asl.l #1,D0 */
    c->pc = 0x000026dau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_26DC:
    /* 000026dc   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000026dcu;
    c->a[0] = (c->a[5] - 0x72u);

L_26E0:
    /* 000026e0   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x000026e0u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_26E6:
    /* 000026e6   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000026e6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_26EA:
    /* 000026ea   2  ext.l D0 */
    c->pc = 0x000026eau;
    rc_ext_l(c, 0);

L_26EC:
    /* 000026ec   2  asl.l #1,D0 */
    c->pc = 0x000026ecu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_26EE:
    /* 000026ee   4  lea (ffffffde,A5),A0 */
    c->pc = 0x000026eeu;
    c->a[0] = (c->a[5] - 0x22u);

L_26F2:
    /* 000026f2   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x000026f2u;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_26F8:
    /* 000026f8   4  bra 000029a0 */
    c->pc = 0x000026f8u;
    goto L_29A0;

L_26FC:
    /* 000026fc   4  tst.w (ffffff82,A5) */
    c->pc = 0x000026fcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x7eu));
    rc_set_nzvc(c, t0, RC_W);

L_2700:
    /* 00002700   2  bne 00002708 */
    c->pc = 0x00002700u;
    if (rc_cond(c, 6)) goto L_2708;

L_2702:
    /* 00002702   4  tst.w (fffffff8,A5) */
    c->pc = 0x00002702u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2706:
    /* 00002706   2  beq 00002710 */
    c->pc = 0x00002706u;
    if (rc_cond(c, 7)) goto L_2710;

L_2708:
    /* 00002708   6  move.w #8,(fffffff8,A5) */
    c->pc = 0x00002708u;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_270E:
    /* 0000270e   2  bra 00002714 */
    c->pc = 0x0000270eu;
    goto L_2714;

L_2710:
    /* 00002710   4  clr.w (fffffff8,A5) */
    c->pc = 0x00002710u;
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2714:
    /* 00002714   6  bchg #0,(ffffff83,A5) */
    c->pc = 0x00002714u;
    t4 = 0x00000000u;
    t3 = (c->a[5] - 0x7du);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_271A:
    /* 0000271a   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x0000271au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_271E:
    /* 0000271e   4  pea (00002b38) */
    c->pc = 0x0000271eu;
    rc_push32(c, m, 0x00002b38u);

L_2722:
    /* 00002722   4  jsr (00004f0a) */
    c->pc = 0x00002722u;
    rc_push32(c, m, 0x00002726u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_2726:
    /* 00002726   2  addq.w #6,A7 */
    c->pc = 0x00002726u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2728:
    /* 00002728   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002728u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_272C:
    /* 0000272c   2  ext.l D0 */
    c->pc = 0x0000272cu;
    rc_ext_l(c, 0);

L_272E:
    /* 0000272e   2  asl.l #1,D0 */
    c->pc = 0x0000272eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2730:
    /* 00002730   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x00002730u;
    c->a[0] = (c->a[5] - 0x72u);

L_2734:
    /* 00002734   6  move.w #7,(0,A0,D0.w) */
    c->pc = 0x00002734u;
    t0 = 0x00000007u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_273A:
    /* 0000273a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000273au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_273E:
    /* 0000273e   2  ext.l D0 */
    c->pc = 0x0000273eu;
    rc_ext_l(c, 0);

L_2740:
    /* 00002740   2  asl.l #1,D0 */
    c->pc = 0x00002740u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2742:
    /* 00002742   4  lea (ffffffde,A5),A0 */
    c->pc = 0x00002742u;
    c->a[0] = (c->a[5] - 0x22u);

L_2746:
    /* 00002746   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x00002746u;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_274C:
    /* 0000274c   4  tst.w (ffffff68,A5) */
    c->pc = 0x0000274cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x98u));
    rc_set_nzvc(c, t0, RC_W);

L_2750:
    /* 00002750   2  beq 00002758 */
    c->pc = 0x00002750u;
    if (rc_cond(c, 7)) goto L_2758;

L_2752:
    /* 00002752   6  move.w (fffffffe,A5),(fffffffa,A5) */
    c->pc = 0x00002752u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2758:
    /* 00002758   4  bra 000029a0 */
    c->pc = 0x00002758u;
    goto L_29A0;

L_275C:
    /* 0000275c   4  addq.l #1,(ffffff86,A5) */
    c->pc = 0x0000275cu;
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2760:
    /* 00002760   4  movea.l (ffffff86,A5),A0 */
    c->pc = 0x00002760u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[0] = t0;

L_2764:
    /* 00002764   4  addq.l #1,(ffffff86,A5) */
    c->pc = 0x00002764u;
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2768:
    /* 00002768   2  move.b (A0),D0 */
    c->pc = 0x00002768u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_276A:
    /* 0000276a   2  ext.w D0 */
    c->pc = 0x0000276au;
    rc_ext_w(c, 0);

L_276C:
    /* 0000276c   4  sub.w #30,D0 */
    c->pc = 0x0000276cu;
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2770:
    /* 00002770   4  move.w D0,(ffffcf86,A4) */
    c->pc = 0x00002770u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x307au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2774:
    /* 00002774   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x00002774u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2778:
    /* 00002778   4  move.l (ffffff86,A5),-(A7) */
    c->pc = 0x00002778u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_277C:
    /* 0000277c   4  jsr (00004f0a) */
    c->pc = 0x0000277cu;
    rc_push32(c, m, 0x00002780u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_2780:
    /* 00002780   2  addq.w #6,A7 */
    c->pc = 0x00002780u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2782:
    /* 00002782   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002782u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2786:
    /* 00002786   2  ext.l D0 */
    c->pc = 0x00002786u;
    rc_ext_l(c, 0);

L_2788:
    /* 00002788   2  asl.l #1,D0 */
    c->pc = 0x00002788u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_278A:
    /* 0000278a   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x0000278au;
    c->a[0] = (c->a[5] - 0x72u);

L_278E:
    /* 0000278e   6  move.w #e,(0,A0,D0.w) */
    c->pc = 0x0000278eu;
    t0 = 0x0000000eu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2794:
    /* 00002794   4  bra 000029a0 */
    c->pc = 0x00002794u;
    goto L_29A0;

L_2798:
    /* 00002798   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x00002798u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_279C:
    /* 0000279c   4  pea (00002b48) */
    c->pc = 0x0000279cu;
    rc_push32(c, m, 0x00002b48u);

L_27A0:
    /* 000027a0   4  jsr (00004f0a) */
    c->pc = 0x000027a0u;
    rc_push32(c, m, 0x000027a4u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_27A4:
    /* 000027a4   2  addq.w #6,A7 */
    c->pc = 0x000027a4u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_27A6:
    /* 000027a6   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000027a6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_27AA:
    /* 000027aa   2  ext.l D0 */
    c->pc = 0x000027aau;
    rc_ext_l(c, 0);

L_27AC:
    /* 000027ac   2  asl.l #1,D0 */
    c->pc = 0x000027acu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_27AE:
    /* 000027ae   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000027aeu;
    c->a[0] = (c->a[5] - 0x72u);

L_27B2:
    /* 000027b2   6  move.w #3,(0,A0,D0.w) */
    c->pc = 0x000027b2u;
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_27B8:
    /* 000027b8   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000027b8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_27BC:
    /* 000027bc   2  ext.l D0 */
    c->pc = 0x000027bcu;
    rc_ext_l(c, 0);

L_27BE:
    /* 000027be   2  asl.l #1,D0 */
    c->pc = 0x000027beu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_27C0:
    /* 000027c0   4  lea (ffffffb6,A5),A0 */
    c->pc = 0x000027c0u;
    c->a[0] = (c->a[5] - 0x4au);

L_27C4:
    /* 000027c4   6  move.w (0,A0,D0.w),(ffffcf82,A4) */
    c->pc = 0x000027c4u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x307eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_27CA:
    /* 000027ca   4  bra 000029a0 */
    c->pc = 0x000027cau;
    goto L_29A0;

L_27CE:
    /* 000027ce   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x000027ceu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_27D2:
    /* 000027d2   4  pea (00002b4e) */
    c->pc = 0x000027d2u;
    rc_push32(c, m, 0x00002b4eu);

L_27D6:
    /* 000027d6   4  jsr (00004f0a) */
    c->pc = 0x000027d6u;
    rc_push32(c, m, 0x000027dau);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_27DA:
    /* 000027da   2  addq.w #6,A7 */
    c->pc = 0x000027dau;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_27DC:
    /* 000027dc   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000027dcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_27E0:
    /* 000027e0   2  ext.l D0 */
    c->pc = 0x000027e0u;
    rc_ext_l(c, 0);

L_27E2:
    /* 000027e2   2  asl.l #1,D0 */
    c->pc = 0x000027e2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_27E4:
    /* 000027e4   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000027e4u;
    c->a[0] = (c->a[5] - 0x72u);

L_27E8:
    /* 000027e8   6  move.w #6,(0,A0,D0.w) */
    c->pc = 0x000027e8u;
    t0 = 0x00000006u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_27EE:
    /* 000027ee   4  bra 000029a0 */
    c->pc = 0x000027eeu;
    goto L_29A0;

L_27F2:
    /* 000027f2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x000027f2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_27F6:
    /* 000027f6   4  pea (00002b5e) */
    c->pc = 0x000027f6u;
    rc_push32(c, m, 0x00002b5eu);

L_27FA:
    /* 000027fa   4  jsr (00004f0a) */
    c->pc = 0x000027fau;
    rc_push32(c, m, 0x000027feu);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_27FE:
    /* 000027fe   2  addq.w #6,A7 */
    c->pc = 0x000027feu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2800:
    /* 00002800   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002800u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2804:
    /* 00002804   2  ext.l D0 */
    c->pc = 0x00002804u;
    rc_ext_l(c, 0);

L_2806:
    /* 00002806   2  asl.l #1,D0 */
    c->pc = 0x00002806u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2808:
    /* 00002808   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x00002808u;
    c->a[0] = (c->a[5] - 0x72u);

L_280C:
    /* 0000280c   6  move.w #9,(0,A0,D0.w) */
    c->pc = 0x0000280cu;
    t0 = 0x00000009u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2812:
    /* 00002812   4  bra 000029a0 */
    c->pc = 0x00002812u;
    goto L_29A0;

L_2816:
    /* 00002816   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x00002816u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_281A:
    /* 0000281a   4  pea (00002b6c) */
    c->pc = 0x0000281au;
    rc_push32(c, m, 0x00002b6cu);

L_281E:
    /* 0000281e   4  jsr (00004f0a) */
    c->pc = 0x0000281eu;
    rc_push32(c, m, 0x00002822u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_2822:
    /* 00002822   2  addq.w #6,A7 */
    c->pc = 0x00002822u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2824:
    /* 00002824   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002824u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2828:
    /* 00002828   2  ext.l D0 */
    c->pc = 0x00002828u;
    rc_ext_l(c, 0);

L_282A:
    /* 0000282a   2  asl.l #1,D0 */
    c->pc = 0x0000282au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_282C:
    /* 0000282c   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x0000282cu;
    c->a[0] = (c->a[5] - 0x72u);

L_2830:
    /* 00002830   6  move.w #b,(0,A0,D0.w) */
    c->pc = 0x00002830u;
    t0 = 0x0000000bu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2836:
    /* 00002836   4  bra 000029a0 */
    c->pc = 0x00002836u;
    goto L_29A0;

L_283A:
    /* 0000283a   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x0000283au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_283E:
    /* 0000283e   4  pea (00002b76) */
    c->pc = 0x0000283eu;
    rc_push32(c, m, 0x00002b76u);

L_2842:
    /* 00002842   4  jsr (00004f0a) */
    c->pc = 0x00002842u;
    rc_push32(c, m, 0x00002846u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_2846:
    /* 00002846   2  addq.w #6,A7 */
    c->pc = 0x00002846u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2848:
    /* 00002848   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002848u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_284C:
    /* 0000284c   2  ext.l D0 */
    c->pc = 0x0000284cu;
    rc_ext_l(c, 0);

L_284E:
    /* 0000284e   2  asl.l #1,D0 */
    c->pc = 0x0000284eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2850:
    /* 00002850   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x00002850u;
    c->a[0] = (c->a[5] - 0x72u);

L_2854:
    /* 00002854   6  move.w #c,(0,A0,D0.w) */
    c->pc = 0x00002854u;
    t0 = 0x0000000cu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_285A:
    /* 0000285a   4  bra 000029a0 */
    c->pc = 0x0000285au;
    goto L_29A0;

L_285E:
    /* 0000285e   4  tst.w (ffffff82,A5) */
    c->pc = 0x0000285eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x7eu));
    rc_set_nzvc(c, t0, RC_W);

L_2862:
    /* 00002862   2  bne 0000286a */
    c->pc = 0x00002862u;
    if (rc_cond(c, 6)) goto L_286A;

L_2864:
    /* 00002864   4  tst.w (fffffff8,A5) */
    c->pc = 0x00002864u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2868:
    /* 00002868   2  beq 00002872 */
    c->pc = 0x00002868u;
    if (rc_cond(c, 7)) goto L_2872;

L_286A:
    /* 0000286a   6  move.w #8,(fffffff8,A5) */
    c->pc = 0x0000286au;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2870:
    /* 00002870   2  bra 00002876 */
    c->pc = 0x00002870u;
    goto L_2876;

L_2872:
    /* 00002872   4  clr.w (fffffff8,A5) */
    c->pc = 0x00002872u;
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2876:
    /* 00002876   6  bchg #0,(ffffff83,A5) */
    c->pc = 0x00002876u;
    t4 = 0x00000000u;
    t3 = (c->a[5] - 0x7du);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 ^ (1u << t4);
    rc_wr8(c, m, t3, t2);

L_287C:
    /* 0000287c   4  addq.l #1,(ffffff86,A5) */
    c->pc = 0x0000287cu;
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_2880:
    /* 00002880   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x00002880u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2884:
    /* 00002884   4  move.l (ffffff86,A5),-(A7) */
    c->pc = 0x00002884u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2888:
    /* 00002888   4  jsr (00004f0a) */
    c->pc = 0x00002888u;
    rc_push32(c, m, 0x0000288cu);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_288C:
    /* 0000288c   2  addq.w #6,A7 */
    c->pc = 0x0000288cu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_288E:
    /* 0000288e   4  tst.w (ffffff68,A5) */
    c->pc = 0x0000288eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x98u));
    rc_set_nzvc(c, t0, RC_W);

L_2892:
    /* 00002892   2  beq 0000289a */
    c->pc = 0x00002892u;
    if (rc_cond(c, 7)) goto L_289A;

L_2894:
    /* 00002894   6  move.w (fffffffe,A5),(fffffffa,A5) */
    c->pc = 0x00002894u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_289A:
    /* 0000289a   4  bra 000029a0 */
    c->pc = 0x0000289au;
    goto L_29A0;

L_289E:
    /* 0000289e   4  addq.l #1,(ffffff86,A5) */
    c->pc = 0x0000289eu;
    t3 = (c->a[5] - 0x7au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_28A2:
    /* 000028a2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x000028a2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_28A6:
    /* 000028a6   4  move.l (ffffff86,A5),-(A7) */
    c->pc = 0x000028a6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_28AA:
    /* 000028aa   4  jsr (00004f0a) */
    c->pc = 0x000028aau;
    rc_push32(c, m, 0x000028aeu);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_28AE:
    /* 000028ae   2  addq.w #6,A7 */
    c->pc = 0x000028aeu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_28B0:
    /* 000028b0   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000028b0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_28B4:
    /* 000028b4   2  ext.l D0 */
    c->pc = 0x000028b4u;
    rc_ext_l(c, 0);

L_28B6:
    /* 000028b6   2  asl.l #1,D0 */
    c->pc = 0x000028b6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_28B8:
    /* 000028b8   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000028b8u;
    c->a[0] = (c->a[5] - 0x72u);

L_28BC:
    /* 000028bc   6  move.w #8,(0,A0,D0.w) */
    c->pc = 0x000028bcu;
    t0 = 0x00000008u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_28C2:
    /* 000028c2   4  bra 000029a0 */
    c->pc = 0x000028c2u;
    goto L_29A0;

L_28C6:
    /* 000028c6   4  subq.w #1,(fffffff4,A5) */
    c->pc = 0x000028c6u;
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_28CA:
    /* 000028ca   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000028cau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_28CE:
    /* 000028ce   2  ext.l D0 */
    c->pc = 0x000028ceu;
    rc_ext_l(c, 0);

L_28D0:
    /* 000028d0   2  asl.l #1,D0 */
    c->pc = 0x000028d0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_28D2:
    /* 000028d2   4  lea (ffffff6a,A5),A0 */
    c->pc = 0x000028d2u;
    c->a[0] = (c->a[5] - 0x96u);

L_28D6:
    /* 000028d6   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x000028d6u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_28DC:
    /* 000028dc   4  bra 000029a0 */
    c->pc = 0x000028dcu;
    goto L_29A0;

L_28E0:
    /* 000028e0   4  move.l (ffffff86,A5),-(A7) */
    c->pc = 0x000028e0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_28E4:
    /* 000028e4   4  jsr (0000715c) */
    c->pc = 0x000028e4u;
    rc_push32(c, m, 0x000028e8u);
    rc_depth++;
    c->pc = 0x0000715cu;
    return;

L_28E8:
    /* 000028e8   2  addq.w #4,A7 */
    c->pc = 0x000028e8u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_28EA:
    /* 000028ea   4  move.l D0,(ffffff86,A5) */
    c->pc = 0x000028eau;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_28EE:
    /* 000028ee   2  bne 0000291c */
    c->pc = 0x000028eeu;
    if (rc_cond(c, 6)) goto L_291C;

L_28F0:
    /* 000028f0   4  subq.w #1,(fffffff4,A5) */
    c->pc = 0x000028f0u;
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_28F4:
    /* 000028f4   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000028f4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_28F8:
    /* 000028f8   2  ext.l D0 */
    c->pc = 0x000028f8u;
    rc_ext_l(c, 0);

L_28FA:
    /* 000028fa   2  asl.l #1,D0 */
    c->pc = 0x000028fau;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_28FC:
    /* 000028fc   4  lea (ffffff6a,A5),A0 */
    c->pc = 0x000028fcu;
    c->a[0] = (c->a[5] - 0x96u);

L_2900:
    /* 00002900   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x00002900u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2906:
    /* 00002906   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00002906u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_290A:
    /* 0000290a   2  ext.l D0 */
    c->pc = 0x0000290au;
    rc_ext_l(c, 0);

L_290C:
    /* 0000290c   2  asl.l #1,D0 */
    c->pc = 0x0000290cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_290E:
    /* 0000290e   4  lea (ffffffde,A5),A0 */
    c->pc = 0x0000290eu;
    c->a[0] = (c->a[5] - 0x22u);

L_2912:
    /* 00002912   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x00002912u;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2918:
    /* 00002918   4  bra 000029a0 */
    c->pc = 0x00002918u;
    goto L_29A0;

L_291C:
    /* 0000291c   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000291cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2920:
    /* 00002920   2  ext.l D0 */
    c->pc = 0x00002920u;
    rc_ext_l(c, 0);

L_2922:
    /* 00002922   2  asl.l #1,D0 */
    c->pc = 0x00002922u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2924:
    /* 00002924   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x00002924u;
    c->a[0] = (c->a[5] - 0x72u);

L_2928:
    /* 00002928   6  move.w #a,(0,A0,D0.w) */
    c->pc = 0x00002928u;
    t0 = 0x0000000au;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_292E:
    /* 0000292e   4  move.w (fffffff8,A5),-(A7) */
    c->pc = 0x0000292eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2932:
    /* 00002932   4  move.l (ffffff86,A5),-(A7) */
    c->pc = 0x00002932u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2936:
    /* 00002936   4  jsr (00004f0a) */
    c->pc = 0x00002936u;
    rc_push32(c, m, 0x0000293au);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_293A:
    /* 0000293a   2  addq.w #6,A7 */
    c->pc = 0x0000293au;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_293C:
    /* 0000293c   2  bra 000029a0 */
    c->pc = 0x0000293cu;
    goto L_29A0;

L_293E:
    /* 0000293e   2  tst.l D0 */
    c->pc = 0x0000293eu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2940:
    /* 00002940   2  beq 000028c6 */
    c->pc = 0x00002940u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_28C6; }

L_2942:
    /* 00002942   6  sub.l #25,D0 */
    c->pc = 0x00002942u;
    t0 = 0x00000025u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2948:
    /* 00002948   4  beq 00002798 */
    c->pc = 0x00002948u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_2798; }

L_294C:
    /* 0000294c   2  subq.l #1,D0 */
    c->pc = 0x0000294cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_294E:
    /* 0000294e   4  beq 0000283a */
    c->pc = 0x0000294eu;
    if (rc_cond(c, 7)) { rc_tick(); goto L_283A; }

L_2952:
    /* 00002952   6  sub.l #9,D0 */
    c->pc = 0x00002952u;
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2958:
    /* 00002958   4  beq 0000275c */
    c->pc = 0x00002958u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_275C; }

L_295C:
    /* 0000295c   6  sub.l #e,D0 */
    c->pc = 0x0000295cu;
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2962:
    /* 00002962   4  beq 000026fc */
    c->pc = 0x00002962u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_26FC; }

L_2966:
    /* 00002966   2  subq.l #3,D0 */
    c->pc = 0x00002966u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2968:
    /* 00002968   4  beq 0000285e */
    c->pc = 0x00002968u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_285E; }

L_296C:
    /* 0000296c   6  sub.l #1c,D0 */
    c->pc = 0x0000296cu;
    t0 = 0x0000001cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2972:
    /* 00002972   4  beq 0000289e */
    c->pc = 0x00002972u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_289E; }

L_2976:
    /* 00002976   2  subq.l #2,D0 */
    c->pc = 0x00002976u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2978:
    /* 00002978   4  beq 000028e0 */
    c->pc = 0x00002978u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_28E0; }

L_297C:
    /* 0000297c   2  subq.l #2,D0 */
    c->pc = 0x0000297cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_297E:
    /* 0000297e   4  beq 00002816 */
    c->pc = 0x0000297eu;
    if (rc_cond(c, 7)) { rc_tick(); goto L_2816; }

L_2982:
    /* 00002982   6  sub.l #1b,D0 */
    c->pc = 0x00002982u;
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2988:
    /* 00002988   4  beq 000027f2 */
    c->pc = 0x00002988u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_27F2; }

L_298C:
    /* 0000298c   2  subq.l #1,D0 */
    c->pc = 0x0000298cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_298E:
    /* 0000298e   4  beq 000026a2 */
    c->pc = 0x0000298eu;
    if (rc_cond(c, 7)) { rc_tick(); goto L_26A2; }

L_2992:
    /* 00002992   2  subq.l #1,D0 */
    c->pc = 0x00002992u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2994:
    /* 00002994   4  beq 000027ce */
    c->pc = 0x00002994u;
    if (rc_cond(c, 7)) { rc_tick(); goto L_27CE; }

L_2998:
    /* 00002998   2  subq.l #1,D0 */
    c->pc = 0x00002998u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_299A:
    /* 0000299a   4  beq 000026c6 */
    c->pc = 0x0000299au;
    if (rc_cond(c, 7)) { rc_tick(); goto L_26C6; }

L_299E:
    /* 0000299e   2  bra 0000292e */
    c->pc = 0x0000299eu;
    rc_tick();
    goto L_292E;

L_29A0:
    /* 000029a0   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x000029a0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_29A4:
    /* 000029a4   4  tst.l (8,A0) */
    c->pc = 0x000029a4u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_29A8:
    /* 000029a8   2  beq 000029b4 */
    c->pc = 0x000029a8u;
    if (rc_cond(c, 7)) goto L_29B4;

L_29AA:
    /* 000029aa   4  movea.l (ffffff8a,A5),A0 */
    c->pc = 0x000029aau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x76u));
    c->a[0] = t0;

L_29AE:
    /* 000029ae   6  move.l (8,A0),(ffffff8a,A5) */
    c->pc = 0x000029aeu;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_29B4:
    /* 000029b4   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x000029b4u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_29B8:
    /* 000029b8   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000029b8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29BC:
    /* 000029bc   4  cmp.w (fffffffc,A5),D0 */
    c->pc = 0x000029bcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_29C0:
    /* 000029c0   4  blt 0000256a */
    c->pc = 0x000029c0u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_256A; }

L_29C4:
    /* 000029c4   4  clr.w (ffffff68,A5) */
    c->pc = 0x000029c4u;
    rc_wr16(c, m, (c->a[5] - 0x98u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_29C8:
    /* 000029c8   4  tst.w (ffffff80,A5) */
    c->pc = 0x000029c8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x80u));
    rc_set_nzvc(c, t0, RC_W);

L_29CC:
    /* 000029cc   2  beq 000029d2 */
    c->pc = 0x000029ccu;
    if (rc_cond(c, 7)) goto L_29D2;

L_29CE:
    /* 000029ce   4  jsr (ffff81ee,A4) */
    c->pc = 0x000029ceu;
    /* vector 82 */
    rc_push32(c, m, 0x000029d2u);
    rc_depth++;
    c->pc = 0x0001d1dau;
    return;

L_29D2:
    /* 000029d2   4  tst.w (ffffce40,A4) */
    c->pc = 0x000029d2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_29D6:
    /* 000029d6   2  bne 000029e0 */
    c->pc = 0x000029d6u;
    if (rc_cond(c, 6)) goto L_29E0;

L_29D8:
    /* 000029d8   4  tst.w (ffffff80,A5) */
    c->pc = 0x000029d8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x80u));
    rc_set_nzvc(c, t0, RC_W);

L_29DC:
    /* 000029dc   4  bne 00002ab4 */
    c->pc = 0x000029dcu;
    if (rc_cond(c, 6)) goto L_2AB4;

L_29E0:
    /* 000029e0   4  jsr (0000334a) */
    c->pc = 0x000029e0u;
    rc_push32(c, m, 0x000029e4u);
    rc_depth++;
    c->pc = 0x0000334au;
    return;

L_29E4:
    /* 000029e4   6  move.w (fffffffa,A5),(ffffcf84,A4) */
    c->pc = 0x000029e4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x307cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_29EA:
    /* 000029ea   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x000029eau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_29EE:
    /* 000029ee   2  ext.l D0 */
    c->pc = 0x000029eeu;
    rc_ext_l(c, 0);

L_29F0:
    /* 000029f0   2  asl.l #1,D0 */
    c->pc = 0x000029f0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_29F2:
    /* 000029f2   4  lea (ffffff8e,A5),A0 */
    c->pc = 0x000029f2u;
    c->a[0] = (c->a[5] - 0x72u);

L_29F6:
    /* 000029f6   6  move.w (0,A0,D0.w),(ffffcf80,A4) */
    c->pc = 0x000029f6u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x3080u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_29FC:
    /* 000029fc   6  cmpi.w #a,(ffffcf80,A4) */
    c->pc = 0x000029fcu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x3080u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_2A02:
    /* 00002a02   2  bne 00002a18 */
    c->pc = 0x00002a02u;
    if (rc_cond(c, 6)) goto L_2A18;

L_2A04:
    /* 00002a04   4  tst.w (ffffcf44,A4) */
    c->pc = 0x00002a04u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x30bcu));
    rc_set_nzvc(c, t0, RC_W);

L_2A08:
    /* 00002a08   2  beq 00002a18 */
    c->pc = 0x00002a08u;
    if (rc_cond(c, 7)) goto L_2A18;

L_2A0A:
    /* 00002a0a   4  move.w (ffffcf44,A4),D0 */
    c->pc = 0x00002a0au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x30bcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A0E:
    /* 00002a0e   2  subq.w #5,D0 */
    c->pc = 0x00002a0eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2A10:
    /* 00002a10   2  move.w D0,-(A7) */
    c->pc = 0x00002a10u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A12:
    /* 00002a12   4  jsr (ffff8080,A4) */
    c->pc = 0x00002a12u;
    /* vector 21 */
    rc_push32(c, m, 0x00002a16u);
    rc_depth++;
    c->pc = 0x000070cau;
    return;

L_2A16:
    /* 00002a16   2  addq.w #2,A7 */
    c->pc = 0x00002a16u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2A18:
    /* 00002a18   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a18u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A1C:
    /* 00002a1c   2  ext.l D0 */
    c->pc = 0x00002a1cu;
    rc_ext_l(c, 0);

L_2A1E:
    /* 00002a1e   2  asl.l #1,D0 */
    c->pc = 0x00002a1eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A20:
    /* 00002a20   4  lea (ffffffde,A5),A0 */
    c->pc = 0x00002a20u;
    c->a[0] = (c->a[5] - 0x22u);

L_2A24:
    /* 00002a24   6  cmpi.w #fffe,(0,A0,D0.w) */
    c->pc = 0x00002a24u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_2A2A:
    /* 00002a2a   2  bne 00002a44 */
    c->pc = 0x00002a2au;
    if (rc_cond(c, 6)) goto L_2A44;

L_2A2C:
    /* 00002a2c   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a2cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A30:
    /* 00002a30   2  ext.l D0 */
    c->pc = 0x00002a30u;
    rc_ext_l(c, 0);

L_2A32:
    /* 00002a32   2  asl.l #1,D0 */
    c->pc = 0x00002a32u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A34:
    /* 00002a34   4  lea (ffffffca,A5),A0 */
    c->pc = 0x00002a34u;
    c->a[0] = (c->a[5] - 0x36u);

L_2A38:
    /* 00002a38   6  move.w (0,A0,D0.w),(ffffefe4,A4) */
    c->pc = 0x00002a38u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A3E:
    /* 00002a3e   6  move.w #1,(ffff83d6,A4) */
    c->pc = 0x00002a3eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A44:
    /* 00002a44   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a44u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A48:
    /* 00002a48   2  ext.l D0 */
    c->pc = 0x00002a48u;
    rc_ext_l(c, 0);

L_2A4A:
    /* 00002a4a   2  asl.l #1,D0 */
    c->pc = 0x00002a4au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A4C:
    /* 00002a4c   4  lea (ffffffde,A5),A0 */
    c->pc = 0x00002a4cu;
    c->a[0] = (c->a[5] - 0x22u);

L_2A50:
    /* 00002a50   6  cmpi.w #fffd,(0,A0,D0.w) */
    c->pc = 0x00002a50u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffdu);

L_2A56:
    /* 00002a56   2  bne 00002a88 */
    c->pc = 0x00002a56u;
    if (rc_cond(c, 6)) goto L_2A88;

L_2A58:
    /* 00002a58   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a58u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A5C:
    /* 00002a5c   2  ext.l D0 */
    c->pc = 0x00002a5cu;
    rc_ext_l(c, 0);

L_2A5E:
    /* 00002a5e   2  asl.l #1,D0 */
    c->pc = 0x00002a5eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A60:
    /* 00002a60   4  lea (ffffffca,A5),A0 */
    c->pc = 0x00002a60u;
    c->a[0] = (c->a[5] - 0x36u);

L_2A64:
    /* 00002a64   6  move.w (0,A0,D0.w),(ffffefe4,A4) */
    c->pc = 0x00002a64u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A6A:
    /* 00002a6a   6  move.w #1,(ffff8b54,A4) */
    c->pc = 0x00002a6au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A70:
    /* 00002a70   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a70u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A74:
    /* 00002a74   2  ext.l D0 */
    c->pc = 0x00002a74u;
    rc_ext_l(c, 0);

L_2A76:
    /* 00002a76   2  asl.l #1,D0 */
    c->pc = 0x00002a76u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A78:
    /* 00002a78   4  lea (ffffffa2,A5),A0 */
    c->pc = 0x00002a78u;
    c->a[0] = (c->a[5] - 0x5eu);

L_2A7C:
    /* 00002a7c   6  move.w (0,A0,D0.w),(ffff8b56,A4) */
    c->pc = 0x00002a7cu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] - 0x74aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A82:
    /* 00002a82   6  move.w #1,(ffff83d6,A4) */
    c->pc = 0x00002a82u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A88:
    /* 00002a88   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a88u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A8C:
    /* 00002a8c   2  ext.l D0 */
    c->pc = 0x00002a8cu;
    rc_ext_l(c, 0);

L_2A8E:
    /* 00002a8e   2  asl.l #1,D0 */
    c->pc = 0x00002a8eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2A90:
    /* 00002a90   4  lea (ffffffb6,A5),A0 */
    c->pc = 0x00002a90u;
    c->a[0] = (c->a[5] - 0x4au);

L_2A94:
    /* 00002a94   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x00002a94u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2A98:
    /* 00002a98   4  jsr (ffff8080,A4) */
    c->pc = 0x00002a98u;
    /* vector 21 */
    rc_push32(c, m, 0x00002a9cu);
    rc_depth++;
    c->pc = 0x000070cau;
    return;

L_2A9C:
    /* 00002a9c   2  addq.w #2,A7 */
    c->pc = 0x00002a9cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_2A9E:
    /* 00002a9e   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002a9eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AA2:
    /* 00002aa2   2  ext.l D0 */
    c->pc = 0x00002aa2u;
    rc_ext_l(c, 0);

L_2AA4:
    /* 00002aa4   2  asl.l #1,D0 */
    c->pc = 0x00002aa4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2AA6:
    /* 00002aa6   4  lea (ffffffde,A5),A0 */
    c->pc = 0x00002aa6u;
    c->a[0] = (c->a[5] - 0x22u);

L_2AAA:
    /* 00002aaa   2  move.l D0,D1 */
    c->pc = 0x00002aaau;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2AAC:
    /* 00002aac   4  move.w (0,A0,D1.w),D0 */
    c->pc = 0x00002aacu;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AB0:
    /* 00002ab0   2  unlk A5 */
    c->pc = 0x00002ab0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2AB2:
    /* 00002ab2   2  rts */
    c->pc = 0x00002ab2u;
    rc_ret(c, m);
    return;

L_2AB4:
    /* 00002ab4   6  move.w (ffffce3e,A4),(fffffff2,A5) */
    c->pc = 0x00002ab4u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2ABA:
    /* 00002aba   4  move.w (ffffce3e,A4),D0 */
    c->pc = 0x00002abau;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2ABE:
    /* 00002abe   4  add.w D0,(fffffffa,A5) */
    c->pc = 0x00002abeu;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2AC2:
    /* 00002ac2   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002ac2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AC6:
    /* 00002ac6   2  ext.l D0 */
    c->pc = 0x00002ac6u;
    rc_ext_l(c, 0);

L_2AC8:
    /* 00002ac8   2  asl.l #1,D0 */
    c->pc = 0x00002ac8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_2ACA:
    /* 00002aca   4  lea (ffffff6a,A5),A0 */
    c->pc = 0x00002acau;
    c->a[0] = (c->a[5] - 0x96u);

L_2ACE:
    /* 00002ace   4  tst.w (0,A0,D0.w) */
    c->pc = 0x00002aceu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_2AD2:
    /* 00002ad2   2  beq 00002aea */
    c->pc = 0x00002ad2u;
    if (rc_cond(c, 7)) goto L_2AEA;

L_2AD4:
    /* 00002ad4   4  tst.w (fffffff2,A5) */
    c->pc = 0x00002ad4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_2AD8:
    /* 00002ad8   2  bne 00002ae0 */
    c->pc = 0x00002ad8u;
    if (rc_cond(c, 6)) goto L_2AE0;

L_2ADA:
    /* 00002ada   6  move.w #1,(fffffff2,A5) */
    c->pc = 0x00002adau;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AE0:
    /* 00002ae0   4  move.w (fffffff2,A5),D0 */
    c->pc = 0x00002ae0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AE4:
    /* 00002ae4   4  add.w D0,(fffffffa,A5) */
    c->pc = 0x00002ae4u;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2AE8:
    /* 00002ae8   2  bra 00002ac2 */
    c->pc = 0x00002ae8u;
    rc_tick();
    goto L_2AC2;

L_2AEA:
    /* 00002aea   4  tst.w (fffffffa,A5) */
    c->pc = 0x00002aeau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_2AEE:
    /* 00002aee   2  bge 00002af4 */
    c->pc = 0x00002aeeu;
    if (rc_cond(c, 12)) goto L_2AF4;

L_2AF0:
    /* 00002af0   4  clr.w (fffffffa,A5) */
    c->pc = 0x00002af0u;
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2AF4:
    /* 00002af4   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00002af4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2AF8:
    /* 00002af8   4  cmp.w (fffffffc,A5),D0 */
    c->pc = 0x00002af8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2AFC:
    /* 00002afc   2  blt 00002b08 */
    c->pc = 0x00002afcu;
    if (rc_cond(c, 13)) goto L_2B08;

L_2AFE:
    /* 00002afe   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00002afeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B02:
    /* 00002b02   2  subq.w #1,D0 */
    c->pc = 0x00002b02u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2B04:
    /* 00002b04   4  move.w D0,(fffffffa,A5) */
    c->pc = 0x00002b04u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B08:
    /* 00002b08   4  bra 0000252e */
    c->pc = 0x00002b08u;
    rc_tick();
    goto L_252E;

L_2B0C:
    /* 00002b0c   2  bra 00002ab0 */
    c->pc = 0x00002b0cu;
    rc_tick();
    goto L_2AB0;

}
