/* fn_0001a254 - 1616 byte(s), 484 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001a254(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a254u): goto L_1A254;
    case RC_ADDR(0x0001a258u): goto L_1A258;
    case RC_ADDR(0x0001a25cu): goto L_1A25C;
    case RC_ADDR(0x0001a260u): goto L_1A260;
    case RC_ADDR(0x0001a262u): goto L_1A262;
    case RC_ADDR(0x0001a268u): goto L_1A268;
    case RC_ADDR(0x0001a26cu): goto L_1A26C;
    case RC_ADDR(0x0001a270u): goto L_1A270;
    case RC_ADDR(0x0001a274u): goto L_1A274;
    case RC_ADDR(0x0001a278u): goto L_1A278;
    case RC_ADDR(0x0001a27cu): goto L_1A27C;
    case RC_ADDR(0x0001a280u): goto L_1A280;
    case RC_ADDR(0x0001a284u): goto L_1A284;
    case RC_ADDR(0x0001a288u): goto L_1A288;
    case RC_ADDR(0x0001a28cu): goto L_1A28C;
    case RC_ADDR(0x0001a290u): goto L_1A290;
    case RC_ADDR(0x0001a294u): goto L_1A294;
    case RC_ADDR(0x0001a298u): goto L_1A298;
    case RC_ADDR(0x0001a29cu): goto L_1A29C;
    case RC_ADDR(0x0001a2a0u): goto L_1A2A0;
    case RC_ADDR(0x0001a2a4u): goto L_1A2A4;
    case RC_ADDR(0x0001a2a8u): goto L_1A2A8;
    case RC_ADDR(0x0001a2acu): goto L_1A2AC;
    case RC_ADDR(0x0001a2b0u): goto L_1A2B0;
    case RC_ADDR(0x0001a2b2u): goto L_1A2B2;
    case RC_ADDR(0x0001a2b4u): goto L_1A2B4;
    case RC_ADDR(0x0001a2b6u): goto L_1A2B6;
    case RC_ADDR(0x0001a2bau): goto L_1A2BA;
    case RC_ADDR(0x0001a2beu): goto L_1A2BE;
    case RC_ADDR(0x0001a2c0u): goto L_1A2C0;
    case RC_ADDR(0x0001a2c2u): goto L_1A2C2;
    case RC_ADDR(0x0001a2c6u): goto L_1A2C6;
    case RC_ADDR(0x0001a2cau): goto L_1A2CA;
    case RC_ADDR(0x0001a2ceu): goto L_1A2CE;
    case RC_ADDR(0x0001a2d0u): goto L_1A2D0;
    case RC_ADDR(0x0001a2d2u): goto L_1A2D2;
    case RC_ADDR(0x0001a2d6u): goto L_1A2D6;
    case RC_ADDR(0x0001a2d8u): goto L_1A2D8;
    case RC_ADDR(0x0001a2dcu): goto L_1A2DC;
    case RC_ADDR(0x0001a2deu): goto L_1A2DE;
    case RC_ADDR(0x0001a2e2u): goto L_1A2E2;
    case RC_ADDR(0x0001a2e4u): goto L_1A2E4;
    case RC_ADDR(0x0001a2e6u): goto L_1A2E6;
    case RC_ADDR(0x0001a2eau): goto L_1A2EA;
    case RC_ADDR(0x0001a2ecu): goto L_1A2EC;
    case RC_ADDR(0x0001a2f0u): goto L_1A2F0;
    case RC_ADDR(0x0001a2f2u): goto L_1A2F2;
    case RC_ADDR(0x0001a2f4u): goto L_1A2F4;
    case RC_ADDR(0x0001a2f6u): goto L_1A2F6;
    case RC_ADDR(0x0001a2fau): goto L_1A2FA;
    case RC_ADDR(0x0001a2feu): goto L_1A2FE;
    case RC_ADDR(0x0001a300u): goto L_1A300;
    case RC_ADDR(0x0001a304u): goto L_1A304;
    case RC_ADDR(0x0001a308u): goto L_1A308;
    case RC_ADDR(0x0001a30au): goto L_1A30A;
    case RC_ADDR(0x0001a30cu): goto L_1A30C;
    case RC_ADDR(0x0001a310u): goto L_1A310;
    case RC_ADDR(0x0001a312u): goto L_1A312;
    case RC_ADDR(0x0001a316u): goto L_1A316;
    case RC_ADDR(0x0001a318u): goto L_1A318;
    case RC_ADDR(0x0001a31cu): goto L_1A31C;
    case RC_ADDR(0x0001a31eu): goto L_1A31E;
    case RC_ADDR(0x0001a320u): goto L_1A320;
    case RC_ADDR(0x0001a324u): goto L_1A324;
    case RC_ADDR(0x0001a326u): goto L_1A326;
    case RC_ADDR(0x0001a32au): goto L_1A32A;
    case RC_ADDR(0x0001a32cu): goto L_1A32C;
    case RC_ADDR(0x0001a330u): goto L_1A330;
    case RC_ADDR(0x0001a332u): goto L_1A332;
    case RC_ADDR(0x0001a334u): goto L_1A334;
    case RC_ADDR(0x0001a33au): goto L_1A33A;
    case RC_ADDR(0x0001a33eu): goto L_1A33E;
    case RC_ADDR(0x0001a340u): goto L_1A340;
    case RC_ADDR(0x0001a342u): goto L_1A342;
    case RC_ADDR(0x0001a348u): goto L_1A348;
    case RC_ADDR(0x0001a34cu): goto L_1A34C;
    case RC_ADDR(0x0001a34eu): goto L_1A34E;
    case RC_ADDR(0x0001a350u): goto L_1A350;
    case RC_ADDR(0x0001a356u): goto L_1A356;
    case RC_ADDR(0x0001a35au): goto L_1A35A;
    case RC_ADDR(0x0001a35cu): goto L_1A35C;
    case RC_ADDR(0x0001a35eu): goto L_1A35E;
    case RC_ADDR(0x0001a364u): goto L_1A364;
    case RC_ADDR(0x0001a366u): goto L_1A366;
    case RC_ADDR(0x0001a36cu): goto L_1A36C;
    case RC_ADDR(0x0001a370u): goto L_1A370;
    case RC_ADDR(0x0001a374u): goto L_1A374;
    case RC_ADDR(0x0001a378u): goto L_1A378;
    case RC_ADDR(0x0001a37cu): goto L_1A37C;
    case RC_ADDR(0x0001a380u): goto L_1A380;
    case RC_ADDR(0x0001a384u): goto L_1A384;
    case RC_ADDR(0x0001a388u): goto L_1A388;
    case RC_ADDR(0x0001a38cu): goto L_1A38C;
    case RC_ADDR(0x0001a390u): goto L_1A390;
    case RC_ADDR(0x0001a392u): goto L_1A392;
    case RC_ADDR(0x0001a398u): goto L_1A398;
    case RC_ADDR(0x0001a39au): goto L_1A39A;
    case RC_ADDR(0x0001a39cu): goto L_1A39C;
    case RC_ADDR(0x0001a39eu): goto L_1A39E;
    case RC_ADDR(0x0001a3a0u): goto L_1A3A0;
    case RC_ADDR(0x0001a3a4u): goto L_1A3A4;
    case RC_ADDR(0x0001a3a8u): goto L_1A3A8;
    case RC_ADDR(0x0001a3aau): goto L_1A3AA;
    case RC_ADDR(0x0001a3aeu): goto L_1A3AE;
    case RC_ADDR(0x0001a3b2u): goto L_1A3B2;
    case RC_ADDR(0x0001a3b4u): goto L_1A3B4;
    case RC_ADDR(0x0001a3b8u): goto L_1A3B8;
    case RC_ADDR(0x0001a3bau): goto L_1A3BA;
    case RC_ADDR(0x0001a3beu): goto L_1A3BE;
    case RC_ADDR(0x0001a3c2u): goto L_1A3C2;
    case RC_ADDR(0x0001a3c6u): goto L_1A3C6;
    case RC_ADDR(0x0001a3cau): goto L_1A3CA;
    case RC_ADDR(0x0001a3ceu): goto L_1A3CE;
    case RC_ADDR(0x0001a3d2u): goto L_1A3D2;
    case RC_ADDR(0x0001a3d4u): goto L_1A3D4;
    case RC_ADDR(0x0001a3d6u): goto L_1A3D6;
    case RC_ADDR(0x0001a3dcu): goto L_1A3DC;
    case RC_ADDR(0x0001a3deu): goto L_1A3DE;
    case RC_ADDR(0x0001a3e2u): goto L_1A3E2;
    case RC_ADDR(0x0001a3e6u): goto L_1A3E6;
    case RC_ADDR(0x0001a3eau): goto L_1A3EA;
    case RC_ADDR(0x0001a3eeu): goto L_1A3EE;
    case RC_ADDR(0x0001a3f0u): goto L_1A3F0;
    case RC_ADDR(0x0001a3f4u): goto L_1A3F4;
    case RC_ADDR(0x0001a3f6u): goto L_1A3F6;
    case RC_ADDR(0x0001a3f8u): goto L_1A3F8;
    case RC_ADDR(0x0001a3fcu): goto L_1A3FC;
    case RC_ADDR(0x0001a3feu): goto L_1A3FE;
    case RC_ADDR(0x0001a400u): goto L_1A400;
    case RC_ADDR(0x0001a404u): goto L_1A404;
    case RC_ADDR(0x0001a406u): goto L_1A406;
    case RC_ADDR(0x0001a40au): goto L_1A40A;
    case RC_ADDR(0x0001a40eu): goto L_1A40E;
    case RC_ADDR(0x0001a410u): goto L_1A410;
    case RC_ADDR(0x0001a414u): goto L_1A414;
    case RC_ADDR(0x0001a418u): goto L_1A418;
    case RC_ADDR(0x0001a41au): goto L_1A41A;
    case RC_ADDR(0x0001a41eu): goto L_1A41E;
    case RC_ADDR(0x0001a420u): goto L_1A420;
    case RC_ADDR(0x0001a422u): goto L_1A422;
    case RC_ADDR(0x0001a424u): goto L_1A424;
    case RC_ADDR(0x0001a426u): goto L_1A426;
    case RC_ADDR(0x0001a428u): goto L_1A428;
    case RC_ADDR(0x0001a42cu): goto L_1A42C;
    case RC_ADDR(0x0001a432u): goto L_1A432;
    case RC_ADDR(0x0001a436u): goto L_1A436;
    case RC_ADDR(0x0001a43au): goto L_1A43A;
    case RC_ADDR(0x0001a43eu): goto L_1A43E;
    case RC_ADDR(0x0001a440u): goto L_1A440;
    case RC_ADDR(0x0001a446u): goto L_1A446;
    case RC_ADDR(0x0001a448u): goto L_1A448;
    case RC_ADDR(0x0001a44cu): goto L_1A44C;
    case RC_ADDR(0x0001a44eu): goto L_1A44E;
    case RC_ADDR(0x0001a454u): goto L_1A454;
    case RC_ADDR(0x0001a458u): goto L_1A458;
    case RC_ADDR(0x0001a45cu): goto L_1A45C;
    case RC_ADDR(0x0001a45eu): goto L_1A45E;
    case RC_ADDR(0x0001a462u): goto L_1A462;
    case RC_ADDR(0x0001a464u): goto L_1A464;
    case RC_ADDR(0x0001a466u): goto L_1A466;
    case RC_ADDR(0x0001a46au): goto L_1A46A;
    case RC_ADDR(0x0001a470u): goto L_1A470;
    case RC_ADDR(0x0001a474u): goto L_1A474;
    case RC_ADDR(0x0001a476u): goto L_1A476;
    case RC_ADDR(0x0001a478u): goto L_1A478;
    case RC_ADDR(0x0001a47cu): goto L_1A47C;
    case RC_ADDR(0x0001a47eu): goto L_1A47E;
    case RC_ADDR(0x0001a480u): goto L_1A480;
    case RC_ADDR(0x0001a484u): goto L_1A484;
    case RC_ADDR(0x0001a48au): goto L_1A48A;
    case RC_ADDR(0x0001a48eu): goto L_1A48E;
    case RC_ADDR(0x0001a492u): goto L_1A492;
    case RC_ADDR(0x0001a496u): goto L_1A496;
    case RC_ADDR(0x0001a498u): goto L_1A498;
    case RC_ADDR(0x0001a49au): goto L_1A49A;
    case RC_ADDR(0x0001a49eu): goto L_1A49E;
    case RC_ADDR(0x0001a4a0u): goto L_1A4A0;
    case RC_ADDR(0x0001a4a2u): goto L_1A4A2;
    case RC_ADDR(0x0001a4a6u): goto L_1A4A6;
    case RC_ADDR(0x0001a4acu): goto L_1A4AC;
    case RC_ADDR(0x0001a4b0u): goto L_1A4B0;
    case RC_ADDR(0x0001a4b4u): goto L_1A4B4;
    case RC_ADDR(0x0001a4b8u): goto L_1A4B8;
    case RC_ADDR(0x0001a4bau): goto L_1A4BA;
    case RC_ADDR(0x0001a4beu): goto L_1A4BE;
    case RC_ADDR(0x0001a4c0u): goto L_1A4C0;
    case RC_ADDR(0x0001a4c4u): goto L_1A4C4;
    case RC_ADDR(0x0001a4c6u): goto L_1A4C6;
    case RC_ADDR(0x0001a4c8u): goto L_1A4C8;
    case RC_ADDR(0x0001a4ccu): goto L_1A4CC;
    case RC_ADDR(0x0001a4ceu): goto L_1A4CE;
    case RC_ADDR(0x0001a4d2u): goto L_1A4D2;
    case RC_ADDR(0x0001a4d6u): goto L_1A4D6;
    case RC_ADDR(0x0001a4d8u): goto L_1A4D8;
    case RC_ADDR(0x0001a4dcu): goto L_1A4DC;
    case RC_ADDR(0x0001a4deu): goto L_1A4DE;
    case RC_ADDR(0x0001a4e2u): goto L_1A4E2;
    case RC_ADDR(0x0001a4e4u): goto L_1A4E4;
    case RC_ADDR(0x0001a4e6u): goto L_1A4E6;
    case RC_ADDR(0x0001a4eau): goto L_1A4EA;
    case RC_ADDR(0x0001a4ecu): goto L_1A4EC;
    case RC_ADDR(0x0001a4f0u): goto L_1A4F0;
    case RC_ADDR(0x0001a4f4u): goto L_1A4F4;
    case RC_ADDR(0x0001a4f8u): goto L_1A4F8;
    case RC_ADDR(0x0001a4fcu): goto L_1A4FC;
    case RC_ADDR(0x0001a500u): goto L_1A500;
    case RC_ADDR(0x0001a504u): goto L_1A504;
    case RC_ADDR(0x0001a508u): goto L_1A508;
    case RC_ADDR(0x0001a50cu): goto L_1A50C;
    case RC_ADDR(0x0001a510u): goto L_1A510;
    case RC_ADDR(0x0001a514u): goto L_1A514;
    case RC_ADDR(0x0001a516u): goto L_1A516;
    case RC_ADDR(0x0001a518u): goto L_1A518;
    case RC_ADDR(0x0001a51cu): goto L_1A51C;
    case RC_ADDR(0x0001a51eu): goto L_1A51E;
    case RC_ADDR(0x0001a522u): goto L_1A522;
    case RC_ADDR(0x0001a524u): goto L_1A524;
    case RC_ADDR(0x0001a52au): goto L_1A52A;
    case RC_ADDR(0x0001a52eu): goto L_1A52E;
    case RC_ADDR(0x0001a530u): goto L_1A530;
    case RC_ADDR(0x0001a532u): goto L_1A532;
    case RC_ADDR(0x0001a536u): goto L_1A536;
    case RC_ADDR(0x0001a53cu): goto L_1A53C;
    case RC_ADDR(0x0001a53eu): goto L_1A53E;
    case RC_ADDR(0x0001a544u): goto L_1A544;
    case RC_ADDR(0x0001a548u): goto L_1A548;
    case RC_ADDR(0x0001a54au): goto L_1A54A;
    case RC_ADDR(0x0001a54eu): goto L_1A54E;
    case RC_ADDR(0x0001a550u): goto L_1A550;
    case RC_ADDR(0x0001a554u): goto L_1A554;
    case RC_ADDR(0x0001a558u): goto L_1A558;
    case RC_ADDR(0x0001a55au): goto L_1A55A;
    case RC_ADDR(0x0001a55eu): goto L_1A55E;
    case RC_ADDR(0x0001a560u): goto L_1A560;
    case RC_ADDR(0x0001a566u): goto L_1A566;
    case RC_ADDR(0x0001a56cu): goto L_1A56C;
    case RC_ADDR(0x0001a570u): goto L_1A570;
    case RC_ADDR(0x0001a572u): goto L_1A572;
    case RC_ADDR(0x0001a576u): goto L_1A576;
    case RC_ADDR(0x0001a586u): goto L_1A586;
    case RC_ADDR(0x0001a58cu): goto L_1A58C;
    case RC_ADDR(0x0001a58eu): goto L_1A58E;
    case RC_ADDR(0x0001a590u): goto L_1A590;
    case RC_ADDR(0x0001a594u): goto L_1A594;
    case RC_ADDR(0x0001a598u): goto L_1A598;
    case RC_ADDR(0x0001a59eu): goto L_1A59E;
    case RC_ADDR(0x0001a5a0u): goto L_1A5A0;
    case RC_ADDR(0x0001a5a4u): goto L_1A5A4;
    case RC_ADDR(0x0001a5a6u): goto L_1A5A6;
    case RC_ADDR(0x0001a5a8u): goto L_1A5A8;
    case RC_ADDR(0x0001a5acu): goto L_1A5AC;
    case RC_ADDR(0x0001a5aeu): goto L_1A5AE;
    case RC_ADDR(0x0001a5b0u): goto L_1A5B0;
    case RC_ADDR(0x0001a5b4u): goto L_1A5B4;
    case RC_ADDR(0x0001a5b8u): goto L_1A5B8;
    case RC_ADDR(0x0001a5bau): goto L_1A5BA;
    case RC_ADDR(0x0001a5bcu): goto L_1A5BC;
    case RC_ADDR(0x0001a5c0u): goto L_1A5C0;
    case RC_ADDR(0x0001a5c2u): goto L_1A5C2;
    case RC_ADDR(0x0001a5c4u): goto L_1A5C4;
    case RC_ADDR(0x0001a5c6u): goto L_1A5C6;
    case RC_ADDR(0x0001a5cau): goto L_1A5CA;
    case RC_ADDR(0x0001a5ceu): goto L_1A5CE;
    case RC_ADDR(0x0001a5d2u): goto L_1A5D2;
    case RC_ADDR(0x0001a5d4u): goto L_1A5D4;
    case RC_ADDR(0x0001a5d8u): goto L_1A5D8;
    case RC_ADDR(0x0001a5dau): goto L_1A5DA;
    case RC_ADDR(0x0001a5deu): goto L_1A5DE;
    case RC_ADDR(0x0001a5e0u): goto L_1A5E0;
    case RC_ADDR(0x0001a5e2u): goto L_1A5E2;
    case RC_ADDR(0x0001a5e4u): goto L_1A5E4;
    case RC_ADDR(0x0001a5e8u): goto L_1A5E8;
    case RC_ADDR(0x0001a5ecu): goto L_1A5EC;
    case RC_ADDR(0x0001a5f0u): goto L_1A5F0;
    case RC_ADDR(0x0001a5f2u): goto L_1A5F2;
    case RC_ADDR(0x0001a5f6u): goto L_1A5F6;
    case RC_ADDR(0x0001a5f8u): goto L_1A5F8;
    case RC_ADDR(0x0001a5fcu): goto L_1A5FC;
    case RC_ADDR(0x0001a5feu): goto L_1A5FE;
    case RC_ADDR(0x0001a600u): goto L_1A600;
    case RC_ADDR(0x0001a602u): goto L_1A602;
    case RC_ADDR(0x0001a606u): goto L_1A606;
    case RC_ADDR(0x0001a60cu): goto L_1A60C;
    case RC_ADDR(0x0001a612u): goto L_1A612;
    case RC_ADDR(0x0001a618u): goto L_1A618;
    case RC_ADDR(0x0001a61eu): goto L_1A61E;
    case RC_ADDR(0x0001a620u): goto L_1A620;
    case RC_ADDR(0x0001a626u): goto L_1A626;
    case RC_ADDR(0x0001a628u): goto L_1A628;
    case RC_ADDR(0x0001a62cu): goto L_1A62C;
    case RC_ADDR(0x0001a62eu): goto L_1A62E;
    case RC_ADDR(0x0001a630u): goto L_1A630;
    case RC_ADDR(0x0001a632u): goto L_1A632;
    case RC_ADDR(0x0001a634u): goto L_1A634;
    case RC_ADDR(0x0001a636u): goto L_1A636;
    case RC_ADDR(0x0001a63au): goto L_1A63A;
    case RC_ADDR(0x0001a640u): goto L_1A640;
    case RC_ADDR(0x0001a644u): goto L_1A644;
    case RC_ADDR(0x0001a646u): goto L_1A646;
    case RC_ADDR(0x0001a64au): goto L_1A64A;
    case RC_ADDR(0x0001a64eu): goto L_1A64E;
    case RC_ADDR(0x0001a652u): goto L_1A652;
    case RC_ADDR(0x0001a654u): goto L_1A654;
    case RC_ADDR(0x0001a658u): goto L_1A658;
    case RC_ADDR(0x0001a65au): goto L_1A65A;
    case RC_ADDR(0x0001a65eu): goto L_1A65E;
    case RC_ADDR(0x0001a664u): goto L_1A664;
    case RC_ADDR(0x0001a66au): goto L_1A66A;
    case RC_ADDR(0x0001a66cu): goto L_1A66C;
    case RC_ADDR(0x0001a66eu): goto L_1A66E;
    case RC_ADDR(0x0001a670u): goto L_1A670;
    case RC_ADDR(0x0001a674u): goto L_1A674;
    case RC_ADDR(0x0001a67au): goto L_1A67A;
    case RC_ADDR(0x0001a67cu): goto L_1A67C;
    case RC_ADDR(0x0001a67eu): goto L_1A67E;
    case RC_ADDR(0x0001a680u): goto L_1A680;
    case RC_ADDR(0x0001a684u): goto L_1A684;
    case RC_ADDR(0x0001a68au): goto L_1A68A;
    case RC_ADDR(0x0001a68cu): goto L_1A68C;
    case RC_ADDR(0x0001a68eu): goto L_1A68E;
    case RC_ADDR(0x0001a692u): goto L_1A692;
    case RC_ADDR(0x0001a698u): goto L_1A698;
    case RC_ADDR(0x0001a69au): goto L_1A69A;
    case RC_ADDR(0x0001a69cu): goto L_1A69C;
    case RC_ADDR(0x0001a6a2u): goto L_1A6A2;
    case RC_ADDR(0x0001a6a4u): goto L_1A6A4;
    case RC_ADDR(0x0001a6a8u): goto L_1A6A8;
    case RC_ADDR(0x0001a6acu): goto L_1A6AC;
    case RC_ADDR(0x0001a6aeu): goto L_1A6AE;
    case RC_ADDR(0x0001a6b4u): goto L_1A6B4;
    case RC_ADDR(0x0001a6b8u): goto L_1A6B8;
    case RC_ADDR(0x0001a6beu): goto L_1A6BE;
    case RC_ADDR(0x0001a6c0u): goto L_1A6C0;
    case RC_ADDR(0x0001a6c4u): goto L_1A6C4;
    case RC_ADDR(0x0001a6c8u): goto L_1A6C8;
    case RC_ADDR(0x0001a6cau): goto L_1A6CA;
    case RC_ADDR(0x0001a6ccu): goto L_1A6CC;
    case RC_ADDR(0x0001a6d2u): goto L_1A6D2;
    case RC_ADDR(0x0001a6d6u): goto L_1A6D6;
    case RC_ADDR(0x0001a6d8u): goto L_1A6D8;
    case RC_ADDR(0x0001a6dcu): goto L_1A6DC;
    case RC_ADDR(0x0001a6deu): goto L_1A6DE;
    case RC_ADDR(0x0001a6e4u): goto L_1A6E4;
    case RC_ADDR(0x0001a6e8u): goto L_1A6E8;
    case RC_ADDR(0x0001a6eeu): goto L_1A6EE;
    case RC_ADDR(0x0001a6f0u): goto L_1A6F0;
    case RC_ADDR(0x0001a6f4u): goto L_1A6F4;
    case RC_ADDR(0x0001a6f6u): goto L_1A6F6;
    case RC_ADDR(0x0001a6fcu): goto L_1A6FC;
    case RC_ADDR(0x0001a6feu): goto L_1A6FE;
    case RC_ADDR(0x0001a702u): goto L_1A702;
    case RC_ADDR(0x0001a704u): goto L_1A704;
    case RC_ADDR(0x0001a70au): goto L_1A70A;
    case RC_ADDR(0x0001a70cu): goto L_1A70C;
    case RC_ADDR(0x0001a710u): goto L_1A710;
    case RC_ADDR(0x0001a714u): goto L_1A714;
    case RC_ADDR(0x0001a716u): goto L_1A716;
    case RC_ADDR(0x0001a718u): goto L_1A718;
    case RC_ADDR(0x0001a71eu): goto L_1A71E;
    case RC_ADDR(0x0001a722u): goto L_1A722;
    case RC_ADDR(0x0001a724u): goto L_1A724;
    case RC_ADDR(0x0001a728u): goto L_1A728;
    case RC_ADDR(0x0001a72au): goto L_1A72A;
    case RC_ADDR(0x0001a72eu): goto L_1A72E;
    case RC_ADDR(0x0001a734u): goto L_1A734;
    case RC_ADDR(0x0001a736u): goto L_1A736;
    case RC_ADDR(0x0001a73au): goto L_1A73A;
    case RC_ADDR(0x0001a73cu): goto L_1A73C;
    case RC_ADDR(0x0001a740u): goto L_1A740;
    case RC_ADDR(0x0001a742u): goto L_1A742;
    case RC_ADDR(0x0001a746u): goto L_1A746;
    case RC_ADDR(0x0001a74cu): goto L_1A74C;
    case RC_ADDR(0x0001a75eu): goto L_1A75E;
    case RC_ADDR(0x0001a764u): goto L_1A764;
    case RC_ADDR(0x0001a766u): goto L_1A766;
    case RC_ADDR(0x0001a768u): goto L_1A768;
    case RC_ADDR(0x0001a76cu): goto L_1A76C;
    case RC_ADDR(0x0001a770u): goto L_1A770;
    case RC_ADDR(0x0001a776u): goto L_1A776;
    case RC_ADDR(0x0001a778u): goto L_1A778;
    case RC_ADDR(0x0001a77au): goto L_1A77A;
    case RC_ADDR(0x0001a77cu): goto L_1A77C;
    case RC_ADDR(0x0001a77eu): goto L_1A77E;
    case RC_ADDR(0x0001a782u): goto L_1A782;
    case RC_ADDR(0x0001a786u): goto L_1A786;
    case RC_ADDR(0x0001a78au): goto L_1A78A;
    case RC_ADDR(0x0001a78cu): goto L_1A78C;
    case RC_ADDR(0x0001a78eu): goto L_1A78E;
    case RC_ADDR(0x0001a790u): goto L_1A790;
    case RC_ADDR(0x0001a794u): goto L_1A794;
    case RC_ADDR(0x0001a798u): goto L_1A798;
    case RC_ADDR(0x0001a79cu): goto L_1A79C;
    case RC_ADDR(0x0001a79eu): goto L_1A79E;
    case RC_ADDR(0x0001a7a0u): goto L_1A7A0;
    case RC_ADDR(0x0001a7a2u): goto L_1A7A2;
    case RC_ADDR(0x0001a7a6u): goto L_1A7A6;
    case RC_ADDR(0x0001a7aau): goto L_1A7AA;
    case RC_ADDR(0x0001a7aeu): goto L_1A7AE;
    case RC_ADDR(0x0001a7b0u): goto L_1A7B0;
    case RC_ADDR(0x0001a7b2u): goto L_1A7B2;
    case RC_ADDR(0x0001a7b4u): goto L_1A7B4;
    case RC_ADDR(0x0001a7b8u): goto L_1A7B8;
    case RC_ADDR(0x0001a7bcu): goto L_1A7BC;
    case RC_ADDR(0x0001a7c0u): goto L_1A7C0;
    case RC_ADDR(0x0001a7c2u): goto L_1A7C2;
    case RC_ADDR(0x0001a7c6u): goto L_1A7C6;
    case RC_ADDR(0x0001a7c8u): goto L_1A7C8;
    case RC_ADDR(0x0001a7cau): goto L_1A7CA;
    case RC_ADDR(0x0001a7ceu): goto L_1A7CE;
    case RC_ADDR(0x0001a7d0u): goto L_1A7D0;
    case RC_ADDR(0x0001a7d2u): goto L_1A7D2;
    case RC_ADDR(0x0001a7d6u): goto L_1A7D6;
    case RC_ADDR(0x0001a7dau): goto L_1A7DA;
    case RC_ADDR(0x0001a7dcu): goto L_1A7DC;
    case RC_ADDR(0x0001a7deu): goto L_1A7DE;
    case RC_ADDR(0x0001a7e0u): goto L_1A7E0;
    case RC_ADDR(0x0001a7e4u): goto L_1A7E4;
    case RC_ADDR(0x0001a7e6u): goto L_1A7E6;
    case RC_ADDR(0x0001a7eau): goto L_1A7EA;
    case RC_ADDR(0x0001a7ecu): goto L_1A7EC;
    case RC_ADDR(0x0001a7f0u): goto L_1A7F0;
    case RC_ADDR(0x0001a7f2u): goto L_1A7F2;
    case RC_ADDR(0x0001a7f6u): goto L_1A7F6;
    case RC_ADDR(0x0001a7f8u): goto L_1A7F8;
    case RC_ADDR(0x0001a7fcu): goto L_1A7FC;
    case RC_ADDR(0x0001a7feu): goto L_1A7FE;
    case RC_ADDR(0x0001a802u): goto L_1A802;
    case RC_ADDR(0x0001a806u): goto L_1A806;
    case RC_ADDR(0x0001a808u): goto L_1A808;
    case RC_ADDR(0x0001a80cu): goto L_1A80C;
    case RC_ADDR(0x0001a810u): goto L_1A810;
    case RC_ADDR(0x0001a812u): goto L_1A812;
    case RC_ADDR(0x0001a816u): goto L_1A816;
    case RC_ADDR(0x0001a818u): goto L_1A818;
    case RC_ADDR(0x0001a81au): goto L_1A81A;
    case RC_ADDR(0x0001a81cu): goto L_1A81C;
    case RC_ADDR(0x0001a81eu): goto L_1A81E;
    case RC_ADDR(0x0001a822u): goto L_1A822;
    case RC_ADDR(0x0001a826u): goto L_1A826;
    case RC_ADDR(0x0001a828u): goto L_1A828;
    case RC_ADDR(0x0001a82cu): goto L_1A82C;
    case RC_ADDR(0x0001a830u): goto L_1A830;
    case RC_ADDR(0x0001a832u): goto L_1A832;
    case RC_ADDR(0x0001a834u): goto L_1A834;
    case RC_ADDR(0x0001a836u): goto L_1A836;
    case RC_ADDR(0x0001a838u): goto L_1A838;
    case RC_ADDR(0x0001a83cu): goto L_1A83C;
    case RC_ADDR(0x0001a840u): goto L_1A840;
    case RC_ADDR(0x0001a842u): goto L_1A842;
    case RC_ADDR(0x0001a846u): goto L_1A846;
    case RC_ADDR(0x0001a84au): goto L_1A84A;
    case RC_ADDR(0x0001a84cu): goto L_1A84C;
    case RC_ADDR(0x0001a84eu): goto L_1A84E;
    case RC_ADDR(0x0001a852u): goto L_1A852;
    case RC_ADDR(0x0001a854u): goto L_1A854;
    case RC_ADDR(0x0001a858u): goto L_1A858;
    case RC_ADDR(0x0001a85au): goto L_1A85A;
    case RC_ADDR(0x0001a85cu): goto L_1A85C;
    case RC_ADDR(0x0001a860u): goto L_1A860;
    case RC_ADDR(0x0001a864u): goto L_1A864;
    case RC_ADDR(0x0001a866u): goto L_1A866;
    case RC_ADDR(0x0001a868u): goto L_1A868;
    case RC_ADDR(0x0001a86au): goto L_1A86A;
    case RC_ADDR(0x0001a86eu): goto L_1A86E;
    case RC_ADDR(0x0001a872u): goto L_1A872;
    case RC_ADDR(0x0001a876u): goto L_1A876;
    case RC_ADDR(0x0001a87au): goto L_1A87A;
    case RC_ADDR(0x0001a87eu): goto L_1A87E;
    case RC_ADDR(0x0001a882u): goto L_1A882;
    case RC_ADDR(0x0001a884u): goto L_1A884;
    case RC_ADDR(0x0001a88au): goto L_1A88A;
    case RC_ADDR(0x0001a88eu): goto L_1A88E;
    case RC_ADDR(0x0001a890u): goto L_1A890;
    case RC_ADDR(0x0001a896u): goto L_1A896;
    case RC_ADDR(0x0001a89au): goto L_1A89A;
    case RC_ADDR(0x0001a89cu): goto L_1A89C;
    case RC_ADDR(0x0001a8a2u): goto L_1A8A2;
    case RC_ADDR(0x0001a8a6u): goto L_1A8A6;
    case RC_ADDR(0x0001a8a8u): goto L_1A8A8;
    case RC_ADDR(0x0001a8aeu): goto L_1A8AE;
    case RC_ADDR(0x0001a8b4u): goto L_1A8B4;
    case RC_ADDR(0x0001a8bau): goto L_1A8BA;
    case RC_ADDR(0x0001a8beu): goto L_1A8BE;
    case RC_ADDR(0x0001a8c0u): goto L_1A8C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A254:
    /* 0001a254   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001a254u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1A258:
    /* 0001a258   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a258u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A25C:
    /* 0001a25c   4  tst.w (e74,A4) */
    c->pc = RC_ADDR(0x0001a25cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_set_nzvc(c, t0, RC_W);

L_1A260:
    /* 0001a260   2  beq 0001a26c */
    c->pc = RC_ADDR(0x0001a260u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A26C;

L_1A262:
    /* 0001a262   6  cmpi.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0001a262u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A268:
    /* 0001a268   4  bne 0001a3ee */
    c->pc = RC_ADDR(0x0001a268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A3EE;

L_1A26C:
    /* 0001a26c   4  move.w (e7a,A4),D0 */
    c->pc = RC_ADDR(0x0001a26cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A270:
    /* 0001a270   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a270u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A274:
    /* 0001a274   4  muls.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0001a274u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_muls(c, 0, t0);

L_1A278:
    /* 0001a278   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a278u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A27C:
    /* 0001a27c   4  move.w (e7c,A4),D0 */
    c->pc = RC_ADDR(0x0001a27cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A280:
    /* 0001a280   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a280u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A284:
    /* 0001a284   4  muls.w (ffffb24c,A4),D0 */
    c->pc = RC_ADDR(0x0001a284u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_muls(c, 0, t0);

L_1A288:
    /* 0001a288   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a288u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A28C:
    /* 0001a28c   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001a28cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A290:
    /* 0001a290   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a290u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A294:
    /* 0001a294   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001a294u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A298:
    /* 0001a298   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001a298u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A29C:
    /* 0001a29c   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a29cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2A0:
    /* 0001a2a0   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001a2a0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2A4:
    /* 0001a2a4   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001a2a4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A2A8:
    /* 0001a2a8   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0001a2a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A2AC:
    /* 0001a2ac   4  clr.w (26e6,A4) */
    c->pc = RC_ADDR(0x0001a2acu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A2B0:
    /* 0001a2b0   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a2b0u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A2B2:
    /* 0001a2b2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a2b2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2B4:
    /* 0001a2b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a2b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A2B6:
    /* 0001a2b6   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001a2b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1A2BA:
    /* 0001a2ba   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001a2bau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2BE:
    /* 0001a2be   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a2beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2C0:
    /* 0001a2c0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a2c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A2C2:
    /* 0001a2c2   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001a2c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1A2C6:
    /* 0001a2c6   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001a2c6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2CA:
    /* 0001a2ca   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a2cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2CE:
    /* 0001a2ce   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x0001a2ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2D0:
    /* 0001a2d0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a2d0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2D2:
    /* 0001a2d2   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a2d2u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a2d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A2D6:
    /* 0001a2d6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a2d6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A2D8:
    /* 0001a2d8   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0001a2d8u);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A2DC:
    /* 0001a2dc   2  bge 0001a304 */
    c->pc = RC_ADDR(0x0001a2dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A304;

L_1A2DE:
    /* 0001a2de   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a2deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2E2:
    /* 0001a2e2   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x0001a2e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A2E4:
    /* 0001a2e4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a2e4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2E6:
    /* 0001a2e6   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a2e6u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a2eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A2EA:
    /* 0001a2ea   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a2eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A2EC:
    /* 0001a2ec   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0001a2ecu);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A2F0:
    /* 0001a2f0   2  bge 0001a304 */
    c->pc = RC_ADDR(0x0001a2f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A304;

L_1A2F2:
    /* 0001a2f2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a2f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A2F4:
    /* 0001a2f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a2f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A2F6:
    /* 0001a2f6   4  lea (26f8,A4),A0 */
    c->pc = RC_ADDR(0x0001a2f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26f8u);

L_1A2FA:
    /* 0001a2fa   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a2fau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A2FE:
    /* 0001a2fe   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0001a2feu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A300:
    /* 0001a300   4  add.w D1,(26e6,A4) */
    c->pc = RC_ADDR(0x0001a300u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A304:
    /* 0001a304   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a304u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A308:
    /* 0001a308   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x0001a308u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A30A:
    /* 0001a30a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a30au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A30C:
    /* 0001a30c   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a30cu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a310u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A310:
    /* 0001a310   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a310u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A312:
    /* 0001a312   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0001a312u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A316:
    /* 0001a316   2  bge 0001a364 */
    c->pc = RC_ADDR(0x0001a316u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A364;

L_1A318:
    /* 0001a318   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a318u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A31C:
    /* 0001a31c   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x0001a31cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A31E:
    /* 0001a31e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a31eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A320:
    /* 0001a320   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a320u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a324u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A324:
    /* 0001a324   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a324u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A326:
    /* 0001a326   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0001a326u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A32A:
    /* 0001a32a   2  bge 0001a364 */
    c->pc = RC_ADDR(0x0001a32au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A364;

L_1A32C:
    /* 0001a32c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a32cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A330:
    /* 0001a330   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x0001a330u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A332:
    /* 0001a332   2  ble 0001a33a */
    c->pc = RC_ADDR(0x0001a332u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A33A;

L_1A334:
    /* 0001a334   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001a334u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A33A:
    /* 0001a33a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001a33au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A33E:
    /* 0001a33e   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x0001a33eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A340:
    /* 0001a340   2  bge 0001a348 */
    c->pc = RC_ADDR(0x0001a340u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A348;

L_1A342:
    /* 0001a342   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001a342u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A348:
    /* 0001a348   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a348u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A34C:
    /* 0001a34c   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0001a34cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A34E:
    /* 0001a34e   2  ble 0001a356 */
    c->pc = RC_ADDR(0x0001a34eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A356;

L_1A350:
    /* 0001a350   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001a350u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A356:
    /* 0001a356   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001a356u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A35A:
    /* 0001a35a   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x0001a35au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A35C:
    /* 0001a35c   2  bge 0001a364 */
    c->pc = RC_ADDR(0x0001a35cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A364;

L_1A35E:
    /* 0001a35e   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001a35eu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A364:
    /* 0001a364   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a364u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A366:
    /* 0001a366   6  cmp.l #c,D4 */
    c->pc = RC_ADDR(0x0001a366u);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A36C:
    /* 0001a36c   4  blt 0001a2b2 */
    c->pc = RC_ADDR(0x0001a36cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A2B2; }

L_1A370:
    /* 0001a370   4  move.w (e7a,A4),D0 */
    c->pc = RC_ADDR(0x0001a370u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A374:
    /* 0001a374   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a374u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A378:
    /* 0001a378   4  muls.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0001a378u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_muls(c, 0, t0);

L_1A37C:
    /* 0001a37c   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a37cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A380:
    /* 0001a380   4  move.w (e7c,A4),D0 */
    c->pc = RC_ADDR(0x0001a380u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A384:
    /* 0001a384   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a384u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A388:
    /* 0001a388   4  muls.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0001a388u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_muls(c, 0, t0);

L_1A38C:
    /* 0001a38c   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a38cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A390:
    /* 0001a390   2  moveq #4,D5 */
    c->pc = RC_ADDR(0x0001a390u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000004u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1A392:
    /* 0001a392   6  cmpi.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0001a392u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A398:
    /* 0001a398   2  bne 0001a39c */
    c->pc = RC_ADDR(0x0001a398u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A39C;

L_1A39A:
    /* 0001a39a   2  moveq #5,D5 */
    c->pc = RC_ADDR(0x0001a39au);
    rc_step(c, m, 4);
    c->d[5] = 0x00000005u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1A39C:
    /* 0001a39c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a39cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A39E:
    /* 0001a39e   2  move.w D5,-(A7) */
    c->pc = RC_ADDR(0x0001a39eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3A0:
    /* 0001a3a0   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001a3a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3A4:
    /* 0001a3a4   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a3a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A3A8:
    /* 0001a3a8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a3a8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3AA:
    /* 0001a3aa   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001a3aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3AE:
    /* 0001a3ae   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a3aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A3B2:
    /* 0001a3b2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001a3b2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3B4:
    /* 0001a3b4   4  jsr (0001bf98) */
    c->pc = RC_ADDR(0x0001a3b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a3b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf98u);
    return;

L_1A3B8:
    /* 0001a3b8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001a3b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1A3BA:
    /* 0001a3ba   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0001a3bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3BE:
    /* 0001a3be   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a3beu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3C2:
    /* 0001a3c2   4  move.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0001a3c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3C6:
    /* 0001a3c6   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a3c6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3CA:
    /* 0001a3ca   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0001a3cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3CE:
    /* 0001a3ce   4  or.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0001a3ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1A3D2:
    /* 0001a3d2   2  beq 0001a3de */
    c->pc = RC_ADDR(0x0001a3d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A3DE;

L_1A3D4:
    /* 0001a3d4   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a3d4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A3D6:
    /* 0001a3d6   6  cmp.l #6,D4 */
    c->pc = RC_ADDR(0x0001a3d6u);
    rc_step(c, m, 14);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A3DC:
    /* 0001a3dc   2  blt 0001a39e */
    c->pc = RC_ADDR(0x0001a3dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A39E; }

L_1A3DE:
    /* 0001a3de   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001a3deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3E2:
    /* 0001a3e2   4  add.w D0,(e76,A4) */
    c->pc = RC_ADDR(0x0001a3e2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe76u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3E6:
    /* 0001a3e6   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001a3e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A3EA:
    /* 0001a3ea   4  add.w D0,(e78,A4) */
    c->pc = RC_ADDR(0x0001a3eau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A3EE:
    /* 0001a3ee   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001a3eeu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1A3F0:
    /* 0001a3f0   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a3f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A3F4:
    /* 0001a3f4   2  ble 0001a3f8 */
    c->pc = RC_ADDR(0x0001a3f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A3F8;

L_1A3F6:
    /* 0001a3f6   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x0001a3f6u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1A3F8:
    /* 0001a3f8   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001a3f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A3FC:
    /* 0001a3fc   2  bge 0001a400 */
    c->pc = RC_ADDR(0x0001a3fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A400;

L_1A3FE:
    /* 0001a3fe   2  moveq #2,D5 */
    c->pc = RC_ADDR(0x0001a3feu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000002u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1A400:
    /* 0001a400   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a400u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_1A404:
    /* 0001a404   2  ble 0001a40a */
    c->pc = RC_ADDR(0x0001a404u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A40A;

L_1A406:
    /* 0001a406   4  bset #2,D5 */
    c->pc = RC_ADDR(0x0001a406u);
    rc_step(c, m, 12);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 5, RC_L, t2);

L_1A40A:
    /* 0001a40a   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001a40au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_1A40E:
    /* 0001a40e   2  bge 0001a414 */
    c->pc = RC_ADDR(0x0001a40eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A414;

L_1A410:
    /* 0001a410   4  bset #3,D5 */
    c->pc = RC_ADDR(0x0001a410u);
    rc_step(c, m, 12);
    t4 = 0x00000003u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 5, RC_L, t2);

L_1A414:
    /* 0001a414   4  move.w (e74,A4),D0 */
    c->pc = RC_ADDR(0x0001a414u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A418:
    /* 0001a418   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a418u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A41A:
    /* 0001a41a   4  bra 0001a75e */
    c->pc = RC_ADDR(0x0001a41au);
    rc_step(c, m, 10);
    goto L_1A75E;

L_1A41E:
    /* 0001a41e   2  tst.w D5 */
    c->pc = RC_ADDR(0x0001a41eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A420:
    /* 0001a420   2  beq 0001a44e */
    c->pc = RC_ADDR(0x0001a420u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A44E;

L_1A422:
    /* 0001a422   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0001a422u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A424:
    /* 0001a424   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a424u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A426:
    /* 0001a426   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a426u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A428:
    /* 0001a428   4  lea (ffffce26,A4),A0 */
    c->pc = RC_ADDR(0x0001a428u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31dau);

L_1A42C:
    /* 0001a42c   6  move.w (0,A0,D0.w),(e86,A4) */
    c->pc = RC_ADDR(0x0001a42cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A432:
    /* 0001a432   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0001a432u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A436:
    /* 0001a436   4  add.w D0,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a436u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A43A:
    /* 0001a43a   4  tst.w (e7e,A4) */
    c->pc = RC_ADDR(0x0001a43au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_set_nzvc(c, t0, RC_W);

L_1A43E:
    /* 0001a43e   2  beq 0001a448 */
    c->pc = RC_ADDR(0x0001a43eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A448;

L_1A440:
    /* 0001a440   6  cmpi.w #4,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a440u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1A446:
    /* 0001a446   2  bne 0001a44c */
    c->pc = RC_ADDR(0x0001a446u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A44C;

L_1A448:
    /* 0001a448   4  neg.w (e82,A4) */
    c->pc = RC_ADDR(0x0001a448u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe82u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A44C:
    /* 0001a44c   2  bra 0001a454 */
    c->pc = RC_ADDR(0x0001a44cu);
    rc_step(c, m, 10);
    goto L_1A454;

L_1A44E:
    /* 0001a44e   6  move.w #2,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a44eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A454:
    /* 0001a454   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001a454u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A458:
    /* 0001a458   4  beq 0001a5c0 */
    c->pc = RC_ADDR(0x0001a458u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A5C0;

L_1A45C:
    /* 0001a45c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a45cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A45E:
    /* 0001a45e   4  bra 0001a5a8 */
    c->pc = RC_ADDR(0x0001a45eu);
    rc_step(c, m, 10);
    goto L_1A5A8;

L_1A462:
    /* 0001a462   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a462u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A464:
    /* 0001a464   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a464u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A466:
    /* 0001a466   4  lea (2652,A4),A0 */
    c->pc = RC_ADDR(0x0001a466u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2652u);

L_1A46A:
    /* 0001a46a   6  move.w (0,A0,D0.w),(26de,A4) */
    c->pc = RC_ADDR(0x0001a46au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A470:
    /* 0001a470   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x0001a470u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A474:
    /* 0001a474   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a474u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A476:
    /* 0001a476   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a476u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A478:
    /* 0001a478   4  lea (ffffcde2,A4),A0 */
    c->pc = RC_ADDR(0x0001a478u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x321eu);

L_1A47C:
    /* 0001a47c   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001a47cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A47E:
    /* 0001a47e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a47eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1A480:
    /* 0001a480   4  lea (267e,A4),A1 */
    c->pc = RC_ADDR(0x0001a480u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x267eu);

L_1A484:
    /* 0001a484   6  move.w (0,A1,D1.w),(26da,A4) */
    c->pc = RC_ADDR(0x0001a484u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A48A:
    /* 0001a48a   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x0001a48au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A48E:
    /* 0001a48e   4  add.w (0,A1,D1.w),D6 */
    c->pc = RC_ADDR(0x0001a48eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A492:
    /* 0001a492   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x0001a492u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A496:
    /* 0001a496   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a496u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A498:
    /* 0001a498   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a498u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A49A:
    /* 0001a49a   4  lea (ffffcdf0,A4),A0 */
    c->pc = RC_ADDR(0x0001a49au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3210u);

L_1A49E:
    /* 0001a49e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001a49eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4A0:
    /* 0001a4a0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001a4a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1A4A2:
    /* 0001a4a2   4  lea (26aa,A4),A1 */
    c->pc = RC_ADDR(0x0001a4a2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26aau);

L_1A4A6:
    /* 0001a4a6   6  move.w (0,A1,D1.w),(26dc,A4) */
    c->pc = RC_ADDR(0x0001a4a6u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x26dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4AC:
    /* 0001a4ac   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001a4acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4B0:
    /* 0001a4b0   4  add.w (0,A1,D1.w),D7 */
    c->pc = RC_ADDR(0x0001a4b0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1A4B4:
    /* 0001a4b4   4  move.w (26da,A4),D0 */
    c->pc = RC_ADDR(0x0001a4b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4B8:
    /* 0001a4b8   2  subq.w #4,D0 */
    c->pc = RC_ADDR(0x0001a4b8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A4BA:
    /* 0001a4ba   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a4bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4BE:
    /* 0001a4be   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001a4beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A4C0:
    /* 0001a4c0   4  ble 0001a5a6 */
    c->pc = RC_ADDR(0x0001a4c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A5A6;

L_1A4C4:
    /* 0001a4c4   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0001a4c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4C6:
    /* 0001a4c6   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x0001a4c6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A4C8:
    /* 0001a4c8   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a4c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4CC:
    /* 0001a4cc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001a4ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A4CE:
    /* 0001a4ce   4  bge 0001a5a6 */
    c->pc = RC_ADDR(0x0001a4ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A5A6;

L_1A4D2:
    /* 0001a4d2   4  move.w (26dc,A4),D0 */
    c->pc = RC_ADDR(0x0001a4d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4D6:
    /* 0001a4d6   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x0001a4d6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A4D8:
    /* 0001a4d8   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a4d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4DC:
    /* 0001a4dc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001a4dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A4DE:
    /* 0001a4de   4  ble 0001a5a6 */
    c->pc = RC_ADDR(0x0001a4deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A5A6;

L_1A4E2:
    /* 0001a4e2   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0001a4e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4E4:
    /* 0001a4e4   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x0001a4e4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A4E6:
    /* 0001a4e6   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a4e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4EA:
    /* 0001a4ea   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001a4eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A4EC:
    /* 0001a4ec   4  bge 0001a5a6 */
    c->pc = RC_ADDR(0x0001a4ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A5A6;

L_1A4F0:
    /* 0001a4f0   4  move.w (e7a,A4),D0 */
    c->pc = RC_ADDR(0x0001a4f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A4F4:
    /* 0001a4f4   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a4f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A4F8:
    /* 0001a4f8   4  muls.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0001a4f8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_muls(c, 0, t0);

L_1A4FC:
    /* 0001a4fc   4  sub.w D0,(e76,A4) */
    c->pc = RC_ADDR(0x0001a4fcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe76u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A500:
    /* 0001a500   4  move.w (e7c,A4),D0 */
    c->pc = RC_ADDR(0x0001a500u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A504:
    /* 0001a504   4  sub.w (26e2,A4),D0 */
    c->pc = RC_ADDR(0x0001a504u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A508:
    /* 0001a508   4  muls.w (ffffb24c,A4),D0 */
    c->pc = RC_ADDR(0x0001a508u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_muls(c, 0, t0);

L_1A50C:
    /* 0001a50c   4  sub.w D0,(e78,A4) */
    c->pc = RC_ADDR(0x0001a50cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A510:
    /* 0001a510   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x0001a510u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A514:
    /* 0001a514   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a514u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A516:
    /* 0001a516   2  bra 0001a586 */
    c->pc = RC_ADDR(0x0001a516u);
    rc_step(c, m, 10);
    goto L_1A586;

L_1A518:
    /* 0001a518   4  jsr (0001cda2) */
    c->pc = RC_ADDR(0x0001a518u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a51cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cda2u);
    return;

L_1A51C:
    /* 0001a51c   2  bra 0001a598 */
    c->pc = RC_ADDR(0x0001a51cu);
    rc_step(c, m, 10);
    goto L_1A598;

L_1A51E:
    /* 0001a51e   4  jsr (0001cdc6) */
    c->pc = RC_ADDR(0x0001a51eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a522u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cdc6u);
    return;

L_1A522:
    /* 0001a522   2  bra 0001a598 */
    c->pc = RC_ADDR(0x0001a522u);
    rc_step(c, m, 10);
    goto L_1A598;

L_1A524:
    /* 0001a524   6  move.w #3,(e74,A4) */
    c->pc = RC_ADDR(0x0001a524u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A52A:
    /* 0001a52a   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x0001a52au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A52E:
    /* 0001a52e   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x0001a52eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_1A530:
    /* 0001a530   2  subq.w #8,D0 */
    c->pc = RC_ADDR(0x0001a530u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A532:
    /* 0001a532   4  move.w D0,(26e0,A4) */
    c->pc = RC_ADDR(0x0001a532u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A536:
    /* 0001a536   6  move.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001a536u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A53C:
    /* 0001a53c   2  bra 0001a598 */
    c->pc = RC_ADDR(0x0001a53cu);
    rc_step(c, m, 10);
    goto L_1A598;

L_1A53E:
    /* 0001a53e   6  move.w #5,(e74,A4) */
    c->pc = RC_ADDR(0x0001a53eu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A544:
    /* 0001a544   4  move.w (26de,A4),D0 */
    c->pc = RC_ADDR(0x0001a544u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A548:
    /* 0001a548   2  subq.w #4,D0 */
    c->pc = RC_ADDR(0x0001a548u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A54A:
    /* 0001a54a   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001a54au);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1A54E:
    /* 0001a54e   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x0001a54eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A550:
    /* 0001a550   4  move.w D0,(26e0,A4) */
    c->pc = RC_ADDR(0x0001a550u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A554:
    /* 0001a554   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001a554u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A558:
    /* 0001a558   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x0001a558u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A55A:
    /* 0001a55a   4  move.w D0,(26da,A4) */
    c->pc = RC_ADDR(0x0001a55au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A55E:
    /* 0001a55e   2  bra 0001a598 */
    c->pc = RC_ADDR(0x0001a55eu);
    rc_step(c, m, 10);
    goto L_1A598;

L_1A560:
    /* 0001a560   6  move.w #5,(e74,A4) */
    c->pc = RC_ADDR(0x0001a560u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A566:
    /* 0001a566   6  move.w #d,(26e0,A4) */
    c->pc = RC_ADDR(0x0001a566u);
    rc_step(c, m, 16);
    t0 = 0x0000000du;
    rc_wr16(c, m, (c->a[4] + 0x26e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A56C:
    /* 0001a56c   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001a56cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A570:
    /* 0001a570   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001a570u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1A572:
    /* 0001a572   4  move.w D0,(26dc,A4) */
    c->pc = RC_ADDR(0x0001a572u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A576:
    /* 0001a576   2  bra 0001a598 */
    c->pc = RC_ADDR(0x0001a576u);
    rc_step(c, m, 10);
    goto L_1A598;

L_1A586:
    /* 0001a586   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0001a586u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A58C:
    /* 0001a58c   2  bcc 0001a598 */
    c->pc = RC_ADDR(0x0001a58cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1A598;

L_1A58E:
    /* 0001a58e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a58eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A590:
    /* 0001a590   4  move.w (0001a578),D0 */
    c->pc = RC_ADDR(0x0001a590u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001a578u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A594:
    /* 0001a594   4  jmp (0001a596) */
    c->pc = RC_ADDR(0x0001a594u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001a596u) + t4);
    c->pc = t3;
    return;

L_1A598:
    /* 0001a598   6  cmpi.w #2,(26de,A4) */
    c->pc = RC_ADDR(0x0001a598u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26deu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1A59E:
    /* 0001a59e   2  blt 0001a5a4 */
    c->pc = RC_ADDR(0x0001a59eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A5A4;

L_1A5A0:
    /* 0001a5a0   4  clr.w (e7e,A4) */
    c->pc = RC_ADDR(0x0001a5a0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A5A4:
    /* 0001a5a4   2  bra 0001a5c0 */
    c->pc = RC_ADDR(0x0001a5a4u);
    rc_step(c, m, 10);
    goto L_1A5C0;

L_1A5A6:
    /* 0001a5a6   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a5a6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A5A8:
    /* 0001a5a8   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a5a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5AC:
    /* 0001a5ac   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a5acu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A5AE:
    /* 0001a5ae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5B0:
    /* 0001a5b0   4  lea (ffffcddc,A4),A0 */
    c->pc = RC_ADDR(0x0001a5b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3224u);

L_1A5B4:
    /* 0001a5b4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5b4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5B8:
    /* 0001a5b8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a5b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A5BA:
    /* 0001a5ba   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x0001a5bau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A5BC:
    /* 0001a5bc   4  blt 0001a462 */
    c->pc = RC_ADDR(0x0001a5bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A462; }

L_1A5C0:
    /* 0001a5c0   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a5c0u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A5C2:
    /* 0001a5c2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a5c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5C4:
    /* 0001a5c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5C6:
    /* 0001a5c6   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a5c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1A5CA:
    /* 0001a5ca   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a5cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5CE:
    /* 0001a5ce   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5ceu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5D2:
    /* 0001a5d2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a5d2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5D4:
    /* 0001a5d4   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a5d4u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a5d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A5D8:
    /* 0001a5d8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a5d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A5DA:
    /* 0001a5da   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0001a5dau);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A5DE:
    /* 0001a5de   2  bgt 0001a61e */
    c->pc = RC_ADDR(0x0001a5deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1A61E;

L_1A5E0:
    /* 0001a5e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a5e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A5E2:
    /* 0001a5e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a5e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A5E4:
    /* 0001a5e4   4  lea (26ee,A4),A0 */
    c->pc = RC_ADDR(0x0001a5e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eeu);

L_1A5E8:
    /* 0001a5e8   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a5e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5EC:
    /* 0001a5ec   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a5ecu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A5F0:
    /* 0001a5f0   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a5f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A5F2:
    /* 0001a5f2   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0001a5f2u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0001a5f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_1A5F6:
    /* 0001a5f6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001a5f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1A5F8:
    /* 0001a5f8   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0001a5f8u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A5FC:
    /* 0001a5fc   2  bge 0001a61e */
    c->pc = RC_ADDR(0x0001a5fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A61E;

L_1A5FE:
    /* 0001a5fe   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a5feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A600:
    /* 0001a600   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a600u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A602:
    /* 0001a602   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a602u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1A606:
    /* 0001a606   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a606u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A60C:
    /* 0001a60c   6  move.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0001a60cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A612:
    /* 0001a612   6  move.w #4,(e7a,A4) */
    c->pc = RC_ADDR(0x0001a612u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A618:
    /* 0001a618   6  move.w #3,(e7c,A4) */
    c->pc = RC_ADDR(0x0001a618u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xe7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A61E:
    /* 0001a61e   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a61eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A620:
    /* 0001a620   6  cmp.l #2,D4 */
    c->pc = RC_ADDR(0x0001a620u);
    rc_step(c, m, 14);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A626:
    /* 0001a626   2  blt 0001a5c2 */
    c->pc = RC_ADDR(0x0001a626u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A5C2; }

L_1A628:
    /* 0001a628   4  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a628u);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A62C:
    /* 0001a62c   2  tst.w D5 */
    c->pc = RC_ADDR(0x0001a62cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A62E:
    /* 0001a62e   2  beq 0001a640 */
    c->pc = RC_ADDR(0x0001a62eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A640;

L_1A630:
    /* 0001a630   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0001a630u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A632:
    /* 0001a632   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a632u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A634:
    /* 0001a634   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a634u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A636:
    /* 0001a636   4  lea (ffffce26,A4),A0 */
    c->pc = RC_ADDR(0x0001a636u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31dau);

L_1A63A:
    /* 0001a63a   6  move.w (0,A0,D0.w),(e86,A4) */
    c->pc = RC_ADDR(0x0001a63au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A640:
    /* 0001a640   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001a640u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A644:
    /* 0001a644   2  beq 0001a6a4 */
    c->pc = RC_ADDR(0x0001a644u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A6A4;

L_1A646:
    /* 0001a646   4  move.w (e78,A4),-(A7) */
    c->pc = RC_ADDR(0x0001a646u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A64A:
    /* 0001a64a   4  move.w (e76,A4),-(A7) */
    c->pc = RC_ADDR(0x0001a64au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A64E:
    /* 0001a64e   4  jsr (0001be38) */
    c->pc = RC_ADDR(0x0001a64eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a652u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001be38u);
    return;

L_1A652:
    /* 0001a652   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001a652u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1A654:
    /* 0001a654   4  tst.w (1108,A4) */
    c->pc = RC_ADDR(0x0001a654u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_set_nzvc(c, t0, RC_W);

L_1A658:
    /* 0001a658   2  beq 0001a6a4 */
    c->pc = RC_ADDR(0x0001a658u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A6A4;

L_1A65A:
    /* 0001a65a   4  clr.w (e74,A4) */
    c->pc = RC_ADDR(0x0001a65au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A65E:
    /* 0001a65e   6  move.w #3,(e7a,A4) */
    c->pc = RC_ADDR(0x0001a65eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xe7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A664:
    /* 0001a664   6  move.w #2,(e7c,A4) */
    c->pc = RC_ADDR(0x0001a664u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A66A:
    /* 0001a66a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a66au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A66C:
    /* 0001a66c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a66cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A66E:
    /* 0001a66e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a66eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A670:
    /* 0001a670   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a670u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1A674:
    /* 0001a674   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a674u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A67A:
    /* 0001a67a   2  bne 0001a69a */
    c->pc = RC_ADDR(0x0001a67au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A69A;

L_1A67C:
    /* 0001a67c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a67cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A67E:
    /* 0001a67e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a67eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A680:
    /* 0001a680   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001a680u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1A684:
    /* 0001a684   6  move.w (1108,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a684u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A68A:
    /* 0001a68a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a68au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A68C:
    /* 0001a68c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a68cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A68E:
    /* 0001a68e   4  lea (26ee,A4),A0 */
    c->pc = RC_ADDR(0x0001a68eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eeu);

L_1A692:
    /* 0001a692   6  move.w (110a,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001a692u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A698:
    /* 0001a698   2  bra 0001a6a4 */
    c->pc = RC_ADDR(0x0001a698u);
    rc_step(c, m, 10);
    goto L_1A6A4;

L_1A69A:
    /* 0001a69a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a69au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A69C:
    /* 0001a69c   6  cmp.l #2,D4 */
    c->pc = RC_ADDR(0x0001a69cu);
    rc_step(c, m, 14);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A6A2:
    /* 0001a6a2   2  blt 0001a66c */
    c->pc = RC_ADDR(0x0001a6a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A66C; }

L_1A6A4:
    /* 0001a6a4   4  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a6a4u);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A6A8:
    /* 0001a6a8   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001a6a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A6AC:
    /* 0001a6ac   2  beq 0001a6b4 */
    c->pc = RC_ADDR(0x0001a6acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A6B4;

L_1A6AE:
    /* 0001a6ae   6  move.w #4,(e74,A4) */
    c->pc = RC_ADDR(0x0001a6aeu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6B4:
    /* 0001a6b4   4  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a6b4u);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A6B8:
    /* 0001a6b8   6  cmpi.w #3,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a6b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1A6BE:
    /* 0001a6be   2  bge 0001a6d8 */
    c->pc = RC_ADDR(0x0001a6beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A6D8;

L_1A6C0:
    /* 0001a6c0   4  move.w (e88,A4),D0 */
    c->pc = RC_ADDR(0x0001a6c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe88u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6C4:
    /* 0001a6c4   4  subq.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001a6c4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe88u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A6C8:
    /* 0001a6c8   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a6c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A6CA:
    /* 0001a6ca   2  bne 0001a6d6 */
    c->pc = RC_ADDR(0x0001a6cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A6D6;

L_1A6CC:
    /* 0001a6cc   6  move.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001a6ccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6D2:
    /* 0001a6d2   4  addq.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a6d2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A6D6:
    /* 0001a6d6   2  bra 0001a6e4 */
    c->pc = RC_ADDR(0x0001a6d6u);
    rc_step(c, m, 10);
    goto L_1A6E4;

L_1A6D8:
    /* 0001a6d8   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001a6d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A6DC:
    /* 0001a6dc   2  beq 0001a6e4 */
    c->pc = RC_ADDR(0x0001a6dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A6E4;

L_1A6DE:
    /* 0001a6de   6  move.w #4,(e74,A4) */
    c->pc = RC_ADDR(0x0001a6deu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6E4:
    /* 0001a6e4   4  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a6e4u);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A6E8:
    /* 0001a6e8   6  cmpi.w #4,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a6e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1A6EE:
    /* 0001a6ee   2  bge 0001a6f6 */
    c->pc = RC_ADDR(0x0001a6eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A6F6;

L_1A6F0:
    /* 0001a6f0   4  addq.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a6f0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A6F4:
    /* 0001a6f4   2  bra 0001a6fc */
    c->pc = RC_ADDR(0x0001a6f4u);
    rc_step(c, m, 10);
    goto L_1A6FC;

L_1A6F6:
    /* 0001a6f6   6  move.w #6,(e74,A4) */
    c->pc = RC_ADDR(0x0001a6f6u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6FC:
    /* 0001a6fc   2  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a6fcu);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A6FE:
    /* 0001a6fe   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001a6feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1A702:
    /* 0001a702   2  beq 0001a70a */
    c->pc = RC_ADDR(0x0001a702u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A70A;

L_1A704:
    /* 0001a704   6  move.w #7,(e74,A4) */
    c->pc = RC_ADDR(0x0001a704u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A70A:
    /* 0001a70a   2  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a70au);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A70C:
    /* 0001a70c   4  move.w (e88,A4),D0 */
    c->pc = RC_ADDR(0x0001a70cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe88u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A710:
    /* 0001a710   4  subq.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001a710u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe88u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A714:
    /* 0001a714   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a714u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A716:
    /* 0001a716   2  bne 0001a734 */
    c->pc = RC_ADDR(0x0001a716u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A734;

L_1A718:
    /* 0001a718   6  move.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001a718u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A71E:
    /* 0001a71e   4  tst.w (e7e,A4) */
    c->pc = RC_ADDR(0x0001a71eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_set_nzvc(c, t0, RC_W);

L_1A722:
    /* 0001a722   2  beq 0001a72a */
    c->pc = RC_ADDR(0x0001a722u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A72A;

L_1A724:
    /* 0001a724   4  subq.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a724u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A728:
    /* 0001a728   2  bra 0001a734 */
    c->pc = RC_ADDR(0x0001a728u);
    rc_step(c, m, 10);
    goto L_1A734;

L_1A72A:
    /* 0001a72a   4  clr.w (e74,A4) */
    c->pc = RC_ADDR(0x0001a72au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A72E:
    /* 0001a72e   6  move.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a72eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A734:
    /* 0001a734   2  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a734u);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A736:
    /* 0001a736   4  tst.w (e7e,A4) */
    c->pc = RC_ADDR(0x0001a736u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_set_nzvc(c, t0, RC_W);

L_1A73A:
    /* 0001a73a   2  beq 0001a742 */
    c->pc = RC_ADDR(0x0001a73au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A742;

L_1A73C:
    /* 0001a73c   4  subq.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a73cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A740:
    /* 0001a740   2  bra 0001a74c */
    c->pc = RC_ADDR(0x0001a740u);
    rc_step(c, m, 10);
    goto L_1A74C;

L_1A742:
    /* 0001a742   4  clr.w (e74,A4) */
    c->pc = RC_ADDR(0x0001a742u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A746:
    /* 0001a746   6  move.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0001a746u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A74C:
    /* 0001a74c   2  bra 0001a770 */
    c->pc = RC_ADDR(0x0001a74cu);
    rc_step(c, m, 10);
    goto L_1A770;

L_1A75E:
    /* 0001a75e   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0001a75eu);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A764:
    /* 0001a764   2  bcc 0001a770 */
    c->pc = RC_ADDR(0x0001a764u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1A770;

L_1A766:
    /* 0001a766   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a766u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A768:
    /* 0001a768   4  move.w (0001a74e),D0 */
    c->pc = RC_ADDR(0x0001a768u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001a74eu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A76C:
    /* 0001a76c   4  jmp (0001a76e) */
    c->pc = RC_ADDR(0x0001a76cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001a76eu) + t4);
    c->pc = t3;
    return;

L_1A770:
    /* 0001a770   6  move.w #ffff,(26d8,A4) */
    c->pc = RC_ADDR(0x0001a770u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x26d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A776:
    /* 0001a776   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a776u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A778:
    /* 0001a778   2  bra 0001a7ca */
    c->pc = RC_ADDR(0x0001a778u);
    rc_step(c, m, 10);
    goto L_1A7CA;

L_1A77A:
    /* 0001a77a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a77au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A77C:
    /* 0001a77c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a77cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A77E:
    /* 0001a77e   4  lea (1e6a,A4),A0 */
    c->pc = RC_ADDR(0x0001a77eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e6au);

L_1A782:
    /* 0001a782   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a782u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A786:
    /* 0001a786   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a786u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A78A:
    /* 0001a78a   2  blt 0001a7c8 */
    c->pc = RC_ADDR(0x0001a78au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A7C8;

L_1A78C:
    /* 0001a78c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a78cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A78E:
    /* 0001a78e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a78eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A790:
    /* 0001a790   4  lea (1ec6,A4),A0 */
    c->pc = RC_ADDR(0x0001a790u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ec6u);

L_1A794:
    /* 0001a794   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a794u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A798:
    /* 0001a798   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a798u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A79C:
    /* 0001a79c   2  bge 0001a7c8 */
    c->pc = RC_ADDR(0x0001a79cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A7C8;

L_1A79E:
    /* 0001a79e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a79eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A7A0:
    /* 0001a7a0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a7a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A7A2:
    /* 0001a7a2   4  lea (1e98,A4),A0 */
    c->pc = RC_ADDR(0x0001a7a2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e98u);

L_1A7A6:
    /* 0001a7a6   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a7a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7AA:
    /* 0001a7aa   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a7aau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A7AE:
    /* 0001a7ae   2  blt 0001a7c8 */
    c->pc = RC_ADDR(0x0001a7aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A7C8;

L_1A7B0:
    /* 0001a7b0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a7b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A7B2:
    /* 0001a7b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a7b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A7B4:
    /* 0001a7b4   4  lea (1ef4,A4),A0 */
    c->pc = RC_ADDR(0x0001a7b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef4u);

L_1A7B8:
    /* 0001a7b8   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a7b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7BC:
    /* 0001a7bc   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a7bcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A7C0:
    /* 0001a7c0   2  bge 0001a7c8 */
    c->pc = RC_ADDR(0x0001a7c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A7C8;

L_1A7C2:
    /* 0001a7c2   4  move.w D4,(26d8,A4) */
    c->pc = RC_ADDR(0x0001a7c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7C6:
    /* 0001a7c6   2  bra 0001a7e0 */
    c->pc = RC_ADDR(0x0001a7c6u);
    rc_step(c, m, 10);
    goto L_1A7E0;

L_1A7C8:
    /* 0001a7c8   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a7c8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A7CA:
    /* 0001a7ca   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a7cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7CE:
    /* 0001a7ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a7ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A7D0:
    /* 0001a7d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a7d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A7D2:
    /* 0001a7d2   4  lea (ffffcdd0,A4),A0 */
    c->pc = RC_ADDR(0x0001a7d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3230u);

L_1A7D6:
    /* 0001a7d6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a7d6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A7DA:
    /* 0001a7da   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a7dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A7DC:
    /* 0001a7dc   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x0001a7dcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A7DE:
    /* 0001a7de   2  blt 0001a77a */
    c->pc = RC_ADDR(0x0001a7deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A77A; }

L_1A7E0:
    /* 0001a7e0   4  tst.w (2970,A4) */
    c->pc = RC_ADDR(0x0001a7e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2970u));
    rc_set_nzvc(c, t0, RC_W);

L_1A7E4:
    /* 0001a7e4   2  bne 0001a816 */
    c->pc = RC_ADDR(0x0001a7e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A816;

L_1A7E6:
    /* 0001a7e6   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001a7e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1A7EA:
    /* 0001a7ea   2  bne 0001a7f2 */
    c->pc = RC_ADDR(0x0001a7eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A7F2;

L_1A7EC:
    /* 0001a7ec   4  tst.w (26d8,A4) */
    c->pc = RC_ADDR(0x0001a7ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_set_nzvc(c, t0, RC_W);

L_1A7F0:
    /* 0001a7f0   2  blt 0001a7fe */
    c->pc = RC_ADDR(0x0001a7f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A7FE;

L_1A7F2:
    /* 0001a7f2   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001a7f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1A7F6:
    /* 0001a7f6   2  beq 0001a816 */
    c->pc = RC_ADDR(0x0001a7f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A816;

L_1A7F8:
    /* 0001a7f8   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x0001a7f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_1A7FC:
    /* 0001a7fc   2  bne 0001a816 */
    c->pc = RC_ADDR(0x0001a7fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A816;

L_1A7FE:
    /* 0001a7fe   4  addq.w #1,(2970,A4) */
    c->pc = RC_ADDR(0x0001a7feu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2970u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A802:
    /* 0001a802   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0001a802u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_1A806:
    /* 0001a806   2  beq 0001a812 */
    c->pc = RC_ADDR(0x0001a806u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A812;

L_1A808:
    /* 0001a808   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0001a808u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0001a80cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_1A80C:
    /* 0001a80c   4  jsr (0001da46) */
    c->pc = RC_ADDR(0x0001a80cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a810u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001da46u);
    return;

L_1A810:
    /* 0001a810   2  bra 0001a816 */
    c->pc = RC_ADDR(0x0001a810u);
    rc_step(c, m, 10);
    goto L_1A816;

L_1A812:
    /* 0001a812   4  jsr (0001d206) */
    c->pc = RC_ADDR(0x0001a812u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001a816u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d206u);
    return;

L_1A816:
    /* 0001a816   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a816u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A818:
    /* 0001a818   2  bra 0001a854 */
    c->pc = RC_ADDR(0x0001a818u);
    rc_step(c, m, 10);
    goto L_1A854;

L_1A81A:
    /* 0001a81a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a81au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A81C:
    /* 0001a81c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a81cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A81E:
    /* 0001a81e   4  lea (1dca,A4),A0 */
    c->pc = RC_ADDR(0x0001a81eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dcau);

L_1A822:
    /* 0001a822   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0001a822u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A826:
    /* 0001a826   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a826u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A828:
    /* 0001a828   4  divs.w #30,D1 */
    c->pc = RC_ADDR(0x0001a828u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 1, t0);

L_1A82C:
    /* 0001a82c   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001a82cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A830:
    /* 0001a830   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0001a830u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A832:
    /* 0001a832   2  bne 0001a852 */
    c->pc = RC_ADDR(0x0001a832u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A852;

L_1A834:
    /* 0001a834   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a834u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A836:
    /* 0001a836   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a836u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A838:
    /* 0001a838   4  lea (1dea,A4),A0 */
    c->pc = RC_ADDR(0x0001a838u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1deau);

L_1A83C:
    /* 0001a83c   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0001a83cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A840:
    /* 0001a840   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a840u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A842:
    /* 0001a842   4  divs.w #28,D1 */
    c->pc = RC_ADDR(0x0001a842u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 1, t0);

L_1A846:
    /* 0001a846   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001a846u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A84A:
    /* 0001a84a   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0001a84au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A84C:
    /* 0001a84c   2  bne 0001a852 */
    c->pc = RC_ADDR(0x0001a84cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A852;

L_1A84E:
    /* 0001a84e   4  move.w D4,(26d6,A4) */
    c->pc = RC_ADDR(0x0001a84eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A852:
    /* 0001a852   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a852u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A854:
    /* 0001a854   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001a854u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A858:
    /* 0001a858   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001a858u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1A85A:
    /* 0001a85a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a85au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A85C:
    /* 0001a85c   4  lea (ffffcdca,A4),A0 */
    c->pc = RC_ADDR(0x0001a85cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3236u);

L_1A860:
    /* 0001a860   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a860u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A864:
    /* 0001a864   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001a864u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1A866:
    /* 0001a866   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x0001a866u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A868:
    /* 0001a868   2  blt 0001a81a */
    c->pc = RC_ADDR(0x0001a868u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A81A; }

L_1A86A:
    /* 0001a86a   4  move.w (e76,A4),D6 */
    c->pc = RC_ADDR(0x0001a86au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A86E:
    /* 0001a86e   4  sub.w (e6c,A4),D6 */
    c->pc = RC_ADDR(0x0001a86eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A872:
    /* 0001a872   4  move.w (e78,A4),D7 */
    c->pc = RC_ADDR(0x0001a872u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A876:
    /* 0001a876   4  sub.w (e6e,A4),D7 */
    c->pc = RC_ADDR(0x0001a876u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_1A87A:
    /* 0001a87a   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x0001a87au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A87E:
    /* 0001a87e   4  cmp.w #c8,D6 */
    c->pc = RC_ADDR(0x0001a87eu);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A882:
    /* 0001a882   2  ble 0001a88a */
    c->pc = RC_ADDR(0x0001a882u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A88A;

L_1A884:
    /* 0001a884   6  bset #0,(701,A4) */
    c->pc = RC_ADDR(0x0001a884u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1A88A:
    /* 0001a88a   4  cmp.w #78,D6 */
    c->pc = RC_ADDR(0x0001a88au);
    rc_step(c, m, 8);
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A88E:
    /* 0001a88e   2  bge 0001a896 */
    c->pc = RC_ADDR(0x0001a88eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A896;

L_1A890:
    /* 0001a890   6  bset #1,(701,A4) */
    c->pc = RC_ADDR(0x0001a890u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1A896:
    /* 0001a896   4  cmp.w #82,D7 */
    c->pc = RC_ADDR(0x0001a896u);
    rc_step(c, m, 8);
    t0 = 0x00000082u;
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A89A:
    /* 0001a89a   2  ble 0001a8a2 */
    c->pc = RC_ADDR(0x0001a89au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A8A2;

L_1A89C:
    /* 0001a89c   6  bset #2,(701,A4) */
    c->pc = RC_ADDR(0x0001a89cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1A8A2:
    /* 0001a8a2   4  cmp.w #46,D7 */
    c->pc = RC_ADDR(0x0001a8a2u);
    rc_step(c, m, 8);
    t0 = 0x00000046u;
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A8A6:
    /* 0001a8a6   2  bge 0001a8ae */
    c->pc = RC_ADDR(0x0001a8a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1A8AE;

L_1A8A8:
    /* 0001a8a8   6  bset #3,(701,A4) */
    c->pc = RC_ADDR(0x0001a8a8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1A8AE:
    /* 0001a8ae   6  move.w (e7a,A4),(fffffa2e,A4) */
    c->pc = RC_ADDR(0x0001a8aeu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8B4:
    /* 0001a8b4   6  move.w (e7c,A4),(fffffa30,A4) */
    c->pc = RC_ADDR(0x0001a8b4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A8BA:
    /* 0001a8ba   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001a8bau);
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
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1A8BE:
    /* 0001a8be   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a8beu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A8C0:
    /* 0001a8c0   2  rts */
    c->pc = RC_ADDR(0x0001a8c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
