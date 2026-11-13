/* fn_0000f814 - 982 byte(s), 336 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f814(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f814u): goto L_F814;
    case RC_ADDR(0x0000f818u): goto L_F818;
    case RC_ADDR(0x0000f81cu): goto L_F81C;
    case RC_ADDR(0x0000f820u): goto L_F820;
    case RC_ADDR(0x0000f824u): goto L_F824;
    case RC_ADDR(0x0000f826u): goto L_F826;
    case RC_ADDR(0x0000f82au): goto L_F82A;
    case RC_ADDR(0x0000f82cu): goto L_F82C;
    case RC_ADDR(0x0000f830u): goto L_F830;
    case RC_ADDR(0x0000f834u): goto L_F834;
    case RC_ADDR(0x0000f838u): goto L_F838;
    case RC_ADDR(0x0000f83cu): goto L_F83C;
    case RC_ADDR(0x0000f83eu): goto L_F83E;
    case RC_ADDR(0x0000f842u): goto L_F842;
    case RC_ADDR(0x0000f846u): goto L_F846;
    case RC_ADDR(0x0000f848u): goto L_F848;
    case RC_ADDR(0x0000f84cu): goto L_F84C;
    case RC_ADDR(0x0000f852u): goto L_F852;
    case RC_ADDR(0x0000f856u): goto L_F856;
    case RC_ADDR(0x0000f85au): goto L_F85A;
    case RC_ADDR(0x0000f85eu): goto L_F85E;
    case RC_ADDR(0x0000f860u): goto L_F860;
    case RC_ADDR(0x0000f864u): goto L_F864;
    case RC_ADDR(0x0000f86au): goto L_F86A;
    case RC_ADDR(0x0000f86cu): goto L_F86C;
    case RC_ADDR(0x0000f870u): goto L_F870;
    case RC_ADDR(0x0000f876u): goto L_F876;
    case RC_ADDR(0x0000f878u): goto L_F878;
    case RC_ADDR(0x0000f87cu): goto L_F87C;
    case RC_ADDR(0x0000f880u): goto L_F880;
    case RC_ADDR(0x0000f882u): goto L_F882;
    case RC_ADDR(0x0000f884u): goto L_F884;
    case RC_ADDR(0x0000f886u): goto L_F886;
    case RC_ADDR(0x0000f88au): goto L_F88A;
    case RC_ADDR(0x0000f88eu): goto L_F88E;
    case RC_ADDR(0x0000f892u): goto L_F892;
    case RC_ADDR(0x0000f896u): goto L_F896;
    case RC_ADDR(0x0000f898u): goto L_F898;
    case RC_ADDR(0x0000f89cu): goto L_F89C;
    case RC_ADDR(0x0000f89eu): goto L_F89E;
    case RC_ADDR(0x0000f8a2u): goto L_F8A2;
    case RC_ADDR(0x0000f8a4u): goto L_F8A4;
    case RC_ADDR(0x0000f8a6u): goto L_F8A6;
    case RC_ADDR(0x0000f8aau): goto L_F8AA;
    case RC_ADDR(0x0000f8acu): goto L_F8AC;
    case RC_ADDR(0x0000f8b0u): goto L_F8B0;
    case RC_ADDR(0x0000f8b2u): goto L_F8B2;
    case RC_ADDR(0x0000f8b4u): goto L_F8B4;
    case RC_ADDR(0x0000f8b6u): goto L_F8B6;
    case RC_ADDR(0x0000f8bau): goto L_F8BA;
    case RC_ADDR(0x0000f8bcu): goto L_F8BC;
    case RC_ADDR(0x0000f8beu): goto L_F8BE;
    case RC_ADDR(0x0000f8c2u): goto L_F8C2;
    case RC_ADDR(0x0000f8c4u): goto L_F8C4;
    case RC_ADDR(0x0000f8c8u): goto L_F8C8;
    case RC_ADDR(0x0000f8cau): goto L_F8CA;
    case RC_ADDR(0x0000f8ccu): goto L_F8CC;
    case RC_ADDR(0x0000f8d0u): goto L_F8D0;
    case RC_ADDR(0x0000f8d6u): goto L_F8D6;
    case RC_ADDR(0x0000f8dau): goto L_F8DA;
    case RC_ADDR(0x0000f8dcu): goto L_F8DC;
    case RC_ADDR(0x0000f8e0u): goto L_F8E0;
    case RC_ADDR(0x0000f8e4u): goto L_F8E4;
    case RC_ADDR(0x0000f8e8u): goto L_F8E8;
    case RC_ADDR(0x0000f8eau): goto L_F8EA;
    case RC_ADDR(0x0000f8eeu): goto L_F8EE;
    case RC_ADDR(0x0000f8f2u): goto L_F8F2;
    case RC_ADDR(0x0000f8f4u): goto L_F8F4;
    case RC_ADDR(0x0000f8f6u): goto L_F8F6;
    case RC_ADDR(0x0000f8f8u): goto L_F8F8;
    case RC_ADDR(0x0000f8fcu): goto L_F8FC;
    case RC_ADDR(0x0000f8feu): goto L_F8FE;
    case RC_ADDR(0x0000f902u): goto L_F902;
    case RC_ADDR(0x0000f906u): goto L_F906;
    case RC_ADDR(0x0000f908u): goto L_F908;
    case RC_ADDR(0x0000f90cu): goto L_F90C;
    case RC_ADDR(0x0000f912u): goto L_F912;
    case RC_ADDR(0x0000f914u): goto L_F914;
    case RC_ADDR(0x0000f918u): goto L_F918;
    case RC_ADDR(0x0000f91au): goto L_F91A;
    case RC_ADDR(0x0000f920u): goto L_F920;
    case RC_ADDR(0x0000f922u): goto L_F922;
    case RC_ADDR(0x0000f926u): goto L_F926;
    case RC_ADDR(0x0000f928u): goto L_F928;
    case RC_ADDR(0x0000f92cu): goto L_F92C;
    case RC_ADDR(0x0000f930u): goto L_F930;
    case RC_ADDR(0x0000f934u): goto L_F934;
    case RC_ADDR(0x0000f936u): goto L_F936;
    case RC_ADDR(0x0000f938u): goto L_F938;
    case RC_ADDR(0x0000f93cu): goto L_F93C;
    case RC_ADDR(0x0000f93eu): goto L_F93E;
    case RC_ADDR(0x0000f942u): goto L_F942;
    case RC_ADDR(0x0000f946u): goto L_F946;
    case RC_ADDR(0x0000f94au): goto L_F94A;
    case RC_ADDR(0x0000f94cu): goto L_F94C;
    case RC_ADDR(0x0000f94eu): goto L_F94E;
    case RC_ADDR(0x0000f950u): goto L_F950;
    case RC_ADDR(0x0000f952u): goto L_F952;
    case RC_ADDR(0x0000f956u): goto L_F956;
    case RC_ADDR(0x0000f958u): goto L_F958;
    case RC_ADDR(0x0000f95au): goto L_F95A;
    case RC_ADDR(0x0000f960u): goto L_F960;
    case RC_ADDR(0x0000f962u): goto L_F962;
    case RC_ADDR(0x0000f966u): goto L_F966;
    case RC_ADDR(0x0000f968u): goto L_F968;
    case RC_ADDR(0x0000f96cu): goto L_F96C;
    case RC_ADDR(0x0000f970u): goto L_F970;
    case RC_ADDR(0x0000f972u): goto L_F972;
    case RC_ADDR(0x0000f976u): goto L_F976;
    case RC_ADDR(0x0000f97au): goto L_F97A;
    case RC_ADDR(0x0000f97eu): goto L_F97E;
    case RC_ADDR(0x0000f980u): goto L_F980;
    case RC_ADDR(0x0000f984u): goto L_F984;
    case RC_ADDR(0x0000f986u): goto L_F986;
    case RC_ADDR(0x0000f98au): goto L_F98A;
    case RC_ADDR(0x0000f98cu): goto L_F98C;
    case RC_ADDR(0x0000f990u): goto L_F990;
    case RC_ADDR(0x0000f992u): goto L_F992;
    case RC_ADDR(0x0000f994u): goto L_F994;
    case RC_ADDR(0x0000f998u): goto L_F998;
    case RC_ADDR(0x0000f99cu): goto L_F99C;
    case RC_ADDR(0x0000f9a0u): goto L_F9A0;
    case RC_ADDR(0x0000f9a4u): goto L_F9A4;
    case RC_ADDR(0x0000f9a6u): goto L_F9A6;
    case RC_ADDR(0x0000f9a8u): goto L_F9A8;
    case RC_ADDR(0x0000f9aau): goto L_F9AA;
    case RC_ADDR(0x0000f9acu): goto L_F9AC;
    case RC_ADDR(0x0000f9aeu): goto L_F9AE;
    case RC_ADDR(0x0000f9b0u): goto L_F9B0;
    case RC_ADDR(0x0000f9b2u): goto L_F9B2;
    case RC_ADDR(0x0000f9b4u): goto L_F9B4;
    case RC_ADDR(0x0000f9b6u): goto L_F9B6;
    case RC_ADDR(0x0000f9bcu): goto L_F9BC;
    case RC_ADDR(0x0000f9beu): goto L_F9BE;
    case RC_ADDR(0x0000f9c4u): goto L_F9C4;
    case RC_ADDR(0x0000f9c6u): goto L_F9C6;
    case RC_ADDR(0x0000f9c8u): goto L_F9C8;
    case RC_ADDR(0x0000f9cau): goto L_F9CA;
    case RC_ADDR(0x0000f9ccu): goto L_F9CC;
    case RC_ADDR(0x0000f9ceu): goto L_F9CE;
    case RC_ADDR(0x0000f9d0u): goto L_F9D0;
    case RC_ADDR(0x0000f9d4u): goto L_F9D4;
    case RC_ADDR(0x0000f9d8u): goto L_F9D8;
    case RC_ADDR(0x0000f9dau): goto L_F9DA;
    case RC_ADDR(0x0000f9deu): goto L_F9DE;
    case RC_ADDR(0x0000f9e0u): goto L_F9E0;
    case RC_ADDR(0x0000f9e4u): goto L_F9E4;
    case RC_ADDR(0x0000f9e8u): goto L_F9E8;
    case RC_ADDR(0x0000f9ecu): goto L_F9EC;
    case RC_ADDR(0x0000f9f0u): goto L_F9F0;
    case RC_ADDR(0x0000f9f2u): goto L_F9F2;
    case RC_ADDR(0x0000f9f4u): goto L_F9F4;
    case RC_ADDR(0x0000f9f6u): goto L_F9F6;
    case RC_ADDR(0x0000f9f8u): goto L_F9F8;
    case RC_ADDR(0x0000f9fcu): goto L_F9FC;
    case RC_ADDR(0x0000f9feu): goto L_F9FE;
    case RC_ADDR(0x0000fa00u): goto L_FA00;
    case RC_ADDR(0x0000fa04u): goto L_FA04;
    case RC_ADDR(0x0000fa08u): goto L_FA08;
    case RC_ADDR(0x0000fa0cu): goto L_FA0C;
    case RC_ADDR(0x0000fa0eu): goto L_FA0E;
    case RC_ADDR(0x0000fa10u): goto L_FA10;
    case RC_ADDR(0x0000fa14u): goto L_FA14;
    case RC_ADDR(0x0000fa18u): goto L_FA18;
    case RC_ADDR(0x0000fa1au): goto L_FA1A;
    case RC_ADDR(0x0000fa1eu): goto L_FA1E;
    case RC_ADDR(0x0000fa20u): goto L_FA20;
    case RC_ADDR(0x0000fa22u): goto L_FA22;
    case RC_ADDR(0x0000fa24u): goto L_FA24;
    case RC_ADDR(0x0000fa28u): goto L_FA28;
    case RC_ADDR(0x0000fa2cu): goto L_FA2C;
    case RC_ADDR(0x0000fa30u): goto L_FA30;
    case RC_ADDR(0x0000fa32u): goto L_FA32;
    case RC_ADDR(0x0000fa36u): goto L_FA36;
    case RC_ADDR(0x0000fa38u): goto L_FA38;
    case RC_ADDR(0x0000fa3au): goto L_FA3A;
    case RC_ADDR(0x0000fa3cu): goto L_FA3C;
    case RC_ADDR(0x0000fa40u): goto L_FA40;
    case RC_ADDR(0x0000fa42u): goto L_FA42;
    case RC_ADDR(0x0000fa46u): goto L_FA46;
    case RC_ADDR(0x0000fa48u): goto L_FA48;
    case RC_ADDR(0x0000fa4au): goto L_FA4A;
    case RC_ADDR(0x0000fa4cu): goto L_FA4C;
    case RC_ADDR(0x0000fa4eu): goto L_FA4E;
    case RC_ADDR(0x0000fa54u): goto L_FA54;
    case RC_ADDR(0x0000fa56u): goto L_FA56;
    case RC_ADDR(0x0000fa58u): goto L_FA58;
    case RC_ADDR(0x0000fa5cu): goto L_FA5C;
    case RC_ADDR(0x0000fa5eu): goto L_FA5E;
    case RC_ADDR(0x0000fa62u): goto L_FA62;
    case RC_ADDR(0x0000fa64u): goto L_FA64;
    case RC_ADDR(0x0000fa66u): goto L_FA66;
    case RC_ADDR(0x0000fa6au): goto L_FA6A;
    case RC_ADDR(0x0000fa6cu): goto L_FA6C;
    case RC_ADDR(0x0000fa6eu): goto L_FA6E;
    case RC_ADDR(0x0000fa70u): goto L_FA70;
    case RC_ADDR(0x0000fa74u): goto L_FA74;
    case RC_ADDR(0x0000fa78u): goto L_FA78;
    case RC_ADDR(0x0000fa7cu): goto L_FA7C;
    case RC_ADDR(0x0000fa7eu): goto L_FA7E;
    case RC_ADDR(0x0000fa80u): goto L_FA80;
    case RC_ADDR(0x0000fa82u): goto L_FA82;
    case RC_ADDR(0x0000fa86u): goto L_FA86;
    case RC_ADDR(0x0000fa8au): goto L_FA8A;
    case RC_ADDR(0x0000fa8cu): goto L_FA8C;
    case RC_ADDR(0x0000fa90u): goto L_FA90;
    case RC_ADDR(0x0000fa94u): goto L_FA94;
    case RC_ADDR(0x0000fa96u): goto L_FA96;
    case RC_ADDR(0x0000fa98u): goto L_FA98;
    case RC_ADDR(0x0000fa9au): goto L_FA9A;
    case RC_ADDR(0x0000fa9eu): goto L_FA9E;
    case RC_ADDR(0x0000faa0u): goto L_FAA0;
    case RC_ADDR(0x0000faa2u): goto L_FAA2;
    case RC_ADDR(0x0000faa6u): goto L_FAA6;
    case RC_ADDR(0x0000faa8u): goto L_FAA8;
    case RC_ADDR(0x0000faaau): goto L_FAAA;
    case RC_ADDR(0x0000faaeu): goto L_FAAE;
    case RC_ADDR(0x0000fab0u): goto L_FAB0;
    case RC_ADDR(0x0000fab2u): goto L_FAB2;
    case RC_ADDR(0x0000fab6u): goto L_FAB6;
    case RC_ADDR(0x0000fabau): goto L_FABA;
    case RC_ADDR(0x0000fabeu): goto L_FABE;
    case RC_ADDR(0x0000fac2u): goto L_FAC2;
    case RC_ADDR(0x0000fac6u): goto L_FAC6;
    case RC_ADDR(0x0000facau): goto L_FACA;
    case RC_ADDR(0x0000faccu): goto L_FACC;
    case RC_ADDR(0x0000faceu): goto L_FACE;
    case RC_ADDR(0x0000fad2u): goto L_FAD2;
    case RC_ADDR(0x0000fad6u): goto L_FAD6;
    case RC_ADDR(0x0000fad8u): goto L_FAD8;
    case RC_ADDR(0x0000fadcu): goto L_FADC;
    case RC_ADDR(0x0000fadeu): goto L_FADE;
    case RC_ADDR(0x0000fae0u): goto L_FAE0;
    case RC_ADDR(0x0000fae4u): goto L_FAE4;
    case RC_ADDR(0x0000fae6u): goto L_FAE6;
    case RC_ADDR(0x0000fae8u): goto L_FAE8;
    case RC_ADDR(0x0000faeau): goto L_FAEA;
    case RC_ADDR(0x0000faecu): goto L_FAEC;
    case RC_ADDR(0x0000faeeu): goto L_FAEE;
    case RC_ADDR(0x0000faf2u): goto L_FAF2;
    case RC_ADDR(0x0000faf6u): goto L_FAF6;
    case RC_ADDR(0x0000fafau): goto L_FAFA;
    case RC_ADDR(0x0000fafeu): goto L_FAFE;
    case RC_ADDR(0x0000fb00u): goto L_FB00;
    case RC_ADDR(0x0000fb02u): goto L_FB02;
    case RC_ADDR(0x0000fb06u): goto L_FB06;
    case RC_ADDR(0x0000fb08u): goto L_FB08;
    case RC_ADDR(0x0000fb0au): goto L_FB0A;
    case RC_ADDR(0x0000fb0eu): goto L_FB0E;
    case RC_ADDR(0x0000fb12u): goto L_FB12;
    case RC_ADDR(0x0000fb14u): goto L_FB14;
    case RC_ADDR(0x0000fb16u): goto L_FB16;
    case RC_ADDR(0x0000fb1au): goto L_FB1A;
    case RC_ADDR(0x0000fb1eu): goto L_FB1E;
    case RC_ADDR(0x0000fb20u): goto L_FB20;
    case RC_ADDR(0x0000fb22u): goto L_FB22;
    case RC_ADDR(0x0000fb26u): goto L_FB26;
    case RC_ADDR(0x0000fb28u): goto L_FB28;
    case RC_ADDR(0x0000fb2au): goto L_FB2A;
    case RC_ADDR(0x0000fb2cu): goto L_FB2C;
    case RC_ADDR(0x0000fb2eu): goto L_FB2E;
    case RC_ADDR(0x0000fb30u): goto L_FB30;
    case RC_ADDR(0x0000fb32u): goto L_FB32;
    case RC_ADDR(0x0000fb34u): goto L_FB34;
    case RC_ADDR(0x0000fb36u): goto L_FB36;
    case RC_ADDR(0x0000fb38u): goto L_FB38;
    case RC_ADDR(0x0000fb3au): goto L_FB3A;
    case RC_ADDR(0x0000fb3cu): goto L_FB3C;
    case RC_ADDR(0x0000fb40u): goto L_FB40;
    case RC_ADDR(0x0000fb44u): goto L_FB44;
    case RC_ADDR(0x0000fb46u): goto L_FB46;
    case RC_ADDR(0x0000fb4au): goto L_FB4A;
    case RC_ADDR(0x0000fb4cu): goto L_FB4C;
    case RC_ADDR(0x0000fb4eu): goto L_FB4E;
    case RC_ADDR(0x0000fb50u): goto L_FB50;
    case RC_ADDR(0x0000fb52u): goto L_FB52;
    case RC_ADDR(0x0000fb54u): goto L_FB54;
    case RC_ADDR(0x0000fb56u): goto L_FB56;
    case RC_ADDR(0x0000fb58u): goto L_FB58;
    case RC_ADDR(0x0000fb5au): goto L_FB5A;
    case RC_ADDR(0x0000fb5cu): goto L_FB5C;
    case RC_ADDR(0x0000fb60u): goto L_FB60;
    case RC_ADDR(0x0000fb64u): goto L_FB64;
    case RC_ADDR(0x0000fb68u): goto L_FB68;
    case RC_ADDR(0x0000fb6cu): goto L_FB6C;
    case RC_ADDR(0x0000fb6eu): goto L_FB6E;
    case RC_ADDR(0x0000fb70u): goto L_FB70;
    case RC_ADDR(0x0000fb74u): goto L_FB74;
    case RC_ADDR(0x0000fb78u): goto L_FB78;
    case RC_ADDR(0x0000fb7au): goto L_FB7A;
    case RC_ADDR(0x0000fb7eu): goto L_FB7E;
    case RC_ADDR(0x0000fb80u): goto L_FB80;
    case RC_ADDR(0x0000fb84u): goto L_FB84;
    case RC_ADDR(0x0000fb88u): goto L_FB88;
    case RC_ADDR(0x0000fb8au): goto L_FB8A;
    case RC_ADDR(0x0000fb8eu): goto L_FB8E;
    case RC_ADDR(0x0000fb92u): goto L_FB92;
    case RC_ADDR(0x0000fb94u): goto L_FB94;
    case RC_ADDR(0x0000fb96u): goto L_FB96;
    case RC_ADDR(0x0000fb9au): goto L_FB9A;
    case RC_ADDR(0x0000fb9cu): goto L_FB9C;
    case RC_ADDR(0x0000fba0u): goto L_FBA0;
    case RC_ADDR(0x0000fba2u): goto L_FBA2;
    case RC_ADDR(0x0000fba4u): goto L_FBA4;
    case RC_ADDR(0x0000fba6u): goto L_FBA6;
    case RC_ADDR(0x0000fba8u): goto L_FBA8;
    case RC_ADDR(0x0000fbaau): goto L_FBAA;
    case RC_ADDR(0x0000fbacu): goto L_FBAC;
    case RC_ADDR(0x0000fbaeu): goto L_FBAE;
    case RC_ADDR(0x0000fbb0u): goto L_FBB0;
    case RC_ADDR(0x0000fbb2u): goto L_FBB2;
    case RC_ADDR(0x0000fbb4u): goto L_FBB4;
    case RC_ADDR(0x0000fbb6u): goto L_FBB6;
    case RC_ADDR(0x0000fbbau): goto L_FBBA;
    case RC_ADDR(0x0000fbbcu): goto L_FBBC;
    case RC_ADDR(0x0000fbbeu): goto L_FBBE;
    case RC_ADDR(0x0000fbc0u): goto L_FBC0;
    case RC_ADDR(0x0000fbc2u): goto L_FBC2;
    case RC_ADDR(0x0000fbc4u): goto L_FBC4;
    case RC_ADDR(0x0000fbc6u): goto L_FBC6;
    case RC_ADDR(0x0000fbc8u): goto L_FBC8;
    case RC_ADDR(0x0000fbcau): goto L_FBCA;
    case RC_ADDR(0x0000fbccu): goto L_FBCC;
    case RC_ADDR(0x0000fbceu): goto L_FBCE;
    case RC_ADDR(0x0000fbd0u): goto L_FBD0;
    case RC_ADDR(0x0000fbd2u): goto L_FBD2;
    case RC_ADDR(0x0000fbd4u): goto L_FBD4;
    case RC_ADDR(0x0000fbd6u): goto L_FBD6;
    case RC_ADDR(0x0000fbdau): goto L_FBDA;
    case RC_ADDR(0x0000fbdcu): goto L_FBDC;
    case RC_ADDR(0x0000fbdeu): goto L_FBDE;
    case RC_ADDR(0x0000fbe0u): goto L_FBE0;
    case RC_ADDR(0x0000fbe2u): goto L_FBE2;
    case RC_ADDR(0x0000fbe4u): goto L_FBE4;
    case RC_ADDR(0x0000fbe6u): goto L_FBE6;
    case RC_ADDR(0x0000fbe8u): goto L_FBE8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F814:
    /* 0000f814   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0000f814u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_F818:
    /* 0000f818   4  bge 0000fbe6 */
    c->pc = RC_ADDR(0x0000f818u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_FBE6;

L_F81C:
    /* 0000f81c   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x0000f81cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_F820:
    /* 0000f820   4  lea (10a,A6),A2 */
    c->pc = RC_ADDR(0x0000f820u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0x10au);

L_F824:
    /* 0000f824   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000f824u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F826:
    /* 0000f826   4  mulu.w #1a,D0 */
    c->pc = RC_ADDR(0x0000f826u);
    rc_step(c, m, 42);
    t0 = 0x0000001au;
    rc_mulu(c, 0, t0);

L_F82A:
    /* 0000f82a   2  adda.w D0,A2 */
    c->pc = RC_ADDR(0x0000f82au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] += rc_ext(t0, RC_W);

L_F82C:
    /* 0000f82c   4  move.b (0,A1),D0 */
    c->pc = RC_ADDR(0x0000f82cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F830:
    /* 0000f830   4  beq 0000f930 */
    c->pc = RC_ADDR(0x0000f830u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F930;

L_F834:
    /* 0000f834   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x0000f834u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_F838:
    /* 0000f838   4  bne 0000f914 */
    c->pc = RC_ADDR(0x0000f838u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F914;

L_F83C:
    /* 0000f83c   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000f83cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F83E:
    /* 0000f83e   4  move.b (3,A1),D1 */
    c->pc = RC_ADDR(0x0000f83eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x3u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F842:
    /* 0000f842   4  cmpi.w #24,D1 */
    c->pc = RC_ADDR(0x0000f842u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_F846:
    /* 0000f846   2  bge 0000f85a */
    c->pc = RC_ADDR(0x0000f846u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F85A;

L_F848:
    /* 0000f848   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x0000f848u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F84C:
    /* 0000f84c   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f84cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F852:
    /* 0000f852   4  beq 0000fbe6 */
    c->pc = RC_ADDR(0x0000f852u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FBE6;

L_F856:
    /* 0000f856   4  bra 0000f930 */
    c->pc = RC_ADDR(0x0000f856u);
    rc_step(c, m, 10);
    goto L_F930;

L_F85A:
    /* 0000f85a   4  cmpi.w #6c,D1 */
    c->pc = RC_ADDR(0x0000f85au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000006cu);

L_F85E:
    /* 0000f85e   2  bge 0000f848 */
    c->pc = RC_ADDR(0x0000f85eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) { rc_tick(); goto L_F848; }

L_F860:
    /* 0000f860   4  subi.w #24,D1 */
    c->pc = RC_ADDR(0x0000f860u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000024u;
    rc_flags_sub(c, RC_W, t1, 0x00000024u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F864:
    /* 0000f864   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f864u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F86A:
    /* 0000f86a   2  bne 0000f870 */
    c->pc = RC_ADDR(0x0000f86au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F870;

L_F86C:
    /* 0000f86c   4  clr.l (c,A2) */
    c->pc = RC_ADDR(0x0000f86cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F870:
    /* 0000f870   6  cmpi.b #1,(1,A1) */
    c->pc = RC_ADDR(0x0000f870u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_F876:
    /* 0000f876   2  beq 0000f87c */
    c->pc = RC_ADDR(0x0000f876u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F87C;

L_F878:
    /* 0000f878   4  clr.w (a,A2) */
    c->pc = RC_ADDR(0x0000f878u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F87C:
    /* 0000f87c   4  divu.w #c,D1 */
    c->pc = RC_ADDR(0x0000f87cu);
    rc_step(c, m, 144);
    t0 = 0x0000000cu;
    rc_divu(c, m, 1, t0);

L_F880:
    /* 0000f880   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x0000f880u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F882:
    /* 0000f882   2  swap D1 */
    c->pc = RC_ADDR(0x0000f882u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F884:
    /* 0000f884   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000f884u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F886:
    /* 0000f886   4  lea (0000f6c8),A0 */
    c->pc = RC_ADDR(0x0000f886u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000f6c8u);

L_F88A:
    /* 0000f88a   4  move.w #d5c8,D0 */
    c->pc = RC_ADDR(0x0000f88au);
    rc_step(c, m, 8);
    t0 = 0x0000d5c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F88E:
    /* 0000f88e   4  mulu.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f88eu);
    rc_step(c, m, 48);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_mulu(c, 0, t0);

L_F892:
    /* 0000f892   4  addi.w #11,D2 */
    c->pc = RC_ADDR(0x0000f892u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000011u;
    rc_flags_add(c, RC_W, t1, 0x00000011u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F896:
    /* 0000f896   2  lsr.l D2,D0 */
    c->pc = RC_ADDR(0x0000f896u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[2] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_F898:
    /* 0000f898   4  tst.w (0,A2) */
    c->pc = RC_ADDR(0x0000f898u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    rc_set_nzvc(c, t0, RC_W);

L_F89C:
    /* 0000f89c   2  bne 0000f8a4 */
    c->pc = RC_ADDR(0x0000f89cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F8A4;

L_F89E:
    /* 0000f89e   4  clr.w (2,A2) */
    c->pc = RC_ADDR(0x0000f89eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8A2:
    /* 0000f8a2   2  bra 0000f8cc */
    c->pc = RC_ADDR(0x0000f8a2u);
    rc_step(c, m, 10);
    goto L_F8CC;

L_F8A4:
    /* 0000f8a4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0000f8a4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8A6:
    /* 0000f8a6   4  sub.w (0,A2),D1 */
    c->pc = RC_ADDR(0x0000f8a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F8AA:
    /* 0000f8aa   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f8aau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F8AC:
    /* 0000f8ac   4  move.w (196,A3),D2 */
    c->pc = RC_ADDR(0x0000f8acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x196u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8B0:
    /* 0000f8b0   2  swap D2 */
    c->pc = RC_ADDR(0x0000f8b0u);
    rc_step(c, m, 4);
    t0 = c->d[2];
    c->d[2] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[2], RC_L);

L_F8B2:
    /* 0000f8b2   2  clr.w D2 */
    c->pc = RC_ADDR(0x0000f8b2u);
    rc_step(c, m, 4);
    rc_d_set(c, 2, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8B4:
    /* 0000f8b4   2  lsr.l #1,D2 */
    c->pc = RC_ADDR(0x0000f8b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_F8B6:
    /* 0000f8b6   4  divu.w (22,A6),D2 */
    c->pc = RC_ADDR(0x0000f8b6u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 2, t0);

L_F8BA:
    /* 0000f8ba   2  lsr.w #3,D2 */
    c->pc = RC_ADDR(0x0000f8bau);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 2, RC_W), RC_W));

L_F8BC:
    /* 0000f8bc   2  addq.w #1,D2 */
    c->pc = RC_ADDR(0x0000f8bcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F8BE:
    /* 0000f8be   4  move.w D2,(2,A2) */
    c->pc = RC_ADDR(0x0000f8beu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8C2:
    /* 0000f8c2   2  divs.w D2,D1 */
    c->pc = RC_ADDR(0x0000f8c2u);
    rc_step(c, m, 158);
    t0 = rc_d_get(c, 2, RC_W);
    rc_divs(c, m, 1, t0);

L_F8C4:
    /* 0000f8c4   4  move.w D1,(4,A2) */
    c->pc = RC_ADDR(0x0000f8c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8C8:
    /* 0000f8c8   2  mulu.w D2,D1 */
    c->pc = RC_ADDR(0x0000f8c8u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_mulu(c, 1, t0);

L_F8CA:
    /* 0000f8ca   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0000f8cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F8CC:
    /* 0000f8cc   4  move.w D0,(0,A2) */
    c->pc = RC_ADDR(0x0000f8ccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8D0:
    /* 0000f8d0   6  move.w #1,(18,A2) */
    c->pc = RC_ADDR(0x0000f8d0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8D6:
    /* 0000f8d6   4  tst.w (1a6,A3) */
    c->pc = RC_ADDR(0x0000f8d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_set_nzvc(c, t0, RC_W);

L_F8DA:
    /* 0000f8da   2  bne 0000f8e0 */
    c->pc = RC_ADDR(0x0000f8dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F8E0;

L_F8DC:
    /* 0000f8dc   4  clr.w (16,A2) */
    c->pc = RC_ADDR(0x0000f8dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8E0:
    /* 0000f8e0   4  clr.w (12,A2) */
    c->pc = RC_ADDR(0x0000f8e0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8E4:
    /* 0000f8e4   4  tst.w (1a2,A3) */
    c->pc = RC_ADDR(0x0000f8e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a2u));
    rc_set_nzvc(c, t0, RC_W);

L_F8E8:
    /* 0000f8e8   2  beq 0000f90c */
    c->pc = RC_ADDR(0x0000f8e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F90C;

L_F8EA:
    /* 0000f8ea   4  clr.w (10,A2) */
    c->pc = RC_ADDR(0x0000f8eau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8EE:
    /* 0000f8ee   4  move.w (1a4,A3),D0 */
    c->pc = RC_ADDR(0x0000f8eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F8F2:
    /* 0000f8f2   2  swap D0 */
    c->pc = RC_ADDR(0x0000f8f2u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F8F4:
    /* 0000f8f4   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000f8f4u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F8F6:
    /* 0000f8f6   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000f8f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F8F8:
    /* 0000f8f8   4  divu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x0000f8f8u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 0, t0);

L_F8FC:
    /* 0000f8fc   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x0000f8fcu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_F8FE:
    /* 0000f8fe   4  move.w D0,(12,A2) */
    c->pc = RC_ADDR(0x0000f8feu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F902:
    /* 0000f902   4  move.b (88,A3),D0 */
    c->pc = RC_ADDR(0x0000f902u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[3] + 0x88u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F906:
    /* 0000f906   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000f906u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_F908:
    /* 0000f908   4  move.w D0,(14,A2) */
    c->pc = RC_ADDR(0x0000f908u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F90C:
    /* 0000f90c   6  move.w #ffff,(a,A1) */
    c->pc = RC_ADDR(0x0000f90cu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F912:
    /* 0000f912   2  bra 0000f930 */
    c->pc = RC_ADDR(0x0000f912u);
    rc_step(c, m, 10);
    goto L_F930;

L_F914:
    /* 0000f914   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x0000f914u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_F918:
    /* 0000f918   2  bne 0000f922 */
    c->pc = RC_ADDR(0x0000f918u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F922;

L_F91A:
    /* 0000f91a   6  move.w #6,(a,A2) */
    c->pc = RC_ADDR(0x0000f91au);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F920:
    /* 0000f920   2  bra 0000f930 */
    c->pc = RC_ADDR(0x0000f920u);
    rc_step(c, m, 10);
    goto L_F930;

L_F922:
    /* 0000f922   4  cmpi.b #3,D0 */
    c->pc = RC_ADDR(0x0000f922u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000003u);

L_F926:
    /* 0000f926   2  bne 0000f930 */
    c->pc = RC_ADDR(0x0000f926u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F930;

L_F928:
    /* 0000f928   4  bsr 0000f4a4 */
    c->pc = RC_ADDR(0x0000f928u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f92cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4a4u);
    return;

L_F92C:
    /* 0000f92c   4  bra 0000fbe6 */
    c->pc = RC_ADDR(0x0000f92cu);
    rc_step(c, m, 10);
    goto L_FBE6;

L_F930:
    /* 0000f930   4  tst.w (12,A2) */
    c->pc = RC_ADDR(0x0000f930u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_F934:
    /* 0000f934   2  bmi 0000f976 */
    c->pc = RC_ADDR(0x0000f934u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_F976;

L_F936:
    /* 0000f936   2  beq 0000f93e */
    c->pc = RC_ADDR(0x0000f936u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F93E;

L_F938:
    /* 0000f938   4  subq.w #1,(12,A2) */
    c->pc = RC_ADDR(0x0000f938u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F93C:
    /* 0000f93c   2  bra 0000f976 */
    c->pc = RC_ADDR(0x0000f93cu);
    rc_step(c, m, 10);
    goto L_F976;

L_F93E:
    /* 0000f93e   4  move.w (10,A2),D0 */
    c->pc = RC_ADDR(0x0000f93eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F942:
    /* 0000f942   4  move.w (1a0,A3),D1 */
    c->pc = RC_ADDR(0x0000f942u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F946:
    /* 0000f946   4  mulu.w (22,A6),D1 */
    c->pc = RC_ADDR(0x0000f946u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 1, t0);

L_F94A:
    /* 0000f94a   2  asl.l #6,D1 */
    c->pc = RC_ADDR(0x0000f94au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 1, RC_L), RC_L));

L_F94C:
    /* 0000f94c   2  swap D1 */
    c->pc = RC_ADDR(0x0000f94cu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F94E:
    /* 0000f94e   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f94eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F950:
    /* 0000f950   2  bcc 0000f962 */
    c->pc = RC_ADDR(0x0000f950u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_F962;

L_F952:
    /* 0000f952   4  tst.w (1a2,A3) */
    c->pc = RC_ADDR(0x0000f952u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a2u));
    rc_set_nzvc(c, t0, RC_W);

L_F956:
    /* 0000f956   2  beq 0000f962 */
    c->pc = RC_ADDR(0x0000f956u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F962;

L_F958:
    /* 0000f958   2  bmi 0000f962 */
    c->pc = RC_ADDR(0x0000f958u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_F962;

L_F95A:
    /* 0000f95a   6  move.w #ffff,(12,A2) */
    c->pc = RC_ADDR(0x0000f95au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F960:
    /* 0000f960   2  bra 0000f976 */
    c->pc = RC_ADDR(0x0000f960u);
    rc_step(c, m, 10);
    goto L_F976;

L_F962:
    /* 0000f962   4  move.w D0,(10,A2) */
    c->pc = RC_ADDR(0x0000f962u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F966:
    /* 0000f966   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000f966u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_F968:
    /* 0000f968   4  lea (88,A3),A0 */
    c->pc = RC_ADDR(0x0000f968u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[3] + 0x88u);

L_F96C:
    /* 0000f96c   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x0000f96cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F970:
    /* 0000f970   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000f970u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_F972:
    /* 0000f972   4  move.w D0,(14,A2) */
    c->pc = RC_ADDR(0x0000f972u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F976:
    /* 0000f976   4  move.w (a,A2),D0 */
    c->pc = RC_ADDR(0x0000f976u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F97A:
    /* 0000f97a   4  lea (0,A3,D0.w),A0 */
    c->pc = RC_ADDR(0x0000f97au);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[0] = (c->a[3] + 0x0u + t4);

L_F97E:
    /* 0000f97e   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000f97eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F980:
    /* 0000f980   4  move.w (1aa,A0),D1 */
    c->pc = RC_ADDR(0x0000f980u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x1aau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F984:
    /* 0000f984   2  swap D1 */
    c->pc = RC_ADDR(0x0000f984u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F986:
    /* 0000f986   4  move.l (c,A2),D2 */
    c->pc = RC_ADDR(0x0000f986u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F98A:
    /* 0000f98a   2  clr.l D3 */
    c->pc = RC_ADDR(0x0000f98au);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F98C:
    /* 0000f98c   4  move.w (1b2,A0),D3 */
    c->pc = RC_ADDR(0x0000f98cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x1b2u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F990:
    /* 0000f990   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x0000f990u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F992:
    /* 0000f992   2  lsr.w #5,D0 */
    c->pc = RC_ADDR(0x0000f992u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_F994:
    /* 0000f994   4  eori.w #7,D0 */
    c->pc = RC_ADDR(0x0000f994u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000007u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_F998:
    /* 0000f998   4  andi.w #1f,D3 */
    c->pc = RC_ADDR(0x0000f998u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000001fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_F99C:
    /* 0000f99c   4  addi.w #21,D3 */
    c->pc = RC_ADDR(0x0000f99cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000021u;
    rc_flags_add(c, RC_W, t1, 0x00000021u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_F9A0:
    /* 0000f9a0   4  mulu.w (22,A6),D3 */
    c->pc = RC_ADDR(0x0000f9a0u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 3, t0);

L_F9A4:
    /* 0000f9a4   2  asl.l #3,D3 */
    c->pc = RC_ADDR(0x0000f9a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 3, RC_L), RC_L));

L_F9A6:
    /* 0000f9a6   2  lsr.l D0,D3 */
    c->pc = RC_ADDR(0x0000f9a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 3, RC_L), RC_L));

L_F9A8:
    /* 0000f9a8   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0000f9a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9AA:
    /* 0000f9aa   2  sub.l D2,D0 */
    c->pc = RC_ADDR(0x0000f9aau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F9AC:
    /* 0000f9ac   2  bpl 0000f9b0 */
    c->pc = RC_ADDR(0x0000f9acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_F9B0;

L_F9AE:
    /* 0000f9ae   2  neg.l D0 */
    c->pc = RC_ADDR(0x0000f9aeu);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_F9B0:
    /* 0000f9b0   2  cmp.l D3,D0 */
    c->pc = RC_ADDR(0x0000f9b0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F9B2:
    /* 0000f9b2   2  bgt 0000f9c6 */
    c->pc = RC_ADDR(0x0000f9b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_F9C6;

L_F9B4:
    /* 0000f9b4   2  move.l D1,D2 */
    c->pc = RC_ADDR(0x0000f9b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9B6:
    /* 0000f9b6   6  cmpi.w #4,(a,A2) */
    c->pc = RC_ADDR(0x0000f9b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_F9BC:
    /* 0000f9bc   2  bge 0000f9d0 */
    c->pc = RC_ADDR(0x0000f9bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F9D0;

L_F9BE:
    /* 0000f9be   6  addi.w #2,(a,A2) */
    c->pc = RC_ADDR(0x0000f9beu);
    rc_step(c, m, 20);
    t3 = (c->a[2] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F9C4:
    /* 0000f9c4   2  bra 0000f9d0 */
    c->pc = RC_ADDR(0x0000f9c4u);
    rc_step(c, m, 10);
    goto L_F9D0;

L_F9C6:
    /* 0000f9c6   2  cmp.l D1,D2 */
    c->pc = RC_ADDR(0x0000f9c6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F9C8:
    /* 0000f9c8   2  blt 0000f9ce */
    c->pc = RC_ADDR(0x0000f9c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_F9CE;

L_F9CA:
    /* 0000f9ca   2  sub.l D3,D2 */
    c->pc = RC_ADDR(0x0000f9cau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_F9CC:
    /* 0000f9cc   2  bra 0000f9d0 */
    c->pc = RC_ADDR(0x0000f9ccu);
    rc_step(c, m, 10);
    goto L_F9D0;

L_F9CE:
    /* 0000f9ce   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x0000f9ceu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_F9D0:
    /* 0000f9d0   4  move.l D2,(c,A2) */
    c->pc = RC_ADDR(0x0000f9d0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F9D4:
    /* 0000f9d4   4  move.w (0,A2),D0 */
    c->pc = RC_ADDR(0x0000f9d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9D8:
    /* 0000f9d8   2  moveq #5,D2 */
    c->pc = RC_ADDR(0x0000f9d8u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000005u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_F9DA:
    /* 0000f9da   4  tst.w (2,A2) */
    c->pc = RC_ADDR(0x0000f9dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_F9DE:
    /* 0000f9de   2  beq 0000f9ec */
    c->pc = RC_ADDR(0x0000f9deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F9EC;

L_F9E0:
    /* 0000f9e0   4  subq.w #1,(2,A2) */
    c->pc = RC_ADDR(0x0000f9e0u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F9E4:
    /* 0000f9e4   4  add.w (4,A2),D0 */
    c->pc = RC_ADDR(0x0000f9e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F9E8:
    /* 0000f9e8   4  move.w D0,(0,A2) */
    c->pc = RC_ADDR(0x0000f9e8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9EC:
    /* 0000f9ec   4  cmpi.w #1ac,D0 */
    c->pc = RC_ADDR(0x0000f9ecu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001acu);

L_F9F0:
    /* 0000f9f0   2  ble 0000f9f8 */
    c->pc = RC_ADDR(0x0000f9f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F9F8;

L_F9F2:
    /* 0000f9f2   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000f9f2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F9F4:
    /* 0000f9f4   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x0000f9f4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F9F6:
    /* 0000f9f6   2  bra 0000f9ec */
    c->pc = RC_ADDR(0x0000f9f6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F9EC;

L_F9F8:
    /* 0000f9f8   4  move.w D2,(8,A2) */
    c->pc = RC_ADDR(0x0000f9f8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F9FC:
    /* 0000f9fc   2  moveq #40,D1 */
    c->pc = RC_ADDR(0x0000f9fcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000040u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F9FE:
    /* 0000f9fe   2  lsr.w D2,D1 */
    c->pc = RC_ADDR(0x0000f9feu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_FA00:
    /* 0000fa00   4  move.w D1,(10,A1) */
    c->pc = RC_ADDR(0x0000fa00u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA04:
    /* 0000fa04   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x0000fa04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA08:
    /* 0000fa08   4  move.w (198,A3),D2 */
    c->pc = RC_ADDR(0x0000fa08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x198u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA0C:
    /* 0000fa0c   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x0000fa0cu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_FA0E:
    /* 0000fa0e   2  asr.w #7,D1 */
    c->pc = RC_ADDR(0x0000fa0eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000007u, rc_d_get(c, 1, RC_W), RC_W));

L_FA10:
    /* 0000fa10   4  move.w (4,A6),D2 */
    c->pc = RC_ADDR(0x0000fa10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA14:
    /* 0000fa14   4  subi.w #80,D2 */
    c->pc = RC_ADDR(0x0000fa14u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000080u;
    rc_flags_sub(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FA18:
    /* 0000fa18   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000fa18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FA1A:
    /* 0000fa1a   4  addi.w #1000,D1 */
    c->pc = RC_ADDR(0x0000fa1au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00001000u;
    rc_flags_add(c, RC_W, t1, 0x00001000u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FA1E:
    /* 0000fa1e   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000fa1eu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_FA20:
    /* 0000fa20   2  moveq #c,D1 */
    c->pc = RC_ADDR(0x0000fa20u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000cu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FA22:
    /* 0000fa22   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0000fa22u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_FA24:
    /* 0000fa24   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x0000fa24u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA28:
    /* 0000fa28   4  move.w (190,A3),D0 */
    c->pc = RC_ADDR(0x0000fa28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x190u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA2C:
    /* 0000fa2c   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x0000fa2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA30:
    /* 0000fa30   2  neg.w D1 */
    c->pc = RC_ADDR(0x0000fa30u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FA32:
    /* 0000fa32   4  move.w (194,A3),D2 */
    c->pc = RC_ADDR(0x0000fa32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x194u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA36:
    /* 0000fa36   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x0000fa36u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_FA38:
    /* 0000fa38   2  asr.w #8,D1 */
    c->pc = RC_ADDR(0x0000fa38u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_FA3A:
    /* 0000fa3a   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000fa3au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA3C:
    /* 0000fa3c   4  tst.w (192,A3) */
    c->pc = RC_ADDR(0x0000fa3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x192u));
    rc_set_nzvc(c, t0, RC_W);

L_FA40:
    /* 0000fa40   2  beq 0000fa4e */
    c->pc = RC_ADDR(0x0000fa40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FA4E;

L_FA42:
    /* 0000fa42   4  move.l (c,A2),D1 */
    c->pc = RC_ADDR(0x0000fa42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA46:
    /* 0000fa46   2  swap D1 */
    c->pc = RC_ADDR(0x0000fa46u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FA48:
    /* 0000fa48   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000fa48u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_FA4A:
    /* 0000fa4a   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000fa4au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_FA4C:
    /* 0000fa4c   2  bra 0000fa58 */
    c->pc = RC_ADDR(0x0000fa4cu);
    rc_step(c, m, 10);
    goto L_FA58;

L_FA4E:
    /* 0000fa4e   6  cmpi.w #6,(a,A2) */
    c->pc = RC_ADDR(0x0000fa4eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_FA54:
    /* 0000fa54   2  bne 0000fa58 */
    c->pc = RC_ADDR(0x0000fa54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FA58;

L_FA56:
    /* 0000fa56   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000fa56u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FA58:
    /* 0000fa58   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x0000fa58u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FA5C:
    /* 0000fa5c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000fa5cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA5E:
    /* 0000fa5e   4  mulu.w (0,A6),D0 */
    c->pc = RC_ADDR(0x0000fa5eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_mulu(c, 0, t0);

L_FA62:
    /* 0000fa62   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000fa62u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_FA64:
    /* 0000fa64   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000fa64u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA66:
    /* 0000fa66   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0000fa66u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_FA6A:
    /* 0000fa6a   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000fa6au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_FA6C:
    /* 0000fa6c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000fa6cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA6E:
    /* 0000fa6e   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x0000fa6eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_FA70:
    /* 0000fa70   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x0000fa70u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA74:
    /* 0000fa74   4  move.w (19c,A3),D0 */
    c->pc = RC_ADDR(0x0000fa74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA78:
    /* 0000fa78   4  move.l (c,A2),D1 */
    c->pc = RC_ADDR(0x0000fa78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FA7C:
    /* 0000fa7c   2  swap D1 */
    c->pc = RC_ADDR(0x0000fa7cu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FA7E:
    /* 0000fa7e   2  mulu.w D0,D1 */
    c->pc = RC_ADDR(0x0000fa7eu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 1, t0);

L_FA80:
    /* 0000fa80   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x0000fa80u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_FA82:
    /* 0000fa82   4  move.w (19a,A3),D0 */
    c->pc = RC_ADDR(0x0000fa82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA86:
    /* 0000fa86   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x0000fa86u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FA8A:
    /* 0000fa8a   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0000fa8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA8C:
    /* 0000fa8c   4  move.w (14,A2),D1 */
    c->pc = RC_ADDR(0x0000fa8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA90:
    /* 0000fa90   4  move.w (19e,A3),D2 */
    c->pc = RC_ADDR(0x0000fa90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x19eu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FA94:
    /* 0000fa94   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x0000fa94u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_FA96:
    /* 0000fa96   2  asr.w #8,D1 */
    c->pc = RC_ADDR(0x0000fa96u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_FA98:
    /* 0000fa98   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000fa98u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FA9A:
    /* 0000fa9a   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x0000fa9au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FA9E:
    /* 0000fa9e   2  lsr.w #2,D0 */
    c->pc = RC_ADDR(0x0000fa9eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_FAA0:
    /* 0000faa0   2  asl.w #7,D0 */
    c->pc = RC_ADDR(0x0000faa0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 0, RC_W), RC_W));

L_FAA2:
    /* 0000faa2   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x0000faa2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_FAA6:
    /* 0000faa6   2  move.l A0,D1 */
    c->pc = RC_ADDR(0x0000faa6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAA8:
    /* 0000faa8   2  bne 0000fab0 */
    c->pc = RC_ADDR(0x0000faa8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FAB0;

L_FAAA:
    /* 0000faaa   4  lea (8,A3),A0 */
    c->pc = RC_ADDR(0x0000faaau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[3] + 0x8u);

L_FAAE:
    /* 0000faae   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000faaeu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FAB0:
    /* 0000fab0   2  adda.w D0,A0 */
    c->pc = RC_ADDR(0x0000fab0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_FAB2:
    /* 0000fab2   4  move.w (6,A2),D0 */
    c->pc = RC_ADDR(0x0000fab2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAB6:
    /* 0000fab6   4  eori.w #80,D0 */
    c->pc = RC_ADDR(0x0000fab6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000080u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FABA:
    /* 0000faba   4  move.w D0,(6,A2) */
    c->pc = RC_ADDR(0x0000fabau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FABE:
    /* 0000fabe   4  movea.l (106,A6),A4 */
    c->pc = RC_ADDR(0x0000fabeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[4] = t0;

L_FAC2:
    /* 0000fac2   4  lea (0,A4,D0.w),A4 */
    c->pc = RC_ADDR(0x0000fac2u);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[4] = (c->a[4] + 0x0u + t4);

L_FAC6:
    /* 0000fac6   4  move.w #100,D0 */
    c->pc = RC_ADDR(0x0000fac6u);
    rc_step(c, m, 8);
    t0 = 0x00000100u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FACA:
    /* 0000faca   2  mulu.w D7,D0 */
    c->pc = RC_ADDR(0x0000facau);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 7, RC_W);
    rc_mulu(c, 0, t0);

L_FACC:
    /* 0000facc   2  adda.w D0,A4 */
    c->pc = RC_ADDR(0x0000faccu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[4] += rc_ext(t0, RC_W);

L_FACE:
    /* 0000face   4  move.l A4,(c,A1) */
    c->pc = RC_ADDR(0x0000faceu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FAD2:
    /* 0000fad2   4  tst.w (1a6,A3) */
    c->pc = RC_ADDR(0x0000fad2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_set_nzvc(c, t0, RC_W);

L_FAD6:
    /* 0000fad6   2  bne 0000faf2 */
    c->pc = RC_ADDR(0x0000fad6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FAF2;

L_FAD8:
    /* 0000fad8   4  move.w (8,A2),D3 */
    c->pc = RC_ADDR(0x0000fad8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FADC:
    /* 0000fadc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000fadcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FADE:
    /* 0000fade   2  bset D3,D1 */
    c->pc = RC_ADDR(0x0000fadeu);
    rc_step(c, m, 8);
    t4 = c->d[3] & 31u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_FAE0:
    /* 0000fae0   4  move.w #80,D4 */
    c->pc = RC_ADDR(0x0000fae0u);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAE4:
    /* 0000fae4   2  lsr.w D3,D4 */
    c->pc = RC_ADDR(0x0000fae4u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[3] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_FAE6:
    /* 0000fae6   2  move.b (A0),(A4)+ */
    c->pc = RC_ADDR(0x0000fae6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FAE8:
    /* 0000fae8   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x0000fae8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_FAEA:
    /* 0000faea   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x0000faeau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_FAEC:
    /* 0000faec   2  bne 0000fae6 */
    c->pc = RC_ADDR(0x0000faecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FAE6; }

L_FAEE:
    /* 0000faee   4  bra 0000fbe6 */
    c->pc = RC_ADDR(0x0000faeeu);
    rc_step(c, m, 10);
    goto L_FBE6;

L_FAF2:
    /* 0000faf2   4  tst.w (1a8,A3) */
    c->pc = RC_ADDR(0x0000faf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a8u));
    rc_set_nzvc(c, t0, RC_W);

L_FAF6:
    /* 0000faf6   4  bne 0000fb64 */
    c->pc = RC_ADDR(0x0000faf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FB64;

L_FAFA:
    /* 0000fafa   4  move.w (8,A2),D3 */
    c->pc = RC_ADDR(0x0000fafau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FAFE:
    /* 0000fafe   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000fafeu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FB00:
    /* 0000fb00   2  bset D3,D1 */
    c->pc = RC_ADDR(0x0000fb00u);
    rc_step(c, m, 8);
    t4 = c->d[3] & 31u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_FB02:
    /* 0000fb02   4  move.w (10,A1),D2 */
    c->pc = RC_ADDR(0x0000fb02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x10u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB06:
    /* 0000fb06   2  asl.w #1,D2 */
    c->pc = RC_ADDR(0x0000fb06u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_FB08:
    /* 0000fb08   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x0000fb08u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FB0A:
    /* 0000fb0a   4  move.w (1a6,A3),D4 */
    c->pc = RC_ADDR(0x0000fb0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB0E:
    /* 0000fb0e   4  mulu.w (22,A6),D4 */
    c->pc = RC_ADDR(0x0000fb0eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 4, t0);

L_FB12:
    /* 0000fb12   2  moveq #d,D0 */
    c->pc = RC_ADDR(0x0000fb12u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000du;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FB14:
    /* 0000fb14   2  lsr.l D0,D4 */
    c->pc = RC_ADDR(0x0000fb14u);
    rc_step(c, m, 8);
    rc_d_set(c, 4, RC_L, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 4, RC_L), RC_L));

L_FB16:
    /* 0000fb16   4  add.w (16,A2),D4 */
    c->pc = RC_ADDR(0x0000fb16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x16u));
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_FB1A:
    /* 0000fb1a   4  move.w D4,(16,A2) */
    c->pc = RC_ADDR(0x0000fb1au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB1E:
    /* 0000fb1e   2  moveq #9,D0 */
    c->pc = RC_ADDR(0x0000fb1eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000009u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FB20:
    /* 0000fb20   2  lsr.w D0,D4 */
    c->pc = RC_ADDR(0x0000fb20u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_FB22:
    /* 0000fb22   4  lea (0,A0,D4.w),A5 */
    c->pc = RC_ADDR(0x0000fb22u);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[4], RC_W);
    c->a[5] = (c->a[0] + 0x0u + t4);

L_FB26:
    /* 0000fb26   2  lsr.w D3,D4 */
    c->pc = RC_ADDR(0x0000fb26u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 0, (c->d[3] & 63u), rc_d_get(c, 4, RC_W), RC_W));

L_FB28:
    /* 0000fb28   2  sub.w D4,D2 */
    c->pc = RC_ADDR(0x0000fb28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FB2A:
    /* 0000fb2a   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0000fb2au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB2C:
    /* 0000fb2c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000fb2cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_FB2E:
    /* 0000fb2e   2  move.b (A5),D3 */
    c->pc = RC_ADDR(0x0000fb2eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[5]);
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB30:
    /* 0000fb30   2  ext.w D3 */
    c->pc = RC_ADDR(0x0000fb30u);
    rc_step(c, m, 4);
    rc_ext_w(c, 3);

L_FB32:
    /* 0000fb32   2  add.w D3,D0 */
    c->pc = RC_ADDR(0x0000fb32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FB34:
    /* 0000fb34   2  asr.w #1,D0 */
    c->pc = RC_ADDR(0x0000fb34u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_FB36:
    /* 0000fb36   2  move.b D0,(A4)+ */
    c->pc = RC_ADDR(0x0000fb36u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB38:
    /* 0000fb38   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x0000fb38u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_FB3A:
    /* 0000fb3a   2  adda.w D1,A5 */
    c->pc = RC_ADDR(0x0000fb3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[5] += rc_ext(t0, RC_W);

L_FB3C:
    /* 0000fb3c   4  dbf D2,0000fb2a */
    c->pc = RC_ADDR(0x0000fb3cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_FB2A; }
    }

L_FB40:
    /* 0000fb40   4  suba.w #80,A5 */
    c->pc = RC_ADDR(0x0000fb40u);
    rc_step(c, m, 14);
    t0 = 0x00000080u;
    c->a[5] -= rc_ext(t0, RC_W);

L_FB44:
    /* 0000fb44   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x0000fb44u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_FB46:
    /* 0000fb46   4  bmi 0000fbe6 */
    c->pc = RC_ADDR(0x0000fb46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_FBE6;

L_FB4A:
    /* 0000fb4a   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0000fb4au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB4C:
    /* 0000fb4c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000fb4cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_FB4E:
    /* 0000fb4e   2  move.b (A5),D3 */
    c->pc = RC_ADDR(0x0000fb4eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[5]);
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB50:
    /* 0000fb50   2  ext.w D3 */
    c->pc = RC_ADDR(0x0000fb50u);
    rc_step(c, m, 4);
    rc_ext_w(c, 3);

L_FB52:
    /* 0000fb52   2  add.w D3,D0 */
    c->pc = RC_ADDR(0x0000fb52u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FB54:
    /* 0000fb54   2  asr.w #1,D0 */
    c->pc = RC_ADDR(0x0000fb54u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_FB56:
    /* 0000fb56   2  move.b D0,(A4)+ */
    c->pc = RC_ADDR(0x0000fb56u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FB58:
    /* 0000fb58   2  adda.w D1,A0 */
    c->pc = RC_ADDR(0x0000fb58u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_FB5A:
    /* 0000fb5a   2  adda.w D1,A5 */
    c->pc = RC_ADDR(0x0000fb5au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[5] += rc_ext(t0, RC_W);

L_FB5C:
    /* 0000fb5c   4  dbf D4,0000fb4a */
    c->pc = RC_ADDR(0x0000fb5cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_FB4A; }
    }

L_FB60:
    /* 0000fb60   4  bra 0000fbe6 */
    c->pc = RC_ADDR(0x0000fb60u);
    rc_step(c, m, 10);
    goto L_FBE6;

L_FB64:
    /* 0000fb64   4  move.w (1a6,A3),D0 */
    c->pc = RC_ADDR(0x0000fb64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB68:
    /* 0000fb68   4  mulu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x0000fb68u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 0, t0);

L_FB6C:
    /* 0000fb6c   2  moveq #b,D1 */
    c->pc = RC_ADDR(0x0000fb6cu);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000bu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FB6E:
    /* 0000fb6e   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0000fb6eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_FB70:
    /* 0000fb70   4  muls.w (18,A2),D0 */
    c->pc = RC_ADDR(0x0000fb70u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[2] + 0x18u));
    rc_muls(c, 0, t0);

L_FB74:
    /* 0000fb74   4  add.w (16,A2),D0 */
    c->pc = RC_ADDR(0x0000fb74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x16u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FB78:
    /* 0000fb78   2  bvc 0000fb8a */
    c->pc = RC_ADDR(0x0000fb78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 8)) goto L_FB8A;

L_FB7A:
    /* 0000fb7a   4  cmpi.w #8000,D0 */
    c->pc = RC_ADDR(0x0000fb7au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00008000u);

L_FB7E:
    /* 0000fb7e   2  bne 0000fb84 */
    c->pc = RC_ADDR(0x0000fb7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FB84;

L_FB80:
    /* 0000fb80   4  add.w (18,A2),D0 */
    c->pc = RC_ADDR(0x0000fb80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x18u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FB84:
    /* 0000fb84   4  neg.w (18,A2) */
    c->pc = RC_ADDR(0x0000fb84u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x18u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_FB88:
    /* 0000fb88   2  neg.w D0 */
    c->pc = RC_ADDR(0x0000fb88u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FB8A:
    /* 0000fb8a   4  move.w D0,(16,A2) */
    c->pc = RC_ADDR(0x0000fb8au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB8E:
    /* 0000fb8e   4  move.w (1a8,A3),D1 */
    c->pc = RC_ADDR(0x0000fb8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1a8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB92:
    /* 0000fb92   2  muls.w D1,D0 */
    c->pc = RC_ADDR(0x0000fb92u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_muls(c, 0, t0);

L_FB94:
    /* 0000fb94   2  moveq #11,D1 */
    c->pc = RC_ADDR(0x0000fb94u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000011u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FB96:
    /* 0000fb96   4  add.w (8,A2),D1 */
    c->pc = RC_ADDR(0x0000fb96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FB9A:
    /* 0000fb9a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0000fb9au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_FB9C:
    /* 0000fb9c   4  move.w (10,A1),D2 */
    c->pc = RC_ADDR(0x0000fb9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x10u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBA0:
    /* 0000fba0   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x0000fba0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBA2:
    /* 0000fba2   2  add.w D0,D2 */
    c->pc = RC_ADDR(0x0000fba2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FBA4:
    /* 0000fba4   2  sub.w D0,D3 */
    c->pc = RC_ADDR(0x0000fba4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_FBA6:
    /* 0000fba6   2  move.w D2,D6 */
    c->pc = RC_ADDR(0x0000fba6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBA8:
    /* 0000fba8   2  beq 0000fbc6 */
    c->pc = RC_ADDR(0x0000fba8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FBC6;

L_FBAA:
    /* 0000fbaa   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000fbaau);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FBAC:
    /* 0000fbac   2  clr.w D1 */
    c->pc = RC_ADDR(0x0000fbacu);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FBAE:
    /* 0000fbae   2  moveq #40,D4 */
    c->pc = RC_ADDR(0x0000fbaeu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000040u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_FBB0:
    /* 0000fbb0   2  divu.w D2,D4 */
    c->pc = RC_ADDR(0x0000fbb0u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 2, RC_W);
    rc_divu(c, m, 4, t0);

L_FBB2:
    /* 0000fbb2   2  move.w D4,D5 */
    c->pc = RC_ADDR(0x0000fbb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBB4:
    /* 0000fbb4   2  swap D4 */
    c->pc = RC_ADDR(0x0000fbb4u);
    rc_step(c, m, 4);
    t0 = c->d[4];
    c->d[4] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[4], RC_L);

L_FBB6:
    /* 0000fbb6   4  move.b (0,A0,D0.w),(A4)+ */
    c->pc = RC_ADDR(0x0000fbb6u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FBBA:
    /* 0000fbba   2  sub.w D4,D1 */
    c->pc = RC_ADDR(0x0000fbbau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FBBC:
    /* 0000fbbc   2  bcc 0000fbc0 */
    c->pc = RC_ADDR(0x0000fbbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_FBC0;

L_FBBE:
    /* 0000fbbe   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x0000fbbeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FBC0:
    /* 0000fbc0   2  addx.w D5,D0 */
    c->pc = RC_ADDR(0x0000fbc0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_W, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 0, RC_W, t2);

L_FBC2:
    /* 0000fbc2   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x0000fbc2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_FBC4:
    /* 0000fbc4   2  bne 0000fbb6 */
    c->pc = RC_ADDR(0x0000fbc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FBB6; }

L_FBC6:
    /* 0000fbc6   2  move.w D3,D6 */
    c->pc = RC_ADDR(0x0000fbc6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBC8:
    /* 0000fbc8   2  beq 0000fbe6 */
    c->pc = RC_ADDR(0x0000fbc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FBE6;

L_FBCA:
    /* 0000fbca   2  moveq #40,D0 */
    c->pc = RC_ADDR(0x0000fbcau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000040u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FBCC:
    /* 0000fbcc   2  clr.w D1 */
    c->pc = RC_ADDR(0x0000fbccu);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FBCE:
    /* 0000fbce   2  moveq #40,D4 */
    c->pc = RC_ADDR(0x0000fbceu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000040u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_FBD0:
    /* 0000fbd0   2  divu.w D3,D4 */
    c->pc = RC_ADDR(0x0000fbd0u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 4, t0);

L_FBD2:
    /* 0000fbd2   2  move.w D4,D5 */
    c->pc = RC_ADDR(0x0000fbd2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FBD4:
    /* 0000fbd4   2  swap D4 */
    c->pc = RC_ADDR(0x0000fbd4u);
    rc_step(c, m, 4);
    t0 = c->d[4];
    c->d[4] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[4], RC_L);

L_FBD6:
    /* 0000fbd6   4  move.b (0,A0,D0.w),(A4)+ */
    c->pc = RC_ADDR(0x0000fbd6u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t3 = c->a[4];
    c->a[4] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FBDA:
    /* 0000fbda   2  sub.w D4,D1 */
    c->pc = RC_ADDR(0x0000fbdau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FBDC:
    /* 0000fbdc   2  bcc 0000fbe0 */
    c->pc = RC_ADDR(0x0000fbdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_FBE0;

L_FBDE:
    /* 0000fbde   2  add.w D3,D1 */
    c->pc = RC_ADDR(0x0000fbdeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FBE0:
    /* 0000fbe0   2  addx.w D5,D0 */
    c->pc = RC_ADDR(0x0000fbe0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_W, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 0, RC_W, t2);

L_FBE2:
    /* 0000fbe2   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x0000fbe2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_FBE4:
    /* 0000fbe4   2  bne 0000fbd6 */
    c->pc = RC_ADDR(0x0000fbe4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FBD6; }

L_FBE6:
    /* 0000fbe6   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000fbe6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FBE8:
    /* 0000fbe8   2  rts */
    c->pc = RC_ADDR(0x0000fbe8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
