/* fn_0000e2ca - 2112 byte(s), 608 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000e2ca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000e2cau): goto L_E2CA;
    case RC_ADDR(0x0000e2ceu): goto L_E2CE;
    case RC_ADDR(0x0000e2d2u): goto L_E2D2;
    case RC_ADDR(0x0000e2d4u): goto L_E2D4;
    case RC_ADDR(0x0000e2d6u): goto L_E2D6;
    case RC_ADDR(0x0000e2dau): goto L_E2DA;
    case RC_ADDR(0x0000e2deu): goto L_E2DE;
    case RC_ADDR(0x0000e2e2u): goto L_E2E2;
    case RC_ADDR(0x0000e2e6u): goto L_E2E6;
    case RC_ADDR(0x0000e2eau): goto L_E2EA;
    case RC_ADDR(0x0000e2ecu): goto L_E2EC;
    case RC_ADDR(0x0000e2eeu): goto L_E2EE;
    case RC_ADDR(0x0000e2f2u): goto L_E2F2;
    case RC_ADDR(0x0000e2f6u): goto L_E2F6;
    case RC_ADDR(0x0000e2fau): goto L_E2FA;
    case RC_ADDR(0x0000e2feu): goto L_E2FE;
    case RC_ADDR(0x0000e302u): goto L_E302;
    case RC_ADDR(0x0000e304u): goto L_E304;
    case RC_ADDR(0x0000e308u): goto L_E308;
    case RC_ADDR(0x0000e30cu): goto L_E30C;
    case RC_ADDR(0x0000e310u): goto L_E310;
    case RC_ADDR(0x0000e314u): goto L_E314;
    case RC_ADDR(0x0000e316u): goto L_E316;
    case RC_ADDR(0x0000e31au): goto L_E31A;
    case RC_ADDR(0x0000e31cu): goto L_E31C;
    case RC_ADDR(0x0000e320u): goto L_E320;
    case RC_ADDR(0x0000e322u): goto L_E322;
    case RC_ADDR(0x0000e326u): goto L_E326;
    case RC_ADDR(0x0000e32au): goto L_E32A;
    case RC_ADDR(0x0000e32eu): goto L_E32E;
    case RC_ADDR(0x0000e330u): goto L_E330;
    case RC_ADDR(0x0000e332u): goto L_E332;
    case RC_ADDR(0x0000e336u): goto L_E336;
    case RC_ADDR(0x0000e33au): goto L_E33A;
    case RC_ADDR(0x0000e33eu): goto L_E33E;
    case RC_ADDR(0x0000e342u): goto L_E342;
    case RC_ADDR(0x0000e346u): goto L_E346;
    case RC_ADDR(0x0000e348u): goto L_E348;
    case RC_ADDR(0x0000e34cu): goto L_E34C;
    case RC_ADDR(0x0000e34eu): goto L_E34E;
    case RC_ADDR(0x0000e352u): goto L_E352;
    case RC_ADDR(0x0000e354u): goto L_E354;
    case RC_ADDR(0x0000e358u): goto L_E358;
    case RC_ADDR(0x0000e35cu): goto L_E35C;
    case RC_ADDR(0x0000e360u): goto L_E360;
    case RC_ADDR(0x0000e362u): goto L_E362;
    case RC_ADDR(0x0000e366u): goto L_E366;
    case RC_ADDR(0x0000e368u): goto L_E368;
    case RC_ADDR(0x0000e36cu): goto L_E36C;
    case RC_ADDR(0x0000e36eu): goto L_E36E;
    case RC_ADDR(0x0000e372u): goto L_E372;
    case RC_ADDR(0x0000e376u): goto L_E376;
    case RC_ADDR(0x0000e37au): goto L_E37A;
    case RC_ADDR(0x0000e37eu): goto L_E37E;
    case RC_ADDR(0x0000e382u): goto L_E382;
    case RC_ADDR(0x0000e384u): goto L_E384;
    case RC_ADDR(0x0000e386u): goto L_E386;
    case RC_ADDR(0x0000e38au): goto L_E38A;
    case RC_ADDR(0x0000e38eu): goto L_E38E;
    case RC_ADDR(0x0000e390u): goto L_E390;
    case RC_ADDR(0x0000e394u): goto L_E394;
    case RC_ADDR(0x0000e398u): goto L_E398;
    case RC_ADDR(0x0000e39cu): goto L_E39C;
    case RC_ADDR(0x0000e39eu): goto L_E39E;
    case RC_ADDR(0x0000e3a2u): goto L_E3A2;
    case RC_ADDR(0x0000e3a6u): goto L_E3A6;
    case RC_ADDR(0x0000e3aau): goto L_E3AA;
    case RC_ADDR(0x0000e3aeu): goto L_E3AE;
    case RC_ADDR(0x0000e3b2u): goto L_E3B2;
    case RC_ADDR(0x0000e3b6u): goto L_E3B6;
    case RC_ADDR(0x0000e3bau): goto L_E3BA;
    case RC_ADDR(0x0000e3beu): goto L_E3BE;
    case RC_ADDR(0x0000e3c0u): goto L_E3C0;
    case RC_ADDR(0x0000e3c4u): goto L_E3C4;
    case RC_ADDR(0x0000e3c8u): goto L_E3C8;
    case RC_ADDR(0x0000e3ccu): goto L_E3CC;
    case RC_ADDR(0x0000e3ceu): goto L_E3CE;
    case RC_ADDR(0x0000e3d2u): goto L_E3D2;
    case RC_ADDR(0x0000e3d4u): goto L_E3D4;
    case RC_ADDR(0x0000e3d8u): goto L_E3D8;
    case RC_ADDR(0x0000e3dcu): goto L_E3DC;
    case RC_ADDR(0x0000e3e0u): goto L_E3E0;
    case RC_ADDR(0x0000e3e2u): goto L_E3E2;
    case RC_ADDR(0x0000e3e6u): goto L_E3E6;
    case RC_ADDR(0x0000e3eau): goto L_E3EA;
    case RC_ADDR(0x0000e3eeu): goto L_E3EE;
    case RC_ADDR(0x0000e3f0u): goto L_E3F0;
    case RC_ADDR(0x0000e3f4u): goto L_E3F4;
    case RC_ADDR(0x0000e3f6u): goto L_E3F6;
    case RC_ADDR(0x0000e3fau): goto L_E3FA;
    case RC_ADDR(0x0000e3fcu): goto L_E3FC;
    case RC_ADDR(0x0000e400u): goto L_E400;
    case RC_ADDR(0x0000e408u): goto L_E408;
    case RC_ADDR(0x0000e40au): goto L_E40A;
    case RC_ADDR(0x0000e40eu): goto L_E40E;
    case RC_ADDR(0x0000e410u): goto L_E410;
    case RC_ADDR(0x0000e414u): goto L_E414;
    case RC_ADDR(0x0000e41au): goto L_E41A;
    case RC_ADDR(0x0000e41eu): goto L_E41E;
    case RC_ADDR(0x0000e420u): goto L_E420;
    case RC_ADDR(0x0000e424u): goto L_E424;
    case RC_ADDR(0x0000e42au): goto L_E42A;
    case RC_ADDR(0x0000e42eu): goto L_E42E;
    case RC_ADDR(0x0000e430u): goto L_E430;
    case RC_ADDR(0x0000e434u): goto L_E434;
    case RC_ADDR(0x0000e43au): goto L_E43A;
    case RC_ADDR(0x0000e43eu): goto L_E43E;
    case RC_ADDR(0x0000e440u): goto L_E440;
    case RC_ADDR(0x0000e444u): goto L_E444;
    case RC_ADDR(0x0000e448u): goto L_E448;
    case RC_ADDR(0x0000e44cu): goto L_E44C;
    case RC_ADDR(0x0000e44eu): goto L_E44E;
    case RC_ADDR(0x0000e452u): goto L_E452;
    case RC_ADDR(0x0000e458u): goto L_E458;
    case RC_ADDR(0x0000e45cu): goto L_E45C;
    case RC_ADDR(0x0000e45eu): goto L_E45E;
    case RC_ADDR(0x0000e462u): goto L_E462;
    case RC_ADDR(0x0000e468u): goto L_E468;
    case RC_ADDR(0x0000e46cu): goto L_E46C;
    case RC_ADDR(0x0000e470u): goto L_E470;
    case RC_ADDR(0x0000e472u): goto L_E472;
    case RC_ADDR(0x0000e476u): goto L_E476;
    case RC_ADDR(0x0000e47au): goto L_E47A;
    case RC_ADDR(0x0000e47eu): goto L_E47E;
    case RC_ADDR(0x0000e480u): goto L_E480;
    case RC_ADDR(0x0000e482u): goto L_E482;
    case RC_ADDR(0x0000e486u): goto L_E486;
    case RC_ADDR(0x0000e488u): goto L_E488;
    case RC_ADDR(0x0000e48cu): goto L_E48C;
    case RC_ADDR(0x0000e492u): goto L_E492;
    case RC_ADDR(0x0000e496u): goto L_E496;
    case RC_ADDR(0x0000e498u): goto L_E498;
    case RC_ADDR(0x0000e49cu): goto L_E49C;
    case RC_ADDR(0x0000e4a0u): goto L_E4A0;
    case RC_ADDR(0x0000e4a4u): goto L_E4A4;
    case RC_ADDR(0x0000e4a8u): goto L_E4A8;
    case RC_ADDR(0x0000e4aau): goto L_E4AA;
    case RC_ADDR(0x0000e4aeu): goto L_E4AE;
    case RC_ADDR(0x0000e4b0u): goto L_E4B0;
    case RC_ADDR(0x0000e4b4u): goto L_E4B4;
    case RC_ADDR(0x0000e4bau): goto L_E4BA;
    case RC_ADDR(0x0000e4beu): goto L_E4BE;
    case RC_ADDR(0x0000e4c0u): goto L_E4C0;
    case RC_ADDR(0x0000e4c4u): goto L_E4C4;
    case RC_ADDR(0x0000e4c8u): goto L_E4C8;
    case RC_ADDR(0x0000e4ccu): goto L_E4CC;
    case RC_ADDR(0x0000e4d0u): goto L_E4D0;
    case RC_ADDR(0x0000e4d4u): goto L_E4D4;
    case RC_ADDR(0x0000e4d6u): goto L_E4D6;
    case RC_ADDR(0x0000e4dau): goto L_E4DA;
    case RC_ADDR(0x0000e4deu): goto L_E4DE;
    case RC_ADDR(0x0000e4e0u): goto L_E4E0;
    case RC_ADDR(0x0000e4e4u): goto L_E4E4;
    case RC_ADDR(0x0000e4e6u): goto L_E4E6;
    case RC_ADDR(0x0000e4eau): goto L_E4EA;
    case RC_ADDR(0x0000e4eeu): goto L_E4EE;
    case RC_ADDR(0x0000e4f0u): goto L_E4F0;
    case RC_ADDR(0x0000e4f4u): goto L_E4F4;
    case RC_ADDR(0x0000e4f8u): goto L_E4F8;
    case RC_ADDR(0x0000e4fcu): goto L_E4FC;
    case RC_ADDR(0x0000e4feu): goto L_E4FE;
    case RC_ADDR(0x0000e502u): goto L_E502;
    case RC_ADDR(0x0000e504u): goto L_E504;
    case RC_ADDR(0x0000e508u): goto L_E508;
    case RC_ADDR(0x0000e50au): goto L_E50A;
    case RC_ADDR(0x0000e50eu): goto L_E50E;
    case RC_ADDR(0x0000e510u): goto L_E510;
    case RC_ADDR(0x0000e514u): goto L_E514;
    case RC_ADDR(0x0000e518u): goto L_E518;
    case RC_ADDR(0x0000e51au): goto L_E51A;
    case RC_ADDR(0x0000e51eu): goto L_E51E;
    case RC_ADDR(0x0000e522u): goto L_E522;
    case RC_ADDR(0x0000e526u): goto L_E526;
    case RC_ADDR(0x0000e528u): goto L_E528;
    case RC_ADDR(0x0000e52cu): goto L_E52C;
    case RC_ADDR(0x0000e52eu): goto L_E52E;
    case RC_ADDR(0x0000e532u): goto L_E532;
    case RC_ADDR(0x0000e534u): goto L_E534;
    case RC_ADDR(0x0000e538u): goto L_E538;
    case RC_ADDR(0x0000e53au): goto L_E53A;
    case RC_ADDR(0x0000e53eu): goto L_E53E;
    case RC_ADDR(0x0000e544u): goto L_E544;
    case RC_ADDR(0x0000e548u): goto L_E548;
    case RC_ADDR(0x0000e54cu): goto L_E54C;
    case RC_ADDR(0x0000e554u): goto L_E554;
    case RC_ADDR(0x0000e558u): goto L_E558;
    case RC_ADDR(0x0000e55cu): goto L_E55C;
    case RC_ADDR(0x0000e55eu): goto L_E55E;
    case RC_ADDR(0x0000e562u): goto L_E562;
    case RC_ADDR(0x0000e568u): goto L_E568;
    case RC_ADDR(0x0000e56cu): goto L_E56C;
    case RC_ADDR(0x0000e570u): goto L_E570;
    case RC_ADDR(0x0000e572u): goto L_E572;
    case RC_ADDR(0x0000e574u): goto L_E574;
    case RC_ADDR(0x0000e578u): goto L_E578;
    case RC_ADDR(0x0000e57eu): goto L_E57E;
    case RC_ADDR(0x0000e584u): goto L_E584;
    case RC_ADDR(0x0000e588u): goto L_E588;
    case RC_ADDR(0x0000e58au): goto L_E58A;
    case RC_ADDR(0x0000e58eu): goto L_E58E;
    case RC_ADDR(0x0000e592u): goto L_E592;
    case RC_ADDR(0x0000e596u): goto L_E596;
    case RC_ADDR(0x0000e598u): goto L_E598;
    case RC_ADDR(0x0000e59cu): goto L_E59C;
    case RC_ADDR(0x0000e59eu): goto L_E59E;
    case RC_ADDR(0x0000e5a2u): goto L_E5A2;
    case RC_ADDR(0x0000e5a4u): goto L_E5A4;
    case RC_ADDR(0x0000e5a8u): goto L_E5A8;
    case RC_ADDR(0x0000e5aau): goto L_E5AA;
    case RC_ADDR(0x0000e5aeu): goto L_E5AE;
    case RC_ADDR(0x0000e5b4u): goto L_E5B4;
    case RC_ADDR(0x0000e5b8u): goto L_E5B8;
    case RC_ADDR(0x0000e5bau): goto L_E5BA;
    case RC_ADDR(0x0000e5beu): goto L_E5BE;
    case RC_ADDR(0x0000e5c2u): goto L_E5C2;
    case RC_ADDR(0x0000e5c6u): goto L_E5C6;
    case RC_ADDR(0x0000e5c8u): goto L_E5C8;
    case RC_ADDR(0x0000e5ccu): goto L_E5CC;
    case RC_ADDR(0x0000e5ceu): goto L_E5CE;
    case RC_ADDR(0x0000e5d2u): goto L_E5D2;
    case RC_ADDR(0x0000e5d4u): goto L_E5D4;
    case RC_ADDR(0x0000e5d8u): goto L_E5D8;
    case RC_ADDR(0x0000e5dau): goto L_E5DA;
    case RC_ADDR(0x0000e5deu): goto L_E5DE;
    case RC_ADDR(0x0000e5e4u): goto L_E5E4;
    case RC_ADDR(0x0000e5e8u): goto L_E5E8;
    case RC_ADDR(0x0000e5eau): goto L_E5EA;
    case RC_ADDR(0x0000e5eeu): goto L_E5EE;
    case RC_ADDR(0x0000e5f2u): goto L_E5F2;
    case RC_ADDR(0x0000e5f6u): goto L_E5F6;
    case RC_ADDR(0x0000e5f8u): goto L_E5F8;
    case RC_ADDR(0x0000e5feu): goto L_E5FE;
    case RC_ADDR(0x0000e602u): goto L_E602;
    case RC_ADDR(0x0000e604u): goto L_E604;
    case RC_ADDR(0x0000e608u): goto L_E608;
    case RC_ADDR(0x0000e60cu): goto L_E60C;
    case RC_ADDR(0x0000e610u): goto L_E610;
    case RC_ADDR(0x0000e612u): goto L_E612;
    case RC_ADDR(0x0000e616u): goto L_E616;
    case RC_ADDR(0x0000e61au): goto L_E61A;
    case RC_ADDR(0x0000e61cu): goto L_E61C;
    case RC_ADDR(0x0000e620u): goto L_E620;
    case RC_ADDR(0x0000e624u): goto L_E624;
    case RC_ADDR(0x0000e628u): goto L_E628;
    case RC_ADDR(0x0000e62au): goto L_E62A;
    case RC_ADDR(0x0000e630u): goto L_E630;
    case RC_ADDR(0x0000e634u): goto L_E634;
    case RC_ADDR(0x0000e636u): goto L_E636;
    case RC_ADDR(0x0000e63au): goto L_E63A;
    case RC_ADDR(0x0000e63eu): goto L_E63E;
    case RC_ADDR(0x0000e642u): goto L_E642;
    case RC_ADDR(0x0000e644u): goto L_E644;
    case RC_ADDR(0x0000e648u): goto L_E648;
    case RC_ADDR(0x0000e64au): goto L_E64A;
    case RC_ADDR(0x0000e64eu): goto L_E64E;
    case RC_ADDR(0x0000e652u): goto L_E652;
    case RC_ADDR(0x0000e654u): goto L_E654;
    case RC_ADDR(0x0000e658u): goto L_E658;
    case RC_ADDR(0x0000e65cu): goto L_E65C;
    case RC_ADDR(0x0000e660u): goto L_E660;
    case RC_ADDR(0x0000e662u): goto L_E662;
    case RC_ADDR(0x0000e666u): goto L_E666;
    case RC_ADDR(0x0000e66au): goto L_E66A;
    case RC_ADDR(0x0000e66cu): goto L_E66C;
    case RC_ADDR(0x0000e66eu): goto L_E66E;
    case RC_ADDR(0x0000e672u): goto L_E672;
    case RC_ADDR(0x0000e674u): goto L_E674;
    case RC_ADDR(0x0000e676u): goto L_E676;
    case RC_ADDR(0x0000e678u): goto L_E678;
    case RC_ADDR(0x0000e67cu): goto L_E67C;
    case RC_ADDR(0x0000e680u): goto L_E680;
    case RC_ADDR(0x0000e684u): goto L_E684;
    case RC_ADDR(0x0000e686u): goto L_E686;
    case RC_ADDR(0x0000e68au): goto L_E68A;
    case RC_ADDR(0x0000e68eu): goto L_E68E;
    case RC_ADDR(0x0000e692u): goto L_E692;
    case RC_ADDR(0x0000e694u): goto L_E694;
    case RC_ADDR(0x0000e698u): goto L_E698;
    case RC_ADDR(0x0000e69au): goto L_E69A;
    case RC_ADDR(0x0000e69eu): goto L_E69E;
    case RC_ADDR(0x0000e6a2u): goto L_E6A2;
    case RC_ADDR(0x0000e6a6u): goto L_E6A6;
    case RC_ADDR(0x0000e6a8u): goto L_E6A8;
    case RC_ADDR(0x0000e6acu): goto L_E6AC;
    case RC_ADDR(0x0000e6b0u): goto L_E6B0;
    case RC_ADDR(0x0000e6b2u): goto L_E6B2;
    case RC_ADDR(0x0000e6b4u): goto L_E6B4;
    case RC_ADDR(0x0000e6b8u): goto L_E6B8;
    case RC_ADDR(0x0000e6bcu): goto L_E6BC;
    case RC_ADDR(0x0000e6beu): goto L_E6BE;
    case RC_ADDR(0x0000e6c2u): goto L_E6C2;
    case RC_ADDR(0x0000e6c6u): goto L_E6C6;
    case RC_ADDR(0x0000e6c8u): goto L_E6C8;
    case RC_ADDR(0x0000e6cau): goto L_E6CA;
    case RC_ADDR(0x0000e6ceu): goto L_E6CE;
    case RC_ADDR(0x0000e6d2u): goto L_E6D2;
    case RC_ADDR(0x0000e6d4u): goto L_E6D4;
    case RC_ADDR(0x0000e6d8u): goto L_E6D8;
    case RC_ADDR(0x0000e6dau): goto L_E6DA;
    case RC_ADDR(0x0000e6deu): goto L_E6DE;
    case RC_ADDR(0x0000e6e2u): goto L_E6E2;
    case RC_ADDR(0x0000e6e6u): goto L_E6E6;
    case RC_ADDR(0x0000e6eau): goto L_E6EA;
    case RC_ADDR(0x0000e6ecu): goto L_E6EC;
    case RC_ADDR(0x0000e6f0u): goto L_E6F0;
    case RC_ADDR(0x0000e6f4u): goto L_E6F4;
    case RC_ADDR(0x0000e6f6u): goto L_E6F6;
    case RC_ADDR(0x0000e6f8u): goto L_E6F8;
    case RC_ADDR(0x0000e6fcu): goto L_E6FC;
    case RC_ADDR(0x0000e700u): goto L_E700;
    case RC_ADDR(0x0000e702u): goto L_E702;
    case RC_ADDR(0x0000e706u): goto L_E706;
    case RC_ADDR(0x0000e708u): goto L_E708;
    case RC_ADDR(0x0000e70cu): goto L_E70C;
    case RC_ADDR(0x0000e710u): goto L_E710;
    case RC_ADDR(0x0000e714u): goto L_E714;
    case RC_ADDR(0x0000e71cu): goto L_E71C;
    case RC_ADDR(0x0000e720u): goto L_E720;
    case RC_ADDR(0x0000e724u): goto L_E724;
    case RC_ADDR(0x0000e726u): goto L_E726;
    case RC_ADDR(0x0000e72au): goto L_E72A;
    case RC_ADDR(0x0000e72eu): goto L_E72E;
    case RC_ADDR(0x0000e732u): goto L_E732;
    case RC_ADDR(0x0000e734u): goto L_E734;
    case RC_ADDR(0x0000e738u): goto L_E738;
    case RC_ADDR(0x0000e73cu): goto L_E73C;
    case RC_ADDR(0x0000e740u): goto L_E740;
    case RC_ADDR(0x0000e744u): goto L_E744;
    case RC_ADDR(0x0000e746u): goto L_E746;
    case RC_ADDR(0x0000e74au): goto L_E74A;
    case RC_ADDR(0x0000e74eu): goto L_E74E;
    case RC_ADDR(0x0000e750u): goto L_E750;
    case RC_ADDR(0x0000e754u): goto L_E754;
    case RC_ADDR(0x0000e756u): goto L_E756;
    case RC_ADDR(0x0000e75au): goto L_E75A;
    case RC_ADDR(0x0000e75eu): goto L_E75E;
    case RC_ADDR(0x0000e762u): goto L_E762;
    case RC_ADDR(0x0000e764u): goto L_E764;
    case RC_ADDR(0x0000e768u): goto L_E768;
    case RC_ADDR(0x0000e76cu): goto L_E76C;
    case RC_ADDR(0x0000e770u): goto L_E770;
    case RC_ADDR(0x0000e774u): goto L_E774;
    case RC_ADDR(0x0000e776u): goto L_E776;
    case RC_ADDR(0x0000e77au): goto L_E77A;
    case RC_ADDR(0x0000e77eu): goto L_E77E;
    case RC_ADDR(0x0000e780u): goto L_E780;
    case RC_ADDR(0x0000e784u): goto L_E784;
    case RC_ADDR(0x0000e786u): goto L_E786;
    case RC_ADDR(0x0000e78au): goto L_E78A;
    case RC_ADDR(0x0000e78cu): goto L_E78C;
    case RC_ADDR(0x0000e790u): goto L_E790;
    case RC_ADDR(0x0000e792u): goto L_E792;
    case RC_ADDR(0x0000e796u): goto L_E796;
    case RC_ADDR(0x0000e79cu): goto L_E79C;
    case RC_ADDR(0x0000e79eu): goto L_E79E;
    case RC_ADDR(0x0000e7a2u): goto L_E7A2;
    case RC_ADDR(0x0000e7a4u): goto L_E7A4;
    case RC_ADDR(0x0000e7a8u): goto L_E7A8;
    case RC_ADDR(0x0000e7aeu): goto L_E7AE;
    case RC_ADDR(0x0000e7b0u): goto L_E7B0;
    case RC_ADDR(0x0000e7b4u): goto L_E7B4;
    case RC_ADDR(0x0000e7b6u): goto L_E7B6;
    case RC_ADDR(0x0000e7bau): goto L_E7BA;
    case RC_ADDR(0x0000e7c0u): goto L_E7C0;
    case RC_ADDR(0x0000e7c4u): goto L_E7C4;
    case RC_ADDR(0x0000e7c6u): goto L_E7C6;
    case RC_ADDR(0x0000e7cau): goto L_E7CA;
    case RC_ADDR(0x0000e7d0u): goto L_E7D0;
    case RC_ADDR(0x0000e7d4u): goto L_E7D4;
    case RC_ADDR(0x0000e7d8u): goto L_E7D8;
    case RC_ADDR(0x0000e7dau): goto L_E7DA;
    case RC_ADDR(0x0000e7deu): goto L_E7DE;
    case RC_ADDR(0x0000e7e2u): goto L_E7E2;
    case RC_ADDR(0x0000e7e4u): goto L_E7E4;
    case RC_ADDR(0x0000e7e8u): goto L_E7E8;
    case RC_ADDR(0x0000e7ecu): goto L_E7EC;
    case RC_ADDR(0x0000e7eeu): goto L_E7EE;
    case RC_ADDR(0x0000e7f2u): goto L_E7F2;
    case RC_ADDR(0x0000e7f6u): goto L_E7F6;
    case RC_ADDR(0x0000e7fau): goto L_E7FA;
    case RC_ADDR(0x0000e7feu): goto L_E7FE;
    case RC_ADDR(0x0000e806u): goto L_E806;
    case RC_ADDR(0x0000e80au): goto L_E80A;
    case RC_ADDR(0x0000e80eu): goto L_E80E;
    case RC_ADDR(0x0000e810u): goto L_E810;
    case RC_ADDR(0x0000e814u): goto L_E814;
    case RC_ADDR(0x0000e818u): goto L_E818;
    case RC_ADDR(0x0000e81cu): goto L_E81C;
    case RC_ADDR(0x0000e81eu): goto L_E81E;
    case RC_ADDR(0x0000e822u): goto L_E822;
    case RC_ADDR(0x0000e826u): goto L_E826;
    case RC_ADDR(0x0000e82au): goto L_E82A;
    case RC_ADDR(0x0000e82cu): goto L_E82C;
    case RC_ADDR(0x0000e830u): goto L_E830;
    case RC_ADDR(0x0000e834u): goto L_E834;
    case RC_ADDR(0x0000e838u): goto L_E838;
    case RC_ADDR(0x0000e83cu): goto L_E83C;
    case RC_ADDR(0x0000e840u): goto L_E840;
    case RC_ADDR(0x0000e842u): goto L_E842;
    case RC_ADDR(0x0000e846u): goto L_E846;
    case RC_ADDR(0x0000e84au): goto L_E84A;
    case RC_ADDR(0x0000e84eu): goto L_E84E;
    case RC_ADDR(0x0000e850u): goto L_E850;
    case RC_ADDR(0x0000e854u): goto L_E854;
    case RC_ADDR(0x0000e856u): goto L_E856;
    case RC_ADDR(0x0000e85au): goto L_E85A;
    case RC_ADDR(0x0000e85eu): goto L_E85E;
    case RC_ADDR(0x0000e862u): goto L_E862;
    case RC_ADDR(0x0000e864u): goto L_E864;
    case RC_ADDR(0x0000e868u): goto L_E868;
    case RC_ADDR(0x0000e86au): goto L_E86A;
    case RC_ADDR(0x0000e86eu): goto L_E86E;
    case RC_ADDR(0x0000e872u): goto L_E872;
    case RC_ADDR(0x0000e874u): goto L_E874;
    case RC_ADDR(0x0000e878u): goto L_E878;
    case RC_ADDR(0x0000e87au): goto L_E87A;
    case RC_ADDR(0x0000e87cu): goto L_E87C;
    case RC_ADDR(0x0000e87eu): goto L_E87E;
    case RC_ADDR(0x0000e882u): goto L_E882;
    case RC_ADDR(0x0000e884u): goto L_E884;
    case RC_ADDR(0x0000e886u): goto L_E886;
    case RC_ADDR(0x0000e888u): goto L_E888;
    case RC_ADDR(0x0000e88au): goto L_E88A;
    case RC_ADDR(0x0000e88eu): goto L_E88E;
    case RC_ADDR(0x0000e892u): goto L_E892;
    case RC_ADDR(0x0000e896u): goto L_E896;
    case RC_ADDR(0x0000e898u): goto L_E898;
    case RC_ADDR(0x0000e89cu): goto L_E89C;
    case RC_ADDR(0x0000e8a0u): goto L_E8A0;
    case RC_ADDR(0x0000e8a4u): goto L_E8A4;
    case RC_ADDR(0x0000e8a6u): goto L_E8A6;
    case RC_ADDR(0x0000e8aau): goto L_E8AA;
    case RC_ADDR(0x0000e8acu): goto L_E8AC;
    case RC_ADDR(0x0000e8b0u): goto L_E8B0;
    case RC_ADDR(0x0000e8b4u): goto L_E8B4;
    case RC_ADDR(0x0000e8b8u): goto L_E8B8;
    case RC_ADDR(0x0000e8bau): goto L_E8BA;
    case RC_ADDR(0x0000e8beu): goto L_E8BE;
    case RC_ADDR(0x0000e8c0u): goto L_E8C0;
    case RC_ADDR(0x0000e8c4u): goto L_E8C4;
    case RC_ADDR(0x0000e8c6u): goto L_E8C6;
    case RC_ADDR(0x0000e8cau): goto L_E8CA;
    case RC_ADDR(0x0000e8ccu): goto L_E8CC;
    case RC_ADDR(0x0000e8d0u): goto L_E8D0;
    case RC_ADDR(0x0000e8d2u): goto L_E8D2;
    case RC_ADDR(0x0000e8d6u): goto L_E8D6;
    case RC_ADDR(0x0000e8d8u): goto L_E8D8;
    case RC_ADDR(0x0000e8dcu): goto L_E8DC;
    case RC_ADDR(0x0000e8e0u): goto L_E8E0;
    case RC_ADDR(0x0000e8e2u): goto L_E8E2;
    case RC_ADDR(0x0000e8e6u): goto L_E8E6;
    case RC_ADDR(0x0000e8e8u): goto L_E8E8;
    case RC_ADDR(0x0000e8ecu): goto L_E8EC;
    case RC_ADDR(0x0000e8f0u): goto L_E8F0;
    case RC_ADDR(0x0000e8f4u): goto L_E8F4;
    case RC_ADDR(0x0000e8f6u): goto L_E8F6;
    case RC_ADDR(0x0000e8fau): goto L_E8FA;
    case RC_ADDR(0x0000e900u): goto L_E900;
    case RC_ADDR(0x0000e902u): goto L_E902;
    case RC_ADDR(0x0000e906u): goto L_E906;
    case RC_ADDR(0x0000e908u): goto L_E908;
    case RC_ADDR(0x0000e90cu): goto L_E90C;
    case RC_ADDR(0x0000e910u): goto L_E910;
    case RC_ADDR(0x0000e916u): goto L_E916;
    case RC_ADDR(0x0000e91au): goto L_E91A;
    case RC_ADDR(0x0000e91eu): goto L_E91E;
    case RC_ADDR(0x0000e920u): goto L_E920;
    case RC_ADDR(0x0000e924u): goto L_E924;
    case RC_ADDR(0x0000e928u): goto L_E928;
    case RC_ADDR(0x0000e92cu): goto L_E92C;
    case RC_ADDR(0x0000e92eu): goto L_E92E;
    case RC_ADDR(0x0000e932u): goto L_E932;
    case RC_ADDR(0x0000e934u): goto L_E934;
    case RC_ADDR(0x0000e938u): goto L_E938;
    case RC_ADDR(0x0000e93au): goto L_E93A;
    case RC_ADDR(0x0000e93eu): goto L_E93E;
    case RC_ADDR(0x0000e940u): goto L_E940;
    case RC_ADDR(0x0000e944u): goto L_E944;
    case RC_ADDR(0x0000e948u): goto L_E948;
    case RC_ADDR(0x0000e94cu): goto L_E94C;
    case RC_ADDR(0x0000e94eu): goto L_E94E;
    case RC_ADDR(0x0000e952u): goto L_E952;
    case RC_ADDR(0x0000e954u): goto L_E954;
    case RC_ADDR(0x0000e958u): goto L_E958;
    case RC_ADDR(0x0000e95au): goto L_E95A;
    case RC_ADDR(0x0000e95eu): goto L_E95E;
    case RC_ADDR(0x0000e960u): goto L_E960;
    case RC_ADDR(0x0000e964u): goto L_E964;
    case RC_ADDR(0x0000e96au): goto L_E96A;
    case RC_ADDR(0x0000e96eu): goto L_E96E;
    case RC_ADDR(0x0000e970u): goto L_E970;
    case RC_ADDR(0x0000e974u): goto L_E974;
    case RC_ADDR(0x0000e97au): goto L_E97A;
    case RC_ADDR(0x0000e97eu): goto L_E97E;
    case RC_ADDR(0x0000e980u): goto L_E980;
    case RC_ADDR(0x0000e984u): goto L_E984;
    case RC_ADDR(0x0000e98au): goto L_E98A;
    case RC_ADDR(0x0000e98eu): goto L_E98E;
    case RC_ADDR(0x0000e990u): goto L_E990;
    case RC_ADDR(0x0000e994u): goto L_E994;
    case RC_ADDR(0x0000e99au): goto L_E99A;
    case RC_ADDR(0x0000e99eu): goto L_E99E;
    case RC_ADDR(0x0000e9a0u): goto L_E9A0;
    case RC_ADDR(0x0000e9a4u): goto L_E9A4;
    case RC_ADDR(0x0000e9a8u): goto L_E9A8;
    case RC_ADDR(0x0000e9acu): goto L_E9AC;
    case RC_ADDR(0x0000e9b0u): goto L_E9B0;
    case RC_ADDR(0x0000e9b4u): goto L_E9B4;
    case RC_ADDR(0x0000e9b8u): goto L_E9B8;
    case RC_ADDR(0x0000e9bau): goto L_E9BA;
    case RC_ADDR(0x0000e9beu): goto L_E9BE;
    case RC_ADDR(0x0000e9c0u): goto L_E9C0;
    case RC_ADDR(0x0000e9c2u): goto L_E9C2;
    case RC_ADDR(0x0000e9c6u): goto L_E9C6;
    case RC_ADDR(0x0000e9cau): goto L_E9CA;
    case RC_ADDR(0x0000e9ccu): goto L_E9CC;
    case RC_ADDR(0x0000e9ceu): goto L_E9CE;
    case RC_ADDR(0x0000e9d0u): goto L_E9D0;
    case RC_ADDR(0x0000e9d2u): goto L_E9D2;
    case RC_ADDR(0x0000e9d6u): goto L_E9D6;
    case RC_ADDR(0x0000e9d8u): goto L_E9D8;
    case RC_ADDR(0x0000e9dcu): goto L_E9DC;
    case RC_ADDR(0x0000e9e2u): goto L_E9E2;
    case RC_ADDR(0x0000e9e4u): goto L_E9E4;
    case RC_ADDR(0x0000e9e8u): goto L_E9E8;
    case RC_ADDR(0x0000e9eau): goto L_E9EA;
    case RC_ADDR(0x0000e9eeu): goto L_E9EE;
    case RC_ADDR(0x0000e9f2u): goto L_E9F2;
    case RC_ADDR(0x0000e9f6u): goto L_E9F6;
    case RC_ADDR(0x0000e9f8u): goto L_E9F8;
    case RC_ADDR(0x0000e9fcu): goto L_E9FC;
    case RC_ADDR(0x0000ea00u): goto L_EA00;
    case RC_ADDR(0x0000ea04u): goto L_EA04;
    case RC_ADDR(0x0000ea06u): goto L_EA06;
    case RC_ADDR(0x0000ea08u): goto L_EA08;
    case RC_ADDR(0x0000ea0cu): goto L_EA0C;
    case RC_ADDR(0x0000ea0eu): goto L_EA0E;
    case RC_ADDR(0x0000ea12u): goto L_EA12;
    case RC_ADDR(0x0000ea18u): goto L_EA18;
    case RC_ADDR(0x0000ea1cu): goto L_EA1C;
    case RC_ADDR(0x0000ea1eu): goto L_EA1E;
    case RC_ADDR(0x0000ea22u): goto L_EA22;
    case RC_ADDR(0x0000ea28u): goto L_EA28;
    case RC_ADDR(0x0000ea2cu): goto L_EA2C;
    case RC_ADDR(0x0000ea30u): goto L_EA30;
    case RC_ADDR(0x0000ea32u): goto L_EA32;
    case RC_ADDR(0x0000ea36u): goto L_EA36;
    case RC_ADDR(0x0000ea3cu): goto L_EA3C;
    case RC_ADDR(0x0000ea3eu): goto L_EA3E;
    case RC_ADDR(0x0000ea42u): goto L_EA42;
    case RC_ADDR(0x0000ea44u): goto L_EA44;
    case RC_ADDR(0x0000ea48u): goto L_EA48;
    case RC_ADDR(0x0000ea4eu): goto L_EA4E;
    case RC_ADDR(0x0000ea50u): goto L_EA50;
    case RC_ADDR(0x0000ea54u): goto L_EA54;
    case RC_ADDR(0x0000ea56u): goto L_EA56;
    case RC_ADDR(0x0000ea5au): goto L_EA5A;
    case RC_ADDR(0x0000ea5eu): goto L_EA5E;
    case RC_ADDR(0x0000ea62u): goto L_EA62;
    case RC_ADDR(0x0000ea66u): goto L_EA66;
    case RC_ADDR(0x0000ea68u): goto L_EA68;
    case RC_ADDR(0x0000ea6cu): goto L_EA6C;
    case RC_ADDR(0x0000ea70u): goto L_EA70;
    case RC_ADDR(0x0000ea72u): goto L_EA72;
    case RC_ADDR(0x0000ea76u): goto L_EA76;
    case RC_ADDR(0x0000ea78u): goto L_EA78;
    case RC_ADDR(0x0000ea7cu): goto L_EA7C;
    case RC_ADDR(0x0000ea82u): goto L_EA82;
    case RC_ADDR(0x0000ea84u): goto L_EA84;
    case RC_ADDR(0x0000ea88u): goto L_EA88;
    case RC_ADDR(0x0000ea8au): goto L_EA8A;
    case RC_ADDR(0x0000ea8eu): goto L_EA8E;
    case RC_ADDR(0x0000ea92u): goto L_EA92;
    case RC_ADDR(0x0000ea94u): goto L_EA94;
    case RC_ADDR(0x0000ea98u): goto L_EA98;
    case RC_ADDR(0x0000ea9au): goto L_EA9A;
    case RC_ADDR(0x0000ea9eu): goto L_EA9E;
    case RC_ADDR(0x0000eaa2u): goto L_EAA2;
    case RC_ADDR(0x0000eaa6u): goto L_EAA6;
    case RC_ADDR(0x0000eaa8u): goto L_EAA8;
    case RC_ADDR(0x0000eaacu): goto L_EAAC;
    case RC_ADDR(0x0000eaaeu): goto L_EAAE;
    case RC_ADDR(0x0000eab2u): goto L_EAB2;
    case RC_ADDR(0x0000eab4u): goto L_EAB4;
    case RC_ADDR(0x0000eab8u): goto L_EAB8;
    case RC_ADDR(0x0000eabau): goto L_EABA;
    case RC_ADDR(0x0000eabeu): goto L_EABE;
    case RC_ADDR(0x0000eac2u): goto L_EAC2;
    case RC_ADDR(0x0000eac6u): goto L_EAC6;
    case RC_ADDR(0x0000eac8u): goto L_EAC8;
    case RC_ADDR(0x0000eaccu): goto L_EACC;
    case RC_ADDR(0x0000eaceu): goto L_EACE;
    case RC_ADDR(0x0000ead2u): goto L_EAD2;
    case RC_ADDR(0x0000ead4u): goto L_EAD4;
    case RC_ADDR(0x0000ead8u): goto L_EAD8;
    case RC_ADDR(0x0000eadau): goto L_EADA;
    case RC_ADDR(0x0000eadeu): goto L_EADE;
    case RC_ADDR(0x0000eae2u): goto L_EAE2;
    case RC_ADDR(0x0000eaf4u): goto L_EAF4;
    case RC_ADDR(0x0000eafau): goto L_EAFA;
    case RC_ADDR(0x0000eafcu): goto L_EAFC;
    case RC_ADDR(0x0000eafeu): goto L_EAFE;
    case RC_ADDR(0x0000eb02u): goto L_EB02;
    case RC_ADDR(0x0000eb06u): goto L_EB06;
    case RC_ADDR(0x0000eb0au): goto L_EB0A;
    case RC_ADDR(0x0000eb12u): goto L_EB12;
    case RC_ADDR(0x0000eb16u): goto L_EB16;
    case RC_ADDR(0x0000eb18u): goto L_EB18;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E2CA:
    /* 0000e2ca   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0000e2cau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_E2CE:
    /* 0000e2ce   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000e2ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2D2:
    /* 0000e2d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e2d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E2D4:
    /* 0000e2d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e2d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E2D6:
    /* 0000e2d6   4  lea (ffff99c4,A4),A0 */
    c->pc = RC_ADDR(0x0000e2d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x663cu);

L_E2DA:
    /* 0000e2da   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e2dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2DE:
    /* 0000e2de   4  add.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000e2deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E2E2:
    /* 0000e2e2   4  move.w D1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000e2e2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2E6:
    /* 0000e2e6   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000e2e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2EA:
    /* 0000e2ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e2eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E2EC:
    /* 0000e2ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e2ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E2EE:
    /* 0000e2ee   4  lea (ffff99e4,A4),A0 */
    c->pc = RC_ADDR(0x0000e2eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x661cu);

L_E2F2:
    /* 0000e2f2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e2f2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2F6:
    /* 0000e2f6   4  add.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000e2f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E2FA:
    /* 0000e2fa   4  move.w D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000e2fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2FE:
    /* 0000e2fe   4  tst.w (111c,A4) */
    c->pc = RC_ADDR(0x0000e2feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x111cu));
    rc_set_nzvc(c, t0, RC_W);

L_E302:
    /* 0000e302   2  beq 0000e30c */
    c->pc = RC_ADDR(0x0000e302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E30C;

L_E304:
    /* 0000e304   4  subq.w #1,(111c,A4) */
    c->pc = RC_ADDR(0x0000e304u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x111cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E308:
    /* 0000e308   4  bra 0000eb16 */
    c->pc = RC_ADDR(0x0000e308u);
    rc_step(c, m, 10);
    goto L_EB16;

L_E30C:
    /* 0000e30c   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000e30cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E310:
    /* 0000e310   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e310u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E314:
    /* 0000e314   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e314u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E316:
    /* 0000e316   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e316u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E31A:
    /* 0000e31a   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000e31au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E31C:
    /* 0000e31c   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e31cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E320:
    /* 0000e320   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e320u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E322:
    /* 0000e322   4  bra 0000eaf4 */
    c->pc = RC_ADDR(0x0000e322u);
    rc_step(c, m, 10);
    goto L_EAF4;

L_E326:
    /* 0000e326   4  move.w (1136,A4),-(A7) */
    c->pc = RC_ADDR(0x0000e326u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1136u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E32A:
    /* 0000e32a   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e32au);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e32eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E32E:
    /* 0000e32e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e32eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E330:
    /* 0000e330   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000e330u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E332:
    /* 0000e332   4  bne 0000e468 */
    c->pc = RC_ADDR(0x0000e332u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E468;

L_E336:
    /* 0000e336   4  tst.w (1112,A4) */
    c->pc = RC_ADDR(0x0000e336u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1112u));
    rc_set_nzvc(c, t0, RC_W);

L_E33A:
    /* 0000e33a   4  bne 0000e468 */
    c->pc = RC_ADDR(0x0000e33au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E468;

L_E33E:
    /* 0000e33e   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000e33eu);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E342:
    /* 0000e342   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e342u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e346u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E346:
    /* 0000e346   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e346u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E348:
    /* 0000e348   4  move.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0000e348u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E34C:
    /* 0000e34c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e34cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E34E:
    /* 0000e34e   4  divs.w #20,D1 */
    c->pc = RC_ADDR(0x0000e34eu);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 1, t0);

L_E352:
    /* 0000e352   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000e352u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E354:
    /* 0000e354   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e354u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E358:
    /* 0000e358   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0000e358u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E35C:
    /* 0000e35c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e35cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E360:
    /* 0000e360   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e360u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E362:
    /* 0000e362   4  move.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0000e362u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E366:
    /* 0000e366   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e366u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E368:
    /* 0000e368   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000e368u);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_E36C:
    /* 0000e36c   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000e36cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E36E:
    /* 0000e36e   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e36eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E372:
    /* 0000e372   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000e372u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E376:
    /* 0000e376   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000e376u);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_E37A:
    /* 0000e37a   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000e37au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E37E:
    /* 0000e37e   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000e37eu);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E382:
    /* 0000e382   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e382u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E384:
    /* 0000e384   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e384u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E386:
    /* 0000e386   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000e386u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_E38A:
    /* 0000e38a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e38au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E38E:
    /* 0000e38e   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000e38eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E390:
    /* 0000e390   4  cmp.w #29,D1 */
    c->pc = RC_ADDR(0x0000e390u);
    rc_step(c, m, 8);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E394:
    /* 0000e394   4  bne 0000e468 */
    c->pc = RC_ADDR(0x0000e394u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E468;

L_E398:
    /* 0000e398   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000e398u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E39C:
    /* 0000e39c   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x0000e39cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_E39E:
    /* 0000e39e   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0000e39eu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E3A2:
    /* 0000e3a2   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e3a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3A6:
    /* 0000e3a6   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000e3a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3AA:
    /* 0000e3aa   4  muls.w #1b,D0 */
    c->pc = RC_ADDR(0x0000e3aau);
    rc_step(c, m, 42);
    t0 = 0x0000001bu;
    rc_muls(c, 0, t0);

L_E3AE:
    /* 0000e3ae   4  add.w #e,D0 */
    c->pc = RC_ADDR(0x0000e3aeu);
    rc_step(c, m, 10);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E3B2:
    /* 0000e3b2   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e3b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3B6:
    /* 0000e3b6   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e3b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E3BA:
    /* 0000e3ba   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e3bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E3BE:
    /* 0000e3be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e3beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E3C0:
    /* 0000e3c0   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e3c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E3C4:
    /* 0000e3c4   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000e3c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3C8:
    /* 0000e3c8   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e3c8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E3CC:
    /* 0000e3cc   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e3ccu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3CE:
    /* 0000e3ce   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e3ceu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e3d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E3D2:
    /* 0000e3d2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e3d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E3D4:
    /* 0000e3d4   4  cmp.w #14,D0 */
    c->pc = RC_ADDR(0x0000e3d4u);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E3D8:
    /* 0000e3d8   4  blt 0000e468 */
    c->pc = RC_ADDR(0x0000e3d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_E468;

L_E3DC:
    /* 0000e3dc   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e3dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E3E0:
    /* 0000e3e0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e3e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E3E2:
    /* 0000e3e2   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e3e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E3E6:
    /* 0000e3e6   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000e3e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3EA:
    /* 0000e3ea   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e3eau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E3EE:
    /* 0000e3ee   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e3eeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E3F0:
    /* 0000e3f0   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e3f0u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e3f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E3F4:
    /* 0000e3f4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e3f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E3F6:
    /* 0000e3f6   4  cmp.w #14,D0 */
    c->pc = RC_ADDR(0x0000e3f6u);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E3FA:
    /* 0000e3fa   2  blt 0000e468 */
    c->pc = RC_ADDR(0x0000e3fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_E468;

L_E3FC:
    /* 0000e3fc   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e3fcu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E400:
    /* 0000e400   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e400u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_E408:
    /* 0000e408   2  blt 0000e3ba */
    c->pc = RC_ADDR(0x0000e408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E3BA; }

L_E40A:
    /* 0000e40a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e40au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E40E:
    /* 0000e40e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e40eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E410:
    /* 0000e410   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e410u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E414:
    /* 0000e414   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e414u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E41A:
    /* 0000e41a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e41au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E41E:
    /* 0000e41e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e41eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E420:
    /* 0000e420   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e420u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E424:
    /* 0000e424   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e424u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E42A:
    /* 0000e42a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e42au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E42E:
    /* 0000e42e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e42eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E430:
    /* 0000e430   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e430u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E434:
    /* 0000e434   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e434u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E43A:
    /* 0000e43a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e43au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E43E:
    /* 0000e43e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e43eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E440:
    /* 0000e440   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e440u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E444:
    /* 0000e444   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e444u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E448:
    /* 0000e448   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e448u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E44C:
    /* 0000e44c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e44cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E44E:
    /* 0000e44e   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e44eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E452:
    /* 0000e452   6  move.w #e,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e452u);
    rc_step(c, m, 18);
    t0 = 0x0000000eu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E458:
    /* 0000e458   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e458u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E45C:
    /* 0000e45c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e45cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E45E:
    /* 0000e45e   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000e45eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_E462:
    /* 0000e462   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e462u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E468:
    /* 0000e468   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000e468u);
    rc_step(c, m, 10);
    goto L_EB06;

L_E46C:
    /* 0000e46c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e46cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E470:
    /* 0000e470   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e470u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E472:
    /* 0000e472   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000e472u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_E476:
    /* 0000e476   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e476u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E47A:
    /* 0000e47a   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e47au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E47E:
    /* 0000e47e   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000e47eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E480:
    /* 0000e480   2  bne 0000e4c8 */
    c->pc = RC_ADDR(0x0000e480u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E4C8;

L_E482:
    /* 0000e482   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e482u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E486:
    /* 0000e486   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e486u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E488:
    /* 0000e488   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000e488u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_E48C:
    /* 0000e48c   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e48cu);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E492:
    /* 0000e492   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e492u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E496:
    /* 0000e496   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e496u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E498:
    /* 0000e498   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e498u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E49C:
    /* 0000e49c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e49cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E4A0:
    /* 0000e4a0   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e4a0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E4A4:
    /* 0000e4a4   4  cmp.w #2,D1 */
    c->pc = RC_ADDR(0x0000e4a4u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E4A8:
    /* 0000e4a8   2  bne 0000e4c8 */
    c->pc = RC_ADDR(0x0000e4a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_E4C8;

L_E4AA:
    /* 0000e4aa   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e4aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E4AE:
    /* 0000e4ae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e4aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E4B0:
    /* 0000e4b0   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e4b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E4B4:
    /* 0000e4b4   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e4b4u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E4BA:
    /* 0000e4ba   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e4bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E4BE:
    /* 0000e4be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e4beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E4C0:
    /* 0000e4c0   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e4c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E4C4:
    /* 0000e4c4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e4c4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E4C8:
    /* 0000e4c8   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000e4c8u);
    rc_step(c, m, 10);
    goto L_EB06;

L_E4CC:
    /* 0000e4cc   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e4ccu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E4D0:
    /* 0000e4d0   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e4d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E4D4:
    /* 0000e4d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e4d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E4D6:
    /* 0000e4d6   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000e4d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_E4DA:
    /* 0000e4da   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e4dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_E4DE:
    /* 0000e4de   2  beq 0000e548 */
    c->pc = RC_ADDR(0x0000e4deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E548;

L_E4E0:
    /* 0000e4e0   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e4e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E4E4:
    /* 0000e4e4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e4e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E4E6:
    /* 0000e4e6   4  lea (eee,A4),A0 */
    c->pc = RC_ADDR(0x0000e4e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeeeu);

L_E4EA:
    /* 0000e4ea   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000e4eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E4EE:
    /* 0000e4ee   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e4eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E4F0:
    /* 0000e4f0   4  lea (b04,A4),A1 */
    c->pc = RC_ADDR(0x0000e4f0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xb04u);

L_E4F4:
    /* 0000e4f4   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000e4f4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E4F8:
    /* 0000e4f8   4  sub.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e4f8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E4FC:
    /* 0000e4fc   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000e4fcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E4FE:
    /* 0000e4fe   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e4feu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e502u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E502:
    /* 0000e502   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e502u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E504:
    /* 0000e504   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000e504u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E508:
    /* 0000e508   2  bge 0000e548 */
    c->pc = RC_ADDR(0x0000e508u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E548;

L_E50A:
    /* 0000e50a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e50au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E50E:
    /* 0000e50e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e50eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E510:
    /* 0000e510   4  lea (ef6,A4),A0 */
    c->pc = RC_ADDR(0x0000e510u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xef6u);

L_E514:
    /* 0000e514   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000e514u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E518:
    /* 0000e518   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e518u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E51A:
    /* 0000e51a   4  lea (b14,A4),A1 */
    c->pc = RC_ADDR(0x0000e51au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xb14u);

L_E51E:
    /* 0000e51e   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000e51eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E522:
    /* 0000e522   4  sub.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e522u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E526:
    /* 0000e526   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000e526u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E528:
    /* 0000e528   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e528u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e52cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E52C:
    /* 0000e52c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e52cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E52E:
    /* 0000e52e   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000e52eu);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E532:
    /* 0000e532   2  bge 0000e548 */
    c->pc = RC_ADDR(0x0000e532u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E548;

L_E534:
    /* 0000e534   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e534u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E538:
    /* 0000e538   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e538u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E53A:
    /* 0000e53a   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e53au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E53E:
    /* 0000e53e   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e53eu);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E544:
    /* 0000e544   4  bra 0000e8e2 */
    c->pc = RC_ADDR(0x0000e544u);
    rc_step(c, m, 10);
    goto L_E8E2;

L_E548:
    /* 0000e548   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e548u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E54C:
    /* 0000e54c   8  cmpi.l #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e54cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_E554:
    /* 0000e554   4  blt 0000e4d0 */
    c->pc = RC_ADDR(0x0000e554u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E4D0; }

L_E558:
    /* 0000e558   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e558u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E55C:
    /* 0000e55c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e55cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E55E:
    /* 0000e55e   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e55eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E562:
    /* 0000e562   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e562u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E568:
    /* 0000e568   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000e568u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E56C:
    /* 0000e56c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e56cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e570u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E570:
    /* 0000e570   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e570u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E572:
    /* 0000e572   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000e572u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_E574:
    /* 0000e574   4  beq 0000e64a */
    c->pc = RC_ADDR(0x0000e574u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E64A;

L_E578:
    /* 0000e578   6  move.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e578u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E57E:
    /* 0000e57e   6  move.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e57eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E584:
    /* 0000e584   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e584u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E588:
    /* 0000e588   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e588u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E58A:
    /* 0000e58a   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e58au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E58E:
    /* 0000e58e   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000e58eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E592:
    /* 0000e592   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e592u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E596:
    /* 0000e596   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e596u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E598:
    /* 0000e598   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e598u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e59cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E59C:
    /* 0000e59c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e59cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E59E:
    /* 0000e59e   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x0000e59eu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E5A2:
    /* 0000e5a2   2  bge 0000e5b4 */
    c->pc = RC_ADDR(0x0000e5a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E5B4;

L_E5A4:
    /* 0000e5a4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e5a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E5A8:
    /* 0000e5a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e5a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E5AA:
    /* 0000e5aa   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e5aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E5AE:
    /* 0000e5ae   6  move.w (e76,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e5aeu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5B4:
    /* 0000e5b4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e5b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E5B8:
    /* 0000e5b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e5b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E5BA:
    /* 0000e5ba   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e5bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E5BE:
    /* 0000e5be   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000e5beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5C2:
    /* 0000e5c2   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e5c2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E5C6:
    /* 0000e5c6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e5c6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5C8:
    /* 0000e5c8   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e5c8u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e5ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E5CC:
    /* 0000e5cc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e5ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E5CE:
    /* 0000e5ce   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x0000e5ceu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E5D2:
    /* 0000e5d2   2  bge 0000e5e4 */
    c->pc = RC_ADDR(0x0000e5d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E5E4;

L_E5D4:
    /* 0000e5d4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e5d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E5D8:
    /* 0000e5d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e5d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E5DA:
    /* 0000e5da   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e5dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E5DE:
    /* 0000e5de   6  move.w (e78,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e5deu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5E4:
    /* 0000e5e4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e5e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E5E8:
    /* 0000e5e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e5e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E5EA:
    /* 0000e5ea   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e5eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E5EE:
    /* 0000e5ee   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000e5eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5F2:
    /* 0000e5f2   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e5f2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E5F6:
    /* 0000e5f6   2  ble 0000e5fe */
    c->pc = RC_ADDR(0x0000e5f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_E5FE;

L_E5F8:
    /* 0000e5f8   6  move.w #2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e5f8u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E5FE:
    /* 0000e5fe   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e5feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E602:
    /* 0000e602   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e602u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E604:
    /* 0000e604   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e604u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E608:
    /* 0000e608   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000e608u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E60C:
    /* 0000e60c   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e60cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E610:
    /* 0000e610   2  bge 0000e616 */
    c->pc = RC_ADDR(0x0000e610u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E616;

L_E612:
    /* 0000e612   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e612u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E616:
    /* 0000e616   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e616u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E61A:
    /* 0000e61a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e61au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E61C:
    /* 0000e61c   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e61cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E620:
    /* 0000e620   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000e620u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E624:
    /* 0000e624   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e624u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E628:
    /* 0000e628   2  ble 0000e630 */
    c->pc = RC_ADDR(0x0000e628u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_E630;

L_E62A:
    /* 0000e62a   6  move.w #2,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e62au);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E630:
    /* 0000e630   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e630u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E634:
    /* 0000e634   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e634u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E636:
    /* 0000e636   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e636u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E63A:
    /* 0000e63a   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000e63au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E63E:
    /* 0000e63e   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e63eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E642:
    /* 0000e642   2  bge 0000e648 */
    c->pc = RC_ADDR(0x0000e642u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E648;

L_E644:
    /* 0000e644   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e644u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E648:
    /* 0000e648   2  bra 0000e666 */
    c->pc = RC_ADDR(0x0000e648u);
    rc_step(c, m, 10);
    goto L_E666;

L_E64A:
    /* 0000e64a   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000e64au);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E64E:
    /* 0000e64e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e64eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e652u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E652:
    /* 0000e652   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e652u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E654:
    /* 0000e654   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e654u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E658:
    /* 0000e658   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000e658u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E65C:
    /* 0000e65c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e65cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e660u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E660:
    /* 0000e660   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e660u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E662:
    /* 0000e662   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e662u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E666:
    /* 0000e666   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000e666u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E66A:
    /* 0000e66a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e66au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E66C:
    /* 0000e66c   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0000e66cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_E66E:
    /* 0000e66e   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000e66eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E672:
    /* 0000e672   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e672u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E674:
    /* 0000e674   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e674u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E676:
    /* 0000e676   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000e676u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E678:
    /* 0000e678   4  lea (ffff9948,A4),A0 */
    c->pc = RC_ADDR(0x0000e678u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66b8u);

L_E67C:
    /* 0000e67c   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e67cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E680:
    /* 0000e680   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e680u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E684:
    /* 0000e684   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e684u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E686:
    /* 0000e686   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e686u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E68A:
    /* 0000e68a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e68au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E68E:
    /* 0000e68e   4  jsr (0000ed8a) */
    c->pc = RC_ADDR(0x0000e68eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000e692u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ed8au);
    return;

L_E692:
    /* 0000e692   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000e692u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E694:
    /* 0000e694   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000e694u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E698:
    /* 0000e698   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e698u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E69A:
    /* 0000e69a   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e69au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E69E:
    /* 0000e69e   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000e69eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6A2:
    /* 0000e6a2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e6a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E6A6:
    /* 0000e6a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e6a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E6A8:
    /* 0000e6a8   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e6a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E6AC:
    /* 0000e6ac   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e6acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6B0:
    /* 0000e6b0   2  asr.w #1,D1 */
    c->pc = RC_ADDR(0x0000e6b0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E6B2:
    /* 0000e6b2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e6b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E6B4:
    /* 0000e6b4   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e6b4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E6B8:
    /* 0000e6b8   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e6b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E6BC:
    /* 0000e6bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e6bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E6BE:
    /* 0000e6be   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e6beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E6C2:
    /* 0000e6c2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e6c2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6C6:
    /* 0000e6c6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e6c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E6C8:
    /* 0000e6c8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e6c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E6CA:
    /* 0000e6ca   4  lea (ffff99b8,A4),A0 */
    c->pc = RC_ADDR(0x0000e6cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6648u);

L_E6CE:
    /* 0000e6ce   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e6ceu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6D2:
    /* 0000e6d2   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000e6d2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E6D4:
    /* 0000e6d4   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000e6d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E6D8:
    /* 0000e6d8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e6d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E6DA:
    /* 0000e6da   4  lea (ffff9968,A4),A0 */
    c->pc = RC_ADDR(0x0000e6dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6698u);

L_E6DE:
    /* 0000e6de   4  muls.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e6deu);
    rc_step(c, m, 48);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 0, t0);

L_E6E2:
    /* 0000e6e2   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e6e2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6E6:
    /* 0000e6e6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e6e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E6EA:
    /* 0000e6ea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e6eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E6EC:
    /* 0000e6ec   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e6ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E6F0:
    /* 0000e6f0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e6f0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E6F4:
    /* 0000e6f4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e6f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E6F6:
    /* 0000e6f6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e6f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E6F8:
    /* 0000e6f8   4  lea (ffff99b8,A4),A0 */
    c->pc = RC_ADDR(0x0000e6f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6648u);

L_E6FC:
    /* 0000e6fc   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e6fcu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E700:
    /* 0000e700   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000e700u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E702:
    /* 0000e702   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000e702u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E706:
    /* 0000e706   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e706u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E708:
    /* 0000e708   4  lea (ffff9978,A4),A0 */
    c->pc = RC_ADDR(0x0000e708u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6688u);

L_E70C:
    /* 0000e70c   4  muls.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000e70cu);
    rc_step(c, m, 48);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 0, t0);

L_E710:
    /* 0000e710   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e710u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E714:
    /* 0000e714   8  cmpi.l #7,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000e714u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000007u);

L_E71C:
    /* 0000e71c   4  beq 0000e80a */
    c->pc = RC_ADDR(0x0000e71cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E80A;

L_E720:
    /* 0000e720   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e720u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E724:
    /* 0000e724   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000e724u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E726:
    /* 0000e726   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e726u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_E72A:
    /* 0000e72a   4  bra 0000e7fe */
    c->pc = RC_ADDR(0x0000e72au);
    rc_step(c, m, 10);
    goto L_E7FE;

L_E72E:
    /* 0000e72e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e72eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E732:
    /* 0000e732   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e732u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E734:
    /* 0000e734   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e734u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E738:
    /* 0000e738   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e738u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E73C:
    /* 0000e73c   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000e73cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E740:
    /* 0000e740   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e740u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E744:
    /* 0000e744   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e744u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E746:
    /* 0000e746   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e746u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E74A:
    /* 0000e74a   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e74au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E74E:
    /* 0000e74e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e74eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E750:
    /* 0000e750   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e750u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e754u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E754:
    /* 0000e754   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e754u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E756:
    /* 0000e756   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0000e756u);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E75A:
    /* 0000e75a   4  bge 0000e7fa */
    c->pc = RC_ADDR(0x0000e75au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E7FA;

L_E75E:
    /* 0000e75e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e75eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E762:
    /* 0000e762   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e762u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E764:
    /* 0000e764   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e764u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E768:
    /* 0000e768   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e768u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E76C:
    /* 0000e76c   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000e76cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E770:
    /* 0000e770   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e770u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E774:
    /* 0000e774   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e774u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E776:
    /* 0000e776   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e776u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E77A:
    /* 0000e77a   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e77au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E77E:
    /* 0000e77e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e77eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E780:
    /* 0000e780   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e780u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e784u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E784:
    /* 0000e784   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e784u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E786:
    /* 0000e786   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0000e786u);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E78A:
    /* 0000e78a   2  bge 0000e7fa */
    c->pc = RC_ADDR(0x0000e78au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_E7FA;

L_E78C:
    /* 0000e78c   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e78cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E790:
    /* 0000e790   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e790u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E792:
    /* 0000e792   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e792u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E796:
    /* 0000e796   6  cmpi.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e796u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_E79C:
    /* 0000e79c   2  beq 0000e7fa */
    c->pc = RC_ADDR(0x0000e79cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E7FA;

L_E79E:
    /* 0000e79e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e79eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7A2:
    /* 0000e7a2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e7a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E7A4:
    /* 0000e7a4   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e7a4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E7A8:
    /* 0000e7a8   6  cmpi.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e7a8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_E7AE:
    /* 0000e7ae   2  blt 0000e7d4 */
    c->pc = RC_ADDR(0x0000e7aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_E7D4;

L_E7B0:
    /* 0000e7b0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e7b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7B4:
    /* 0000e7b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e7b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E7B6:
    /* 0000e7b6   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e7b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E7BA:
    /* 0000e7ba   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000e7bau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E7C0:
    /* 0000e7c0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e7c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7C4:
    /* 0000e7c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e7c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E7C6:
    /* 0000e7c6   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e7c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E7CA:
    /* 0000e7ca   6  move.w (0,A0,D0.w),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000e7cau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E7D0:
    /* 0000e7d0   4  bra 0000e95a */
    c->pc = RC_ADDR(0x0000e7d0u);
    rc_step(c, m, 10);
    goto L_E95A;

L_E7D4:
    /* 0000e7d4   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000e7d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7D8:
    /* 0000e7d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e7d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E7DA:
    /* 0000e7da   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e7dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E7DE:
    /* 0000e7de   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000e7deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7E2:
    /* 0000e7e2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e7e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E7E4:
    /* 0000e7e4   4  lea (eac,A4),A1 */
    c->pc = RC_ADDR(0x0000e7e4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xeacu);

L_E7E8:
    /* 0000e7e8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000e7e8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E7EC:
    /* 0000e7ec   2  addq.w #2,D2 */
    c->pc = RC_ADDR(0x0000e7ecu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E7EE:
    /* 0000e7ee   4  and.w #f,D2 */
    c->pc = RC_ADDR(0x0000e7eeu);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_E7F2:
    /* 0000e7f2   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e7f2u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E7F6:
    /* 0000e7f6   4  bra 0000e910 */
    c->pc = RC_ADDR(0x0000e7f6u);
    rc_step(c, m, 10);
    goto L_E910;

L_E7FA:
    /* 0000e7fa   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e7fau);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E7FE:
    /* 0000e7fe   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000e7feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_E806:
    /* 0000e806   4  blt 0000e72e */
    c->pc = RC_ADDR(0x0000e806u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E72E; }

L_E80A:
    /* 0000e80a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e80au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E80E:
    /* 0000e80e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e80eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E810:
    /* 0000e810   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e810u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E814:
    /* 0000e814   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e814u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E818:
    /* 0000e818   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E81C:
    /* 0000e81c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e81cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E81E:
    /* 0000e81e   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e81eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E822:
    /* 0000e822   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e822u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E826:
    /* 0000e826   4  jsr (0000f4e0) */
    c->pc = RC_ADDR(0x0000e826u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000e82au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4e0u);
    return;

L_E82A:
    /* 0000e82a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000e82au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E82C:
    /* 0000e82c   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0000e82cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E830:
    /* 0000e830   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000e830u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E834:
    /* 0000e834   4  move.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0000e834u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E838:
    /* 0000e838   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000e838u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E83C:
    /* 0000e83c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e83cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E840:
    /* 0000e840   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e840u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E842:
    /* 0000e842   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e842u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E846:
    /* 0000e846   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e846u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E84A:
    /* 0000e84a   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000e84au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E84E:
    /* 0000e84e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e84eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E850:
    /* 0000e850   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e850u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E854:
    /* 0000e854   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e854u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E856:
    /* 0000e856   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e856u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E85A:
    /* 0000e85a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e85au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E85E:
    /* 0000e85e   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000e85eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E862:
    /* 0000e862   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e862u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E864:
    /* 0000e864   4  jsr (0000f4e0) */
    c->pc = RC_ADDR(0x0000e864u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000e868u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4e0u);
    return;

L_E868:
    /* 0000e868   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000e868u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E86A:
    /* 0000e86a   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0000e86au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E86E:
    /* 0000e86e   4  or.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0000e86eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_E872:
    /* 0000e872   2  beq 0000e8b4 */
    c->pc = RC_ADDR(0x0000e872u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E8B4;

L_E874:
    /* 0000e874   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0000e874u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E878:
    /* 0000e878   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000e878u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E87A:
    /* 0000e87a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000e87au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_E87C:
    /* 0000e87c   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0000e87cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_E87E:
    /* 0000e87e   4  move.w (110a,A4),D1 */
    c->pc = RC_ADDR(0x0000e87eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E882:
    /* 0000e882   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0000e882u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E884:
    /* 0000e884   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000e884u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_E886:
    /* 0000e886   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e886u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E888:
    /* 0000e888   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000e888u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E88A:
    /* 0000e88a   4  lea (ffff9948,A4),A0 */
    c->pc = RC_ADDR(0x0000e88au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66b8u);

L_E88E:
    /* 0000e88e   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e88eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E892:
    /* 0000e892   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e892u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E896:
    /* 0000e896   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e896u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E898:
    /* 0000e898   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e898u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E89C:
    /* 0000e89c   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000e89cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8A0:
    /* 0000e8a0   4  jsr (0000ed8a) */
    c->pc = RC_ADDR(0x0000e8a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000e8a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ed8au);
    return;

L_E8A4:
    /* 0000e8a4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000e8a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E8A6:
    /* 0000e8a6   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000e8a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8AA:
    /* 0000e8aa   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000e8aau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_E8AC:
    /* 0000e8ac   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000e8acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_E8B0:
    /* 0000e8b0   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000e8b0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8B4:
    /* 0000e8b4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e8b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8B8:
    /* 0000e8b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e8b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E8BA:
    /* 0000e8ba   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e8bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E8BE:
    /* 0000e8be   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000e8beu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_E8C0:
    /* 0000e8c0   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000e8c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8C4:
    /* 0000e8c4   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000e8c4u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E8C6:
    /* 0000e8c6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e8c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8CA:
    /* 0000e8ca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e8cau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E8CC:
    /* 0000e8cc   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e8ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E8D0:
    /* 0000e8d0   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000e8d0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_E8D2:
    /* 0000e8d2   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000e8d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8D6:
    /* 0000e8d6   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000e8d6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E8D8:
    /* 0000e8d8   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000e8d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E8DC:
    /* 0000e8dc   4  or.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000e8dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_E8E0:
    /* 0000e8e0   2  beq 0000e910 */
    c->pc = RC_ADDR(0x0000e8e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_E910;

L_E8E2:
    /* 0000e8e2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e8e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8E6:
    /* 0000e8e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e8e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E8E8:
    /* 0000e8e8   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e8e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E8EC:
    /* 0000e8ec   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e8ecu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E8F0:
    /* 0000e8f0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e8f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E8F4:
    /* 0000e8f4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e8f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E8F6:
    /* 0000e8f6   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e8f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E8FA:
    /* 0000e8fa   6  cmpi.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e8fau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_E900:
    /* 0000e900   2  blt 0000e910 */
    c->pc = RC_ADDR(0x0000e900u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_E910;

L_E902:
    /* 0000e902   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e902u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E906:
    /* 0000e906   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e906u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E908:
    /* 0000e908   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e908u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E90C:
    /* 0000e90c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e90cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E910:
    /* 0000e910   6  cmpi.w #3,(ee2,A4) */
    c->pc = RC_ADDR(0x0000e910u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_E916:
    /* 0000e916   4  ble 0000e9b0 */
    c->pc = RC_ADDR(0x0000e916u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_E9B0;

L_E91A:
    /* 0000e91a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e91au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E91E:
    /* 0000e91e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e91eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E920:
    /* 0000e920   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000e920u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_E924:
    /* 0000e924   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x0000e924u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E928:
    /* 0000e928   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e928u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E92C:
    /* 0000e92c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e92cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E92E:
    /* 0000e92e   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e92eu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e932u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E932:
    /* 0000e932   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e932u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E934:
    /* 0000e934   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0000e934u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E938:
    /* 0000e938   2  bgt 0000e9b0 */
    c->pc = RC_ADDR(0x0000e938u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_E9B0;

L_E93A:
    /* 0000e93a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e93au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E93E:
    /* 0000e93e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e93eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E940:
    /* 0000e940   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000e940u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_E944:
    /* 0000e944   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e944u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E948:
    /* 0000e948   4  sub.w (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x0000e948u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E94C:
    /* 0000e94c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000e94cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E94E:
    /* 0000e94e   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000e94eu);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000e952u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_E952:
    /* 0000e952   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e952u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E954:
    /* 0000e954   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0000e954u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E958:
    /* 0000e958   2  bgt 0000e9b0 */
    c->pc = RC_ADDR(0x0000e958u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_E9B0;

L_E95A:
    /* 0000e95a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e95au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E95E:
    /* 0000e95e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e95eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E960:
    /* 0000e960   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000e960u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_E964:
    /* 0000e964   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e964u);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E96A:
    /* 0000e96a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e96au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E96E:
    /* 0000e96e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e96eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E970:
    /* 0000e970   4  lea (e8c,A4),A0 */
    c->pc = RC_ADDR(0x0000e970u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe8cu);

L_E974:
    /* 0000e974   6  move.w (fffffff2,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e974u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E97A:
    /* 0000e97a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e97au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E97E:
    /* 0000e97e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e97eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E980:
    /* 0000e980   4  lea (e9c,A4),A0 */
    c->pc = RC_ADDR(0x0000e980u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe9cu);

L_E984:
    /* 0000e984   6  move.w (fffffff0,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e984u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E98A:
    /* 0000e98a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e98au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E98E:
    /* 0000e98e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e98eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E990:
    /* 0000e990   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000e990u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_E994:
    /* 0000e994   6  move.w #14,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e994u);
    rc_step(c, m, 18);
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E99A:
    /* 0000e99a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e99au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E99E:
    /* 0000e99e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e99eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E9A0:
    /* 0000e9a0   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e9a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E9A4:
    /* 0000e9a4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e9a4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E9A8:
    /* 0000e9a8   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000e9a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E9AC:
    /* 0000e9ac   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000e9acu);
    rc_step(c, m, 10);
    goto L_EB06;

L_E9B0:
    /* 0000e9b0   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000e9b0u);
    rc_step(c, m, 10);
    goto L_EB06;

L_E9B4:
    /* 0000e9b4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e9b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9B8:
    /* 0000e9b8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e9b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E9BA:
    /* 0000e9ba   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e9bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E9BE:
    /* 0000e9be   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000e9beu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_E9C0:
    /* 0000e9c0   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000e9c0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9C2:
    /* 0000e9c2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000e9c2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_E9C6:
    /* 0000e9c6   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000e9c6u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000e9cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_E9CA:
    /* 0000e9ca   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000e9cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_E9CC:
    /* 0000e9cc   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x0000e9ccu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E9CE:
    /* 0000e9ce   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x0000e9ceu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_E9D0:
    /* 0000e9d0   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000e9d0u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E9D2:
    /* 0000e9d2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e9d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9D6:
    /* 0000e9d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e9d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E9D8:
    /* 0000e9d8   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e9d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E9DC:
    /* 0000e9dc   6  cmpi.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e9dcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_E9E2:
    /* 0000e9e2   2  blt 0000e9f2 */
    c->pc = RC_ADDR(0x0000e9e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_E9F2;

L_E9E4:
    /* 0000e9e4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e9e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9E8:
    /* 0000e9e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e9e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E9EA:
    /* 0000e9ea   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000e9eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_E9EE:
    /* 0000e9ee   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000e9eeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E9F2:
    /* 0000e9f2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000e9f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E9F6:
    /* 0000e9f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000e9f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_E9F8:
    /* 0000e9f8   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000e9f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_E9FC:
    /* 0000e9fc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000e9fcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA00:
    /* 0000ea00   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea00u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EA04:
    /* 0000ea04   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000ea04u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_EA06:
    /* 0000ea06   2  bne 0000ea28 */
    c->pc = RC_ADDR(0x0000ea06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_EA28;

L_EA08:
    /* 0000ea08   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA0C:
    /* 0000ea0c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea0cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA0E:
    /* 0000ea0e   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000ea0eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EA12:
    /* 0000ea12   6  move.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea12u);
    rc_step(c, m, 18);
    t0 = 0x00000005u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA18:
    /* 0000ea18   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA1C:
    /* 0000ea1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA1E:
    /* 0000ea1e   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000ea1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EA22:
    /* 0000ea22   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea22u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA28:
    /* 0000ea28   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000ea28u);
    rc_step(c, m, 10);
    goto L_EB06;

L_EA2C:
    /* 0000ea2c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA30:
    /* 0000ea30   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea30u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA32:
    /* 0000ea32   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000ea32u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EA36:
    /* 0000ea36   6  cmpi.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea36u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_EA3C:
    /* 0000ea3c   2  bne 0000ea50 */
    c->pc = RC_ADDR(0x0000ea3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_EA50;

L_EA3E:
    /* 0000ea3e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA42:
    /* 0000ea42   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea42u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA44:
    /* 0000ea44   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000ea44u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EA48:
    /* 0000ea48   6  move.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea48u);
    rc_step(c, m, 18);
    t0 = 0x00000006u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA4E:
    /* 0000ea4e   2  bra 0000ea5e */
    c->pc = RC_ADDR(0x0000ea4eu);
    rc_step(c, m, 10);
    goto L_EA5E;

L_EA50:
    /* 0000ea50   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea50u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA54:
    /* 0000ea54   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea54u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA56:
    /* 0000ea56   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000ea56u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EA5A:
    /* 0000ea5a   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea5au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EA5E:
    /* 0000ea5e   4  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000ea5eu);
    rc_step(c, m, 10);
    goto L_EB06;

L_EA62:
    /* 0000ea62   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA66:
    /* 0000ea66   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea66u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA68:
    /* 0000ea68   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000ea68u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EA6C:
    /* 0000ea6c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea6cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_EA70:
    /* 0000ea70   2  bne 0000ea84 */
    c->pc = RC_ADDR(0x0000ea70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_EA84;

L_EA72:
    /* 0000ea72   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA76:
    /* 0000ea76   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea76u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA78:
    /* 0000ea78   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000ea78u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EA7C:
    /* 0000ea7c   6  move.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea7cu);
    rc_step(c, m, 18);
    t0 = 0x00000007u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EA82:
    /* 0000ea82   2  bra 0000ea92 */
    c->pc = RC_ADDR(0x0000ea82u);
    rc_step(c, m, 10);
    goto L_EA92;

L_EA84:
    /* 0000ea84   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA88:
    /* 0000ea88   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA8A:
    /* 0000ea8a   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000ea8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_EA8E:
    /* 0000ea8e   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ea8eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EA92:
    /* 0000ea92   2  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000ea92u);
    rc_step(c, m, 10);
    goto L_EB06;

L_EA94:
    /* 0000ea94   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ea94u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EA98:
    /* 0000ea98   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ea98u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EA9A:
    /* 0000ea9a   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000ea9au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_EA9E:
    /* 0000ea9e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ea9eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EAA2:
    /* 0000eaa2   4  sub.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000eaa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_EAA6:
    /* 0000eaa6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000eaa6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EAA8:
    /* 0000eaa8   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000eaa8u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000eaacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_EAAC:
    /* 0000eaac   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000eaacu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EAAE:
    /* 0000eaae   4  cmp.w #190,D0 */
    c->pc = RC_ADDR(0x0000eaaeu);
    rc_step(c, m, 8);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EAB2:
    /* 0000eab2   2  bgt 0000ead4 */
    c->pc = RC_ADDR(0x0000eab2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_EAD4;

L_EAB4:
    /* 0000eab4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000eab4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAB8:
    /* 0000eab8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000eab8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EABA:
    /* 0000eaba   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000eabau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_EABE:
    /* 0000eabe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000eabeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EAC2:
    /* 0000eac2   4  sub.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000eac2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_EAC6:
    /* 0000eac6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000eac6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EAC8:
    /* 0000eac8   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000eac8u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000eaccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_EACC:
    /* 0000eacc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000eaccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EACE:
    /* 0000eace   4  cmp.w #12c,D0 */
    c->pc = RC_ADDR(0x0000eaceu);
    rc_step(c, m, 8);
    t0 = 0x0000012cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EAD2:
    /* 0000ead2   2  ble 0000eae2 */
    c->pc = RC_ADDR(0x0000ead2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_EAE2;

L_EAD4:
    /* 0000ead4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ead4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EAD8:
    /* 0000ead8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ead8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EADA:
    /* 0000eada   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000eadau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_EADE:
    /* 0000eade   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000eadeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EAE2:
    /* 0000eae2   2  bra 0000eb06 */
    c->pc = RC_ADDR(0x0000eae2u);
    rc_step(c, m, 10);
    goto L_EB06;

L_EAF4:
    /* 0000eaf4   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0000eaf4u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_EAFA:
    /* 0000eafa   2  bcc 0000eb06 */
    c->pc = RC_ADDR(0x0000eafau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_EB06;

L_EAFC:
    /* 0000eafc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000eafcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EAFE:
    /* 0000eafe   4  move.w (0000eae4),D0 */
    c->pc = RC_ADDR(0x0000eafeu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000eae4u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB02:
    /* 0000eb02   4  jmp (0000eb04) */
    c->pc = RC_ADDR(0x0000eb02u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000eb04u) + t4);
    c->pc = t3;
    return;

L_EB06:
    /* 0000eb06   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb06u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_EB0A:
    /* 0000eb0a   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb0au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_EB12:
    /* 0000eb12   4  blt 0000e310 */
    c->pc = RC_ADDR(0x0000eb12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_E310; }

L_EB16:
    /* 0000eb16   2  unlk A5 */
    c->pc = RC_ADDR(0x0000eb16u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EB18:
    /* 0000eb18   2  rts */
    c->pc = RC_ADDR(0x0000eb18u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
