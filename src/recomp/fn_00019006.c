/* fn_00019006 - 3608 byte(s), 1102 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00019006(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019006u): goto L_19006;
    case RC_ADDR(0x0001900au): goto L_1900A;
    case RC_ADDR(0x0001900eu): goto L_1900E;
    case RC_ADDR(0x00019012u): goto L_19012;
    case RC_ADDR(0x00019016u): goto L_19016;
    case RC_ADDR(0x00019018u): goto L_19018;
    case RC_ADDR(0x0001901cu): goto L_1901C;
    case RC_ADDR(0x00019020u): goto L_19020;
    case RC_ADDR(0x00019024u): goto L_19024;
    case RC_ADDR(0x00019026u): goto L_19026;
    case RC_ADDR(0x0001902au): goto L_1902A;
    case RC_ADDR(0x0001902eu): goto L_1902E;
    case RC_ADDR(0x00019030u): goto L_19030;
    case RC_ADDR(0x00019032u): goto L_19032;
    case RC_ADDR(0x00019034u): goto L_19034;
    case RC_ADDR(0x00019038u): goto L_19038;
    case RC_ADDR(0x0001903cu): goto L_1903C;
    case RC_ADDR(0x0001903eu): goto L_1903E;
    case RC_ADDR(0x00019042u): goto L_19042;
    case RC_ADDR(0x00019044u): goto L_19044;
    case RC_ADDR(0x00019046u): goto L_19046;
    case RC_ADDR(0x0001904au): goto L_1904A;
    case RC_ADDR(0x0001904eu): goto L_1904E;
    case RC_ADDR(0x00019050u): goto L_19050;
    case RC_ADDR(0x00019054u): goto L_19054;
    case RC_ADDR(0x00019056u): goto L_19056;
    case RC_ADDR(0x00019058u): goto L_19058;
    case RC_ADDR(0x0001905cu): goto L_1905C;
    case RC_ADDR(0x00019062u): goto L_19062;
    case RC_ADDR(0x00019064u): goto L_19064;
    case RC_ADDR(0x00019066u): goto L_19066;
    case RC_ADDR(0x0001906au): goto L_1906A;
    case RC_ADDR(0x00019070u): goto L_19070;
    case RC_ADDR(0x00019072u): goto L_19072;
    case RC_ADDR(0x00019074u): goto L_19074;
    case RC_ADDR(0x00019078u): goto L_19078;
    case RC_ADDR(0x0001907cu): goto L_1907C;
    case RC_ADDR(0x0001907eu): goto L_1907E;
    case RC_ADDR(0x00019080u): goto L_19080;
    case RC_ADDR(0x00019084u): goto L_19084;
    case RC_ADDR(0x00019088u): goto L_19088;
    case RC_ADDR(0x0001908au): goto L_1908A;
    case RC_ADDR(0x0001908eu): goto L_1908E;
    case RC_ADDR(0x00019090u): goto L_19090;
    case RC_ADDR(0x00019092u): goto L_19092;
    case RC_ADDR(0x00019096u): goto L_19096;
    case RC_ADDR(0x0001909au): goto L_1909A;
    case RC_ADDR(0x0001909cu): goto L_1909C;
    case RC_ADDR(0x0001909eu): goto L_1909E;
    case RC_ADDR(0x000190a2u): goto L_190A2;
    case RC_ADDR(0x000190a6u): goto L_190A6;
    case RC_ADDR(0x000190a8u): goto L_190A8;
    case RC_ADDR(0x000190acu): goto L_190AC;
    case RC_ADDR(0x000190b0u): goto L_190B0;
    case RC_ADDR(0x000190b2u): goto L_190B2;
    case RC_ADDR(0x000190b4u): goto L_190B4;
    case RC_ADDR(0x000190b8u): goto L_190B8;
    case RC_ADDR(0x000190bcu): goto L_190BC;
    case RC_ADDR(0x000190c0u): goto L_190C0;
    case RC_ADDR(0x000190c4u): goto L_190C4;
    case RC_ADDR(0x000190c6u): goto L_190C6;
    case RC_ADDR(0x000190c8u): goto L_190C8;
    case RC_ADDR(0x000190cau): goto L_190CA;
    case RC_ADDR(0x000190ceu): goto L_190CE;
    case RC_ADDR(0x000190d0u): goto L_190D0;
    case RC_ADDR(0x000190d2u): goto L_190D2;
    case RC_ADDR(0x000190d6u): goto L_190D6;
    case RC_ADDR(0x000190dau): goto L_190DA;
    case RC_ADDR(0x000190deu): goto L_190DE;
    case RC_ADDR(0x000190e0u): goto L_190E0;
    case RC_ADDR(0x000190e2u): goto L_190E2;
    case RC_ADDR(0x000190e4u): goto L_190E4;
    case RC_ADDR(0x000190e8u): goto L_190E8;
    case RC_ADDR(0x000190ecu): goto L_190EC;
    case RC_ADDR(0x000190f0u): goto L_190F0;
    case RC_ADDR(0x000190f4u): goto L_190F4;
    case RC_ADDR(0x000190f6u): goto L_190F6;
    case RC_ADDR(0x000190f8u): goto L_190F8;
    case RC_ADDR(0x000190fau): goto L_190FA;
    case RC_ADDR(0x000190feu): goto L_190FE;
    case RC_ADDR(0x00019104u): goto L_19104;
    case RC_ADDR(0x00019106u): goto L_19106;
    case RC_ADDR(0x00019108u): goto L_19108;
    case RC_ADDR(0x0001910cu): goto L_1910C;
    case RC_ADDR(0x00019112u): goto L_19112;
    case RC_ADDR(0x00019114u): goto L_19114;
    case RC_ADDR(0x00019118u): goto L_19118;
    case RC_ADDR(0x0001911eu): goto L_1911E;
    case RC_ADDR(0x00019120u): goto L_19120;
    case RC_ADDR(0x00019124u): goto L_19124;
    case RC_ADDR(0x00019126u): goto L_19126;
    case RC_ADDR(0x00019128u): goto L_19128;
    case RC_ADDR(0x0001912cu): goto L_1912C;
    case RC_ADDR(0x00019130u): goto L_19130;
    case RC_ADDR(0x00019134u): goto L_19134;
    case RC_ADDR(0x00019136u): goto L_19136;
    case RC_ADDR(0x0001913au): goto L_1913A;
    case RC_ADDR(0x0001913eu): goto L_1913E;
    case RC_ADDR(0x00019140u): goto L_19140;
    case RC_ADDR(0x00019142u): goto L_19142;
    case RC_ADDR(0x00019144u): goto L_19144;
    case RC_ADDR(0x00019146u): goto L_19146;
    case RC_ADDR(0x00019148u): goto L_19148;
    case RC_ADDR(0x0001914cu): goto L_1914C;
    case RC_ADDR(0x00019152u): goto L_19152;
    case RC_ADDR(0x00019154u): goto L_19154;
    case RC_ADDR(0x00019156u): goto L_19156;
    case RC_ADDR(0x0001915au): goto L_1915A;
    case RC_ADDR(0x0001915eu): goto L_1915E;
    case RC_ADDR(0x00019162u): goto L_19162;
    case RC_ADDR(0x00019164u): goto L_19164;
    case RC_ADDR(0x00019168u): goto L_19168;
    case RC_ADDR(0x0001916eu): goto L_1916E;
    case RC_ADDR(0x00019170u): goto L_19170;
    case RC_ADDR(0x00019172u): goto L_19172;
    case RC_ADDR(0x00019174u): goto L_19174;
    case RC_ADDR(0x00019178u): goto L_19178;
    case RC_ADDR(0x0001917au): goto L_1917A;
    case RC_ADDR(0x0001917cu): goto L_1917C;
    case RC_ADDR(0x00019180u): goto L_19180;
    case RC_ADDR(0x00019186u): goto L_19186;
    case RC_ADDR(0x00019188u): goto L_19188;
    case RC_ADDR(0x0001918au): goto L_1918A;
    case RC_ADDR(0x0001918eu): goto L_1918E;
    case RC_ADDR(0x00019194u): goto L_19194;
    case RC_ADDR(0x00019196u): goto L_19196;
    case RC_ADDR(0x00019198u): goto L_19198;
    case RC_ADDR(0x0001919cu): goto L_1919C;
    case RC_ADDR(0x000191a0u): goto L_191A0;
    case RC_ADDR(0x000191a2u): goto L_191A2;
    case RC_ADDR(0x000191a4u): goto L_191A4;
    case RC_ADDR(0x000191a8u): goto L_191A8;
    case RC_ADDR(0x000191acu): goto L_191AC;
    case RC_ADDR(0x000191b0u): goto L_191B0;
    case RC_ADDR(0x000191b4u): goto L_191B4;
    case RC_ADDR(0x000191b6u): goto L_191B6;
    case RC_ADDR(0x000191b8u): goto L_191B8;
    case RC_ADDR(0x000191bcu): goto L_191BC;
    case RC_ADDR(0x000191c0u): goto L_191C0;
    case RC_ADDR(0x000191c2u): goto L_191C2;
    case RC_ADDR(0x000191c4u): goto L_191C4;
    case RC_ADDR(0x000191c8u): goto L_191C8;
    case RC_ADDR(0x000191ccu): goto L_191CC;
    case RC_ADDR(0x000191d0u): goto L_191D0;
    case RC_ADDR(0x000191d4u): goto L_191D4;
    case RC_ADDR(0x000191d6u): goto L_191D6;
    case RC_ADDR(0x000191dau): goto L_191DA;
    case RC_ADDR(0x000191dcu): goto L_191DC;
    case RC_ADDR(0x000191deu): goto L_191DE;
    case RC_ADDR(0x000191e0u): goto L_191E0;
    case RC_ADDR(0x000191e4u): goto L_191E4;
    case RC_ADDR(0x000191e6u): goto L_191E6;
    case RC_ADDR(0x000191eau): goto L_191EA;
    case RC_ADDR(0x000191ecu): goto L_191EC;
    case RC_ADDR(0x000191f0u): goto L_191F0;
    case RC_ADDR(0x000191f4u): goto L_191F4;
    case RC_ADDR(0x000191f6u): goto L_191F6;
    case RC_ADDR(0x000191fau): goto L_191FA;
    case RC_ADDR(0x000191feu): goto L_191FE;
    case RC_ADDR(0x00019202u): goto L_19202;
    case RC_ADDR(0x00019204u): goto L_19204;
    case RC_ADDR(0x00019208u): goto L_19208;
    case RC_ADDR(0x0001920cu): goto L_1920C;
    case RC_ADDR(0x00019210u): goto L_19210;
    case RC_ADDR(0x00019212u): goto L_19212;
    case RC_ADDR(0x00019216u): goto L_19216;
    case RC_ADDR(0x0001921au): goto L_1921A;
    case RC_ADDR(0x0001921cu): goto L_1921C;
    case RC_ADDR(0x00019220u): goto L_19220;
    case RC_ADDR(0x00019222u): goto L_19222;
    case RC_ADDR(0x00019226u): goto L_19226;
    case RC_ADDR(0x00019228u): goto L_19228;
    case RC_ADDR(0x0001922cu): goto L_1922C;
    case RC_ADDR(0x00019230u): goto L_19230;
    case RC_ADDR(0x00019232u): goto L_19232;
    case RC_ADDR(0x00019236u): goto L_19236;
    case RC_ADDR(0x00019238u): goto L_19238;
    case RC_ADDR(0x0001923cu): goto L_1923C;
    case RC_ADDR(0x0001923eu): goto L_1923E;
    case RC_ADDR(0x00019242u): goto L_19242;
    case RC_ADDR(0x00019246u): goto L_19246;
    case RC_ADDR(0x00019248u): goto L_19248;
    case RC_ADDR(0x0001924cu): goto L_1924C;
    case RC_ADDR(0x0001924eu): goto L_1924E;
    case RC_ADDR(0x00019252u): goto L_19252;
    case RC_ADDR(0x00019254u): goto L_19254;
    case RC_ADDR(0x00019258u): goto L_19258;
    case RC_ADDR(0x0001925cu): goto L_1925C;
    case RC_ADDR(0x0001925eu): goto L_1925E;
    case RC_ADDR(0x00019262u): goto L_19262;
    case RC_ADDR(0x00019264u): goto L_19264;
    case RC_ADDR(0x00019268u): goto L_19268;
    case RC_ADDR(0x0001926au): goto L_1926A;
    case RC_ADDR(0x0001926cu): goto L_1926C;
    case RC_ADDR(0x0001926eu): goto L_1926E;
    case RC_ADDR(0x00019272u): goto L_19272;
    case RC_ADDR(0x00019278u): goto L_19278;
    case RC_ADDR(0x0001927au): goto L_1927A;
    case RC_ADDR(0x0001927cu): goto L_1927C;
    case RC_ADDR(0x00019280u): goto L_19280;
    case RC_ADDR(0x00019284u): goto L_19284;
    case RC_ADDR(0x00019286u): goto L_19286;
    case RC_ADDR(0x0001928au): goto L_1928A;
    case RC_ADDR(0x0001928cu): goto L_1928C;
    case RC_ADDR(0x00019290u): goto L_19290;
    case RC_ADDR(0x00019294u): goto L_19294;
    case RC_ADDR(0x00019298u): goto L_19298;
    case RC_ADDR(0x0001929cu): goto L_1929C;
    case RC_ADDR(0x000192a0u): goto L_192A0;
    case RC_ADDR(0x000192a4u): goto L_192A4;
    case RC_ADDR(0x000192a8u): goto L_192A8;
    case RC_ADDR(0x000192aau): goto L_192AA;
    case RC_ADDR(0x000192acu): goto L_192AC;
    case RC_ADDR(0x000192b0u): goto L_192B0;
    case RC_ADDR(0x000192b2u): goto L_192B2;
    case RC_ADDR(0x000192b4u): goto L_192B4;
    case RC_ADDR(0x000192b6u): goto L_192B6;
    case RC_ADDR(0x000192bau): goto L_192BA;
    case RC_ADDR(0x000192bcu): goto L_192BC;
    case RC_ADDR(0x000192c0u): goto L_192C0;
    case RC_ADDR(0x000192c4u): goto L_192C4;
    case RC_ADDR(0x000192c6u): goto L_192C6;
    case RC_ADDR(0x000192c8u): goto L_192C8;
    case RC_ADDR(0x000192ccu): goto L_192CC;
    case RC_ADDR(0x000192ceu): goto L_192CE;
    case RC_ADDR(0x000192d0u): goto L_192D0;
    case RC_ADDR(0x000192d4u): goto L_192D4;
    case RC_ADDR(0x000192d8u): goto L_192D8;
    case RC_ADDR(0x000192dcu): goto L_192DC;
    case RC_ADDR(0x000192e0u): goto L_192E0;
    case RC_ADDR(0x000192e4u): goto L_192E4;
    case RC_ADDR(0x000192e6u): goto L_192E6;
    case RC_ADDR(0x000192e8u): goto L_192E8;
    case RC_ADDR(0x000192eau): goto L_192EA;
    case RC_ADDR(0x000192eeu): goto L_192EE;
    case RC_ADDR(0x000192f2u): goto L_192F2;
    case RC_ADDR(0x000192f6u): goto L_192F6;
    case RC_ADDR(0x000192f8u): goto L_192F8;
    case RC_ADDR(0x000192fau): goto L_192FA;
    case RC_ADDR(0x000192fcu): goto L_192FC;
    case RC_ADDR(0x00019300u): goto L_19300;
    case RC_ADDR(0x00019302u): goto L_19302;
    case RC_ADDR(0x00019304u): goto L_19304;
    case RC_ADDR(0x00019308u): goto L_19308;
    case RC_ADDR(0x0001930eu): goto L_1930E;
    case RC_ADDR(0x00019312u): goto L_19312;
    case RC_ADDR(0x00019314u): goto L_19314;
    case RC_ADDR(0x00019316u): goto L_19316;
    case RC_ADDR(0x0001931au): goto L_1931A;
    case RC_ADDR(0x0001931cu): goto L_1931C;
    case RC_ADDR(0x0001931eu): goto L_1931E;
    case RC_ADDR(0x00019322u): goto L_19322;
    case RC_ADDR(0x00019328u): goto L_19328;
    case RC_ADDR(0x0001932au): goto L_1932A;
    case RC_ADDR(0x0001932cu): goto L_1932C;
    case RC_ADDR(0x00019330u): goto L_19330;
    case RC_ADDR(0x00019332u): goto L_19332;
    case RC_ADDR(0x00019334u): goto L_19334;
    case RC_ADDR(0x00019338u): goto L_19338;
    case RC_ADDR(0x0001933eu): goto L_1933E;
    case RC_ADDR(0x00019340u): goto L_19340;
    case RC_ADDR(0x00019342u): goto L_19342;
    case RC_ADDR(0x00019346u): goto L_19346;
    case RC_ADDR(0x00019348u): goto L_19348;
    case RC_ADDR(0x0001934au): goto L_1934A;
    case RC_ADDR(0x0001934eu): goto L_1934E;
    case RC_ADDR(0x00019354u): goto L_19354;
    case RC_ADDR(0x00019358u): goto L_19358;
    case RC_ADDR(0x0001935cu): goto L_1935C;
    case RC_ADDR(0x00019360u): goto L_19360;
    case RC_ADDR(0x00019362u): goto L_19362;
    case RC_ADDR(0x00019364u): goto L_19364;
    case RC_ADDR(0x00019368u): goto L_19368;
    case RC_ADDR(0x0001936eu): goto L_1936E;
    case RC_ADDR(0x00019372u): goto L_19372;
    case RC_ADDR(0x00019376u): goto L_19376;
    case RC_ADDR(0x0001937au): goto L_1937A;
    case RC_ADDR(0x0001937cu): goto L_1937C;
    case RC_ADDR(0x0001937eu): goto L_1937E;
    case RC_ADDR(0x00019382u): goto L_19382;
    case RC_ADDR(0x00019388u): goto L_19388;
    case RC_ADDR(0x0001938cu): goto L_1938C;
    case RC_ADDR(0x00019390u): goto L_19390;
    case RC_ADDR(0x00019394u): goto L_19394;
    case RC_ADDR(0x00019396u): goto L_19396;
    case RC_ADDR(0x00019398u): goto L_19398;
    case RC_ADDR(0x0001939cu): goto L_1939C;
    case RC_ADDR(0x000193a2u): goto L_193A2;
    case RC_ADDR(0x000193a4u): goto L_193A4;
    case RC_ADDR(0x000193a6u): goto L_193A6;
    case RC_ADDR(0x000193aau): goto L_193AA;
    case RC_ADDR(0x000193b0u): goto L_193B0;
    case RC_ADDR(0x000193b2u): goto L_193B2;
    case RC_ADDR(0x000193b4u): goto L_193B4;
    case RC_ADDR(0x000193b8u): goto L_193B8;
    case RC_ADDR(0x000193beu): goto L_193BE;
    case RC_ADDR(0x000193c0u): goto L_193C0;
    case RC_ADDR(0x000193c2u): goto L_193C2;
    case RC_ADDR(0x000193c6u): goto L_193C6;
    case RC_ADDR(0x000193cau): goto L_193CA;
    case RC_ADDR(0x000193ceu): goto L_193CE;
    case RC_ADDR(0x000193d2u): goto L_193D2;
    case RC_ADDR(0x000193d4u): goto L_193D4;
    case RC_ADDR(0x000193d6u): goto L_193D6;
    case RC_ADDR(0x000193dau): goto L_193DA;
    case RC_ADDR(0x000193deu): goto L_193DE;
    case RC_ADDR(0x000193e2u): goto L_193E2;
    case RC_ADDR(0x000193e6u): goto L_193E6;
    case RC_ADDR(0x000193eau): goto L_193EA;
    case RC_ADDR(0x000193f0u): goto L_193F0;
    case RC_ADDR(0x000193f4u): goto L_193F4;
    case RC_ADDR(0x000193f8u): goto L_193F8;
    case RC_ADDR(0x000193fcu): goto L_193FC;
    case RC_ADDR(0x00019402u): goto L_19402;
    case RC_ADDR(0x00019404u): goto L_19404;
    case RC_ADDR(0x00019406u): goto L_19406;
    case RC_ADDR(0x0001940au): goto L_1940A;
    case RC_ADDR(0x0001940eu): goto L_1940E;
    case RC_ADDR(0x00019410u): goto L_19410;
    case RC_ADDR(0x00019412u): goto L_19412;
    case RC_ADDR(0x00019416u): goto L_19416;
    case RC_ADDR(0x0001941au): goto L_1941A;
    case RC_ADDR(0x0001941eu): goto L_1941E;
    case RC_ADDR(0x00019422u): goto L_19422;
    case RC_ADDR(0x00019424u): goto L_19424;
    case RC_ADDR(0x00019426u): goto L_19426;
    case RC_ADDR(0x0001942au): goto L_1942A;
    case RC_ADDR(0x0001942eu): goto L_1942E;
    case RC_ADDR(0x00019430u): goto L_19430;
    case RC_ADDR(0x00019432u): goto L_19432;
    case RC_ADDR(0x00019436u): goto L_19436;
    case RC_ADDR(0x0001943au): goto L_1943A;
    case RC_ADDR(0x0001943eu): goto L_1943E;
    case RC_ADDR(0x00019442u): goto L_19442;
    case RC_ADDR(0x00019444u): goto L_19444;
    case RC_ADDR(0x00019446u): goto L_19446;
    case RC_ADDR(0x0001944au): goto L_1944A;
    case RC_ADDR(0x0001944eu): goto L_1944E;
    case RC_ADDR(0x00019450u): goto L_19450;
    case RC_ADDR(0x00019452u): goto L_19452;
    case RC_ADDR(0x00019456u): goto L_19456;
    case RC_ADDR(0x0001945au): goto L_1945A;
    case RC_ADDR(0x0001945eu): goto L_1945E;
    case RC_ADDR(0x00019460u): goto L_19460;
    case RC_ADDR(0x00019462u): goto L_19462;
    case RC_ADDR(0x00019464u): goto L_19464;
    case RC_ADDR(0x00019468u): goto L_19468;
    case RC_ADDR(0x0001946cu): goto L_1946C;
    case RC_ADDR(0x0001946eu): goto L_1946E;
    case RC_ADDR(0x00019470u): goto L_19470;
    case RC_ADDR(0x00019474u): goto L_19474;
    case RC_ADDR(0x00019478u): goto L_19478;
    case RC_ADDR(0x0001947cu): goto L_1947C;
    case RC_ADDR(0x0001947eu): goto L_1947E;
    case RC_ADDR(0x00019482u): goto L_19482;
    case RC_ADDR(0x00019484u): goto L_19484;
    case RC_ADDR(0x00019488u): goto L_19488;
    case RC_ADDR(0x0001948cu): goto L_1948C;
    case RC_ADDR(0x00019490u): goto L_19490;
    case RC_ADDR(0x00019492u): goto L_19492;
    case RC_ADDR(0x00019494u): goto L_19494;
    case RC_ADDR(0x00019498u): goto L_19498;
    case RC_ADDR(0x0001949eu): goto L_1949E;
    case RC_ADDR(0x000194a2u): goto L_194A2;
    case RC_ADDR(0x000194a6u): goto L_194A6;
    case RC_ADDR(0x000194aau): goto L_194AA;
    case RC_ADDR(0x000194acu): goto L_194AC;
    case RC_ADDR(0x000194aeu): goto L_194AE;
    case RC_ADDR(0x000194b2u): goto L_194B2;
    case RC_ADDR(0x000194b8u): goto L_194B8;
    case RC_ADDR(0x000194bau): goto L_194BA;
    case RC_ADDR(0x000194bcu): goto L_194BC;
    case RC_ADDR(0x000194c0u): goto L_194C0;
    case RC_ADDR(0x000194c6u): goto L_194C6;
    case RC_ADDR(0x000194cau): goto L_194CA;
    case RC_ADDR(0x000194ccu): goto L_194CC;
    case RC_ADDR(0x000194ceu): goto L_194CE;
    case RC_ADDR(0x000194d2u): goto L_194D2;
    case RC_ADDR(0x000194d6u): goto L_194D6;
    case RC_ADDR(0x000194dau): goto L_194DA;
    case RC_ADDR(0x000194dcu): goto L_194DC;
    case RC_ADDR(0x000194deu): goto L_194DE;
    case RC_ADDR(0x000194e0u): goto L_194E0;
    case RC_ADDR(0x000194e4u): goto L_194E4;
    case RC_ADDR(0x000194e6u): goto L_194E6;
    case RC_ADDR(0x000194e8u): goto L_194E8;
    case RC_ADDR(0x000194ecu): goto L_194EC;
    case RC_ADDR(0x000194f0u): goto L_194F0;
    case RC_ADDR(0x000194f4u): goto L_194F4;
    case RC_ADDR(0x000194f8u): goto L_194F8;
    case RC_ADDR(0x000194fau): goto L_194FA;
    case RC_ADDR(0x000194fcu): goto L_194FC;
    case RC_ADDR(0x00019500u): goto L_19500;
    case RC_ADDR(0x00019502u): goto L_19502;
    case RC_ADDR(0x00019504u): goto L_19504;
    case RC_ADDR(0x00019508u): goto L_19508;
    case RC_ADDR(0x0001950cu): goto L_1950C;
    case RC_ADDR(0x00019510u): goto L_19510;
    case RC_ADDR(0x00019514u): goto L_19514;
    case RC_ADDR(0x00019516u): goto L_19516;
    case RC_ADDR(0x00019518u): goto L_19518;
    case RC_ADDR(0x0001951cu): goto L_1951C;
    case RC_ADDR(0x00019520u): goto L_19520;
    case RC_ADDR(0x00019522u): goto L_19522;
    case RC_ADDR(0x00019524u): goto L_19524;
    case RC_ADDR(0x00019526u): goto L_19526;
    case RC_ADDR(0x0001952au): goto L_1952A;
    case RC_ADDR(0x0001952eu): goto L_1952E;
    case RC_ADDR(0x00019532u): goto L_19532;
    case RC_ADDR(0x00019534u): goto L_19534;
    case RC_ADDR(0x00019536u): goto L_19536;
    case RC_ADDR(0x0001953au): goto L_1953A;
    case RC_ADDR(0x00019540u): goto L_19540;
    case RC_ADDR(0x00019542u): goto L_19542;
    case RC_ADDR(0x00019544u): goto L_19544;
    case RC_ADDR(0x00019548u): goto L_19548;
    case RC_ADDR(0x0001954cu): goto L_1954C;
    case RC_ADDR(0x00019550u): goto L_19550;
    case RC_ADDR(0x00019554u): goto L_19554;
    case RC_ADDR(0x00019556u): goto L_19556;
    case RC_ADDR(0x00019558u): goto L_19558;
    case RC_ADDR(0x0001955cu): goto L_1955C;
    case RC_ADDR(0x00019562u): goto L_19562;
    case RC_ADDR(0x00019566u): goto L_19566;
    case RC_ADDR(0x0001956au): goto L_1956A;
    case RC_ADDR(0x0001956eu): goto L_1956E;
    case RC_ADDR(0x00019570u): goto L_19570;
    case RC_ADDR(0x00019572u): goto L_19572;
    case RC_ADDR(0x00019574u): goto L_19574;
    case RC_ADDR(0x00019578u): goto L_19578;
    case RC_ADDR(0x0001957cu): goto L_1957C;
    case RC_ADDR(0x0001957eu): goto L_1957E;
    case RC_ADDR(0x00019580u): goto L_19580;
    case RC_ADDR(0x00019582u): goto L_19582;
    case RC_ADDR(0x00019586u): goto L_19586;
    case RC_ADDR(0x0001958au): goto L_1958A;
    case RC_ADDR(0x0001958eu): goto L_1958E;
    case RC_ADDR(0x00019592u): goto L_19592;
    case RC_ADDR(0x00019596u): goto L_19596;
    case RC_ADDR(0x00019598u): goto L_19598;
    case RC_ADDR(0x0001959au): goto L_1959A;
    case RC_ADDR(0x0001959cu): goto L_1959C;
    case RC_ADDR(0x000195a0u): goto L_195A0;
    case RC_ADDR(0x000195a2u): goto L_195A2;
    case RC_ADDR(0x000195a4u): goto L_195A4;
    case RC_ADDR(0x000195a8u): goto L_195A8;
    case RC_ADDR(0x000195aeu): goto L_195AE;
    case RC_ADDR(0x000195b2u): goto L_195B2;
    case RC_ADDR(0x000195b6u): goto L_195B6;
    case RC_ADDR(0x000195bau): goto L_195BA;
    case RC_ADDR(0x000195bcu): goto L_195BC;
    case RC_ADDR(0x000195beu): goto L_195BE;
    case RC_ADDR(0x000195c0u): goto L_195C0;
    case RC_ADDR(0x000195c4u): goto L_195C4;
    case RC_ADDR(0x000195c6u): goto L_195C6;
    case RC_ADDR(0x000195c8u): goto L_195C8;
    case RC_ADDR(0x000195ccu): goto L_195CC;
    case RC_ADDR(0x000195d2u): goto L_195D2;
    case RC_ADDR(0x000195d4u): goto L_195D4;
    case RC_ADDR(0x000195d6u): goto L_195D6;
    case RC_ADDR(0x000195d8u): goto L_195D8;
    case RC_ADDR(0x000195dcu): goto L_195DC;
    case RC_ADDR(0x000195e0u): goto L_195E0;
    case RC_ADDR(0x000195e2u): goto L_195E2;
    case RC_ADDR(0x000195e4u): goto L_195E4;
    case RC_ADDR(0x000195e8u): goto L_195E8;
    case RC_ADDR(0x000195eau): goto L_195EA;
    case RC_ADDR(0x000195ecu): goto L_195EC;
    case RC_ADDR(0x000195f0u): goto L_195F0;
    case RC_ADDR(0x000195f4u): goto L_195F4;
    case RC_ADDR(0x000195f6u): goto L_195F6;
    case RC_ADDR(0x000195f8u): goto L_195F8;
    case RC_ADDR(0x000195fcu): goto L_195FC;
    case RC_ADDR(0x00019600u): goto L_19600;
    case RC_ADDR(0x00019604u): goto L_19604;
    case RC_ADDR(0x00019608u): goto L_19608;
    case RC_ADDR(0x0001960au): goto L_1960A;
    case RC_ADDR(0x0001960cu): goto L_1960C;
    case RC_ADDR(0x00019610u): goto L_19610;
    case RC_ADDR(0x00019612u): goto L_19612;
    case RC_ADDR(0x00019614u): goto L_19614;
    case RC_ADDR(0x00019618u): goto L_19618;
    case RC_ADDR(0x0001961cu): goto L_1961C;
    case RC_ADDR(0x0001961eu): goto L_1961E;
    case RC_ADDR(0x00019620u): goto L_19620;
    case RC_ADDR(0x00019624u): goto L_19624;
    case RC_ADDR(0x00019628u): goto L_19628;
    case RC_ADDR(0x0001962cu): goto L_1962C;
    case RC_ADDR(0x00019630u): goto L_19630;
    case RC_ADDR(0x00019632u): goto L_19632;
    case RC_ADDR(0x00019636u): goto L_19636;
    case RC_ADDR(0x00019638u): goto L_19638;
    case RC_ADDR(0x0001963cu): goto L_1963C;
    case RC_ADDR(0x0001963eu): goto L_1963E;
    case RC_ADDR(0x00019640u): goto L_19640;
    case RC_ADDR(0x00019642u): goto L_19642;
    case RC_ADDR(0x00019648u): goto L_19648;
    case RC_ADDR(0x0001964cu): goto L_1964C;
    case RC_ADDR(0x00019650u): goto L_19650;
    case RC_ADDR(0x00019654u): goto L_19654;
    case RC_ADDR(0x00019658u): goto L_19658;
    case RC_ADDR(0x0001965au): goto L_1965A;
    case RC_ADDR(0x0001965cu): goto L_1965C;
    case RC_ADDR(0x0001965eu): goto L_1965E;
    case RC_ADDR(0x00019662u): goto L_19662;
    case RC_ADDR(0x00019668u): goto L_19668;
    case RC_ADDR(0x0001966cu): goto L_1966C;
    case RC_ADDR(0x00019670u): goto L_19670;
    case RC_ADDR(0x00019674u): goto L_19674;
    case RC_ADDR(0x0001967au): goto L_1967A;
    case RC_ADDR(0x0001967cu): goto L_1967C;
    case RC_ADDR(0x0001967eu): goto L_1967E;
    case RC_ADDR(0x00019682u): goto L_19682;
    case RC_ADDR(0x00019688u): goto L_19688;
    case RC_ADDR(0x0001968cu): goto L_1968C;
    case RC_ADDR(0x0001968eu): goto L_1968E;
    case RC_ADDR(0x00019690u): goto L_19690;
    case RC_ADDR(0x00019694u): goto L_19694;
    case RC_ADDR(0x00019696u): goto L_19696;
    case RC_ADDR(0x00019698u): goto L_19698;
    case RC_ADDR(0x0001969cu): goto L_1969C;
    case RC_ADDR(0x000196a2u): goto L_196A2;
    case RC_ADDR(0x000196a4u): goto L_196A4;
    case RC_ADDR(0x000196a6u): goto L_196A6;
    case RC_ADDR(0x000196aau): goto L_196AA;
    case RC_ADDR(0x000196acu): goto L_196AC;
    case RC_ADDR(0x000196aeu): goto L_196AE;
    case RC_ADDR(0x000196b2u): goto L_196B2;
    case RC_ADDR(0x000196b8u): goto L_196B8;
    case RC_ADDR(0x000196bau): goto L_196BA;
    case RC_ADDR(0x000196bcu): goto L_196BC;
    case RC_ADDR(0x000196c0u): goto L_196C0;
    case RC_ADDR(0x000196c2u): goto L_196C2;
    case RC_ADDR(0x000196c4u): goto L_196C4;
    case RC_ADDR(0x000196c8u): goto L_196C8;
    case RC_ADDR(0x000196ceu): goto L_196CE;
    case RC_ADDR(0x000196d2u): goto L_196D2;
    case RC_ADDR(0x000196d6u): goto L_196D6;
    case RC_ADDR(0x000196dau): goto L_196DA;
    case RC_ADDR(0x000196dcu): goto L_196DC;
    case RC_ADDR(0x000196deu): goto L_196DE;
    case RC_ADDR(0x000196e2u): goto L_196E2;
    case RC_ADDR(0x000196e8u): goto L_196E8;
    case RC_ADDR(0x000196ecu): goto L_196EC;
    case RC_ADDR(0x000196f0u): goto L_196F0;
    case RC_ADDR(0x000196f4u): goto L_196F4;
    case RC_ADDR(0x000196f6u): goto L_196F6;
    case RC_ADDR(0x000196f8u): goto L_196F8;
    case RC_ADDR(0x000196fcu): goto L_196FC;
    case RC_ADDR(0x00019702u): goto L_19702;
    case RC_ADDR(0x00019706u): goto L_19706;
    case RC_ADDR(0x0001970au): goto L_1970A;
    case RC_ADDR(0x0001970eu): goto L_1970E;
    case RC_ADDR(0x00019710u): goto L_19710;
    case RC_ADDR(0x00019712u): goto L_19712;
    case RC_ADDR(0x00019716u): goto L_19716;
    case RC_ADDR(0x0001971cu): goto L_1971C;
    case RC_ADDR(0x0001971eu): goto L_1971E;
    case RC_ADDR(0x00019720u): goto L_19720;
    case RC_ADDR(0x00019724u): goto L_19724;
    case RC_ADDR(0x0001972au): goto L_1972A;
    case RC_ADDR(0x0001972cu): goto L_1972C;
    case RC_ADDR(0x0001972eu): goto L_1972E;
    case RC_ADDR(0x00019732u): goto L_19732;
    case RC_ADDR(0x00019738u): goto L_19738;
    case RC_ADDR(0x0001973au): goto L_1973A;
    case RC_ADDR(0x0001973cu): goto L_1973C;
    case RC_ADDR(0x00019740u): goto L_19740;
    case RC_ADDR(0x00019744u): goto L_19744;
    case RC_ADDR(0x00019748u): goto L_19748;
    case RC_ADDR(0x0001974cu): goto L_1974C;
    case RC_ADDR(0x00019750u): goto L_19750;
    case RC_ADDR(0x00019754u): goto L_19754;
    case RC_ADDR(0x00019758u): goto L_19758;
    case RC_ADDR(0x0001975eu): goto L_1975E;
    case RC_ADDR(0x00019760u): goto L_19760;
    case RC_ADDR(0x00019762u): goto L_19762;
    case RC_ADDR(0x00019766u): goto L_19766;
    case RC_ADDR(0x0001976cu): goto L_1976C;
    case RC_ADDR(0x00019770u): goto L_19770;
    case RC_ADDR(0x00019772u): goto L_19772;
    case RC_ADDR(0x00019774u): goto L_19774;
    case RC_ADDR(0x00019778u): goto L_19778;
    case RC_ADDR(0x0001977cu): goto L_1977C;
    case RC_ADDR(0x0001977eu): goto L_1977E;
    case RC_ADDR(0x00019780u): goto L_19780;
    case RC_ADDR(0x00019782u): goto L_19782;
    case RC_ADDR(0x00019784u): goto L_19784;
    case RC_ADDR(0x00019788u): goto L_19788;
    case RC_ADDR(0x0001978cu): goto L_1978C;
    case RC_ADDR(0x0001978eu): goto L_1978E;
    case RC_ADDR(0x00019790u): goto L_19790;
    case RC_ADDR(0x00019794u): goto L_19794;
    case RC_ADDR(0x00019798u): goto L_19798;
    case RC_ADDR(0x0001979cu): goto L_1979C;
    case RC_ADDR(0x000197a0u): goto L_197A0;
    case RC_ADDR(0x000197a4u): goto L_197A4;
    case RC_ADDR(0x000197a6u): goto L_197A6;
    case RC_ADDR(0x000197a8u): goto L_197A8;
    case RC_ADDR(0x000197acu): goto L_197AC;
    case RC_ADDR(0x000197b0u): goto L_197B0;
    case RC_ADDR(0x000197b2u): goto L_197B2;
    case RC_ADDR(0x000197b4u): goto L_197B4;
    case RC_ADDR(0x000197b6u): goto L_197B6;
    case RC_ADDR(0x000197b8u): goto L_197B8;
    case RC_ADDR(0x000197bcu): goto L_197BC;
    case RC_ADDR(0x000197c0u): goto L_197C0;
    case RC_ADDR(0x000197c2u): goto L_197C2;
    case RC_ADDR(0x000197c4u): goto L_197C4;
    case RC_ADDR(0x000197c8u): goto L_197C8;
    case RC_ADDR(0x000197ccu): goto L_197CC;
    case RC_ADDR(0x000197d0u): goto L_197D0;
    case RC_ADDR(0x000197d4u): goto L_197D4;
    case RC_ADDR(0x000197d8u): goto L_197D8;
    case RC_ADDR(0x000197dau): goto L_197DA;
    case RC_ADDR(0x000197dcu): goto L_197DC;
    case RC_ADDR(0x000197e0u): goto L_197E0;
    case RC_ADDR(0x000197e6u): goto L_197E6;
    case RC_ADDR(0x000197e8u): goto L_197E8;
    case RC_ADDR(0x000197eau): goto L_197EA;
    case RC_ADDR(0x000197eeu): goto L_197EE;
    case RC_ADDR(0x000197f4u): goto L_197F4;
    case RC_ADDR(0x000197f8u): goto L_197F8;
    case RC_ADDR(0x000197fau): goto L_197FA;
    case RC_ADDR(0x000197fcu): goto L_197FC;
    case RC_ADDR(0x00019800u): goto L_19800;
    case RC_ADDR(0x00019804u): goto L_19804;
    case RC_ADDR(0x00019808u): goto L_19808;
    case RC_ADDR(0x0001980au): goto L_1980A;
    case RC_ADDR(0x0001980cu): goto L_1980C;
    case RC_ADDR(0x00019810u): goto L_19810;
    case RC_ADDR(0x00019814u): goto L_19814;
    case RC_ADDR(0x00019818u): goto L_19818;
    case RC_ADDR(0x0001981cu): goto L_1981C;
    case RC_ADDR(0x00019820u): goto L_19820;
    case RC_ADDR(0x00019824u): goto L_19824;
    case RC_ADDR(0x00019826u): goto L_19826;
    case RC_ADDR(0x00019828u): goto L_19828;
    case RC_ADDR(0x0001982au): goto L_1982A;
    case RC_ADDR(0x0001982eu): goto L_1982E;
    case RC_ADDR(0x00019834u): goto L_19834;
    case RC_ADDR(0x00019838u): goto L_19838;
    case RC_ADDR(0x0001983au): goto L_1983A;
    case RC_ADDR(0x0001983cu): goto L_1983C;
    case RC_ADDR(0x00019840u): goto L_19840;
    case RC_ADDR(0x00019846u): goto L_19846;
    case RC_ADDR(0x0001984au): goto L_1984A;
    case RC_ADDR(0x0001984cu): goto L_1984C;
    case RC_ADDR(0x0001984eu): goto L_1984E;
    case RC_ADDR(0x00019852u): goto L_19852;
    case RC_ADDR(0x00019858u): goto L_19858;
    case RC_ADDR(0x0001985cu): goto L_1985C;
    case RC_ADDR(0x0001985eu): goto L_1985E;
    case RC_ADDR(0x00019862u): goto L_19862;
    case RC_ADDR(0x00019866u): goto L_19866;
    case RC_ADDR(0x00019868u): goto L_19868;
    case RC_ADDR(0x0001986cu): goto L_1986C;
    case RC_ADDR(0x0001986eu): goto L_1986E;
    case RC_ADDR(0x00019872u): goto L_19872;
    case RC_ADDR(0x00019874u): goto L_19874;
    case RC_ADDR(0x00019878u): goto L_19878;
    case RC_ADDR(0x0001987cu): goto L_1987C;
    case RC_ADDR(0x0001987eu): goto L_1987E;
    case RC_ADDR(0x00019882u): goto L_19882;
    case RC_ADDR(0x00019884u): goto L_19884;
    case RC_ADDR(0x00019888u): goto L_19888;
    case RC_ADDR(0x0001988au): goto L_1988A;
    case RC_ADDR(0x0001988eu): goto L_1988E;
    case RC_ADDR(0x00019892u): goto L_19892;
    case RC_ADDR(0x00019894u): goto L_19894;
    case RC_ADDR(0x00019898u): goto L_19898;
    case RC_ADDR(0x0001989au): goto L_1989A;
    case RC_ADDR(0x0001989eu): goto L_1989E;
    case RC_ADDR(0x000198a0u): goto L_198A0;
    case RC_ADDR(0x000198a4u): goto L_198A4;
    case RC_ADDR(0x000198a8u): goto L_198A8;
    case RC_ADDR(0x000198aau): goto L_198AA;
    case RC_ADDR(0x000198aeu): goto L_198AE;
    case RC_ADDR(0x000198b0u): goto L_198B0;
    case RC_ADDR(0x000198b2u): goto L_198B2;
    case RC_ADDR(0x000198b4u): goto L_198B4;
    case RC_ADDR(0x000198b8u): goto L_198B8;
    case RC_ADDR(0x000198beu): goto L_198BE;
    case RC_ADDR(0x000198c0u): goto L_198C0;
    case RC_ADDR(0x000198c4u): goto L_198C4;
    case RC_ADDR(0x000198cau): goto L_198CA;
    case RC_ADDR(0x000198ceu): goto L_198CE;
    case RC_ADDR(0x000198d0u): goto L_198D0;
    case RC_ADDR(0x000198d2u): goto L_198D2;
    case RC_ADDR(0x000198d4u): goto L_198D4;
    case RC_ADDR(0x000198d8u): goto L_198D8;
    case RC_ADDR(0x000198deu): goto L_198DE;
    case RC_ADDR(0x000198e0u): goto L_198E0;
    case RC_ADDR(0x000198e2u): goto L_198E2;
    case RC_ADDR(0x000198e6u): goto L_198E6;
    case RC_ADDR(0x000198ecu): goto L_198EC;
    case RC_ADDR(0x000198f0u): goto L_198F0;
    case RC_ADDR(0x000198f4u): goto L_198F4;
    case RC_ADDR(0x000198f6u): goto L_198F6;
    case RC_ADDR(0x000198fau): goto L_198FA;
    case RC_ADDR(0x000198feu): goto L_198FE;
    case RC_ADDR(0x00019902u): goto L_19902;
    case RC_ADDR(0x00019904u): goto L_19904;
    case RC_ADDR(0x00019908u): goto L_19908;
    case RC_ADDR(0x0001990cu): goto L_1990C;
    case RC_ADDR(0x00019910u): goto L_19910;
    case RC_ADDR(0x00019912u): goto L_19912;
    case RC_ADDR(0x00019916u): goto L_19916;
    case RC_ADDR(0x0001991au): goto L_1991A;
    case RC_ADDR(0x0001991cu): goto L_1991C;
    case RC_ADDR(0x00019920u): goto L_19920;
    case RC_ADDR(0x00019922u): goto L_19922;
    case RC_ADDR(0x00019926u): goto L_19926;
    case RC_ADDR(0x00019928u): goto L_19928;
    case RC_ADDR(0x0001992cu): goto L_1992C;
    case RC_ADDR(0x00019930u): goto L_19930;
    case RC_ADDR(0x00019932u): goto L_19932;
    case RC_ADDR(0x00019936u): goto L_19936;
    case RC_ADDR(0x00019938u): goto L_19938;
    case RC_ADDR(0x0001993cu): goto L_1993C;
    case RC_ADDR(0x0001993eu): goto L_1993E;
    case RC_ADDR(0x00019942u): goto L_19942;
    case RC_ADDR(0x00019946u): goto L_19946;
    case RC_ADDR(0x00019948u): goto L_19948;
    case RC_ADDR(0x0001994cu): goto L_1994C;
    case RC_ADDR(0x0001994eu): goto L_1994E;
    case RC_ADDR(0x00019952u): goto L_19952;
    case RC_ADDR(0x00019954u): goto L_19954;
    case RC_ADDR(0x00019958u): goto L_19958;
    case RC_ADDR(0x0001995cu): goto L_1995C;
    case RC_ADDR(0x0001995eu): goto L_1995E;
    case RC_ADDR(0x00019962u): goto L_19962;
    case RC_ADDR(0x00019964u): goto L_19964;
    case RC_ADDR(0x00019966u): goto L_19966;
    case RC_ADDR(0x00019968u): goto L_19968;
    case RC_ADDR(0x0001996cu): goto L_1996C;
    case RC_ADDR(0x00019972u): goto L_19972;
    case RC_ADDR(0x00019974u): goto L_19974;
    case RC_ADDR(0x00019976u): goto L_19976;
    case RC_ADDR(0x00019978u): goto L_19978;
    case RC_ADDR(0x0001997cu): goto L_1997C;
    case RC_ADDR(0x00019980u): goto L_19980;
    case RC_ADDR(0x00019982u): goto L_19982;
    case RC_ADDR(0x00019984u): goto L_19984;
    case RC_ADDR(0x00019986u): goto L_19986;
    case RC_ADDR(0x0001998au): goto L_1998A;
    case RC_ADDR(0x0001998eu): goto L_1998E;
    case RC_ADDR(0x00019990u): goto L_19990;
    case RC_ADDR(0x00019992u): goto L_19992;
    case RC_ADDR(0x00019994u): goto L_19994;
    case RC_ADDR(0x00019998u): goto L_19998;
    case RC_ADDR(0x0001999cu): goto L_1999C;
    case RC_ADDR(0x000199a8u): goto L_199A8;
    case RC_ADDR(0x000199aeu): goto L_199AE;
    case RC_ADDR(0x000199b0u): goto L_199B0;
    case RC_ADDR(0x000199b2u): goto L_199B2;
    case RC_ADDR(0x000199b6u): goto L_199B6;
    case RC_ADDR(0x000199bau): goto L_199BA;
    case RC_ADDR(0x000199bcu): goto L_199BC;
    case RC_ADDR(0x000199beu): goto L_199BE;
    case RC_ADDR(0x000199c2u): goto L_199C2;
    case RC_ADDR(0x000199c6u): goto L_199C6;
    case RC_ADDR(0x000199c8u): goto L_199C8;
    case RC_ADDR(0x000199cau): goto L_199CA;
    case RC_ADDR(0x000199ceu): goto L_199CE;
    case RC_ADDR(0x000199d2u): goto L_199D2;
    case RC_ADDR(0x000199d4u): goto L_199D4;
    case RC_ADDR(0x000199d6u): goto L_199D6;
    case RC_ADDR(0x000199dau): goto L_199DA;
    case RC_ADDR(0x000199deu): goto L_199DE;
    case RC_ADDR(0x000199e0u): goto L_199E0;
    case RC_ADDR(0x000199e2u): goto L_199E2;
    case RC_ADDR(0x000199e4u): goto L_199E4;
    case RC_ADDR(0x000199e8u): goto L_199E8;
    case RC_ADDR(0x000199eeu): goto L_199EE;
    case RC_ADDR(0x000199f0u): goto L_199F0;
    case RC_ADDR(0x000199f2u): goto L_199F2;
    case RC_ADDR(0x000199f6u): goto L_199F6;
    case RC_ADDR(0x000199fcu): goto L_199FC;
    case RC_ADDR(0x000199feu): goto L_199FE;
    case RC_ADDR(0x00019a00u): goto L_19A00;
    case RC_ADDR(0x00019a04u): goto L_19A04;
    case RC_ADDR(0x00019a08u): goto L_19A08;
    case RC_ADDR(0x00019a0cu): goto L_19A0C;
    case RC_ADDR(0x00019a0eu): goto L_19A0E;
    case RC_ADDR(0x00019a10u): goto L_19A10;
    case RC_ADDR(0x00019a14u): goto L_19A14;
    case RC_ADDR(0x00019a1au): goto L_19A1A;
    case RC_ADDR(0x00019a1cu): goto L_19A1C;
    case RC_ADDR(0x00019a1eu): goto L_19A1E;
    case RC_ADDR(0x00019a22u): goto L_19A22;
    case RC_ADDR(0x00019a28u): goto L_19A28;
    case RC_ADDR(0x00019a2cu): goto L_19A2C;
    case RC_ADDR(0x00019a30u): goto L_19A30;
    case RC_ADDR(0x00019a32u): goto L_19A32;
    case RC_ADDR(0x00019a34u): goto L_19A34;
    case RC_ADDR(0x00019a38u): goto L_19A38;
    case RC_ADDR(0x00019a3au): goto L_19A3A;
    case RC_ADDR(0x00019a3eu): goto L_19A3E;
    case RC_ADDR(0x00019a40u): goto L_19A40;
    case RC_ADDR(0x00019a44u): goto L_19A44;
    case RC_ADDR(0x00019a46u): goto L_19A46;
    case RC_ADDR(0x00019a4au): goto L_19A4A;
    case RC_ADDR(0x00019a4eu): goto L_19A4E;
    case RC_ADDR(0x00019a52u): goto L_19A52;
    case RC_ADDR(0x00019a54u): goto L_19A54;
    case RC_ADDR(0x00019a56u): goto L_19A56;
    case RC_ADDR(0x00019a5au): goto L_19A5A;
    case RC_ADDR(0x00019a5cu): goto L_19A5C;
    case RC_ADDR(0x00019a60u): goto L_19A60;
    case RC_ADDR(0x00019a62u): goto L_19A62;
    case RC_ADDR(0x00019a66u): goto L_19A66;
    case RC_ADDR(0x00019a68u): goto L_19A68;
    case RC_ADDR(0x00019a6cu): goto L_19A6C;
    case RC_ADDR(0x00019a70u): goto L_19A70;
    case RC_ADDR(0x00019a72u): goto L_19A72;
    case RC_ADDR(0x00019a74u): goto L_19A74;
    case RC_ADDR(0x00019a78u): goto L_19A78;
    case RC_ADDR(0x00019a7au): goto L_19A7A;
    case RC_ADDR(0x00019a7cu): goto L_19A7C;
    case RC_ADDR(0x00019a80u): goto L_19A80;
    case RC_ADDR(0x00019a86u): goto L_19A86;
    case RC_ADDR(0x00019a88u): goto L_19A88;
    case RC_ADDR(0x00019a8au): goto L_19A8A;
    case RC_ADDR(0x00019a8eu): goto L_19A8E;
    case RC_ADDR(0x00019a90u): goto L_19A90;
    case RC_ADDR(0x00019a92u): goto L_19A92;
    case RC_ADDR(0x00019a96u): goto L_19A96;
    case RC_ADDR(0x00019a9cu): goto L_19A9C;
    case RC_ADDR(0x00019aa0u): goto L_19AA0;
    case RC_ADDR(0x00019aa4u): goto L_19AA4;
    case RC_ADDR(0x00019aa6u): goto L_19AA6;
    case RC_ADDR(0x00019aaau): goto L_19AAA;
    case RC_ADDR(0x00019aaeu): goto L_19AAE;
    case RC_ADDR(0x00019ab0u): goto L_19AB0;
    case RC_ADDR(0x00019ab2u): goto L_19AB2;
    case RC_ADDR(0x00019ab4u): goto L_19AB4;
    case RC_ADDR(0x00019ab6u): goto L_19AB6;
    case RC_ADDR(0x00019abau): goto L_19ABA;
    case RC_ADDR(0x00019abcu): goto L_19ABC;
    case RC_ADDR(0x00019ac0u): goto L_19AC0;
    case RC_ADDR(0x00019ac2u): goto L_19AC2;
    case RC_ADDR(0x00019ac4u): goto L_19AC4;
    case RC_ADDR(0x00019ac6u): goto L_19AC6;
    case RC_ADDR(0x00019acau): goto L_19ACA;
    case RC_ADDR(0x00019accu): goto L_19ACC;
    case RC_ADDR(0x00019ad0u): goto L_19AD0;
    case RC_ADDR(0x00019ad2u): goto L_19AD2;
    case RC_ADDR(0x00019ad4u): goto L_19AD4;
    case RC_ADDR(0x00019ad6u): goto L_19AD6;
    case RC_ADDR(0x00019adau): goto L_19ADA;
    case RC_ADDR(0x00019adcu): goto L_19ADC;
    case RC_ADDR(0x00019ae0u): goto L_19AE0;
    case RC_ADDR(0x00019ae2u): goto L_19AE2;
    case RC_ADDR(0x00019ae4u): goto L_19AE4;
    case RC_ADDR(0x00019ae6u): goto L_19AE6;
    case RC_ADDR(0x00019aeau): goto L_19AEA;
    case RC_ADDR(0x00019aecu): goto L_19AEC;
    case RC_ADDR(0x00019af0u): goto L_19AF0;
    case RC_ADDR(0x00019afau): goto L_19AFA;
    case RC_ADDR(0x00019b00u): goto L_19B00;
    case RC_ADDR(0x00019b02u): goto L_19B02;
    case RC_ADDR(0x00019b04u): goto L_19B04;
    case RC_ADDR(0x00019b08u): goto L_19B08;
    case RC_ADDR(0x00019b0cu): goto L_19B0C;
    case RC_ADDR(0x00019b0eu): goto L_19B0E;
    case RC_ADDR(0x00019b10u): goto L_19B10;
    case RC_ADDR(0x00019b14u): goto L_19B14;
    case RC_ADDR(0x00019b1au): goto L_19B1A;
    case RC_ADDR(0x00019b1cu): goto L_19B1C;
    case RC_ADDR(0x00019b20u): goto L_19B20;
    case RC_ADDR(0x00019b26u): goto L_19B26;
    case RC_ADDR(0x00019b2au): goto L_19B2A;
    case RC_ADDR(0x00019b30u): goto L_19B30;
    case RC_ADDR(0x00019b32u): goto L_19B32;
    case RC_ADDR(0x00019b34u): goto L_19B34;
    case RC_ADDR(0x00019b38u): goto L_19B38;
    case RC_ADDR(0x00019b3eu): goto L_19B3E;
    case RC_ADDR(0x00019b40u): goto L_19B40;
    case RC_ADDR(0x00019b46u): goto L_19B46;
    case RC_ADDR(0x00019b4au): goto L_19B4A;
    case RC_ADDR(0x00019b4eu): goto L_19B4E;
    case RC_ADDR(0x00019b52u): goto L_19B52;
    case RC_ADDR(0x00019b54u): goto L_19B54;
    case RC_ADDR(0x00019b56u): goto L_19B56;
    case RC_ADDR(0x00019b5cu): goto L_19B5C;
    case RC_ADDR(0x00019b60u): goto L_19B60;
    case RC_ADDR(0x00019b62u): goto L_19B62;
    case RC_ADDR(0x00019b64u): goto L_19B64;
    case RC_ADDR(0x00019b6au): goto L_19B6A;
    case RC_ADDR(0x00019b6eu): goto L_19B6E;
    case RC_ADDR(0x00019b70u): goto L_19B70;
    case RC_ADDR(0x00019b72u): goto L_19B72;
    case RC_ADDR(0x00019b78u): goto L_19B78;
    case RC_ADDR(0x00019b7cu): goto L_19B7C;
    case RC_ADDR(0x00019b7eu): goto L_19B7E;
    case RC_ADDR(0x00019b80u): goto L_19B80;
    case RC_ADDR(0x00019b86u): goto L_19B86;
    case RC_ADDR(0x00019b8au): goto L_19B8A;
    case RC_ADDR(0x00019b8cu): goto L_19B8C;
    case RC_ADDR(0x00019b8eu): goto L_19B8E;
    case RC_ADDR(0x00019b92u): goto L_19B92;
    case RC_ADDR(0x00019b94u): goto L_19B94;
    case RC_ADDR(0x00019b98u): goto L_19B98;
    case RC_ADDR(0x00019b9au): goto L_19B9A;
    case RC_ADDR(0x00019b9eu): goto L_19B9E;
    case RC_ADDR(0x00019ba0u): goto L_19BA0;
    case RC_ADDR(0x00019ba4u): goto L_19BA4;
    case RC_ADDR(0x00019ba8u): goto L_19BA8;
    case RC_ADDR(0x00019baau): goto L_19BAA;
    case RC_ADDR(0x00019bacu): goto L_19BAC;
    case RC_ADDR(0x00019bb0u): goto L_19BB0;
    case RC_ADDR(0x00019bb2u): goto L_19BB2;
    case RC_ADDR(0x00019bb6u): goto L_19BB6;
    case RC_ADDR(0x00019bb8u): goto L_19BB8;
    case RC_ADDR(0x00019bbcu): goto L_19BBC;
    case RC_ADDR(0x00019bbeu): goto L_19BBE;
    case RC_ADDR(0x00019bc2u): goto L_19BC2;
    case RC_ADDR(0x00019bc4u): goto L_19BC4;
    case RC_ADDR(0x00019bc6u): goto L_19BC6;
    case RC_ADDR(0x00019bccu): goto L_19BCC;
    case RC_ADDR(0x00019bceu): goto L_19BCE;
    case RC_ADDR(0x00019bd0u): goto L_19BD0;
    case RC_ADDR(0x00019bd2u): goto L_19BD2;
    case RC_ADDR(0x00019bd6u): goto L_19BD6;
    case RC_ADDR(0x00019bdau): goto L_19BDA;
    case RC_ADDR(0x00019bdcu): goto L_19BDC;
    case RC_ADDR(0x00019bdeu): goto L_19BDE;
    case RC_ADDR(0x00019be0u): goto L_19BE0;
    case RC_ADDR(0x00019be2u): goto L_19BE2;
    case RC_ADDR(0x00019be4u): goto L_19BE4;
    case RC_ADDR(0x00019be8u): goto L_19BE8;
    case RC_ADDR(0x00019becu): goto L_19BEC;
    case RC_ADDR(0x00019beeu): goto L_19BEE;
    case RC_ADDR(0x00019bf0u): goto L_19BF0;
    case RC_ADDR(0x00019bf2u): goto L_19BF2;
    case RC_ADDR(0x00019bf4u): goto L_19BF4;
    case RC_ADDR(0x00019bf6u): goto L_19BF6;
    case RC_ADDR(0x00019bfau): goto L_19BFA;
    case RC_ADDR(0x00019bfeu): goto L_19BFE;
    case RC_ADDR(0x00019c00u): goto L_19C00;
    case RC_ADDR(0x00019c02u): goto L_19C02;
    case RC_ADDR(0x00019c04u): goto L_19C04;
    case RC_ADDR(0x00019c06u): goto L_19C06;
    case RC_ADDR(0x00019c08u): goto L_19C08;
    case RC_ADDR(0x00019c0cu): goto L_19C0C;
    case RC_ADDR(0x00019c10u): goto L_19C10;
    case RC_ADDR(0x00019c12u): goto L_19C12;
    case RC_ADDR(0x00019c14u): goto L_19C14;
    case RC_ADDR(0x00019c16u): goto L_19C16;
    case RC_ADDR(0x00019c1au): goto L_19C1A;
    case RC_ADDR(0x00019c1eu): goto L_19C1E;
    case RC_ADDR(0x00019c20u): goto L_19C20;
    case RC_ADDR(0x00019c22u): goto L_19C22;
    case RC_ADDR(0x00019c26u): goto L_19C26;
    case RC_ADDR(0x00019c28u): goto L_19C28;
    case RC_ADDR(0x00019c2au): goto L_19C2A;
    case RC_ADDR(0x00019c2eu): goto L_19C2E;
    case RC_ADDR(0x00019c30u): goto L_19C30;
    case RC_ADDR(0x00019c34u): goto L_19C34;
    case RC_ADDR(0x00019c38u): goto L_19C38;
    case RC_ADDR(0x00019c3cu): goto L_19C3C;
    case RC_ADDR(0x00019c40u): goto L_19C40;
    case RC_ADDR(0x00019c44u): goto L_19C44;
    case RC_ADDR(0x00019c46u): goto L_19C46;
    case RC_ADDR(0x00019c4au): goto L_19C4A;
    case RC_ADDR(0x00019c4cu): goto L_19C4C;
    case RC_ADDR(0x00019c4eu): goto L_19C4E;
    case RC_ADDR(0x00019c52u): goto L_19C52;
    case RC_ADDR(0x00019c54u): goto L_19C54;
    case RC_ADDR(0x00019c58u): goto L_19C58;
    case RC_ADDR(0x00019c5au): goto L_19C5A;
    case RC_ADDR(0x00019c5eu): goto L_19C5E;
    case RC_ADDR(0x00019c60u): goto L_19C60;
    case RC_ADDR(0x00019c64u): goto L_19C64;
    case RC_ADDR(0x00019c68u): goto L_19C68;
    case RC_ADDR(0x00019c6au): goto L_19C6A;
    case RC_ADDR(0x00019c6eu): goto L_19C6E;
    case RC_ADDR(0x00019c70u): goto L_19C70;
    case RC_ADDR(0x00019c72u): goto L_19C72;
    case RC_ADDR(0x00019c76u): goto L_19C76;
    case RC_ADDR(0x00019c78u): goto L_19C78;
    case RC_ADDR(0x00019c7cu): goto L_19C7C;
    case RC_ADDR(0x00019c80u): goto L_19C80;
    case RC_ADDR(0x00019c82u): goto L_19C82;
    case RC_ADDR(0x00019c84u): goto L_19C84;
    case RC_ADDR(0x00019c88u): goto L_19C88;
    case RC_ADDR(0x00019c8au): goto L_19C8A;
    case RC_ADDR(0x00019c8eu): goto L_19C8E;
    case RC_ADDR(0x00019c92u): goto L_19C92;
    case RC_ADDR(0x00019c96u): goto L_19C96;
    case RC_ADDR(0x00019c9au): goto L_19C9A;
    case RC_ADDR(0x00019c9cu): goto L_19C9C;
    case RC_ADDR(0x00019ca2u): goto L_19CA2;
    case RC_ADDR(0x00019ca6u): goto L_19CA6;
    case RC_ADDR(0x00019ca8u): goto L_19CA8;
    case RC_ADDR(0x00019caeu): goto L_19CAE;
    case RC_ADDR(0x00019cb2u): goto L_19CB2;
    case RC_ADDR(0x00019cb4u): goto L_19CB4;
    case RC_ADDR(0x00019cbau): goto L_19CBA;
    case RC_ADDR(0x00019cbeu): goto L_19CBE;
    case RC_ADDR(0x00019cc0u): goto L_19CC0;
    case RC_ADDR(0x00019cc6u): goto L_19CC6;
    case RC_ADDR(0x00019cc8u): goto L_19CC8;
    case RC_ADDR(0x00019ccau): goto L_19CCA;
    case RC_ADDR(0x00019cceu): goto L_19CCE;
    case RC_ADDR(0x00019cd4u): goto L_19CD4;
    case RC_ADDR(0x00019cd6u): goto L_19CD6;
    case RC_ADDR(0x00019cd8u): goto L_19CD8;
    case RC_ADDR(0x00019cdau): goto L_19CDA;
    case RC_ADDR(0x00019cdeu): goto L_19CDE;
    case RC_ADDR(0x00019ce0u): goto L_19CE0;
    case RC_ADDR(0x00019ce2u): goto L_19CE2;
    case RC_ADDR(0x00019ce4u): goto L_19CE4;
    case RC_ADDR(0x00019ce8u): goto L_19CE8;
    case RC_ADDR(0x00019cecu): goto L_19CEC;
    case RC_ADDR(0x00019ceeu): goto L_19CEE;
    case RC_ADDR(0x00019cf0u): goto L_19CF0;
    case RC_ADDR(0x00019cf2u): goto L_19CF2;
    case RC_ADDR(0x00019cf6u): goto L_19CF6;
    case RC_ADDR(0x00019cfau): goto L_19CFA;
    case RC_ADDR(0x00019cfcu): goto L_19CFC;
    case RC_ADDR(0x00019cfeu): goto L_19CFE;
    case RC_ADDR(0x00019d00u): goto L_19D00;
    case RC_ADDR(0x00019d04u): goto L_19D04;
    case RC_ADDR(0x00019d0au): goto L_19D0A;
    case RC_ADDR(0x00019d0cu): goto L_19D0C;
    case RC_ADDR(0x00019d0eu): goto L_19D0E;
    case RC_ADDR(0x00019d10u): goto L_19D10;
    case RC_ADDR(0x00019d14u): goto L_19D14;
    case RC_ADDR(0x00019d16u): goto L_19D16;
    case RC_ADDR(0x00019d18u): goto L_19D18;
    case RC_ADDR(0x00019d1cu): goto L_19D1C;
    case RC_ADDR(0x00019d20u): goto L_19D20;
    case RC_ADDR(0x00019d22u): goto L_19D22;
    case RC_ADDR(0x00019d24u): goto L_19D24;
    case RC_ADDR(0x00019d26u): goto L_19D26;
    case RC_ADDR(0x00019d2au): goto L_19D2A;
    case RC_ADDR(0x00019d30u): goto L_19D30;
    case RC_ADDR(0x00019d32u): goto L_19D32;
    case RC_ADDR(0x00019d34u): goto L_19D34;
    case RC_ADDR(0x00019d38u): goto L_19D38;
    case RC_ADDR(0x00019d3au): goto L_19D3A;
    case RC_ADDR(0x00019d3cu): goto L_19D3C;
    case RC_ADDR(0x00019d40u): goto L_19D40;
    case RC_ADDR(0x00019d44u): goto L_19D44;
    case RC_ADDR(0x00019d46u): goto L_19D46;
    case RC_ADDR(0x00019d48u): goto L_19D48;
    case RC_ADDR(0x00019d4cu): goto L_19D4C;
    case RC_ADDR(0x00019d50u): goto L_19D50;
    case RC_ADDR(0x00019d54u): goto L_19D54;
    case RC_ADDR(0x00019d56u): goto L_19D56;
    case RC_ADDR(0x00019d58u): goto L_19D58;
    case RC_ADDR(0x00019d5cu): goto L_19D5C;
    case RC_ADDR(0x00019d60u): goto L_19D60;
    case RC_ADDR(0x00019d64u): goto L_19D64;
    case RC_ADDR(0x00019d66u): goto L_19D66;
    case RC_ADDR(0x00019d6cu): goto L_19D6C;
    case RC_ADDR(0x00019d70u): goto L_19D70;
    case RC_ADDR(0x00019d76u): goto L_19D76;
    case RC_ADDR(0x00019d7au): goto L_19D7A;
    case RC_ADDR(0x00019d80u): goto L_19D80;
    case RC_ADDR(0x00019d82u): goto L_19D82;
    case RC_ADDR(0x00019d88u): goto L_19D88;
    case RC_ADDR(0x00019d8au): goto L_19D8A;
    case RC_ADDR(0x00019d90u): goto L_19D90;
    case RC_ADDR(0x00019d92u): goto L_19D92;
    case RC_ADDR(0x00019d96u): goto L_19D96;
    case RC_ADDR(0x00019d98u): goto L_19D98;
    case RC_ADDR(0x00019d9eu): goto L_19D9E;
    case RC_ADDR(0x00019da4u): goto L_19DA4;
    case RC_ADDR(0x00019daau): goto L_19DAA;
    case RC_ADDR(0x00019db0u): goto L_19DB0;
    case RC_ADDR(0x00019db6u): goto L_19DB6;
    case RC_ADDR(0x00019dbcu): goto L_19DBC;
    case RC_ADDR(0x00019dbeu): goto L_19DBE;
    case RC_ADDR(0x00019dc2u): goto L_19DC2;
    case RC_ADDR(0x00019dc4u): goto L_19DC4;
    case RC_ADDR(0x00019dcau): goto L_19DCA;
    case RC_ADDR(0x00019dd0u): goto L_19DD0;
    case RC_ADDR(0x00019dd6u): goto L_19DD6;
    case RC_ADDR(0x00019ddcu): goto L_19DDC;
    case RC_ADDR(0x00019de2u): goto L_19DE2;
    case RC_ADDR(0x00019de8u): goto L_19DE8;
    case RC_ADDR(0x00019decu): goto L_19DEC;
    case RC_ADDR(0x00019df0u): goto L_19DF0;
    case RC_ADDR(0x00019df2u): goto L_19DF2;
    case RC_ADDR(0x00019df6u): goto L_19DF6;
    case RC_ADDR(0x00019dfau): goto L_19DFA;
    case RC_ADDR(0x00019dfcu): goto L_19DFC;
    case RC_ADDR(0x00019e02u): goto L_19E02;
    case RC_ADDR(0x00019e08u): goto L_19E08;
    case RC_ADDR(0x00019e0cu): goto L_19E0C;
    case RC_ADDR(0x00019e10u): goto L_19E10;
    case RC_ADDR(0x00019e12u): goto L_19E12;
    case RC_ADDR(0x00019e16u): goto L_19E16;
    case RC_ADDR(0x00019e1au): goto L_19E1A;
    case RC_ADDR(0x00019e1cu): goto L_19E1C;
    case RC_ADDR(0x00019e22u): goto L_19E22;
    case RC_ADDR(0x00019e28u): goto L_19E28;
    case RC_ADDR(0x00019e2cu): goto L_19E2C;
    case RC_ADDR(0x00019e2eu): goto L_19E2E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19006:
    /* 00019006   4  link.w A5,#ffffffea */
    c->pc = RC_ADDR(0x00019006u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x16u;

L_1900A:
    /* 0001900a   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001900au);
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

L_1900E:
    /* 0001900e   4  clr.w (1cc0,A4) */
    c->pc = RC_ADDR(0x0001900eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cc0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19012:
    /* 00019012   4  move.w (47a,A4),D0 */
    c->pc = RC_ADDR(0x00019012u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19016:
    /* 00019016   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019016u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19018:
    /* 00019018   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x00019018u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_1901C:
    /* 0001901c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001901cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19020:
    /* 00019020   4  move.w (47c,A4),D0 */
    c->pc = RC_ADDR(0x00019020u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19024:
    /* 00019024   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019024u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19026:
    /* 00019026   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x00019026u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_1902A:
    /* 0001902a   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001902au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1902E:
    /* 0001902e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001902eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_19030:
    /* 00019030   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019030u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19032:
    /* 00019032   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019032u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19034:
    /* 00019034   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019034u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19038:
    /* 00019038   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00019038u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1903C:
    /* 0001903c   2  ext.l D6 */
    c->pc = RC_ADDR(0x0001903cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 6);

L_1903E:
    /* 0001903e   4  divs.w #30,D6 */
    c->pc = RC_ADDR(0x0001903eu);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 6, t0);

L_19042:
    /* 00019042   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019042u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19044:
    /* 00019044   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019044u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19046:
    /* 00019046   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019046u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_1904A:
    /* 0001904a   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x0001904au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1904E:
    /* 0001904e   2  ext.l D7 */
    c->pc = RC_ADDR(0x0001904eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 7);

L_19050:
    /* 00019050   4  divs.w #28,D7 */
    c->pc = RC_ADDR(0x00019050u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 7, t0);

L_19054:
    /* 00019054   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019054u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19056:
    /* 00019056   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019056u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19058:
    /* 00019058   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019058u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_1905C:
    /* 0001905c   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001905cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19062:
    /* 00019062   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019062u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19064:
    /* 00019064   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019064u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19066:
    /* 00019066   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x00019066u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_1906A:
    /* 0001906a   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001906au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19070:
    /* 00019070   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019070u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19072:
    /* 00019072   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019072u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19074:
    /* 00019074   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x00019074u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_19078:
    /* 00019078   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019078u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1907C:
    /* 0001907c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001907cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1907E:
    /* 0001907e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001907eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19080:
    /* 00019080   4  lea (13ce,A4),A0 */
    c->pc = RC_ADDR(0x00019080u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13ceu);

L_19084:
    /* 00019084   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00019084u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19088:
    /* 00019088   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x00019088u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1908A:
    /* 0001908a   4  bne 000191dc */
    c->pc = RC_ADDR(0x0001908au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_191DC;

L_1908E:
    /* 0001908e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001908eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19090:
    /* 00019090   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019090u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19092:
    /* 00019092   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x00019092u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_19096:
    /* 00019096   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019096u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1909A:
    /* 0001909a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001909au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1909C:
    /* 0001909c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001909cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1909E:
    /* 0001909e   4  lea (13e6,A4),A0 */
    c->pc = RC_ADDR(0x0001909eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13e6u);

L_190A2:
    /* 000190a2   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000190a2u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190A6:
    /* 000190a6   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x000190a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_190A8:
    /* 000190a8   4  bne 000191dc */
    c->pc = RC_ADDR(0x000190a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_191DC;

L_190AC:
    /* 000190ac   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x000190acu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_190B0:
    /* 000190b0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000190b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_190B2:
    /* 000190b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000190b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_190B4:
    /* 000190b4   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x000190b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_190B8:
    /* 000190b8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000190b8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190BC:
    /* 000190bc   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x000190bcu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_190C0:
    /* 000190c0   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000190c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190C4:
    /* 000190c4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000190c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_190C6:
    /* 000190c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000190c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_190C8:
    /* 000190c8   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x000190c8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_190CA:
    /* 000190ca   4  lea (13fe,A4),A0 */
    c->pc = RC_ADDR(0x000190cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13feu);

L_190CE:
    /* 000190ce   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000190ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_190D0:
    /* 000190d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000190d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_190D2:
    /* 000190d2   4  lea (1f28,A4),A1 */
    c->pc = RC_ADDR(0x000190d2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f28u);

L_190D6:
    /* 000190d6   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x000190d6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190DA:
    /* 000190da   4  cmp.w (0,A1,D0.w),D2 */
    c->pc = RC_ADDR(0x000190dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_190DE:
    /* 000190de   2  bne 00019114 */
    c->pc = RC_ADDR(0x000190deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19114;

L_190E0:
    /* 000190e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000190e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_190E2:
    /* 000190e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000190e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_190E4:
    /* 000190e4   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x000190e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_190E8:
    /* 000190e8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000190e8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190EC:
    /* 000190ec   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x000190ecu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_190F0:
    /* 000190f0   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000190f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190F4:
    /* 000190f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000190f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_190F6:
    /* 000190f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000190f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_190F8:
    /* 000190f8   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x000190f8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_190FA:
    /* 000190fa   4  lea (13fe,A4),A0 */
    c->pc = RC_ADDR(0x000190fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13feu);

L_190FE:
    /* 000190fe   6  move.w (0,A0,D1.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x000190feu);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19104:
    /* 00019104   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019104u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19106:
    /* 00019106   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019106u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19108:
    /* 00019108   4  lea (1f28,A4),A0 */
    c->pc = RC_ADDR(0x00019108u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f28u);

L_1910C:
    /* 0001910c   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001910cu);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19112:
    /* 00019112   2  bra 00019170 */
    c->pc = RC_ADDR(0x00019112u);
    rc_step(c, m, 10);
    goto L_19170;

L_19114:
    /* 00019114   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019114u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19118:
    /* 00019118   6  cmpi.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019118u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1911E:
    /* 0001911e   2  blt 000190b0 */
    c->pc = RC_ADDR(0x0001911eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_190B0; }

L_19120:
    /* 00019120   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00019120u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19124:
    /* 00019124   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019124u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19126:
    /* 00019126   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019126u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19128:
    /* 00019128   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x00019128u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_1912C:
    /* 0001912c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001912cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19130:
    /* 00019130   4  muls.w #6,D1 */
    c->pc = RC_ADDR(0x00019130u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 1, t0);

L_19134:
    /* 00019134   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00019134u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19136:
    /* 00019136   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00019136u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1913A:
    /* 0001913a   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001913au);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001913eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_1913E:
    /* 0001913e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001913eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19140:
    /* 00019140   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019140u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19142:
    /* 00019142   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019142u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19144:
    /* 00019144   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00019144u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19146:
    /* 00019146   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x00019146u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_19148:
    /* 00019148   4  lea (13fe,A4),A0 */
    c->pc = RC_ADDR(0x00019148u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13feu);

L_1914C:
    /* 0001914c   6  move.w (0,A0,D1.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001914cu);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19152:
    /* 00019152   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019152u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19154:
    /* 00019154   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019154u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19156:
    /* 00019156   4  lea (1f10,A4),A0 */
    c->pc = RC_ADDR(0x00019156u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f10u);

L_1915A:
    /* 0001915a   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001915au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1915E:
    /* 0001915e   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001915eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19162:
    /* 00019162   2  bne 00019170 */
    c->pc = RC_ADDR(0x00019162u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19170;

L_19164:
    /* 00019164   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00019164u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19168:
    /* 00019168   6  cmpi.w #8,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00019168u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1916E:
    /* 0001916e   2  blt 00019124 */
    c->pc = RC_ADDR(0x0001916eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19124; }

L_19170:
    /* 00019170   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019170u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19172:
    /* 00019172   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019172u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19174:
    /* 00019174   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x00019174u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_19178:
    /* 00019178   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019178u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1917A:
    /* 0001917a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001917au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1917C:
    /* 0001917c   4  lea (1f10,A4),A1 */
    c->pc = RC_ADDR(0x0001917cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1f10u);

L_19180:
    /* 00019180   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019180u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19186:
    /* 00019186   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019186u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19188:
    /* 00019188   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019188u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1918A:
    /* 0001918a   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x0001918au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_1918E:
    /* 0001918e   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001918eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19194:
    /* 00019194   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019194u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19196:
    /* 00019196   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019196u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19198:
    /* 00019198   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019198u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_1919C:
    /* 0001919c   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001919cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191A0:
    /* 000191a0   2  ext.l D1 */
    c->pc = RC_ADDR(0x000191a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_191A2:
    /* 000191a2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000191a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_191A4:
    /* 000191a4   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x000191a4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13ceu);

L_191A8:
    /* 000191a8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000191a8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191AC:
    /* 000191ac   4  muls.w #30,D2 */
    c->pc = RC_ADDR(0x000191acu);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 2, t0);

L_191B0:
    /* 000191b0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000191b0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_191B4:
    /* 000191b4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000191b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_191B6:
    /* 000191b6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000191b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_191B8:
    /* 000191b8   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x000191b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_191BC:
    /* 000191bc   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x000191bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191C0:
    /* 000191c0   2  ext.l D1 */
    c->pc = RC_ADDR(0x000191c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_191C2:
    /* 000191c2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000191c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_191C4:
    /* 000191c4   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x000191c4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13e6u);

L_191C8:
    /* 000191c8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000191c8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191CC:
    /* 000191cc   4  muls.w #28,D2 */
    c->pc = RC_ADDR(0x000191ccu);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 2, t0);

L_191D0:
    /* 000191d0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000191d0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_191D4:
    /* 000191d4   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x000191d4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_191D6:
    /* 000191d6   4  jsr (0001a676) */
    c->pc = RC_ADDR(0x000191d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000191dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a676u);
    return;

L_191DA:
    /* 000191da   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000191dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_191DC:
    /* 000191dc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000191dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_191DE:
    /* 000191de   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000191deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_191E0:
    /* 000191e0   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x000191e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_191E4:
    /* 000191e4   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x000191e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_191E6:
    /* 000191e6   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000191e6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191EA:
    /* 000191ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000191eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_191EC:
    /* 000191ec   4  bra 000199a8 */
    c->pc = RC_ADDR(0x000191ecu);
    rc_step(c, m, 10);
    goto L_199A8;

L_191F0:
    /* 000191f0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000191f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_191F4:
    /* 000191f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000191f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_191F6:
    /* 000191f6   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x000191f6u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_191FA:
    /* 000191fa   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000191fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_191FE:
    /* 000191fe   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000191feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19202:
    /* 00019202   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019202u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19204:
    /* 00019204   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x00019204u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_19208:
    /* 00019208   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019208u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1920C:
    /* 0001920c   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001920cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19210:
    /* 00019210   2  bgt 00019222 */
    c->pc = RC_ADDR(0x00019210u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19222;

L_19212:
    /* 00019212   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019212u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19216:
    /* 00019216   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019216u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1921A:
    /* 0001921a   2  bgt 00019222 */
    c->pc = RC_ADDR(0x0001921au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19222;

L_1921C:
    /* 0001921c   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001921cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19220:
    /* 00019220   2  beq 00019264 */
    c->pc = RC_ADDR(0x00019220u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19264;

L_19222:
    /* 00019222   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019222u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19226:
    /* 00019226   2  blt 00019238 */
    c->pc = RC_ADDR(0x00019226u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19238;

L_19228:
    /* 00019228   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019228u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1922C:
    /* 0001922c   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001922cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19230:
    /* 00019230   2  blt 00019238 */
    c->pc = RC_ADDR(0x00019230u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19238;

L_19232:
    /* 00019232   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019232u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19236:
    /* 00019236   2  beq 00019264 */
    c->pc = RC_ADDR(0x00019236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19264;

L_19238:
    /* 00019238   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019238u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1923C:
    /* 0001923c   2  bgt 0001924e */
    c->pc = RC_ADDR(0x0001923cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1924E;

L_1923E:
    /* 0001923e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001923eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19242:
    /* 00019242   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019242u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19246:
    /* 00019246   2  bgt 0001924e */
    c->pc = RC_ADDR(0x00019246u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1924E;

L_19248:
    /* 00019248   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019248u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1924C:
    /* 0001924c   2  beq 00019264 */
    c->pc = RC_ADDR(0x0001924cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19264;

L_1924E:
    /* 0001924e   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001924eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19252:
    /* 00019252   2  blt 00019290 */
    c->pc = RC_ADDR(0x00019252u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19290;

L_19254:
    /* 00019254   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00019254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19258:
    /* 00019258   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019258u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1925C:
    /* 0001925c   2  blt 00019290 */
    c->pc = RC_ADDR(0x0001925cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19290;

L_1925E:
    /* 0001925e   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001925eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19262:
    /* 00019262   2  bne 00019290 */
    c->pc = RC_ADDR(0x00019262u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19290;

L_19264:
    /* 00019264   4  tst.w (1f48,A4) */
    c->pc = RC_ADDR(0x00019264u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f48u));
    rc_set_nzvc(c, t0, RC_W);

L_19268:
    /* 00019268   2  beq 00019290 */
    c->pc = RC_ADDR(0x00019268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19290;

L_1926A:
    /* 0001926a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001926au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1926C:
    /* 0001926c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001926cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1926E:
    /* 0001926e   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x0001926eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_19272:
    /* 00019272   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019272u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19278:
    /* 00019278   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019278u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1927A:
    /* 0001927a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001927au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1927C:
    /* 0001927c   4  lea (1cd0,A4),A0 */
    c->pc = RC_ADDR(0x0001927cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cd0u);

L_19280:
    /* 00019280   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019280u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_19284:
    /* 00019284   2  beq 0001928c */
    c->pc = RC_ADDR(0x00019284u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1928C;

L_19286:
    /* 00019286   4  jsr (0001b244) */
    c->pc = RC_ADDR(0x00019286u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001928au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b244u);
    return;

L_1928A:
    /* 0001928a   2  bra 00019290 */
    c->pc = RC_ADDR(0x0001928au);
    rc_step(c, m, 10);
    goto L_19290;

L_1928C:
    /* 0001928c   4  jsr (0001b296) */
    c->pc = RC_ADDR(0x0001928cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019290u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b296u);
    return;

L_19290:
    /* 00019290   4  jsr (0001ec16) */
    c->pc = RC_ADDR(0x00019290u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019294u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec16u);
    return;

L_19294:
    /* 00019294   4  btst #0,D0 */
    c->pc = RC_ADDR(0x00019294u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_19298:
    /* 00019298   4  bne 000193e6 */
    c->pc = RC_ADDR(0x00019298u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193E6;

L_1929C:
    /* 0001929c   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001929cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_192A0:
    /* 000192a0   4  bra 000193ce */
    c->pc = RC_ADDR(0x000192a0u);
    rc_step(c, m, 10);
    goto L_193CE;

L_192A4:
    /* 000192a4   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000192a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192A8:
    /* 000192a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000192a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_192AA:
    /* 000192aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000192aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_192AC:
    /* 000192ac   4  lea (14fe,A4),A0 */
    c->pc = RC_ADDR(0x000192acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14feu);

L_192B0:
    /* 000192b0   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x000192b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192B2:
    /* 000192b2   2  asl.w #4,D1 */
    c->pc = RC_ADDR(0x000192b2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_192B4:
    /* 000192b4   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x000192b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_192B6:
    /* 000192b6   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x000192b6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192BA:
    /* 000192ba   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x000192bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_192BC:
    /* 000192bc   4  bne 000193ca */
    c->pc = RC_ADDR(0x000192bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193CA;

L_192C0:
    /* 000192c0   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000192c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192C4:
    /* 000192c4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000192c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_192C6:
    /* 000192c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000192c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_192C8:
    /* 000192c8   4  lea (14fe,A4),A0 */
    c->pc = RC_ADDR(0x000192c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14feu);

L_192CC:
    /* 000192cc   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000192ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_192CE:
    /* 000192ce   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000192ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_192D0:
    /* 000192d0   4  lea (1df0,A4),A1 */
    c->pc = RC_ADDR(0x000192d0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1df0u);

L_192D4:
    /* 000192d4   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x000192d4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192D8:
    /* 000192d8   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000192d8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_192DC:
    /* 000192dc   4  beq 000193ca */
    c->pc = RC_ADDR(0x000192dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_193CA;

L_192E0:
    /* 000192e0   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000192e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192E4:
    /* 000192e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000192e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_192E6:
    /* 000192e6   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x000192e6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_192E8:
    /* 000192e8   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x000192e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_192EA:
    /* 000192ea   4  and.l (1f44,A4),D1 */
    c->pc = RC_ADDR(0x000192eau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1f44u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_192EE:
    /* 000192ee   4  bne 000193ca */
    c->pc = RC_ADDR(0x000192eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_193CA;

L_192F2:
    /* 000192f2   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000192f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_192F6:
    /* 000192f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000192f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_192F8:
    /* 000192f8   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x000192f8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_192FA:
    /* 000192fa   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x000192fau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_192FC:
    /* 000192fc   4  or.l D1,(1f44,A4) */
    c->pc = RC_ADDR(0x000192fcu);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x1f44u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_19300:
    /* 00019300   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019300u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19302:
    /* 00019302   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019302u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19304:
    /* 00019304   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x00019304u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_19308:
    /* 00019308   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019308u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1930E:
    /* 0001930e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001930eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19312:
    /* 00019312   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019312u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19314:
    /* 00019314   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019314u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19316:
    /* 00019316   4  lea (14fe,A4),A0 */
    c->pc = RC_ADDR(0x00019316u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14feu);

L_1931A:
    /* 0001931a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001931au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1931C:
    /* 0001931c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001931cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1931E:
    /* 0001931e   4  lea (1df0,A4),A1 */
    c->pc = RC_ADDR(0x0001931eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1df0u);

L_19322:
    /* 00019322   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019322u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19328:
    /* 00019328   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019328u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1932A:
    /* 0001932a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001932au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1932C:
    /* 0001932c   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x0001932cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19330:
    /* 00019330   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019330u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19332:
    /* 00019332   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019332u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19334:
    /* 00019334   4  lea (1d18,A4),A1 */
    c->pc = RC_ADDR(0x00019334u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d18u);

L_19338:
    /* 00019338   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019338u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1933E:
    /* 0001933e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001933eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19340:
    /* 00019340   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019340u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19342:
    /* 00019342   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019342u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19346:
    /* 00019346   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019346u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19348:
    /* 00019348   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019348u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1934A:
    /* 0001934a   4  lea (1d30,A4),A1 */
    c->pc = RC_ADDR(0x0001934au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d30u);

L_1934E:
    /* 0001934e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001934eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19354:
    /* 00019354   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019354u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19358:
    /* 00019358   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x00019358u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1935C:
    /* 0001935c   4  lea (152c,A4),A0 */
    c->pc = RC_ADDR(0x0001935cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x152cu);

L_19360:
    /* 00019360   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019360u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19362:
    /* 00019362   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019362u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19364:
    /* 00019364   4  lea (1d78,A4),A1 */
    c->pc = RC_ADDR(0x00019364u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d78u);

L_19368:
    /* 00019368   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019368u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1936E:
    /* 0001936e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001936eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19372:
    /* 00019372   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x00019372u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_19376:
    /* 00019376   4  lea (1754,A4),A0 */
    c->pc = RC_ADDR(0x00019376u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1754u);

L_1937A:
    /* 0001937a   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001937au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1937C:
    /* 0001937c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001937cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1937E:
    /* 0001937e   4  lea (1d90,A4),A1 */
    c->pc = RC_ADDR(0x0001937eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d90u);

L_19382:
    /* 00019382   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019382u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19388:
    /* 00019388   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019388u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1938C:
    /* 0001938c   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001938cu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_19390:
    /* 00019390   4  lea (197c,A4),A0 */
    c->pc = RC_ADDR(0x00019390u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x197cu);

L_19394:
    /* 00019394   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019394u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19396:
    /* 00019396   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019396u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19398:
    /* 00019398   4  lea (1e38,A4),A1 */
    c->pc = RC_ADDR(0x00019398u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e38u);

L_1939C:
    /* 0001939c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001939cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193A2:
    /* 000193a2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000193a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_193A4:
    /* 000193a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000193a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_193A6:
    /* 000193a6   4  lea (1e50,A4),A0 */
    c->pc = RC_ADDR(0x000193a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e50u);

L_193AA:
    /* 000193aa   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000193aau);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193B0:
    /* 000193b0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000193b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_193B2:
    /* 000193b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000193b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_193B4:
    /* 000193b4   4  lea (1e08,A4),A0 */
    c->pc = RC_ADDR(0x000193b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e08u);

L_193B8:
    /* 000193b8   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000193b8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_193BE:
    /* 000193be   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000193beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_193C0:
    /* 000193c0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000193c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_193C2:
    /* 000193c2   4  lea (1e20,A4),A0 */
    c->pc = RC_ADDR(0x000193c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e20u);

L_193C6:
    /* 000193c6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000193c6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_193CA:
    /* 000193ca   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000193cau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_193CE:
    /* 000193ce   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x000193ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_193D2:
    /* 000193d2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000193d2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_193D4:
    /* 000193d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000193d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_193D6:
    /* 000193d6   4  lea (ffffc650,A4),A0 */
    c->pc = RC_ADDR(0x000193d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x39b0u);

L_193DA:
    /* 000193da   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x000193dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_193DE:
    /* 000193de   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000193deu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_193E2:
    /* 000193e2   4  blt 000192a4 */
    c->pc = RC_ADDR(0x000193e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_192A4; }

L_193E6:
    /* 000193e6   4  bra 000199ba */
    c->pc = RC_ADDR(0x000193e6u);
    rc_step(c, m, 10);
    goto L_199BA;

L_193EA:
    /* 000193ea   6  cmpi.w #2,(478,A4) */
    c->pc = RC_ADDR(0x000193eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_193F0:
    /* 000193f0   4  bge 000194ca */
    c->pc = RC_ADDR(0x000193f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_194CA;

L_193F4:
    /* 000193f4   4  tst.w (1cb4,A4) */
    c->pc = RC_ADDR(0x000193f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_set_nzvc(c, t0, RC_W);

L_193F8:
    /* 000193f8   4  blt 000194ca */
    c->pc = RC_ADDR(0x000193f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_194CA;

L_193FC:
    /* 000193fc   6  move.w (1cb4,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x000193fcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19402:
    /* 00019402   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019402u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19404:
    /* 00019404   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019404u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19406:
    /* 00019406   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019406u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_1940A:
    /* 0001940a   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001940au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1940E:
    /* 0001940e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001940eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19410:
    /* 00019410   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019410u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19412:
    /* 00019412   4  lea (1446,A4),A1 */
    c->pc = RC_ADDR(0x00019412u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1446u);

L_19416:
    /* 00019416   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00019416u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1941A:
    /* 0001941a   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001941au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1941E:
    /* 0001941e   4  blt 000194ca */
    c->pc = RC_ADDR(0x0001941eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_194CA;

L_19422:
    /* 00019422   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019422u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19424:
    /* 00019424   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019424u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19426:
    /* 00019426   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019426u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_1942A:
    /* 0001942a   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001942au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1942E:
    /* 0001942e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001942eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19430:
    /* 00019430   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019430u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19432:
    /* 00019432   4  lea (14a2,A4),A1 */
    c->pc = RC_ADDR(0x00019432u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x14a2u);

L_19436:
    /* 00019436   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00019436u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1943A:
    /* 0001943a   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001943au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1943E:
    /* 0001943e   4  bge 000194ca */
    c->pc = RC_ADDR(0x0001943eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_194CA;

L_19442:
    /* 00019442   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019442u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19444:
    /* 00019444   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019444u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19446:
    /* 00019446   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019446u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_1944A:
    /* 0001944a   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0001944au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1944E:
    /* 0001944e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001944eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19450:
    /* 00019450   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019450u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19452:
    /* 00019452   4  lea (1474,A4),A1 */
    c->pc = RC_ADDR(0x00019452u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1474u);

L_19456:
    /* 00019456   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00019456u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1945A:
    /* 0001945a   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001945au);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1945E:
    /* 0001945e   2  blt 000194ca */
    c->pc = RC_ADDR(0x0001945eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_194CA;

L_19460:
    /* 00019460   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019460u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19462:
    /* 00019462   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019462u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19464:
    /* 00019464   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019464u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19468:
    /* 00019468   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00019468u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1946C:
    /* 0001946c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001946cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1946E:
    /* 0001946e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001946eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19470:
    /* 00019470   4  lea (14d0,A4),A1 */
    c->pc = RC_ADDR(0x00019470u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x14d0u);

L_19474:
    /* 00019474   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00019474u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19478:
    /* 00019478   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019478u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1947C:
    /* 0001947c   2  bge 000194ca */
    c->pc = RC_ADDR(0x0001947cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_194CA;

L_1947E:
    /* 0001947e   4  tst.w (1f48,A4) */
    c->pc = RC_ADDR(0x0001947eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f48u));
    rc_set_nzvc(c, t0, RC_W);

L_19482:
    /* 00019482   2  beq 000194ca */
    c->pc = RC_ADDR(0x00019482u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_194CA;

L_19484:
    /* 00019484   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019484u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19488:
    /* 00019488   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x00019488u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1948C:
    /* 0001948c   4  lea (152e,A4),A0 */
    c->pc = RC_ADDR(0x0001948cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x152eu);

L_19490:
    /* 00019490   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019490u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19492:
    /* 00019492   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019492u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19494:
    /* 00019494   4  lea (1d78,A4),A1 */
    c->pc = RC_ADDR(0x00019494u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d78u);

L_19498:
    /* 00019498   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019498u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1949E:
    /* 0001949e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001949eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194A2:
    /* 000194a2   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x000194a2u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_194A6:
    /* 000194a6   4  lea (1756,A4),A0 */
    c->pc = RC_ADDR(0x000194a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1756u);

L_194AA:
    /* 000194aa   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000194aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194AC:
    /* 000194ac   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000194acu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_194AE:
    /* 000194ae   4  lea (1d90,A4),A1 */
    c->pc = RC_ADDR(0x000194aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d90u);

L_194B2:
    /* 000194b2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000194b2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_194B8:
    /* 000194b8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000194b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194BA:
    /* 000194ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000194bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_194BC:
    /* 000194bc   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x000194bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_194C0:
    /* 000194c0   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000194c0u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_194C6:
    /* 000194c6   4  bra 000199ba */
    c->pc = RC_ADDR(0x000194c6u);
    rc_step(c, m, 10);
    goto L_199BA;

L_194CA:
    /* 000194ca   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000194cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194CC:
    /* 000194cc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000194ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_194CE:
    /* 000194ce   4  lea (1e50,A4),A0 */
    c->pc = RC_ADDR(0x000194ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e50u);

L_194D2:
    /* 000194d2   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000194d2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_194D6:
    /* 000194d6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000194d6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_194DA:
    /* 000194da   2  beq 00019532 */
    c->pc = RC_ADDR(0x000194dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19532;

L_194DC:
    /* 000194dc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000194dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194DE:
    /* 000194de   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000194deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_194E0:
    /* 000194e0   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x000194e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_194E4:
    /* 000194e4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000194e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194E6:
    /* 000194e6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000194e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_194E8:
    /* 000194e8   4  lea (1d78,A4),A1 */
    c->pc = RC_ADDR(0x000194e8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d78u);

L_194EC:
    /* 000194ec   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x000194ecu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_194F0:
    /* 000194f0   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000194f0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_194F4:
    /* 000194f4   4  bne 0001964c */
    c->pc = RC_ADDR(0x000194f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1964C;

L_194F8:
    /* 000194f8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000194f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_194FA:
    /* 000194fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000194fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_194FC:
    /* 000194fc   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000194fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19500:
    /* 00019500   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019500u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19502:
    /* 00019502   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019502u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19504:
    /* 00019504   4  lea (1d90,A4),A1 */
    c->pc = RC_ADDR(0x00019504u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d90u);

L_19508:
    /* 00019508   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x00019508u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1950C:
    /* 0001950c   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001950cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19510:
    /* 00019510   4  bne 0001964c */
    c->pc = RC_ADDR(0x00019510u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1964C;

L_19514:
    /* 00019514   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019514u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19516:
    /* 00019516   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019516u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19518:
    /* 00019518   4  lea (1e38,A4),A0 */
    c->pc = RC_ADDR(0x00019518u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e38u);

L_1951C:
    /* 0001951c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001951cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_19520:
    /* 00019520   2  beq 00019532 */
    c->pc = RC_ADDR(0x00019520u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19532;

L_19522:
    /* 00019522   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019522u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19524:
    /* 00019524   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019524u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19526:
    /* 00019526   4  lea (1e38,A4),A0 */
    c->pc = RC_ADDR(0x00019526u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e38u);

L_1952A:
    /* 0001952a   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001952au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1952E:
    /* 0001952e   4  bra 0001964c */
    c->pc = RC_ADDR(0x0001952eu);
    rc_step(c, m, 10);
    goto L_1964C;

L_19532:
    /* 00019532   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019532u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19534:
    /* 00019534   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019534u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19536:
    /* 00019536   4  lea (1e50,A4),A0 */
    c->pc = RC_ADDR(0x00019536u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e50u);

L_1953A:
    /* 0001953a   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001953au);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19540:
    /* 00019540   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019540u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19542:
    /* 00019542   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019542u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19544:
    /* 00019544   4  lea (1e20,A4),A0 */
    c->pc = RC_ADDR(0x00019544u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e20u);

L_19548:
    /* 00019548   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019548u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1954C:
    /* 0001954c   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001954cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19550:
    /* 00019550   4  move.w D1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00019550u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19554:
    /* 00019554   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019554u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19556:
    /* 00019556   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019556u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19558:
    /* 00019558   4  lea (1e08,A4),A0 */
    c->pc = RC_ADDR(0x00019558u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e08u);

L_1955C:
    /* 0001955c   6  move.w (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001955cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19562:
    /* 00019562   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019562u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19566:
    /* 00019566   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x00019566u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1956A:
    /* 0001956a   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x0001956au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1956E:
    /* 0001956e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001956eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19570:
    /* 00019570   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019570u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19572:
    /* 00019572   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00019572u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19574:
    /* 00019574   4  lea (152c,A4),A0 */
    c->pc = RC_ADDR(0x00019574u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x152cu);

L_19578:
    /* 00019578   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00019578u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1957C:
    /* 0001957c   2  beq 000195d4 */
    c->pc = RC_ADDR(0x0001957cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_195D4;

L_1957E:
    /* 0001957e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001957eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19580:
    /* 00019580   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019580u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19582:
    /* 00019582   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019582u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_19586:
    /* 00019586   4  move.w D6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019586u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 6, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1958A:
    /* 0001958a   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001958au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1958E:
    /* 0001958e   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x0001958eu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_19592:
    /* 00019592   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x00019592u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19596:
    /* 00019596   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019596u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19598:
    /* 00019598   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019598u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1959A:
    /* 0001959a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0001959au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1959C:
    /* 0001959c   4  lea (1754,A4),A0 */
    c->pc = RC_ADDR(0x0001959cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1754u);

L_195A0:
    /* 000195a0   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000195a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_195A2:
    /* 000195a2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000195a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_195A4:
    /* 000195a4   4  lea (1d90,A4),A1 */
    c->pc = RC_ADDR(0x000195a4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d90u);

L_195A8:
    /* 000195a8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000195a8u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_195AE:
    /* 000195ae   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000195aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_195B2:
    /* 000195b2   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x000195b2u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_195B6:
    /* 000195b6   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x000195b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_195BA:
    /* 000195ba   2  ext.l D1 */
    c->pc = RC_ADDR(0x000195bau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_195BC:
    /* 000195bc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000195bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_195BE:
    /* 000195be   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000195beu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_195C0:
    /* 000195c0   4  lea (197c,A4),A0 */
    c->pc = RC_ADDR(0x000195c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x197cu);

L_195C4:
    /* 000195c4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000195c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_195C6:
    /* 000195c6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000195c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_195C8:
    /* 000195c8   4  lea (1e38,A4),A1 */
    c->pc = RC_ADDR(0x000195c8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e38u);

L_195CC:
    /* 000195cc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000195ccu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_195D2:
    /* 000195d2   2  bra 0001964c */
    c->pc = RC_ADDR(0x000195d2u);
    rc_step(c, m, 10);
    goto L_1964C;

L_195D4:
    /* 000195d4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000195d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_195D6:
    /* 000195d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000195d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_195D8:
    /* 000195d8   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x000195d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_195DC:
    /* 000195dc   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000195dcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_195E0:
    /* 000195e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000195e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_195E2:
    /* 000195e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000195e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_195E4:
    /* 000195e4   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x000195e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_195E8:
    /* 000195e8   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000195e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_195EA:
    /* 000195ea   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000195eau);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_195EC:
    /* 000195ec   4  lea (1ef8,A4),A1 */
    c->pc = RC_ADDR(0x000195ecu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef8u);

L_195F0:
    /* 000195f0   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000195f0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_195F4:
    /* 000195f4   2  ext.l D2 */
    c->pc = RC_ADDR(0x000195f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_195F6:
    /* 000195f6   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x000195f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_195F8:
    /* 000195f8   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x000195f8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13ceu);

L_195FC:
    /* 000195fc   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x000195fcu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19600:
    /* 00019600   4  muls.w #30,D1 */
    c->pc = RC_ADDR(0x00019600u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 1, t0);

L_19604:
    /* 00019604   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019604u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19608:
    /* 00019608   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019608u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1960A:
    /* 0001960a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001960au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1960C:
    /* 0001960c   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x0001960cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_19610:
    /* 00019610   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019610u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19612:
    /* 00019612   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019612u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19614:
    /* 00019614   4  lea (1ef8,A4),A1 */
    c->pc = RC_ADDR(0x00019614u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1ef8u);

L_19618:
    /* 00019618   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019618u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1961C:
    /* 0001961c   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001961cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1961E:
    /* 0001961e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001961eu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_19620:
    /* 00019620   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x00019620u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13e6u);

L_19624:
    /* 00019624   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00019624u);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19628:
    /* 00019628   4  muls.w #28,D1 */
    c->pc = RC_ADDR(0x00019628u);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 1, t0);

L_1962C:
    /* 0001962c   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001962cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19630:
    /* 00019630   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00019630u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19632:
    /* 00019632   4  jsr (0001a676) */
    c->pc = RC_ADDR(0x00019632u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019636u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a676u);
    return;

L_19636:
    /* 00019636   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019636u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19638:
    /* 00019638   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019638u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1963C:
    /* 0001963c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001963cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1963E:
    /* 0001963e   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001963eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_19640:
    /* 00019640   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00019640u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_19642:
    /* 00019642   6  eori.l #ffffffff,D1 */
    c->pc = RC_ADDR(0x00019642u);
    rc_step(c, m, 16);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 ^ 0xffffffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_19648:
    /* 00019648   4  and.l D1,(1f44,A4) */
    c->pc = RC_ADDR(0x00019648u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x1f44u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 & rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_1964C:
    /* 0001964c   4  bra 000199ba */
    c->pc = RC_ADDR(0x0001964cu);
    rc_step(c, m, 10);
    goto L_199BA;

L_19650:
    /* 00019650   4  addq.w #1,(1cc0,A4) */
    c->pc = RC_ADDR(0x00019650u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cc0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19654:
    /* 00019654   4  tst.w (1cb4,A4) */
    c->pc = RC_ADDR(0x00019654u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_set_nzvc(c, t0, RC_W);

L_19658:
    /* 00019658   2  bge 00019668 */
    c->pc = RC_ADDR(0x00019658u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19668;

L_1965A:
    /* 0001965a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001965au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1965C:
    /* 0001965c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001965cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1965E:
    /* 0001965e   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x0001965eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_19662:
    /* 00019662   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019662u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19668:
    /* 00019668   4  bra 000199ba */
    c->pc = RC_ADDR(0x00019668u);
    rc_step(c, m, 10);
    goto L_199BA;

L_1966C:
    /* 0001966c   4  tst.w (1cb4,A4) */
    c->pc = RC_ADDR(0x0001966cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_set_nzvc(c, t0, RC_W);

L_19670:
    /* 00019670   4  blt 00019748 */
    c->pc = RC_ADDR(0x00019670u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19748;

L_19674:
    /* 00019674   6  move.w (1cb4,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019674u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb4u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1967A:
    /* 0001967a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001967au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1967C:
    /* 0001967c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001967cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1967E:
    /* 0001967e   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x0001967eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_19682:
    /* 00019682   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019682u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19688:
    /* 00019688   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019688u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1968C:
    /* 0001968c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001968cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1968E:
    /* 0001968e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001968eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19690:
    /* 00019690   4  lea (14fe,A4),A0 */
    c->pc = RC_ADDR(0x00019690u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x14feu);

L_19694:
    /* 00019694   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019694u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19696:
    /* 00019696   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019696u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19698:
    /* 00019698   4  lea (1df0,A4),A1 */
    c->pc = RC_ADDR(0x00019698u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1df0u);

L_1969C:
    /* 0001969c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001969cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196A2:
    /* 000196a2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000196a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196A4:
    /* 000196a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000196a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_196A6:
    /* 000196a6   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x000196a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_196AA:
    /* 000196aa   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000196aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196AC:
    /* 000196ac   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000196acu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_196AE:
    /* 000196ae   4  lea (1d18,A4),A1 */
    c->pc = RC_ADDR(0x000196aeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d18u);

L_196B2:
    /* 000196b2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000196b2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196B8:
    /* 000196b8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000196b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196BA:
    /* 000196ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000196bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_196BC:
    /* 000196bc   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000196bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_196C0:
    /* 000196c0   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000196c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196C2:
    /* 000196c2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000196c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_196C4:
    /* 000196c4   4  lea (1d30,A4),A1 */
    c->pc = RC_ADDR(0x000196c4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d30u);

L_196C8:
    /* 000196c8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000196c8u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196CE:
    /* 000196ce   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000196ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_196D2:
    /* 000196d2   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x000196d2u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_196D6:
    /* 000196d6   4  lea (152c,A4),A0 */
    c->pc = RC_ADDR(0x000196d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x152cu);

L_196DA:
    /* 000196da   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000196dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196DC:
    /* 000196dc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000196dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_196DE:
    /* 000196de   4  lea (1d78,A4),A1 */
    c->pc = RC_ADDR(0x000196deu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d78u);

L_196E2:
    /* 000196e2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000196e2u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196E8:
    /* 000196e8   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000196e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_196EC:
    /* 000196ec   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x000196ecu);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_196F0:
    /* 000196f0   4  lea (1754,A4),A0 */
    c->pc = RC_ADDR(0x000196f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1754u);

L_196F4:
    /* 000196f4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x000196f4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_196F6:
    /* 000196f6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000196f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_196F8:
    /* 000196f8   4  lea (1d90,A4),A1 */
    c->pc = RC_ADDR(0x000196f8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1d90u);

L_196FC:
    /* 000196fc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000196fcu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19702:
    /* 00019702   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019702u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19706:
    /* 00019706   4  muls.w #18,D0 */
    c->pc = RC_ADDR(0x00019706u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_muls(c, 0, t0);

L_1970A:
    /* 0001970a   4  lea (197c,A4),A0 */
    c->pc = RC_ADDR(0x0001970au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x197cu);

L_1970E:
    /* 0001970e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0001970eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19710:
    /* 00019710   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019710u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19712:
    /* 00019712   4  lea (1e38,A4),A1 */
    c->pc = RC_ADDR(0x00019712u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e38u);

L_19716:
    /* 00019716   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019716u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1971C:
    /* 0001971c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001971cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1971E:
    /* 0001971e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001971eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19720:
    /* 00019720   4  lea (1e50,A4),A0 */
    c->pc = RC_ADDR(0x00019720u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e50u);

L_19724:
    /* 00019724   6  move.w #28,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019724u);
    rc_step(c, m, 18);
    t0 = 0x00000028u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1972A:
    /* 0001972a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001972au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1972C:
    /* 0001972c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001972cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1972E:
    /* 0001972e   4  lea (1e08,A4),A0 */
    c->pc = RC_ADDR(0x0001972eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e08u);

L_19732:
    /* 00019732   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019732u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19738:
    /* 00019738   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019738u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1973A:
    /* 0001973a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001973au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1973C:
    /* 0001973c   4  lea (1e20,A4),A0 */
    c->pc = RC_ADDR(0x0001973cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e20u);

L_19740:
    /* 00019740   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019740u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19744:
    /* 00019744   4  bra 000199ba */
    c->pc = RC_ADDR(0x00019744u);
    rc_step(c, m, 10);
    goto L_199BA;

L_19748:
    /* 00019748   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019748u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1974C:
    /* 0001974c   4  beq 000198d0 */
    c->pc = RC_ADDR(0x0001974cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_198D0;

L_19750:
    /* 00019750   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019750u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19754:
    /* 00019754   4  beq 000198d0 */
    c->pc = RC_ADDR(0x00019754u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_198D0;

L_19758:
    /* 00019758   6  move.w (1cb2,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019758u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cb2u));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1975E:
    /* 0001975e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001975eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19760:
    /* 00019760   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019760u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19762:
    /* 00019762   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x00019762u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_19766:
    /* 00019766   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019766u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1976C:
    /* 0001976c   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x0001976cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19770:
    /* 00019770   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019770u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19772:
    /* 00019772   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019772u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19774:
    /* 00019774   4  lea (13ce,A4),A0 */
    c->pc = RC_ADDR(0x00019774u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13ceu);

L_19778:
    /* 00019778   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019778u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1977C:
    /* 0001977c   2  cmp.w D6,D1 */
    c->pc = RC_ADDR(0x0001977cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1977E:
    /* 0001977e   2  beq 000197a0 */
    c->pc = RC_ADDR(0x0001977eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_197A0;

L_19780:
    /* 00019780   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019780u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19782:
    /* 00019782   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019782u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19784:
    /* 00019784   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019784u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_19788:
    /* 00019788   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00019788u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1978C:
    /* 0001978c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001978cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1978E:
    /* 0001978e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001978eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19790:
    /* 00019790   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x00019790u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13ceu);

L_19794:
    /* 00019794   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019794u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19798:
    /* 00019798   4  muls.w #30,D2 */
    c->pc = RC_ADDR(0x00019798u);
    rc_step(c, m, 42);
    t0 = 0x00000030u;
    rc_muls(c, 2, t0);

L_1979C:
    /* 0001979c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001979cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197A0:
    /* 000197a0   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000197a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197A4:
    /* 000197a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000197a4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_197A6:
    /* 000197a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197A8:
    /* 000197a8   4  lea (13e6,A4),A0 */
    c->pc = RC_ADDR(0x000197a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13e6u);

L_197AC:
    /* 000197ac   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000197acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197B0:
    /* 000197b0   2  cmp.w D7,D1 */
    c->pc = RC_ADDR(0x000197b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_197B2:
    /* 000197b2   2  beq 000197d4 */
    c->pc = RC_ADDR(0x000197b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_197D4;

L_197B4:
    /* 000197b4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000197b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_197B6:
    /* 000197b6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197B8:
    /* 000197b8   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x000197b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_197BC:
    /* 000197bc   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x000197bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197C0:
    /* 000197c0   2  ext.l D1 */
    c->pc = RC_ADDR(0x000197c0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_197C2:
    /* 000197c2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000197c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_197C4:
    /* 000197c4   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x000197c4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13e6u);

L_197C8:
    /* 000197c8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x000197c8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197CC:
    /* 000197cc   4  muls.w #28,D2 */
    c->pc = RC_ADDR(0x000197ccu);
    rc_step(c, m, 42);
    t0 = 0x00000028u;
    rc_muls(c, 2, t0);

L_197D0:
    /* 000197d0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000197d0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197D4:
    /* 000197d4   4  jsr (0001a676) */
    c->pc = RC_ADDR(0x000197d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000197d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a676u);
    return;

L_197D8:
    /* 000197d8   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000197d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_197DA:
    /* 000197da   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197DC:
    /* 000197dc   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x000197dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_197E0:
    /* 000197e0   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000197e0u);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197E6:
    /* 000197e6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000197e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_197E8:
    /* 000197e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197EA:
    /* 000197ea   4  lea (1e38,A4),A0 */
    c->pc = RC_ADDR(0x000197eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e38u);

L_197EE:
    /* 000197ee   6  move.w #c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000197eeu);
    rc_step(c, m, 18);
    t0 = 0x000000c8u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197F4:
    /* 000197f4   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x000197f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197F8:
    /* 000197f8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000197f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_197FA:
    /* 000197fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197FC:
    /* 000197fc   4  lea (13ce,A4),A0 */
    c->pc = RC_ADDR(0x000197fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13ceu);

L_19800:
    /* 00019800   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00019800u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19804:
    /* 00019804   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019804u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19808:
    /* 00019808   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019808u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1980A:
    /* 0001980a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001980au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1980C:
    /* 0001980c   4  lea (13e6,A4),A0 */
    c->pc = RC_ADDR(0x0001980cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13e6u);

L_19810:
    /* 00019810   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x00019810u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19814:
    /* 00019814   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00019814u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19818:
    /* 00019818   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019818u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1981C:
    /* 0001981c   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0001981cu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_19820:
    /* 00019820   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x00019820u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19824:
    /* 00019824   2  ext.l D1 */
    c->pc = RC_ADDR(0x00019824u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_19826:
    /* 00019826   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019826u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19828:
    /* 00019828   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00019828u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1982A:
    /* 0001982a   4  lea (13fe,A4),A0 */
    c->pc = RC_ADDR(0x0001982au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13feu);

L_1982E:
    /* 0001982e   6  move.w (0,A0,D0.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001982eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19834:
    /* 00019834   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00019834u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19838:
    /* 00019838   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019838u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1983A:
    /* 0001983a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001983au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1983C:
    /* 0001983c   4  lea (13ce,A4),A0 */
    c->pc = RC_ADDR(0x0001983cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13ceu);

L_19840:
    /* 00019840   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019840u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19846:
    /* 00019846   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00019846u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1984A:
    /* 0001984a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001984au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1984C:
    /* 0001984c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001984cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1984E:
    /* 0001984e   4  lea (13e6,A4),A0 */
    c->pc = RC_ADDR(0x0001984eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13e6u);

L_19852:
    /* 00019852   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019852u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19858:
    /* 00019858   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019858u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1985C:
    /* 0001985c   2  bgt 0001986e */
    c->pc = RC_ADDR(0x0001985cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1986E;

L_1985E:
    /* 0001985e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001985eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19862:
    /* 00019862   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019862u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19866:
    /* 00019866   2  bgt 0001986e */
    c->pc = RC_ADDR(0x00019866u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1986E;

L_19868:
    /* 00019868   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019868u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1986C:
    /* 0001986c   2  beq 000198b0 */
    c->pc = RC_ADDR(0x0001986cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_198B0;

L_1986E:
    /* 0001986e   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001986eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19872:
    /* 00019872   2  blt 00019884 */
    c->pc = RC_ADDR(0x00019872u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19884;

L_19874:
    /* 00019874   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019874u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19878:
    /* 00019878   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019878u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1987C:
    /* 0001987c   2  blt 00019884 */
    c->pc = RC_ADDR(0x0001987cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19884;

L_1987E:
    /* 0001987e   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001987eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19882:
    /* 00019882   2  beq 000198b0 */
    c->pc = RC_ADDR(0x00019882u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_198B0;

L_19884:
    /* 00019884   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019884u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19888:
    /* 00019888   2  bgt 0001989a */
    c->pc = RC_ADDR(0x00019888u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1989A;

L_1988A:
    /* 0001988a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001988au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1988E:
    /* 0001988e   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001988eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19892:
    /* 00019892   2  bgt 0001989a */
    c->pc = RC_ADDR(0x00019892u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1989A;

L_19894:
    /* 00019894   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019894u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19898:
    /* 00019898   2  beq 000198b0 */
    c->pc = RC_ADDR(0x00019898u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_198B0;

L_1989A:
    /* 0001989a   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001989au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1989E:
    /* 0001989e   2  blt 000198c0 */
    c->pc = RC_ADDR(0x0001989eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_198C0;

L_198A0:
    /* 000198a0   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000198a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_198A4:
    /* 000198a4   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000198a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_198A8:
    /* 000198a8   2  blt 000198c0 */
    c->pc = RC_ADDR(0x000198a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_198C0;

L_198AA:
    /* 000198aa   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x000198aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_198AE:
    /* 000198ae   2  bne 000198c0 */
    c->pc = RC_ADDR(0x000198aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_198C0;

L_198B0:
    /* 000198b0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000198b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_198B2:
    /* 000198b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000198b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_198B4:
    /* 000198b4   4  lea (1f28,A4),A0 */
    c->pc = RC_ADDR(0x000198b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1f28u);

L_198B8:
    /* 000198b8   6  move.w (ffffffea,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000198b8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198BE:
    /* 000198be   2  bra 000198ce */
    c->pc = RC_ADDR(0x000198beu);
    rc_step(c, m, 10);
    goto L_198CE;

L_198C0:
    /* 000198c0   4  addq.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000198c0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_198C4:
    /* 000198c4   6  cmpi.w #3,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000198c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_198CA:
    /* 000198ca   4  blt 00019818 */
    c->pc = RC_ADDR(0x000198cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19818; }

L_198CE:
    /* 000198ce   2  bra 000198ec */
    c->pc = RC_ADDR(0x000198ceu);
    rc_step(c, m, 10);
    goto L_198EC;

L_198D0:
    /* 000198d0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000198d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_198D2:
    /* 000198d2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000198d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_198D4:
    /* 000198d4   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x000198d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_198D8:
    /* 000198d8   6  move.w (47a,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000198d8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198DE:
    /* 000198de   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000198deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_198E0:
    /* 000198e0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000198e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_198E2:
    /* 000198e2   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x000198e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_198E6:
    /* 000198e6   6  move.w (47c,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000198e6u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198EC:
    /* 000198ec   4  bra 000199ba */
    c->pc = RC_ADDR(0x000198ecu);
    rc_step(c, m, 10);
    goto L_199BA;

L_198F0:
    /* 000198f0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000198f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_198F4:
    /* 000198f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000198f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_198F6:
    /* 000198f6   4  divs.w #30,D0 */
    c->pc = RC_ADDR(0x000198f6u);
    rc_step(c, m, 162);
    t0 = 0x00000030u;
    rc_divs(c, m, 0, t0);

L_198FA:
    /* 000198fa   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000198fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_198FE:
    /* 000198fe   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000198feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19902:
    /* 00019902   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019902u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19904:
    /* 00019904   4  divs.w #28,D0 */
    c->pc = RC_ADDR(0x00019904u);
    rc_step(c, m, 162);
    t0 = 0x00000028u;
    rc_divs(c, m, 0, t0);

L_19908:
    /* 00019908   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019908u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1990C:
    /* 0001990c   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001990cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19910:
    /* 00019910   2  bgt 00019922 */
    c->pc = RC_ADDR(0x00019910u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19922;

L_19912:
    /* 00019912   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019912u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19916:
    /* 00019916   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019916u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1991A:
    /* 0001991a   2  bgt 00019922 */
    c->pc = RC_ADDR(0x0001991au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19922;

L_1991C:
    /* 0001991c   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001991cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19920:
    /* 00019920   2  beq 00019964 */
    c->pc = RC_ADDR(0x00019920u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19964;

L_19922:
    /* 00019922   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019922u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19926:
    /* 00019926   2  blt 00019938 */
    c->pc = RC_ADDR(0x00019926u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19938;

L_19928:
    /* 00019928   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00019928u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1992C:
    /* 0001992c   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001992cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19930:
    /* 00019930   2  blt 00019938 */
    c->pc = RC_ADDR(0x00019930u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19938;

L_19932:
    /* 00019932   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019932u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19936:
    /* 00019936   2  beq 00019964 */
    c->pc = RC_ADDR(0x00019936u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19964;

L_19938:
    /* 00019938   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x00019938u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1993C:
    /* 0001993c   2  bgt 0001994e */
    c->pc = RC_ADDR(0x0001993cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1994E;

L_1993E:
    /* 0001993e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001993eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19942:
    /* 00019942   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019942u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19946:
    /* 00019946   2  bgt 0001994e */
    c->pc = RC_ADDR(0x00019946u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1994E;

L_19948:
    /* 00019948   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x00019948u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1994C:
    /* 0001994c   2  beq 00019964 */
    c->pc = RC_ADDR(0x0001994cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19964;

L_1994E:
    /* 0001994e   4  cmp.w (fffffff8,A5),D7 */
    c->pc = RC_ADDR(0x0001994eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19952:
    /* 00019952   2  blt 00019974 */
    c->pc = RC_ADDR(0x00019952u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19974;

L_19954:
    /* 00019954   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00019954u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19958:
    /* 00019958   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019958u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1995C:
    /* 0001995c   2  blt 00019974 */
    c->pc = RC_ADDR(0x0001995cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19974;

L_1995E:
    /* 0001995e   4  cmp.w (fffffffa,A5),D6 */
    c->pc = RC_ADDR(0x0001995eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19962:
    /* 00019962   2  bne 00019974 */
    c->pc = RC_ADDR(0x00019962u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19974;

L_19964:
    /* 00019964   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019964u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19966:
    /* 00019966   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019966u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19968:
    /* 00019968   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x00019968u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_1996C:
    /* 0001996c   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001996cu);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19972:
    /* 00019972   2  bra 00019990 */
    c->pc = RC_ADDR(0x00019972u);
    rc_step(c, m, 10);
    goto L_19990;

L_19974:
    /* 00019974   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019974u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19976:
    /* 00019976   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019976u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19978:
    /* 00019978   4  lea (1e38,A4),A0 */
    c->pc = RC_ADDR(0x00019978u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e38u);

L_1997C:
    /* 0001997c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001997cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_19980:
    /* 00019980   2  bne 00019990 */
    c->pc = RC_ADDR(0x00019980u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19990;

L_19982:
    /* 00019982   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019982u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19984:
    /* 00019984   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019984u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19986:
    /* 00019986   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x00019986u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_1998A:
    /* 0001998a   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001998au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1998E:
    /* 0001998e   2  bra 000199ba */
    c->pc = RC_ADDR(0x0001998eu);
    rc_step(c, m, 10);
    goto L_199BA;

L_19990:
    /* 00019990   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019990u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19992:
    /* 00019992   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019992u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19994:
    /* 00019994   4  lea (1e38,A4),A0 */
    c->pc = RC_ADDR(0x00019994u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e38u);

L_19998:
    /* 00019998   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019998u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1999C:
    /* 0001999c   2  bra 000199ba */
    c->pc = RC_ADDR(0x0001999cu);
    rc_step(c, m, 10);
    goto L_199BA;

L_199A8:
    /* 000199a8   6  cmp.l #5,D0 */
    c->pc = RC_ADDR(0x000199a8u);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_199AE:
    /* 000199ae   2  bcc 000199ba */
    c->pc = RC_ADDR(0x000199aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_199BA;

L_199B0:
    /* 000199b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199B2:
    /* 000199b2   4  move.w (0001999e),D0 */
    c->pc = RC_ADDR(0x000199b2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001999eu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_199B6:
    /* 000199b6   4  jmp (000199b8) */
    c->pc = RC_ADDR(0x000199b6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x000199b8u) + t4);
    c->pc = t3;
    return;

L_199BA:
    /* 000199ba   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199BC:
    /* 000199bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199BE:
    /* 000199be   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x000199beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_199C2:
    /* 000199c2   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x000199c2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_199C6:
    /* 000199c6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199C8:
    /* 000199c8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199CA:
    /* 000199ca   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000199cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_199CE:
    /* 000199ce   4  move.w (0,A0,D0.w),D7 */
    c->pc = RC_ADDR(0x000199ceu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_199D2:
    /* 000199d2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199D4:
    /* 000199d4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199D6:
    /* 000199d6   4  lea (1da8,A4),A0 */
    c->pc = RC_ADDR(0x000199d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1da8u);

L_199DA:
    /* 000199da   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000199dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_199DE:
    /* 000199de   2  beq 00019a0c */
    c->pc = RC_ADDR(0x000199deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19A0C;

L_199E0:
    /* 000199e0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199e0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199E2:
    /* 000199e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199E4:
    /* 000199e4   4  lea (1dc0,A4),A0 */
    c->pc = RC_ADDR(0x000199e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dc0u);

L_199E8:
    /* 000199e8   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x000199e8u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_199EE:
    /* 000199ee   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199F0:
    /* 000199f0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199f0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_199F2:
    /* 000199f2   4  lea (1dd8,A4),A0 */
    c->pc = RC_ADDR(0x000199f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dd8u);

L_199F6:
    /* 000199f6   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000199f6u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_199FC:
    /* 000199fc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000199fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_199FE:
    /* 000199fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000199feu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A00:
    /* 00019a00   4  lea (1da8,A4),A0 */
    c->pc = RC_ADDR(0x00019a00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1da8u);

L_19A04:
    /* 00019a04   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019a04u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19A08:
    /* 00019a08   4  bra 00019b2a */
    c->pc = RC_ADDR(0x00019a08u);
    rc_step(c, m, 10);
    goto L_19B2A;

L_19A0C:
    /* 00019a0c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019a0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A0E:
    /* 00019a0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A10:
    /* 00019a10   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019a10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_19A14:
    /* 00019a14   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019a14u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A1A:
    /* 00019a1a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019a1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A1C:
    /* 00019a1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A1E:
    /* 00019a1e   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x00019a1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_19A22:
    /* 00019a22   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019a22u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A28:
    /* 00019a28   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00019a28u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19A2C:
    /* 00019a2c   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019a2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A30:
    /* 00019a30   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019a30u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19A32:
    /* 00019a32   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a32u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A34:
    /* 00019a34   4  lea (1cc6,A4),A0 */
    c->pc = RC_ADDR(0x00019a34u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc6u);

L_19A38:
    /* 00019a38   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x00019a38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A3A:
    /* 00019a3a   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019a3au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19A3E:
    /* 00019a3e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00019a3eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A40:
    /* 00019a40   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00019a40u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00019a44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_19A44:
    /* 00019a44   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019a44u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19A46:
    /* 00019a46   4  cmp.w #10,D0 */
    c->pc = RC_ADDR(0x00019a46u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19A4A:
    /* 00019a4a   4  bgt 00019b1c */
    c->pc = RC_ADDR(0x00019a4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19B1C;

L_19A4E:
    /* 00019a4e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00019a4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A52:
    /* 00019a52   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019a52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19A54:
    /* 00019a54   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a54u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A56:
    /* 00019a56   4  lea (1cc8,A4),A0 */
    c->pc = RC_ADDR(0x00019a56u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1cc8u);

L_19A5A:
    /* 00019a5a   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x00019a5au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A5C:
    /* 00019a5c   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019a5cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19A60:
    /* 00019a60   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00019a60u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A62:
    /* 00019a62   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00019a62u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00019a66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_19A66:
    /* 00019a66   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019a66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19A68:
    /* 00019a68   4  cmp.w #10,D0 */
    c->pc = RC_ADDR(0x00019a68u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19A6C:
    /* 00019a6c   4  bge 00019b1c */
    c->pc = RC_ADDR(0x00019a6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19B1C;

L_19A70:
    /* 00019a70   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019a70u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A72:
    /* 00019a72   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a72u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A74:
    /* 00019a74   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00019a74u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d78u);

L_19A78:
    /* 00019a78   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019a78u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A7A:
    /* 00019a7a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019a7au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19A7C:
    /* 00019a7c   4  lea (1dc0,A4),A1 */
    c->pc = RC_ADDR(0x00019a7cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dc0u);

L_19A80:
    /* 00019a80   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019a80u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A86:
    /* 00019a86   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019a86u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A88:
    /* 00019a88   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019a88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19A8A:
    /* 00019a8a   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x00019a8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d90u);

L_19A8E:
    /* 00019a8e   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019a8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19A90:
    /* 00019a90   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019a90u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19A92:
    /* 00019a92   4  lea (1dd8,A4),A1 */
    c->pc = RC_ADDR(0x00019a92u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1dd8u);

L_19A96:
    /* 00019a96   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00019a96u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19A9C:
    /* 00019a9c   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00019a9cu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19AA0:
    /* 00019aa0   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00019aa0u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00019aa4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_19AA4:
    /* 00019aa4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019aa4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19AA6:
    /* 00019aa6   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00019aa6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19AAA:
    /* 00019aaa   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00019aaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19AAE:
    /* 00019aae   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019aaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19AB0:
    /* 00019ab0   2  bra 00019afa */
    c->pc = RC_ADDR(0x00019ab0u);
    rc_step(c, m, 10);
    goto L_19AFA;

L_19AB2:
    /* 00019ab2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ab2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19AB4:
    /* 00019ab4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ab4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19AB6:
    /* 00019ab6   4  lea (1dc0,A4),A0 */
    c->pc = RC_ADDR(0x00019ab6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dc0u);

L_19ABA:
    /* 00019aba   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00019abau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_19ABC:
    /* 00019abc   4  addi.w #a,(A0) */
    c->pc = RC_ADDR(0x00019abcu);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19AC0:
    /* 00019ac0   2  bra 00019b0c */
    c->pc = RC_ADDR(0x00019ac0u);
    rc_step(c, m, 10);
    goto L_19B0C;

L_19AC2:
    /* 00019ac2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ac2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19AC4:
    /* 00019ac4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ac4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19AC6:
    /* 00019ac6   4  lea (1dc0,A4),A0 */
    c->pc = RC_ADDR(0x00019ac6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dc0u);

L_19ACA:
    /* 00019aca   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00019acau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_19ACC:
    /* 00019acc   4  subi.w #a,(A0) */
    c->pc = RC_ADDR(0x00019accu);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19AD0:
    /* 00019ad0   2  bra 00019b0c */
    c->pc = RC_ADDR(0x00019ad0u);
    rc_step(c, m, 10);
    goto L_19B0C;

L_19AD2:
    /* 00019ad2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ad2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19AD4:
    /* 00019ad4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ad4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19AD6:
    /* 00019ad6   4  lea (1dd8,A4),A0 */
    c->pc = RC_ADDR(0x00019ad6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dd8u);

L_19ADA:
    /* 00019ada   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00019adau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_19ADC:
    /* 00019adc   4  addi.w #a,(A0) */
    c->pc = RC_ADDR(0x00019adcu);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19AE0:
    /* 00019ae0   2  bra 00019b0c */
    c->pc = RC_ADDR(0x00019ae0u);
    rc_step(c, m, 10);
    goto L_19B0C;

L_19AE2:
    /* 00019ae2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ae2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19AE4:
    /* 00019ae4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ae4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19AE6:
    /* 00019ae6   4  lea (1dd8,A4),A0 */
    c->pc = RC_ADDR(0x00019ae6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1dd8u);

L_19AEA:
    /* 00019aea   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00019aeau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_19AEC:
    /* 00019aec   4  subi.w #a,(A0) */
    c->pc = RC_ADDR(0x00019aecu);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19AF0:
    /* 00019af0   2  bra 00019b0c */
    c->pc = RC_ADDR(0x00019af0u);
    rc_step(c, m, 10);
    goto L_19B0C;

L_19AFA:
    /* 00019afa   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x00019afau);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_19B00:
    /* 00019b00   2  bcc 00019b0c */
    c->pc = RC_ADDR(0x00019b00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_19B0C;

L_19B02:
    /* 00019b02   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019b02u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19B04:
    /* 00019b04   4  move.w (00019af2),D0 */
    c->pc = RC_ADDR(0x00019b04u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00019af2u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B08:
    /* 00019b08   4  jmp (00019b0a) */
    c->pc = RC_ADDR(0x00019b08u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00019b0au) + t4);
    c->pc = t3;
    return;

L_19B0C:
    /* 00019b0c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019b0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19B0E:
    /* 00019b0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019b0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19B10:
    /* 00019b10   4  lea (1da8,A4),A0 */
    c->pc = RC_ADDR(0x00019b10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1da8u);

L_19B14:
    /* 00019b14   6  move.w #a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019b14u);
    rc_step(c, m, 18);
    t0 = 0x0000000au;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B1A:
    /* 00019b1a   2  bra 00019b2a */
    c->pc = RC_ADDR(0x00019b1au);
    rc_step(c, m, 10);
    goto L_19B2A;

L_19B1C:
    /* 00019b1c   4  addq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019b1cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19B20:
    /* 00019b20   6  cmpi.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019b20u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_19B26:
    /* 00019b26   4  blt 00019a2c */
    c->pc = RC_ADDR(0x00019b26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19A2C; }

L_19B2A:
    /* 00019b2a   6  move.w #4,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019b2au);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B30:
    /* 00019b30   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019b30u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19B32:
    /* 00019b32   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019b32u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19B34:
    /* 00019b34   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x00019b34u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_19B38:
    /* 00019b38   6  cmpi.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019b38u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_19B3E:
    /* 00019b3e   2  blt 00019b46 */
    c->pc = RC_ADDR(0x00019b3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19B46;

L_19B40:
    /* 00019b40   6  move.w #7,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019b40u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B46:
    /* 00019b46   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00019b46u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19B4A:
    /* 00019b4a   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00019b4au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19B4E:
    /* 00019b4e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019b4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B52:
    /* 00019b52   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x00019b52u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19B54:
    /* 00019b54   2  ble 00019b5c */
    c->pc = RC_ADDR(0x00019b54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19B5C;

L_19B56:
    /* 00019b56   6  move.w #2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00019b56u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B5C:
    /* 00019b5c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019b5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B60:
    /* 00019b60   2  cmp.w D6,D0 */
    c->pc = RC_ADDR(0x00019b60u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19B62:
    /* 00019b62   2  bge 00019b6a */
    c->pc = RC_ADDR(0x00019b62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19B6A;

L_19B64:
    /* 00019b64   6  move.w #fffe,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00019b64u);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B6A:
    /* 00019b6a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019b6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B6E:
    /* 00019b6e   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x00019b6eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19B70:
    /* 00019b70   2  ble 00019b78 */
    c->pc = RC_ADDR(0x00019b70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19B78;

L_19B72:
    /* 00019b72   6  move.w #2,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00019b72u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B78:
    /* 00019b78   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019b78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B7C:
    /* 00019b7c   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x00019b7cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19B7E:
    /* 00019b7e   2  bge 00019b86 */
    c->pc = RC_ADDR(0x00019b7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19B86;

L_19B80:
    /* 00019b80   6  move.w #fffe,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00019b80u);
    rc_step(c, m, 16);
    t0 = 0x0000fffeu;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B86:
    /* 00019b86   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019b86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B8A:
    /* 00019b8a   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x00019b8au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19B8C:
    /* 00019b8c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00019b8cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B8E:
    /* 00019b8e   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00019b8eu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00019b92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_19B92:
    /* 00019b92   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019b92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19B94:
    /* 00019b94   4  cmp.w #3,D0 */
    c->pc = RC_ADDR(0x00019b94u);
    rc_step(c, m, 8);
    t0 = 0x00000003u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19B98:
    /* 00019b98   2  bge 00019ba4 */
    c->pc = RC_ADDR(0x00019b98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19BA4;

L_19B9A:
    /* 00019b9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019b9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19B9E:
    /* 00019b9e   2  sub.w D6,D0 */
    c->pc = RC_ADDR(0x00019b9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19BA0:
    /* 00019ba0   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00019ba0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BA4:
    /* 00019ba4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019ba4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BA8:
    /* 00019ba8   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x00019ba8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19BAA:
    /* 00019baa   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00019baau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BAC:
    /* 00019bac   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x00019bacu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x00019bb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_19BB0:
    /* 00019bb0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019bb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19BB2:
    /* 00019bb2   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x00019bb2u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19BB6:
    /* 00019bb6   2  bge 00019bc2 */
    c->pc = RC_ADDR(0x00019bb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19BC2;

L_19BB8:
    /* 00019bb8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00019bb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BBC:
    /* 00019bbc   2  sub.w D7,D0 */
    c->pc = RC_ADDR(0x00019bbcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19BBE:
    /* 00019bbe   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00019bbeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BC2:
    /* 00019bc2   2  move.l D4,D5 */
    c->pc = RC_ADDR(0x00019bc2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19BC4:
    /* 00019bc4   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x00019bc4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_19BC6:
    /* 00019bc6   6  cmp.l #c,D5 */
    c->pc = RC_ADDR(0x00019bc6u);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_19BCC:
    /* 00019bcc   2  bge 00019c22 */
    c->pc = RC_ADDR(0x00019bccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19C22;

L_19BCE:
    /* 00019bce   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x00019bceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19BD0:
    /* 00019bd0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019bd0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19BD2:
    /* 00019bd2   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019bd2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19BD6:
    /* 00019bd6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019bd6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BDA:
    /* 00019bda   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x00019bdau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19BDC:
    /* 00019bdc   2  cmp.w D1,D6 */
    c->pc = RC_ADDR(0x00019bdcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19BDE:
    /* 00019bde   2  ble 00019c1e */
    c->pc = RC_ADDR(0x00019bdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19C1E;

L_19BE0:
    /* 00019be0   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x00019be0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19BE2:
    /* 00019be2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019be2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19BE4:
    /* 00019be4   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019be4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19BE8:
    /* 00019be8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019be8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BEC:
    /* 00019bec   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x00019becu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19BEE:
    /* 00019bee   2  cmp.w D1,D6 */
    c->pc = RC_ADDR(0x00019beeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19BF0:
    /* 00019bf0   2  bge 00019c1e */
    c->pc = RC_ADDR(0x00019bf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19C1E;

L_19BF2:
    /* 00019bf2   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x00019bf2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19BF4:
    /* 00019bf4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019bf4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19BF6:
    /* 00019bf6   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019bf6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19BFA:
    /* 00019bfa   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019bfau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19BFE:
    /* 00019bfe   2  subq.w #8,D1 */
    c->pc = RC_ADDR(0x00019bfeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19C00:
    /* 00019c00   2  cmp.w D1,D7 */
    c->pc = RC_ADDR(0x00019c00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19C02:
    /* 00019c02   2  ble 00019c1e */
    c->pc = RC_ADDR(0x00019c02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19C1E;

L_19C04:
    /* 00019c04   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x00019c04u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19C06:
    /* 00019c06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C08:
    /* 00019c08   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019c08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19C0C:
    /* 00019c0c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00019c0cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C10:
    /* 00019c10   2  addq.w #8,D1 */
    c->pc = RC_ADDR(0x00019c10u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19C12:
    /* 00019c12   2  cmp.w D1,D7 */
    c->pc = RC_ADDR(0x00019c12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19C14:
    /* 00019c14   2  bge 00019c1e */
    c->pc = RC_ADDR(0x00019c14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19C1E;

L_19C16:
    /* 00019c16   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00019c16u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19C1A:
    /* 00019c1a   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00019c1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19C1E:
    /* 00019c1e   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x00019c1eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_19C20:
    /* 00019c20   2  bra 00019bc6 */
    c->pc = RC_ADDR(0x00019c20u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_19BC6;

L_19C22:
    /* 00019c22   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x00019c22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C26:
    /* 00019c26   2  move.w D7,-(A7) */
    c->pc = RC_ADDR(0x00019c26u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C28:
    /* 00019c28   2  move.w D6,-(A7) */
    c->pc = RC_ADDR(0x00019c28u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 6, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C2A:
    /* 00019c2a   4  jsr (0001a6fa) */
    c->pc = RC_ADDR(0x00019c2au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019c2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a6fau);
    return;

L_19C2E:
    /* 00019c2e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00019c2eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_19C30:
    /* 00019c30   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00019c30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C34:
    /* 00019c34   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00019c34u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19C38:
    /* 00019c38   4  move.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x00019c38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C3C:
    /* 00019c3c   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00019c3cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19C40:
    /* 00019c40   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x00019c40u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C44:
    /* 00019c44   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00019c44u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C46:
    /* 00019c46   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00019c46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19C4A:
    /* 00019c4a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00019c4au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C4C:
    /* 00019c4c   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00019c4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C4E:
    /* 00019c4e   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00019c4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19C52:
    /* 00019c52   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00019c52u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C54:
    /* 00019c54   4  jsr (0001a7be) */
    c->pc = RC_ADDR(0x00019c54u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019c58u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a7beu);
    return;

L_19C58:
    /* 00019c58   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00019c58u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_19C5A:
    /* 00019c5a   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x00019c5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C5E:
    /* 00019c5e   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00019c5eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_19C60:
    /* 00019c60   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00019c60u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19C64:
    /* 00019c64   4  move.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x00019c64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C68:
    /* 00019c68   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00019c68u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_19C6A:
    /* 00019c6a   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00019c6au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19C6E:
    /* 00019c6e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019c6eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19C70:
    /* 00019c70   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c70u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C72:
    /* 00019c72   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00019c72u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19C76:
    /* 00019c76   2  move.w D6,D1 */
    c->pc = RC_ADDR(0x00019c76u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C78:
    /* 00019c78   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x00019c78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19C7C:
    /* 00019c7c   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019c7cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C80:
    /* 00019c80   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019c80u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19C82:
    /* 00019c82   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019c82u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19C84:
    /* 00019c84   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x00019c84u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19C88:
    /* 00019c88   2  move.w D7,D1 */
    c->pc = RC_ADDR(0x00019c88u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C8A:
    /* 00019c8a   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00019c8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19C8E:
    /* 00019c8e   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019c8eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19C92:
    /* 00019c92   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00019c92u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19C96:
    /* 00019c96   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00019c96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_19C9A:
    /* 00019c9a   2  ble 00019ca2 */
    c->pc = RC_ADDR(0x00019c9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19CA2;

L_19C9C:
    /* 00019c9c   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019c9cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CA2:
    /* 00019ca2   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00019ca2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_19CA6:
    /* 00019ca6   2  bge 00019cae */
    c->pc = RC_ADDR(0x00019ca6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19CAE;

L_19CA8:
    /* 00019ca8   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00019ca8u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CAE:
    /* 00019cae   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00019caeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_19CB2:
    /* 00019cb2   2  ble 00019cba */
    c->pc = RC_ADDR(0x00019cb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_19CBA;

L_19CB4:
    /* 00019cb4   6  bset #2,(ffffffef,A5) */
    c->pc = RC_ADDR(0x00019cb4u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_19CBA:
    /* 00019cba   4  tst.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00019cbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_19CBE:
    /* 00019cbe   2  bge 00019cc6 */
    c->pc = RC_ADDR(0x00019cbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_19CC6;

L_19CC0:
    /* 00019cc0   6  bset #3,(ffffffef,A5) */
    c->pc = RC_ADDR(0x00019cc0u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x11u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_19CC6:
    /* 00019cc6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019cc6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19CC8:
    /* 00019cc8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019cc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CCA:
    /* 00019cca   4  lea (1eb0,A4),A0 */
    c->pc = RC_ADDR(0x00019ccau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1eb0u);

L_19CCE:
    /* 00019cce   6  move.w (ffffffee,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019cceu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CD4:
    /* 00019cd4   2  beq 00019d22 */
    c->pc = RC_ADDR(0x00019cd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19D22;

L_19CD6:
    /* 00019cd6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019cd6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19CD8:
    /* 00019cd8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019cd8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CDA:
    /* 00019cda   4  lea (1e80,A4),A0 */
    c->pc = RC_ADDR(0x00019cdau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e80u);

L_19CDE:
    /* 00019cde   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00019cdeu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_19CE0:
    /* 00019ce0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ce0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19CE2:
    /* 00019ce2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019ce2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CE4:
    /* 00019ce4   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x00019ce4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_19CE8:
    /* 00019ce8   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x00019ce8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19CEC:
    /* 00019cec   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x00019cecu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_19CEE:
    /* 00019cee   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019ceeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19CF0:
    /* 00019cf0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019cf0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19CF2:
    /* 00019cf2   4  lea (1e80,A4),A0 */
    c->pc = RC_ADDR(0x00019cf2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e80u);

L_19CF6:
    /* 00019cf6   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019cf6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_19CFA:
    /* 00019cfa   2  beq 00019d0c */
    c->pc = RC_ADDR(0x00019cfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19D0C;

L_19CFC:
    /* 00019cfc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019cfcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19CFE:
    /* 00019cfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019cfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19D00:
    /* 00019d00   4  lea (1e80,A4),A0 */
    c->pc = RC_ADDR(0x00019d00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e80u);

L_19D04:
    /* 00019d04   6  cmpi.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019d04u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_19D0A:
    /* 00019d0a   2  blt 00019d20 */
    c->pc = RC_ADDR(0x00019d0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19D20;

L_19D0C:
    /* 00019d0c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019d0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D0E:
    /* 00019d0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019d0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19D10:
    /* 00019d10   4  lea (1e98,A4),A0 */
    c->pc = RC_ADDR(0x00019d10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e98u);

L_19D14:
    /* 00019d14   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019d14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D16:
    /* 00019d16   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019d16u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19D18:
    /* 00019d18   4  lea (1e98,A4),A1 */
    c->pc = RC_ADDR(0x00019d18u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e98u);

L_19D1C:
    /* 00019d1c   4  neg.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019d1cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_19D20:
    /* 00019d20   2  bra 00019d30 */
    c->pc = RC_ADDR(0x00019d20u);
    rc_step(c, m, 10);
    goto L_19D30;

L_19D22:
    /* 00019d22   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019d22u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D24:
    /* 00019d24   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019d24u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19D26:
    /* 00019d26   4  lea (1e80,A4),A0 */
    c->pc = RC_ADDR(0x00019d26u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e80u);

L_19D2A:
    /* 00019d2a   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019d2au);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D30:
    /* 00019d30   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00019d30u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D32:
    /* 00019d32   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019d32u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19D34:
    /* 00019d34   4  lea (1e68,A4),A0 */
    c->pc = RC_ADDR(0x00019d34u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1e68u);

L_19D38:
    /* 00019d38   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x00019d38u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D3A:
    /* 00019d3a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00019d3au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_19D3C:
    /* 00019d3c   4  lea (1eb0,A4),A1 */
    c->pc = RC_ADDR(0x00019d3cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1eb0u);

L_19D40:
    /* 00019d40   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00019d40u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D44:
    /* 00019d44   2  ext.l D2 */
    c->pc = RC_ADDR(0x00019d44u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19D46:
    /* 00019d46   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00019d46u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_19D48:
    /* 00019d48   4  lea (ffffc6a6,A4),A1 */
    c->pc = RC_ADDR(0x00019d48u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x395au);

L_19D4C:
    /* 00019d4c   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00019d4cu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D50:
    /* 00019d50   4  muls.w #5,D1 */
    c->pc = RC_ADDR(0x00019d50u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 1, t0);

L_19D54:
    /* 00019d54   2  move.l D4,D2 */
    c->pc = RC_ADDR(0x00019d54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19D56:
    /* 00019d56   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00019d56u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_19D58:
    /* 00019d58   4  lea (1e80,A4),A1 */
    c->pc = RC_ADDR(0x00019d58u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1e80u);

L_19D5C:
    /* 00019d5c   4  add.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00019d5cu);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_19D60:
    /* 00019d60   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019d60u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D64:
    /* 00019d64   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x00019d64u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_19D66:
    /* 00019d66   6  cmp.l #c,D4 */
    c->pc = RC_ADDR(0x00019d66u);
    rc_step(c, m, 14);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_19D6C:
    /* 00019d6c   4  blt 00019030 */
    c->pc = RC_ADDR(0x00019d6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19030; }

L_19D70:
    /* 00019d70   6  cmpi.w #1,(1f40,A4) */
    c->pc = RC_ADDR(0x00019d70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_19D76:
    /* 00019d76   4  bne 00019e28 */
    c->pc = RC_ADDR(0x00019d76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19E28;

L_19D7A:
    /* 00019d7a   6  cmpi.w #f0,(47a,A4) */
    c->pc = RC_ADDR(0x00019d7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_19D80:
    /* 00019d80   2  blt 00019dbe */
    c->pc = RC_ADDR(0x00019d80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19DBE;

L_19D82:
    /* 00019d82   6  cmpi.w #1b0,(47a,A4) */
    c->pc = RC_ADDR(0x00019d82u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_cmp(c, RC_W, t0, 0x000001b0u);

L_19D88:
    /* 00019d88   2  bgt 00019dbe */
    c->pc = RC_ADDR(0x00019d88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_19DBE;

L_19D8A:
    /* 00019d8a   6  cmpi.w #190,(47c,A4) */
    c->pc = RC_ADDR(0x00019d8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_19D90:
    /* 00019d90   2  blt 00019dbe */
    c->pc = RC_ADDR(0x00019d90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_19DBE;

L_19D92:
    /* 00019d92   4  tst.w (1f48,A4) */
    c->pc = RC_ADDR(0x00019d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f48u));
    rc_set_nzvc(c, t0, RC_W);

L_19D96:
    /* 00019d96   2  beq 00019dbe */
    c->pc = RC_ADDR(0x00019d96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19DBE;

L_19D98:
    /* 00019d98   6  move.w #3,(1ee2,A4) */
    c->pc = RC_ADDR(0x00019d98u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1ee2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19D9E:
    /* 00019d9e   6  move.w #3,(1ee0,A4) */
    c->pc = RC_ADDR(0x00019d9eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1ee0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DA4:
    /* 00019da4   6  move.w (47a,A4),(1d7a,A4) */
    c->pc = RC_ADDR(0x00019da4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_wr16(c, m, (c->a[4] + 0x1d7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DAA:
    /* 00019daa   6  move.w (47a,A4),(1d78,A4) */
    c->pc = RC_ADDR(0x00019daau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_wr16(c, m, (c->a[4] + 0x1d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DB0:
    /* 00019db0   6  move.w (47c,A4),(1d92,A4) */
    c->pc = RC_ADDR(0x00019db0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_wr16(c, m, (c->a[4] + 0x1d92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DB6:
    /* 00019db6   6  move.w (47c,A4),(1d90,A4) */
    c->pc = RC_ADDR(0x00019db6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_wr16(c, m, (c->a[4] + 0x1d90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DBC:
    /* 00019dbc   2  bra 00019e28 */
    c->pc = RC_ADDR(0x00019dbcu);
    rc_step(c, m, 10);
    goto L_19E28;

L_19DBE:
    /* 00019dbe   4  tst.w (1f52,A4) */
    c->pc = RC_ADDR(0x00019dbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f52u));
    rc_set_nzvc(c, t0, RC_W);

L_19DC2:
    /* 00019dc2   2  beq 00019e28 */
    c->pc = RC_ADDR(0x00019dc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19E28;

L_19DC4:
    /* 00019dc4   6  move.w #5,(1ee2,A4) */
    c->pc = RC_ADDR(0x00019dc4u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1ee2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DCA:
    /* 00019dca   6  move.w #5,(1ee0,A4) */
    c->pc = RC_ADDR(0x00019dcau);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1ee0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DD0:
    /* 00019dd0   6  move.w #148,(1d78,A4) */
    c->pc = RC_ADDR(0x00019dd0u);
    rc_step(c, m, 16);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x1d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DD6:
    /* 00019dd6   6  move.w #1ae,(1d90,A4) */
    c->pc = RC_ADDR(0x00019dd6u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DDC:
    /* 00019ddc   6  move.w #180,(1d7a,A4) */
    c->pc = RC_ADDR(0x00019ddcu);
    rc_step(c, m, 16);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x1d7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DE2:
    /* 00019de2   6  move.w #1ae,(1d92,A4) */
    c->pc = RC_ADDR(0x00019de2u);
    rc_step(c, m, 16);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DE8:
    /* 00019de8   4  move.w (1ce8,A4),D0 */
    c->pc = RC_ADDR(0x00019de8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ce8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DEC:
    /* 00019dec   4  cmp.w (1d78,A4),D0 */
    c->pc = RC_ADDR(0x00019decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d78u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19DF0:
    /* 00019df0   2  bne 00019e08 */
    c->pc = RC_ADDR(0x00019df0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19E08;

L_19DF2:
    /* 00019df2   4  move.w (1d00,A4),D0 */
    c->pc = RC_ADDR(0x00019df2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d00u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19DF6:
    /* 00019df6   4  cmp.w (1d90,A4),D0 */
    c->pc = RC_ADDR(0x00019df6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d90u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19DFA:
    /* 00019dfa   2  bne 00019e08 */
    c->pc = RC_ADDR(0x00019dfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19E08;

L_19DFC:
    /* 00019dfc   6  move.w #1,(1e80,A4) */
    c->pc = RC_ADDR(0x00019dfcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1e80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E02:
    /* 00019e02   6  move.w #ffff,(1e98,A4) */
    c->pc = RC_ADDR(0x00019e02u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1e98u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E08:
    /* 00019e08   4  move.w (1cea,A4),D0 */
    c->pc = RC_ADDR(0x00019e08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ceau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E0C:
    /* 00019e0c   4  cmp.w (1d7a,A4),D0 */
    c->pc = RC_ADDR(0x00019e0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d7au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19E10:
    /* 00019e10   2  bne 00019e28 */
    c->pc = RC_ADDR(0x00019e10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19E28;

L_19E12:
    /* 00019e12   4  move.w (1d02,A4),D0 */
    c->pc = RC_ADDR(0x00019e12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E16:
    /* 00019e16   4  cmp.w (1d92,A4),D0 */
    c->pc = RC_ADDR(0x00019e16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d92u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19E1A:
    /* 00019e1a   2  bne 00019e28 */
    c->pc = RC_ADDR(0x00019e1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_19E28;

L_19E1C:
    /* 00019e1c   6  move.w #1,(1e82,A4) */
    c->pc = RC_ADDR(0x00019e1cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1e82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E22:
    /* 00019e22   6  move.w #ffff,(1e9a,A4) */
    c->pc = RC_ADDR(0x00019e22u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1e9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E28:
    /* 00019e28   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x00019e28u);
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

L_19E2C:
    /* 00019e2c   2  unlk A5 */
    c->pc = RC_ADDR(0x00019e2cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19E2E:
    /* 00019e2e   2  rts */
    c->pc = RC_ADDR(0x00019e2eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
