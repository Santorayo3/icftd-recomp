/* fn_0001c45c - 2234 byte(s), 656 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c45c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c45cu): goto L_1C45C;
    case RC_ADDR(0x0001c460u): goto L_1C460;
    case RC_ADDR(0x0001c466u): goto L_1C466;
    case RC_ADDR(0x0001c46cu): goto L_1C46C;
    case RC_ADDR(0x0001c470u): goto L_1C470;
    case RC_ADDR(0x0001c472u): goto L_1C472;
    case RC_ADDR(0x0001c474u): goto L_1C474;
    case RC_ADDR(0x0001c478u): goto L_1C478;
    case RC_ADDR(0x0001c47eu): goto L_1C47E;
    case RC_ADDR(0x0001c482u): goto L_1C482;
    case RC_ADDR(0x0001c484u): goto L_1C484;
    case RC_ADDR(0x0001c486u): goto L_1C486;
    case RC_ADDR(0x0001c48au): goto L_1C48A;
    case RC_ADDR(0x0001c48eu): goto L_1C48E;
    case RC_ADDR(0x0001c492u): goto L_1C492;
    case RC_ADDR(0x0001c494u): goto L_1C494;
    case RC_ADDR(0x0001c498u): goto L_1C498;
    case RC_ADDR(0x0001c49au): goto L_1C49A;
    case RC_ADDR(0x0001c49eu): goto L_1C49E;
    case RC_ADDR(0x0001c4a2u): goto L_1C4A2;
    case RC_ADDR(0x0001c4a6u): goto L_1C4A6;
    case RC_ADDR(0x0001c4aau): goto L_1C4AA;
    case RC_ADDR(0x0001c4aeu): goto L_1C4AE;
    case RC_ADDR(0x0001c4b2u): goto L_1C4B2;
    case RC_ADDR(0x0001c4b6u): goto L_1C4B6;
    case RC_ADDR(0x0001c4b8u): goto L_1C4B8;
    case RC_ADDR(0x0001c4bau): goto L_1C4BA;
    case RC_ADDR(0x0001c4bcu): goto L_1C4BC;
    case RC_ADDR(0x0001c4c0u): goto L_1C4C0;
    case RC_ADDR(0x0001c4c4u): goto L_1C4C4;
    case RC_ADDR(0x0001c4c8u): goto L_1C4C8;
    case RC_ADDR(0x0001c4ccu): goto L_1C4CC;
    case RC_ADDR(0x0001c4ceu): goto L_1C4CE;
    case RC_ADDR(0x0001c4d0u): goto L_1C4D0;
    case RC_ADDR(0x0001c4d2u): goto L_1C4D2;
    case RC_ADDR(0x0001c4d6u): goto L_1C4D6;
    case RC_ADDR(0x0001c4dcu): goto L_1C4DC;
    case RC_ADDR(0x0001c4e0u): goto L_1C4E0;
    case RC_ADDR(0x0001c4e6u): goto L_1C4E6;
    case RC_ADDR(0x0001c4e8u): goto L_1C4E8;
    case RC_ADDR(0x0001c4ecu): goto L_1C4EC;
    case RC_ADDR(0x0001c4eeu): goto L_1C4EE;
    case RC_ADDR(0x0001c4f0u): goto L_1C4F0;
    case RC_ADDR(0x0001c4f4u): goto L_1C4F4;
    case RC_ADDR(0x0001c4f8u): goto L_1C4F8;
    case RC_ADDR(0x0001c4fau): goto L_1C4FA;
    case RC_ADDR(0x0001c4fcu): goto L_1C4FC;
    case RC_ADDR(0x0001c500u): goto L_1C500;
    case RC_ADDR(0x0001c506u): goto L_1C506;
    case RC_ADDR(0x0001c50au): goto L_1C50A;
    case RC_ADDR(0x0001c50cu): goto L_1C50C;
    case RC_ADDR(0x0001c50eu): goto L_1C50E;
    case RC_ADDR(0x0001c512u): goto L_1C512;
    case RC_ADDR(0x0001c516u): goto L_1C516;
    case RC_ADDR(0x0001c518u): goto L_1C518;
    case RC_ADDR(0x0001c51au): goto L_1C51A;
    case RC_ADDR(0x0001c51eu): goto L_1C51E;
    case RC_ADDR(0x0001c524u): goto L_1C524;
    case RC_ADDR(0x0001c528u): goto L_1C528;
    case RC_ADDR(0x0001c52cu): goto L_1C52C;
    case RC_ADDR(0x0001c530u): goto L_1C530;
    case RC_ADDR(0x0001c534u): goto L_1C534;
    case RC_ADDR(0x0001c538u): goto L_1C538;
    case RC_ADDR(0x0001c53cu): goto L_1C53C;
    case RC_ADDR(0x0001c540u): goto L_1C540;
    case RC_ADDR(0x0001c542u): goto L_1C542;
    case RC_ADDR(0x0001c544u): goto L_1C544;
    case RC_ADDR(0x0001c548u): goto L_1C548;
    case RC_ADDR(0x0001c54cu): goto L_1C54C;
    case RC_ADDR(0x0001c54eu): goto L_1C54E;
    case RC_ADDR(0x0001c550u): goto L_1C550;
    case RC_ADDR(0x0001c554u): goto L_1C554;
    case RC_ADDR(0x0001c55au): goto L_1C55A;
    case RC_ADDR(0x0001c55eu): goto L_1C55E;
    case RC_ADDR(0x0001c560u): goto L_1C560;
    case RC_ADDR(0x0001c562u): goto L_1C562;
    case RC_ADDR(0x0001c566u): goto L_1C566;
    case RC_ADDR(0x0001c56au): goto L_1C56A;
    case RC_ADDR(0x0001c56cu): goto L_1C56C;
    case RC_ADDR(0x0001c56eu): goto L_1C56E;
    case RC_ADDR(0x0001c572u): goto L_1C572;
    case RC_ADDR(0x0001c578u): goto L_1C578;
    case RC_ADDR(0x0001c57cu): goto L_1C57C;
    case RC_ADDR(0x0001c57eu): goto L_1C57E;
    case RC_ADDR(0x0001c580u): goto L_1C580;
    case RC_ADDR(0x0001c584u): goto L_1C584;
    case RC_ADDR(0x0001c588u): goto L_1C588;
    case RC_ADDR(0x0001c58au): goto L_1C58A;
    case RC_ADDR(0x0001c58cu): goto L_1C58C;
    case RC_ADDR(0x0001c590u): goto L_1C590;
    case RC_ADDR(0x0001c596u): goto L_1C596;
    case RC_ADDR(0x0001c59au): goto L_1C59A;
    case RC_ADDR(0x0001c59cu): goto L_1C59C;
    case RC_ADDR(0x0001c59eu): goto L_1C59E;
    case RC_ADDR(0x0001c5a2u): goto L_1C5A2;
    case RC_ADDR(0x0001c5a6u): goto L_1C5A6;
    case RC_ADDR(0x0001c5a8u): goto L_1C5A8;
    case RC_ADDR(0x0001c5aau): goto L_1C5AA;
    case RC_ADDR(0x0001c5aeu): goto L_1C5AE;
    case RC_ADDR(0x0001c5b4u): goto L_1C5B4;
    case RC_ADDR(0x0001c5b8u): goto L_1C5B8;
    case RC_ADDR(0x0001c5bau): goto L_1C5BA;
    case RC_ADDR(0x0001c5bcu): goto L_1C5BC;
    case RC_ADDR(0x0001c5c0u): goto L_1C5C0;
    case RC_ADDR(0x0001c5c4u): goto L_1C5C4;
    case RC_ADDR(0x0001c5c6u): goto L_1C5C6;
    case RC_ADDR(0x0001c5c8u): goto L_1C5C8;
    case RC_ADDR(0x0001c5ccu): goto L_1C5CC;
    case RC_ADDR(0x0001c5d2u): goto L_1C5D2;
    case RC_ADDR(0x0001c5d6u): goto L_1C5D6;
    case RC_ADDR(0x0001c5dau): goto L_1C5DA;
    case RC_ADDR(0x0001c5deu): goto L_1C5DE;
    case RC_ADDR(0x0001c5e2u): goto L_1C5E2;
    case RC_ADDR(0x0001c5e4u): goto L_1C5E4;
    case RC_ADDR(0x0001c5e6u): goto L_1C5E6;
    case RC_ADDR(0x0001c5e8u): goto L_1C5E8;
    case RC_ADDR(0x0001c5ecu): goto L_1C5EC;
    case RC_ADDR(0x0001c5f0u): goto L_1C5F0;
    case RC_ADDR(0x0001c5f4u): goto L_1C5F4;
    case RC_ADDR(0x0001c5f8u): goto L_1C5F8;
    case RC_ADDR(0x0001c5fau): goto L_1C5FA;
    case RC_ADDR(0x0001c5fcu): goto L_1C5FC;
    case RC_ADDR(0x0001c5feu): goto L_1C5FE;
    case RC_ADDR(0x0001c602u): goto L_1C602;
    case RC_ADDR(0x0001c608u): goto L_1C608;
    case RC_ADDR(0x0001c60cu): goto L_1C60C;
    case RC_ADDR(0x0001c610u): goto L_1C610;
    case RC_ADDR(0x0001c614u): goto L_1C614;
    case RC_ADDR(0x0001c616u): goto L_1C616;
    case RC_ADDR(0x0001c618u): goto L_1C618;
    case RC_ADDR(0x0001c61au): goto L_1C61A;
    case RC_ADDR(0x0001c61eu): goto L_1C61E;
    case RC_ADDR(0x0001c622u): goto L_1C622;
    case RC_ADDR(0x0001c626u): goto L_1C626;
    case RC_ADDR(0x0001c62au): goto L_1C62A;
    case RC_ADDR(0x0001c62cu): goto L_1C62C;
    case RC_ADDR(0x0001c62eu): goto L_1C62E;
    case RC_ADDR(0x0001c630u): goto L_1C630;
    case RC_ADDR(0x0001c634u): goto L_1C634;
    case RC_ADDR(0x0001c63au): goto L_1C63A;
    case RC_ADDR(0x0001c63eu): goto L_1C63E;
    case RC_ADDR(0x0001c642u): goto L_1C642;
    case RC_ADDR(0x0001c646u): goto L_1C646;
    case RC_ADDR(0x0001c648u): goto L_1C648;
    case RC_ADDR(0x0001c64au): goto L_1C64A;
    case RC_ADDR(0x0001c64cu): goto L_1C64C;
    case RC_ADDR(0x0001c650u): goto L_1C650;
    case RC_ADDR(0x0001c654u): goto L_1C654;
    case RC_ADDR(0x0001c658u): goto L_1C658;
    case RC_ADDR(0x0001c65cu): goto L_1C65C;
    case RC_ADDR(0x0001c65eu): goto L_1C65E;
    case RC_ADDR(0x0001c660u): goto L_1C660;
    case RC_ADDR(0x0001c662u): goto L_1C662;
    case RC_ADDR(0x0001c666u): goto L_1C666;
    case RC_ADDR(0x0001c66cu): goto L_1C66C;
    case RC_ADDR(0x0001c670u): goto L_1C670;
    case RC_ADDR(0x0001c676u): goto L_1C676;
    case RC_ADDR(0x0001c67au): goto L_1C67A;
    case RC_ADDR(0x0001c67eu): goto L_1C67E;
    case RC_ADDR(0x0001c682u): goto L_1C682;
    case RC_ADDR(0x0001c686u): goto L_1C686;
    case RC_ADDR(0x0001c68au): goto L_1C68A;
    case RC_ADDR(0x0001c68eu): goto L_1C68E;
    case RC_ADDR(0x0001c690u): goto L_1C690;
    case RC_ADDR(0x0001c694u): goto L_1C694;
    case RC_ADDR(0x0001c696u): goto L_1C696;
    case RC_ADDR(0x0001c698u): goto L_1C698;
    case RC_ADDR(0x0001c69cu): goto L_1C69C;
    case RC_ADDR(0x0001c6a0u): goto L_1C6A0;
    case RC_ADDR(0x0001c6a2u): goto L_1C6A2;
    case RC_ADDR(0x0001c6a4u): goto L_1C6A4;
    case RC_ADDR(0x0001c6a8u): goto L_1C6A8;
    case RC_ADDR(0x0001c6aeu): goto L_1C6AE;
    case RC_ADDR(0x0001c6b2u): goto L_1C6B2;
    case RC_ADDR(0x0001c6b4u): goto L_1C6B4;
    case RC_ADDR(0x0001c6b6u): goto L_1C6B6;
    case RC_ADDR(0x0001c6bau): goto L_1C6BA;
    case RC_ADDR(0x0001c6beu): goto L_1C6BE;
    case RC_ADDR(0x0001c6c0u): goto L_1C6C0;
    case RC_ADDR(0x0001c6c2u): goto L_1C6C2;
    case RC_ADDR(0x0001c6c6u): goto L_1C6C6;
    case RC_ADDR(0x0001c6ccu): goto L_1C6CC;
    case RC_ADDR(0x0001c6d0u): goto L_1C6D0;
    case RC_ADDR(0x0001c6d2u): goto L_1C6D2;
    case RC_ADDR(0x0001c6d4u): goto L_1C6D4;
    case RC_ADDR(0x0001c6d8u): goto L_1C6D8;
    case RC_ADDR(0x0001c6dcu): goto L_1C6DC;
    case RC_ADDR(0x0001c6deu): goto L_1C6DE;
    case RC_ADDR(0x0001c6e0u): goto L_1C6E0;
    case RC_ADDR(0x0001c6e4u): goto L_1C6E4;
    case RC_ADDR(0x0001c6eau): goto L_1C6EA;
    case RC_ADDR(0x0001c6eeu): goto L_1C6EE;
    case RC_ADDR(0x0001c6f2u): goto L_1C6F2;
    case RC_ADDR(0x0001c6f6u): goto L_1C6F6;
    case RC_ADDR(0x0001c6f8u): goto L_1C6F8;
    case RC_ADDR(0x0001c6fcu): goto L_1C6FC;
    case RC_ADDR(0x0001c6feu): goto L_1C6FE;
    case RC_ADDR(0x0001c702u): goto L_1C702;
    case RC_ADDR(0x0001c704u): goto L_1C704;
    case RC_ADDR(0x0001c706u): goto L_1C706;
    case RC_ADDR(0x0001c70au): goto L_1C70A;
    case RC_ADDR(0x0001c70eu): goto L_1C70E;
    case RC_ADDR(0x0001c710u): goto L_1C710;
    case RC_ADDR(0x0001c712u): goto L_1C712;
    case RC_ADDR(0x0001c716u): goto L_1C716;
    case RC_ADDR(0x0001c71cu): goto L_1C71C;
    case RC_ADDR(0x0001c720u): goto L_1C720;
    case RC_ADDR(0x0001c722u): goto L_1C722;
    case RC_ADDR(0x0001c724u): goto L_1C724;
    case RC_ADDR(0x0001c728u): goto L_1C728;
    case RC_ADDR(0x0001c72cu): goto L_1C72C;
    case RC_ADDR(0x0001c72eu): goto L_1C72E;
    case RC_ADDR(0x0001c730u): goto L_1C730;
    case RC_ADDR(0x0001c734u): goto L_1C734;
    case RC_ADDR(0x0001c73au): goto L_1C73A;
    case RC_ADDR(0x0001c73eu): goto L_1C73E;
    case RC_ADDR(0x0001c740u): goto L_1C740;
    case RC_ADDR(0x0001c742u): goto L_1C742;
    case RC_ADDR(0x0001c746u): goto L_1C746;
    case RC_ADDR(0x0001c74au): goto L_1C74A;
    case RC_ADDR(0x0001c74cu): goto L_1C74C;
    case RC_ADDR(0x0001c74eu): goto L_1C74E;
    case RC_ADDR(0x0001c752u): goto L_1C752;
    case RC_ADDR(0x0001c758u): goto L_1C758;
    case RC_ADDR(0x0001c75cu): goto L_1C75C;
    case RC_ADDR(0x0001c760u): goto L_1C760;
    case RC_ADDR(0x0001c764u): goto L_1C764;
    case RC_ADDR(0x0001c766u): goto L_1C766;
    case RC_ADDR(0x0001c76au): goto L_1C76A;
    case RC_ADDR(0x0001c76eu): goto L_1C76E;
    case RC_ADDR(0x0001c772u): goto L_1C772;
    case RC_ADDR(0x0001c776u): goto L_1C776;
    case RC_ADDR(0x0001c77au): goto L_1C77A;
    case RC_ADDR(0x0001c77eu): goto L_1C77E;
    case RC_ADDR(0x0001c782u): goto L_1C782;
    case RC_ADDR(0x0001c784u): goto L_1C784;
    case RC_ADDR(0x0001c786u): goto L_1C786;
    case RC_ADDR(0x0001c788u): goto L_1C788;
    case RC_ADDR(0x0001c78cu): goto L_1C78C;
    case RC_ADDR(0x0001c790u): goto L_1C790;
    case RC_ADDR(0x0001c794u): goto L_1C794;
    case RC_ADDR(0x0001c798u): goto L_1C798;
    case RC_ADDR(0x0001c79au): goto L_1C79A;
    case RC_ADDR(0x0001c79cu): goto L_1C79C;
    case RC_ADDR(0x0001c79eu): goto L_1C79E;
    case RC_ADDR(0x0001c7a2u): goto L_1C7A2;
    case RC_ADDR(0x0001c7a8u): goto L_1C7A8;
    case RC_ADDR(0x0001c7acu): goto L_1C7AC;
    case RC_ADDR(0x0001c7b2u): goto L_1C7B2;
    case RC_ADDR(0x0001c7b4u): goto L_1C7B4;
    case RC_ADDR(0x0001c7b8u): goto L_1C7B8;
    case RC_ADDR(0x0001c7bau): goto L_1C7BA;
    case RC_ADDR(0x0001c7bcu): goto L_1C7BC;
    case RC_ADDR(0x0001c7c0u): goto L_1C7C0;
    case RC_ADDR(0x0001c7c4u): goto L_1C7C4;
    case RC_ADDR(0x0001c7c6u): goto L_1C7C6;
    case RC_ADDR(0x0001c7c8u): goto L_1C7C8;
    case RC_ADDR(0x0001c7ccu): goto L_1C7CC;
    case RC_ADDR(0x0001c7d2u): goto L_1C7D2;
    case RC_ADDR(0x0001c7d6u): goto L_1C7D6;
    case RC_ADDR(0x0001c7d8u): goto L_1C7D8;
    case RC_ADDR(0x0001c7dau): goto L_1C7DA;
    case RC_ADDR(0x0001c7deu): goto L_1C7DE;
    case RC_ADDR(0x0001c7e2u): goto L_1C7E2;
    case RC_ADDR(0x0001c7e4u): goto L_1C7E4;
    case RC_ADDR(0x0001c7e6u): goto L_1C7E6;
    case RC_ADDR(0x0001c7eau): goto L_1C7EA;
    case RC_ADDR(0x0001c7f0u): goto L_1C7F0;
    case RC_ADDR(0x0001c7f4u): goto L_1C7F4;
    case RC_ADDR(0x0001c7f8u): goto L_1C7F8;
    case RC_ADDR(0x0001c7fcu): goto L_1C7FC;
    case RC_ADDR(0x0001c800u): goto L_1C800;
    case RC_ADDR(0x0001c804u): goto L_1C804;
    case RC_ADDR(0x0001c808u): goto L_1C808;
    case RC_ADDR(0x0001c80cu): goto L_1C80C;
    case RC_ADDR(0x0001c80eu): goto L_1C80E;
    case RC_ADDR(0x0001c810u): goto L_1C810;
    case RC_ADDR(0x0001c814u): goto L_1C814;
    case RC_ADDR(0x0001c818u): goto L_1C818;
    case RC_ADDR(0x0001c81au): goto L_1C81A;
    case RC_ADDR(0x0001c81cu): goto L_1C81C;
    case RC_ADDR(0x0001c820u): goto L_1C820;
    case RC_ADDR(0x0001c826u): goto L_1C826;
    case RC_ADDR(0x0001c82au): goto L_1C82A;
    case RC_ADDR(0x0001c82cu): goto L_1C82C;
    case RC_ADDR(0x0001c82eu): goto L_1C82E;
    case RC_ADDR(0x0001c832u): goto L_1C832;
    case RC_ADDR(0x0001c836u): goto L_1C836;
    case RC_ADDR(0x0001c838u): goto L_1C838;
    case RC_ADDR(0x0001c83au): goto L_1C83A;
    case RC_ADDR(0x0001c83eu): goto L_1C83E;
    case RC_ADDR(0x0001c844u): goto L_1C844;
    case RC_ADDR(0x0001c848u): goto L_1C848;
    case RC_ADDR(0x0001c84au): goto L_1C84A;
    case RC_ADDR(0x0001c84cu): goto L_1C84C;
    case RC_ADDR(0x0001c850u): goto L_1C850;
    case RC_ADDR(0x0001c854u): goto L_1C854;
    case RC_ADDR(0x0001c856u): goto L_1C856;
    case RC_ADDR(0x0001c858u): goto L_1C858;
    case RC_ADDR(0x0001c85cu): goto L_1C85C;
    case RC_ADDR(0x0001c862u): goto L_1C862;
    case RC_ADDR(0x0001c866u): goto L_1C866;
    case RC_ADDR(0x0001c868u): goto L_1C868;
    case RC_ADDR(0x0001c86au): goto L_1C86A;
    case RC_ADDR(0x0001c86eu): goto L_1C86E;
    case RC_ADDR(0x0001c872u): goto L_1C872;
    case RC_ADDR(0x0001c874u): goto L_1C874;
    case RC_ADDR(0x0001c876u): goto L_1C876;
    case RC_ADDR(0x0001c87au): goto L_1C87A;
    case RC_ADDR(0x0001c880u): goto L_1C880;
    case RC_ADDR(0x0001c884u): goto L_1C884;
    case RC_ADDR(0x0001c886u): goto L_1C886;
    case RC_ADDR(0x0001c888u): goto L_1C888;
    case RC_ADDR(0x0001c88cu): goto L_1C88C;
    case RC_ADDR(0x0001c890u): goto L_1C890;
    case RC_ADDR(0x0001c892u): goto L_1C892;
    case RC_ADDR(0x0001c894u): goto L_1C894;
    case RC_ADDR(0x0001c898u): goto L_1C898;
    case RC_ADDR(0x0001c89eu): goto L_1C89E;
    case RC_ADDR(0x0001c8a2u): goto L_1C8A2;
    case RC_ADDR(0x0001c8a6u): goto L_1C8A6;
    case RC_ADDR(0x0001c8aau): goto L_1C8AA;
    case RC_ADDR(0x0001c8aeu): goto L_1C8AE;
    case RC_ADDR(0x0001c8b0u): goto L_1C8B0;
    case RC_ADDR(0x0001c8b2u): goto L_1C8B2;
    case RC_ADDR(0x0001c8b4u): goto L_1C8B4;
    case RC_ADDR(0x0001c8b8u): goto L_1C8B8;
    case RC_ADDR(0x0001c8bcu): goto L_1C8BC;
    case RC_ADDR(0x0001c8c0u): goto L_1C8C0;
    case RC_ADDR(0x0001c8c4u): goto L_1C8C4;
    case RC_ADDR(0x0001c8c6u): goto L_1C8C6;
    case RC_ADDR(0x0001c8c8u): goto L_1C8C8;
    case RC_ADDR(0x0001c8cau): goto L_1C8CA;
    case RC_ADDR(0x0001c8ceu): goto L_1C8CE;
    case RC_ADDR(0x0001c8d4u): goto L_1C8D4;
    case RC_ADDR(0x0001c8d8u): goto L_1C8D8;
    case RC_ADDR(0x0001c8dcu): goto L_1C8DC;
    case RC_ADDR(0x0001c8e0u): goto L_1C8E0;
    case RC_ADDR(0x0001c8e2u): goto L_1C8E2;
    case RC_ADDR(0x0001c8e4u): goto L_1C8E4;
    case RC_ADDR(0x0001c8e6u): goto L_1C8E6;
    case RC_ADDR(0x0001c8eau): goto L_1C8EA;
    case RC_ADDR(0x0001c8eeu): goto L_1C8EE;
    case RC_ADDR(0x0001c8f2u): goto L_1C8F2;
    case RC_ADDR(0x0001c8f6u): goto L_1C8F6;
    case RC_ADDR(0x0001c8f8u): goto L_1C8F8;
    case RC_ADDR(0x0001c8fau): goto L_1C8FA;
    case RC_ADDR(0x0001c8fcu): goto L_1C8FC;
    case RC_ADDR(0x0001c900u): goto L_1C900;
    case RC_ADDR(0x0001c906u): goto L_1C906;
    case RC_ADDR(0x0001c90au): goto L_1C90A;
    case RC_ADDR(0x0001c90eu): goto L_1C90E;
    case RC_ADDR(0x0001c912u): goto L_1C912;
    case RC_ADDR(0x0001c914u): goto L_1C914;
    case RC_ADDR(0x0001c916u): goto L_1C916;
    case RC_ADDR(0x0001c918u): goto L_1C918;
    case RC_ADDR(0x0001c91cu): goto L_1C91C;
    case RC_ADDR(0x0001c920u): goto L_1C920;
    case RC_ADDR(0x0001c924u): goto L_1C924;
    case RC_ADDR(0x0001c928u): goto L_1C928;
    case RC_ADDR(0x0001c92au): goto L_1C92A;
    case RC_ADDR(0x0001c92cu): goto L_1C92C;
    case RC_ADDR(0x0001c92eu): goto L_1C92E;
    case RC_ADDR(0x0001c932u): goto L_1C932;
    case RC_ADDR(0x0001c938u): goto L_1C938;
    case RC_ADDR(0x0001c93cu): goto L_1C93C;
    case RC_ADDR(0x0001c942u): goto L_1C942;
    case RC_ADDR(0x0001c946u): goto L_1C946;
    case RC_ADDR(0x0001c94au): goto L_1C94A;
    case RC_ADDR(0x0001c94eu): goto L_1C94E;
    case RC_ADDR(0x0001c952u): goto L_1C952;
    case RC_ADDR(0x0001c956u): goto L_1C956;
    case RC_ADDR(0x0001c95au): goto L_1C95A;
    case RC_ADDR(0x0001c95cu): goto L_1C95C;
    case RC_ADDR(0x0001c960u): goto L_1C960;
    case RC_ADDR(0x0001c962u): goto L_1C962;
    case RC_ADDR(0x0001c964u): goto L_1C964;
    case RC_ADDR(0x0001c968u): goto L_1C968;
    case RC_ADDR(0x0001c96cu): goto L_1C96C;
    case RC_ADDR(0x0001c96eu): goto L_1C96E;
    case RC_ADDR(0x0001c970u): goto L_1C970;
    case RC_ADDR(0x0001c974u): goto L_1C974;
    case RC_ADDR(0x0001c97au): goto L_1C97A;
    case RC_ADDR(0x0001c97eu): goto L_1C97E;
    case RC_ADDR(0x0001c980u): goto L_1C980;
    case RC_ADDR(0x0001c982u): goto L_1C982;
    case RC_ADDR(0x0001c986u): goto L_1C986;
    case RC_ADDR(0x0001c98au): goto L_1C98A;
    case RC_ADDR(0x0001c98cu): goto L_1C98C;
    case RC_ADDR(0x0001c98eu): goto L_1C98E;
    case RC_ADDR(0x0001c992u): goto L_1C992;
    case RC_ADDR(0x0001c998u): goto L_1C998;
    case RC_ADDR(0x0001c99cu): goto L_1C99C;
    case RC_ADDR(0x0001c99eu): goto L_1C99E;
    case RC_ADDR(0x0001c9a0u): goto L_1C9A0;
    case RC_ADDR(0x0001c9a4u): goto L_1C9A4;
    case RC_ADDR(0x0001c9a8u): goto L_1C9A8;
    case RC_ADDR(0x0001c9aau): goto L_1C9AA;
    case RC_ADDR(0x0001c9acu): goto L_1C9AC;
    case RC_ADDR(0x0001c9b0u): goto L_1C9B0;
    case RC_ADDR(0x0001c9b6u): goto L_1C9B6;
    case RC_ADDR(0x0001c9bau): goto L_1C9BA;
    case RC_ADDR(0x0001c9beu): goto L_1C9BE;
    case RC_ADDR(0x0001c9c2u): goto L_1C9C2;
    case RC_ADDR(0x0001c9c4u): goto L_1C9C4;
    case RC_ADDR(0x0001c9c8u): goto L_1C9C8;
    case RC_ADDR(0x0001c9cau): goto L_1C9CA;
    case RC_ADDR(0x0001c9ceu): goto L_1C9CE;
    case RC_ADDR(0x0001c9d0u): goto L_1C9D0;
    case RC_ADDR(0x0001c9d2u): goto L_1C9D2;
    case RC_ADDR(0x0001c9d6u): goto L_1C9D6;
    case RC_ADDR(0x0001c9dau): goto L_1C9DA;
    case RC_ADDR(0x0001c9dcu): goto L_1C9DC;
    case RC_ADDR(0x0001c9deu): goto L_1C9DE;
    case RC_ADDR(0x0001c9e2u): goto L_1C9E2;
    case RC_ADDR(0x0001c9e8u): goto L_1C9E8;
    case RC_ADDR(0x0001c9ecu): goto L_1C9EC;
    case RC_ADDR(0x0001c9eeu): goto L_1C9EE;
    case RC_ADDR(0x0001c9f0u): goto L_1C9F0;
    case RC_ADDR(0x0001c9f4u): goto L_1C9F4;
    case RC_ADDR(0x0001c9f8u): goto L_1C9F8;
    case RC_ADDR(0x0001c9fau): goto L_1C9FA;
    case RC_ADDR(0x0001c9fcu): goto L_1C9FC;
    case RC_ADDR(0x0001ca00u): goto L_1CA00;
    case RC_ADDR(0x0001ca06u): goto L_1CA06;
    case RC_ADDR(0x0001ca0au): goto L_1CA0A;
    case RC_ADDR(0x0001ca0cu): goto L_1CA0C;
    case RC_ADDR(0x0001ca0eu): goto L_1CA0E;
    case RC_ADDR(0x0001ca12u): goto L_1CA12;
    case RC_ADDR(0x0001ca16u): goto L_1CA16;
    case RC_ADDR(0x0001ca18u): goto L_1CA18;
    case RC_ADDR(0x0001ca1au): goto L_1CA1A;
    case RC_ADDR(0x0001ca1eu): goto L_1CA1E;
    case RC_ADDR(0x0001ca24u): goto L_1CA24;
    case RC_ADDR(0x0001ca28u): goto L_1CA28;
    case RC_ADDR(0x0001ca2cu): goto L_1CA2C;
    case RC_ADDR(0x0001ca30u): goto L_1CA30;
    case RC_ADDR(0x0001ca32u): goto L_1CA32;
    case RC_ADDR(0x0001ca36u): goto L_1CA36;
    case RC_ADDR(0x0001ca3au): goto L_1CA3A;
    case RC_ADDR(0x0001ca3eu): goto L_1CA3E;
    case RC_ADDR(0x0001ca42u): goto L_1CA42;
    case RC_ADDR(0x0001ca46u): goto L_1CA46;
    case RC_ADDR(0x0001ca4au): goto L_1CA4A;
    case RC_ADDR(0x0001ca4eu): goto L_1CA4E;
    case RC_ADDR(0x0001ca50u): goto L_1CA50;
    case RC_ADDR(0x0001ca52u): goto L_1CA52;
    case RC_ADDR(0x0001ca54u): goto L_1CA54;
    case RC_ADDR(0x0001ca58u): goto L_1CA58;
    case RC_ADDR(0x0001ca5cu): goto L_1CA5C;
    case RC_ADDR(0x0001ca60u): goto L_1CA60;
    case RC_ADDR(0x0001ca64u): goto L_1CA64;
    case RC_ADDR(0x0001ca66u): goto L_1CA66;
    case RC_ADDR(0x0001ca68u): goto L_1CA68;
    case RC_ADDR(0x0001ca6au): goto L_1CA6A;
    case RC_ADDR(0x0001ca6eu): goto L_1CA6E;
    case RC_ADDR(0x0001ca74u): goto L_1CA74;
    case RC_ADDR(0x0001ca78u): goto L_1CA78;
    case RC_ADDR(0x0001ca7eu): goto L_1CA7E;
    case RC_ADDR(0x0001ca80u): goto L_1CA80;
    case RC_ADDR(0x0001ca84u): goto L_1CA84;
    case RC_ADDR(0x0001ca86u): goto L_1CA86;
    case RC_ADDR(0x0001ca88u): goto L_1CA88;
    case RC_ADDR(0x0001ca8cu): goto L_1CA8C;
    case RC_ADDR(0x0001ca90u): goto L_1CA90;
    case RC_ADDR(0x0001ca92u): goto L_1CA92;
    case RC_ADDR(0x0001ca94u): goto L_1CA94;
    case RC_ADDR(0x0001ca98u): goto L_1CA98;
    case RC_ADDR(0x0001ca9eu): goto L_1CA9E;
    case RC_ADDR(0x0001caa2u): goto L_1CAA2;
    case RC_ADDR(0x0001caa4u): goto L_1CAA4;
    case RC_ADDR(0x0001caa6u): goto L_1CAA6;
    case RC_ADDR(0x0001caaau): goto L_1CAAA;
    case RC_ADDR(0x0001caaeu): goto L_1CAAE;
    case RC_ADDR(0x0001cab0u): goto L_1CAB0;
    case RC_ADDR(0x0001cab2u): goto L_1CAB2;
    case RC_ADDR(0x0001cab6u): goto L_1CAB6;
    case RC_ADDR(0x0001cabcu): goto L_1CABC;
    case RC_ADDR(0x0001cac0u): goto L_1CAC0;
    case RC_ADDR(0x0001cac4u): goto L_1CAC4;
    case RC_ADDR(0x0001cac8u): goto L_1CAC8;
    case RC_ADDR(0x0001caccu): goto L_1CACC;
    case RC_ADDR(0x0001cad0u): goto L_1CAD0;
    case RC_ADDR(0x0001cad4u): goto L_1CAD4;
    case RC_ADDR(0x0001cad8u): goto L_1CAD8;
    case RC_ADDR(0x0001cadau): goto L_1CADA;
    case RC_ADDR(0x0001cadcu): goto L_1CADC;
    case RC_ADDR(0x0001cae0u): goto L_1CAE0;
    case RC_ADDR(0x0001cae4u): goto L_1CAE4;
    case RC_ADDR(0x0001cae6u): goto L_1CAE6;
    case RC_ADDR(0x0001cae8u): goto L_1CAE8;
    case RC_ADDR(0x0001caecu): goto L_1CAEC;
    case RC_ADDR(0x0001caf2u): goto L_1CAF2;
    case RC_ADDR(0x0001caf6u): goto L_1CAF6;
    case RC_ADDR(0x0001caf8u): goto L_1CAF8;
    case RC_ADDR(0x0001cafau): goto L_1CAFA;
    case RC_ADDR(0x0001cafeu): goto L_1CAFE;
    case RC_ADDR(0x0001cb02u): goto L_1CB02;
    case RC_ADDR(0x0001cb04u): goto L_1CB04;
    case RC_ADDR(0x0001cb06u): goto L_1CB06;
    case RC_ADDR(0x0001cb0au): goto L_1CB0A;
    case RC_ADDR(0x0001cb10u): goto L_1CB10;
    case RC_ADDR(0x0001cb14u): goto L_1CB14;
    case RC_ADDR(0x0001cb16u): goto L_1CB16;
    case RC_ADDR(0x0001cb18u): goto L_1CB18;
    case RC_ADDR(0x0001cb1cu): goto L_1CB1C;
    case RC_ADDR(0x0001cb20u): goto L_1CB20;
    case RC_ADDR(0x0001cb22u): goto L_1CB22;
    case RC_ADDR(0x0001cb24u): goto L_1CB24;
    case RC_ADDR(0x0001cb28u): goto L_1CB28;
    case RC_ADDR(0x0001cb2eu): goto L_1CB2E;
    case RC_ADDR(0x0001cb32u): goto L_1CB32;
    case RC_ADDR(0x0001cb34u): goto L_1CB34;
    case RC_ADDR(0x0001cb36u): goto L_1CB36;
    case RC_ADDR(0x0001cb3au): goto L_1CB3A;
    case RC_ADDR(0x0001cb3eu): goto L_1CB3E;
    case RC_ADDR(0x0001cb40u): goto L_1CB40;
    case RC_ADDR(0x0001cb42u): goto L_1CB42;
    case RC_ADDR(0x0001cb46u): goto L_1CB46;
    case RC_ADDR(0x0001cb4cu): goto L_1CB4C;
    case RC_ADDR(0x0001cb50u): goto L_1CB50;
    case RC_ADDR(0x0001cb52u): goto L_1CB52;
    case RC_ADDR(0x0001cb54u): goto L_1CB54;
    case RC_ADDR(0x0001cb58u): goto L_1CB58;
    case RC_ADDR(0x0001cb5cu): goto L_1CB5C;
    case RC_ADDR(0x0001cb5eu): goto L_1CB5E;
    case RC_ADDR(0x0001cb60u): goto L_1CB60;
    case RC_ADDR(0x0001cb64u): goto L_1CB64;
    case RC_ADDR(0x0001cb6au): goto L_1CB6A;
    case RC_ADDR(0x0001cb6eu): goto L_1CB6E;
    case RC_ADDR(0x0001cb72u): goto L_1CB72;
    case RC_ADDR(0x0001cb76u): goto L_1CB76;
    case RC_ADDR(0x0001cb7au): goto L_1CB7A;
    case RC_ADDR(0x0001cb7cu): goto L_1CB7C;
    case RC_ADDR(0x0001cb7eu): goto L_1CB7E;
    case RC_ADDR(0x0001cb80u): goto L_1CB80;
    case RC_ADDR(0x0001cb84u): goto L_1CB84;
    case RC_ADDR(0x0001cb88u): goto L_1CB88;
    case RC_ADDR(0x0001cb8cu): goto L_1CB8C;
    case RC_ADDR(0x0001cb90u): goto L_1CB90;
    case RC_ADDR(0x0001cb92u): goto L_1CB92;
    case RC_ADDR(0x0001cb94u): goto L_1CB94;
    case RC_ADDR(0x0001cb96u): goto L_1CB96;
    case RC_ADDR(0x0001cb9au): goto L_1CB9A;
    case RC_ADDR(0x0001cba0u): goto L_1CBA0;
    case RC_ADDR(0x0001cba4u): goto L_1CBA4;
    case RC_ADDR(0x0001cba8u): goto L_1CBA8;
    case RC_ADDR(0x0001cbacu): goto L_1CBAC;
    case RC_ADDR(0x0001cbaeu): goto L_1CBAE;
    case RC_ADDR(0x0001cbb0u): goto L_1CBB0;
    case RC_ADDR(0x0001cbb2u): goto L_1CBB2;
    case RC_ADDR(0x0001cbb6u): goto L_1CBB6;
    case RC_ADDR(0x0001cbbau): goto L_1CBBA;
    case RC_ADDR(0x0001cbbeu): goto L_1CBBE;
    case RC_ADDR(0x0001cbc2u): goto L_1CBC2;
    case RC_ADDR(0x0001cbc4u): goto L_1CBC4;
    case RC_ADDR(0x0001cbc6u): goto L_1CBC6;
    case RC_ADDR(0x0001cbc8u): goto L_1CBC8;
    case RC_ADDR(0x0001cbccu): goto L_1CBCC;
    case RC_ADDR(0x0001cbd2u): goto L_1CBD2;
    case RC_ADDR(0x0001cbd6u): goto L_1CBD6;
    case RC_ADDR(0x0001cbdau): goto L_1CBDA;
    case RC_ADDR(0x0001cbdeu): goto L_1CBDE;
    case RC_ADDR(0x0001cbe0u): goto L_1CBE0;
    case RC_ADDR(0x0001cbe2u): goto L_1CBE2;
    case RC_ADDR(0x0001cbe4u): goto L_1CBE4;
    case RC_ADDR(0x0001cbe8u): goto L_1CBE8;
    case RC_ADDR(0x0001cbecu): goto L_1CBEC;
    case RC_ADDR(0x0001cbf0u): goto L_1CBF0;
    case RC_ADDR(0x0001cbf4u): goto L_1CBF4;
    case RC_ADDR(0x0001cbf6u): goto L_1CBF6;
    case RC_ADDR(0x0001cbf8u): goto L_1CBF8;
    case RC_ADDR(0x0001cbfau): goto L_1CBFA;
    case RC_ADDR(0x0001cbfeu): goto L_1CBFE;
    case RC_ADDR(0x0001cc04u): goto L_1CC04;
    case RC_ADDR(0x0001cc08u): goto L_1CC08;
    case RC_ADDR(0x0001cc0eu): goto L_1CC0E;
    case RC_ADDR(0x0001cc12u): goto L_1CC12;
    case RC_ADDR(0x0001cc16u): goto L_1CC16;
    case RC_ADDR(0x0001cc1au): goto L_1CC1A;
    case RC_ADDR(0x0001cc1eu): goto L_1CC1E;
    case RC_ADDR(0x0001cc22u): goto L_1CC22;
    case RC_ADDR(0x0001cc26u): goto L_1CC26;
    case RC_ADDR(0x0001cc28u): goto L_1CC28;
    case RC_ADDR(0x0001cc2cu): goto L_1CC2C;
    case RC_ADDR(0x0001cc2eu): goto L_1CC2E;
    case RC_ADDR(0x0001cc30u): goto L_1CC30;
    case RC_ADDR(0x0001cc34u): goto L_1CC34;
    case RC_ADDR(0x0001cc38u): goto L_1CC38;
    case RC_ADDR(0x0001cc3au): goto L_1CC3A;
    case RC_ADDR(0x0001cc3cu): goto L_1CC3C;
    case RC_ADDR(0x0001cc40u): goto L_1CC40;
    case RC_ADDR(0x0001cc46u): goto L_1CC46;
    case RC_ADDR(0x0001cc4au): goto L_1CC4A;
    case RC_ADDR(0x0001cc4cu): goto L_1CC4C;
    case RC_ADDR(0x0001cc4eu): goto L_1CC4E;
    case RC_ADDR(0x0001cc52u): goto L_1CC52;
    case RC_ADDR(0x0001cc56u): goto L_1CC56;
    case RC_ADDR(0x0001cc58u): goto L_1CC58;
    case RC_ADDR(0x0001cc5au): goto L_1CC5A;
    case RC_ADDR(0x0001cc5eu): goto L_1CC5E;
    case RC_ADDR(0x0001cc64u): goto L_1CC64;
    case RC_ADDR(0x0001cc68u): goto L_1CC68;
    case RC_ADDR(0x0001cc6au): goto L_1CC6A;
    case RC_ADDR(0x0001cc6cu): goto L_1CC6C;
    case RC_ADDR(0x0001cc70u): goto L_1CC70;
    case RC_ADDR(0x0001cc74u): goto L_1CC74;
    case RC_ADDR(0x0001cc76u): goto L_1CC76;
    case RC_ADDR(0x0001cc78u): goto L_1CC78;
    case RC_ADDR(0x0001cc7cu): goto L_1CC7C;
    case RC_ADDR(0x0001cc82u): goto L_1CC82;
    case RC_ADDR(0x0001cc86u): goto L_1CC86;
    case RC_ADDR(0x0001cc8au): goto L_1CC8A;
    case RC_ADDR(0x0001cc8eu): goto L_1CC8E;
    case RC_ADDR(0x0001cc90u): goto L_1CC90;
    case RC_ADDR(0x0001cc94u): goto L_1CC94;
    case RC_ADDR(0x0001cc96u): goto L_1CC96;
    case RC_ADDR(0x0001cc9au): goto L_1CC9A;
    case RC_ADDR(0x0001cc9cu): goto L_1CC9C;
    case RC_ADDR(0x0001cc9eu): goto L_1CC9E;
    case RC_ADDR(0x0001cca2u): goto L_1CCA2;
    case RC_ADDR(0x0001cca6u): goto L_1CCA6;
    case RC_ADDR(0x0001cca8u): goto L_1CCA8;
    case RC_ADDR(0x0001ccaau): goto L_1CCAA;
    case RC_ADDR(0x0001ccaeu): goto L_1CCAE;
    case RC_ADDR(0x0001ccb4u): goto L_1CCB4;
    case RC_ADDR(0x0001ccb8u): goto L_1CCB8;
    case RC_ADDR(0x0001ccbau): goto L_1CCBA;
    case RC_ADDR(0x0001ccbcu): goto L_1CCBC;
    case RC_ADDR(0x0001ccc0u): goto L_1CCC0;
    case RC_ADDR(0x0001ccc4u): goto L_1CCC4;
    case RC_ADDR(0x0001ccc6u): goto L_1CCC6;
    case RC_ADDR(0x0001ccc8u): goto L_1CCC8;
    case RC_ADDR(0x0001ccccu): goto L_1CCCC;
    case RC_ADDR(0x0001ccd2u): goto L_1CCD2;
    case RC_ADDR(0x0001ccd6u): goto L_1CCD6;
    case RC_ADDR(0x0001ccd8u): goto L_1CCD8;
    case RC_ADDR(0x0001ccdau): goto L_1CCDA;
    case RC_ADDR(0x0001ccdeu): goto L_1CCDE;
    case RC_ADDR(0x0001cce2u): goto L_1CCE2;
    case RC_ADDR(0x0001cce4u): goto L_1CCE4;
    case RC_ADDR(0x0001cce6u): goto L_1CCE6;
    case RC_ADDR(0x0001cceau): goto L_1CCEA;
    case RC_ADDR(0x0001ccf0u): goto L_1CCF0;
    case RC_ADDR(0x0001ccf4u): goto L_1CCF4;
    case RC_ADDR(0x0001ccf8u): goto L_1CCF8;
    case RC_ADDR(0x0001ccfcu): goto L_1CCFC;
    case RC_ADDR(0x0001ccfeu): goto L_1CCFE;
    case RC_ADDR(0x0001cd00u): goto L_1CD00;
    case RC_ADDR(0x0001cd02u): goto L_1CD02;
    case RC_ADDR(0x0001cd06u): goto L_1CD06;
    case RC_ADDR(0x0001cd08u): goto L_1CD08;
    case RC_ADDR(0x0001cd0cu): goto L_1CD0C;
    case RC_ADDR(0x0001cd0eu): goto L_1CD0E;
    case RC_ADDR(0x0001cd12u): goto L_1CD12;
    case RC_ADDR(0x0001cd14u): goto L_1CD14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C45C:
    /* 0001c45c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001c45cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1C460:
    /* 0001c460   6  move.w (8,A5),(2968,A4) */
    c->pc = RC_ADDR(0x0001c460u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x2968u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C466:
    /* 0001c466   6  move.w (8,A5),(296a,A4) */
    c->pc = RC_ADDR(0x0001c466u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x296au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C46C:
    /* 0001c46c   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001c46cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C470:
    /* 0001c470   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c470u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C472:
    /* 0001c472   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c472u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C474:
    /* 0001c474   4  lea (ffffcf40,A4),A0 */
    c->pc = RC_ADDR(0x0001c474u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30c0u);

L_1C478:
    /* 0001c478   6  move.w (0,A0,D0.w),(1146,A4) */
    c->pc = RC_ADDR(0x0001c478u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x1146u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C47E:
    /* 0001c47e   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001c47eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C482:
    /* 0001c482   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c482u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C484:
    /* 0001c484   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c484u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C486:
    /* 0001c486   4  lea (ffffcf34,A4),A0 */
    c->pc = RC_ADDR(0x0001c486u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30ccu);

L_1C48A:
    /* 0001c48a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001c48au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C48E:
    /* 0001c48e   4  jsr (ffff81d6,A4) */
    c->pc = RC_ADDR(0x0001c48eu);
    rc_step(c, m, 18);
    /* vector 78 */
    rc_push32(c, m, RC_ADDR(0x0001c492u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cccu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d326u);
    return;

L_1C492:
    /* 0001c492   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001c492u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C494:
    /* 0001c494   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001c494u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C498:
    /* 0001c498   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c498u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C49A:
    /* 0001c49a   4  bra 0001cd00 */
    c->pc = RC_ADDR(0x0001c49au);
    rc_step(c, m, 10);
    goto L_1CD00;

L_1C49E:
    /* 0001c49e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c49eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C4A2:
    /* 0001c4a2   4  bra 0001c528 */
    c->pc = RC_ADDR(0x0001c4a2u);
    rc_step(c, m, 10);
    goto L_1C528;

L_1C4A6:
    /* 0001c4a6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4a6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C4AA:
    /* 0001c4aa   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c4aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4AE:
    /* 0001c4ae   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001c4aeu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1C4B2:
    /* 0001c4b2   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c4b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4B6:
    /* 0001c4b6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c4b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C4B8:
    /* 0001c4b8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c4b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C4BA:
    /* 0001c4ba   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c4bau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C4BC:
    /* 0001c4bc   4  lea (ffffb7a2,A4),A0 */
    c->pc = RC_ADDR(0x0001c4bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x485eu);

L_1C4C0:
    /* 0001c4c0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c4c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4C4:
    /* 0001c4c4   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001c4c4u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1C4C8:
    /* 0001c4c8   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c4c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4CC:
    /* 0001c4cc   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c4ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C4CE:
    /* 0001c4ce   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c4ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C4D0:
    /* 0001c4d0   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c4d0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C4D2:
    /* 0001c4d2   4  lea (1e0a,A4),A1 */
    c->pc = RC_ADDR(0x0001c4d2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e0au);

L_1C4D6:
    /* 0001c4d6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c4d6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4DC:
    /* 0001c4dc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4dcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C4E0:
    /* 0001c4e0   6  cmpi.w #3,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1C4E6:
    /* 0001c4e6   2  blt 0001c4aa */
    c->pc = RC_ADDR(0x0001c4e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C4AA; }

L_1C4E8:
    /* 0001c4e8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c4e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4EC:
    /* 0001c4ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c4ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C4EE:
    /* 0001c4ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c4eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C4F0:
    /* 0001c4f0   4  lea (ffffb762,A4),A0 */
    c->pc = RC_ADDR(0x0001c4f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x489eu);

L_1C4F4:
    /* 0001c4f4   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c4f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4F8:
    /* 0001c4f8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c4f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C4FA:
    /* 0001c4fa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c4fau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C4FC:
    /* 0001c4fc   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001c4fcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1C500:
    /* 0001c500   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c500u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C506:
    /* 0001c506   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c506u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C50A:
    /* 0001c50a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c50au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C50C:
    /* 0001c50c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c50cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C50E:
    /* 0001c50e   4  lea (ffffb782,A4),A0 */
    c->pc = RC_ADDR(0x0001c50eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x487eu);

L_1C512:
    /* 0001c512   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c512u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C516:
    /* 0001c516   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c516u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C518:
    /* 0001c518   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c518u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C51A:
    /* 0001c51a   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001c51au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1C51E:
    /* 0001c51e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c51eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C524:
    /* 0001c524   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c524u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C528:
    /* 0001c528   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c528u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C52C:
    /* 0001c52c   4  cmp.w (ffffcdca,A4),D0 */
    c->pc = RC_ADDR(0x0001c52cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3236u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C530:
    /* 0001c530   4  blt 0001c4a6 */
    c->pc = RC_ADDR(0x0001c530u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C4A6; }

L_1C534:
    /* 0001c534   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c534u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C538:
    /* 0001c538   4  bra 0001c67e */
    c->pc = RC_ADDR(0x0001c538u);
    rc_step(c, m, 10);
    goto L_1C67E;

L_1C53C:
    /* 0001c53c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c53cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C540:
    /* 0001c540   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c540u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C542:
    /* 0001c542   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c542u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C544:
    /* 0001c544   4  lea (ffffb802,A4),A0 */
    c->pc = RC_ADDR(0x0001c544u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x47feu);

L_1C548:
    /* 0001c548   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c548u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C54C:
    /* 0001c54c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c54cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C54E:
    /* 0001c54e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c54eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C550:
    /* 0001c550   4  lea (1e6a,A4),A1 */
    c->pc = RC_ADDR(0x0001c550u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e6au);

L_1C554:
    /* 0001c554   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c554u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C55A:
    /* 0001c55a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c55au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C55E:
    /* 0001c55e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c55eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C560:
    /* 0001c560   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c560u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C562:
    /* 0001c562   4  lea (ffffb81c,A4),A0 */
    c->pc = RC_ADDR(0x0001c562u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x47e4u);

L_1C566:
    /* 0001c566   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c566u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C56A:
    /* 0001c56a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c56au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C56C:
    /* 0001c56c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c56cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C56E:
    /* 0001c56e   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x0001c56eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_1C572:
    /* 0001c572   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c572u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C578:
    /* 0001c578   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c578u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C57C:
    /* 0001c57c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c57cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C57E:
    /* 0001c57e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c57eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C580:
    /* 0001c580   4  lea (ffffb836,A4),A0 */
    c->pc = RC_ADDR(0x0001c580u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x47cau);

L_1C584:
    /* 0001c584   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C588:
    /* 0001c588   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c588u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C58A:
    /* 0001c58a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c58au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C58C:
    /* 0001c58c   4  lea (1ec6,A4),A1 */
    c->pc = RC_ADDR(0x0001c58cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ec6u);

L_1C590:
    /* 0001c590   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c590u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C596:
    /* 0001c596   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c596u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C59A:
    /* 0001c59a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c59au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C59C:
    /* 0001c59c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c59cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C59E:
    /* 0001c59e   4  lea (ffffb850,A4),A0 */
    c->pc = RC_ADDR(0x0001c59eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x47b0u);

L_1C5A2:
    /* 0001c5a2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c5a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5A6:
    /* 0001c5a6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c5a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C5A8:
    /* 0001c5a8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c5a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C5AA:
    /* 0001c5aa   4  lea (1ef4,A4),A1 */
    c->pc = RC_ADDR(0x0001c5aau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef4u);

L_1C5AE:
    /* 0001c5ae   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c5aeu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5B4:
    /* 0001c5b4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c5b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5B8:
    /* 0001c5b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c5b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C5BA:
    /* 0001c5ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c5bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C5BC:
    /* 0001c5bc   4  lea (ffffb86a,A4),A0 */
    c->pc = RC_ADDR(0x0001c5bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4796u);

L_1C5C0:
    /* 0001c5c0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c5c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5C4:
    /* 0001c5c4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c5c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C5C6:
    /* 0001c5c6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c5c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C5C8:
    /* 0001c5c8   4  lea (1f22,A4),A1 */
    c->pc = RC_ADDR(0x0001c5c8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f22u);

L_1C5CC:
    /* 0001c5cc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c5ccu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5D2:
    /* 0001c5d2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c5d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C5D6:
    /* 0001c5d6   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c5d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5DA:
    /* 0001c5da   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c5dau);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C5DE:
    /* 0001c5de   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c5deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5E2:
    /* 0001c5e2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c5e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C5E4:
    /* 0001c5e4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c5e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C5E6:
    /* 0001c5e6   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c5e6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C5E8:
    /* 0001c5e8   4  lea (ffffb884,A4),A0 */
    c->pc = RC_ADDR(0x0001c5e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x477cu);

L_1C5EC:
    /* 0001c5ec   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c5ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5F0:
    /* 0001c5f0   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c5f0u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C5F4:
    /* 0001c5f4   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c5f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5F8:
    /* 0001c5f8   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c5f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C5FA:
    /* 0001c5fa   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c5fau);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C5FC:
    /* 0001c5fc   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c5fcu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C5FE:
    /* 0001c5fe   4  lea (1f50,A4),A1 */
    c->pc = RC_ADDR(0x0001c5feu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f50u);

L_1C602:
    /* 0001c602   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c602u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C608:
    /* 0001c608   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c608u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C60C:
    /* 0001c60c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c60cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C610:
    /* 0001c610   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c610u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C614:
    /* 0001c614   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c614u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C616:
    /* 0001c616   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c616u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C618:
    /* 0001c618   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c618u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C61A:
    /* 0001c61a   4  lea (ffffb9bc,A4),A0 */
    c->pc = RC_ADDR(0x0001c61au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4644u);

L_1C61E:
    /* 0001c61e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c61eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C622:
    /* 0001c622   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c622u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C626:
    /* 0001c626   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c626u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C62A:
    /* 0001c62a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c62au);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C62C:
    /* 0001c62c   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c62cu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C62E:
    /* 0001c62e   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c62eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C630:
    /* 0001c630   4  lea (2178,A4),A1 */
    c->pc = RC_ADDR(0x0001c630u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2178u);

L_1C634:
    /* 0001c634   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c634u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C63A:
    /* 0001c63a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c63au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C63E:
    /* 0001c63e   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c63eu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C642:
    /* 0001c642   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c642u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C646:
    /* 0001c646   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c646u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C648:
    /* 0001c648   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c648u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C64A:
    /* 0001c64a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c64au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C64C:
    /* 0001c64c   4  lea (ffffbaf4,A4),A0 */
    c->pc = RC_ADDR(0x0001c64cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x450cu);

L_1C650:
    /* 0001c650   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c650u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C654:
    /* 0001c654   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c654u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C658:
    /* 0001c658   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c658u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C65C:
    /* 0001c65c   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c65cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C65E:
    /* 0001c65e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c65eu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C660:
    /* 0001c660   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c660u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C662:
    /* 0001c662   4  lea (23a0,A4),A1 */
    c->pc = RC_ADDR(0x0001c662u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x23a0u);

L_1C666:
    /* 0001c666   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c666u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C66C:
    /* 0001c66c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c66cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C670:
    /* 0001c670   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c670u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1C676:
    /* 0001c676   4  blt 0001c5d6 */
    c->pc = RC_ADDR(0x0001c676u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C5D6; }

L_1C67A:
    /* 0001c67a   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c67au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C67E:
    /* 0001c67e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c67eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C682:
    /* 0001c682   4  cmp.w (ffffcdd0,A4),D0 */
    c->pc = RC_ADDR(0x0001c682u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3230u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C686:
    /* 0001c686   4  blt 0001c53c */
    c->pc = RC_ADDR(0x0001c686u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C53C; }

L_1C68A:
    /* 0001c68a   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c68au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C68E:
    /* 0001c68e   2  bra 0001c6ee */
    c->pc = RC_ADDR(0x0001c68eu);
    rc_step(c, m, 10);
    goto L_1C6EE;

L_1C690:
    /* 0001c690   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c690u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C694:
    /* 0001c694   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c694u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C696:
    /* 0001c696   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c696u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C698:
    /* 0001c698   4  lea (ffffbc2c,A4),A0 */
    c->pc = RC_ADDR(0x0001c698u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x43d4u);

L_1C69C:
    /* 0001c69c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c69cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6A0:
    /* 0001c6a0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c6a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C6A2:
    /* 0001c6a2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c6a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C6A4:
    /* 0001c6a4   4  lea (25c8,A4),A1 */
    c->pc = RC_ADDR(0x0001c6a4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25c8u);

L_1C6A8:
    /* 0001c6a8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c6a8u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6AE:
    /* 0001c6ae   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c6aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6B2:
    /* 0001c6b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c6b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C6B4:
    /* 0001c6b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c6b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C6B6:
    /* 0001c6b6   4  lea (ffffbc4c,A4),A0 */
    c->pc = RC_ADDR(0x0001c6b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x43b4u);

L_1C6BA:
    /* 0001c6ba   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c6bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6BE:
    /* 0001c6be   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c6beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C6C0:
    /* 0001c6c0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c6c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C6C2:
    /* 0001c6c2   4  lea (25f6,A4),A1 */
    c->pc = RC_ADDR(0x0001c6c2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25f6u);

L_1C6C6:
    /* 0001c6c6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c6c6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6CC:
    /* 0001c6cc   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c6ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6D0:
    /* 0001c6d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c6d0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C6D2:
    /* 0001c6d2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c6d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C6D4:
    /* 0001c6d4   4  lea (ffffbc6c,A4),A0 */
    c->pc = RC_ADDR(0x0001c6d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4394u);

L_1C6D8:
    /* 0001c6d8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c6d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6DC:
    /* 0001c6dc   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c6dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C6DE:
    /* 0001c6de   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c6deu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C6E0:
    /* 0001c6e0   4  lea (2624,A4),A1 */
    c->pc = RC_ADDR(0x0001c6e0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2624u);

L_1C6E4:
    /* 0001c6e4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c6e4u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6EA:
    /* 0001c6ea   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c6eau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C6EE:
    /* 0001c6ee   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c6eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6F2:
    /* 0001c6f2   4  cmp.w (ffffcdd6,A4),D0 */
    c->pc = RC_ADDR(0x0001c6f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x322au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C6F6:
    /* 0001c6f6   2  blt 0001c690 */
    c->pc = RC_ADDR(0x0001c6f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C690; }

L_1C6F8:
    /* 0001c6f8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c6f8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C6FC:
    /* 0001c6fc   2  bra 0001c75c */
    c->pc = RC_ADDR(0x0001c6fcu);
    rc_step(c, m, 10);
    goto L_1C75C;

L_1C6FE:
    /* 0001c6fe   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c6feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C702:
    /* 0001c702   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c702u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C704:
    /* 0001c704   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c704u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C706:
    /* 0001c706   4  lea (ffffbc8c,A4),A0 */
    c->pc = RC_ADDR(0x0001c706u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4374u);

L_1C70A:
    /* 0001c70a   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c70au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C70E:
    /* 0001c70e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c70eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C710:
    /* 0001c710   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c710u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C712:
    /* 0001c712   4  lea (2652,A4),A1 */
    c->pc = RC_ADDR(0x0001c712u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2652u);

L_1C716:
    /* 0001c716   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c716u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C71C:
    /* 0001c71c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c71cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C720:
    /* 0001c720   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c720u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C722:
    /* 0001c722   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c722u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C724:
    /* 0001c724   4  lea (ffffbc9e,A4),A0 */
    c->pc = RC_ADDR(0x0001c724u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4362u);

L_1C728:
    /* 0001c728   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c728u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C72C:
    /* 0001c72c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c72cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C72E:
    /* 0001c72e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c72eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C730:
    /* 0001c730   4  lea (267e,A4),A1 */
    c->pc = RC_ADDR(0x0001c730u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x267eu);

L_1C734:
    /* 0001c734   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c734u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C73A:
    /* 0001c73a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c73au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C73E:
    /* 0001c73e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c73eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C740:
    /* 0001c740   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c740u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C742:
    /* 0001c742   4  lea (ffffbcb0,A4),A0 */
    c->pc = RC_ADDR(0x0001c742u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4350u);

L_1C746:
    /* 0001c746   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c746u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C74A:
    /* 0001c74a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c74au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C74C:
    /* 0001c74c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c74cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C74E:
    /* 0001c74e   4  lea (26aa,A4),A1 */
    c->pc = RC_ADDR(0x0001c74eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26aau);

L_1C752:
    /* 0001c752   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c752u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C758:
    /* 0001c758   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c758u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C75C:
    /* 0001c75c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c75cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C760:
    /* 0001c760   4  cmp.w (ffffcddc,A4),D0 */
    c->pc = RC_ADDR(0x0001c760u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3224u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C764:
    /* 0001c764   2  blt 0001c6fe */
    c->pc = RC_ADDR(0x0001c764u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C6FE; }

L_1C766:
    /* 0001c766   4  bra 0001cd12 */
    c->pc = RC_ADDR(0x0001c766u);
    rc_step(c, m, 10);
    goto L_1CD12;

L_1C76A:
    /* 0001c76a   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c76au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C76E:
    /* 0001c76e   4  bra 0001c7f4 */
    c->pc = RC_ADDR(0x0001c76eu);
    rc_step(c, m, 10);
    goto L_1C7F4;

L_1C772:
    /* 0001c772   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c772u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C776:
    /* 0001c776   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c776u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C77A:
    /* 0001c77a   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001c77au);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1C77E:
    /* 0001c77e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c77eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C782:
    /* 0001c782   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c782u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C784:
    /* 0001c784   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c784u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C786:
    /* 0001c786   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c786u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C788:
    /* 0001c788   4  lea (ffffbcf2,A4),A0 */
    c->pc = RC_ADDR(0x0001c788u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x430eu);

L_1C78C:
    /* 0001c78c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c78cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C790:
    /* 0001c790   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001c790u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1C794:
    /* 0001c794   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c794u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C798:
    /* 0001c798   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c798u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C79A:
    /* 0001c79a   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c79au);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C79C:
    /* 0001c79c   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c79cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C79E:
    /* 0001c79e   4  lea (1e0a,A4),A1 */
    c->pc = RC_ADDR(0x0001c79eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e0au);

L_1C7A2:
    /* 0001c7a2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c7a2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7A8:
    /* 0001c7a8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c7a8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C7AC:
    /* 0001c7ac   6  cmpi.w #3,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c7acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1C7B2:
    /* 0001c7b2   2  blt 0001c776 */
    c->pc = RC_ADDR(0x0001c7b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C776; }

L_1C7B4:
    /* 0001c7b4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c7b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7B8:
    /* 0001c7b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c7b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C7BA:
    /* 0001c7ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c7bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C7BC:
    /* 0001c7bc   4  lea (ffffbcc2,A4),A0 */
    c->pc = RC_ADDR(0x0001c7bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x433eu);

L_1C7C0:
    /* 0001c7c0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c7c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7C4:
    /* 0001c7c4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c7c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C7C6:
    /* 0001c7c6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c7c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C7C8:
    /* 0001c7c8   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001c7c8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1C7CC:
    /* 0001c7cc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c7ccu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7D2:
    /* 0001c7d2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c7d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7D6:
    /* 0001c7d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c7d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C7D8:
    /* 0001c7d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c7d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C7DA:
    /* 0001c7da   4  lea (ffffbcda,A4),A0 */
    c->pc = RC_ADDR(0x0001c7dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4326u);

L_1C7DE:
    /* 0001c7de   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c7deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7E2:
    /* 0001c7e2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c7e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C7E4:
    /* 0001c7e4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c7e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C7E6:
    /* 0001c7e6   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001c7e6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1C7EA:
    /* 0001c7ea   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c7eau);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7F0:
    /* 0001c7f0   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c7f0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C7F4:
    /* 0001c7f4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c7f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C7F8:
    /* 0001c7f8   4  cmp.w (ffffcdcc,A4),D0 */
    c->pc = RC_ADDR(0x0001c7f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3234u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C7FC:
    /* 0001c7fc   4  blt 0001c772 */
    c->pc = RC_ADDR(0x0001c7fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C772; }

L_1C800:
    /* 0001c800   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c800u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C804:
    /* 0001c804   4  bra 0001c94a */
    c->pc = RC_ADDR(0x0001c804u);
    rc_step(c, m, 10);
    goto L_1C94A;

L_1C808:
    /* 0001c808   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c808u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C80C:
    /* 0001c80c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c80cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C80E:
    /* 0001c80e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c80eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C810:
    /* 0001c810   4  lea (ffffbd3a,A4),A0 */
    c->pc = RC_ADDR(0x0001c810u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x42c6u);

L_1C814:
    /* 0001c814   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c814u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C818:
    /* 0001c818   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c818u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C81A:
    /* 0001c81a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c81au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C81C:
    /* 0001c81c   4  lea (1e6a,A4),A1 */
    c->pc = RC_ADDR(0x0001c81cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e6au);

L_1C820:
    /* 0001c820   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c820u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C826:
    /* 0001c826   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c826u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C82A:
    /* 0001c82a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c82au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C82C:
    /* 0001c82c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c82cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C82E:
    /* 0001c82e   4  lea (ffffbd64,A4),A0 */
    c->pc = RC_ADDR(0x0001c82eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x429cu);

L_1C832:
    /* 0001c832   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c832u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C836:
    /* 0001c836   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c836u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C838:
    /* 0001c838   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c838u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C83A:
    /* 0001c83a   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x0001c83au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_1C83E:
    /* 0001c83e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c83eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C844:
    /* 0001c844   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c844u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C848:
    /* 0001c848   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c848u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C84A:
    /* 0001c84a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c84au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C84C:
    /* 0001c84c   4  lea (ffffbd8e,A4),A0 */
    c->pc = RC_ADDR(0x0001c84cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4272u);

L_1C850:
    /* 0001c850   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c850u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C854:
    /* 0001c854   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c854u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C856:
    /* 0001c856   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c856u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C858:
    /* 0001c858   4  lea (1ec6,A4),A1 */
    c->pc = RC_ADDR(0x0001c858u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ec6u);

L_1C85C:
    /* 0001c85c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c85cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C862:
    /* 0001c862   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c862u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C866:
    /* 0001c866   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c866u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C868:
    /* 0001c868   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c868u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C86A:
    /* 0001c86a   4  lea (ffffbdb8,A4),A0 */
    c->pc = RC_ADDR(0x0001c86au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4248u);

L_1C86E:
    /* 0001c86e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c86eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C872:
    /* 0001c872   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c872u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C874:
    /* 0001c874   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c874u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C876:
    /* 0001c876   4  lea (1ef4,A4),A1 */
    c->pc = RC_ADDR(0x0001c876u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef4u);

L_1C87A:
    /* 0001c87a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c87au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C880:
    /* 0001c880   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c880u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C884:
    /* 0001c884   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c884u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C886:
    /* 0001c886   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c886u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C888:
    /* 0001c888   4  lea (ffffbde2,A4),A0 */
    c->pc = RC_ADDR(0x0001c888u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x421eu);

L_1C88C:
    /* 0001c88c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c88cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C890:
    /* 0001c890   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c890u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C892:
    /* 0001c892   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c892u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C894:
    /* 0001c894   4  lea (1f22,A4),A1 */
    c->pc = RC_ADDR(0x0001c894u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f22u);

L_1C898:
    /* 0001c898   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c898u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C89E:
    /* 0001c89e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c89eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C8A2:
    /* 0001c8a2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c8a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8A6:
    /* 0001c8a6   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c8a6u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C8AA:
    /* 0001c8aa   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c8aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8AE:
    /* 0001c8ae   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C8B0:
    /* 0001c8b0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c8b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C8B2:
    /* 0001c8b2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c8b2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C8B4:
    /* 0001c8b4   4  lea (ffffbe0c,A4),A0 */
    c->pc = RC_ADDR(0x0001c8b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x41f4u);

L_1C8B8:
    /* 0001c8b8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c8b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8BC:
    /* 0001c8bc   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c8bcu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C8C0:
    /* 0001c8c0   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c8c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8C4:
    /* 0001c8c4   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c8c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C8C6:
    /* 0001c8c6   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c8c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C8C8:
    /* 0001c8c8   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c8c8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C8CA:
    /* 0001c8ca   4  lea (1f50,A4),A1 */
    c->pc = RC_ADDR(0x0001c8cau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f50u);

L_1C8CE:
    /* 0001c8ce   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c8ceu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8D4:
    /* 0001c8d4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c8d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8D8:
    /* 0001c8d8   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c8d8u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C8DC:
    /* 0001c8dc   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c8dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8E0:
    /* 0001c8e0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C8E2:
    /* 0001c8e2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c8e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C8E4:
    /* 0001c8e4   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c8e4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C8E6:
    /* 0001c8e6   4  lea (ffffc004,A4),A0 */
    c->pc = RC_ADDR(0x0001c8e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3ffcu);

L_1C8EA:
    /* 0001c8ea   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c8eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8EE:
    /* 0001c8ee   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c8eeu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C8F2:
    /* 0001c8f2   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c8f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8F6:
    /* 0001c8f6   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c8f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C8F8:
    /* 0001c8f8   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c8f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C8FA:
    /* 0001c8fa   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c8fau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C8FC:
    /* 0001c8fc   4  lea (2178,A4),A1 */
    c->pc = RC_ADDR(0x0001c8fcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2178u);

L_1C900:
    /* 0001c900   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c900u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C906:
    /* 0001c906   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c906u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C90A:
    /* 0001c90a   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001c90au);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1C90E:
    /* 0001c90e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001c90eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C912:
    /* 0001c912   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c912u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C914:
    /* 0001c914   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c914u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C916:
    /* 0001c916   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001c916u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C918:
    /* 0001c918   4  lea (ffffc1fc,A4),A0 */
    c->pc = RC_ADDR(0x0001c918u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3e04u);

L_1C91C:
    /* 0001c91c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c91cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C920:
    /* 0001c920   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001c920u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1C924:
    /* 0001c924   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001c924u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C928:
    /* 0001c928   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001c928u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1C92A:
    /* 0001c92a   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001c92au);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1C92C:
    /* 0001c92c   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001c92cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1C92E:
    /* 0001c92e   4  lea (23a0,A4),A1 */
    c->pc = RC_ADDR(0x0001c92eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x23a0u);

L_1C932:
    /* 0001c932   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c932u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C938:
    /* 0001c938   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c938u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C93C:
    /* 0001c93c   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c93cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1C942:
    /* 0001c942   4  blt 0001c8a2 */
    c->pc = RC_ADDR(0x0001c942u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C8A2; }

L_1C946:
    /* 0001c946   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c946u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C94A:
    /* 0001c94a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c94au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C94E:
    /* 0001c94e   4  cmp.w (ffffcdd2,A4),D0 */
    c->pc = RC_ADDR(0x0001c94eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x322eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C952:
    /* 0001c952   4  blt 0001c808 */
    c->pc = RC_ADDR(0x0001c952u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C808; }

L_1C956:
    /* 0001c956   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c956u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C95A:
    /* 0001c95a   2  bra 0001c9ba */
    c->pc = RC_ADDR(0x0001c95au);
    rc_step(c, m, 10);
    goto L_1C9BA;

L_1C95C:
    /* 0001c95c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c95cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C960:
    /* 0001c960   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c960u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C962:
    /* 0001c962   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c962u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C964:
    /* 0001c964   4  lea (ffffc3f4,A4),A0 */
    c->pc = RC_ADDR(0x0001c964u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3c0cu);

L_1C968:
    /* 0001c968   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c968u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C96C:
    /* 0001c96c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c96cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C96E:
    /* 0001c96e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c96eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C970:
    /* 0001c970   4  lea (25c8,A4),A1 */
    c->pc = RC_ADDR(0x0001c970u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25c8u);

L_1C974:
    /* 0001c974   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c974u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C97A:
    /* 0001c97a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c97au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C97E:
    /* 0001c97e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c97eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C980:
    /* 0001c980   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c980u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C982:
    /* 0001c982   4  lea (ffffc420,A4),A0 */
    c->pc = RC_ADDR(0x0001c982u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3be0u);

L_1C986:
    /* 0001c986   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C98A:
    /* 0001c98a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c98au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C98C:
    /* 0001c98c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c98cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C98E:
    /* 0001c98e   4  lea (25f6,A4),A1 */
    c->pc = RC_ADDR(0x0001c98eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25f6u);

L_1C992:
    /* 0001c992   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c992u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C998:
    /* 0001c998   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c998u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C99C:
    /* 0001c99c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c99cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C99E:
    /* 0001c99e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c99eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C9A0:
    /* 0001c9a0   4  lea (ffffc44c,A4),A0 */
    c->pc = RC_ADDR(0x0001c9a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3bb4u);

L_1C9A4:
    /* 0001c9a4   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c9a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9A8:
    /* 0001c9a8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c9a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C9AA:
    /* 0001c9aa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c9aau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C9AC:
    /* 0001c9ac   4  lea (2624,A4),A1 */
    c->pc = RC_ADDR(0x0001c9acu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2624u);

L_1C9B0:
    /* 0001c9b0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c9b0u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9B6:
    /* 0001c9b6   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c9b6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C9BA:
    /* 0001c9ba   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c9bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9BE:
    /* 0001c9be   4  cmp.w (ffffcdd8,A4),D0 */
    c->pc = RC_ADDR(0x0001c9beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3228u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C9C2:
    /* 0001c9c2   2  blt 0001c95c */
    c->pc = RC_ADDR(0x0001c9c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C95C; }

L_1C9C4:
    /* 0001c9c4   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c9c4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C9C8:
    /* 0001c9c8   2  bra 0001ca28 */
    c->pc = RC_ADDR(0x0001c9c8u);
    rc_step(c, m, 10);
    goto L_1CA28;

L_1C9CA:
    /* 0001c9ca   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c9cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9CE:
    /* 0001c9ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c9ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C9D0:
    /* 0001c9d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c9d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C9D2:
    /* 0001c9d2   4  lea (ffffc478,A4),A0 */
    c->pc = RC_ADDR(0x0001c9d2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3b88u);

L_1C9D6:
    /* 0001c9d6   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c9d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9DA:
    /* 0001c9da   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c9dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C9DC:
    /* 0001c9dc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c9dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C9DE:
    /* 0001c9de   4  lea (2652,A4),A1 */
    c->pc = RC_ADDR(0x0001c9deu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2652u);

L_1C9E2:
    /* 0001c9e2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001c9e2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9E8:
    /* 0001c9e8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001c9e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9EC:
    /* 0001c9ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c9ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C9EE:
    /* 0001c9ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c9eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C9F0:
    /* 0001c9f0   4  lea (ffffc4a4,A4),A0 */
    c->pc = RC_ADDR(0x0001c9f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3b5cu);

L_1C9F4:
    /* 0001c9f4   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001c9f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9F8:
    /* 0001c9f8   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c9f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C9FA:
    /* 0001c9fa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001c9fau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1C9FC:
    /* 0001c9fc   4  lea (267e,A4),A1 */
    c->pc = RC_ADDR(0x0001c9fcu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x267eu);

L_1CA00:
    /* 0001ca00   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ca00u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA06:
    /* 0001ca06   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ca06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA0A:
    /* 0001ca0a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ca0au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CA0C:
    /* 0001ca0c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ca0cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CA0E:
    /* 0001ca0e   4  lea (ffffc4d0,A4),A0 */
    c->pc = RC_ADDR(0x0001ca0eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3b30u);

L_1CA12:
    /* 0001ca12   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ca12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA16:
    /* 0001ca16   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ca16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CA18:
    /* 0001ca18   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ca18u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CA1A:
    /* 0001ca1a   4  lea (26aa,A4),A1 */
    c->pc = RC_ADDR(0x0001ca1au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26aau);

L_1CA1E:
    /* 0001ca1e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ca1eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA24:
    /* 0001ca24   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ca24u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CA28:
    /* 0001ca28   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ca28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA2C:
    /* 0001ca2c   4  cmp.w (ffffcdde,A4),D0 */
    c->pc = RC_ADDR(0x0001ca2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3222u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CA30:
    /* 0001ca30   2  blt 0001c9ca */
    c->pc = RC_ADDR(0x0001ca30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C9CA; }

L_1CA32:
    /* 0001ca32   4  bra 0001cd12 */
    c->pc = RC_ADDR(0x0001ca32u);
    rc_step(c, m, 10);
    goto L_1CD12;

L_1CA36:
    /* 0001ca36   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ca36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CA3A:
    /* 0001ca3a   4  bra 0001cac0 */
    c->pc = RC_ADDR(0x0001ca3au);
    rc_step(c, m, 10);
    goto L_1CAC0;

L_1CA3E:
    /* 0001ca3e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ca3eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CA42:
    /* 0001ca42   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ca42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA46:
    /* 0001ca46   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001ca46u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_1CA4A:
    /* 0001ca4a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001ca4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA4E:
    /* 0001ca4e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ca4eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CA50:
    /* 0001ca50   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ca50u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CA52:
    /* 0001ca52   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001ca52u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CA54:
    /* 0001ca54   4  lea (ffffc528,A4),A0 */
    c->pc = RC_ADDR(0x0001ca54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3ad8u);

L_1CA58:
    /* 0001ca58   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ca58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA5C:
    /* 0001ca5c   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x0001ca5cu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_1CA60:
    /* 0001ca60   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001ca60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA64:
    /* 0001ca64   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001ca64u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1CA66:
    /* 0001ca66   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001ca66u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1CA68:
    /* 0001ca68   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001ca68u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1CA6A:
    /* 0001ca6a   4  lea (1e0a,A4),A1 */
    c->pc = RC_ADDR(0x0001ca6au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e0au);

L_1CA6E:
    /* 0001ca6e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ca6eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA74:
    /* 0001ca74   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ca74u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CA78:
    /* 0001ca78   6  cmpi.w #3,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ca78u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1CA7E:
    /* 0001ca7e   2  blt 0001ca42 */
    c->pc = RC_ADDR(0x0001ca7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CA42; }

L_1CA80:
    /* 0001ca80   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ca80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA84:
    /* 0001ca84   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ca84u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CA86:
    /* 0001ca86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ca86u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CA88:
    /* 0001ca88   4  lea (ffffc4fc,A4),A0 */
    c->pc = RC_ADDR(0x0001ca88u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3b04u);

L_1CA8C:
    /* 0001ca8c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ca8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA90:
    /* 0001ca90   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ca90u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CA92:
    /* 0001ca92   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ca92u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CA94:
    /* 0001ca94   4  lea (1dca,A4),A1 */
    c->pc = RC_ADDR(0x0001ca94u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dcau);

L_1CA98:
    /* 0001ca98   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ca98u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA9E:
    /* 0001ca9e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ca9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAA2:
    /* 0001caa2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001caa2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CAA4:
    /* 0001caa4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001caa4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CAA6:
    /* 0001caa6   4  lea (ffffc512,A4),A0 */
    c->pc = RC_ADDR(0x0001caa6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3aeeu);

L_1CAAA:
    /* 0001caaa   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001caaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAAE:
    /* 0001caae   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001caaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CAB0:
    /* 0001cab0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cab0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CAB2:
    /* 0001cab2   4  lea (1dea,A4),A1 */
    c->pc = RC_ADDR(0x0001cab2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1deau);

L_1CAB6:
    /* 0001cab6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cab6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CABC:
    /* 0001cabc   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cabcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CAC0:
    /* 0001cac0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cac0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAC4:
    /* 0001cac4   4  cmp.w (ffffcdce,A4),D0 */
    c->pc = RC_ADDR(0x0001cac4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3232u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CAC8:
    /* 0001cac8   4  blt 0001ca3e */
    c->pc = RC_ADDR(0x0001cac8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CA3E; }

L_1CACC:
    /* 0001cacc   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001caccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CAD0:
    /* 0001cad0   4  bra 0001cc16 */
    c->pc = RC_ADDR(0x0001cad0u);
    rc_step(c, m, 10);
    goto L_1CC16;

L_1CAD4:
    /* 0001cad4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cad4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAD8:
    /* 0001cad8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cad8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CADA:
    /* 0001cada   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cadau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CADC:
    /* 0001cadc   4  lea (ffffc56a,A4),A0 */
    c->pc = RC_ADDR(0x0001cadcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3a96u);

L_1CAE0:
    /* 0001cae0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cae0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAE4:
    /* 0001cae4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cae4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CAE6:
    /* 0001cae6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cae6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CAE8:
    /* 0001cae8   4  lea (1e6a,A4),A1 */
    c->pc = RC_ADDR(0x0001cae8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e6au);

L_1CAEC:
    /* 0001caec   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001caecu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAF2:
    /* 0001caf2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001caf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CAF6:
    /* 0001caf6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001caf6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CAF8:
    /* 0001caf8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001caf8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CAFA:
    /* 0001cafa   4  lea (ffffc598,A4),A0 */
    c->pc = RC_ADDR(0x0001cafau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3a68u);

L_1CAFE:
    /* 0001cafe   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cafeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB02:
    /* 0001cb02   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cb02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CB04:
    /* 0001cb04   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cb04u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CB06:
    /* 0001cb06   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x0001cb06u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_1CB0A:
    /* 0001cb0a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cb0au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB10:
    /* 0001cb10   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cb10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB14:
    /* 0001cb14   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cb14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CB16:
    /* 0001cb16   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cb16u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CB18:
    /* 0001cb18   4  lea (ffffc5c6,A4),A0 */
    c->pc = RC_ADDR(0x0001cb18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3a3au);

L_1CB1C:
    /* 0001cb1c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cb1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB20:
    /* 0001cb20   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cb20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CB22:
    /* 0001cb22   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cb22u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CB24:
    /* 0001cb24   4  lea (1ec6,A4),A1 */
    c->pc = RC_ADDR(0x0001cb24u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ec6u);

L_1CB28:
    /* 0001cb28   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cb28u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB2E:
    /* 0001cb2e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cb2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB32:
    /* 0001cb32   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cb32u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CB34:
    /* 0001cb34   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cb34u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CB36:
    /* 0001cb36   4  lea (ffffc5f4,A4),A0 */
    c->pc = RC_ADDR(0x0001cb36u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3a0cu);

L_1CB3A:
    /* 0001cb3a   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cb3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB3E:
    /* 0001cb3e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cb3eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CB40:
    /* 0001cb40   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cb40u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CB42:
    /* 0001cb42   4  lea (1ef4,A4),A1 */
    c->pc = RC_ADDR(0x0001cb42u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef4u);

L_1CB46:
    /* 0001cb46   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cb46u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB4C:
    /* 0001cb4c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cb4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB50:
    /* 0001cb50   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cb50u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CB52:
    /* 0001cb52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cb52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CB54:
    /* 0001cb54   4  lea (ffffc622,A4),A0 */
    c->pc = RC_ADDR(0x0001cb54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39deu);

L_1CB58:
    /* 0001cb58   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cb58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB5C:
    /* 0001cb5c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cb5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CB5E:
    /* 0001cb5e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cb5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CB60:
    /* 0001cb60   4  lea (1f22,A4),A1 */
    c->pc = RC_ADDR(0x0001cb60u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f22u);

L_1CB64:
    /* 0001cb64   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cb64u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB6A:
    /* 0001cb6a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cb6au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CB6E:
    /* 0001cb6e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cb6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB72:
    /* 0001cb72   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001cb72u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1CB76:
    /* 0001cb76   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001cb76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB7A:
    /* 0001cb7a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cb7au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CB7C:
    /* 0001cb7c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cb7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CB7E:
    /* 0001cb7e   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001cb7eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CB80:
    /* 0001cb80   4  lea (ffffc650,A4),A0 */
    c->pc = RC_ADDR(0x0001cb80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39b0u);

L_1CB84:
    /* 0001cb84   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cb84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB88:
    /* 0001cb88   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001cb88u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1CB8C:
    /* 0001cb8c   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001cb8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CB90:
    /* 0001cb90   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001cb90u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1CB92:
    /* 0001cb92   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001cb92u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1CB94:
    /* 0001cb94   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001cb94u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1CB96:
    /* 0001cb96   4  lea (1f50,A4),A1 */
    c->pc = RC_ADDR(0x0001cb96u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f50u);

L_1CB9A:
    /* 0001cb9a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cb9au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBA0:
    /* 0001cba0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cba0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBA4:
    /* 0001cba4   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001cba4u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1CBA8:
    /* 0001cba8   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001cba8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBAC:
    /* 0001cbac   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cbacu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CBAE:
    /* 0001cbae   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cbaeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CBB0:
    /* 0001cbb0   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001cbb0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CBB2:
    /* 0001cbb2   4  lea (ffffc878,A4),A0 */
    c->pc = RC_ADDR(0x0001cbb2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3788u);

L_1CBB6:
    /* 0001cbb6   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cbb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBBA:
    /* 0001cbba   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001cbbau);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1CBBE:
    /* 0001cbbe   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001cbbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBC2:
    /* 0001cbc2   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001cbc2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1CBC4:
    /* 0001cbc4   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001cbc4u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1CBC6:
    /* 0001cbc6   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001cbc6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1CBC8:
    /* 0001cbc8   4  lea (2178,A4),A1 */
    c->pc = RC_ADDR(0x0001cbc8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2178u);

L_1CBCC:
    /* 0001cbcc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cbccu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBD2:
    /* 0001cbd2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cbd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBD6:
    /* 0001cbd6   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001cbd6u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1CBDA:
    /* 0001cbda   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001cbdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBDE:
    /* 0001cbde   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cbdeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CBE0:
    /* 0001cbe0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cbe0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CBE2:
    /* 0001cbe2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001cbe2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CBE4:
    /* 0001cbe4   4  lea (ffffcaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001cbe4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3560u);

L_1CBE8:
    /* 0001cbe8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cbe8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBEC:
    /* 0001cbec   4  muls.w #18,D1 */
    c->pc = RC_ADDR(0x0001cbecu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 1, t0);

L_1CBF0:
    /* 0001cbf0   4  move.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001cbf0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CBF4:
    /* 0001cbf4   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001cbf4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1CBF6:
    /* 0001cbf6   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001cbf6u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_1CBF8:
    /* 0001cbf8   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x0001cbf8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1CBFA:
    /* 0001cbfa   4  lea (23a0,A4),A1 */
    c->pc = RC_ADDR(0x0001cbfau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x23a0u);

L_1CBFE:
    /* 0001cbfe   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cbfeu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC04:
    /* 0001cc04   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cc04u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CC08:
    /* 0001cc08   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cc08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1CC0E:
    /* 0001cc0e   4  blt 0001cb6e */
    c->pc = RC_ADDR(0x0001cc0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CB6E; }

L_1CC12:
    /* 0001cc12   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cc12u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CC16:
    /* 0001cc16   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC1A:
    /* 0001cc1a   4  cmp.w (ffffcdd4,A4),D0 */
    c->pc = RC_ADDR(0x0001cc1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x322cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CC1E:
    /* 0001cc1e   4  blt 0001cad4 */
    c->pc = RC_ADDR(0x0001cc1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CAD4; }

L_1CC22:
    /* 0001cc22   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cc22u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC26:
    /* 0001cc26   2  bra 0001cc86 */
    c->pc = RC_ADDR(0x0001cc26u);
    rc_step(c, m, 10);
    goto L_1CC86;

L_1CC28:
    /* 0001cc28   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC2C:
    /* 0001cc2c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cc2cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CC2E:
    /* 0001cc2e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cc2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CC30:
    /* 0001cc30   4  lea (ffffccc8,A4),A0 */
    c->pc = RC_ADDR(0x0001cc30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3338u);

L_1CC34:
    /* 0001cc34   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cc34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC38:
    /* 0001cc38   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cc38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CC3A:
    /* 0001cc3a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cc3au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CC3C:
    /* 0001cc3c   4  lea (25c8,A4),A1 */
    c->pc = RC_ADDR(0x0001cc3cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25c8u);

L_1CC40:
    /* 0001cc40   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cc40u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC46:
    /* 0001cc46   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC4A:
    /* 0001cc4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cc4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CC4C:
    /* 0001cc4c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cc4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CC4E:
    /* 0001cc4e   4  lea (ffffccf6,A4),A0 */
    c->pc = RC_ADDR(0x0001cc4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x330au);

L_1CC52:
    /* 0001cc52   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cc52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC56:
    /* 0001cc56   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cc56u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CC58:
    /* 0001cc58   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cc58u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CC5A:
    /* 0001cc5a   4  lea (25f6,A4),A1 */
    c->pc = RC_ADDR(0x0001cc5au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x25f6u);

L_1CC5E:
    /* 0001cc5e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cc5eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC64:
    /* 0001cc64   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC68:
    /* 0001cc68   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cc68u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CC6A:
    /* 0001cc6a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cc6au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CC6C:
    /* 0001cc6c   4  lea (ffffcd24,A4),A0 */
    c->pc = RC_ADDR(0x0001cc6cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x32dcu);

L_1CC70:
    /* 0001cc70   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cc70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC74:
    /* 0001cc74   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cc74u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CC76:
    /* 0001cc76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cc76u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CC78:
    /* 0001cc78   4  lea (2624,A4),A1 */
    c->pc = RC_ADDR(0x0001cc78u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2624u);

L_1CC7C:
    /* 0001cc7c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cc7cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC82:
    /* 0001cc82   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cc82u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CC86:
    /* 0001cc86   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC8A:
    /* 0001cc8a   4  cmp.w (ffffcdda,A4),D0 */
    c->pc = RC_ADDR(0x0001cc8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3226u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CC8E:
    /* 0001cc8e   2  blt 0001cc28 */
    c->pc = RC_ADDR(0x0001cc8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CC28; }

L_1CC90:
    /* 0001cc90   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cc90u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC94:
    /* 0001cc94   2  bra 0001ccf4 */
    c->pc = RC_ADDR(0x0001cc94u);
    rc_step(c, m, 10);
    goto L_1CCF4;

L_1CC96:
    /* 0001cc96   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001cc96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC9A:
    /* 0001cc9a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cc9au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CC9C:
    /* 0001cc9c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001cc9cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CC9E:
    /* 0001cc9e   4  lea (ffffcd52,A4),A0 */
    c->pc = RC_ADDR(0x0001cc9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x32aeu);

L_1CCA2:
    /* 0001cca2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001cca2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCA6:
    /* 0001cca6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cca6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CCA8:
    /* 0001cca8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cca8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CCAA:
    /* 0001ccaa   4  lea (2652,A4),A1 */
    c->pc = RC_ADDR(0x0001ccaau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2652u);

L_1CCAE:
    /* 0001ccae   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ccaeu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCB4:
    /* 0001ccb4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ccb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCB8:
    /* 0001ccb8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ccb8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CCBA:
    /* 0001ccba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ccbau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CCBC:
    /* 0001ccbc   4  lea (ffffcd7a,A4),A0 */
    c->pc = RC_ADDR(0x0001ccbcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3286u);

L_1CCC0:
    /* 0001ccc0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ccc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCC4:
    /* 0001ccc4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001ccc4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CCC6:
    /* 0001ccc6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001ccc6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CCC8:
    /* 0001ccc8   4  lea (267e,A4),A1 */
    c->pc = RC_ADDR(0x0001ccc8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x267eu);

L_1CCCC:
    /* 0001cccc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001ccccu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCD2:
    /* 0001ccd2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ccd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCD6:
    /* 0001ccd6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ccd6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CCD8:
    /* 0001ccd8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ccd8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1CCDA:
    /* 0001ccda   4  lea (ffffcda2,A4),A0 */
    c->pc = RC_ADDR(0x0001ccdau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x325eu);

L_1CCDE:
    /* 0001ccde   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ccdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCE2:
    /* 0001cce2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001cce2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1CCE4:
    /* 0001cce4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001cce4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1CCE6:
    /* 0001cce6   4  lea (26aa,A4),A1 */
    c->pc = RC_ADDR(0x0001cce6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26aau);

L_1CCEA:
    /* 0001ccea   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001cceau);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCF0:
    /* 0001ccf0   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ccf0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CCF4:
    /* 0001ccf4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001ccf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCF8:
    /* 0001ccf8   4  cmp.w (ffffcde0,A4),D0 */
    c->pc = RC_ADDR(0x0001ccf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3220u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CCFC:
    /* 0001ccfc   2  blt 0001cc96 */
    c->pc = RC_ADDR(0x0001ccfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CC96; }

L_1CCFE:
    /* 0001ccfe   2  bra 0001cd12 */
    c->pc = RC_ADDR(0x0001ccfeu);
    rc_step(c, m, 10);
    goto L_1CD12;

L_1CD00:
    /* 0001cd00   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001cd00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1CD02:
    /* 0001cd02   4  beq 0001c49e */
    c->pc = RC_ADDR(0x0001cd02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1C49E; }

L_1CD06:
    /* 0001cd06   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001cd06u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CD08:
    /* 0001cd08   4  beq 0001c76a */
    c->pc = RC_ADDR(0x0001cd08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1C76A; }

L_1CD0C:
    /* 0001cd0c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001cd0cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1CD0E:
    /* 0001cd0e   4  beq 0001ca36 */
    c->pc = RC_ADDR(0x0001cd0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1CA36; }

L_1CD12:
    /* 0001cd12   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cd12u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CD14:
    /* 0001cd14   2  rts */
    c->pc = RC_ADDR(0x0001cd14u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
