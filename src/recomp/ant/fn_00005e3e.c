/* fn_00005e3e - 1116 byte(s), 325 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005e3e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00005e3eu): goto L_5E3E;
    case RC_ADDR(0x00005e42u): goto L_5E42;
    case RC_ADDR(0x00005e46u): goto L_5E46;
    case RC_ADDR(0x00005e4au): goto L_5E4A;
    case RC_ADDR(0x00005e4eu): goto L_5E4E;
    case RC_ADDR(0x00005e50u): goto L_5E50;
    case RC_ADDR(0x00005e54u): goto L_5E54;
    case RC_ADDR(0x00005e5au): goto L_5E5A;
    case RC_ADDR(0x00005e5eu): goto L_5E5E;
    case RC_ADDR(0x00005e64u): goto L_5E64;
    case RC_ADDR(0x00005e68u): goto L_5E68;
    case RC_ADDR(0x00005e6au): goto L_5E6A;
    case RC_ADDR(0x00005e6eu): goto L_5E6E;
    case RC_ADDR(0x00005e70u): goto L_5E70;
    case RC_ADDR(0x00005e74u): goto L_5E74;
    case RC_ADDR(0x00005e78u): goto L_5E78;
    case RC_ADDR(0x00005e7cu): goto L_5E7C;
    case RC_ADDR(0x00005e82u): goto L_5E82;
    case RC_ADDR(0x00005e88u): goto L_5E88;
    case RC_ADDR(0x00005e8au): goto L_5E8A;
    case RC_ADDR(0x00005e8eu): goto L_5E8E;
    case RC_ADDR(0x00005e92u): goto L_5E92;
    case RC_ADDR(0x00005e94u): goto L_5E94;
    case RC_ADDR(0x00005e98u): goto L_5E98;
    case RC_ADDR(0x00005e9cu): goto L_5E9C;
    case RC_ADDR(0x00005ea2u): goto L_5EA2;
    case RC_ADDR(0x00005ea4u): goto L_5EA4;
    case RC_ADDR(0x00005eaau): goto L_5EAA;
    case RC_ADDR(0x00005eacu): goto L_5EAC;
    case RC_ADDR(0x00005eb2u): goto L_5EB2;
    case RC_ADDR(0x00005eb4u): goto L_5EB4;
    case RC_ADDR(0x00005eb8u): goto L_5EB8;
    case RC_ADDR(0x00005ebau): goto L_5EBA;
    case RC_ADDR(0x00005ebeu): goto L_5EBE;
    case RC_ADDR(0x00005ec2u): goto L_5EC2;
    case RC_ADDR(0x00005ec4u): goto L_5EC4;
    case RC_ADDR(0x00005ec6u): goto L_5EC6;
    case RC_ADDR(0x00005ec8u): goto L_5EC8;
    case RC_ADDR(0x00005eceu): goto L_5ECE;
    case RC_ADDR(0x00005ed0u): goto L_5ED0;
    case RC_ADDR(0x00005ed2u): goto L_5ED2;
    case RC_ADDR(0x00005ed4u): goto L_5ED4;
    case RC_ADDR(0x00005ed6u): goto L_5ED6;
    case RC_ADDR(0x00005edau): goto L_5EDA;
    case RC_ADDR(0x00005edeu): goto L_5EDE;
    case RC_ADDR(0x00005ee2u): goto L_5EE2;
    case RC_ADDR(0x00005ee6u): goto L_5EE6;
    case RC_ADDR(0x00005eeau): goto L_5EEA;
    case RC_ADDR(0x00005eeeu): goto L_5EEE;
    case RC_ADDR(0x00005ef0u): goto L_5EF0;
    case RC_ADDR(0x00005ef2u): goto L_5EF2;
    case RC_ADDR(0x00005ef6u): goto L_5EF6;
    case RC_ADDR(0x00005ef8u): goto L_5EF8;
    case RC_ADDR(0x00005efcu): goto L_5EFC;
    case RC_ADDR(0x00005f00u): goto L_5F00;
    case RC_ADDR(0x00005f04u): goto L_5F04;
    case RC_ADDR(0x00005f08u): goto L_5F08;
    case RC_ADDR(0x00005f0au): goto L_5F0A;
    case RC_ADDR(0x00005f10u): goto L_5F10;
    case RC_ADDR(0x00005f16u): goto L_5F16;
    case RC_ADDR(0x00005f1au): goto L_5F1A;
    case RC_ADDR(0x00005f1eu): goto L_5F1E;
    case RC_ADDR(0x00005f20u): goto L_5F20;
    case RC_ADDR(0x00005f22u): goto L_5F22;
    case RC_ADDR(0x00005f26u): goto L_5F26;
    case RC_ADDR(0x00005f2au): goto L_5F2A;
    case RC_ADDR(0x00005f2eu): goto L_5F2E;
    case RC_ADDR(0x00005f30u): goto L_5F30;
    case RC_ADDR(0x00005f34u): goto L_5F34;
    case RC_ADDR(0x00005f36u): goto L_5F36;
    case RC_ADDR(0x00005f38u): goto L_5F38;
    case RC_ADDR(0x00005f3cu): goto L_5F3C;
    case RC_ADDR(0x00005f40u): goto L_5F40;
    case RC_ADDR(0x00005f44u): goto L_5F44;
    case RC_ADDR(0x00005f46u): goto L_5F46;
    case RC_ADDR(0x00005f4au): goto L_5F4A;
    case RC_ADDR(0x00005f4cu): goto L_5F4C;
    case RC_ADDR(0x00005f4eu): goto L_5F4E;
    case RC_ADDR(0x00005f52u): goto L_5F52;
    case RC_ADDR(0x00005f56u): goto L_5F56;
    case RC_ADDR(0x00005f5au): goto L_5F5A;
    case RC_ADDR(0x00005f5cu): goto L_5F5C;
    case RC_ADDR(0x00005f60u): goto L_5F60;
    case RC_ADDR(0x00005f62u): goto L_5F62;
    case RC_ADDR(0x00005f64u): goto L_5F64;
    case RC_ADDR(0x00005f68u): goto L_5F68;
    case RC_ADDR(0x00005f6cu): goto L_5F6C;
    case RC_ADDR(0x00005f70u): goto L_5F70;
    case RC_ADDR(0x00005f72u): goto L_5F72;
    case RC_ADDR(0x00005f76u): goto L_5F76;
    case RC_ADDR(0x00005f78u): goto L_5F78;
    case RC_ADDR(0x00005f7au): goto L_5F7A;
    case RC_ADDR(0x00005f7eu): goto L_5F7E;
    case RC_ADDR(0x00005f82u): goto L_5F82;
    case RC_ADDR(0x00005f86u): goto L_5F86;
    case RC_ADDR(0x00005f88u): goto L_5F88;
    case RC_ADDR(0x00005f8cu): goto L_5F8C;
    case RC_ADDR(0x00005f8eu): goto L_5F8E;
    case RC_ADDR(0x00005f92u): goto L_5F92;
    case RC_ADDR(0x00005f96u): goto L_5F96;
    case RC_ADDR(0x00005f9au): goto L_5F9A;
    case RC_ADDR(0x00005f9eu): goto L_5F9E;
    case RC_ADDR(0x00005fa4u): goto L_5FA4;
    case RC_ADDR(0x00005fa8u): goto L_5FA8;
    case RC_ADDR(0x00005faau): goto L_5FAA;
    case RC_ADDR(0x00005facu): goto L_5FAC;
    case RC_ADDR(0x00005fb0u): goto L_5FB0;
    case RC_ADDR(0x00005fb4u): goto L_5FB4;
    case RC_ADDR(0x00005fb8u): goto L_5FB8;
    case RC_ADDR(0x00005fbcu): goto L_5FBC;
    case RC_ADDR(0x00005fc0u): goto L_5FC0;
    case RC_ADDR(0x00005fc2u): goto L_5FC2;
    case RC_ADDR(0x00005fc6u): goto L_5FC6;
    case RC_ADDR(0x00005fcau): goto L_5FCA;
    case RC_ADDR(0x00005fccu): goto L_5FCC;
    case RC_ADDR(0x00005fd0u): goto L_5FD0;
    case RC_ADDR(0x00005fd6u): goto L_5FD6;
    case RC_ADDR(0x00005fd8u): goto L_5FD8;
    case RC_ADDR(0x00005fdcu): goto L_5FDC;
    case RC_ADDR(0x00005fe0u): goto L_5FE0;
    case RC_ADDR(0x00005fe2u): goto L_5FE2;
    case RC_ADDR(0x00005fe6u): goto L_5FE6;
    case RC_ADDR(0x00005fe8u): goto L_5FE8;
    case RC_ADDR(0x00005feau): goto L_5FEA;
    case RC_ADDR(0x00005feeu): goto L_5FEE;
    case RC_ADDR(0x00005ff2u): goto L_5FF2;
    case RC_ADDR(0x00005ff6u): goto L_5FF6;
    case RC_ADDR(0x00005ff8u): goto L_5FF8;
    case RC_ADDR(0x00005ffcu): goto L_5FFC;
    case RC_ADDR(0x00005ffeu): goto L_5FFE;
    case RC_ADDR(0x00006002u): goto L_6002;
    case RC_ADDR(0x00006004u): goto L_6004;
    case RC_ADDR(0x00006006u): goto L_6006;
    case RC_ADDR(0x00006008u): goto L_6008;
    case RC_ADDR(0x0000600au): goto L_600A;
    case RC_ADDR(0x0000600eu): goto L_600E;
    case RC_ADDR(0x00006012u): goto L_6012;
    case RC_ADDR(0x00006016u): goto L_6016;
    case RC_ADDR(0x0000601au): goto L_601A;
    case RC_ADDR(0x0000601eu): goto L_601E;
    case RC_ADDR(0x00006022u): goto L_6022;
    case RC_ADDR(0x00006024u): goto L_6024;
    case RC_ADDR(0x00006028u): goto L_6028;
    case RC_ADDR(0x0000602eu): goto L_602E;
    case RC_ADDR(0x00006030u): goto L_6030;
    case RC_ADDR(0x00006032u): goto L_6032;
    case RC_ADDR(0x00006034u): goto L_6034;
    case RC_ADDR(0x00006038u): goto L_6038;
    case RC_ADDR(0x0000603cu): goto L_603C;
    case RC_ADDR(0x00006040u): goto L_6040;
    case RC_ADDR(0x00006044u): goto L_6044;
    case RC_ADDR(0x00006048u): goto L_6048;
    case RC_ADDR(0x0000604cu): goto L_604C;
    case RC_ADDR(0x00006050u): goto L_6050;
    case RC_ADDR(0x00006054u): goto L_6054;
    case RC_ADDR(0x00006058u): goto L_6058;
    case RC_ADDR(0x0000605cu): goto L_605C;
    case RC_ADDR(0x0000605eu): goto L_605E;
    case RC_ADDR(0x00006062u): goto L_6062;
    case RC_ADDR(0x00006066u): goto L_6066;
    case RC_ADDR(0x00006068u): goto L_6068;
    case RC_ADDR(0x0000606cu): goto L_606C;
    case RC_ADDR(0x00006070u): goto L_6070;
    case RC_ADDR(0x00006072u): goto L_6072;
    case RC_ADDR(0x00006076u): goto L_6076;
    case RC_ADDR(0x0000607au): goto L_607A;
    case RC_ADDR(0x0000607eu): goto L_607E;
    case RC_ADDR(0x00006080u): goto L_6080;
    case RC_ADDR(0x00006082u): goto L_6082;
    case RC_ADDR(0x00006086u): goto L_6086;
    case RC_ADDR(0x00006088u): goto L_6088;
    case RC_ADDR(0x0000608cu): goto L_608C;
    case RC_ADDR(0x00006090u): goto L_6090;
    case RC_ADDR(0x00006094u): goto L_6094;
    case RC_ADDR(0x00006096u): goto L_6096;
    case RC_ADDR(0x0000609cu): goto L_609C;
    case RC_ADDR(0x000060a0u): goto L_60A0;
    case RC_ADDR(0x000060a4u): goto L_60A4;
    case RC_ADDR(0x000060a6u): goto L_60A6;
    case RC_ADDR(0x000060aau): goto L_60AA;
    case RC_ADDR(0x000060aeu): goto L_60AE;
    case RC_ADDR(0x000060b0u): goto L_60B0;
    case RC_ADDR(0x000060b4u): goto L_60B4;
    case RC_ADDR(0x000060b6u): goto L_60B6;
    case RC_ADDR(0x000060bau): goto L_60BA;
    case RC_ADDR(0x000060beu): goto L_60BE;
    case RC_ADDR(0x000060c0u): goto L_60C0;
    case RC_ADDR(0x000060c4u): goto L_60C4;
    case RC_ADDR(0x000060cau): goto L_60CA;
    case RC_ADDR(0x000060d0u): goto L_60D0;
    case RC_ADDR(0x000060d4u): goto L_60D4;
    case RC_ADDR(0x000060d8u): goto L_60D8;
    case RC_ADDR(0x000060dau): goto L_60DA;
    case RC_ADDR(0x000060deu): goto L_60DE;
    case RC_ADDR(0x000060e0u): goto L_60E0;
    case RC_ADDR(0x000060e4u): goto L_60E4;
    case RC_ADDR(0x000060e8u): goto L_60E8;
    case RC_ADDR(0x000060eau): goto L_60EA;
    case RC_ADDR(0x000060eeu): goto L_60EE;
    case RC_ADDR(0x000060f2u): goto L_60F2;
    case RC_ADDR(0x000060f6u): goto L_60F6;
    case RC_ADDR(0x000060f8u): goto L_60F8;
    case RC_ADDR(0x000060fcu): goto L_60FC;
    case RC_ADDR(0x000060feu): goto L_60FE;
    case RC_ADDR(0x00006104u): goto L_6104;
    case RC_ADDR(0x0000610au): goto L_610A;
    case RC_ADDR(0x0000610cu): goto L_610C;
    case RC_ADDR(0x00006110u): goto L_6110;
    case RC_ADDR(0x00006114u): goto L_6114;
    case RC_ADDR(0x00006118u): goto L_6118;
    case RC_ADDR(0x0000611cu): goto L_611C;
    case RC_ADDR(0x00006120u): goto L_6120;
    case RC_ADDR(0x00006128u): goto L_6128;
    case RC_ADDR(0x00006130u): goto L_6130;
    case RC_ADDR(0x00006136u): goto L_6136;
    case RC_ADDR(0x00006138u): goto L_6138;
    case RC_ADDR(0x0000613au): goto L_613A;
    case RC_ADDR(0x0000613cu): goto L_613C;
    case RC_ADDR(0x00006140u): goto L_6140;
    case RC_ADDR(0x00006144u): goto L_6144;
    case RC_ADDR(0x00006148u): goto L_6148;
    case RC_ADDR(0x0000614cu): goto L_614C;
    case RC_ADDR(0x0000614eu): goto L_614E;
    case RC_ADDR(0x00006152u): goto L_6152;
    case RC_ADDR(0x00006156u): goto L_6156;
    case RC_ADDR(0x00006158u): goto L_6158;
    case RC_ADDR(0x0000615cu): goto L_615C;
    case RC_ADDR(0x00006160u): goto L_6160;
    case RC_ADDR(0x00006164u): goto L_6164;
    case RC_ADDR(0x00006168u): goto L_6168;
    case RC_ADDR(0x0000616au): goto L_616A;
    case RC_ADDR(0x0000616cu): goto L_616C;
    case RC_ADDR(0x0000616eu): goto L_616E;
    case RC_ADDR(0x00006170u): goto L_6170;
    case RC_ADDR(0x00006172u): goto L_6172;
    case RC_ADDR(0x00006174u): goto L_6174;
    case RC_ADDR(0x00006178u): goto L_6178;
    case RC_ADDR(0x0000617cu): goto L_617C;
    case RC_ADDR(0x00006180u): goto L_6180;
    case RC_ADDR(0x00006184u): goto L_6184;
    case RC_ADDR(0x00006188u): goto L_6188;
    case RC_ADDR(0x0000618cu): goto L_618C;
    case RC_ADDR(0x00006190u): goto L_6190;
    case RC_ADDR(0x00006192u): goto L_6192;
    case RC_ADDR(0x00006196u): goto L_6196;
    case RC_ADDR(0x00006198u): goto L_6198;
    case RC_ADDR(0x0000619au): goto L_619A;
    case RC_ADDR(0x0000619cu): goto L_619C;
    case RC_ADDR(0x0000619eu): goto L_619E;
    case RC_ADDR(0x000061a0u): goto L_61A0;
    case RC_ADDR(0x000061a4u): goto L_61A4;
    case RC_ADDR(0x000061a8u): goto L_61A8;
    case RC_ADDR(0x000061acu): goto L_61AC;
    case RC_ADDR(0x000061b0u): goto L_61B0;
    case RC_ADDR(0x000061b6u): goto L_61B6;
    case RC_ADDR(0x000061b8u): goto L_61B8;
    case RC_ADDR(0x000061bau): goto L_61BA;
    case RC_ADDR(0x000061bcu): goto L_61BC;
    case RC_ADDR(0x000061c0u): goto L_61C0;
    case RC_ADDR(0x000061c4u): goto L_61C4;
    case RC_ADDR(0x000061c8u): goto L_61C8;
    case RC_ADDR(0x000061ccu): goto L_61CC;
    case RC_ADDR(0x000061ceu): goto L_61CE;
    case RC_ADDR(0x000061d2u): goto L_61D2;
    case RC_ADDR(0x000061d4u): goto L_61D4;
    case RC_ADDR(0x000061d6u): goto L_61D6;
    case RC_ADDR(0x000061dcu): goto L_61DC;
    case RC_ADDR(0x000061e2u): goto L_61E2;
    case RC_ADDR(0x000061e4u): goto L_61E4;
    case RC_ADDR(0x000061e8u): goto L_61E8;
    case RC_ADDR(0x000061ecu): goto L_61EC;
    case RC_ADDR(0x000061f0u): goto L_61F0;
    case RC_ADDR(0x000061f4u): goto L_61F4;
    case RC_ADDR(0x000061f8u): goto L_61F8;
    case RC_ADDR(0x000061fau): goto L_61FA;
    case RC_ADDR(0x000061fcu): goto L_61FC;
    case RC_ADDR(0x000061feu): goto L_61FE;
    case RC_ADDR(0x00006200u): goto L_6200;
    case RC_ADDR(0x00006202u): goto L_6202;
    case RC_ADDR(0x00006204u): goto L_6204;
    case RC_ADDR(0x00006208u): goto L_6208;
    case RC_ADDR(0x0000620cu): goto L_620C;
    case RC_ADDR(0x00006210u): goto L_6210;
    case RC_ADDR(0x00006214u): goto L_6214;
    case RC_ADDR(0x00006218u): goto L_6218;
    case RC_ADDR(0x0000621au): goto L_621A;
    case RC_ADDR(0x0000621eu): goto L_621E;
    case RC_ADDR(0x00006220u): goto L_6220;
    case RC_ADDR(0x00006226u): goto L_6226;
    case RC_ADDR(0x00006228u): goto L_6228;
    case RC_ADDR(0x0000622au): goto L_622A;
    case RC_ADDR(0x0000622cu): goto L_622C;
    case RC_ADDR(0x0000622eu): goto L_622E;
    case RC_ADDR(0x00006230u): goto L_6230;
    case RC_ADDR(0x00006234u): goto L_6234;
    case RC_ADDR(0x00006238u): goto L_6238;
    case RC_ADDR(0x0000623cu): goto L_623C;
    case RC_ADDR(0x0000623eu): goto L_623E;
    case RC_ADDR(0x00006240u): goto L_6240;
    case RC_ADDR(0x00006242u): goto L_6242;
    case RC_ADDR(0x00006246u): goto L_6246;
    case RC_ADDR(0x0000624au): goto L_624A;
    case RC_ADDR(0x0000624eu): goto L_624E;
    case RC_ADDR(0x00006252u): goto L_6252;
    case RC_ADDR(0x00006254u): goto L_6254;
    case RC_ADDR(0x00006256u): goto L_6256;
    case RC_ADDR(0x00006258u): goto L_6258;
    case RC_ADDR(0x0000625cu): goto L_625C;
    case RC_ADDR(0x00006260u): goto L_6260;
    case RC_ADDR(0x00006264u): goto L_6264;
    case RC_ADDR(0x00006268u): goto L_6268;
    case RC_ADDR(0x0000626eu): goto L_626E;
    case RC_ADDR(0x00006270u): goto L_6270;
    case RC_ADDR(0x00006274u): goto L_6274;
    case RC_ADDR(0x00006276u): goto L_6276;
    case RC_ADDR(0x00006278u): goto L_6278;
    case RC_ADDR(0x0000627cu): goto L_627C;
    case RC_ADDR(0x00006280u): goto L_6280;
    case RC_ADDR(0x00006284u): goto L_6284;
    case RC_ADDR(0x00006286u): goto L_6286;
    case RC_ADDR(0x0000628au): goto L_628A;
    case RC_ADDR(0x0000628eu): goto L_628E;
    case RC_ADDR(0x00006290u): goto L_6290;
    case RC_ADDR(0x00006294u): goto L_6294;
    case RC_ADDR(0x00006296u): goto L_6296;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5E3E:
    /* 00005e3e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00005e3eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_5E42:
    /* 00005e42   4  clr.w (fffff860,A4) */
    c->pc = RC_ADDR(0x00005e42u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5E46:
    /* 00005e46   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005e46u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5E4A:
    /* 00005e4a   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00005e4au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005e4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_5E4E:
    /* 00005e4e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005e4eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5E50:
    /* 00005e50   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005e50u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E54:
    /* 00005e54   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00005e54u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E5A:
    /* 00005e5a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00005e5au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_5E5E:
    /* 00005e5e   6  move.b (22,A0),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005e5eu);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x22u));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5E64:
    /* 00005e64   4  tst.b (fffffffb,A5) */
    c->pc = RC_ADDR(0x00005e64u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_set_nzvc(c, t0, RC_B);

L_5E68:
    /* 00005e68   2  beq 00005e70 */
    c->pc = RC_ADDR(0x00005e68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5E70;

L_5E6A:
    /* 00005e6a   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00005e6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_5E6E:
    /* 00005e6e   2  bge 00005e82 */
    c->pc = RC_ADDR(0x00005e6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5E82;

L_5E70:
    /* 00005e70   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00005e70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5E74:
    /* 00005e74   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00005e74u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_5E78:
    /* 00005e78   4  lea (ffff85f2,A4),A0 */
    c->pc = RC_ADDR(0x00005e78u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0eu);

L_5E7C:
    /* 00005e7c   6  move.b (0,A0,D0.w),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005e7cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5E82:
    /* 00005e82   6  cmpi.b #63,(fffff862,A4) */
    c->pc = RC_ADDR(0x00005e82u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x00000063u);

L_5E88:
    /* 00005e88   2  bne 00005e9c */
    c->pc = RC_ADDR(0x00005e88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5E9C;

L_5E8A:
    /* 00005e8a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005e8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E8E:
    /* 00005e8e   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00005e8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005e92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_5E92:
    /* 00005e92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005e92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5E94:
    /* 00005e94   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00005e94u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00005e98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_5E98:
    /* 00005e98   4  jsr (00007700) */
    c->pc = RC_ADDR(0x00005e98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005e9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007700u);
    return;

L_5E9C:
    /* 00005e9c   6  cmpi.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00005e9cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_5EA2:
    /* 00005ea2   2  bne 00005eda */
    c->pc = RC_ADDR(0x00005ea2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5EDA;

L_5EA4:
    /* 00005ea4   6  cmpi.b #1c,(fffff862,A4) */
    c->pc = RC_ADDR(0x00005ea4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x0000001cu);

L_5EAA:
    /* 00005eaa   2  bne 00005ed6 */
    c->pc = RC_ADDR(0x00005eaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5ED6;

L_5EAC:
    /* 00005eac   6  cmpi.b #11,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00005eacu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000011u);

L_5EB2:
    /* 00005eb2   2  bne 00005ed4 */
    c->pc = RC_ADDR(0x00005eb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5ED4;

L_5EB4:
    /* 00005eb4   4  tst.w (fffff86a,A4) */
    c->pc = RC_ADDR(0x00005eb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x796u));
    rc_set_nzvc(c, t0, RC_W);

L_5EB8:
    /* 00005eb8   2  bne 00005ed4 */
    c->pc = RC_ADDR(0x00005eb8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5ED4;

L_5EBA:
    /* 00005eba   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005ebau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5EBE:
    /* 00005ebe   4  jsr (00007cc4) */
    c->pc = RC_ADDR(0x00005ebeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005ec2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007cc4u);
    return;

L_5EC2:
    /* 00005ec2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005ec2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5EC4:
    /* 00005ec4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00005ec4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_5EC6:
    /* 00005ec6   2  beq 00005ed4 */
    c->pc = RC_ADDR(0x00005ec6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5ED4;

L_5EC8:
    /* 00005ec8   6  move.w #1,(fffff86a,A4) */
    c->pc = RC_ADDR(0x00005ec8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x796u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5ECE:
    /* 00005ece   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00005eceu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5ED0:
    /* 00005ed0   2  unlk A5 */
    c->pc = RC_ADDR(0x00005ed0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5ED2:
    /* 00005ed2   2  rts */
    c->pc = RC_ADDR(0x00005ed2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_5ED4:
    /* 00005ed4   2  bra 00005eda */
    c->pc = RC_ADDR(0x00005ed4u);
    rc_step(c, m, 10);
    goto L_5EDA;

L_5ED6:
    /* 00005ed6   4  clr.w (fffff86a,A4) */
    c->pc = RC_ADDR(0x00005ed6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x796u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5EDA:
    /* 00005eda   4  clr.w (fffff864,A4) */
    c->pc = RC_ADDR(0x00005edau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x79cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5EDE:
    /* 00005ede   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x00005edeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5EE2:
    /* 00005ee2   4  cmp.b (fffff862,A4),D0 */
    c->pc = RC_ADDR(0x00005ee2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_5EE6:
    /* 00005ee6   4  beq 0000618c */
    c->pc = RC_ADDR(0x00005ee6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_618C;

L_5EEA:
    /* 00005eea   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x00005eeau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5EEE:
    /* 00005eee   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005eeeu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5EF0:
    /* 00005ef0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00005ef0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5EF2:
    /* 00005ef2   4  jsr (00005dd4) */
    c->pc = RC_ADDR(0x00005ef2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005ef6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005dd4u);
    return;

L_5EF6:
    /* 00005ef6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005ef6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5EF8:
    /* 00005ef8   4  clr.w (ffff85a6,A4) */
    c->pc = RC_ADDR(0x00005ef8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5EFC:
    /* 00005efc   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00005efcu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F00:
    /* 00005f00   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005f00u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F04:
    /* 00005f04   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00005f04u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005f08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_5F08:
    /* 00005f08   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00005f08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5F0A:
    /* 00005f0a   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00005f0au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F10:
    /* 00005f10   6  move.w #1,(fffff864,A4) */
    c->pc = RC_ADDR(0x00005f10u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x79cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F16:
    /* 00005f16   4  clr.w (fffffa12,A4) */
    c->pc = RC_ADDR(0x00005f16u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5eeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F1A:
    /* 00005f1a   4  tst.l (fffff86c,A4) */
    c->pc = RC_ADDR(0x00005f1au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    rc_set_nzvc(c, t0, RC_L);

L_5F1E:
    /* 00005f1e   2  beq 00005f30 */
    c->pc = RC_ADDR(0x00005f1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F30;

L_5F20:
    /* 00005f20   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005f20u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F22:
    /* 00005f22   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x00005f22u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F26:
    /* 00005f26   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005f26u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F2A:
    /* 00005f2a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005f2au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005f2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_5F2E:
    /* 00005f2e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005f2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F30:
    /* 00005f30   4  tst.l (fffff870,A4) */
    c->pc = RC_ADDR(0x00005f30u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    rc_set_nzvc(c, t0, RC_L);

L_5F34:
    /* 00005f34   2  beq 00005f46 */
    c->pc = RC_ADDR(0x00005f34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F46;

L_5F36:
    /* 00005f36   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005f36u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F38:
    /* 00005f38   4  move.l (fffff870,A4),-(A7) */
    c->pc = RC_ADDR(0x00005f38u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F3C:
    /* 00005f3c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005f3cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F40:
    /* 00005f40   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005f40u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005f44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_5F44:
    /* 00005f44   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005f44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F46:
    /* 00005f46   4  tst.l (fffff878,A4) */
    c->pc = RC_ADDR(0x00005f46u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x788u));
    rc_set_nzvc(c, t0, RC_L);

L_5F4A:
    /* 00005f4a   2  beq 00005f5c */
    c->pc = RC_ADDR(0x00005f4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F5C;

L_5F4C:
    /* 00005f4c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005f4cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F4E:
    /* 00005f4e   4  move.l (fffff878,A4),-(A7) */
    c->pc = RC_ADDR(0x00005f4eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x788u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F52:
    /* 00005f52   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005f52u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F56:
    /* 00005f56   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005f56u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005f5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_5F5A:
    /* 00005f5a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005f5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F5C:
    /* 00005f5c   4  tst.l (fffff87c,A4) */
    c->pc = RC_ADDR(0x00005f5cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x784u));
    rc_set_nzvc(c, t0, RC_L);

L_5F60:
    /* 00005f60   2  beq 00005f72 */
    c->pc = RC_ADDR(0x00005f60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F72;

L_5F62:
    /* 00005f62   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005f62u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F64:
    /* 00005f64   4  move.l (fffff87c,A4),-(A7) */
    c->pc = RC_ADDR(0x00005f64u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x784u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F68:
    /* 00005f68   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005f68u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F6C:
    /* 00005f6c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005f6cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005f70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_5F70:
    /* 00005f70   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005f70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F72:
    /* 00005f72   4  tst.l (fffff880,A4) */
    c->pc = RC_ADDR(0x00005f72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x780u));
    rc_set_nzvc(c, t0, RC_L);

L_5F76:
    /* 00005f76   2  beq 00005f88 */
    c->pc = RC_ADDR(0x00005f76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F88;

L_5F78:
    /* 00005f78   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00005f78u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F7A:
    /* 00005f7a   4  move.l (fffff880,A4),-(A7) */
    c->pc = RC_ADDR(0x00005f7au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x780u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F7E:
    /* 00005f7e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00005f7eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F82:
    /* 00005f82   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00005f82u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00005f86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_5F86:
    /* 00005f86   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005f86u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F88:
    /* 00005f88   4  tst.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005f88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c14u));
    rc_set_nzvc(c, t0, RC_W);

L_5F8C:
    /* 00005f8c   2  beq 00005f9a */
    c->pc = RC_ADDR(0x00005f8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5F9A;

L_5F8E:
    /* 00005f8e   4  jsr (00000b5c) */
    c->pc = RC_ADDR(0x00005f8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005f92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b5cu);
    return;

L_5F92:
    /* 00005f92   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00005f92u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00005f96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_5F96:
    /* 00005f96   4  jsr (00000b5c) */
    c->pc = RC_ADDR(0x00005f96u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005f9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b5cu);
    return;

L_5F9A:
    /* 00005f9a   4  jsr (000062ce) */
    c->pc = RC_ADDR(0x00005f9au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005f9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000062ceu);
    return;

L_5F9E:
    /* 00005f9e   6  move.b (fffffffb,A5),(fffff862,A4) */
    c->pc = RC_ADDR(0x00005f9eu);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_wr8(c, m, (c->a[4] - 0x79eu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5FA4:
    /* 00005fa4   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x00005fa4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5FA8:
    /* 00005fa8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00005fa8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_5FAA:
    /* 00005faa   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00005faau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5FAC:
    /* 00005fac   4  pea (0000629a) */
    c->pc = RC_ADDR(0x00005facu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000629au));

L_5FB0:
    /* 00005fb0   4  pea (fffff890,A4) */
    c->pc = RC_ADDR(0x00005fb0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x770u));

L_5FB4:
    /* 00005fb4   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00005fb4u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00005fb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_5FB8:
    /* 00005fb8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00005fb8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_5FBC:
    /* 00005fbc   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00005fbcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_5FC0:
    /* 00005fc0   2  beq 00005fee */
    c->pc = RC_ADDR(0x00005fc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5FEE;

L_5FC2:
    /* 00005fc2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00005fc2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_5FC6:
    /* 00005fc6   4  tst.b (1,A0) */
    c->pc = RC_ADDR(0x00005fc6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_set_nzvc(c, t0, RC_B);

L_5FCA:
    /* 00005fca   2  bne 00005fee */
    c->pc = RC_ADDR(0x00005fcau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5FEE;

L_5FCC:
    /* 00005fcc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00005fccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_5FD0:
    /* 00005fd0   6  cmpi.b #2,(9,A0) */
    c->pc = RC_ADDR(0x00005fd0u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_5FD6:
    /* 00005fd6   2  bge 00005fee */
    c->pc = RC_ADDR(0x00005fd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5FEE;

L_5FD8:
    /* 00005fd8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00005fd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_5FDC:
    /* 00005fdc   4  movea.l (a,A0),A1 */
    c->pc = RC_ADDR(0x00005fdcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    c->a[1] = t0;

L_5FE0:
    /* 00005fe0   2  movea.l (A1),A0 */
    c->pc = RC_ADDR(0x00005fe0u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[0] = t0;

L_5FE2:
    /* 00005fe2   4  cmpi.b #26,(A0) */
    c->pc = RC_ADDR(0x00005fe2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000026u);

L_5FE6:
    /* 00005fe6   2  bne 00005fee */
    c->pc = RC_ADDR(0x00005fe6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5FEE;

L_5FE8:
    /* 00005fe8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00005fe8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5FEA:
    /* 00005fea   4  bra 00005ed0 */
    c->pc = RC_ADDR(0x00005feau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5ED0;

L_5FEE:
    /* 00005fee   4  pea (fffff890,A4) */
    c->pc = RC_ADDR(0x00005feeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x770u));

L_5FF2:
    /* 00005ff2   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00005ff2u);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00005ff6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_5FF6:
    /* 00005ff6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005ff6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5FF8:
    /* 00005ff8   4  move.l D0,(fffff878,A4) */
    c->pc = RC_ADDR(0x00005ff8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x788u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5FFC:
    /* 00005ffc   2  beq 00006050 */
    c->pc = RC_ADDR(0x00005ffcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6050;

L_5FFE:
    /* 00005ffe   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00005ffeu);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00006002u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_6002:
    /* 00006002   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006002u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6004:
    /* 00006004   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006004u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6006:
    /* 00006006   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006006u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6008:
    /* 00006008   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006008u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_600A:
    /* 0000600a   4  move.l (fffff878,A4),-(A7) */
    c->pc = RC_ADDR(0x0000600au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x788u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_600E:
    /* 0000600e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000600eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6012:
    /* 00006012   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006012u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006016u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6016:
    /* 00006016   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006016u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_601A:
    /* 0000601a   4  pea (000062a1) */
    c->pc = RC_ADDR(0x0000601au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062a1u));

L_601E:
    /* 0000601e   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000601eu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00006022u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_6022:
    /* 00006022   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006022u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6024:
    /* 00006024   4  move.l D0,(fffff87c,A4) */
    c->pc = RC_ADDR(0x00006024u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x784u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6028:
    /* 00006028   6  pea (00040000).l */
    c->pc = RC_ADDR(0x00006028u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00040000u);

L_602E:
    /* 0000602e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000602eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6030:
    /* 00006030   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006030u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6032:
    /* 00006032   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006032u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6034:
    /* 00006034   4  move.l (fffff87c,A4),-(A7) */
    c->pc = RC_ADDR(0x00006034u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x784u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6038:
    /* 00006038   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006038u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_603C:
    /* 0000603c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000603cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006040u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6040:
    /* 00006040   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006040u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6044:
    /* 00006044   4  clr.l (fffff88c,A4) */
    c->pc = RC_ADDR(0x00006044u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x774u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6048:
    /* 00006048   4  clr.l (fffff888,A4) */
    c->pc = RC_ADDR(0x00006048u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x778u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_604C:
    /* 0000604c   4  bra 00006184 */
    c->pc = RC_ADDR(0x0000604cu);
    rc_step(c, m, 10);
    goto L_6184;

L_6050:
    /* 00006050   4  clr.l (fffff870,A4) */
    c->pc = RC_ADDR(0x00006050u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x790u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6054:
    /* 00006054   4  pea (fffff890,A4) */
    c->pc = RC_ADDR(0x00006054u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x770u));

L_6058:
    /* 00006058   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00006058u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000605cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_605C:
    /* 0000605c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000605cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_605E:
    /* 0000605e   4  move.l D0,(fffff86c,A4) */
    c->pc = RC_ADDR(0x0000605eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x794u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6062:
    /* 00006062   4  tst.l (fffff86c,A4) */
    c->pc = RC_ADDR(0x00006062u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    rc_set_nzvc(c, t0, RC_L);

L_6066:
    /* 00006066   2  bne 00006076 */
    c->pc = RC_ADDR(0x00006066u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6076;

L_6068:
    /* 00006068   4  pea (fffff890,A4) */
    c->pc = RC_ADDR(0x00006068u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x770u));

L_606C:
    /* 0000606c   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000606cu);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x00006070u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_6070:
    /* 00006070   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006070u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6072:
    /* 00006072   4  move.l D0,(fffff86c,A4) */
    c->pc = RC_ADDR(0x00006072u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x794u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6076:
    /* 00006076   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x00006076u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_607A:
    /* 0000607a   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x0000607au);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x0000607eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_607E:
    /* 0000607e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000607eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6080:
    /* 00006080   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006080u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6082:
    /* 00006082   4  beq 00006164 */
    c->pc = RC_ADDR(0x00006082u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6164;

L_6086:
    /* 00006086   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006086u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6088:
    /* 00006088   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x00006088u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_608C:
    /* 0000608c   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0000608cu);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6090:
    /* 00006090   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006090u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006094u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6094:
    /* 00006094   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006094u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6096:
    /* 00006096   6  cmpi.b #11,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00006096u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000011u);

L_609C:
    /* 0000609c   4  bne 0000614e */
    c->pc = RC_ADDR(0x0000609cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_614E;

L_60A0:
    /* 000060a0   4  tst.w (fffff868,A4) */
    c->pc = RC_ADDR(0x000060a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x798u));
    rc_set_nzvc(c, t0, RC_W);

L_60A4:
    /* 000060a4   2  beq 000060b6 */
    c->pc = RC_ADDR(0x000060a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_60B6;

L_60A6:
    /* 000060a6   4  pea (000062a5) */
    c->pc = RC_ADDR(0x000060a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062a5u));

L_60AA:
    /* 000060aa   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x000060aau);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x000060aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_60AE:
    /* 000060ae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000060aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60B0:
    /* 000060b0   4  move.l D0,(fffff880,A4) */
    c->pc = RC_ADDR(0x000060b0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x780u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60B4:
    /* 000060b4   2  bra 000060d0 */
    c->pc = RC_ADDR(0x000060b4u);
    rc_step(c, m, 10);
    goto L_60D0;

L_60B6:
    /* 000060b6   4  pea (000062ab) */
    c->pc = RC_ADDR(0x000060b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062abu));

L_60BA:
    /* 000060ba   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x000060bau);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x000060beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_60BE:
    /* 000060be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000060beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60C0:
    /* 000060c0   4  move.l D0,(fffff880,A4) */
    c->pc = RC_ADDR(0x000060c0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x780u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60C4:
    /* 000060c4   6  move.w #1,(fffff868,A4) */
    c->pc = RC_ADDR(0x000060c4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x798u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_60CA:
    /* 000060ca   6  move.w #a,(fffff860,A4) */
    c->pc = RC_ADDR(0x000060cau);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] - 0x7a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_60D0:
    /* 000060d0   4  pea (000062b0) */
    c->pc = RC_ADDR(0x000060d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062b0u));

L_60D4:
    /* 000060d4   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000060d4u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000060d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_60D8:
    /* 000060d8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000060d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60DA:
    /* 000060da   4  move.l D0,(fffff870,A4) */
    c->pc = RC_ADDR(0x000060dau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x790u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60DE:
    /* 000060de   2  bne 000060f8 */
    c->pc = RC_ADDR(0x000060deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_60F8;

L_60E0:
    /* 000060e0   4  pea (000062b5) */
    c->pc = RC_ADDR(0x000060e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062b5u));

L_60E4:
    /* 000060e4   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x000060e4u);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x000060e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f4fcu);
    return;

L_60E8:
    /* 000060e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000060e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60EA:
    /* 000060ea   4  move.l D0,(fffff870,A4) */
    c->pc = RC_ADDR(0x000060eau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x790u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_60EE:
    /* 000060ee   4  move.l (fffff870,A4),-(A7) */
    c->pc = RC_ADDR(0x000060eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_60F2:
    /* 000060f2   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x000060f2u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x000060f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_60F6:
    /* 000060f6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000060f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_60F8:
    /* 000060f8   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x000060f8u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x000060fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_60FC:
    /* 000060fc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000060fcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_60FE:
    /* 000060fe   6  pea (000e0000).l */
    c->pc = RC_ADDR(0x000060feu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000e0000u);

L_6104:
    /* 00006104   6  pea (006e0000).l */
    c->pc = RC_ADDR(0x00006104u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x006e0000u);

L_610A:
    /* 0000610a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000610au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_610C:
    /* 0000610c   4  move.l (fffff870,A4),-(A7) */
    c->pc = RC_ADDR(0x0000610cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6110:
    /* 00006110   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006110u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6114:
    /* 00006114   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006114u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006118u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6118:
    /* 00006118   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006118u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_611C:
    /* 0000611c   4  clr.l (fffff888,A4) */
    c->pc = RC_ADDR(0x0000611cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x778u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6120:
    /* 00006120   8  move.l #ffffffe2,(fffff88c,A4) */
    c->pc = RC_ADDR(0x00006120u);
    rc_step(c, m, 24);
    t0 = 0xffffffe2u;
    rc_wr32(c, m, (c->a[4] - 0x774u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6128:
    /* 00006128   8  move.l #7,(fffff884,A4) */
    c->pc = RC_ADDR(0x00006128u);
    rc_step(c, m, 24);
    t0 = 0x00000007u;
    rc_wr32(c, m, (c->a[4] - 0x77cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6130:
    /* 00006130   6  pea (00080000).l */
    c->pc = RC_ADDR(0x00006130u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00080000u);

L_6136:
    /* 00006136   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006136u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6138:
    /* 00006138   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006138u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_613A:
    /* 0000613a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000613au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_613C:
    /* 0000613c   4  move.l (fffff880,A4),-(A7) */
    c->pc = RC_ADDR(0x0000613cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x780u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6140:
    /* 00006140   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006140u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6144:
    /* 00006144   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006144u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006148u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6148:
    /* 00006148   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006148u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_614C:
    /* 0000614c   2  bra 00006164 */
    c->pc = RC_ADDR(0x0000614cu);
    rc_step(c, m, 10);
    goto L_6164;

L_614E:
    /* 0000614e   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000614eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6152:
    /* 00006152   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x00006152u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x00006156u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d20u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f5eeu);
    return;

L_6156:
    /* 00006156   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006156u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6158:
    /* 00006158   4  clr.l (fffff884,A4) */
    c->pc = RC_ADDR(0x00006158u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x77cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_615C:
    /* 0000615c   4  clr.l (fffff88c,A4) */
    c->pc = RC_ADDR(0x0000615cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x774u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6160:
    /* 00006160   4  clr.l (fffff888,A4) */
    c->pc = RC_ADDR(0x00006160u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x778u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6164:
    /* 00006164   4  move.l (fffff884,A4),D0 */
    c->pc = RC_ADDR(0x00006164u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x77cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6168:
    /* 00006168   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006168u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_616A:
    /* 0000616a   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000616au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_616C:
    /* 0000616c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000616cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_616E:
    /* 0000616e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000616eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6170:
    /* 00006170   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006170u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6172:
    /* 00006172   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006172u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6174:
    /* 00006174   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x00006174u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6178:
    /* 00006178   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006178u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_617C:
    /* 0000617c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000617cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006180u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6180:
    /* 00006180   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006180u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6184:
    /* 00006184   4  jsr (0000b0d8) */
    c->pc = RC_ADDR(0x00006184u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006188u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0d8u);
    return;

L_6188:
    /* 00006188   4  bra 00006214 */
    c->pc = RC_ADDR(0x00006188u);
    rc_step(c, m, 10);
    goto L_6214;

L_618C:
    /* 0000618c   4  tst.l (fffff878,A4) */
    c->pc = RC_ADDR(0x0000618cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x788u));
    rc_set_nzvc(c, t0, RC_L);

L_6190:
    /* 00006190   2  beq 000061ce */
    c->pc = RC_ADDR(0x00006190u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_61CE;

L_6192:
    /* 00006192   4  tst.w (ffff85a6,A4) */
    c->pc = RC_ADDR(0x00006192u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a5au));
    rc_set_nzvc(c, t0, RC_W);

L_6196:
    /* 00006196   2  bne 000061ce */
    c->pc = RC_ADDR(0x00006196u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_61CE;

L_6198:
    /* 00006198   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006198u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_619A:
    /* 0000619a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000619au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_619C:
    /* 0000619c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000619cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_619E:
    /* 0000619e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000619eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_61A0:
    /* 000061a0   4  move.l (fffff878,A4),-(A7) */
    c->pc = RC_ADDR(0x000061a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x788u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61A4:
    /* 000061a4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000061a4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_61A8:
    /* 000061a8   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000061a8u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000061acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_61AC:
    /* 000061ac   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000061acu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_61B0:
    /* 000061b0   6  pea (00040000).l */
    c->pc = RC_ADDR(0x000061b0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00040000u);

L_61B6:
    /* 000061b6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000061b6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_61B8:
    /* 000061b8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000061b8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_61BA:
    /* 000061ba   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000061bau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_61BC:
    /* 000061bc   4  move.l (fffff87c,A4),-(A7) */
    c->pc = RC_ADDR(0x000061bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x784u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61C0:
    /* 000061c0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000061c0u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_61C4:
    /* 000061c4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000061c4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000061c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_61C8:
    /* 000061c8   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000061c8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_61CC:
    /* 000061cc   2  bra 00006214 */
    c->pc = RC_ADDR(0x000061ccu);
    rc_step(c, m, 10);
    goto L_6214;

L_61CE:
    /* 000061ce   4  tst.l (fffff870,A4) */
    c->pc = RC_ADDR(0x000061ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    rc_set_nzvc(c, t0, RC_L);

L_61D2:
    /* 000061d2   2  beq 000061f4 */
    c->pc = RC_ADDR(0x000061d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_61F4;

L_61D4:
    /* 000061d4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000061d4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_61D6:
    /* 000061d6   6  pea (000e0000).l */
    c->pc = RC_ADDR(0x000061d6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000e0000u);

L_61DC:
    /* 000061dc   6  pea (006e0000).l */
    c->pc = RC_ADDR(0x000061dcu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x006e0000u);

L_61E2:
    /* 000061e2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000061e2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_61E4:
    /* 000061e4   4  move.l (fffff870,A4),-(A7) */
    c->pc = RC_ADDR(0x000061e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x790u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61E8:
    /* 000061e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000061e8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_61EC:
    /* 000061ec   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000061ecu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000061f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_61F0:
    /* 000061f0   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000061f0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_61F4:
    /* 000061f4   4  move.l (fffff884,A4),D0 */
    c->pc = RC_ADDR(0x000061f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x77cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_61F8:
    /* 000061f8   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000061f8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_61FA:
    /* 000061fa   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000061fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_61FC:
    /* 000061fc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000061fcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61FE:
    /* 000061fe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000061feu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6200:
    /* 00006200   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006200u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6202:
    /* 00006202   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006202u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6204:
    /* 00006204   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x00006204u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6208:
    /* 00006208   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006208u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_620C:
    /* 0000620c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000620cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006210u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6210:
    /* 00006210   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006210u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6214:
    /* 00006214   4  tst.w (ffff83fc,A4) */
    c->pc = RC_ADDR(0x00006214u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c04u));
    rc_set_nzvc(c, t0, RC_W);

L_6218:
    /* 00006218   2  beq 00006252 */
    c->pc = RC_ADDR(0x00006218u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6252;

L_621A:
    /* 0000621a   4  tst.w (ffff85a6,A4) */
    c->pc = RC_ADDR(0x0000621au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a5au));
    rc_set_nzvc(c, t0, RC_W);

L_621E:
    /* 0000621e   2  bne 00006252 */
    c->pc = RC_ADDR(0x0000621eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6252;

L_6220:
    /* 00006220   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006220u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6226:
    /* 00006226   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006226u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6228:
    /* 00006228   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006228u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_622A:
    /* 0000622a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000622au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_622C:
    /* 0000622c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000622cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_622E:
    /* 0000622e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000622eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6230:
    /* 00006230   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00006230u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6234:
    /* 00006234   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006234u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006238u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6238:
    /* 00006238   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006238u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_623C:
    /* 0000623c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000623cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_623E:
    /* 0000623e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000623eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6240:
    /* 00006240   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006240u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6242:
    /* 00006242   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006242u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6246:
    /* 00006246   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00006246u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_624A:
    /* 0000624a   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000624au);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000624eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_624E:
    /* 0000624e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000624eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_6252:
    /* 00006252   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006252u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6254:
    /* 00006254   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006254u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6256:
    /* 00006256   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00006256u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6258:
    /* 00006258   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006258u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_625C:
    /* 0000625c   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000625cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6260:
    /* 00006260   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00006260u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00006264u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_6264:
    /* 00006264   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00006264u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_6268:
    /* 00006268   6  cmpi.b #32,(fffff862,A4) */
    c->pc = RC_ADDR(0x00006268u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x00000032u);

L_626E:
    /* 0000626e   2  bge 00006290 */
    c->pc = RC_ADDR(0x0000626eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6290;

L_6270:
    /* 00006270   4  tst.w (fffff864,A4) */
    c->pc = RC_ADDR(0x00006270u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x79cu));
    rc_set_nzvc(c, t0, RC_W);

L_6274:
    /* 00006274   2  beq 0000628e */
    c->pc = RC_ADDR(0x00006274u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_628E;

L_6276:
    /* 00006276   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006276u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6278:
    /* 00006278   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00006278u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_627C:
    /* 0000627c   4  lea (ffff8468,A4),A0 */
    c->pc = RC_ADDR(0x0000627cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b98u);

L_6280:
    /* 00006280   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00006280u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6284:
    /* 00006284   2  ext.w D1 */
    c->pc = RC_ADDR(0x00006284u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_6286:
    /* 00006286   4  move.w D1,(ffff84a0,A4) */
    c->pc = RC_ADDR(0x00006286u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7b60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_628A:
    /* 0000628a   4  jsr (0000a596) */
    c->pc = RC_ADDR(0x0000628au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000628eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a596u);
    return;

L_628E:
    /* 0000628e   2  bra 00006294 */
    c->pc = RC_ADDR(0x0000628eu);
    rc_step(c, m, 10);
    goto L_6294;

L_6290:
    /* 00006290   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x00006290u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6294:
    /* 00006294   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00006294u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6296:
    /* 00006296   4  bra 00005ed0 */
    c->pc = RC_ADDR(0x00006296u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5ED0;

}
