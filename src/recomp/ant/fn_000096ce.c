/* fn_000096ce - 1098 byte(s), 295 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000096ce(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000096ceu): goto L_96CE;
    case RC_ADDR(0x000096d2u): goto L_96D2;
    case RC_ADDR(0x000096d6u): goto L_96D6;
    case RC_ADDR(0x000096d8u): goto L_96D8;
    case RC_ADDR(0x000096dcu): goto L_96DC;
    case RC_ADDR(0x000096deu): goto L_96DE;
    case RC_ADDR(0x000096e0u): goto L_96E0;
    case RC_ADDR(0x000096e4u): goto L_96E4;
    case RC_ADDR(0x000096e6u): goto L_96E6;
    case RC_ADDR(0x000096e8u): goto L_96E8;
    case RC_ADDR(0x000096ecu): goto L_96EC;
    case RC_ADDR(0x000096f0u): goto L_96F0;
    case RC_ADDR(0x000096f4u): goto L_96F4;
    case RC_ADDR(0x000096f8u): goto L_96F8;
    case RC_ADDR(0x000096fau): goto L_96FA;
    case RC_ADDR(0x000096feu): goto L_96FE;
    case RC_ADDR(0x00009702u): goto L_9702;
    case RC_ADDR(0x00009704u): goto L_9704;
    case RC_ADDR(0x00009708u): goto L_9708;
    case RC_ADDR(0x0000970cu): goto L_970C;
    case RC_ADDR(0x00009710u): goto L_9710;
    case RC_ADDR(0x00009716u): goto L_9716;
    case RC_ADDR(0x0000971cu): goto L_971C;
    case RC_ADDR(0x00009722u): goto L_9722;
    case RC_ADDR(0x00009728u): goto L_9728;
    case RC_ADDR(0x0000972cu): goto L_972C;
    case RC_ADDR(0x0000972eu): goto L_972E;
    case RC_ADDR(0x00009730u): goto L_9730;
    case RC_ADDR(0x00009736u): goto L_9736;
    case RC_ADDR(0x00009738u): goto L_9738;
    case RC_ADDR(0x0000973cu): goto L_973C;
    case RC_ADDR(0x0000973eu): goto L_973E;
    case RC_ADDR(0x00009742u): goto L_9742;
    case RC_ADDR(0x00009744u): goto L_9744;
    case RC_ADDR(0x00009748u): goto L_9748;
    case RC_ADDR(0x0000974cu): goto L_974C;
    case RC_ADDR(0x00009750u): goto L_9750;
    case RC_ADDR(0x00009752u): goto L_9752;
    case RC_ADDR(0x00009754u): goto L_9754;
    case RC_ADDR(0x00009756u): goto L_9756;
    case RC_ADDR(0x0000975cu): goto L_975C;
    case RC_ADDR(0x0000975eu): goto L_975E;
    case RC_ADDR(0x00009762u): goto L_9762;
    case RC_ADDR(0x00009766u): goto L_9766;
    case RC_ADDR(0x0000976au): goto L_976A;
    case RC_ADDR(0x0000976cu): goto L_976C;
    case RC_ADDR(0x00009770u): goto L_9770;
    case RC_ADDR(0x00009772u): goto L_9772;
    case RC_ADDR(0x00009774u): goto L_9774;
    case RC_ADDR(0x00009778u): goto L_9778;
    case RC_ADDR(0x0000977cu): goto L_977C;
    case RC_ADDR(0x00009780u): goto L_9780;
    case RC_ADDR(0x00009784u): goto L_9784;
    case RC_ADDR(0x00009786u): goto L_9786;
    case RC_ADDR(0x0000978au): goto L_978A;
    case RC_ADDR(0x0000978cu): goto L_978C;
    case RC_ADDR(0x0000978eu): goto L_978E;
    case RC_ADDR(0x00009792u): goto L_9792;
    case RC_ADDR(0x00009794u): goto L_9794;
    case RC_ADDR(0x00009798u): goto L_9798;
    case RC_ADDR(0x0000979cu): goto L_979C;
    case RC_ADDR(0x000097a0u): goto L_97A0;
    case RC_ADDR(0x000097a2u): goto L_97A2;
    case RC_ADDR(0x000097a6u): goto L_97A6;
    case RC_ADDR(0x000097aau): goto L_97AA;
    case RC_ADDR(0x000097aeu): goto L_97AE;
    case RC_ADDR(0x000097b0u): goto L_97B0;
    case RC_ADDR(0x000097b4u): goto L_97B4;
    case RC_ADDR(0x000097b8u): goto L_97B8;
    case RC_ADDR(0x000097bcu): goto L_97BC;
    case RC_ADDR(0x000097beu): goto L_97BE;
    case RC_ADDR(0x000097c0u): goto L_97C0;
    case RC_ADDR(0x000097c2u): goto L_97C2;
    case RC_ADDR(0x000097c4u): goto L_97C4;
    case RC_ADDR(0x000097c6u): goto L_97C6;
    case RC_ADDR(0x000097c8u): goto L_97C8;
    case RC_ADDR(0x000097cau): goto L_97CA;
    case RC_ADDR(0x000097ccu): goto L_97CC;
    case RC_ADDR(0x000097ceu): goto L_97CE;
    case RC_ADDR(0x000097d4u): goto L_97D4;
    case RC_ADDR(0x000097d8u): goto L_97D8;
    case RC_ADDR(0x000097dcu): goto L_97DC;
    case RC_ADDR(0x000097deu): goto L_97DE;
    case RC_ADDR(0x000097e2u): goto L_97E2;
    case RC_ADDR(0x000097e8u): goto L_97E8;
    case RC_ADDR(0x000097eeu): goto L_97EE;
    case RC_ADDR(0x000097f2u): goto L_97F2;
    case RC_ADDR(0x000097f8u): goto L_97F8;
    case RC_ADDR(0x000097fau): goto L_97FA;
    case RC_ADDR(0x00009800u): goto L_9800;
    case RC_ADDR(0x00009806u): goto L_9806;
    case RC_ADDR(0x00009808u): goto L_9808;
    case RC_ADDR(0x0000980eu): goto L_980E;
    case RC_ADDR(0x00009814u): goto L_9814;
    case RC_ADDR(0x0000981au): goto L_981A;
    case RC_ADDR(0x0000981eu): goto L_981E;
    case RC_ADDR(0x00009820u): goto L_9820;
    case RC_ADDR(0x00009824u): goto L_9824;
    case RC_ADDR(0x00009826u): goto L_9826;
    case RC_ADDR(0x0000982au): goto L_982A;
    case RC_ADDR(0x0000982eu): goto L_982E;
    case RC_ADDR(0x00009834u): goto L_9834;
    case RC_ADDR(0x00009838u): goto L_9838;
    case RC_ADDR(0x0000983au): goto L_983A;
    case RC_ADDR(0x00009840u): goto L_9840;
    case RC_ADDR(0x00009846u): goto L_9846;
    case RC_ADDR(0x0000984au): goto L_984A;
    case RC_ADDR(0x0000984cu): goto L_984C;
    case RC_ADDR(0x00009852u): goto L_9852;
    case RC_ADDR(0x00009856u): goto L_9856;
    case RC_ADDR(0x0000985au): goto L_985A;
    case RC_ADDR(0x0000985cu): goto L_985C;
    case RC_ADDR(0x00009862u): goto L_9862;
    case RC_ADDR(0x00009870u): goto L_9870;
    case RC_ADDR(0x00009876u): goto L_9876;
    case RC_ADDR(0x00009878u): goto L_9878;
    case RC_ADDR(0x0000987au): goto L_987A;
    case RC_ADDR(0x0000987eu): goto L_987E;
    case RC_ADDR(0x00009882u): goto L_9882;
    case RC_ADDR(0x00009888u): goto L_9888;
    case RC_ADDR(0x0000988cu): goto L_988C;
    case RC_ADDR(0x00009890u): goto L_9890;
    case RC_ADDR(0x00009892u): goto L_9892;
    case RC_ADDR(0x00009896u): goto L_9896;
    case RC_ADDR(0x0000989cu): goto L_989C;
    case RC_ADDR(0x000098a2u): goto L_98A2;
    case RC_ADDR(0x000098a6u): goto L_98A6;
    case RC_ADDR(0x000098aau): goto L_98AA;
    case RC_ADDR(0x000098acu): goto L_98AC;
    case RC_ADDR(0x000098b0u): goto L_98B0;
    case RC_ADDR(0x000098b4u): goto L_98B4;
    case RC_ADDR(0x000098b6u): goto L_98B6;
    case RC_ADDR(0x000098bau): goto L_98BA;
    case RC_ADDR(0x000098bcu): goto L_98BC;
    case RC_ADDR(0x000098c2u): goto L_98C2;
    case RC_ADDR(0x000098c4u): goto L_98C4;
    case RC_ADDR(0x000098cau): goto L_98CA;
    case RC_ADDR(0x000098ccu): goto L_98CC;
    case RC_ADDR(0x000098d0u): goto L_98D0;
    case RC_ADDR(0x000098d2u): goto L_98D2;
    case RC_ADDR(0x000098d4u): goto L_98D4;
    case RC_ADDR(0x000098d8u): goto L_98D8;
    case RC_ADDR(0x000098dcu): goto L_98DC;
    case RC_ADDR(0x000098e0u): goto L_98E0;
    case RC_ADDR(0x000098e4u): goto L_98E4;
    case RC_ADDR(0x000098e6u): goto L_98E6;
    case RC_ADDR(0x000098eau): goto L_98EA;
    case RC_ADDR(0x000098f0u): goto L_98F0;
    case RC_ADDR(0x000098f6u): goto L_98F6;
    case RC_ADDR(0x000098fau): goto L_98FA;
    case RC_ADDR(0x000098feu): goto L_98FE;
    case RC_ADDR(0x00009904u): goto L_9904;
    case RC_ADDR(0x0000990au): goto L_990A;
    case RC_ADDR(0x0000990cu): goto L_990C;
    case RC_ADDR(0x00009912u): goto L_9912;
    case RC_ADDR(0x00009918u): goto L_9918;
    case RC_ADDR(0x0000991eu): goto L_991E;
    case RC_ADDR(0x00009920u): goto L_9920;
    case RC_ADDR(0x00009924u): goto L_9924;
    case RC_ADDR(0x0000992au): goto L_992A;
    case RC_ADDR(0x0000992cu): goto L_992C;
    case RC_ADDR(0x0000992eu): goto L_992E;
    case RC_ADDR(0x00009932u): goto L_9932;
    case RC_ADDR(0x00009934u): goto L_9934;
    case RC_ADDR(0x00009938u): goto L_9938;
    case RC_ADDR(0x0000993au): goto L_993A;
    case RC_ADDR(0x0000993cu): goto L_993C;
    case RC_ADDR(0x00009942u): goto L_9942;
    case RC_ADDR(0x00009946u): goto L_9946;
    case RC_ADDR(0x0000994au): goto L_994A;
    case RC_ADDR(0x0000994eu): goto L_994E;
    case RC_ADDR(0x00009952u): goto L_9952;
    case RC_ADDR(0x00009954u): goto L_9954;
    case RC_ADDR(0x00009956u): goto L_9956;
    case RC_ADDR(0x00009958u): goto L_9958;
    case RC_ADDR(0x0000995cu): goto L_995C;
    case RC_ADDR(0x00009962u): goto L_9962;
    case RC_ADDR(0x00009966u): goto L_9966;
    case RC_ADDR(0x0000996au): goto L_996A;
    case RC_ADDR(0x0000996eu): goto L_996E;
    case RC_ADDR(0x00009972u): goto L_9972;
    case RC_ADDR(0x00009974u): goto L_9974;
    case RC_ADDR(0x00009976u): goto L_9976;
    case RC_ADDR(0x00009978u): goto L_9978;
    case RC_ADDR(0x0000997cu): goto L_997C;
    case RC_ADDR(0x00009982u): goto L_9982;
    case RC_ADDR(0x00009986u): goto L_9986;
    case RC_ADDR(0x0000998au): goto L_998A;
    case RC_ADDR(0x0000998eu): goto L_998E;
    case RC_ADDR(0x00009992u): goto L_9992;
    case RC_ADDR(0x00009994u): goto L_9994;
    case RC_ADDR(0x00009996u): goto L_9996;
    case RC_ADDR(0x00009998u): goto L_9998;
    case RC_ADDR(0x0000999cu): goto L_999C;
    case RC_ADDR(0x000099a2u): goto L_99A2;
    case RC_ADDR(0x000099a4u): goto L_99A4;
    case RC_ADDR(0x000099a8u): goto L_99A8;
    case RC_ADDR(0x000099acu): goto L_99AC;
    case RC_ADDR(0x000099aeu): goto L_99AE;
    case RC_ADDR(0x000099b2u): goto L_99B2;
    case RC_ADDR(0x000099b6u): goto L_99B6;
    case RC_ADDR(0x000099bau): goto L_99BA;
    case RC_ADDR(0x000099beu): goto L_99BE;
    case RC_ADDR(0x000099c0u): goto L_99C0;
    case RC_ADDR(0x000099c2u): goto L_99C2;
    case RC_ADDR(0x000099c6u): goto L_99C6;
    case RC_ADDR(0x000099c8u): goto L_99C8;
    case RC_ADDR(0x000099cau): goto L_99CA;
    case RC_ADDR(0x000099d0u): goto L_99D0;
    case RC_ADDR(0x000099d6u): goto L_99D6;
    case RC_ADDR(0x000099d8u): goto L_99D8;
    case RC_ADDR(0x000099deu): goto L_99DE;
    case RC_ADDR(0x000099e4u): goto L_99E4;
    case RC_ADDR(0x000099e6u): goto L_99E6;
    case RC_ADDR(0x000099e8u): goto L_99E8;
    case RC_ADDR(0x000099eau): goto L_99EA;
    case RC_ADDR(0x000099ecu): goto L_99EC;
    case RC_ADDR(0x000099eeu): goto L_99EE;
    case RC_ADDR(0x000099f0u): goto L_99F0;
    case RC_ADDR(0x000099f6u): goto L_99F6;
    case RC_ADDR(0x000099fcu): goto L_99FC;
    case RC_ADDR(0x000099feu): goto L_99FE;
    case RC_ADDR(0x00009a04u): goto L_9A04;
    case RC_ADDR(0x00009a0au): goto L_9A0A;
    case RC_ADDR(0x00009a10u): goto L_9A10;
    case RC_ADDR(0x00009a14u): goto L_9A14;
    case RC_ADDR(0x00009a18u): goto L_9A18;
    case RC_ADDR(0x00009a1cu): goto L_9A1C;
    case RC_ADDR(0x00009a22u): goto L_9A22;
    case RC_ADDR(0x00009a26u): goto L_9A26;
    case RC_ADDR(0x00009a2au): goto L_9A2A;
    case RC_ADDR(0x00009a2eu): goto L_9A2E;
    case RC_ADDR(0x00009a30u): goto L_9A30;
    case RC_ADDR(0x00009a34u): goto L_9A34;
    case RC_ADDR(0x00009a38u): goto L_9A38;
    case RC_ADDR(0x00009a3eu): goto L_9A3E;
    case RC_ADDR(0x00009a40u): goto L_9A40;
    case RC_ADDR(0x00009a44u): goto L_9A44;
    case RC_ADDR(0x00009a46u): goto L_9A46;
    case RC_ADDR(0x00009a48u): goto L_9A48;
    case RC_ADDR(0x00009a4cu): goto L_9A4C;
    case RC_ADDR(0x00009a50u): goto L_9A50;
    case RC_ADDR(0x00009a54u): goto L_9A54;
    case RC_ADDR(0x00009a58u): goto L_9A58;
    case RC_ADDR(0x00009a5au): goto L_9A5A;
    case RC_ADDR(0x00009a5eu): goto L_9A5E;
    case RC_ADDR(0x00009a60u): goto L_9A60;
    case RC_ADDR(0x00009a64u): goto L_9A64;
    case RC_ADDR(0x00009a6au): goto L_9A6A;
    case RC_ADDR(0x00009a70u): goto L_9A70;
    case RC_ADDR(0x00009a74u): goto L_9A74;
    case RC_ADDR(0x00009a76u): goto L_9A76;
    case RC_ADDR(0x00009a7au): goto L_9A7A;
    case RC_ADDR(0x00009a7eu): goto L_9A7E;
    case RC_ADDR(0x00009a82u): goto L_9A82;
    case RC_ADDR(0x00009a86u): goto L_9A86;
    case RC_ADDR(0x00009a8cu): goto L_9A8C;
    case RC_ADDR(0x00009a92u): goto L_9A92;
    case RC_ADDR(0x00009a96u): goto L_9A96;
    case RC_ADDR(0x00009a9au): goto L_9A9A;
    case RC_ADDR(0x00009a9eu): goto L_9A9E;
    case RC_ADDR(0x00009aa0u): goto L_9AA0;
    case RC_ADDR(0x00009aa6u): goto L_9AA6;
    case RC_ADDR(0x00009aacu): goto L_9AAC;
    case RC_ADDR(0x00009ab0u): goto L_9AB0;
    case RC_ADDR(0x00009ab4u): goto L_9AB4;
    case RC_ADDR(0x00009ab8u): goto L_9AB8;
    case RC_ADDR(0x00009abau): goto L_9ABA;
    case RC_ADDR(0x00009ac0u): goto L_9AC0;
    case RC_ADDR(0x00009ac6u): goto L_9AC6;
    case RC_ADDR(0x00009ac8u): goto L_9AC8;
    case RC_ADDR(0x00009aceu): goto L_9ACE;
    case RC_ADDR(0x00009ad4u): goto L_9AD4;
    case RC_ADDR(0x00009ad6u): goto L_9AD6;
    case RC_ADDR(0x00009adcu): goto L_9ADC;
    case RC_ADDR(0x00009ae2u): goto L_9AE2;
    case RC_ADDR(0x00009afeu): goto L_9AFE;
    case RC_ADDR(0x00009b04u): goto L_9B04;
    case RC_ADDR(0x00009b06u): goto L_9B06;
    case RC_ADDR(0x00009b08u): goto L_9B08;
    case RC_ADDR(0x00009b0cu): goto L_9B0C;
    case RC_ADDR(0x00009b10u): goto L_9B10;
    case RC_ADDR(0x00009b14u): goto L_9B14;
    case RC_ADDR(0x00009b18u): goto L_9B18;
    case RC_ADDR(0x00009b1cu): goto L_9B1C;
    case RC_ADDR(0x00009b1eu): goto L_9B1E;
    case RC_ADDR(0x00009b22u): goto L_9B22;
    case RC_ADDR(0x00009b24u): goto L_9B24;
    case RC_ADDR(0x00009b26u): goto L_9B26;
    case RC_ADDR(0x00009b2au): goto L_9B2A;
    case RC_ADDR(0x00009b2eu): goto L_9B2E;
    case RC_ADDR(0x00009b32u): goto L_9B32;
    case RC_ADDR(0x00009b36u): goto L_9B36;
    case RC_ADDR(0x00009b3au): goto L_9B3A;
    case RC_ADDR(0x00009b3cu): goto L_9B3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_96CE:
    /* 000096ce   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000096ceu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_96D2:
    /* 000096d2   4  tst.w (c96,A4) */
    c->pc = RC_ADDR(0x000096d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_set_nzvc(c, t0, RC_W);

L_96D6:
    /* 000096d6   2  bne 00009728 */
    c->pc = RC_ADDR(0x000096d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9728;

L_96D8:
    /* 000096d8   4  tst.w (ca8,A4) */
    c->pc = RC_ADDR(0x000096d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca8u));
    rc_set_nzvc(c, t0, RC_W);

L_96DC:
    /* 000096dc   2  beq 00009728 */
    c->pc = RC_ADDR(0x000096dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9728;

L_96DE:
    /* 000096de   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000096deu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_96E0:
    /* 000096e0   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000096e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_96E4:
    /* 000096e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000096e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_96E6:
    /* 000096e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000096e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_96E8:
    /* 000096e8   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x000096e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_96EC:
    /* 000096ec   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000096ecu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_96F0:
    /* 000096f0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000096f0u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96F4:
    /* 000096f4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000096f4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000096f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_96F8:
    /* 000096f8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000096f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_96FA:
    /* 000096fa   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x000096fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_96FE:
    /* 000096fe   4  sub.w (b26,A4),D0 */
    c->pc = RC_ADDR(0x000096feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb26u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9702:
    /* 00009702   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009702u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9704:
    /* 00009704   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00009704u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_9708:
    /* 00009708   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00009708u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_970C:
    /* 0000970c   4  sub.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x0000970cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9710:
    /* 00009710   6  move.w #2,(b02,A4) */
    c->pc = RC_ADDR(0x00009710u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9716:
    /* 00009716   6  move.w #8,(b26,A4) */
    c->pc = RC_ADDR(0x00009716u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_971C:
    /* 0000971c   6  move.w #8,(b24,A4) */
    c->pc = RC_ADDR(0x0000971cu);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9722:
    /* 00009722   6  move.w #1,(c96,A4) */
    c->pc = RC_ADDR(0x00009722u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xc96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9728:
    /* 00009728   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009728u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_972C:
    /* 0000972c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000972cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_972E:
    /* 0000972e   2  bra 00009752 */
    c->pc = RC_ADDR(0x0000972eu);
    rc_step(c, m, 10);
    goto L_9752;

L_9730:
    /* 00009730   6  cmpi.w #30,(ca6,A4) */
    c->pc = RC_ADDR(0x00009730u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca6u));
    rc_cmp(c, RC_W, t0, 0x00000030u);

L_9736:
    /* 00009736   2  bge 0000973c */
    c->pc = RC_ADDR(0x00009736u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_973C;

L_9738:
    /* 00009738   4  addq.w #1,(ca6,A4) */
    c->pc = RC_ADDR(0x00009738u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xca6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_973C:
    /* 0000973c   2  bra 0000975e */
    c->pc = RC_ADDR(0x0000973cu);
    rc_step(c, m, 10);
    goto L_975E;

L_973E:
    /* 0000973e   4  tst.w (ca6,A4) */
    c->pc = RC_ADDR(0x0000973eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca6u));
    rc_set_nzvc(c, t0, RC_W);

L_9742:
    /* 00009742   2  beq 00009750 */
    c->pc = RC_ADDR(0x00009742u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9750;

L_9744:
    /* 00009744   4  move.w (b26,A4),D0 */
    c->pc = RC_ADDR(0x00009744u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9748:
    /* 00009748   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00009748u);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_974C:
    /* 0000974c   4  sub.w D0,(ca6,A4) */
    c->pc = RC_ADDR(0x0000974cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xca6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9750:
    /* 00009750   2  bra 0000975e */
    c->pc = RC_ADDR(0x00009750u);
    rc_step(c, m, 10);
    goto L_975E;

L_9752:
    /* 00009752   2  tst.l D0 */
    c->pc = RC_ADDR(0x00009752u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_9754:
    /* 00009754   2  beq 00009730 */
    c->pc = RC_ADDR(0x00009754u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9730; }

L_9756:
    /* 00009756   6  sub.l #b,D0 */
    c->pc = RC_ADDR(0x00009756u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_975C:
    /* 0000975c   2  beq 0000973e */
    c->pc = RC_ADDR(0x0000975cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_973E; }

L_975E:
    /* 0000975e   4  subq.w #1,(b26,A4) */
    c->pc = RC_ADDR(0x0000975eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9762:
    /* 00009762   4  tst.w (b26,A4) */
    c->pc = RC_ADDR(0x00009762u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb26u));
    rc_set_nzvc(c, t0, RC_W);

L_9766:
    /* 00009766   4  bne 00009a10 */
    c->pc = RC_ADDR(0x00009766u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9A10;

L_976A:
    /* 0000976a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000976au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_976C:
    /* 0000976c   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x0000976cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9770:
    /* 00009770   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009770u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9772:
    /* 00009772   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009772u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9774:
    /* 00009774   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x00009774u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_9778:
    /* 00009778   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009778u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_977C:
    /* 0000977c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000977cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9780:
    /* 00009780   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00009780u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00009784u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_9784:
    /* 00009784   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009784u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9786:
    /* 00009786   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009786u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_978A:
    /* 0000978a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000978au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_978C:
    /* 0000978c   2  bra 000097be */
    c->pc = RC_ADDR(0x0000978cu);
    rc_step(c, m, 10);
    goto L_97BE;

L_978E:
    /* 0000978e   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x0000978eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9792:
    /* 00009792   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009792u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9794:
    /* 00009794   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00009794u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_9798:
    /* 00009798   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00009798u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_979C:
    /* 0000979c   4  sub.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x0000979cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_97A0:
    /* 000097a0   2  bra 000097ce */
    c->pc = RC_ADDR(0x000097a0u);
    rc_step(c, m, 10);
    goto L_97CE;

L_97A2:
    /* 000097a2   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x000097a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_97A6:
    /* 000097a6   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000097a6u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_97AA:
    /* 000097aa   4  add.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x000097aau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_97AE:
    /* 000097ae   2  bra 000097ce */
    c->pc = RC_ADDR(0x000097aeu);
    rc_step(c, m, 10);
    goto L_97CE;

L_97B0:
    /* 000097b0   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x000097b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_97B4:
    /* 000097b4   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000097b4u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_97B8:
    /* 000097b8   4  sub.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x000097b8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_97BC:
    /* 000097bc   2  bra 000097ce */
    c->pc = RC_ADDR(0x000097bcu);
    rc_step(c, m, 10);
    goto L_97CE;

L_97BE:
    /* 000097be   2  tst.l D0 */
    c->pc = RC_ADDR(0x000097beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_97C0:
    /* 000097c0   2  beq 0000978e */
    c->pc = RC_ADDR(0x000097c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_978E; }

L_97C2:
    /* 000097c2   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x000097c2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97C4:
    /* 000097c4   2  beq 000097b0 */
    c->pc = RC_ADDR(0x000097c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_97B0; }

L_97C6:
    /* 000097c6   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000097c6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97C8:
    /* 000097c8   2  beq 000097a2 */
    c->pc = RC_ADDR(0x000097c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_97A2; }

L_97CA:
    /* 000097ca   2  subq.l #7,D0 */
    c->pc = RC_ADDR(0x000097cau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_L, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97CC:
    /* 000097cc   2  beq 0000978e */
    c->pc = RC_ADDR(0x000097ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_978E; }

L_97CE:
    /* 000097ce   6  cmpi.w #1,(c96,A4) */
    c->pc = RC_ADDR(0x000097ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_97D4:
    /* 000097d4   4  bgt 00009882 */
    c->pc = RC_ADDR(0x000097d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_9882;

L_97D8:
    /* 000097d8   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000097d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_97DC:
    /* 000097dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000097dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_97DE:
    /* 000097de   4  bra 00009870 */
    c->pc = RC_ADDR(0x000097deu);
    rc_step(c, m, 10);
    goto L_9870;

L_97E2:
    /* 000097e2   6  move.w #1,(b02,A4) */
    c->pc = RC_ADDR(0x000097e2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_97E8:
    /* 000097e8   6  move.w #18,(b24,A4) */
    c->pc = RC_ADDR(0x000097e8u);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_97EE:
    /* 000097ee   4  bra 00009882 */
    c->pc = RC_ADDR(0x000097eeu);
    rc_step(c, m, 10);
    goto L_9882;

L_97F2:
    /* 000097f2   6  cmpi.w #2,(b00,A4) */
    c->pc = RC_ADDR(0x000097f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_97F8:
    /* 000097f8   2  bne 00009808 */
    c->pc = RC_ADDR(0x000097f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9808;

L_97FA:
    /* 000097fa   6  move.w #2,(b02,A4) */
    c->pc = RC_ADDR(0x000097fau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9800:
    /* 00009800   6  move.w #8,(b24,A4) */
    c->pc = RC_ADDR(0x00009800u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9806:
    /* 00009806   2  bra 0000981e */
    c->pc = RC_ADDR(0x00009806u);
    rc_step(c, m, 10);
    goto L_981E;

L_9808:
    /* 00009808   6  move.w #b,(b02,A4) */
    c->pc = RC_ADDR(0x00009808u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_980E:
    /* 0000980e   6  move.w #64,(b24,A4) */
    c->pc = RC_ADDR(0x0000980eu);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9814:
    /* 00009814   6  move.w #3,(c96,A4) */
    c->pc = RC_ADDR(0x00009814u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xc96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_981A:
    /* 0000981a   4  bra 00009a0a */
    c->pc = RC_ADDR(0x0000981au);
    rc_step(c, m, 10);
    goto L_9A0A;

L_981E:
    /* 0000981e   2  bra 00009882 */
    c->pc = RC_ADDR(0x0000981eu);
    rc_step(c, m, 10);
    goto L_9882;

L_9820:
    /* 00009820   4  move.w (b04,A4),D0 */
    c->pc = RC_ADDR(0x00009820u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb04u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9824:
    /* 00009824   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009824u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9826:
    /* 00009826   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00009826u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_982A:
    /* 0000982a   4  move.w D0,(b24,A4) */
    c->pc = RC_ADDR(0x0000982au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_982E:
    /* 0000982e   6  move.w #3,(b02,A4) */
    c->pc = RC_ADDR(0x0000982eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9834:
    /* 00009834   4  tst.w (b24,A4) */
    c->pc = RC_ADDR(0x00009834u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_set_nzvc(c, t0, RC_W);

L_9838:
    /* 00009838   2  bne 00009846 */
    c->pc = RC_ADDR(0x00009838u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9846;

L_983A:
    /* 0000983a   6  move.w #5,(b02,A4) */
    c->pc = RC_ADDR(0x0000983au);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9840:
    /* 00009840   6  move.w #4,(b24,A4) */
    c->pc = RC_ADDR(0x00009840u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9846:
    /* 00009846   4  tst.w (b24,A4) */
    c->pc = RC_ADDR(0x00009846u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_set_nzvc(c, t0, RC_W);

L_984A:
    /* 0000984a   2  bge 00009856 */
    c->pc = RC_ADDR(0x0000984au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9856;

L_984C:
    /* 0000984c   6  move.w #4,(b02,A4) */
    c->pc = RC_ADDR(0x0000984cu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9852:
    /* 00009852   4  neg.w (b24,A4) */
    c->pc = RC_ADDR(0x00009852u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb24u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9856:
    /* 00009856   4  addq.w #1,(b24,A4) */
    c->pc = RC_ADDR(0x00009856u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_985A:
    /* 0000985a   2  bra 00009882 */
    c->pc = RC_ADDR(0x0000985au);
    rc_step(c, m, 10);
    goto L_9882;

L_985C:
    /* 0000985c   6  move.w #2,(c96,A4) */
    c->pc = RC_ADDR(0x0000985cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xc96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9862:
    /* 00009862   2  bra 00009882 */
    c->pc = RC_ADDR(0x00009862u);
    rc_step(c, m, 10);
    goto L_9882;

L_9870:
    /* 00009870   6  cmp.l #6,D0 */
    c->pc = RC_ADDR(0x00009870u);
    rc_step(c, m, 14);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9876:
    /* 00009876   2  bcc 00009882 */
    c->pc = RC_ADDR(0x00009876u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_9882;

L_9878:
    /* 00009878   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009878u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_987A:
    /* 0000987a   4  move.w (00009864),D0 */
    c->pc = RC_ADDR(0x0000987au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00009864u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_987E:
    /* 0000987e   4  jmp (00009880) */
    c->pc = RC_ADDR(0x0000987eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00009880u) + t4);
    c->pc = t3;
    return;

L_9882:
    /* 00009882   6  cmpi.w #3,(c96,A4) */
    c->pc = RC_ADDR(0x00009882u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_9888:
    /* 00009888   4  bne 0000993c */
    c->pc = RC_ADDR(0x00009888u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_993C;

L_988C:
    /* 0000988c   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x0000988cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9890:
    /* 00009890   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009890u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9892:
    /* 00009892   4  bra 0000992c */
    c->pc = RC_ADDR(0x00009892u);
    rc_step(c, m, 10);
    goto L_992C;

L_9896:
    /* 00009896   6  move.w #b,(b02,A4) */
    c->pc = RC_ADDR(0x00009896u);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_989C:
    /* 0000989c   6  move.w #64,(b24,A4) */
    c->pc = RC_ADDR(0x0000989cu);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_98A2:
    /* 000098a2   4  bra 0000993c */
    c->pc = RC_ADDR(0x000098a2u);
    rc_step(c, m, 10);
    goto L_993C;

L_98A6:
    /* 000098a6   4  tst.w (ca8,A4) */
    c->pc = RC_ADDR(0x000098a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xca8u));
    rc_set_nzvc(c, t0, RC_W);

L_98AA:
    /* 000098aa   2  beq 0000990c */
    c->pc = RC_ADDR(0x000098aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_990C;

L_98AC:
    /* 000098ac   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000098acu);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_98B0:
    /* 000098b0   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x000098b0u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x000098b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_98B4:
    /* 000098b4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000098b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_98B6:
    /* 000098b6   4  cmp.w #64,D0 */
    c->pc = RC_ADDR(0x000098b6u);
    rc_step(c, m, 8);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_98BA:
    /* 000098ba   2  bgt 000098c4 */
    c->pc = RC_ADDR(0x000098bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_98C4;

L_98BC:
    /* 000098bc   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x000098bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_98C2:
    /* 000098c2   2  bne 0000990c */
    c->pc = RC_ADDR(0x000098c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_990C;

L_98C4:
    /* 000098c4   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x000098c4u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_98CA:
    /* 000098ca   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000098cau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_98CC:
    /* 000098cc   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000098ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_98D0:
    /* 000098d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000098d0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_98D2:
    /* 000098d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000098d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_98D4:
    /* 000098d4   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x000098d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_98D8:
    /* 000098d8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000098d8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_98DC:
    /* 000098dc   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000098dcu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_98E0:
    /* 000098e0   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000098e0u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000098e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_98E4:
    /* 000098e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000098e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_98E6:
    /* 000098e6   4  clr.w (ca8,A4) */
    c->pc = RC_ADDR(0x000098e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xca8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_98EA:
    /* 000098ea   6  move.w #6,(ac8,A4) */
    c->pc = RC_ADDR(0x000098eau);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0xac8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_98F0:
    /* 000098f0   6  move.w #c,(b02,A4) */
    c->pc = RC_ADDR(0x000098f0u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_98F6:
    /* 000098f6   4  clr.w (b04,A4) */
    c->pc = RC_ADDR(0x000098f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb04u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_98FA:
    /* 000098fa   4  clr.w (b14,A4) */
    c->pc = RC_ADDR(0x000098fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_98FE:
    /* 000098fe   6  move.w #2d,(b24,A4) */
    c->pc = RC_ADDR(0x000098feu);
    rc_step(c, m, 16);
    t0 = 0x0000002du;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9904:
    /* 00009904   6  move.w #40,(ca6,A4) */
    c->pc = RC_ADDR(0x00009904u);
    rc_step(c, m, 16);
    t0 = 0x00000040u;
    rc_wr16(c, m, (c->a[4] + 0xca6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_990A:
    /* 0000990a   2  bra 0000993c */
    c->pc = RC_ADDR(0x0000990au);
    rc_step(c, m, 10);
    goto L_993C;

L_990C:
    /* 0000990c   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0000990cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9912:
    /* 00009912   6  move.w #1,(85a,A4) */
    c->pc = RC_ADDR(0x00009912u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x85au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9918:
    /* 00009918   6  move.w #1,(caa,A4) */
    c->pc = RC_ADDR(0x00009918u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xcaau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_991E:
    /* 0000991e   2  bra 0000993c */
    c->pc = RC_ADDR(0x0000991eu);
    rc_step(c, m, 10);
    goto L_993C;

L_9920:
    /* 00009920   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x00009920u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9924:
    /* 00009924   6  move.w #1,(caa,A4) */
    c->pc = RC_ADDR(0x00009924u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xcaau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_992A:
    /* 0000992a   2  bra 0000993c */
    c->pc = RC_ADDR(0x0000992au);
    rc_step(c, m, 10);
    goto L_993C;

L_992C:
    /* 0000992c   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x0000992cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_992E:
    /* 0000992e   4  beq 00009896 */
    c->pc = RC_ADDR(0x0000992eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9896; }

L_9932:
    /* 00009932   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00009932u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9934:
    /* 00009934   4  beq 000098a6 */
    c->pc = RC_ADDR(0x00009934u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_98A6; }

L_9938:
    /* 00009938   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00009938u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_993A:
    /* 0000993a   2  beq 00009920 */
    c->pc = RC_ADDR(0x0000993au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9920; }

L_993C:
    /* 0000993c   6  cmpi.w #2,(c96,A4) */
    c->pc = RC_ADDR(0x0000993cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_9942:
    /* 00009942   4  bne 000099f6 */
    c->pc = RC_ADDR(0x00009942u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_99F6;

L_9946:
    /* 00009946   4  move.w (b36,A4),D0 */
    c->pc = RC_ADDR(0x00009946u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_994A:
    /* 0000994a   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x0000994au);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_994E:
    /* 0000994e   4  move.w (b38,A4),D1 */
    c->pc = RC_ADDR(0x0000994eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9952:
    /* 00009952   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009952u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9954:
    /* 00009954   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00009954u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_9956:
    /* 00009956   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00009956u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9958:
    /* 00009958   4  lea (ffff8f88,A4),A0 */
    c->pc = RC_ADDR(0x00009958u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7078u);

L_995C:
    /* 0000995c   6  move.w (0,A0,D0.w),(b02,A4) */
    c->pc = RC_ADDR(0x0000995cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9962:
    /* 00009962   4  addq.w #1,(b38,A4) */
    c->pc = RC_ADDR(0x00009962u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9966:
    /* 00009966   4  move.w (b36,A4),D0 */
    c->pc = RC_ADDR(0x00009966u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_996A:
    /* 0000996a   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x0000996au);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_996E:
    /* 0000996e   4  move.w (b38,A4),D1 */
    c->pc = RC_ADDR(0x0000996eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9972:
    /* 00009972   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009972u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9974:
    /* 00009974   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00009974u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_9976:
    /* 00009976   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00009976u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9978:
    /* 00009978   4  lea (ffff8f88,A4),A0 */
    c->pc = RC_ADDR(0x00009978u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7078u);

L_997C:
    /* 0000997c   6  move.w (0,A0,D0.w),(b24,A4) */
    c->pc = RC_ADDR(0x0000997cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9982:
    /* 00009982   4  addq.w #1,(b38,A4) */
    c->pc = RC_ADDR(0x00009982u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9986:
    /* 00009986   4  move.w (b36,A4),D0 */
    c->pc = RC_ADDR(0x00009986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_998A:
    /* 0000998a   4  muls.w #30,D0 */
    c->pc = RC_ADDR(0x0000998au);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 0, t0);

L_998E:
    /* 0000998e   4  move.w (b38,A4),D1 */
    c->pc = RC_ADDR(0x0000998eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9992:
    /* 00009992   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009992u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9994:
    /* 00009994   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00009994u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_9996:
    /* 00009996   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00009996u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9998:
    /* 00009998   4  lea (ffff8f88,A4),A0 */
    c->pc = RC_ADDR(0x00009998u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7078u);

L_999C:
    /* 0000999c   6  cmpi.w #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000999cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_99A2:
    /* 000099a2   2  bne 000099b6 */
    c->pc = RC_ADDR(0x000099a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_99B6;

L_99A4:
    /* 000099a4   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x000099a4u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_99A8:
    /* 000099a8   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x000099a8u);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x000099acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_99AC:
    /* 000099ac   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000099acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_99AE:
    /* 000099ae   4  move.w D0,(b36,A4) */
    c->pc = RC_ADDR(0x000099aeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xb36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99B2:
    /* 000099b2   4  clr.w (b38,A4) */
    c->pc = RC_ADDR(0x000099b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xb38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_99B6:
    /* 000099b6   4  move.w (ffff8f86,A4),D0 */
    c->pc = RC_ADDR(0x000099b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x707au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_99BA:
    /* 000099ba   4  subq.w #1,(ffff8f86,A4) */
    c->pc = RC_ADDR(0x000099bau);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x707au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_99BE:
    /* 000099be   2  tst.w D0 */
    c->pc = RC_ADDR(0x000099beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_99C0:
    /* 000099c0   2  bne 000099f6 */
    c->pc = RC_ADDR(0x000099c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_99F6;

L_99C2:
    /* 000099c2   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x000099c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_99C6:
    /* 000099c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000099c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_99C8:
    /* 000099c8   2  bra 000099e6 */
    c->pc = RC_ADDR(0x000099c8u);
    rc_step(c, m, 10);
    goto L_99E6;

L_99CA:
    /* 000099ca   6  move.w #b,(b02,A4) */
    c->pc = RC_ADDR(0x000099cau);
    rc_step(c, m, 16);
    t0 = 0x0000000bu;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99D0:
    /* 000099d0   6  move.w #64,(b24,A4) */
    c->pc = RC_ADDR(0x000099d0u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99D6:
    /* 000099d6   2  bra 000099f0 */
    c->pc = RC_ADDR(0x000099d6u);
    rc_step(c, m, 10);
    goto L_99F0;

L_99D8:
    /* 000099d8   6  move.w #8,(b02,A4) */
    c->pc = RC_ADDR(0x000099d8u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99DE:
    /* 000099de   6  move.w #4,(b24,A4) */
    c->pc = RC_ADDR(0x000099deu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xb24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99E4:
    /* 000099e4   2  bra 000099f0 */
    c->pc = RC_ADDR(0x000099e4u);
    rc_step(c, m, 10);
    goto L_99F0;

L_99E6:
    /* 000099e6   2  tst.l D0 */
    c->pc = RC_ADDR(0x000099e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_99E8:
    /* 000099e8   2  beq 000099ca */
    c->pc = RC_ADDR(0x000099e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_99CA; }

L_99EA:
    /* 000099ea   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000099eau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_99EC:
    /* 000099ec   2  beq 000099ca */
    c->pc = RC_ADDR(0x000099ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_99CA; }

L_99EE:
    /* 000099ee   2  bra 000099d8 */
    c->pc = RC_ADDR(0x000099eeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_99D8;

L_99F0:
    /* 000099f0   6  move.w #3,(c96,A4) */
    c->pc = RC_ADDR(0x000099f0u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xc96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_99F6:
    /* 000099f6   6  cmpi.w #4,(c96,A4) */
    c->pc = RC_ADDR(0x000099f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_99FC:
    /* 000099fc   2  bne 00009a0a */
    c->pc = RC_ADDR(0x000099fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9A0A;

L_99FE:
    /* 000099fe   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x000099feu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A04:
    /* 00009a04   6  move.w #1,(caa,A4) */
    c->pc = RC_ADDR(0x00009a04u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xcaau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A0A:
    /* 00009a0a   6  move.w (b24,A4),(b26,A4) */
    c->pc = RC_ADDR(0x00009a0au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A10:
    /* 00009a10   4  move.w (c92,A4),D0 */
    c->pc = RC_ADDR(0x00009a10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc92u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A14:
    /* 00009a14   4  or.w (c94,A4),D0 */
    c->pc = RC_ADDR(0x00009a14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc94u));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_9A18:
    /* 00009a18   4  bne 00009b10 */
    c->pc = RC_ADDR(0x00009a18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9B10;

L_9A1C:
    /* 00009a1c   6  cmpi.w #4,(c96,A4) */
    c->pc = RC_ADDR(0x00009a1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xc96u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_9A22:
    /* 00009a22   4  beq 00009b10 */
    c->pc = RC_ADDR(0x00009a22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9B10;

L_9A26:
    /* 00009a26   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009a26u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A2A:
    /* 00009a2a   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x00009a2au);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x00009a2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_9A2E:
    /* 00009a2e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009a2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9A30:
    /* 00009a30   4  move.w (b26,A4),D0 */
    c->pc = RC_ADDR(0x00009a30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A34:
    /* 00009a34   4  sub.w D0,(b24,A4) */
    c->pc = RC_ADDR(0x00009a34u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9A38:
    /* 00009a38   6  move.w #4,(c96,A4) */
    c->pc = RC_ADDR(0x00009a38u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xc96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A3E:
    /* 00009a3e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009a3eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9A40:
    /* 00009a40   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009a40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A44:
    /* 00009a44   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009a44u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9A46:
    /* 00009a46   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009a46u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9A48:
    /* 00009a48   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x00009a48u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_9A4C:
    /* 00009a4c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009a4cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A50:
    /* 00009a50   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009a50u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A54:
    /* 00009a54   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00009a54u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00009a58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_9A58:
    /* 00009a58   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009a58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9A5A:
    /* 00009a5a   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009a5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A5E:
    /* 00009a5e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009a5eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9A60:
    /* 00009a60   4  bra 00009afe */
    c->pc = RC_ADDR(0x00009a60u);
    rc_step(c, m, 10);
    goto L_9AFE;

L_9A64:
    /* 00009a64   6  move.w #7,(b02,A4) */
    c->pc = RC_ADDR(0x00009a64u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A6A:
    /* 00009a6a   6  move.w #32,(b26,A4) */
    c->pc = RC_ADDR(0x00009a6au);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A70:
    /* 00009a70   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x00009a70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A74:
    /* 00009a74   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009a74u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9A76:
    /* 00009a76   4  divs.w #6,D0 */
    c->pc = RC_ADDR(0x00009a76u);
    rc_step(c, m, 162);
    t0 = 0x00000006u;
    rc_divs(c, m, 0, t0);

L_9A7A:
    /* 00009a7a   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x00009a7au);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_9A7E:
    /* 00009a7e   4  sub.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x00009a7eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9A82:
    /* 00009a82   4  bra 00009b10 */
    c->pc = RC_ADDR(0x00009a82u);
    rc_step(c, m, 10);
    goto L_9B10;

L_9A86:
    /* 00009a86   6  move.w #a,(b02,A4) */
    c->pc = RC_ADDR(0x00009a86u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A8C:
    /* 00009a8c   6  move.w #32,(b26,A4) */
    c->pc = RC_ADDR(0x00009a8cu);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A92:
    /* 00009a92   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x00009a92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9A96:
    /* 00009a96   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00009a96u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_9A9A:
    /* 00009a9a   4  add.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x00009a9au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9A9E:
    /* 00009a9e   2  bra 00009b10 */
    c->pc = RC_ADDR(0x00009a9eu);
    rc_step(c, m, 10);
    goto L_9B10;

L_9AA0:
    /* 00009aa0   6  move.w #a,(b02,A4) */
    c->pc = RC_ADDR(0x00009aa0u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AA6:
    /* 00009aa6   6  move.w #32,(b26,A4) */
    c->pc = RC_ADDR(0x00009aa6u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AAC:
    /* 00009aac   4  move.w (b24,A4),D0 */
    c->pc = RC_ADDR(0x00009aacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AB0:
    /* 00009ab0   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00009ab0u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_9AB4:
    /* 00009ab4   4  sub.w D0,(b04,A4) */
    c->pc = RC_ADDR(0x00009ab4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xb04u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9AB8:
    /* 00009ab8   2  bra 00009b10 */
    c->pc = RC_ADDR(0x00009ab8u);
    rc_step(c, m, 10);
    goto L_9B10;

L_9ABA:
    /* 00009aba   6  move.w #a,(b02,A4) */
    c->pc = RC_ADDR(0x00009abau);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AC0:
    /* 00009ac0   6  move.w #32,(b26,A4) */
    c->pc = RC_ADDR(0x00009ac0u);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AC6:
    /* 00009ac6   2  bra 00009b10 */
    c->pc = RC_ADDR(0x00009ac6u);
    rc_step(c, m, 10);
    goto L_9B10;

L_9AC8:
    /* 00009ac8   6  move.w #d,(b02,A4) */
    c->pc = RC_ADDR(0x00009ac8u);
    rc_step(c, m, 16);
    t0 = 0x0000000du;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9ACE:
    /* 00009ace   6  move.w #14,(b26,A4) */
    c->pc = RC_ADDR(0x00009aceu);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AD4:
    /* 00009ad4   2  bra 00009b10 */
    c->pc = RC_ADDR(0x00009ad4u);
    rc_step(c, m, 10);
    goto L_9B10;

L_9AD6:
    /* 00009ad6   6  move.w #7,(b02,A4) */
    c->pc = RC_ADDR(0x00009ad6u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0xb02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9ADC:
    /* 00009adc   6  move.w #32,(b26,A4) */
    c->pc = RC_ADDR(0x00009adcu);
    rc_step(c, m, 16);
    t0 = 0x00000032u;
    rc_wr16(c, m, (c->a[4] + 0xb26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AE2:
    /* 00009ae2   2  bra 00009b10 */
    c->pc = RC_ADDR(0x00009ae2u);
    rc_step(c, m, 10);
    goto L_9B10;

L_9AFE:
    /* 00009afe   6  cmp.l #d,D0 */
    c->pc = RC_ADDR(0x00009afeu);
    rc_step(c, m, 14);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9B04:
    /* 00009b04   2  bcc 00009ad6 */
    c->pc = RC_ADDR(0x00009b04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_9AD6; }

L_9B06:
    /* 00009b06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009b06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_9B08:
    /* 00009b08   4  move.w (00009ae4),D0 */
    c->pc = RC_ADDR(0x00009b08u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00009ae4u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B0C:
    /* 00009b0c   4  jmp (00009b0e) */
    c->pc = RC_ADDR(0x00009b0cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00009b0eu) + t4);
    c->pc = t3;
    return;

L_9B10:
    /* 00009b10   4  move.w (ac8,A4),-(A7) */
    c->pc = RC_ADDR(0x00009b10u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xac8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B14:
    /* 00009b14   4  move.w (b14,A4),-(A7) */
    c->pc = RC_ADDR(0x00009b14u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B18:
    /* 00009b18   4  move.w (b04,A4),-(A7) */
    c->pc = RC_ADDR(0x00009b18u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb04u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B1C:
    /* 00009b1c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009b1cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9B1E:
    /* 00009b1e   4  move.w (b02,A4),D0 */
    c->pc = RC_ADDR(0x00009b1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xb02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B22:
    /* 00009b22   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009b22u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9B24:
    /* 00009b24   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00009b24u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_9B26:
    /* 00009b26   4  lea (b3a,A4),A0 */
    c->pc = RC_ADDR(0x00009b26u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb3au);

L_9B2A:
    /* 00009b2a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00009b2au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B2E:
    /* 00009b2e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009b2eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B32:
    /* 00009b32   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00009b32u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009b36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_9B36:
    /* 00009b36   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009b36u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_9B3A:
    /* 00009b3a   2  unlk A5 */
    c->pc = RC_ADDR(0x00009b3au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9B3C:
    /* 00009b3c   2  rts */
    c->pc = RC_ADDR(0x00009b3cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
