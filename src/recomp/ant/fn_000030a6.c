/* fn_000030a6 - 1342 byte(s), 392 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000030a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000030a6u): goto L_30A6;
    case RC_ADDR(0x000030aau): goto L_30AA;
    case RC_ADDR(0x000030b0u): goto L_30B0;
    case RC_ADDR(0x000030b4u): goto L_30B4;
    case RC_ADDR(0x000030b8u): goto L_30B8;
    case RC_ADDR(0x000030bau): goto L_30BA;
    case RC_ADDR(0x000030beu): goto L_30BE;
    case RC_ADDR(0x000030c2u): goto L_30C2;
    case RC_ADDR(0x000030c6u): goto L_30C6;
    case RC_ADDR(0x000030cau): goto L_30CA;
    case RC_ADDR(0x000030ceu): goto L_30CE;
    case RC_ADDR(0x000030d0u): goto L_30D0;
    case RC_ADDR(0x000030d2u): goto L_30D2;
    case RC_ADDR(0x000030d4u): goto L_30D4;
    case RC_ADDR(0x000030d6u): goto L_30D6;
    case RC_ADDR(0x000030dau): goto L_30DA;
    case RC_ADDR(0x000030deu): goto L_30DE;
    case RC_ADDR(0x000030e2u): goto L_30E2;
    case RC_ADDR(0x000030e4u): goto L_30E4;
    case RC_ADDR(0x000030e6u): goto L_30E6;
    case RC_ADDR(0x000030e8u): goto L_30E8;
    case RC_ADDR(0x000030ecu): goto L_30EC;
    case RC_ADDR(0x000030f0u): goto L_30F0;
    case RC_ADDR(0x000030f4u): goto L_30F4;
    case RC_ADDR(0x000030f6u): goto L_30F6;
    case RC_ADDR(0x000030fau): goto L_30FA;
    case RC_ADDR(0x000030feu): goto L_30FE;
    case RC_ADDR(0x00003100u): goto L_3100;
    case RC_ADDR(0x00003104u): goto L_3104;
    case RC_ADDR(0x00003108u): goto L_3108;
    case RC_ADDR(0x0000310cu): goto L_310C;
    case RC_ADDR(0x0000310eu): goto L_310E;
    case RC_ADDR(0x00003112u): goto L_3112;
    case RC_ADDR(0x00003116u): goto L_3116;
    case RC_ADDR(0x00003118u): goto L_3118;
    case RC_ADDR(0x0000311au): goto L_311A;
    case RC_ADDR(0x0000311cu): goto L_311C;
    case RC_ADDR(0x00003120u): goto L_3120;
    case RC_ADDR(0x00003124u): goto L_3124;
    case RC_ADDR(0x00003128u): goto L_3128;
    case RC_ADDR(0x0000312au): goto L_312A;
    case RC_ADDR(0x0000312cu): goto L_312C;
    case RC_ADDR(0x0000312eu): goto L_312E;
    case RC_ADDR(0x00003134u): goto L_3134;
    case RC_ADDR(0x00003136u): goto L_3136;
    case RC_ADDR(0x0000313cu): goto L_313C;
    case RC_ADDR(0x0000313eu): goto L_313E;
    case RC_ADDR(0x00003144u): goto L_3144;
    case RC_ADDR(0x00003148u): goto L_3148;
    case RC_ADDR(0x0000314au): goto L_314A;
    case RC_ADDR(0x0000314eu): goto L_314E;
    case RC_ADDR(0x00003152u): goto L_3152;
    case RC_ADDR(0x00003156u): goto L_3156;
    case RC_ADDR(0x0000315au): goto L_315A;
    case RC_ADDR(0x0000315eu): goto L_315E;
    case RC_ADDR(0x00003162u): goto L_3162;
    case RC_ADDR(0x00003166u): goto L_3166;
    case RC_ADDR(0x0000316au): goto L_316A;
    case RC_ADDR(0x0000316eu): goto L_316E;
    case RC_ADDR(0x00003172u): goto L_3172;
    case RC_ADDR(0x00003174u): goto L_3174;
    case RC_ADDR(0x00003178u): goto L_3178;
    case RC_ADDR(0x0000317cu): goto L_317C;
    case RC_ADDR(0x00003180u): goto L_3180;
    case RC_ADDR(0x00003184u): goto L_3184;
    case RC_ADDR(0x00003186u): goto L_3186;
    case RC_ADDR(0x00003188u): goto L_3188;
    case RC_ADDR(0x0000318cu): goto L_318C;
    case RC_ADDR(0x00003190u): goto L_3190;
    case RC_ADDR(0x00003194u): goto L_3194;
    case RC_ADDR(0x00003196u): goto L_3196;
    case RC_ADDR(0x0000319au): goto L_319A;
    case RC_ADDR(0x0000319eu): goto L_319E;
    case RC_ADDR(0x000031a2u): goto L_31A2;
    case RC_ADDR(0x000031a6u): goto L_31A6;
    case RC_ADDR(0x000031a8u): goto L_31A8;
    case RC_ADDR(0x000031acu): goto L_31AC;
    case RC_ADDR(0x000031b0u): goto L_31B0;
    case RC_ADDR(0x000031b4u): goto L_31B4;
    case RC_ADDR(0x000031bau): goto L_31BA;
    case RC_ADDR(0x000031beu): goto L_31BE;
    case RC_ADDR(0x000031c2u): goto L_31C2;
    case RC_ADDR(0x000031c4u): goto L_31C4;
    case RC_ADDR(0x000031c8u): goto L_31C8;
    case RC_ADDR(0x000031ccu): goto L_31CC;
    case RC_ADDR(0x000031d0u): goto L_31D0;
    case RC_ADDR(0x000031d2u): goto L_31D2;
    case RC_ADDR(0x000031d4u): goto L_31D4;
    case RC_ADDR(0x000031d8u): goto L_31D8;
    case RC_ADDR(0x000031dcu): goto L_31DC;
    case RC_ADDR(0x000031e0u): goto L_31E0;
    case RC_ADDR(0x000031e2u): goto L_31E2;
    case RC_ADDR(0x000031e4u): goto L_31E4;
    case RC_ADDR(0x000031e6u): goto L_31E6;
    case RC_ADDR(0x000031e8u): goto L_31E8;
    case RC_ADDR(0x000031ecu): goto L_31EC;
    case RC_ADDR(0x000031f0u): goto L_31F0;
    case RC_ADDR(0x000031f4u): goto L_31F4;
    case RC_ADDR(0x000031f8u): goto L_31F8;
    case RC_ADDR(0x000031fcu): goto L_31FC;
    case RC_ADDR(0x00003200u): goto L_3200;
    case RC_ADDR(0x00003202u): goto L_3202;
    case RC_ADDR(0x00003206u): goto L_3206;
    case RC_ADDR(0x0000320au): goto L_320A;
    case RC_ADDR(0x0000320cu): goto L_320C;
    case RC_ADDR(0x0000320eu): goto L_320E;
    case RC_ADDR(0x00003212u): goto L_3212;
    case RC_ADDR(0x00003216u): goto L_3216;
    case RC_ADDR(0x0000321au): goto L_321A;
    case RC_ADDR(0x0000321eu): goto L_321E;
    case RC_ADDR(0x00003220u): goto L_3220;
    case RC_ADDR(0x00003224u): goto L_3224;
    case RC_ADDR(0x00003228u): goto L_3228;
    case RC_ADDR(0x0000322cu): goto L_322C;
    case RC_ADDR(0x00003230u): goto L_3230;
    case RC_ADDR(0x00003232u): goto L_3232;
    case RC_ADDR(0x00003236u): goto L_3236;
    case RC_ADDR(0x0000323au): goto L_323A;
    case RC_ADDR(0x0000323cu): goto L_323C;
    case RC_ADDR(0x00003242u): goto L_3242;
    case RC_ADDR(0x00003246u): goto L_3246;
    case RC_ADDR(0x00003248u): goto L_3248;
    case RC_ADDR(0x0000324cu): goto L_324C;
    case RC_ADDR(0x00003250u): goto L_3250;
    case RC_ADDR(0x00003252u): goto L_3252;
    case RC_ADDR(0x00003254u): goto L_3254;
    case RC_ADDR(0x0000325au): goto L_325A;
    case RC_ADDR(0x0000325eu): goto L_325E;
    case RC_ADDR(0x00003260u): goto L_3260;
    case RC_ADDR(0x00003264u): goto L_3264;
    case RC_ADDR(0x00003268u): goto L_3268;
    case RC_ADDR(0x0000326au): goto L_326A;
    case RC_ADDR(0x0000326cu): goto L_326C;
    case RC_ADDR(0x0000326eu): goto L_326E;
    case RC_ADDR(0x00003272u): goto L_3272;
    case RC_ADDR(0x00003274u): goto L_3274;
    case RC_ADDR(0x00003276u): goto L_3276;
    case RC_ADDR(0x0000327au): goto L_327A;
    case RC_ADDR(0x0000327cu): goto L_327C;
    case RC_ADDR(0x00003282u): goto L_3282;
    case RC_ADDR(0x00003286u): goto L_3286;
    case RC_ADDR(0x0000328au): goto L_328A;
    case RC_ADDR(0x0000328cu): goto L_328C;
    case RC_ADDR(0x0000328eu): goto L_328E;
    case RC_ADDR(0x00003292u): goto L_3292;
    case RC_ADDR(0x00003296u): goto L_3296;
    case RC_ADDR(0x00003298u): goto L_3298;
    case RC_ADDR(0x0000329cu): goto L_329C;
    case RC_ADDR(0x000032a0u): goto L_32A0;
    case RC_ADDR(0x000032a2u): goto L_32A2;
    case RC_ADDR(0x000032a4u): goto L_32A4;
    case RC_ADDR(0x000032a6u): goto L_32A6;
    case RC_ADDR(0x000032aau): goto L_32AA;
    case RC_ADDR(0x000032aeu): goto L_32AE;
    case RC_ADDR(0x000032b0u): goto L_32B0;
    case RC_ADDR(0x000032b2u): goto L_32B2;
    case RC_ADDR(0x000032b6u): goto L_32B6;
    case RC_ADDR(0x000032bau): goto L_32BA;
    case RC_ADDR(0x000032bcu): goto L_32BC;
    case RC_ADDR(0x000032beu): goto L_32BE;
    case RC_ADDR(0x000032c2u): goto L_32C2;
    case RC_ADDR(0x000032c6u): goto L_32C6;
    case RC_ADDR(0x000032cau): goto L_32CA;
    case RC_ADDR(0x000032ceu): goto L_32CE;
    case RC_ADDR(0x000032d0u): goto L_32D0;
    case RC_ADDR(0x000032d4u): goto L_32D4;
    case RC_ADDR(0x000032d8u): goto L_32D8;
    case RC_ADDR(0x000032dcu): goto L_32DC;
    case RC_ADDR(0x000032deu): goto L_32DE;
    case RC_ADDR(0x000032e2u): goto L_32E2;
    case RC_ADDR(0x000032e4u): goto L_32E4;
    case RC_ADDR(0x000032e8u): goto L_32E8;
    case RC_ADDR(0x000032ecu): goto L_32EC;
    case RC_ADDR(0x000032eeu): goto L_32EE;
    case RC_ADDR(0x000032f0u): goto L_32F0;
    case RC_ADDR(0x000032f4u): goto L_32F4;
    case RC_ADDR(0x000032f8u): goto L_32F8;
    case RC_ADDR(0x000032fau): goto L_32FA;
    case RC_ADDR(0x000032fcu): goto L_32FC;
    case RC_ADDR(0x00003300u): goto L_3300;
    case RC_ADDR(0x00003304u): goto L_3304;
    case RC_ADDR(0x00003306u): goto L_3306;
    case RC_ADDR(0x0000330au): goto L_330A;
    case RC_ADDR(0x0000330eu): goto L_330E;
    case RC_ADDR(0x00003312u): goto L_3312;
    case RC_ADDR(0x00003316u): goto L_3316;
    case RC_ADDR(0x0000331au): goto L_331A;
    case RC_ADDR(0x0000331eu): goto L_331E;
    case RC_ADDR(0x00003322u): goto L_3322;
    case RC_ADDR(0x00003324u): goto L_3324;
    case RC_ADDR(0x00003328u): goto L_3328;
    case RC_ADDR(0x0000332cu): goto L_332C;
    case RC_ADDR(0x0000332eu): goto L_332E;
    case RC_ADDR(0x00003332u): goto L_3332;
    case RC_ADDR(0x00003336u): goto L_3336;
    case RC_ADDR(0x0000333au): goto L_333A;
    case RC_ADDR(0x0000333eu): goto L_333E;
    case RC_ADDR(0x00003340u): goto L_3340;
    case RC_ADDR(0x00003344u): goto L_3344;
    case RC_ADDR(0x00003346u): goto L_3346;
    case RC_ADDR(0x00003348u): goto L_3348;
    case RC_ADDR(0x0000334cu): goto L_334C;
    case RC_ADDR(0x00003350u): goto L_3350;
    case RC_ADDR(0x00003352u): goto L_3352;
    case RC_ADDR(0x00003356u): goto L_3356;
    case RC_ADDR(0x0000335au): goto L_335A;
    case RC_ADDR(0x0000335eu): goto L_335E;
    case RC_ADDR(0x00003362u): goto L_3362;
    case RC_ADDR(0x00003364u): goto L_3364;
    case RC_ADDR(0x00003368u): goto L_3368;
    case RC_ADDR(0x0000336au): goto L_336A;
    case RC_ADDR(0x0000336eu): goto L_336E;
    case RC_ADDR(0x00003372u): goto L_3372;
    case RC_ADDR(0x00003374u): goto L_3374;
    case RC_ADDR(0x00003376u): goto L_3376;
    case RC_ADDR(0x0000337au): goto L_337A;
    case RC_ADDR(0x0000337cu): goto L_337C;
    case RC_ADDR(0x00003382u): goto L_3382;
    case RC_ADDR(0x00003386u): goto L_3386;
    case RC_ADDR(0x0000338au): goto L_338A;
    case RC_ADDR(0x0000338cu): goto L_338C;
    case RC_ADDR(0x00003390u): goto L_3390;
    case RC_ADDR(0x00003392u): goto L_3392;
    case RC_ADDR(0x00003396u): goto L_3396;
    case RC_ADDR(0x0000339au): goto L_339A;
    case RC_ADDR(0x0000339cu): goto L_339C;
    case RC_ADDR(0x000033a0u): goto L_33A0;
    case RC_ADDR(0x000033a2u): goto L_33A2;
    case RC_ADDR(0x000033a8u): goto L_33A8;
    case RC_ADDR(0x000033acu): goto L_33AC;
    case RC_ADDR(0x000033b0u): goto L_33B0;
    case RC_ADDR(0x000033b4u): goto L_33B4;
    case RC_ADDR(0x000033b6u): goto L_33B6;
    case RC_ADDR(0x000033bau): goto L_33BA;
    case RC_ADDR(0x000033bcu): goto L_33BC;
    case RC_ADDR(0x000033c0u): goto L_33C0;
    case RC_ADDR(0x000033c4u): goto L_33C4;
    case RC_ADDR(0x000033c6u): goto L_33C6;
    case RC_ADDR(0x000033c8u): goto L_33C8;
    case RC_ADDR(0x000033cau): goto L_33CA;
    case RC_ADDR(0x000033ceu): goto L_33CE;
    case RC_ADDR(0x000033d2u): goto L_33D2;
    case RC_ADDR(0x000033d4u): goto L_33D4;
    case RC_ADDR(0x000033d6u): goto L_33D6;
    case RC_ADDR(0x000033dau): goto L_33DA;
    case RC_ADDR(0x000033deu): goto L_33DE;
    case RC_ADDR(0x000033e0u): goto L_33E0;
    case RC_ADDR(0x000033e4u): goto L_33E4;
    case RC_ADDR(0x000033e6u): goto L_33E6;
    case RC_ADDR(0x000033ecu): goto L_33EC;
    case RC_ADDR(0x000033eeu): goto L_33EE;
    case RC_ADDR(0x000033f2u): goto L_33F2;
    case RC_ADDR(0x000033f6u): goto L_33F6;
    case RC_ADDR(0x000033fau): goto L_33FA;
    case RC_ADDR(0x000033feu): goto L_33FE;
    case RC_ADDR(0x00003400u): goto L_3400;
    case RC_ADDR(0x00003404u): goto L_3404;
    case RC_ADDR(0x00003408u): goto L_3408;
    case RC_ADDR(0x0000340au): goto L_340A;
    case RC_ADDR(0x0000340eu): goto L_340E;
    case RC_ADDR(0x00003412u): goto L_3412;
    case RC_ADDR(0x00003416u): goto L_3416;
    case RC_ADDR(0x0000341au): goto L_341A;
    case RC_ADDR(0x0000341cu): goto L_341C;
    case RC_ADDR(0x00003420u): goto L_3420;
    case RC_ADDR(0x00003424u): goto L_3424;
    case RC_ADDR(0x00003426u): goto L_3426;
    case RC_ADDR(0x0000342cu): goto L_342C;
    case RC_ADDR(0x0000342eu): goto L_342E;
    case RC_ADDR(0x00003432u): goto L_3432;
    case RC_ADDR(0x00003438u): goto L_3438;
    case RC_ADDR(0x0000343au): goto L_343A;
    case RC_ADDR(0x0000343eu): goto L_343E;
    case RC_ADDR(0x00003442u): goto L_3442;
    case RC_ADDR(0x00003444u): goto L_3444;
    case RC_ADDR(0x00003446u): goto L_3446;
    case RC_ADDR(0x00003448u): goto L_3448;
    case RC_ADDR(0x0000344au): goto L_344A;
    case RC_ADDR(0x0000344eu): goto L_344E;
    case RC_ADDR(0x00003452u): goto L_3452;
    case RC_ADDR(0x00003456u): goto L_3456;
    case RC_ADDR(0x0000345au): goto L_345A;
    case RC_ADDR(0x0000345cu): goto L_345C;
    case RC_ADDR(0x00003460u): goto L_3460;
    case RC_ADDR(0x00003462u): goto L_3462;
    case RC_ADDR(0x00003466u): goto L_3466;
    case RC_ADDR(0x0000346au): goto L_346A;
    case RC_ADDR(0x0000346cu): goto L_346C;
    case RC_ADDR(0x00003470u): goto L_3470;
    case RC_ADDR(0x00003474u): goto L_3474;
    case RC_ADDR(0x0000347au): goto L_347A;
    case RC_ADDR(0x0000347cu): goto L_347C;
    case RC_ADDR(0x00003482u): goto L_3482;
    case RC_ADDR(0x00003484u): goto L_3484;
    case RC_ADDR(0x00003488u): goto L_3488;
    case RC_ADDR(0x0000348cu): goto L_348C;
    case RC_ADDR(0x00003490u): goto L_3490;
    case RC_ADDR(0x00003492u): goto L_3492;
    case RC_ADDR(0x00003494u): goto L_3494;
    case RC_ADDR(0x00003498u): goto L_3498;
    case RC_ADDR(0x0000349cu): goto L_349C;
    case RC_ADDR(0x000034a0u): goto L_34A0;
    case RC_ADDR(0x000034a2u): goto L_34A2;
    case RC_ADDR(0x000034a6u): goto L_34A6;
    case RC_ADDR(0x000034aau): goto L_34AA;
    case RC_ADDR(0x000034aeu): goto L_34AE;
    case RC_ADDR(0x000034b0u): goto L_34B0;
    case RC_ADDR(0x000034b4u): goto L_34B4;
    case RC_ADDR(0x000034b8u): goto L_34B8;
    case RC_ADDR(0x000034bau): goto L_34BA;
    case RC_ADDR(0x000034beu): goto L_34BE;
    case RC_ADDR(0x000034c0u): goto L_34C0;
    case RC_ADDR(0x000034c2u): goto L_34C2;
    case RC_ADDR(0x000034c6u): goto L_34C6;
    case RC_ADDR(0x000034c8u): goto L_34C8;
    case RC_ADDR(0x000034cau): goto L_34CA;
    case RC_ADDR(0x000034ceu): goto L_34CE;
    case RC_ADDR(0x000034d2u): goto L_34D2;
    case RC_ADDR(0x000034d4u): goto L_34D4;
    case RC_ADDR(0x000034dau): goto L_34DA;
    case RC_ADDR(0x000034dcu): goto L_34DC;
    case RC_ADDR(0x000034e0u): goto L_34E0;
    case RC_ADDR(0x000034e4u): goto L_34E4;
    case RC_ADDR(0x000034e8u): goto L_34E8;
    case RC_ADDR(0x000034eau): goto L_34EA;
    case RC_ADDR(0x000034f0u): goto L_34F0;
    case RC_ADDR(0x000034f2u): goto L_34F2;
    case RC_ADDR(0x000034f8u): goto L_34F8;
    case RC_ADDR(0x000034fau): goto L_34FA;
    case RC_ADDR(0x00003500u): goto L_3500;
    case RC_ADDR(0x00003502u): goto L_3502;
    case RC_ADDR(0x00003506u): goto L_3506;
    case RC_ADDR(0x0000350au): goto L_350A;
    case RC_ADDR(0x0000350cu): goto L_350C;
    case RC_ADDR(0x00003510u): goto L_3510;
    case RC_ADDR(0x00003514u): goto L_3514;
    case RC_ADDR(0x00003518u): goto L_3518;
    case RC_ADDR(0x0000351au): goto L_351A;
    case RC_ADDR(0x00003520u): goto L_3520;
    case RC_ADDR(0x00003524u): goto L_3524;
    case RC_ADDR(0x00003528u): goto L_3528;
    case RC_ADDR(0x0000352cu): goto L_352C;
    case RC_ADDR(0x0000352eu): goto L_352E;
    case RC_ADDR(0x00003534u): goto L_3534;
    case RC_ADDR(0x00003536u): goto L_3536;
    case RC_ADDR(0x0000353au): goto L_353A;
    case RC_ADDR(0x0000353cu): goto L_353C;
    case RC_ADDR(0x00003542u): goto L_3542;
    case RC_ADDR(0x00003546u): goto L_3546;
    case RC_ADDR(0x00003548u): goto L_3548;
    case RC_ADDR(0x0000354cu): goto L_354C;
    case RC_ADDR(0x00003552u): goto L_3552;
    case RC_ADDR(0x00003556u): goto L_3556;
    case RC_ADDR(0x0000355au): goto L_355A;
    case RC_ADDR(0x0000355cu): goto L_355C;
    case RC_ADDR(0x00003560u): goto L_3560;
    case RC_ADDR(0x00003562u): goto L_3562;
    case RC_ADDR(0x00003566u): goto L_3566;
    case RC_ADDR(0x0000356au): goto L_356A;
    case RC_ADDR(0x0000356cu): goto L_356C;
    case RC_ADDR(0x00003570u): goto L_3570;
    case RC_ADDR(0x00003572u): goto L_3572;
    case RC_ADDR(0x00003578u): goto L_3578;
    case RC_ADDR(0x0000357cu): goto L_357C;
    case RC_ADDR(0x00003580u): goto L_3580;
    case RC_ADDR(0x00003582u): goto L_3582;
    case RC_ADDR(0x00003588u): goto L_3588;
    case RC_ADDR(0x0000358cu): goto L_358C;
    case RC_ADDR(0x0000358eu): goto L_358E;
    case RC_ADDR(0x00003590u): goto L_3590;
    case RC_ADDR(0x00003594u): goto L_3594;
    case RC_ADDR(0x00003598u): goto L_3598;
    case RC_ADDR(0x000035beu): goto L_35BE;
    case RC_ADDR(0x000035c4u): goto L_35C4;
    case RC_ADDR(0x000035c6u): goto L_35C6;
    case RC_ADDR(0x000035c8u): goto L_35C8;
    case RC_ADDR(0x000035ccu): goto L_35CC;
    case RC_ADDR(0x000035d0u): goto L_35D0;
    case RC_ADDR(0x000035d4u): goto L_35D4;
    case RC_ADDR(0x000035d6u): goto L_35D6;
    case RC_ADDR(0x000035d8u): goto L_35D8;
    case RC_ADDR(0x000035dcu): goto L_35DC;
    case RC_ADDR(0x000035e0u): goto L_35E0;
    case RC_ADDR(0x000035e2u): goto L_35E2;
    case RC_ADDR(0x000035e6u): goto L_35E6;
    case RC_ADDR(0x000035eau): goto L_35EA;
    case RC_ADDR(0x000035eeu): goto L_35EE;
    case RC_ADDR(0x000035f0u): goto L_35F0;
    case RC_ADDR(0x000035f4u): goto L_35F4;
    case RC_ADDR(0x000035fau): goto L_35FA;
    case RC_ADDR(0x000035feu): goto L_35FE;
    case RC_ADDR(0x00003602u): goto L_3602;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_30A6:
    /* 000030a6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000030a6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_30AA:
    /* 000030aa   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000030aau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_30B0:
    /* 000030b0   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000030b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_30B4:
    /* 000030b4   4  beq 000035fe */
    c->pc = RC_ADDR(0x000030b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_35FE;

L_30B8:
    /* 000030b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000030b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_30BA:
    /* 000030ba   4  move.w (ffffd728,A4),D0 */
    c->pc = RC_ADDR(0x000030bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_30BE:
    /* 000030be   4  bra 000035be */
    c->pc = RC_ADDR(0x000030beu);
    rc_step(c, m, 10);
    goto L_35BE;

L_30C2:
    /* 000030c2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000030c2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30C6:
    /* 000030c6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000030c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_30CA:
    /* 000030ca   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000030cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000030ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_30CE:
    /* 000030ce   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000030ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_30D0:
    /* 000030d0   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000030d0u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_30D2:
    /* 000030d2   2  unlk A5 */
    c->pc = RC_ADDR(0x000030d2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_30D4:
    /* 000030d4   2  rts */
    c->pc = RC_ADDR(0x000030d4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_30D6:
    /* 000030d6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000030d6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30DA:
    /* 000030da   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000030dau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_30DE:
    /* 000030de   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000030deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000030e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_30E2:
    /* 000030e2   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000030e2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_30E4:
    /* 000030e4   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000030e4u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_30E6:
    /* 000030e6   2  bra 000030d2 */
    c->pc = RC_ADDR(0x000030e6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_30E8:
    /* 000030e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000030e8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_30EC:
    /* 000030ec   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000030ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_30F0:
    /* 000030f0   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000030f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000030f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_30F4:
    /* 000030f4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000030f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_30F6:
    /* 000030f6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000030f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_30FA:
    /* 000030fa   4  jsr (00006b5a) */
    c->pc = RC_ADDR(0x000030fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000030feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006b5au);
    return;

L_30FE:
    /* 000030fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000030feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3100:
    /* 00003100   4  bra 000035d0 */
    c->pc = RC_ADDR(0x00003100u);
    rc_step(c, m, 10);
    goto L_35D0;

L_3104:
    /* 00003104   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003104u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3108:
    /* 00003108   4  jsr (0000a730) */
    c->pc = RC_ADDR(0x00003108u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000310cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a730u);
    return;

L_310C:
    /* 0000310c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000310cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_310E:
    /* 0000310e   4  jsr (00003800) */
    c->pc = RC_ADDR(0x0000310eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003800u);
    return;

L_3112:
    /* 00003112   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x00003112u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_3116:
    /* 00003116   2  beq 0000311c */
    c->pc = RC_ADDR(0x00003116u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_311C;

L_3118:
    /* 00003118   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003118u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_311A:
    /* 0000311a   2  bra 000030d2 */
    c->pc = RC_ADDR(0x0000311au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_311C:
    /* 0000311c   4  move.w (ffffd6fa,A4),-(A7) */
    c->pc = RC_ADDR(0x0000311cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2906u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3120:
    /* 00003120   4  move.w (ffffd6f8,A4),-(A7) */
    c->pc = RC_ADDR(0x00003120u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2908u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3124:
    /* 00003124   4  jsr (00001c86) */
    c->pc = RC_ADDR(0x00003124u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003128u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001c86u);
    return;

L_3128:
    /* 00003128   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003128u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_312A:
    /* 0000312a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000312au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_312C:
    /* 0000312c   2  bne 0000313e */
    c->pc = RC_ADDR(0x0000312cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_313E;

L_312E:
    /* 0000312e   6  cmpi.w #7,(ffffd6f8,A4) */
    c->pc = RC_ADDR(0x0000312eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2908u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_3134:
    /* 00003134   2  bge 0000318c */
    c->pc = RC_ADDR(0x00003134u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_318C;

L_3136:
    /* 00003136   6  cmpi.w #7,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00003136u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_313C:
    /* 0000313c   2  blt 0000318c */
    c->pc = RC_ADDR(0x0000313cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_318C;

L_313E:
    /* 0000313e   6  move.w #1,(ffffd6f4,A4) */
    c->pc = RC_ADDR(0x0000313eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x290cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3144:
    /* 00003144   4  tst.w (ffffd6f6,A4) */
    c->pc = RC_ADDR(0x00003144u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x290au));
    rc_set_nzvc(c, t0, RC_W);

L_3148:
    /* 00003148   2  beq 00003186 */
    c->pc = RC_ADDR(0x00003148u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3186;

L_314A:
    /* 0000314a   4  jsr (000018d0) */
    c->pc = RC_ADDR(0x0000314au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000314eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000018d0u);
    return;

L_314E:
    /* 0000314e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000314eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3152:
    /* 00003152   4  pea (0000360f) */
    c->pc = RC_ADDR(0x00003152u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000360fu));

L_3156:
    /* 00003156   4  pea (00003606) */
    c->pc = RC_ADDR(0x00003156u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003606u));

L_315A:
    /* 0000315a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000315au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000315eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_315E:
    /* 0000315e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000315eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_3162:
    /* 00003162   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00003162u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3166:
    /* 00003166   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x00003166u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_316A:
    /* 0000316a   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x0000316au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_316E:
    /* 0000316e   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x0000316eu);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_3172:
    /* 00003172   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00003172u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3174:
    /* 00003174   4  lea (ffffd738,A4),A0 */
    c->pc = RC_ADDR(0x00003174u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c8u);

L_3178:
    /* 00003178   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00003178u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_317C:
    /* 0000317c   4  pea (0000361b) */
    c->pc = RC_ADDR(0x0000317cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000361bu));

L_3180:
    /* 00003180   4  jsr (00001468) */
    c->pc = RC_ADDR(0x00003180u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003184u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001468u);
    return;

L_3184:
    /* 00003184   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003184u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3186:
    /* 00003186   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003186u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3188:
    /* 00003188   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003188u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_318C:
    /* 0000318c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000318cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3190:
    /* 00003190   4  jsr (ffff8098,A4) */
    c->pc = RC_ADDR(0x00003190u);
    rc_step(c, m, 18);
    /* vector 25 */
    rc_push32(c, m, RC_ADDR(0x00003194u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a80cu);
    return;

L_3194:
    /* 00003194   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003194u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3196:
    /* 00003196   4  bra 000035d0 */
    c->pc = RC_ADDR(0x00003196u);
    rc_step(c, m, 10);
    goto L_35D0;

L_319A:
    /* 0000319a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000319au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_319E:
    /* 0000319e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000319eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_31A2:
    /* 000031a2   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000031a2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000031a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_31A6:
    /* 000031a6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000031a6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_31A8:
    /* 000031a8   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x000031a8u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x000031acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_31AC:
    /* 000031ac   4  jsr (00004b34) */
    c->pc = RC_ADDR(0x000031acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000031b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004b34u);
    return;

L_31B0:
    /* 000031b0   4  clr.b (fffff862,A4) */
    c->pc = RC_ADDR(0x000031b0u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] - 0x79eu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_31B4:
    /* 000031b4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000031b4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_31BA:
    /* 000031ba   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000031bau);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_31BE:
    /* 000031be   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000031beu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000031c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_31C2:
    /* 000031c2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000031c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_31C4:
    /* 000031c4   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000031c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_31C8:
    /* 000031c8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000031c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_31CC:
    /* 000031cc   4  jsr (00005e3e) */
    c->pc = RC_ADDR(0x000031ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000031d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005e3eu);
    return;

L_31D0:
    /* 000031d0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000031d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_31D2:
    /* 000031d2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000031d2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_31D4:
    /* 000031d4   4  move.l (fffff86c,A4),-(A7) */
    c->pc = RC_ADDR(0x000031d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x794u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_31D8:
    /* 000031d8   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x000031d8u);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_31DC:
    /* 000031dc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000031dcu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000031e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_31E0:
    /* 000031e0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000031e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_31E2:
    /* 000031e2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000031e2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_31E4:
    /* 000031e4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000031e4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_31E6:
    /* 000031e6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000031e6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_31E8:
    /* 000031e8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000031e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_31EC:
    /* 000031ec   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000031ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_31F0:
    /* 000031f0   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x000031f0u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x000031f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_31F4:
    /* 000031f4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000031f4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_31F8:
    /* 000031f8   4  jsr (0000a596) */
    c->pc = RC_ADDR(0x000031f8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000031fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a596u);
    return;

L_31FC:
    /* 000031fc   4  bra 000035d0 */
    c->pc = RC_ADDR(0x000031fcu);
    rc_step(c, m, 10);
    goto L_35D0;

L_3200:
    /* 00003200   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003200u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3202:
    /* 00003202   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003202u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3206:
    /* 00003206   4  jsr (00003628) */
    c->pc = RC_ADDR(0x00003206u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000320au));
    rc_depth++;
    c->pc = RC_ADDR(0x00003628u);
    return;

L_320A:
    /* 0000320a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000320au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_320C:
    /* 0000320c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000320cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_320E:
    /* 0000320e   4  bra 000030d2 */
    c->pc = RC_ADDR(0x0000320eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_3212:
    /* 00003212   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003212u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3216:
    /* 00003216   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003216u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_321A:
    /* 0000321a   4  jsr (00006500) */
    c->pc = RC_ADDR(0x0000321au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000321eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_321E:
    /* 0000321e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000321eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3220:
    /* 00003220   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00003220u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00003224u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_3224:
    /* 00003224   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00003224u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00003228u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_3228:
    /* 00003228   4  jsr (ffff810a,A4) */
    c->pc = RC_ADDR(0x00003228u);
    rc_step(c, m, 18);
    /* vector 44 */
    rc_push32(c, m, RC_ADDR(0x0000322cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c00u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000c974u);
    return;

L_322C:
    /* 0000322c   4  tst.w (854,A4) */
    c->pc = RC_ADDR(0x0000322cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x854u));
    rc_set_nzvc(c, t0, RC_W);

L_3230:
    /* 00003230   2  beq 00003254 */
    c->pc = RC_ADDR(0x00003230u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3254;

L_3232:
    /* 00003232   4  clr.w (854,A4) */
    c->pc = RC_ADDR(0x00003232u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x854u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3236:
    /* 00003236   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x00003236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_323A:
    /* 0000323a   2  beq 00003248 */
    c->pc = RC_ADDR(0x0000323au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3248;

L_323C:
    /* 0000323c   6  move.w #1,(79c,A4) */
    c->pc = RC_ADDR(0x0000323cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x79cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3242:
    /* 00003242   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00003242u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3246:
    /* 00003246   2  bra 00003252 */
    c->pc = RC_ADDR(0x00003246u);
    rc_step(c, m, 10);
    goto L_3252;

L_3248:
    /* 00003248   4  move.w #f5,-(A7) */
    c->pc = RC_ADDR(0x00003248u);
    rc_step(c, m, 12);
    t0 = 0x000000f5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_324C:
    /* 0000324c   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x0000324cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003250u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_3250:
    /* 00003250   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003250u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3252:
    /* 00003252   2  bra 000032bc */
    c->pc = RC_ADDR(0x00003252u);
    rc_step(c, m, 10);
    goto L_32BC;

L_3254:
    /* 00003254   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x00003254u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_325A:
    /* 0000325a   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x0000325au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_325E:
    /* 0000325e   2  beq 0000328e */
    c->pc = RC_ADDR(0x0000325eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_328E;

L_3260:
    /* 00003260   4  move.w (ffffd72a,A4),-(A7) */
    c->pc = RC_ADDR(0x00003260u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3264:
    /* 00003264   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00003264u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00003268u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_3268:
    /* 00003268   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003268u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_326A:
    /* 0000326a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000326au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_326C:
    /* 0000326c   2  beq 0000327c */
    c->pc = RC_ADDR(0x0000326cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_327C;

L_326E:
    /* 0000326e   4  move.w (ffffd72a,A4),D0 */
    c->pc = RC_ADDR(0x0000326eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3272:
    /* 00003272   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00003272u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3274:
    /* 00003274   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003274u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3276:
    /* 00003276   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00003276u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0000327au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_327A:
    /* 0000327a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000327au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_327C:
    /* 0000327c   6  move.w #1,(ffff858c,A4) */
    c->pc = RC_ADDR(0x0000327cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3282:
    /* 00003282   4  move.w #f8,-(A7) */
    c->pc = RC_ADDR(0x00003282u);
    rc_step(c, m, 12);
    t0 = 0x000000f8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3286:
    /* 00003286   4  jsr (00008054) */
    c->pc = RC_ADDR(0x00003286u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000328au));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_328A:
    /* 0000328a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000328au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_328C:
    /* 0000328c   2  bra 000032bc */
    c->pc = RC_ADDR(0x0000328cu);
    rc_step(c, m, 10);
    goto L_32BC;

L_328E:
    /* 0000328e   4  move.w #22,-(A7) */
    c->pc = RC_ADDR(0x0000328eu);
    rc_step(c, m, 12);
    t0 = 0x00000022u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3292:
    /* 00003292   4  jsr (00008054) */
    c->pc = RC_ADDR(0x00003292u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003296u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_3296:
    /* 00003296   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003296u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3298:
    /* 00003298   4  move.w #f8,-(A7) */
    c->pc = RC_ADDR(0x00003298u);
    rc_step(c, m, 12);
    t0 = 0x000000f8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_329C:
    /* 0000329c   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000329cu);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x000032a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_32A0:
    /* 000032a0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000032a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_32A2:
    /* 000032a2   2  tst.w D0 */
    c->pc = RC_ADDR(0x000032a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_32A4:
    /* 000032a4   2  beq 000032b2 */
    c->pc = RC_ADDR(0x000032a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_32B2;

L_32A6:
    /* 000032a6   4  move.w #f8,-(A7) */
    c->pc = RC_ADDR(0x000032a6u);
    rc_step(c, m, 12);
    t0 = 0x000000f8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_32AA:
    /* 000032aa   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000032aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000032aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_32AE:
    /* 000032ae   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000032aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_32B0:
    /* 000032b0   2  bra 000032bc */
    c->pc = RC_ADDR(0x000032b0u);
    rc_step(c, m, 10);
    goto L_32BC;

L_32B2:
    /* 000032b2   4  move.w #f5,-(A7) */
    c->pc = RC_ADDR(0x000032b2u);
    rc_step(c, m, 12);
    t0 = 0x000000f5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_32B6:
    /* 000032b6   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000032b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000032bau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_32BA:
    /* 000032ba   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000032bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_32BC:
    /* 000032bc   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000032bcu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_32BE:
    /* 000032be   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000032beu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_32C2:
    /* 000032c2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000032c2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_32C6:
    /* 000032c6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000032c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_32CA:
    /* 000032ca   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000032cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000032ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_32CE:
    /* 000032ce   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000032ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_32D0:
    /* 000032d0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000032d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_32D4:
    /* 000032d4   4  pea (83c,A4) */
    c->pc = RC_ADDR(0x000032d4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x83cu));

L_32D8:
    /* 000032d8   4  jsr (ffff8116,A4) */
    c->pc = RC_ADDR(0x000032d8u);
    rc_step(c, m, 18);
    /* vector 46 */
    rc_push32(c, m, RC_ADDR(0x000032dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000d534u);
    return;

L_32DC:
    /* 000032dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000032dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_32DE:
    /* 000032de   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x000032deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_32E2:
    /* 000032e2   2  bne 000032f4 */
    c->pc = RC_ADDR(0x000032e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_32F4;

L_32E4:
    /* 000032e4   4  move.w #f9,-(A7) */
    c->pc = RC_ADDR(0x000032e4u);
    rc_step(c, m, 12);
    t0 = 0x000000f9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_32E8:
    /* 000032e8   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000032e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000032ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_32EC:
    /* 000032ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000032ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_32EE:
    /* 000032ee   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000032eeu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_32F0:
    /* 000032f0   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000032f0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_32F4:
    /* 000032f4   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x000032f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_32F8:
    /* 000032f8   2  bne 00003300 */
    c->pc = RC_ADDR(0x000032f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3300;

L_32FA:
    /* 000032fa   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000032fau);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_32FC:
    /* 000032fc   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000032fcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_3300:
    /* 00003300   4  tst.w (fffffa10,A4) */
    c->pc = RC_ADDR(0x00003300u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f0u));
    rc_set_nzvc(c, t0, RC_W);

L_3304:
    /* 00003304   2  bne 0000330a */
    c->pc = RC_ADDR(0x00003304u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_330A;

L_3306:
    /* 00003306   4  addq.w #1,(fffffa10,A4) */
    c->pc = RC_ADDR(0x00003306u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5f0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_330A:
    /* 0000330a   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0000330au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_330E:
    /* 0000330e   4  bra 000030d2 */
    c->pc = RC_ADDR(0x0000330eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_3312:
    /* 00003312   4  clr.w (ffff85a2,A4) */
    c->pc = RC_ADDR(0x00003312u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3316:
    /* 00003316   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003316u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_331A:
    /* 0000331a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000331au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_331E:
    /* 0000331e   4  jsr (00006500) */
    c->pc = RC_ADDR(0x0000331eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003322u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_3322:
    /* 00003322   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00003322u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3324:
    /* 00003324   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003324u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3328:
    /* 00003328   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x00003328u);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0000332cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_332C:
    /* 0000332c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000332cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_332E:
    /* 0000332e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000332eu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00003332u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_3332:
    /* 00003332   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00003332u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00003336u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_3336:
    /* 00003336   4  jsr (ffff81c4,A4) */
    c->pc = RC_ADDR(0x00003336u);
    rc_step(c, m, 18);
    /* vector 75 */
    rc_push32(c, m, RC_ADDR(0x0000333au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cbau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000198d4u);
    return;

L_333A:
    /* 0000333a   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x0000333au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_333E:
    /* 0000333e   2  beq 0000334c */
    c->pc = RC_ADDR(0x0000333eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_334C;

L_3340:
    /* 00003340   4  tst.w (858,A4) */
    c->pc = RC_ADDR(0x00003340u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x858u));
    rc_set_nzvc(c, t0, RC_W);

L_3344:
    /* 00003344   2  beq 0000334c */
    c->pc = RC_ADDR(0x00003344u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_334C;

L_3346:
    /* 00003346   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003346u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3348:
    /* 00003348   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003348u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_334C:
    /* 0000334c   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x0000334cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_3350:
    /* 00003350   2  beq 00003376 */
    c->pc = RC_ADDR(0x00003350u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3376;

L_3352:
    /* 00003352   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00003352u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3356:
    /* 00003356   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x00003356u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_335A:
    /* 0000335a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000335au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_335E:
    /* 0000335e   4  jsr (ffff809e,A4) */
    c->pc = RC_ADDR(0x0000335eu);
    rc_step(c, m, 18);
    /* vector 26 */
    rc_push32(c, m, RC_ADDR(0x00003362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a8f2u);
    return;

L_3362:
    /* 00003362   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003362u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3364:
    /* 00003364   4  tst.w (7b6,A4) */
    c->pc = RC_ADDR(0x00003364u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b6u));
    rc_set_nzvc(c, t0, RC_W);

L_3368:
    /* 00003368   2  beq 00003374 */
    c->pc = RC_ADDR(0x00003368u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3374;

L_336A:
    /* 0000336a   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x0000336au);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_336E:
    /* 0000336e   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0000336eu);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00003372u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_3372:
    /* 00003372   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003372u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3374:
    /* 00003374   2  bra 000033e0 */
    c->pc = RC_ADDR(0x00003374u);
    rc_step(c, m, 10);
    goto L_33E0;

L_3376:
    /* 00003376   4  tst.w (ffffd72e,A4) */
    c->pc = RC_ADDR(0x00003376u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d2u));
    rc_set_nzvc(c, t0, RC_W);

L_337A:
    /* 0000337a   2  bne 00003382 */
    c->pc = RC_ADDR(0x0000337au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3382;

L_337C:
    /* 0000337c   6  move.w #1,(ffffd72e,A4) */
    c->pc = RC_ADDR(0x0000337cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x28d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3382:
    /* 00003382   4  move.w (ffffd72e,A4),D0 */
    c->pc = RC_ADDR(0x00003382u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3386:
    /* 00003386   4  mulu.w #5a0,D0 */
    c->pc = RC_ADDR(0x00003386u);
    rc_step(c, m, 42);
    t0 = 0x000005a0u;
    rc_mulu(c, 0, t0);

L_338A:
    /* 0000338a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000338au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_338C:
    /* 0000338c   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000338cu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00003390u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_3390:
    /* 00003390   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003390u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3392:
    /* 00003392   4  move.w (ffffd72e,A4),D0 */
    c->pc = RC_ADDR(0x00003392u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3396:
    /* 00003396   4  mulu.w #18,D0 */
    c->pc = RC_ADDR(0x00003396u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_mulu(c, 0, t0);

L_339A:
    /* 0000339a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000339au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_339C:
    /* 0000339c   4  jsr (ffff809e,A4) */
    c->pc = RC_ADDR(0x0000339cu);
    rc_step(c, m, 18);
    /* vector 26 */
    rc_push32(c, m, RC_ADDR(0x000033a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a8f2u);
    return;

L_33A0:
    /* 000033a0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000033a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_33A2:
    /* 000033a2   6  move.w #8,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x000033a2u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x7c1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_33A8:
    /* 000033a8   4  clr.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000033a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_33AC:
    /* 000033ac   4  move.w #1388,-(A7) */
    c->pc = RC_ADDR(0x000033acu);
    rc_step(c, m, 12);
    t0 = 0x00001388u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33B0:
    /* 000033b0   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x000033b0u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x000033b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_33B4:
    /* 000033b4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000033b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_33B6:
    /* 000033b6   4  cmp.w #9c4,D0 */
    c->pc = RC_ADDR(0x000033b6u);
    rc_step(c, m, 8);
    t0 = 0x000009c4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_33BA:
    /* 000033ba   2  bge 000033d6 */
    c->pc = RC_ADDR(0x000033bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_33D6;

L_33BC:
    /* 000033bc   4  move.w #25,-(A7) */
    c->pc = RC_ADDR(0x000033bcu);
    rc_step(c, m, 12);
    t0 = 0x00000025u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33C0:
    /* 000033c0   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x000033c0u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x000033c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_33C4:
    /* 000033c4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000033c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_33C6:
    /* 000033c6   2  tst.w D0 */
    c->pc = RC_ADDR(0x000033c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_33C8:
    /* 000033c8   2  beq 000033d6 */
    c->pc = RC_ADDR(0x000033c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_33D6;

L_33CA:
    /* 000033ca   4  move.w #fd,-(A7) */
    c->pc = RC_ADDR(0x000033cau);
    rc_step(c, m, 12);
    t0 = 0x000000fdu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33CE:
    /* 000033ce   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000033ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000033d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_33D2:
    /* 000033d2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000033d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_33D4:
    /* 000033d4   2  bra 000033e0 */
    c->pc = RC_ADDR(0x000033d4u);
    rc_step(c, m, 10);
    goto L_33E0;

L_33D6:
    /* 000033d6   4  move.w #fb,-(A7) */
    c->pc = RC_ADDR(0x000033d6u);
    rc_step(c, m, 12);
    t0 = 0x000000fbu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33DA:
    /* 000033da   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000033dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000033deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_33DE:
    /* 000033de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000033deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_33E0:
    /* 000033e0   4  tst.w (ffff8492,A4) */
    c->pc = RC_ADDR(0x000033e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b6eu));
    rc_set_nzvc(c, t0, RC_W);

L_33E4:
    /* 000033e4   2  bne 000033ec */
    c->pc = RC_ADDR(0x000033e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_33EC;

L_33E6:
    /* 000033e6   6  move.w (ffff83e2,A4),(ffff8492,A4) */
    c->pc = RC_ADDR(0x000033e6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_wr16(c, m, (c->a[4] - 0x7b6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_33EC:
    /* 000033ec   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000033ecu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_33EE:
    /* 000033ee   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000033eeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_33F2:
    /* 000033f2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000033f2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_33F6:
    /* 000033f6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000033f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_33FA:
    /* 000033fa   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000033fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000033feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_33FE:
    /* 000033fe   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000033feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3400:
    /* 00003400   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003400u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3404:
    /* 00003404   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x00003404u);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x00003408u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_3408:
    /* 00003408   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003408u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_340A:
    /* 0000340a   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000340au);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000340eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_340E:
    /* 0000340e   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000340eu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00003412u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_3412:
    /* 00003412   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x00003412u);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3416:
    /* 00003416   4  jsr (ffff815e,A4) */
    c->pc = RC_ADDR(0x00003416u);
    rc_step(c, m, 18);
    /* vector 58 */
    rc_push32(c, m, RC_ADDR(0x0000341au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c54u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011ff8u);
    return;

L_341A:
    /* 0000341a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000341au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_341C:
    /* 0000341c   4  move.w #27,-(A7) */
    c->pc = RC_ADDR(0x0000341cu);
    rc_step(c, m, 12);
    t0 = 0x00000027u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3420:
    /* 00003420   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00003420u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00003424u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_3424:
    /* 00003424   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003424u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3426:
    /* 00003426   6  move.w #1,(ffff858a,A4) */
    c->pc = RC_ADDR(0x00003426u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_342C:
    /* 0000342c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000342cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_342E:
    /* 0000342e   4  bra 000030d2 */
    c->pc = RC_ADDR(0x0000342eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_3432:
    /* 00003432   6  cmpi.w #f,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00003432u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_3438:
    /* 00003438   2  beq 0000344e */
    c->pc = RC_ADDR(0x00003438u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_344E;

L_343A:
    /* 0000343a   4  move.w (fffff78c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000343au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_343E:
    /* 0000343e   4  jsr (0000520c) */
    c->pc = RC_ADDR(0x0000343eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003442u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000520cu);
    return;

L_3442:
    /* 00003442   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003442u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3444:
    /* 00003444   2  tst.w D0 */
    c->pc = RC_ADDR(0x00003444u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_3446:
    /* 00003446   2  bne 0000344e */
    c->pc = RC_ADDR(0x00003446u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_344E;

L_3448:
    /* 00003448   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003448u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_344A:
    /* 0000344a   4  bra 000030d2 */
    c->pc = RC_ADDR(0x0000344au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_344E:
    /* 0000344e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000344eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3452:
    /* 00003452   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003452u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3456:
    /* 00003456   4  jsr (00006500) */
    c->pc = RC_ADDR(0x00003456u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000345au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_345A:
    /* 0000345a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000345au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_345C:
    /* 0000345c   4  tst.w (fffffa10,A4) */
    c->pc = RC_ADDR(0x0000345cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f0u));
    rc_set_nzvc(c, t0, RC_W);

L_3460:
    /* 00003460   2  beq 0000346c */
    c->pc = RC_ADDR(0x00003460u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_346C;

L_3462:
    /* 00003462   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003462u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3466:
    /* 00003466   4  jsr (00007e40) */
    c->pc = RC_ADDR(0x00003466u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000346au));
    rc_depth++;
    c->pc = RC_ADDR(0x00007e40u);
    return;

L_346A:
    /* 0000346a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000346au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_346C:
    /* 0000346c   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000346cu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00003470u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_3470:
    /* 00003470   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00003470u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00003474u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_3474:
    /* 00003474   6  cmpi.w #8,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00003474u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_347A:
    /* 0000347a   2  bcc 00003494 */
    c->pc = RC_ADDR(0x0000347au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_3494;

L_347C:
    /* 0000347c   6  cmpi.w #f,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000347cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_3482:
    /* 00003482   2  beq 00003494 */
    c->pc = RC_ADDR(0x00003482u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3494;

L_3484:
    /* 00003484   4  clr.w (85a,A4) */
    c->pc = RC_ADDR(0x00003484u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x85au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3488:
    /* 00003488   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003488u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_348C:
    /* 0000348c   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x0000348cu);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x00003490u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_3490:
    /* 00003490   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003490u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3492:
    /* 00003492   2  bra 000034ce */
    c->pc = RC_ADDR(0x00003492u);
    rc_step(c, m, 10);
    goto L_34CE;

L_3494:
    /* 00003494   4  jsr (0000a526) */
    c->pc = RC_ADDR(0x00003494u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003498u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a526u);
    return;

L_3498:
    /* 00003498   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00003498u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000349cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_349C:
    /* 0000349c   4  tst.w (ffff8492,A4) */
    c->pc = RC_ADDR(0x0000349cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b6eu));
    rc_set_nzvc(c, t0, RC_W);

L_34A0:
    /* 000034a0   2  bge 000034a6 */
    c->pc = RC_ADDR(0x000034a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_34A6;

L_34A2:
    /* 000034a2   4  clr.w (ffff8492,A4) */
    c->pc = RC_ADDR(0x000034a2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7b6eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_34A6:
    /* 000034a6   4  move.w #dc,-(A7) */
    c->pc = RC_ADDR(0x000034a6u);
    rc_step(c, m, 12);
    t0 = 0x000000dcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_34AA:
    /* 000034aa   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000034aau);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000034aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_34AE:
    /* 000034ae   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000034aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_34B0:
    /* 000034b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000034b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_34B4:
    /* 000034b4   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x000034b4u);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x000034b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_34B8:
    /* 000034b8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000034b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_34BA:
    /* 000034ba   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x000034bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_34BE:
    /* 000034be   2  bne 000034ce */
    c->pc = RC_ADDR(0x000034beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_34CE;

L_34C0:
    /* 000034c0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000034c0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_34C2:
    /* 000034c2   4  jsr (0000302c) */
    c->pc = RC_ADDR(0x000034c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000034c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_34C6:
    /* 000034c6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000034c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_34C8:
    /* 000034c8   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000034c8u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_34CA:
    /* 000034ca   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000034cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_34CE:
    /* 000034ce   4  tst.w (85a,A4) */
    c->pc = RC_ADDR(0x000034ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x85au));
    rc_set_nzvc(c, t0, RC_W);

L_34D2:
    /* 000034d2   2  bne 00003546 */
    c->pc = RC_ADDR(0x000034d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3546;

L_34D4:
    /* 000034d4   6  cmpi.w #f,(fffff78c,A4) */
    c->pc = RC_ADDR(0x000034d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_34DA:
    /* 000034da   2  beq 00003546 */
    c->pc = RC_ADDR(0x000034dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3546;

L_34DC:
    /* 000034dc   4  clr.w (ffff85a2,A4) */
    c->pc = RC_ADDR(0x000034dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_34E0:
    /* 000034e0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000034e0u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_34E4:
    /* 000034e4   4  jsr (ffff815e,A4) */
    c->pc = RC_ADDR(0x000034e4u);
    rc_step(c, m, 18);
    /* vector 58 */
    rc_push32(c, m, RC_ADDR(0x000034e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c54u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011ff8u);
    return;

L_34E8:
    /* 000034e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000034e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_34EA:
    /* 000034ea   6  cmpi.w #21,(fffff78c,A4) */
    c->pc = RC_ADDR(0x000034eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000021u);

L_34F0:
    /* 000034f0   2  bls 00003502 */
    c->pc = RC_ADDR(0x000034f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_3502;

L_34F2:
    /* 000034f2   6  cmpi.w #26,(fffff78c,A4) */
    c->pc = RC_ADDR(0x000034f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_34F8:
    /* 000034f8   2  bcc 00003502 */
    c->pc = RC_ADDR(0x000034f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_3502;

L_34FA:
    /* 000034fa   6  move.w #1,(ffff8586,A4) */
    c->pc = RC_ADDR(0x000034fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3500:
    /* 00003500   2  bra 00003506 */
    c->pc = RC_ADDR(0x00003500u);
    rc_step(c, m, 10);
    goto L_3506;

L_3502:
    /* 00003502   4  clr.w (ffff8586,A4) */
    c->pc = RC_ADDR(0x00003502u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3506:
    /* 00003506   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x00003506u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_350A:
    /* 0000350a   2  beq 0000352e */
    c->pc = RC_ADDR(0x0000350au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_352E;

L_350C:
    /* 0000350c   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x0000350cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3510:
    /* 00003510   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00003510u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3514:
    /* 00003514   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00003514u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_3518:
    /* 00003518   2  ble 0000352c */
    c->pc = RC_ADDR(0x00003518u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_352C;

L_351A:
    /* 0000351a   6  move.b #80,(fffff862,A4) */
    c->pc = RC_ADDR(0x0000351au);
    rc_step(c, m, 16);
    t0 = 0x00000080u;
    rc_wr8(c, m, (c->a[4] - 0x79eu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_3520:
    /* 00003520   4  jsr (00007700) */
    c->pc = RC_ADDR(0x00003520u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003524u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007700u);
    return;

L_3524:
    /* 00003524   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00003524u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3528:
    /* 00003528   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003528u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_352C:
    /* 0000352c   2  bra 00003546 */
    c->pc = RC_ADDR(0x0000352cu);
    rc_step(c, m, 10);
    goto L_3546;

L_352E:
    /* 0000352e   6  cmpi.w #6,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x0000352eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_3534:
    /* 00003534   2  bcc 00003546 */
    c->pc = RC_ADDR(0x00003534u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_3546;

L_3536:
    /* 00003536   4  tst.w (ffff8586,A4) */
    c->pc = RC_ADDR(0x00003536u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a7au));
    rc_set_nzvc(c, t0, RC_W);

L_353A:
    /* 0000353a   2  beq 00003546 */
    c->pc = RC_ADDR(0x0000353au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3546;

L_353C:
    /* 0000353c   6  move.w #3,(ffff9582,A4) */
    c->pc = RC_ADDR(0x0000353cu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3542:
    /* 00003542   4  jsr (ffff8104,A4) */
    c->pc = RC_ADDR(0x00003542u);
    rc_step(c, m, 18);
    /* vector 43 */
    rc_push32(c, m, RC_ADDR(0x00003546u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bfau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b9deu);
    return;

L_3546:
    /* 00003546   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00003546u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3548:
    /* 00003548   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003548u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_354C:
    /* 0000354c   6  move.w #1,(fffff7b2,A4) */
    c->pc = RC_ADDR(0x0000354cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x84eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3552:
    /* 00003552   4  move.w (ffffd72e,A4),D0 */
    c->pc = RC_ADDR(0x00003552u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3556:
    /* 00003556   4  mulu.w #5a0,D0 */
    c->pc = RC_ADDR(0x00003556u);
    rc_step(c, m, 42);
    t0 = 0x000005a0u;
    rc_mulu(c, 0, t0);

L_355A:
    /* 0000355a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000355au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_355C:
    /* 0000355c   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000355cu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00003560u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_3560:
    /* 00003560   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003560u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3562:
    /* 00003562   4  move.w (ffffd72e,A4),D0 */
    c->pc = RC_ADDR(0x00003562u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x28d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3566:
    /* 00003566   4  mulu.w #18,D0 */
    c->pc = RC_ADDR(0x00003566u);
    rc_step(c, m, 42);
    t0 = 0x00000018u;
    rc_mulu(c, 0, t0);

L_356A:
    /* 0000356a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000356au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_356C:
    /* 0000356c   4  jsr (ffff809e,A4) */
    c->pc = RC_ADDR(0x0000356cu);
    rc_step(c, m, 18);
    /* vector 26 */
    rc_push32(c, m, RC_ADDR(0x00003570u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a8f2u);
    return;

L_3570:
    /* 00003570   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003570u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3572:
    /* 00003572   6  move.w #8,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00003572u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x7c1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3578:
    /* 00003578   4  clr.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x00003578u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_357C:
    /* 0000357c   4  tst.w (ffff8492,A4) */
    c->pc = RC_ADDR(0x0000357cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b6eu));
    rc_set_nzvc(c, t0, RC_W);

L_3580:
    /* 00003580   2  bne 00003588 */
    c->pc = RC_ADDR(0x00003580u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3588;

L_3582:
    /* 00003582   6  move.w (ffff83e2,A4),(ffff8492,A4) */
    c->pc = RC_ADDR(0x00003582u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_wr16(c, m, (c->a[4] - 0x7b6eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3588:
    /* 00003588   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00003588u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_358C:
    /* 0000358c   2  bne 00003594 */
    c->pc = RC_ADDR(0x0000358cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3594;

L_358E:
    /* 0000358e   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000358eu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3590:
    /* 00003590   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003590u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_3594:
    /* 00003594   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00003594u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3598:
    /* 00003598   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003598u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_35BE:
    /* 000035be   6  cmp.l #11,D0 */
    c->pc = RC_ADDR(0x000035beu);
    rc_step(c, m, 14);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_35C4:
    /* 000035c4   2  bcc 00003588 */
    c->pc = RC_ADDR(0x000035c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_3588; }

L_35C6:
    /* 000035c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000035c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_35C8:
    /* 000035c8   4  move.w (0000359c),D0 */
    c->pc = RC_ADDR(0x000035c8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000359cu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_35CC:
    /* 000035cc   4  jmp (000035ce) */
    c->pc = RC_ADDR(0x000035ccu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x000035ceu) + t4);
    c->pc = t3;
    return;

L_35D0:
    /* 000035d0   4  tst.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000035d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a4cu));
    rc_set_nzvc(c, t0, RC_W);

L_35D4:
    /* 000035d4   2  beq 000035dc */
    c->pc = RC_ADDR(0x000035d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_35DC;

L_35D6:
    /* 000035d6   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000035d6u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_35D8:
    /* 000035d8   4  bra 000030d2 */
    c->pc = RC_ADDR(0x000035d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

L_35DC:
    /* 000035dc   4  tst.w (e,A5) */
    c->pc = RC_ADDR(0x000035dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_35E0:
    /* 000035e0   2  beq 000035f4 */
    c->pc = RC_ADDR(0x000035e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_35F4;

L_35E2:
    /* 000035e2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000035e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_35E6:
    /* 000035e6   4  move.l (ffffd724,A4),-(A7) */
    c->pc = RC_ADDR(0x000035e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28dcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_35EA:
    /* 000035ea   4  jsr (000027d8) */
    c->pc = RC_ADDR(0x000035eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000035eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000027d8u);
    return;

L_35EE:
    /* 000035ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000035eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_35F0:
    /* 000035f0   4  move.w D0,(c,A5) */
    c->pc = RC_ADDR(0x000035f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_35F4:
    /* 000035f4   6  move.w (e,A5),(fffffffe,A5) */
    c->pc = RC_ADDR(0x000035f4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_35FA:
    /* 000035fa   4  bra 000030b0 */
    c->pc = RC_ADDR(0x000035fau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30B0;

L_35FE:
    /* 000035fe   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000035feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3602:
    /* 00003602   4  bra 000030d2 */
    c->pc = RC_ADDR(0x00003602u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_30D2;

}
