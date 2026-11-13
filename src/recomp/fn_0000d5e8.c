/* fn_0000d5e8 - 1332 byte(s), 396 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d5e8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d5e8u): goto L_D5E8;
    case RC_ADDR(0x0000d5ecu): goto L_D5EC;
    case RC_ADDR(0x0000d5f2u): goto L_D5F2;
    case RC_ADDR(0x0000d5f6u): goto L_D5F6;
    case RC_ADDR(0x0000d5fau): goto L_D5FA;
    case RC_ADDR(0x0000d5fcu): goto L_D5FC;
    case RC_ADDR(0x0000d600u): goto L_D600;
    case RC_ADDR(0x0000d602u): goto L_D602;
    case RC_ADDR(0x0000d606u): goto L_D606;
    case RC_ADDR(0x0000d608u): goto L_D608;
    case RC_ADDR(0x0000d60au): goto L_D60A;
    case RC_ADDR(0x0000d60eu): goto L_D60E;
    case RC_ADDR(0x0000d612u): goto L_D612;
    case RC_ADDR(0x0000d614u): goto L_D614;
    case RC_ADDR(0x0000d618u): goto L_D618;
    case RC_ADDR(0x0000d61cu): goto L_D61C;
    case RC_ADDR(0x0000d620u): goto L_D620;
    case RC_ADDR(0x0000d622u): goto L_D622;
    case RC_ADDR(0x0000d626u): goto L_D626;
    case RC_ADDR(0x0000d628u): goto L_D628;
    case RC_ADDR(0x0000d62cu): goto L_D62C;
    case RC_ADDR(0x0000d62eu): goto L_D62E;
    case RC_ADDR(0x0000d632u): goto L_D632;
    case RC_ADDR(0x0000d634u): goto L_D634;
    case RC_ADDR(0x0000d638u): goto L_D638;
    case RC_ADDR(0x0000d63cu): goto L_D63C;
    case RC_ADDR(0x0000d63eu): goto L_D63E;
    case RC_ADDR(0x0000d642u): goto L_D642;
    case RC_ADDR(0x0000d644u): goto L_D644;
    case RC_ADDR(0x0000d648u): goto L_D648;
    case RC_ADDR(0x0000d64au): goto L_D64A;
    case RC_ADDR(0x0000d64eu): goto L_D64E;
    case RC_ADDR(0x0000d650u): goto L_D650;
    case RC_ADDR(0x0000d654u): goto L_D654;
    case RC_ADDR(0x0000d656u): goto L_D656;
    case RC_ADDR(0x0000d658u): goto L_D658;
    case RC_ADDR(0x0000d65au): goto L_D65A;
    case RC_ADDR(0x0000d65cu): goto L_D65C;
    case RC_ADDR(0x0000d65eu): goto L_D65E;
    case RC_ADDR(0x0000d660u): goto L_D660;
    case RC_ADDR(0x0000d664u): goto L_D664;
    case RC_ADDR(0x0000d66cu): goto L_D66C;
    case RC_ADDR(0x0000d66eu): goto L_D66E;
    case RC_ADDR(0x0000d672u): goto L_D672;
    case RC_ADDR(0x0000d676u): goto L_D676;
    case RC_ADDR(0x0000d678u): goto L_D678;
    case RC_ADDR(0x0000d67cu): goto L_D67C;
    case RC_ADDR(0x0000d680u): goto L_D680;
    case RC_ADDR(0x0000d684u): goto L_D684;
    case RC_ADDR(0x0000d688u): goto L_D688;
    case RC_ADDR(0x0000d68au): goto L_D68A;
    case RC_ADDR(0x0000d68eu): goto L_D68E;
    case RC_ADDR(0x0000d692u): goto L_D692;
    case RC_ADDR(0x0000d696u): goto L_D696;
    case RC_ADDR(0x0000d69au): goto L_D69A;
    case RC_ADDR(0x0000d69eu): goto L_D69E;
    case RC_ADDR(0x0000d6a0u): goto L_D6A0;
    case RC_ADDR(0x0000d6a4u): goto L_D6A4;
    case RC_ADDR(0x0000d6a8u): goto L_D6A8;
    case RC_ADDR(0x0000d6acu): goto L_D6AC;
    case RC_ADDR(0x0000d6b0u): goto L_D6B0;
    case RC_ADDR(0x0000d6b4u): goto L_D6B4;
    case RC_ADDR(0x0000d6b6u): goto L_D6B6;
    case RC_ADDR(0x0000d6bau): goto L_D6BA;
    case RC_ADDR(0x0000d6bcu): goto L_D6BC;
    case RC_ADDR(0x0000d6c0u): goto L_D6C0;
    case RC_ADDR(0x0000d6c2u): goto L_D6C2;
    case RC_ADDR(0x0000d6c6u): goto L_D6C6;
    case RC_ADDR(0x0000d6cau): goto L_D6CA;
    case RC_ADDR(0x0000d6ccu): goto L_D6CC;
    case RC_ADDR(0x0000d6ceu): goto L_D6CE;
    case RC_ADDR(0x0000d6d2u): goto L_D6D2;
    case RC_ADDR(0x0000d6d6u): goto L_D6D6;
    case RC_ADDR(0x0000d6dau): goto L_D6DA;
    case RC_ADDR(0x0000d6deu): goto L_D6DE;
    case RC_ADDR(0x0000d6e2u): goto L_D6E2;
    case RC_ADDR(0x0000d6e4u): goto L_D6E4;
    case RC_ADDR(0x0000d6e6u): goto L_D6E6;
    case RC_ADDR(0x0000d6eau): goto L_D6EA;
    case RC_ADDR(0x0000d6ecu): goto L_D6EC;
    case RC_ADDR(0x0000d6f0u): goto L_D6F0;
    case RC_ADDR(0x0000d6f4u): goto L_D6F4;
    case RC_ADDR(0x0000d6f6u): goto L_D6F6;
    case RC_ADDR(0x0000d6f8u): goto L_D6F8;
    case RC_ADDR(0x0000d6fcu): goto L_D6FC;
    case RC_ADDR(0x0000d700u): goto L_D700;
    case RC_ADDR(0x0000d704u): goto L_D704;
    case RC_ADDR(0x0000d708u): goto L_D708;
    case RC_ADDR(0x0000d70cu): goto L_D70C;
    case RC_ADDR(0x0000d70eu): goto L_D70E;
    case RC_ADDR(0x0000d712u): goto L_D712;
    case RC_ADDR(0x0000d71au): goto L_D71A;
    case RC_ADDR(0x0000d71eu): goto L_D71E;
    case RC_ADDR(0x0000d722u): goto L_D722;
    case RC_ADDR(0x0000d726u): goto L_D726;
    case RC_ADDR(0x0000d728u): goto L_D728;
    case RC_ADDR(0x0000d72au): goto L_D72A;
    case RC_ADDR(0x0000d72eu): goto L_D72E;
    case RC_ADDR(0x0000d730u): goto L_D730;
    case RC_ADDR(0x0000d732u): goto L_D732;
    case RC_ADDR(0x0000d736u): goto L_D736;
    case RC_ADDR(0x0000d73au): goto L_D73A;
    case RC_ADDR(0x0000d73eu): goto L_D73E;
    case RC_ADDR(0x0000d740u): goto L_D740;
    case RC_ADDR(0x0000d744u): goto L_D744;
    case RC_ADDR(0x0000d746u): goto L_D746;
    case RC_ADDR(0x0000d74au): goto L_D74A;
    case RC_ADDR(0x0000d74cu): goto L_D74C;
    case RC_ADDR(0x0000d750u): goto L_D750;
    case RC_ADDR(0x0000d752u): goto L_D752;
    case RC_ADDR(0x0000d756u): goto L_D756;
    case RC_ADDR(0x0000d758u): goto L_D758;
    case RC_ADDR(0x0000d75au): goto L_D75A;
    case RC_ADDR(0x0000d75cu): goto L_D75C;
    case RC_ADDR(0x0000d75eu): goto L_D75E;
    case RC_ADDR(0x0000d760u): goto L_D760;
    case RC_ADDR(0x0000d762u): goto L_D762;
    case RC_ADDR(0x0000d764u): goto L_D764;
    case RC_ADDR(0x0000d766u): goto L_D766;
    case RC_ADDR(0x0000d76au): goto L_D76A;
    case RC_ADDR(0x0000d76eu): goto L_D76E;
    case RC_ADDR(0x0000d772u): goto L_D772;
    case RC_ADDR(0x0000d774u): goto L_D774;
    case RC_ADDR(0x0000d778u): goto L_D778;
    case RC_ADDR(0x0000d77au): goto L_D77A;
    case RC_ADDR(0x0000d77eu): goto L_D77E;
    case RC_ADDR(0x0000d780u): goto L_D780;
    case RC_ADDR(0x0000d784u): goto L_D784;
    case RC_ADDR(0x0000d788u): goto L_D788;
    case RC_ADDR(0x0000d78cu): goto L_D78C;
    case RC_ADDR(0x0000d78eu): goto L_D78E;
    case RC_ADDR(0x0000d792u): goto L_D792;
    case RC_ADDR(0x0000d796u): goto L_D796;
    case RC_ADDR(0x0000d79au): goto L_D79A;
    case RC_ADDR(0x0000d79cu): goto L_D79C;
    case RC_ADDR(0x0000d79eu): goto L_D79E;
    case RC_ADDR(0x0000d7a2u): goto L_D7A2;
    case RC_ADDR(0x0000d7a8u): goto L_D7A8;
    case RC_ADDR(0x0000d7acu): goto L_D7AC;
    case RC_ADDR(0x0000d7b0u): goto L_D7B0;
    case RC_ADDR(0x0000d7b2u): goto L_D7B2;
    case RC_ADDR(0x0000d7b6u): goto L_D7B6;
    case RC_ADDR(0x0000d7bau): goto L_D7BA;
    case RC_ADDR(0x0000d7bcu): goto L_D7BC;
    case RC_ADDR(0x0000d7beu): goto L_D7BE;
    case RC_ADDR(0x0000d7c2u): goto L_D7C2;
    case RC_ADDR(0x0000d7c6u): goto L_D7C6;
    case RC_ADDR(0x0000d7cau): goto L_D7CA;
    case RC_ADDR(0x0000d7ccu): goto L_D7CC;
    case RC_ADDR(0x0000d7d0u): goto L_D7D0;
    case RC_ADDR(0x0000d7d4u): goto L_D7D4;
    case RC_ADDR(0x0000d7d6u): goto L_D7D6;
    case RC_ADDR(0x0000d7d8u): goto L_D7D8;
    case RC_ADDR(0x0000d7dcu): goto L_D7DC;
    case RC_ADDR(0x0000d7e0u): goto L_D7E0;
    case RC_ADDR(0x0000d7e2u): goto L_D7E2;
    case RC_ADDR(0x0000d7e6u): goto L_D7E6;
    case RC_ADDR(0x0000d7ecu): goto L_D7EC;
    case RC_ADDR(0x0000d7f0u): goto L_D7F0;
    case RC_ADDR(0x0000d7f2u): goto L_D7F2;
    case RC_ADDR(0x0000d7f6u): goto L_D7F6;
    case RC_ADDR(0x0000d7fau): goto L_D7FA;
    case RC_ADDR(0x0000d7fcu): goto L_D7FC;
    case RC_ADDR(0x0000d7feu): goto L_D7FE;
    case RC_ADDR(0x0000d802u): goto L_D802;
    case RC_ADDR(0x0000d806u): goto L_D806;
    case RC_ADDR(0x0000d80au): goto L_D80A;
    case RC_ADDR(0x0000d80cu): goto L_D80C;
    case RC_ADDR(0x0000d810u): goto L_D810;
    case RC_ADDR(0x0000d814u): goto L_D814;
    case RC_ADDR(0x0000d816u): goto L_D816;
    case RC_ADDR(0x0000d818u): goto L_D818;
    case RC_ADDR(0x0000d81cu): goto L_D81C;
    case RC_ADDR(0x0000d820u): goto L_D820;
    case RC_ADDR(0x0000d822u): goto L_D822;
    case RC_ADDR(0x0000d826u): goto L_D826;
    case RC_ADDR(0x0000d82cu): goto L_D82C;
    case RC_ADDR(0x0000d82eu): goto L_D82E;
    case RC_ADDR(0x0000d832u): goto L_D832;
    case RC_ADDR(0x0000d834u): goto L_D834;
    case RC_ADDR(0x0000d838u): goto L_D838;
    case RC_ADDR(0x0000d83cu): goto L_D83C;
    case RC_ADDR(0x0000d83eu): goto L_D83E;
    case RC_ADDR(0x0000d840u): goto L_D840;
    case RC_ADDR(0x0000d844u): goto L_D844;
    case RC_ADDR(0x0000d848u): goto L_D848;
    case RC_ADDR(0x0000d84au): goto L_D84A;
    case RC_ADDR(0x0000d84eu): goto L_D84E;
    case RC_ADDR(0x0000d854u): goto L_D854;
    case RC_ADDR(0x0000d856u): goto L_D856;
    case RC_ADDR(0x0000d868u): goto L_D868;
    case RC_ADDR(0x0000d86eu): goto L_D86E;
    case RC_ADDR(0x0000d870u): goto L_D870;
    case RC_ADDR(0x0000d872u): goto L_D872;
    case RC_ADDR(0x0000d876u): goto L_D876;
    case RC_ADDR(0x0000d87au): goto L_D87A;
    case RC_ADDR(0x0000d87eu): goto L_D87E;
    case RC_ADDR(0x0000d880u): goto L_D880;
    case RC_ADDR(0x0000d884u): goto L_D884;
    case RC_ADDR(0x0000d886u): goto L_D886;
    case RC_ADDR(0x0000d88au): goto L_D88A;
    case RC_ADDR(0x0000d88eu): goto L_D88E;
    case RC_ADDR(0x0000d890u): goto L_D890;
    case RC_ADDR(0x0000d894u): goto L_D894;
    case RC_ADDR(0x0000d896u): goto L_D896;
    case RC_ADDR(0x0000d89au): goto L_D89A;
    case RC_ADDR(0x0000d89cu): goto L_D89C;
    case RC_ADDR(0x0000d8a0u): goto L_D8A0;
    case RC_ADDR(0x0000d8a4u): goto L_D8A4;
    case RC_ADDR(0x0000d8a8u): goto L_D8A8;
    case RC_ADDR(0x0000d8aau): goto L_D8AA;
    case RC_ADDR(0x0000d8aeu): goto L_D8AE;
    case RC_ADDR(0x0000d8b2u): goto L_D8B2;
    case RC_ADDR(0x0000d8b6u): goto L_D8B6;
    case RC_ADDR(0x0000d8b8u): goto L_D8B8;
    case RC_ADDR(0x0000d8bcu): goto L_D8BC;
    case RC_ADDR(0x0000d8beu): goto L_D8BE;
    case RC_ADDR(0x0000d8c2u): goto L_D8C2;
    case RC_ADDR(0x0000d8c6u): goto L_D8C6;
    case RC_ADDR(0x0000d8cau): goto L_D8CA;
    case RC_ADDR(0x0000d8ccu): goto L_D8CC;
    case RC_ADDR(0x0000d8d0u): goto L_D8D0;
    case RC_ADDR(0x0000d8d2u): goto L_D8D2;
    case RC_ADDR(0x0000d8d6u): goto L_D8D6;
    case RC_ADDR(0x0000d8dau): goto L_D8DA;
    case RC_ADDR(0x0000d8deu): goto L_D8DE;
    case RC_ADDR(0x0000d8e2u): goto L_D8E2;
    case RC_ADDR(0x0000d8e4u): goto L_D8E4;
    case RC_ADDR(0x0000d8e6u): goto L_D8E6;
    case RC_ADDR(0x0000d8eau): goto L_D8EA;
    case RC_ADDR(0x0000d8eeu): goto L_D8EE;
    case RC_ADDR(0x0000d8f2u): goto L_D8F2;
    case RC_ADDR(0x0000d8f6u): goto L_D8F6;
    case RC_ADDR(0x0000d8f8u): goto L_D8F8;
    case RC_ADDR(0x0000d8fcu): goto L_D8FC;
    case RC_ADDR(0x0000d904u): goto L_D904;
    case RC_ADDR(0x0000d908u): goto L_D908;
    case RC_ADDR(0x0000d90cu): goto L_D90C;
    case RC_ADDR(0x0000d90eu): goto L_D90E;
    case RC_ADDR(0x0000d912u): goto L_D912;
    case RC_ADDR(0x0000d914u): goto L_D914;
    case RC_ADDR(0x0000d918u): goto L_D918;
    case RC_ADDR(0x0000d91au): goto L_D91A;
    case RC_ADDR(0x0000d91cu): goto L_D91C;
    case RC_ADDR(0x0000d920u): goto L_D920;
    case RC_ADDR(0x0000d924u): goto L_D924;
    case RC_ADDR(0x0000d928u): goto L_D928;
    case RC_ADDR(0x0000d92au): goto L_D92A;
    case RC_ADDR(0x0000d92cu): goto L_D92C;
    case RC_ADDR(0x0000d930u): goto L_D930;
    case RC_ADDR(0x0000d934u): goto L_D934;
    case RC_ADDR(0x0000d938u): goto L_D938;
    case RC_ADDR(0x0000d93cu): goto L_D93C;
    case RC_ADDR(0x0000d93eu): goto L_D93E;
    case RC_ADDR(0x0000d942u): goto L_D942;
    case RC_ADDR(0x0000d944u): goto L_D944;
    case RC_ADDR(0x0000d946u): goto L_D946;
    case RC_ADDR(0x0000d94au): goto L_D94A;
    case RC_ADDR(0x0000d94eu): goto L_D94E;
    case RC_ADDR(0x0000d952u): goto L_D952;
    case RC_ADDR(0x0000d956u): goto L_D956;
    case RC_ADDR(0x0000d958u): goto L_D958;
    case RC_ADDR(0x0000d95cu): goto L_D95C;
    case RC_ADDR(0x0000d95eu): goto L_D95E;
    case RC_ADDR(0x0000d962u): goto L_D962;
    case RC_ADDR(0x0000d966u): goto L_D966;
    case RC_ADDR(0x0000d96au): goto L_D96A;
    case RC_ADDR(0x0000d96cu): goto L_D96C;
    case RC_ADDR(0x0000d970u): goto L_D970;
    case RC_ADDR(0x0000d972u): goto L_D972;
    case RC_ADDR(0x0000d976u): goto L_D976;
    case RC_ADDR(0x0000d978u): goto L_D978;
    case RC_ADDR(0x0000d97cu): goto L_D97C;
    case RC_ADDR(0x0000d980u): goto L_D980;
    case RC_ADDR(0x0000d982u): goto L_D982;
    case RC_ADDR(0x0000d986u): goto L_D986;
    case RC_ADDR(0x0000d98au): goto L_D98A;
    case RC_ADDR(0x0000d98eu): goto L_D98E;
    case RC_ADDR(0x0000d992u): goto L_D992;
    case RC_ADDR(0x0000d994u): goto L_D994;
    case RC_ADDR(0x0000d996u): goto L_D996;
    case RC_ADDR(0x0000d99au): goto L_D99A;
    case RC_ADDR(0x0000d9a0u): goto L_D9A0;
    case RC_ADDR(0x0000d9a4u): goto L_D9A4;
    case RC_ADDR(0x0000d9a6u): goto L_D9A6;
    case RC_ADDR(0x0000d9aau): goto L_D9AA;
    case RC_ADDR(0x0000d9b0u): goto L_D9B0;
    case RC_ADDR(0x0000d9b4u): goto L_D9B4;
    case RC_ADDR(0x0000d9b6u): goto L_D9B6;
    case RC_ADDR(0x0000d9bau): goto L_D9BA;
    case RC_ADDR(0x0000d9c0u): goto L_D9C0;
    case RC_ADDR(0x0000d9c2u): goto L_D9C2;
    case RC_ADDR(0x0000d9c6u): goto L_D9C6;
    case RC_ADDR(0x0000d9c8u): goto L_D9C8;
    case RC_ADDR(0x0000d9ccu): goto L_D9CC;
    case RC_ADDR(0x0000d9d0u): goto L_D9D0;
    case RC_ADDR(0x0000d9d4u): goto L_D9D4;
    case RC_ADDR(0x0000d9d6u): goto L_D9D6;
    case RC_ADDR(0x0000d9d8u): goto L_D9D8;
    case RC_ADDR(0x0000d9dcu): goto L_D9DC;
    case RC_ADDR(0x0000d9e2u): goto L_D9E2;
    case RC_ADDR(0x0000d9e6u): goto L_D9E6;
    case RC_ADDR(0x0000d9e8u): goto L_D9E8;
    case RC_ADDR(0x0000d9ecu): goto L_D9EC;
    case RC_ADDR(0x0000d9f2u): goto L_D9F2;
    case RC_ADDR(0x0000d9f6u): goto L_D9F6;
    case RC_ADDR(0x0000d9f8u): goto L_D9F8;
    case RC_ADDR(0x0000d9fcu): goto L_D9FC;
    case RC_ADDR(0x0000da02u): goto L_DA02;
    case RC_ADDR(0x0000da04u): goto L_DA04;
    case RC_ADDR(0x0000da06u): goto L_DA06;
    case RC_ADDR(0x0000da0au): goto L_DA0A;
    case RC_ADDR(0x0000da0cu): goto L_DA0C;
    case RC_ADDR(0x0000da0eu): goto L_DA0E;
    case RC_ADDR(0x0000da10u): goto L_DA10;
    case RC_ADDR(0x0000da12u): goto L_DA12;
    case RC_ADDR(0x0000da16u): goto L_DA16;
    case RC_ADDR(0x0000da18u): goto L_DA18;
    case RC_ADDR(0x0000da1cu): goto L_DA1C;
    case RC_ADDR(0x0000da1eu): goto L_DA1E;
    case RC_ADDR(0x0000da22u): goto L_DA22;
    case RC_ADDR(0x0000da24u): goto L_DA24;
    case RC_ADDR(0x0000da28u): goto L_DA28;
    case RC_ADDR(0x0000da2au): goto L_DA2A;
    case RC_ADDR(0x0000da2eu): goto L_DA2E;
    case RC_ADDR(0x0000da32u): goto L_DA32;
    case RC_ADDR(0x0000da36u): goto L_DA36;
    case RC_ADDR(0x0000da3au): goto L_DA3A;
    case RC_ADDR(0x0000da3cu): goto L_DA3C;
    case RC_ADDR(0x0000da40u): goto L_DA40;
    case RC_ADDR(0x0000da42u): goto L_DA42;
    case RC_ADDR(0x0000da46u): goto L_DA46;
    case RC_ADDR(0x0000da4au): goto L_DA4A;
    case RC_ADDR(0x0000da4eu): goto L_DA4E;
    case RC_ADDR(0x0000da50u): goto L_DA50;
    case RC_ADDR(0x0000da54u): goto L_DA54;
    case RC_ADDR(0x0000da56u): goto L_DA56;
    case RC_ADDR(0x0000da5au): goto L_DA5A;
    case RC_ADDR(0x0000da5eu): goto L_DA5E;
    case RC_ADDR(0x0000da62u): goto L_DA62;
    case RC_ADDR(0x0000da66u): goto L_DA66;
    case RC_ADDR(0x0000da68u): goto L_DA68;
    case RC_ADDR(0x0000da6au): goto L_DA6A;
    case RC_ADDR(0x0000da6eu): goto L_DA6E;
    case RC_ADDR(0x0000da72u): goto L_DA72;
    case RC_ADDR(0x0000da76u): goto L_DA76;
    case RC_ADDR(0x0000da7au): goto L_DA7A;
    case RC_ADDR(0x0000da7cu): goto L_DA7C;
    case RC_ADDR(0x0000da80u): goto L_DA80;
    case RC_ADDR(0x0000da88u): goto L_DA88;
    case RC_ADDR(0x0000da8cu): goto L_DA8C;
    case RC_ADDR(0x0000da92u): goto L_DA92;
    case RC_ADDR(0x0000da96u): goto L_DA96;
    case RC_ADDR(0x0000da9au): goto L_DA9A;
    case RC_ADDR(0x0000da9cu): goto L_DA9C;
    case RC_ADDR(0x0000da9eu): goto L_DA9E;
    case RC_ADDR(0x0000daa2u): goto L_DAA2;
    case RC_ADDR(0x0000daa8u): goto L_DAA8;
    case RC_ADDR(0x0000daacu): goto L_DAAC;
    case RC_ADDR(0x0000daaeu): goto L_DAAE;
    case RC_ADDR(0x0000dab0u): goto L_DAB0;
    case RC_ADDR(0x0000dab4u): goto L_DAB4;
    case RC_ADDR(0x0000dabau): goto L_DABA;
    case RC_ADDR(0x0000dabeu): goto L_DABE;
    case RC_ADDR(0x0000dac2u): goto L_DAC2;
    case RC_ADDR(0x0000dac6u): goto L_DAC6;
    case RC_ADDR(0x0000dac8u): goto L_DAC8;
    case RC_ADDR(0x0000daccu): goto L_DACC;
    case RC_ADDR(0x0000dad0u): goto L_DAD0;
    case RC_ADDR(0x0000dad2u): goto L_DAD2;
    case RC_ADDR(0x0000dad6u): goto L_DAD6;
    case RC_ADDR(0x0000dad8u): goto L_DAD8;
    case RC_ADDR(0x0000dadcu): goto L_DADC;
    case RC_ADDR(0x0000dae0u): goto L_DAE0;
    case RC_ADDR(0x0000dae2u): goto L_DAE2;
    case RC_ADDR(0x0000dae4u): goto L_DAE4;
    case RC_ADDR(0x0000dae8u): goto L_DAE8;
    case RC_ADDR(0x0000daecu): goto L_DAEC;
    case RC_ADDR(0x0000daf0u): goto L_DAF0;
    case RC_ADDR(0x0000daf4u): goto L_DAF4;
    case RC_ADDR(0x0000daf8u): goto L_DAF8;
    case RC_ADDR(0x0000dafau): goto L_DAFA;
    case RC_ADDR(0x0000dafeu): goto L_DAFE;
    case RC_ADDR(0x0000db02u): goto L_DB02;
    case RC_ADDR(0x0000db06u): goto L_DB06;
    case RC_ADDR(0x0000db08u): goto L_DB08;
    case RC_ADDR(0x0000db0cu): goto L_DB0C;
    case RC_ADDR(0x0000db0eu): goto L_DB0E;
    case RC_ADDR(0x0000db12u): goto L_DB12;
    case RC_ADDR(0x0000db16u): goto L_DB16;
    case RC_ADDR(0x0000db1au): goto L_DB1A;
    case RC_ADDR(0x0000db1cu): goto L_DB1C;
    case RC_ADDR(0x0000db22u): goto L_DB22;
    case RC_ADDR(0x0000db24u): goto L_DB24;
    case RC_ADDR(0x0000db28u): goto L_DB28;
    case RC_ADDR(0x0000db2au): goto L_DB2A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D5E8:
    /* 0000d5e8   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x0000d5e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_D5EC:
    /* 0000d5ec   6  move.l (9a6,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d5ecu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9a6u));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5F2:
    /* 0000d5f2   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d5f2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D5F6:
    /* 0000d5f6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d5f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5FA:
    /* 0000d5fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d5fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D5FC:
    /* 0000d5fc   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d5fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D600:
    /* 0000d600   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000d600u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D602:
    /* 0000d602   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d602u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D606:
    /* 0000d606   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d606u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D608:
    /* 0000d608   2  bra 0000d658 */
    c->pc = RC_ADDR(0x0000d608u);
    rc_step(c, m, 10);
    goto L_D658;

L_D60A:
    /* 0000d60a   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d60au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D60E:
    /* 0000d60e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d60eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D612:
    /* 0000d612   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d612u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D614:
    /* 0000d614   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d614u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D618:
    /* 0000d618   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000d618u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_D61C:
    /* 0000d61c   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x0000d61cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D620:
    /* 0000d620   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000d620u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_D622:
    /* 0000d622   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d622u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D626:
    /* 0000d626   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d626u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D628:
    /* 0000d628   4  sub.w (472,A4),D2 */
    c->pc = RC_ADDR(0x0000d628u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D62C:
    /* 0000d62c   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d62cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D62E:
    /* 0000d62e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d62eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D632:
    /* 0000d632   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d632u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D634:
    /* 0000d634   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d634u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D638:
    /* 0000d638   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000d638u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_D63C:
    /* 0000d63c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000d63cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_D63E:
    /* 0000d63e   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x0000d63eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_D642:
    /* 0000d642   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000d642u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_D644:
    /* 0000d644   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d644u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D648:
    /* 0000d648   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d648u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D64A:
    /* 0000d64a   4  sub.w (470,A4),D2 */
    c->pc = RC_ADDR(0x0000d64au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D64E:
    /* 0000d64e   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000d64eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D650:
    /* 0000d650   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000d650u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000d654u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_D654:
    /* 0000d654   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d654u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D656:
    /* 0000d656   2  bra 0000d660 */
    c->pc = RC_ADDR(0x0000d656u);
    rc_step(c, m, 10);
    goto L_D660;

L_D658:
    /* 0000d658   2  subq.l #6,D0 */
    c->pc = RC_ADDR(0x0000d658u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D65A:
    /* 0000d65a   2  beq 0000d60a */
    c->pc = RC_ADDR(0x0000d65au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D60A; }

L_D65C:
    /* 0000d65c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d65cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D65E:
    /* 0000d65e   2  beq 0000d60a */
    c->pc = RC_ADDR(0x0000d65eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D60A; }

L_D660:
    /* 0000d660   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d660u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D664:
    /* 0000d664   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d664u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_D66C:
    /* 0000d66c   2  blt 0000d5f6 */
    c->pc = RC_ADDR(0x0000d66cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D5F6; }

L_D66E:
    /* 0000d66e   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d66eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D672:
    /* 0000d672   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d672u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D676:
    /* 0000d676   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d676u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D678:
    /* 0000d678   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000d678u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4eau);

L_D67C:
    /* 0000d67c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d67cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_D680:
    /* 0000d680   4  beq 0000d70e */
    c->pc = RC_ADDR(0x0000d680u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D70E;

L_D684:
    /* 0000d684   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d684u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D688:
    /* 0000d688   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d688u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D68A:
    /* 0000d68a   4  lea (4f2,A4),A0 */
    c->pc = RC_ADDR(0x0000d68au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4f2u);

L_D68E:
    /* 0000d68e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d68eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D692:
    /* 0000d692   4  sub.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0000d692u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D696:
    /* 0000d696   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d696u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D69A:
    /* 0000d69a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d69au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D69E:
    /* 0000d69e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d69eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D6A0:
    /* 0000d6a0   4  lea (4fa,A4),A0 */
    c->pc = RC_ADDR(0x0000d6a0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4fau);

L_D6A4:
    /* 0000d6a4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d6a4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6A8:
    /* 0000d6a8   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0000d6a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D6AC:
    /* 0000d6ac   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d6acu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6B0:
    /* 0000d6b0   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d6b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_D6B4:
    /* 0000d6b4   2  blt 0000d6e6 */
    c->pc = RC_ADDR(0x0000d6b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D6E6;

L_D6B6:
    /* 0000d6b6   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d6b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_D6BA:
    /* 0000d6ba   2  blt 0000d6e6 */
    c->pc = RC_ADDR(0x0000d6bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D6E6;

L_D6BC:
    /* 0000d6bc   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d6bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D6C0:
    /* 0000d6c0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d6c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D6C2:
    /* 0000d6c2   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000d6c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4eau);

L_D6C6:
    /* 0000d6c6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d6c6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6CA:
    /* 0000d6ca   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d6cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D6CC:
    /* 0000d6cc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d6ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D6CE:
    /* 0000d6ce   4  lea (8a2,A4),A0 */
    c->pc = RC_ADDR(0x0000d6ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8a2u);

L_D6D2:
    /* 0000d6d2   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x0000d6d2u);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D6D6:
    /* 0000d6d6   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d6d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6DA:
    /* 0000d6da   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d6dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6DE:
    /* 0000d6de   4  jsr (0000e03c) */
    c->pc = RC_ADDR(0x0000d6deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d6e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e03cu);
    return;

L_D6E2:
    /* 0000d6e2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d6e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D6E4:
    /* 0000d6e4   2  bra 0000d70e */
    c->pc = RC_ADDR(0x0000d6e4u);
    rc_step(c, m, 10);
    goto L_D70E;

L_D6E6:
    /* 0000d6e6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d6e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D6EA:
    /* 0000d6ea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d6eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D6EC:
    /* 0000d6ec   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000d6ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4eau);

L_D6F0:
    /* 0000d6f0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d6f0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D6F4:
    /* 0000d6f4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d6f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D6F6:
    /* 0000d6f6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d6f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D6F8:
    /* 0000d6f8   4  lea (8a2,A4),A0 */
    c->pc = RC_ADDR(0x0000d6f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8a2u);

L_D6FC:
    /* 0000d6fc   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x0000d6fcu);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D700:
    /* 0000d700   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d700u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D704:
    /* 0000d704   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d704u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D708:
    /* 0000d708   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000d708u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000d70cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_D70C:
    /* 0000d70c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d70cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D70E:
    /* 0000d70e   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d70eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D712:
    /* 0000d712   8  cmpi.l #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d712u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_D71A:
    /* 0000d71a   4  blt 0000d672 */
    c->pc = RC_ADDR(0x0000d71au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D672; }

L_D71E:
    /* 0000d71e   4  jsr (0000db2c) */
    c->pc = RC_ADDR(0x0000d71eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d722u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000db2cu);
    return;

L_D722:
    /* 0000d722   4  move.w (478,A4),D0 */
    c->pc = RC_ADDR(0x0000d722u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D726:
    /* 0000d726   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d726u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D728:
    /* 0000d728   2  bra 0000d75a */
    c->pc = RC_ADDR(0x0000d728u);
    rc_step(c, m, 10);
    goto L_D75A;

L_D72A:
    /* 0000d72a   4  move.w (48a,A4),D0 */
    c->pc = RC_ADDR(0x0000d72au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x48au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D72E:
    /* 0000d72e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d72eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D730:
    /* 0000d730   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000d730u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_D732:
    /* 0000d732   4  lea (752,A4),A0 */
    c->pc = RC_ADDR(0x0000d732u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x752u);

L_D736:
    /* 0000d736   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d736u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D73A:
    /* 0000d73a   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x0000d73au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D73E:
    /* 0000d73e   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0000d73eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D740:
    /* 0000d740   4  sub.w (472,A4),D0 */
    c->pc = RC_ADDR(0x0000d740u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D744:
    /* 0000d744   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d744u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D746:
    /* 0000d746   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x0000d746u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D74A:
    /* 0000d74a   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0000d74au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D74C:
    /* 0000d74c   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0000d74cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D750:
    /* 0000d750   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d750u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D752:
    /* 0000d752   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000d752u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000d756u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_D756:
    /* 0000d756   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d756u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D758:
    /* 0000d758   2  bra 0000d766 */
    c->pc = RC_ADDR(0x0000d758u);
    rc_step(c, m, 10);
    goto L_D766;

L_D75A:
    /* 0000d75a   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000d75au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_D75C:
    /* 0000d75c   2  beq 0000d72a */
    c->pc = RC_ADDR(0x0000d75cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D72A; }

L_D75E:
    /* 0000d75e   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d75eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D760:
    /* 0000d760   2  beq 0000d72a */
    c->pc = RC_ADDR(0x0000d760u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D72A; }

L_D762:
    /* 0000d762   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d762u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D764:
    /* 0000d764   2  beq 0000d72a */
    c->pc = RC_ADDR(0x0000d764u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D72A; }

L_D766:
    /* 0000d766   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d766u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D76A:
    /* 0000d76a   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d76au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D76E:
    /* 0000d76e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d76eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D772:
    /* 0000d772   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d772u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D774:
    /* 0000d774   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d774u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D778:
    /* 0000d778   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000d778u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D77A:
    /* 0000d77a   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d77au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D77E:
    /* 0000d77e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d77eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D780:
    /* 0000d780   4  bra 0000d868 */
    c->pc = RC_ADDR(0x0000d780u);
    rc_step(c, m, 10);
    goto L_D868;

L_D784:
    /* 0000d784   4  bra 0000d87a */
    c->pc = RC_ADDR(0x0000d784u);
    rc_step(c, m, 10);
    goto L_D87A;

L_D788:
    /* 0000d788   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d788u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D78C:
    /* 0000d78c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d78cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D78E:
    /* 0000d78e   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d78eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D792:
    /* 0000d792   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d792u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D796:
    /* 0000d796   4  add.w #24,D1 */
    c->pc = RC_ADDR(0x0000d796u);
    rc_step(c, m, 10);
    t0 = 0x00000024u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D79A:
    /* 0000d79a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d79au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D79C:
    /* 0000d79c   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d79cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D79E:
    /* 0000d79e   4  lea (7fe,A4),A0 */
    c->pc = RC_ADDR(0x0000d79eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7feu);

L_D7A2:
    /* 0000d7a2   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d7a2u);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7A8:
    /* 0000d7a8   4  bra 0000d87a */
    c->pc = RC_ADDR(0x0000d7a8u);
    rc_step(c, m, 10);
    goto L_D87A;

L_D7AC:
    /* 0000d7ac   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d7acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7B0:
    /* 0000d7b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D7B2:
    /* 0000d7b2   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000d7b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_D7B6:
    /* 0000d7b6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d7b6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D7BA:
    /* 0000d7ba   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d7bau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D7BC:
    /* 0000d7bc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d7bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D7BE:
    /* 0000d7be   4  lea (ffff99f2,A4),A0 */
    c->pc = RC_ADDR(0x0000d7beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x660eu);

L_D7C2:
    /* 0000d7c2   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d7c2u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7C6:
    /* 0000d7c6   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000d7c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7CA:
    /* 0000d7ca   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000d7cau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_D7CC:
    /* 0000d7cc   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d7ccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D7D0:
    /* 0000d7d0   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0000d7d0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D7D4:
    /* 0000d7d4   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000d7d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_D7D6:
    /* 0000d7d6   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0000d7d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_D7D8:
    /* 0000d7d8   4  lea (ffff9780,A4),A0 */
    c->pc = RC_ADDR(0x0000d7d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6880u);

L_D7DC:
    /* 0000d7dc   4  add.l (0,A0,D2.w),D0 */
    c->pc = RC_ADDR(0x0000d7dcu);
    rc_step(c, m, 20);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D7E0:
    /* 0000d7e0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000d7e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_D7E2:
    /* 0000d7e2   4  lea (7fe,A4),A0 */
    c->pc = RC_ADDR(0x0000d7e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7feu);

L_D7E6:
    /* 0000d7e6   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d7e6u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7EC:
    /* 0000d7ec   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d7ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7F0:
    /* 0000d7f0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D7F2:
    /* 0000d7f2   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000d7f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_D7F6:
    /* 0000d7f6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d7f6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D7FA:
    /* 0000d7fa   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d7fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D7FC:
    /* 0000d7fc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d7fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D7FE:
    /* 0000d7fe   4  lea (ffff99f2,A4),A0 */
    c->pc = RC_ADDR(0x0000d7feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x660eu);

L_D802:
    /* 0000d802   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d802u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D806:
    /* 0000d806   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000d806u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D80A:
    /* 0000d80a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000d80au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_D80C:
    /* 0000d80c   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d80cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D810:
    /* 0000d810   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0000d810u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D814:
    /* 0000d814   2  ext.l D2 */
    c->pc = RC_ADDR(0x0000d814u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_D816:
    /* 0000d816   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0000d816u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_D818:
    /* 0000d818   4  lea (ffff9768,A4),A0 */
    c->pc = RC_ADDR(0x0000d818u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6898u);

L_D81C:
    /* 0000d81c   4  add.l (0,A0,D2.w),D0 */
    c->pc = RC_ADDR(0x0000d81cu);
    rc_step(c, m, 20);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D820:
    /* 0000d820   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000d820u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_D822:
    /* 0000d822   4  lea (7fe,A4),A0 */
    c->pc = RC_ADDR(0x0000d822u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7feu);

L_D826:
    /* 0000d826   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d826u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D82C:
    /* 0000d82c   2  bra 0000d87a */
    c->pc = RC_ADDR(0x0000d82cu);
    rc_step(c, m, 10);
    goto L_D87A;

L_D82E:
    /* 0000d82e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d82eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D832:
    /* 0000d832   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d832u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D834:
    /* 0000d834   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000d834u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_D838:
    /* 0000d838   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d838u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D83C:
    /* 0000d83c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d83cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D83E:
    /* 0000d83e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d83eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D840:
    /* 0000d840   4  lea (ffff99f2,A4),A0 */
    c->pc = RC_ADDR(0x0000d840u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x660eu);

L_D844:
    /* 0000d844   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d844u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D848:
    /* 0000d848   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000d848u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_D84A:
    /* 0000d84a   4  lea (7fe,A4),A0 */
    c->pc = RC_ADDR(0x0000d84au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7feu);

L_D84E:
    /* 0000d84e   6  move.l (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d84eu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D854:
    /* 0000d854   2  bra 0000d87a */
    c->pc = RC_ADDR(0x0000d854u);
    rc_step(c, m, 10);
    goto L_D87A;

L_D856:
    /* 0000d856   2  bra 0000d87a */
    c->pc = RC_ADDR(0x0000d856u);
    rc_step(c, m, 10);
    goto L_D87A;

L_D868:
    /* 0000d868   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0000d868u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_D86E:
    /* 0000d86e   2  bcc 0000d87a */
    c->pc = RC_ADDR(0x0000d86eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_D87A;

L_D870:
    /* 0000d870   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d870u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D872:
    /* 0000d872   4  move.w (0000d858),D0 */
    c->pc = RC_ADDR(0x0000d872u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000d858u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D876:
    /* 0000d876   4  jmp (0000d878) */
    c->pc = RC_ADDR(0x0000d876u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000d878u) + t4);
    c->pc = t3;
    return;

L_D87A:
    /* 0000d87a   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d87au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_D87E:
    /* 0000d87e   2  beq 0000d8f8 */
    c->pc = RC_ADDR(0x0000d87eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D8F8;

L_D880:
    /* 0000d880   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d880u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D884:
    /* 0000d884   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d884u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D886:
    /* 0000d886   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d886u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D88A:
    /* 0000d88a   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000d88au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_D88E:
    /* 0000d88e   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000d88eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_D890:
    /* 0000d890   4  move.b (4,A1),D1 */
    c->pc = RC_ADDR(0x0000d890u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_D894:
    /* 0000d894   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000d894u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_D896:
    /* 0000d896   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d896u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D89A:
    /* 0000d89a   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d89au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D89C:
    /* 0000d89c   4  sub.w (470,A4),D2 */
    c->pc = RC_ADDR(0x0000d89cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D8A0:
    /* 0000d8a0   4  move.w D2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d8a0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8A4:
    /* 0000d8a4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d8a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D8A8:
    /* 0000d8a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d8a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D8AA:
    /* 0000d8aa   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d8aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D8AE:
    /* 0000d8ae   4  movea.l (fffffff4,A5),A1 */
    c->pc = RC_ADDR(0x0000d8aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[1] = t0;

L_D8B2:
    /* 0000d8b2   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x0000d8b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8B6:
    /* 0000d8b6   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000d8b6u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_D8B8:
    /* 0000d8b8   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000d8b8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8BC:
    /* 0000d8bc   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000d8bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D8BE:
    /* 0000d8be   4  sub.w (472,A4),D2 */
    c->pc = RC_ADDR(0x0000d8beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_D8C2:
    /* 0000d8c2   4  move.w D2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d8c2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8C6:
    /* 0000d8c6   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d8c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_D8CA:
    /* 0000d8ca   2  blt 0000d8e6 */
    c->pc = RC_ADDR(0x0000d8cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D8E6;

L_D8CC:
    /* 0000d8cc   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d8ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_D8D0:
    /* 0000d8d0   2  blt 0000d8e6 */
    c->pc = RC_ADDR(0x0000d8d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D8E6;

L_D8D2:
    /* 0000d8d2   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8d2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D8D6:
    /* 0000d8d6   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8DA:
    /* 0000d8da   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8DE:
    /* 0000d8de   4  jsr (0000e03c) */
    c->pc = RC_ADDR(0x0000d8deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d8e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e03cu);
    return;

L_D8E2:
    /* 0000d8e2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d8e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D8E4:
    /* 0000d8e4   2  bra 0000d8f8 */
    c->pc = RC_ADDR(0x0000d8e4u);
    rc_step(c, m, 10);
    goto L_D8F8;

L_D8E6:
    /* 0000d8e6   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D8EA:
    /* 0000d8ea   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8EE:
    /* 0000d8ee   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d8eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D8F2:
    /* 0000d8f2   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000d8f2u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000d8f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_D8F6:
    /* 0000d8f6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d8f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D8F8:
    /* 0000d8f8   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d8f8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D8FC:
    /* 0000d8fc   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d8fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_D904:
    /* 0000d904   4  blt 0000d76a */
    c->pc = RC_ADDR(0x0000d904u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D76A; }

L_D908:
    /* 0000d908   4  tst.w (478,A4) */
    c->pc = RC_ADDR(0x0000d908u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_set_nzvc(c, t0, RC_W);

L_D90C:
    /* 0000d90c   2  bne 0000d95e */
    c->pc = RC_ADDR(0x0000d90cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D95E;

L_D90E:
    /* 0000d90e   4  tst.w (4e6,A4) */
    c->pc = RC_ADDR(0x0000d90eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_set_nzvc(c, t0, RC_W);

L_D912:
    /* 0000d912   2  beq 0000d95e */
    c->pc = RC_ADDR(0x0000d912u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D95E;

L_D914:
    /* 0000d914   4  move.w (4e8,A4),D0 */
    c->pc = RC_ADDR(0x0000d914u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D918:
    /* 0000d918   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d918u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D91A:
    /* 0000d91a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000d91au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_D91C:
    /* 0000d91c   4  lea (8a2,A4),A0 */
    c->pc = RC_ADDR(0x0000d91cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8a2u);

L_D920:
    /* 0000d920   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d920u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D924:
    /* 0000d924   4  move.w (4e8,A4),D0 */
    c->pc = RC_ADDR(0x0000d924u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D928:
    /* 0000d928   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d928u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D92A:
    /* 0000d92a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d92au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D92C:
    /* 0000d92c   4  lea (ffff9844,A4),A0 */
    c->pc = RC_ADDR(0x0000d92cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x67bcu);

L_D930:
    /* 0000d930   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d930u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D934:
    /* 0000d934   4  add.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000d934u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D938:
    /* 0000d938   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0000d938u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D93C:
    /* 0000d93c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d93cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D93E:
    /* 0000d93e   4  move.w (4e8,A4),D0 */
    c->pc = RC_ADDR(0x0000d93eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D942:
    /* 0000d942   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d942u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D944:
    /* 0000d944   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d944u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D946:
    /* 0000d946   4  lea (ffff97e4,A4),A0 */
    c->pc = RC_ADDR(0x0000d946u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x681cu);

L_D94A:
    /* 0000d94a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d94au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D94E:
    /* 0000d94e   4  add.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000d94eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D952:
    /* 0000d952   4  sub.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0000d952u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D956:
    /* 0000d956   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d956u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D958:
    /* 0000d958   4  jsr (0000e03c) */
    c->pc = RC_ADDR(0x0000d958u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d95cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e03cu);
    return;

L_D95C:
    /* 0000d95c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d95cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D95E:
    /* 0000d95e   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d95eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D962:
    /* 0000d962   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d962u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D966:
    /* 0000d966   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d966u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D96A:
    /* 0000d96a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d96au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D96C:
    /* 0000d96c   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d96cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D970:
    /* 0000d970   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000d970u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D972:
    /* 0000d972   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000d972u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D976:
    /* 0000d976   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d976u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D978:
    /* 0000d978   4  bra 0000da04 */
    c->pc = RC_ADDR(0x0000d978u);
    rc_step(c, m, 10);
    goto L_DA04;

L_D97C:
    /* 0000d97c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d97cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D980:
    /* 0000d980   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d980u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D982:
    /* 0000d982   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000d982u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_D986:
    /* 0000d986   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d986u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D98A:
    /* 0000d98a   4  and.w #1,D1 */
    c->pc = RC_ADDR(0x0000d98au);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_D98E:
    /* 0000d98e   4  add.w #3a,D1 */
    c->pc = RC_ADDR(0x0000d98eu);
    rc_step(c, m, 10);
    t0 = 0x0000003au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D992:
    /* 0000d992   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d992u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D994:
    /* 0000d994   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d994u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D996:
    /* 0000d996   4  lea (8a2,A4),A0 */
    c->pc = RC_ADDR(0x0000d996u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8a2u);

L_D99A:
    /* 0000d99a   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d99au);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9A0:
    /* 0000d9a0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d9a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9A4:
    /* 0000d9a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d9a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D9A6:
    /* 0000d9a6   4  lea (490,A4),A0 */
    c->pc = RC_ADDR(0x0000d9a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x490u);

L_D9AA:
    /* 0000d9aa   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d9aau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9B0:
    /* 0000d9b0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d9b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9B4:
    /* 0000d9b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d9b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D9B6:
    /* 0000d9b6   4  lea (4a0,A4),A0 */
    c->pc = RC_ADDR(0x0000d9b6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4a0u);

L_D9BA:
    /* 0000d9ba   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d9bau);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9C0:
    /* 0000d9c0   2  bra 0000da12 */
    c->pc = RC_ADDR(0x0000d9c0u);
    rc_step(c, m, 10);
    goto L_DA12;

L_D9C2:
    /* 0000d9c2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d9c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9C6:
    /* 0000d9c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d9c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D9C8:
    /* 0000d9c8   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d9c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D9CC:
    /* 0000d9cc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d9ccu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9D0:
    /* 0000d9d0   4  add.w #3c,D1 */
    c->pc = RC_ADDR(0x0000d9d0u);
    rc_step(c, m, 10);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D9D4:
    /* 0000d9d4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d9d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D9D6:
    /* 0000d9d6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000d9d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_D9D8:
    /* 0000d9d8   4  lea (8a2,A4),A0 */
    c->pc = RC_ADDR(0x0000d9d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8a2u);

L_D9DC:
    /* 0000d9dc   6  move.l (0,A0,D1.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d9dcu);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9E2:
    /* 0000d9e2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d9e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9E6:
    /* 0000d9e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d9e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D9E8:
    /* 0000d9e8   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d9e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D9EC:
    /* 0000d9ec   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d9ecu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9F2:
    /* 0000d9f2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d9f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D9F6:
    /* 0000d9f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d9f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D9F8:
    /* 0000d9f8   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d9f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D9FC:
    /* 0000d9fc   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d9fcu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA02:
    /* 0000da02   2  bra 0000da12 */
    c->pc = RC_ADDR(0x0000da02u);
    rc_step(c, m, 10);
    goto L_DA12;

L_DA04:
    /* 0000da04   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000da04u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DA06:
    /* 0000da06   4  beq 0000d97c */
    c->pc = RC_ADDR(0x0000da06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D97C; }

L_DA0A:
    /* 0000da0a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000da0au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DA0C:
    /* 0000da0c   2  beq 0000d9c2 */
    c->pc = RC_ADDR(0x0000da0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D9C2; }

L_DA0E:
    /* 0000da0e   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000da0eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DA10:
    /* 0000da10   2  beq 0000d9c2 */
    c->pc = RC_ADDR(0x0000da10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_D9C2; }

L_DA12:
    /* 0000da12   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000da12u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_DA16:
    /* 0000da16   2  beq 0000da7c */
    c->pc = RC_ADDR(0x0000da16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DA7C;

L_DA18:
    /* 0000da18   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000da18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_DA1C:
    /* 0000da1c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000da1cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DA1E:
    /* 0000da1e   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0000da1eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DA22:
    /* 0000da22   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000da22u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_DA24:
    /* 0000da24   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0000da24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA28:
    /* 0000da28   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000da28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DA2A:
    /* 0000da2a   4  sub.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0000da2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DA2E:
    /* 0000da2e   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000da2eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA32:
    /* 0000da32   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x0000da32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_DA36:
    /* 0000da36   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0000da36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA3A:
    /* 0000da3a   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000da3au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_DA3C:
    /* 0000da3c   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000da3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA40:
    /* 0000da40   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000da40u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DA42:
    /* 0000da42   4  sub.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0000da42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DA46:
    /* 0000da46   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000da46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA4A:
    /* 0000da4a   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000da4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_DA4E:
    /* 0000da4e   2  blt 0000da6a */
    c->pc = RC_ADDR(0x0000da4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_DA6A;

L_DA50:
    /* 0000da50   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000da50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_DA54:
    /* 0000da54   2  blt 0000da6a */
    c->pc = RC_ADDR(0x0000da54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_DA6A;

L_DA56:
    /* 0000da56   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DA5A:
    /* 0000da5a   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da5au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA5E:
    /* 0000da5e   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da5eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA62:
    /* 0000da62   4  jsr (0000e03c) */
    c->pc = RC_ADDR(0x0000da62u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000da66u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e03cu);
    return;

L_DA66:
    /* 0000da66   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000da66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DA68:
    /* 0000da68   2  bra 0000da7c */
    c->pc = RC_ADDR(0x0000da68u);
    rc_step(c, m, 10);
    goto L_DA7C;

L_DA6A:
    /* 0000da6a   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DA6E:
    /* 0000da6e   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA72:
    /* 0000da72   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0000da72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA76:
    /* 0000da76   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000da76u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000da7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_DA7A:
    /* 0000da7a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000da7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DA7C:
    /* 0000da7c   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000da7cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_DA80:
    /* 0000da80   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000da80u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_DA88:
    /* 0000da88   4  blt 0000d962 */
    c->pc = RC_ADDR(0x0000da88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_D962; }

L_DA8C:
    /* 0000da8c   6  cmpi.w #2,(712,A4) */
    c->pc = RC_ADDR(0x0000da8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DA92:
    /* 0000da92   4  bne 0000db28 */
    c->pc = RC_ADDR(0x0000da92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DB28;

L_DA96:
    /* 0000da96   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000da96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA9A:
    /* 0000da9a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000da9au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DA9C:
    /* 0000da9c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000da9cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DA9E:
    /* 0000da9e   4  lea (ffff9710,A4),A0 */
    c->pc = RC_ADDR(0x0000da9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68f0u);

L_DAA2:
    /* 0000daa2   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000daa2u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAA8:
    /* 0000daa8   4  move.w (710,A4),D0 */
    c->pc = RC_ADDR(0x0000daa8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x710u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAAC:
    /* 0000daac   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000daacu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DAAE:
    /* 0000daae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000daaeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DAB0:
    /* 0000dab0   4  lea (ffff971c,A4),A0 */
    c->pc = RC_ADDR(0x0000dab0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68e4u);

L_DAB4:
    /* 0000dab4   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dab4u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DABA:
    /* 0000daba   4  move.l (87e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dabau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x87eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DABE:
    /* 0000dabe   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000dabeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAC2:
    /* 0000dac2   4  sub.w (472,A4),D0 */
    c->pc = RC_ADDR(0x0000dac2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DAC6:
    /* 0000dac6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000dac6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAC8:
    /* 0000dac8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000dac8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DACC:
    /* 0000dacc   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0000daccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DAD0:
    /* 0000dad0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000dad0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAD2:
    /* 0000dad2   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000dad2u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000dad6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_DAD6:
    /* 0000dad6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000dad6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DAD8:
    /* 0000dad8   4  move.w (4e0,A4),D0 */
    c->pc = RC_ADDR(0x0000dad8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DADC:
    /* 0000dadc   4  add.w #21,D0 */
    c->pc = RC_ADDR(0x0000dadcu);
    rc_step(c, m, 10);
    t0 = 0x00000021u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DAE0:
    /* 0000dae0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dae0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DAE2:
    /* 0000dae2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000dae2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_DAE4:
    /* 0000dae4   4  lea (7fe,A4),A0 */
    c->pc = RC_ADDR(0x0000dae4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7feu);

L_DAE8:
    /* 0000dae8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000dae8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DAEC:
    /* 0000daec   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000daecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAF0:
    /* 0000daf0   4  add.w #34,D0 */
    c->pc = RC_ADDR(0x0000daf0u);
    rc_step(c, m, 10);
    t0 = 0x00000034u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DAF4:
    /* 0000daf4   4  sub.w (472,A4),D0 */
    c->pc = RC_ADDR(0x0000daf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DAF8:
    /* 0000daf8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000daf8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAFA:
    /* 0000dafa   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000dafau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAFE:
    /* 0000dafe   4  add.w #32,D0 */
    c->pc = RC_ADDR(0x0000dafeu);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DB02:
    /* 0000db02   4  sub.w (470,A4),D0 */
    c->pc = RC_ADDR(0x0000db02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DB06:
    /* 0000db06   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000db06u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB08:
    /* 0000db08   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0000db08u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0000db0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_DB0C:
    /* 0000db0c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000db0cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DB0E:
    /* 0000db0e   4  move.w (4e2,A4),D0 */
    c->pc = RC_ADDR(0x0000db0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB12:
    /* 0000db12   4  add.w D0,(4e0,A4) */
    c->pc = RC_ADDR(0x0000db12u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x4e0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DB16:
    /* 0000db16   4  tst.w (4e0,A4) */
    c->pc = RC_ADDR(0x0000db16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e0u));
    rc_set_nzvc(c, t0, RC_W);

L_DB1A:
    /* 0000db1a   2  beq 0000db24 */
    c->pc = RC_ADDR(0x0000db1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DB24;

L_DB1C:
    /* 0000db1c   6  cmpi.w #2,(4e0,A4) */
    c->pc = RC_ADDR(0x0000db1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e0u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DB22:
    /* 0000db22   2  bne 0000db28 */
    c->pc = RC_ADDR(0x0000db22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DB28;

L_DB24:
    /* 0000db24   4  neg.w (4e2,A4) */
    c->pc = RC_ADDR(0x0000db24u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x4e2u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DB28:
    /* 0000db28   2  unlk A5 */
    c->pc = RC_ADDR(0x0000db28u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DB2A:
    /* 0000db2a   2  rts */
    c->pc = RC_ADDR(0x0000db2au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
