/* fn_0000e804 - 1090 byte(s), 311 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000e804(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000e804u): goto L_E804;
    case RC_ADDR(0x0000e808u): goto L_E808;
    case RC_ADDR(0x0000e80cu): goto L_E80C;
    case RC_ADDR(0x0000e80eu): goto L_E80E;
    case RC_ADDR(0x0000e810u): goto L_E810;
    case RC_ADDR(0x0000e812u): goto L_E812;
    case RC_ADDR(0x0000e816u): goto L_E816;
    case RC_ADDR(0x0000e81au): goto L_E81A;
    case RC_ADDR(0x0000e81eu): goto L_E81E;
    case RC_ADDR(0x0000e820u): goto L_E820;
    case RC_ADDR(0x0000e824u): goto L_E824;
    case RC_ADDR(0x0000e828u): goto L_E828;
    case RC_ADDR(0x0000e82au): goto L_E82A;
    case RC_ADDR(0x0000e82eu): goto L_E82E;
    case RC_ADDR(0x0000e830u): goto L_E830;
    case RC_ADDR(0x0000e834u): goto L_E834;
    case RC_ADDR(0x0000e836u): goto L_E836;
    case RC_ADDR(0x0000e83cu): goto L_E83C;
    case RC_ADDR(0x0000e842u): goto L_E842;
    case RC_ADDR(0x0000e846u): goto L_E846;
    case RC_ADDR(0x0000e84au): goto L_E84A;
    case RC_ADDR(0x0000e84cu): goto L_E84C;
    case RC_ADDR(0x0000e850u): goto L_E850;
    case RC_ADDR(0x0000e854u): goto L_E854;
    case RC_ADDR(0x0000e858u): goto L_E858;
    case RC_ADDR(0x0000e85cu): goto L_E85C;
    case RC_ADDR(0x0000e860u): goto L_E860;
    case RC_ADDR(0x0000e864u): goto L_E864;
    case RC_ADDR(0x0000e868u): goto L_E868;
    case RC_ADDR(0x0000e86cu): goto L_E86C;
    case RC_ADDR(0x0000e86eu): goto L_E86E;
    case RC_ADDR(0x0000e870u): goto L_E870;
    case RC_ADDR(0x0000e872u): goto L_E872;
    case RC_ADDR(0x0000e874u): goto L_E874;
    case RC_ADDR(0x0000e878u): goto L_E878;
    case RC_ADDR(0x0000e87cu): goto L_E87C;
    case RC_ADDR(0x0000e882u): goto L_E882;
    case RC_ADDR(0x0000e886u): goto L_E886;
    case RC_ADDR(0x0000e88au): goto L_E88A;
    case RC_ADDR(0x0000e88eu): goto L_E88E;
    case RC_ADDR(0x0000e892u): goto L_E892;
    case RC_ADDR(0x0000e894u): goto L_E894;
    case RC_ADDR(0x0000e898u): goto L_E898;
    case RC_ADDR(0x0000e89eu): goto L_E89E;
    case RC_ADDR(0x0000e8a2u): goto L_E8A2;
    case RC_ADDR(0x0000e8a6u): goto L_E8A6;
    case RC_ADDR(0x0000e8a8u): goto L_E8A8;
    case RC_ADDR(0x0000e8acu): goto L_E8AC;
    case RC_ADDR(0x0000e8b2u): goto L_E8B2;
    case RC_ADDR(0x0000e8b6u): goto L_E8B6;
    case RC_ADDR(0x0000e8bau): goto L_E8BA;
    case RC_ADDR(0x0000e8beu): goto L_E8BE;
    case RC_ADDR(0x0000e8c0u): goto L_E8C0;
    case RC_ADDR(0x0000e8c2u): goto L_E8C2;
    case RC_ADDR(0x0000e8c4u): goto L_E8C4;
    case RC_ADDR(0x0000e8c8u): goto L_E8C8;
    case RC_ADDR(0x0000e8ccu): goto L_E8CC;
    case RC_ADDR(0x0000e8ceu): goto L_E8CE;
    case RC_ADDR(0x0000e8d2u): goto L_E8D2;
    case RC_ADDR(0x0000e8d4u): goto L_E8D4;
    case RC_ADDR(0x0000e8d8u): goto L_E8D8;
    case RC_ADDR(0x0000e8dcu): goto L_E8DC;
    case RC_ADDR(0x0000e8e0u): goto L_E8E0;
    case RC_ADDR(0x0000e8e4u): goto L_E8E4;
    case RC_ADDR(0x0000e8eau): goto L_E8EA;
    case RC_ADDR(0x0000e8f2u): goto L_E8F2;
    case RC_ADDR(0x0000e8f6u): goto L_E8F6;
    case RC_ADDR(0x0000e8fau): goto L_E8FA;
    case RC_ADDR(0x0000e8feu): goto L_E8FE;
    case RC_ADDR(0x0000e900u): goto L_E900;
    case RC_ADDR(0x0000e904u): goto L_E904;
    case RC_ADDR(0x0000e908u): goto L_E908;
    case RC_ADDR(0x0000e90cu): goto L_E90C;
    case RC_ADDR(0x0000e90eu): goto L_E90E;
    case RC_ADDR(0x0000e910u): goto L_E910;
    case RC_ADDR(0x0000e914u): goto L_E914;
    case RC_ADDR(0x0000e91au): goto L_E91A;
    case RC_ADDR(0x0000e920u): goto L_E920;
    case RC_ADDR(0x0000e924u): goto L_E924;
    case RC_ADDR(0x0000e926u): goto L_E926;
    case RC_ADDR(0x0000e928u): goto L_E928;
    case RC_ADDR(0x0000e92cu): goto L_E92C;
    case RC_ADDR(0x0000e930u): goto L_E930;
    case RC_ADDR(0x0000e934u): goto L_E934;
    case RC_ADDR(0x0000e936u): goto L_E936;
    case RC_ADDR(0x0000e93au): goto L_E93A;
    case RC_ADDR(0x0000e93cu): goto L_E93C;
    case RC_ADDR(0x0000e93eu): goto L_E93E;
    case RC_ADDR(0x0000e942u): goto L_E942;
    case RC_ADDR(0x0000e946u): goto L_E946;
    case RC_ADDR(0x0000e94au): goto L_E94A;
    case RC_ADDR(0x0000e94cu): goto L_E94C;
    case RC_ADDR(0x0000e94eu): goto L_E94E;
    case RC_ADDR(0x0000e952u): goto L_E952;
    case RC_ADDR(0x0000e956u): goto L_E956;
    case RC_ADDR(0x0000e95au): goto L_E95A;
    case RC_ADDR(0x0000e95cu): goto L_E95C;
    case RC_ADDR(0x0000e960u): goto L_E960;
    case RC_ADDR(0x0000e964u): goto L_E964;
    case RC_ADDR(0x0000e966u): goto L_E966;
    case RC_ADDR(0x0000e96au): goto L_E96A;
    case RC_ADDR(0x0000e96cu): goto L_E96C;
    case RC_ADDR(0x0000e96eu): goto L_E96E;
    case RC_ADDR(0x0000e970u): goto L_E970;
    case RC_ADDR(0x0000e974u): goto L_E974;
    case RC_ADDR(0x0000e97au): goto L_E97A;
    case RC_ADDR(0x0000e97eu): goto L_E97E;
    case RC_ADDR(0x0000e980u): goto L_E980;
    case RC_ADDR(0x0000e982u): goto L_E982;
    case RC_ADDR(0x0000e986u): goto L_E986;
    case RC_ADDR(0x0000e98au): goto L_E98A;
    case RC_ADDR(0x0000e98eu): goto L_E98E;
    case RC_ADDR(0x0000e990u): goto L_E990;
    case RC_ADDR(0x0000e992u): goto L_E992;
    case RC_ADDR(0x0000e996u): goto L_E996;
    case RC_ADDR(0x0000e99au): goto L_E99A;
    case RC_ADDR(0x0000e99eu): goto L_E99E;
    case RC_ADDR(0x0000e9a2u): goto L_E9A2;
    case RC_ADDR(0x0000e9a6u): goto L_E9A6;
    case RC_ADDR(0x0000e9aau): goto L_E9AA;
    case RC_ADDR(0x0000e9aeu): goto L_E9AE;
    case RC_ADDR(0x0000e9b0u): goto L_E9B0;
    case RC_ADDR(0x0000e9b2u): goto L_E9B2;
    case RC_ADDR(0x0000e9b4u): goto L_E9B4;
    case RC_ADDR(0x0000e9b8u): goto L_E9B8;
    case RC_ADDR(0x0000e9bcu): goto L_E9BC;
    case RC_ADDR(0x0000e9c0u): goto L_E9C0;
    case RC_ADDR(0x0000e9c4u): goto L_E9C4;
    case RC_ADDR(0x0000e9c6u): goto L_E9C6;
    case RC_ADDR(0x0000e9c8u): goto L_E9C8;
    case RC_ADDR(0x0000e9ccu): goto L_E9CC;
    case RC_ADDR(0x0000e9d0u): goto L_E9D0;
    case RC_ADDR(0x0000e9d4u): goto L_E9D4;
    case RC_ADDR(0x0000e9d8u): goto L_E9D8;
    case RC_ADDR(0x0000e9dau): goto L_E9DA;
    case RC_ADDR(0x0000e9deu): goto L_E9DE;
    case RC_ADDR(0x0000e9e2u): goto L_E9E2;
    case RC_ADDR(0x0000e9e6u): goto L_E9E6;
    case RC_ADDR(0x0000e9eau): goto L_E9EA;
    case RC_ADDR(0x0000e9eeu): goto L_E9EE;
    case RC_ADDR(0x0000e9f2u): goto L_E9F2;
    case RC_ADDR(0x0000e9f6u): goto L_E9F6;
    case RC_ADDR(0x0000e9fau): goto L_E9FA;
    case RC_ADDR(0x0000e9feu): goto L_E9FE;
    case RC_ADDR(0x0000ea02u): goto L_EA02;
    case RC_ADDR(0x0000ea06u): goto L_EA06;
    case RC_ADDR(0x0000ea0au): goto L_EA0A;
    case RC_ADDR(0x0000ea0cu): goto L_EA0C;
    case RC_ADDR(0x0000ea10u): goto L_EA10;
    case RC_ADDR(0x0000ea14u): goto L_EA14;
    case RC_ADDR(0x0000ea18u): goto L_EA18;
    case RC_ADDR(0x0000ea1cu): goto L_EA1C;
    case RC_ADDR(0x0000ea1eu): goto L_EA1E;
    case RC_ADDR(0x0000ea22u): goto L_EA22;
    case RC_ADDR(0x0000ea26u): goto L_EA26;
    case RC_ADDR(0x0000ea2au): goto L_EA2A;
    case RC_ADDR(0x0000ea2eu): goto L_EA2E;
    case RC_ADDR(0x0000ea30u): goto L_EA30;
    case RC_ADDR(0x0000ea32u): goto L_EA32;
    case RC_ADDR(0x0000ea36u): goto L_EA36;
    case RC_ADDR(0x0000ea3au): goto L_EA3A;
    case RC_ADDR(0x0000ea3cu): goto L_EA3C;
    case RC_ADDR(0x0000ea3eu): goto L_EA3E;
    case RC_ADDR(0x0000ea42u): goto L_EA42;
    case RC_ADDR(0x0000ea44u): goto L_EA44;
    case RC_ADDR(0x0000ea46u): goto L_EA46;
    case RC_ADDR(0x0000ea4au): goto L_EA4A;
    case RC_ADDR(0x0000ea4eu): goto L_EA4E;
    case RC_ADDR(0x0000ea52u): goto L_EA52;
    case RC_ADDR(0x0000ea54u): goto L_EA54;
    case RC_ADDR(0x0000ea56u): goto L_EA56;
    case RC_ADDR(0x0000ea5au): goto L_EA5A;
    case RC_ADDR(0x0000ea5cu): goto L_EA5C;
    case RC_ADDR(0x0000ea62u): goto L_EA62;
    case RC_ADDR(0x0000ea66u): goto L_EA66;
    case RC_ADDR(0x0000ea6cu): goto L_EA6C;
    case RC_ADDR(0x0000ea70u): goto L_EA70;
    case RC_ADDR(0x0000ea72u): goto L_EA72;
    case RC_ADDR(0x0000ea74u): goto L_EA74;
    case RC_ADDR(0x0000ea78u): goto L_EA78;
    case RC_ADDR(0x0000ea7cu): goto L_EA7C;
    case RC_ADDR(0x0000ea80u): goto L_EA80;
    case RC_ADDR(0x0000ea82u): goto L_EA82;
    case RC_ADDR(0x0000ea86u): goto L_EA86;
    case RC_ADDR(0x0000ea88u): goto L_EA88;
    case RC_ADDR(0x0000ea8au): goto L_EA8A;
    case RC_ADDR(0x0000ea8eu): goto L_EA8E;
    case RC_ADDR(0x0000ea92u): goto L_EA92;
    case RC_ADDR(0x0000ea96u): goto L_EA96;
    case RC_ADDR(0x0000ea9au): goto L_EA9A;
    case RC_ADDR(0x0000ea9cu): goto L_EA9C;
    case RC_ADDR(0x0000ea9eu): goto L_EA9E;
    case RC_ADDR(0x0000eaa2u): goto L_EAA2;
    case RC_ADDR(0x0000eaa6u): goto L_EAA6;
    case RC_ADDR(0x0000eaaau): goto L_EAAA;
    case RC_ADDR(0x0000eaaeu): goto L_EAAE;
    case RC_ADDR(0x0000eab2u): goto L_EAB2;
    case RC_ADDR(0x0000eab6u): goto L_EAB6;
    case RC_ADDR(0x0000eab8u): goto L_EAB8;
    case RC_ADDR(0x0000eabau): goto L_EABA;
    case RC_ADDR(0x0000eabeu): goto L_EABE;
    case RC_ADDR(0x0000eac2u): goto L_EAC2;
    case RC_ADDR(0x0000eac8u): goto L_EAC8;
    case RC_ADDR(0x0000eaccu): goto L_EACC;
    case RC_ADDR(0x0000eaceu): goto L_EACE;
    case RC_ADDR(0x0000ead0u): goto L_EAD0;
    case RC_ADDR(0x0000ead4u): goto L_EAD4;
    case RC_ADDR(0x0000ead8u): goto L_EAD8;
    case RC_ADDR(0x0000eadeu): goto L_EADE;
    case RC_ADDR(0x0000eae2u): goto L_EAE2;
    case RC_ADDR(0x0000eae4u): goto L_EAE4;
    case RC_ADDR(0x0000eae8u): goto L_EAE8;
    case RC_ADDR(0x0000eaecu): goto L_EAEC;
    case RC_ADDR(0x0000eaf0u): goto L_EAF0;
    case RC_ADDR(0x0000eaf4u): goto L_EAF4;
    case RC_ADDR(0x0000eaf8u): goto L_EAF8;
    case RC_ADDR(0x0000eafcu): goto L_EAFC;
    case RC_ADDR(0x0000eb00u): goto L_EB00;
    case RC_ADDR(0x0000eb04u): goto L_EB04;
    case RC_ADDR(0x0000eb08u): goto L_EB08;
    case RC_ADDR(0x0000eb0cu): goto L_EB0C;
    case RC_ADDR(0x0000eb10u): goto L_EB10;
    case RC_ADDR(0x0000eb14u): goto L_EB14;
    case RC_ADDR(0x0000eb16u): goto L_EB16;
    case RC_ADDR(0x0000eb1au): goto L_EB1A;
    case RC_ADDR(0x0000eb1eu): goto L_EB1E;
    case RC_ADDR(0x0000eb22u): goto L_EB22;
    case RC_ADDR(0x0000eb26u): goto L_EB26;
    case RC_ADDR(0x0000eb28u): goto L_EB28;
    case RC_ADDR(0x0000eb2cu): goto L_EB2C;
    case RC_ADDR(0x0000eb2eu): goto L_EB2E;
    case RC_ADDR(0x0000eb36u): goto L_EB36;
    case RC_ADDR(0x0000eb3au): goto L_EB3A;
    case RC_ADDR(0x0000eb3cu): goto L_EB3C;
    case RC_ADDR(0x0000eb3eu): goto L_EB3E;
    case RC_ADDR(0x0000eb42u): goto L_EB42;
    case RC_ADDR(0x0000eb48u): goto L_EB48;
    case RC_ADDR(0x0000eb4eu): goto L_EB4E;
    case RC_ADDR(0x0000eb52u): goto L_EB52;
    case RC_ADDR(0x0000eb54u): goto L_EB54;
    case RC_ADDR(0x0000eb56u): goto L_EB56;
    case RC_ADDR(0x0000eb5au): goto L_EB5A;
    case RC_ADDR(0x0000eb5eu): goto L_EB5E;
    case RC_ADDR(0x0000eb62u): goto L_EB62;
    case RC_ADDR(0x0000eb64u): goto L_EB64;
    case RC_ADDR(0x0000eb68u): goto L_EB68;
    case RC_ADDR(0x0000eb6au): goto L_EB6A;
    case RC_ADDR(0x0000eb6cu): goto L_EB6C;
    case RC_ADDR(0x0000eb70u): goto L_EB70;
    case RC_ADDR(0x0000eb74u): goto L_EB74;
    case RC_ADDR(0x0000eb78u): goto L_EB78;
    case RC_ADDR(0x0000eb7au): goto L_EB7A;
    case RC_ADDR(0x0000eb7cu): goto L_EB7C;
    case RC_ADDR(0x0000eb80u): goto L_EB80;
    case RC_ADDR(0x0000eb84u): goto L_EB84;
    case RC_ADDR(0x0000eb88u): goto L_EB88;
    case RC_ADDR(0x0000eb8au): goto L_EB8A;
    case RC_ADDR(0x0000eb8cu): goto L_EB8C;
    case RC_ADDR(0x0000eb90u): goto L_EB90;
    case RC_ADDR(0x0000eb94u): goto L_EB94;
    case RC_ADDR(0x0000eb98u): goto L_EB98;
    case RC_ADDR(0x0000eb9cu): goto L_EB9C;
    case RC_ADDR(0x0000eba0u): goto L_EBA0;
    case RC_ADDR(0x0000eba4u): goto L_EBA4;
    case RC_ADDR(0x0000eba8u): goto L_EBA8;
    case RC_ADDR(0x0000ebaau): goto L_EBAA;
    case RC_ADDR(0x0000ebacu): goto L_EBAC;
    case RC_ADDR(0x0000ebaeu): goto L_EBAE;
    case RC_ADDR(0x0000ebb2u): goto L_EBB2;
    case RC_ADDR(0x0000ebb4u): goto L_EBB4;
    case RC_ADDR(0x0000ebb8u): goto L_EBB8;
    case RC_ADDR(0x0000ebbau): goto L_EBBA;
    case RC_ADDR(0x0000ebbcu): goto L_EBBC;
    case RC_ADDR(0x0000ebc0u): goto L_EBC0;
    case RC_ADDR(0x0000ebc8u): goto L_EBC8;
    case RC_ADDR(0x0000ebceu): goto L_EBCE;
    case RC_ADDR(0x0000ebd2u): goto L_EBD2;
    case RC_ADDR(0x0000ebd4u): goto L_EBD4;
    case RC_ADDR(0x0000ebd6u): goto L_EBD6;
    case RC_ADDR(0x0000ebdau): goto L_EBDA;
    case RC_ADDR(0x0000ebdeu): goto L_EBDE;
    case RC_ADDR(0x0000ebe2u): goto L_EBE2;
    case RC_ADDR(0x0000ebe4u): goto L_EBE4;
    case RC_ADDR(0x0000ebe8u): goto L_EBE8;
    case RC_ADDR(0x0000ebeau): goto L_EBEA;
    case RC_ADDR(0x0000ebecu): goto L_EBEC;
    case RC_ADDR(0x0000ebf0u): goto L_EBF0;
    case RC_ADDR(0x0000ebf4u): goto L_EBF4;
    case RC_ADDR(0x0000ebf8u): goto L_EBF8;
    case RC_ADDR(0x0000ebfau): goto L_EBFA;
    case RC_ADDR(0x0000ebfcu): goto L_EBFC;
    case RC_ADDR(0x0000ec00u): goto L_EC00;
    case RC_ADDR(0x0000ec04u): goto L_EC04;
    case RC_ADDR(0x0000ec08u): goto L_EC08;
    case RC_ADDR(0x0000ec0cu): goto L_EC0C;
    case RC_ADDR(0x0000ec0eu): goto L_EC0E;
    case RC_ADDR(0x0000ec10u): goto L_EC10;
    case RC_ADDR(0x0000ec14u): goto L_EC14;
    case RC_ADDR(0x0000ec18u): goto L_EC18;
    case RC_ADDR(0x0000ec1cu): goto L_EC1C;
    case RC_ADDR(0x0000ec1eu): goto L_EC1E;
    case RC_ADDR(0x0000ec20u): goto L_EC20;
    case RC_ADDR(0x0000ec24u): goto L_EC24;
    case RC_ADDR(0x0000ec28u): goto L_EC28;
    case RC_ADDR(0x0000ec2cu): goto L_EC2C;
    case RC_ADDR(0x0000ec2eu): goto L_EC2E;
    case RC_ADDR(0x0000ec32u): goto L_EC32;
    case RC_ADDR(0x0000ec36u): goto L_EC36;
    case RC_ADDR(0x0000ec3au): goto L_EC3A;
    case RC_ADDR(0x0000ec3eu): goto L_EC3E;
    case RC_ADDR(0x0000ec42u): goto L_EC42;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E804:
    /* 0000e804   4  link.w A5,#ffffffd8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e804u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x28u;

L_E808:
    /* 0000e808   4  tst.l (ffffa202,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e808u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    rc_set_nzvc(c, t0, RC_L);

L_E80C:
    /* 0000e80c   2  beq 0000e812 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e80cu);
    if (rc_cond(c, 7)) goto L_E812;

L_E80E:
    /* 0000e80e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e80eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E810:
    /* 0000e810   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e810u);
    rc_ret(c, m);
    return;

L_E812:
    /* 0000e812   4  jsr (ffff80c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e812u);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0000e816u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_E816:
    /* 0000e816   4  pea (0000ec46) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e816u);
    rc_push32(c, m, RC_ADDR(0x0000ec46u));

L_E81A:
    /* 0000e81a   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e81au);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000e81eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_E81E:
    /* 0000e81e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e81eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E820:
    /* 0000e820   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e820u);
    rc_push32(c, m, 0x000003edu);

L_E824:
    /* 0000e824   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e824u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_E828:
    /* 0000e828   2  move.l (A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e828u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E82A:
    /* 0000e82a   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e82au);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0000e82eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_E82E:
    /* 0000e82e   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e82eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E830:
    /* 0000e830   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e830u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E834:
    /* 0000e834   2  beq 0000e870 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e834u);
    if (rc_cond(c, 7)) goto L_E870;

L_E836:
    /* 0000e836   6  move.l (ac2,A4),(a1e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e836u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac2u));
    rc_wr32(c, m, (c->a[4] + 0xa1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E83C:
    /* 0000e83c   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e83cu);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_E842:
    /* 0000e842   4  move.l (a1e,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e842u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E846:
    /* 0000e846   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e846u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000e84au);
    rc_os_call(c, m, 0, -198);

L_E84A:
    /* 0000e84a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e84au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E84C:
    /* 0000e84c   4  move.l D0,(ffffa202,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e84cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5dfeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E850:
    /* 0000e850   4  move.l (a1e,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e850u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E854:
    /* 0000e854   4  move.l (ffffa202,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e854u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E858:
    /* 0000e858   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e858u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E85C:
    /* 0000e85c   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e85cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000e860u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_E860:
    /* 0000e860   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e860u);
    c->a[7] = (c->a[7] + 0xcu);

L_E864:
    /* 0000e864   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e864u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E868:
    /* 0000e868   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e868u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000e86cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_E86C:
    /* 0000e86c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e86cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E86E:
    /* 0000e86e   2  bra 0000e874 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e86eu);
    goto L_E874;

L_E870:
    /* 0000e870   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e870u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_E872:
    /* 0000e872   2  bra 0000e80e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e872u);
    rc_tick();
    goto L_E80E;

L_E874:
    /* 0000e874   4  jsr (ffff8284,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e874u);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000e878u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_E878:
    /* 0000e878   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e878u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_E87C:
    /* 0000e87c   6  move.w (4,A0),(ffffa206,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e87cu);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[4] - 0x5dfau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E882:
    /* 0000e882   4  clr.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e882u);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E886:
    /* 0000e886   4  bra 0000ec32 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e886u);
    goto L_EC32;

L_E88A:
    /* 0000e88a   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e88au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E88E:
    /* 0000e88e   4  muls.w #a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e88eu);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_E892:
    /* 0000e892   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e892u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_E894:
    /* 0000e894   4  adda.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e894u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_E898:
    /* 0000e898   6  move.l (6,A0),(ffffffde,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e898u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E89E:
    /* 0000e89e   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e89eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8A2:
    /* 0000e8a2   4  muls.w #a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8a2u);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_E8A6:
    /* 0000e8a6   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8a6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_E8A8:
    /* 0000e8a8   4  adda.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8a8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_E8AC:
    /* 0000e8ac   6  move.l (a,A0),(ffffffda,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8acu);
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8B2:
    /* 0000e8b2   4  pea (0000ec52) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8b2u);
    rc_push32(c, m, RC_ADDR(0x0000ec52u));

L_E8B6:
    /* 0000e8b6   4  move.l (ffffffde,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8b6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8BA:
    /* 0000e8ba   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8bau);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0000e8beu));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_E8BE:
    /* 0000e8be   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8beu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E8C0:
    /* 0000e8c0   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8c0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E8C2:
    /* 0000e8c2   2  beq 0000e8d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8c2u);
    if (rc_cond(c, 7)) goto L_E8D4;

L_E8C4:
    /* 0000e8c4   4  pea (0000ec58) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8c4u);
    rc_push32(c, m, RC_ADDR(0x0000ec58u));

L_E8C8:
    /* 0000e8c8   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8c8u);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000e8ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_E8CC:
    /* 0000e8cc   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8ccu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E8CE:
    /* 0000e8ce   4  clr.w (ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8ceu);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E8D2:
    /* 0000e8d2   2  bra 0000e8f2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8d2u);
    goto L_E8F2;

L_E8D4:
    /* 0000e8d4   4  lea (0000ec63),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8d4u);
    c->a[0] = RC_ADDR(0x0000ec63u);

L_E8D8:
    /* 0000e8d8   4  move.l A0,(ffffffde,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8d8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8DC:
    /* 0000e8dc   4  lea (0000ec75),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8dcu);
    c->a[0] = RC_ADDR(0x0000ec75u);

L_E8E0:
    /* 0000e8e0   4  move.l A0,(ffffffda,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8e0u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8E4:
    /* 0000e8e4   6  move.w #1,(ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8e4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8EA:
    /* 0000e8ea   8  move.l #20,(ac2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8eau);
    t0 = 0x00000020u;
    rc_wr32(c, m, (c->a[4] + 0xac2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8F2:
    /* 0000e8f2   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8f2u);
    rc_push32(c, m, 0x000003edu);

L_E8F6:
    /* 0000e8f6   4  move.l (ffffffde,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8f6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8FA:
    /* 0000e8fa   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8fau);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0000e8feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_E8FE:
    /* 0000e8fe   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e8feu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E900:
    /* 0000e900   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e900u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E904:
    /* 0000e904   4  beq 0000e9b2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e904u);
    if (rc_cond(c, 7)) goto L_E9B2;

L_E908:
    /* 0000e908   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e908u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E90C:
    /* 0000e90c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e90cu);
    rc_ext_l(c, 0);

L_E90E:
    /* 0000e90e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e90eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_E910:
    /* 0000e910   4  lea (a22,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e910u);
    c->a[0] = (c->a[4] + 0xa22u);

L_E914:
    /* 0000e914   6  move.l (ac2,A4),(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e914u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac2u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E91A:
    /* 0000e91a   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e91au);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_E920:
    /* 0000e920   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e920u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E924:
    /* 0000e924   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e924u);
    rc_ext_l(c, 0);

L_E926:
    /* 0000e926   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e926u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_E928:
    /* 0000e928   4  lea (a22,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e928u);
    c->a[0] = (c->a[4] + 0xa22u);

L_E92C:
    /* 0000e92c   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e92cu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E930:
    /* 0000e930   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e930u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000e934u);
    rc_os_call(c, m, 0, -198);

L_E934:
    /* 0000e934   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e934u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E936:
    /* 0000e936   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e936u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E93A:
    /* 0000e93a   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e93au);
    rc_ext_l(c, 1);

L_E93C:
    /* 0000e93c   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e93cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_E93E:
    /* 0000e93e   4  lea (a9a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e93eu);
    c->a[0] = (c->a[4] + 0xa9au);

L_E942:
    /* 0000e942   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e942u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E946:
    /* 0000e946   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e946u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E94A:
    /* 0000e94a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e94au);
    rc_ext_l(c, 0);

L_E94C:
    /* 0000e94c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e94cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_E94E:
    /* 0000e94e   4  lea (a9a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e94eu);
    c->a[0] = (c->a[4] + 0xa9au);

L_E952:
    /* 0000e952   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e952u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E956:
    /* 0000e956   4  muls.w #a,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e956u);
    t0 = 0x0000000au;
    rc_muls(c, 1, t0);

L_E95A:
    /* 0000e95a   2  movea.l D1,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e95au);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_E95C:
    /* 0000e95c   4  adda.l (8,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e95cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] += t0;

L_E960:
    /* 0000e960   4  move.w (e,A1),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e960u);
    t0 = rc_rd16(c, m, (c->a[1] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E964:
    /* 0000e964   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e964u);
    rc_ext_l(c, 1);

L_E966:
    /* 0000e966   4  divs.w #4,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e966u);
    t0 = 0x00000004u;
    rc_divs(c, m, 1, t0);

L_E96A:
    /* 0000e96a   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e96au);
    rc_ext_l(c, 1);

L_E96C:
    /* 0000e96c   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e96cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_E96E:
    /* 0000e96e   2  movea.l D1,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e96eu);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_E970:
    /* 0000e970   4  adda.l (ffffa202,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e970u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    c->a[1] += t0;

L_E974:
    /* 0000e974   6  move.l (0,A0,D0.w),(40,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e974u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[1] + 0x40u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E97A:
    /* 0000e97a   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e97au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E97E:
    /* 0000e97e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e97eu);
    rc_ext_l(c, 0);

L_E980:
    /* 0000e980   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e980u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_E982:
    /* 0000e982   4  lea (a22,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e982u);
    c->a[0] = (c->a[4] + 0xa22u);

L_E986:
    /* 0000e986   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e986u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E98A:
    /* 0000e98a   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e98au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E98E:
    /* 0000e98e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e98eu);
    rc_ext_l(c, 0);

L_E990:
    /* 0000e990   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e990u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_E992:
    /* 0000e992   4  lea (a9a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e992u);
    c->a[0] = (c->a[4] + 0xa9au);

L_E996:
    /* 0000e996   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e996u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E99A:
    /* 0000e99a   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e99au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E99E:
    /* 0000e99e   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e99eu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000e9a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_E9A2:
    /* 0000e9a2   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9a2u);
    c->a[7] = (c->a[7] + 0xcu);

L_E9A6:
    /* 0000e9a6   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9a6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9AA:
    /* 0000e9aa   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9aau);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000e9aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_E9AE:
    /* 0000e9ae   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9aeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E9B0:
    /* 0000e9b0   2  bra 0000e9b8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9b0u);
    goto L_E9B8;

L_E9B2:
    /* 0000e9b2   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9b2u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_E9B4:
    /* 0000e9b4   4  bra 0000e80e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9b4u);
    rc_tick();
    goto L_E80E;

L_E9B8:
    /* 0000e9b8   4  pea (0000ec86) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9b8u);
    rc_push32(c, m, RC_ADDR(0x0000ec86u));

L_E9BC:
    /* 0000e9bc   4  move.l (ffffffda,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9bcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9C0:
    /* 0000e9c0   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9c0u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0000e9c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_E9C4:
    /* 0000e9c4   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9c4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E9C6:
    /* 0000e9c6   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9c6u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E9C8:
    /* 0000e9c8   4  beq 0000ebb4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9c8u);
    if (rc_cond(c, 7)) goto L_EBB4;

L_E9CC:
    /* 0000e9cc   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9ccu);
    rc_push32(c, m, 0x000003edu);

L_E9D0:
    /* 0000e9d0   4  move.l (ffffffda,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9d0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9D4:
    /* 0000e9d4   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9d4u);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0000e9d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_E9D8:
    /* 0000e9d8   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9d8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E9DA:
    /* 0000e9da   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9dau);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9DE:
    /* 0000e9de   4  beq 0000ebac */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9deu);
    if (rc_cond(c, 7)) goto L_EBAC;

L_E9E2:
    /* 0000e9e2   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9e2u);
    rc_push32(c, m, 0x00000002u);

L_E9E6:
    /* 0000e9e6   4  pea (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9e6u);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_E9EA:
    /* 0000e9ea   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9eau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9EE:
    /* 0000e9ee   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9eeu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000e9f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_E9F2:
    /* 0000e9f2   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9f2u);
    c->a[7] = (c->a[7] + 0xcu);

L_E9F6:
    /* 0000e9f6   4  pea (00000004).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9f6u);
    rc_push32(c, m, 0x00000004u);

L_E9FA:
    /* 0000e9fa   4  pea (ffffffee,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9fau);
    rc_push32(c, m, (c->a[5] - 0x12u));

L_E9FE:
    /* 0000e9fe   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000e9feu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA02:
    /* 0000ea02   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea02u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000ea06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_EA06:
    /* 0000ea06   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea06u);
    c->a[7] = (c->a[7] + 0xcu);

L_EA0A:
    /* 0000ea0a   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea0au);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EA0C:
    /* 0000ea0c   4  pea (fffffffa).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea0cu);
    rc_push32(c, m, 0xfffffffau);

L_EA10:
    /* 0000ea10   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea10u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA14:
    /* 0000ea14   4  jsr (ffff831a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea14u);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x0000ea18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021488u);
    return;

L_EA18:
    /* 0000ea18   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea18u);
    c->a[7] = (c->a[7] + 0xcu);

L_EA1C:
    /* 0000ea1c   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea1cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EA1E:
    /* 0000ea1e   4  move.b (fffffff1,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea1eu);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_EA22:
    /* 0000ea22   4  cmp.w #ff,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea22u);
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EA26:
    /* 0000ea26   4  bne 0000eb28 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea26u);
    if (rc_cond(c, 6)) goto L_EB28;

L_EA2A:
    /* 0000ea2a   4  move.w (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea2au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA2E:
    /* 0000ea2e   2  asl.w #5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea2eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_EA30:
    /* 0000ea30   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea30u);
    rc_ext_l(c, 0);

L_EA32:
    /* 0000ea32   4  move.l D0,(ffffffe2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea32u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA36:
    /* 0000ea36   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea36u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA3A:
    /* 0000ea3a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea3au);
    rc_ext_l(c, 0);

L_EA3C:
    /* 0000ea3c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea3cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EA3E:
    /* 0000ea3e   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea3eu);
    c->a[0] = (c->a[4] + 0xa4au);

L_EA42:
    /* 0000ea42   2  moveq #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea42u);
    c->d[1] = 0x00000002u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_EA44:
    /* 0000ea44   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea44u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA46:
    /* 0000ea46   4  move.l (ffffffe2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea46u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA4A:
    /* 0000ea4a   4  jsr (ffff82d8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea4au);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x0000ea4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000211acu);
    return;

L_EA4E:
    /* 0000ea4e   4  move.l (ffffffe2,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea4eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA52:
    /* 0000ea52   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea52u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_EA54:
    /* 0000ea54   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea54u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EA56:
    /* 0000ea56   4  add.l (ffffffe2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea56u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EA5A:
    /* 0000ea5a   2  move.l (A7)+,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea5au);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA5C:
    /* 0000ea5c   6  add.l #3e,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea5cu);
    t0 = 0x0000003eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EA62:
    /* 0000ea62   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea62u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA66:
    /* 0000ea66   6  pea (00010002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea66u);
    rc_push32(c, m, RC_ADDR(0x00010002u));

L_EA6C:
    /* 0000ea6c   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea6cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA70:
    /* 0000ea70   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea70u);
    rc_ext_l(c, 0);

L_EA72:
    /* 0000ea72   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea72u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EA74:
    /* 0000ea74   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea74u);
    c->a[0] = (c->a[4] + 0xa4au);

L_EA78:
    /* 0000ea78   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea78u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA7C:
    /* 0000ea7c   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea7cu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000ea80u);
    rc_os_call(c, m, 0, -198);

L_EA80:
    /* 0000ea80   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea80u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EA82:
    /* 0000ea82   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea82u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA86:
    /* 0000ea86   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea86u);
    rc_ext_l(c, 1);

L_EA88:
    /* 0000ea88   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea88u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_EA8A:
    /* 0000ea8a   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea8au);
    c->a[0] = (c->a[4] + 0xa72u);

L_EA8E:
    /* 0000ea8e   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea8eu);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA92:
    /* 0000ea92   4  pea (0000003e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea92u);
    rc_push32(c, m, 0x0000003eu);

L_EA96:
    /* 0000ea96   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea96u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA9A:
    /* 0000ea9a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea9au);
    rc_ext_l(c, 0);

L_EA9C:
    /* 0000ea9c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea9cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EA9E:
    /* 0000ea9e   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ea9eu);
    c->a[0] = (c->a[4] + 0xa72u);

L_EAA2:
    /* 0000eaa2   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaa2u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAA6:
    /* 0000eaa6   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaa6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAAA:
    /* 0000eaaa   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaaau);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000eaaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_EAAE:
    /* 0000eaae   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaaeu);
    c->a[7] = (c->a[7] + 0xcu);

L_EAB2:
    /* 0000eab2   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eab2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EAB6:
    /* 0000eab6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eab6u);
    rc_ext_l(c, 0);

L_EAB8:
    /* 0000eab8   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eab8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EABA:
    /* 0000eaba   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eabau);
    c->a[0] = (c->a[4] + 0xa72u);

L_EABE:
    /* 0000eabe   4  movea.l (0,A0,D0.w),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eabeu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_EAC2:
    /* 0000eac2   6  move.b #6,(5,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eac2u);
    t0 = 0x00000006u;
    rc_wr8(c, m, (c->a[1] + 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_EAC8:
    /* 0000eac8   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eac8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EACC:
    /* 0000eacc   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaccu);
    rc_ext_l(c, 0);

L_EACE:
    /* 0000eace   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaceu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EAD0:
    /* 0000ead0   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ead0u);
    c->a[0] = (c->a[4] + 0xa72u);

L_EAD4:
    /* 0000ead4   4  movea.l (0,A0,D0.w),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ead4u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_EAD8:
    /* 0000ead8   6  adda.l #3e,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ead8u);
    t0 = 0x0000003eu;
    c->a[1] += t0;

L_EADE:
    /* 0000eade   4  move.l A1,(ffffffea,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eadeu);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAE2:
    /* 0000eae2   2  moveq #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eae2u);
    c->d[1] = 0x00000002u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_EAE4:
    /* 0000eae4   4  move.l (ffffffe2,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eae4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAE8:
    /* 0000eae8   4  jsr (ffff82d8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eae8u);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x0000eaecu));
    rc_depth++;
    c->pc = RC_ADDR(0x000211acu);
    return;

L_EAEC:
    /* 0000eaec   4  add.l (ffffffea,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaecu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_EAF0:
    /* 0000eaf0   4  move.l D0,(ffffffe6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaf0u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAF4:
    /* 0000eaf4   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaf4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAF8:
    /* 0000eaf8   4  move.l (ffffffe6,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eaf8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAFC:
    /* 0000eafc   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eafcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB00:
    /* 0000eb00   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb00u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000eb04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_EB04:
    /* 0000eb04   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb04u);
    c->a[7] = (c->a[7] + 0xcu);

L_EB08:
    /* 0000eb08   4  move.l (ffffffe2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb08u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB0C:
    /* 0000eb0c   4  movea.l (ffffffe6,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb0cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_EB10:
    /* 0000eb10   4  adda.l (ffffffe2,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb10u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] += t0;

L_EB14:
    /* 0000eb14   2  move.l A0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb14u);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB16:
    /* 0000eb16   4  move.l (ffffffea,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb16u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB1A:
    /* 0000eb1a   4  move.l (ffffffe6,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb1au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB1E:
    /* 0000eb1e   4  jsr (0000e7ce) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb1eu);
    rc_push32(c, m, RC_ADDR(0x0000eb22u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e7ceu);
    return;

L_EB22:
    /* 0000eb22   4  lea (10,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb22u);
    c->a[7] = (c->a[7] + 0x10u);

L_EB26:
    /* 0000eb26   2  bra 0000eba0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb26u);
    goto L_EBA0;

L_EB28:
    /* 0000eb28   4  tst.w (ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb28u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_EB2C:
    /* 0000eb2c   2  beq 0000eb36 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb2cu);
    if (rc_cond(c, 7)) goto L_EB36;

L_EB2E:
    /* 0000eb2e   8  move.l #1622,(ac2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb2eu);
    t0 = 0x00001622u;
    rc_wr32(c, m, (c->a[4] + 0xac2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB36:
    /* 0000eb36   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb36u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB3A:
    /* 0000eb3a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb3au);
    rc_ext_l(c, 0);

L_EB3C:
    /* 0000eb3c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb3cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EB3E:
    /* 0000eb3e   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb3eu);
    c->a[0] = (c->a[4] + 0xa4au);

L_EB42:
    /* 0000eb42   6  move.l (ac2,A4),(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb42u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac2u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB48:
    /* 0000eb48   6  pea (00010002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb48u);
    rc_push32(c, m, RC_ADDR(0x00010002u));

L_EB4E:
    /* 0000eb4e   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb4eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB52:
    /* 0000eb52   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb52u);
    rc_ext_l(c, 0);

L_EB54:
    /* 0000eb54   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb54u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EB56:
    /* 0000eb56   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb56u);
    c->a[0] = (c->a[4] + 0xa4au);

L_EB5A:
    /* 0000eb5a   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb5au);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB5E:
    /* 0000eb5e   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb5eu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000eb62u);
    rc_os_call(c, m, 0, -198);

L_EB62:
    /* 0000eb62   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb62u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EB64:
    /* 0000eb64   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb64u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB68:
    /* 0000eb68   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb68u);
    rc_ext_l(c, 1);

L_EB6A:
    /* 0000eb6a   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb6au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_EB6C:
    /* 0000eb6c   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb6cu);
    c->a[0] = (c->a[4] + 0xa72u);

L_EB70:
    /* 0000eb70   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb70u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB74:
    /* 0000eb74   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB78:
    /* 0000eb78   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb78u);
    rc_ext_l(c, 0);

L_EB7A:
    /* 0000eb7a   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb7au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EB7C:
    /* 0000eb7c   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb7cu);
    c->a[0] = (c->a[4] + 0xa4au);

L_EB80:
    /* 0000eb80   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb80u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB84:
    /* 0000eb84   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb84u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB88:
    /* 0000eb88   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb88u);
    rc_ext_l(c, 0);

L_EB8A:
    /* 0000eb8a   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb8au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EB8C:
    /* 0000eb8c   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb8cu);
    c->a[0] = (c->a[4] + 0xa72u);

L_EB90:
    /* 0000eb90   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb90u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB94:
    /* 0000eb94   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb94u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EB98:
    /* 0000eb98   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb98u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000eb9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_EB9C:
    /* 0000eb9c   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eb9cu);
    c->a[7] = (c->a[7] + 0xcu);

L_EBA0:
    /* 0000eba0   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eba0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBA4:
    /* 0000eba4   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eba4u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000eba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_EBA8:
    /* 0000eba8   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eba8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_EBAA:
    /* 0000ebaa   2  bra 0000ebb2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebaau);
    goto L_EBB2;

L_EBAC:
    /* 0000ebac   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebacu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EBAE:
    /* 0000ebae   4  bra 0000e80e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebaeu);
    rc_tick();
    goto L_E80E;

L_EBB2:
    /* 0000ebb2   2  bra 0000ec08 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebb2u);
    goto L_EC08;

L_EBB4:
    /* 0000ebb4   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebb4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBB8:
    /* 0000ebb8   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebb8u);
    rc_ext_l(c, 0);

L_EBBA:
    /* 0000ebba   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebbau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EBBC:
    /* 0000ebbc   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebbcu);
    c->a[0] = (c->a[4] + 0xa4au);

L_EBC0:
    /* 0000ebc0   8  move.l #2000,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebc0u);
    t0 = 0x00002000u;
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBC8:
    /* 0000ebc8   6  pea (00010002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebc8u);
    rc_push32(c, m, RC_ADDR(0x00010002u));

L_EBCE:
    /* 0000ebce   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebceu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBD2:
    /* 0000ebd2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebd2u);
    rc_ext_l(c, 0);

L_EBD4:
    /* 0000ebd4   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebd4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EBD6:
    /* 0000ebd6   4  lea (a4a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebd6u);
    c->a[0] = (c->a[4] + 0xa4au);

L_EBDA:
    /* 0000ebda   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebdau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBDE:
    /* 0000ebde   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebdeu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0000ebe2u);
    rc_os_call(c, m, 0, -198);

L_EBE2:
    /* 0000ebe2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebe2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EBE4:
    /* 0000ebe4   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebe4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBE8:
    /* 0000ebe8   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebe8u);
    rc_ext_l(c, 1);

L_EBEA:
    /* 0000ebea   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebeau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_EBEC:
    /* 0000ebec   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebecu);
    c->a[0] = (c->a[4] + 0xa72u);

L_EBF0:
    /* 0000ebf0   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebf0u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBF4:
    /* 0000ebf4   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebf4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBF8:
    /* 0000ebf8   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebf8u);
    rc_ext_l(c, 0);

L_EBFA:
    /* 0000ebfa   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebfau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EBFC:
    /* 0000ebfc   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ebfcu);
    c->a[0] = (c->a[4] + 0xa72u);

L_EC00:
    /* 0000ec00   4  movea.l (0,A0,D0.w),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec00u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_EC04:
    /* 0000ec04   4  move.b #80,(A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec04u);
    t0 = 0x00000080u;
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_EC08:
    /* 0000ec08   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec08u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC0C:
    /* 0000ec0c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec0cu);
    rc_ext_l(c, 0);

L_EC0E:
    /* 0000ec0e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec0eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EC10:
    /* 0000ec10   4  lea (a72,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec10u);
    c->a[0] = (c->a[4] + 0xa72u);

L_EC14:
    /* 0000ec14   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec14u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC18:
    /* 0000ec18   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec18u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC1C:
    /* 0000ec1c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec1cu);
    rc_ext_l(c, 0);

L_EC1E:
    /* 0000ec1e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec1eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_EC20:
    /* 0000ec20   4  lea (a9a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec20u);
    c->a[0] = (c->a[4] + 0xa9au);

L_EC24:
    /* 0000ec24   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec24u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC28:
    /* 0000ec28   4  jsr (0000efda) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec28u);
    rc_push32(c, m, RC_ADDR(0x0000ec2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efdau);
    return;

L_EC2C:
    /* 0000ec2c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec2cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EC2E:
    /* 0000ec2e   4  addq.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec2eu);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EC32:
    /* 0000ec32   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec32u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC36:
    /* 0000ec36   4  cmp.w (ffffa206,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec36u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dfau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EC3A:
    /* 0000ec3a   4  blt 0000e88a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec3au);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E88A; }

L_EC3E:
    /* 0000ec3e   4  jsr (ffff8284,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec3eu);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000ec42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_EC42:
    /* 0000ec42   4  bra 0000e80e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec42u);
    rc_tick();
    goto L_E80E;

}
