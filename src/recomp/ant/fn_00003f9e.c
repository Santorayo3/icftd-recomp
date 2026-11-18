/* fn_00003f9e - 1570 byte(s), 435 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003f9e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003f9eu): goto L_3F9E;
    case RC_ADDR(0x00003fa2u): goto L_3FA2;
    case RC_ADDR(0x00003fa6u): goto L_3FA6;
    case RC_ADDR(0x00003fa8u): goto L_3FA8;
    case RC_ADDR(0x00003faau): goto L_3FAA;
    case RC_ADDR(0x00003facu): goto L_3FAC;
    case RC_ADDR(0x00003faeu): goto L_3FAE;
    case RC_ADDR(0x00003fb2u): goto L_3FB2;
    case RC_ADDR(0x00003fb8u): goto L_3FB8;
    case RC_ADDR(0x00003fbcu): goto L_3FBC;
    case RC_ADDR(0x00003fc0u): goto L_3FC0;
    case RC_ADDR(0x00003fc4u): goto L_3FC4;
    case RC_ADDR(0x00003fc8u): goto L_3FC8;
    case RC_ADDR(0x00003fcau): goto L_3FCA;
    case RC_ADDR(0x00003fceu): goto L_3FCE;
    case RC_ADDR(0x00003fd0u): goto L_3FD0;
    case RC_ADDR(0x00003fd4u): goto L_3FD4;
    case RC_ADDR(0x00003fdau): goto L_3FDA;
    case RC_ADDR(0x00003fdeu): goto L_3FDE;
    case RC_ADDR(0x00003fe2u): goto L_3FE2;
    case RC_ADDR(0x00003fe6u): goto L_3FE6;
    case RC_ADDR(0x00003fe8u): goto L_3FE8;
    case RC_ADDR(0x00003fecu): goto L_3FEC;
    case RC_ADDR(0x00003ff0u): goto L_3FF0;
    case RC_ADDR(0x00003ff4u): goto L_3FF4;
    case RC_ADDR(0x00003ff6u): goto L_3FF6;
    case RC_ADDR(0x00003ffau): goto L_3FFA;
    case RC_ADDR(0x00003ffcu): goto L_3FFC;
    case RC_ADDR(0x00003ffeu): goto L_3FFE;
    case RC_ADDR(0x00004000u): goto L_4000;
    case RC_ADDR(0x00004002u): goto L_4002;
    case RC_ADDR(0x00004006u): goto L_4006;
    case RC_ADDR(0x0000400au): goto L_400A;
    case RC_ADDR(0x0000400eu): goto L_400E;
    case RC_ADDR(0x00004012u): goto L_4012;
    case RC_ADDR(0x00004016u): goto L_4016;
    case RC_ADDR(0x0000401au): goto L_401A;
    case RC_ADDR(0x0000401cu): goto L_401C;
    case RC_ADDR(0x00004020u): goto L_4020;
    case RC_ADDR(0x00004024u): goto L_4024;
    case RC_ADDR(0x00004028u): goto L_4028;
    case RC_ADDR(0x0000402au): goto L_402A;
    case RC_ADDR(0x0000402eu): goto L_402E;
    case RC_ADDR(0x00004032u): goto L_4032;
    case RC_ADDR(0x00004036u): goto L_4036;
    case RC_ADDR(0x00004038u): goto L_4038;
    case RC_ADDR(0x0000403cu): goto L_403C;
    case RC_ADDR(0x0000403eu): goto L_403E;
    case RC_ADDR(0x00004042u): goto L_4042;
    case RC_ADDR(0x00004046u): goto L_4046;
    case RC_ADDR(0x0000404au): goto L_404A;
    case RC_ADDR(0x0000404cu): goto L_404C;
    case RC_ADDR(0x00004050u): goto L_4050;
    case RC_ADDR(0x00004054u): goto L_4054;
    case RC_ADDR(0x00004056u): goto L_4056;
    case RC_ADDR(0x0000405au): goto L_405A;
    case RC_ADDR(0x0000405eu): goto L_405E;
    case RC_ADDR(0x00004062u): goto L_4062;
    case RC_ADDR(0x00004064u): goto L_4064;
    case RC_ADDR(0x00004068u): goto L_4068;
    case RC_ADDR(0x0000406cu): goto L_406C;
    case RC_ADDR(0x00004070u): goto L_4070;
    case RC_ADDR(0x00004074u): goto L_4074;
    case RC_ADDR(0x00004078u): goto L_4078;
    case RC_ADDR(0x0000407cu): goto L_407C;
    case RC_ADDR(0x0000407eu): goto L_407E;
    case RC_ADDR(0x00004082u): goto L_4082;
    case RC_ADDR(0x00004084u): goto L_4084;
    case RC_ADDR(0x00004088u): goto L_4088;
    case RC_ADDR(0x0000408cu): goto L_408C;
    case RC_ADDR(0x0000408eu): goto L_408E;
    case RC_ADDR(0x00004092u): goto L_4092;
    case RC_ADDR(0x00004094u): goto L_4094;
    case RC_ADDR(0x00004098u): goto L_4098;
    case RC_ADDR(0x0000409au): goto L_409A;
    case RC_ADDR(0x0000409eu): goto L_409E;
    case RC_ADDR(0x000040a0u): goto L_40A0;
    case RC_ADDR(0x000040a4u): goto L_40A4;
    case RC_ADDR(0x000040a8u): goto L_40A8;
    case RC_ADDR(0x000040aau): goto L_40AA;
    case RC_ADDR(0x000040aeu): goto L_40AE;
    case RC_ADDR(0x000040b0u): goto L_40B0;
    case RC_ADDR(0x000040b4u): goto L_40B4;
    case RC_ADDR(0x000040b6u): goto L_40B6;
    case RC_ADDR(0x000040bau): goto L_40BA;
    case RC_ADDR(0x000040beu): goto L_40BE;
    case RC_ADDR(0x000040c2u): goto L_40C2;
    case RC_ADDR(0x000040c6u): goto L_40C6;
    case RC_ADDR(0x000040cau): goto L_40CA;
    case RC_ADDR(0x000040d2u): goto L_40D2;
    case RC_ADDR(0x000040d4u): goto L_40D4;
    case RC_ADDR(0x000040dcu): goto L_40DC;
    case RC_ADDR(0x000040deu): goto L_40DE;
    case RC_ADDR(0x000040e6u): goto L_40E6;
    case RC_ADDR(0x000040e8u): goto L_40E8;
    case RC_ADDR(0x000040f0u): goto L_40F0;
    case RC_ADDR(0x000040f2u): goto L_40F2;
    case RC_ADDR(0x000040fau): goto L_40FA;
    case RC_ADDR(0x000040feu): goto L_40FE;
    case RC_ADDR(0x00004102u): goto L_4102;
    case RC_ADDR(0x00004106u): goto L_4106;
    case RC_ADDR(0x00004108u): goto L_4108;
    case RC_ADDR(0x0000410cu): goto L_410C;
    case RC_ADDR(0x0000410eu): goto L_410E;
    case RC_ADDR(0x00004110u): goto L_4110;
    case RC_ADDR(0x00004118u): goto L_4118;
    case RC_ADDR(0x0000411au): goto L_411A;
    case RC_ADDR(0x0000411eu): goto L_411E;
    case RC_ADDR(0x00004120u): goto L_4120;
    case RC_ADDR(0x00004124u): goto L_4124;
    case RC_ADDR(0x00004126u): goto L_4126;
    case RC_ADDR(0x00004128u): goto L_4128;
    case RC_ADDR(0x0000412cu): goto L_412C;
    case RC_ADDR(0x0000412eu): goto L_412E;
    case RC_ADDR(0x00004132u): goto L_4132;
    case RC_ADDR(0x00004134u): goto L_4134;
    case RC_ADDR(0x0000413cu): goto L_413C;
    case RC_ADDR(0x00004140u): goto L_4140;
    case RC_ADDR(0x00004144u): goto L_4144;
    case RC_ADDR(0x00004148u): goto L_4148;
    case RC_ADDR(0x0000414cu): goto L_414C;
    case RC_ADDR(0x00004150u): goto L_4150;
    case RC_ADDR(0x00004152u): goto L_4152;
    case RC_ADDR(0x00004156u): goto L_4156;
    case RC_ADDR(0x00004158u): goto L_4158;
    case RC_ADDR(0x0000415au): goto L_415A;
    case RC_ADDR(0x0000415eu): goto L_415E;
    case RC_ADDR(0x00004164u): goto L_4164;
    case RC_ADDR(0x00004166u): goto L_4166;
    case RC_ADDR(0x00004168u): goto L_4168;
    case RC_ADDR(0x0000416au): goto L_416A;
    case RC_ADDR(0x0000416eu): goto L_416E;
    case RC_ADDR(0x00004174u): goto L_4174;
    case RC_ADDR(0x00004176u): goto L_4176;
    case RC_ADDR(0x00004178u): goto L_4178;
    case RC_ADDR(0x0000417au): goto L_417A;
    case RC_ADDR(0x0000417cu): goto L_417C;
    case RC_ADDR(0x00004180u): goto L_4180;
    case RC_ADDR(0x00004184u): goto L_4184;
    case RC_ADDR(0x00004188u): goto L_4188;
    case RC_ADDR(0x0000418cu): goto L_418C;
    case RC_ADDR(0x00004190u): goto L_4190;
    case RC_ADDR(0x00004192u): goto L_4192;
    case RC_ADDR(0x00004196u): goto L_4196;
    case RC_ADDR(0x0000419cu): goto L_419C;
    case RC_ADDR(0x000041a0u): goto L_41A0;
    case RC_ADDR(0x000041a4u): goto L_41A4;
    case RC_ADDR(0x000041a6u): goto L_41A6;
    case RC_ADDR(0x000041aau): goto L_41AA;
    case RC_ADDR(0x000041b0u): goto L_41B0;
    case RC_ADDR(0x000041b4u): goto L_41B4;
    case RC_ADDR(0x000041b8u): goto L_41B8;
    case RC_ADDR(0x000041bcu): goto L_41BC;
    case RC_ADDR(0x000041c0u): goto L_41C0;
    case RC_ADDR(0x000041c4u): goto L_41C4;
    case RC_ADDR(0x000041c8u): goto L_41C8;
    case RC_ADDR(0x000041ccu): goto L_41CC;
    case RC_ADDR(0x000041d0u): goto L_41D0;
    case RC_ADDR(0x000041d4u): goto L_41D4;
    case RC_ADDR(0x000041d8u): goto L_41D8;
    case RC_ADDR(0x000041dcu): goto L_41DC;
    case RC_ADDR(0x000041e0u): goto L_41E0;
    case RC_ADDR(0x000041e4u): goto L_41E4;
    case RC_ADDR(0x000041e6u): goto L_41E6;
    case RC_ADDR(0x000041eau): goto L_41EA;
    case RC_ADDR(0x000041eeu): goto L_41EE;
    case RC_ADDR(0x000041f2u): goto L_41F2;
    case RC_ADDR(0x000041f6u): goto L_41F6;
    case RC_ADDR(0x000041fau): goto L_41FA;
    case RC_ADDR(0x000041fcu): goto L_41FC;
    case RC_ADDR(0x00004200u): goto L_4200;
    case RC_ADDR(0x00004204u): goto L_4204;
    case RC_ADDR(0x00004208u): goto L_4208;
    case RC_ADDR(0x0000420cu): goto L_420C;
    case RC_ADDR(0x00004210u): goto L_4210;
    case RC_ADDR(0x00004212u): goto L_4212;
    case RC_ADDR(0x00004216u): goto L_4216;
    case RC_ADDR(0x0000421au): goto L_421A;
    case RC_ADDR(0x0000421eu): goto L_421E;
    case RC_ADDR(0x00004222u): goto L_4222;
    case RC_ADDR(0x00004228u): goto L_4228;
    case RC_ADDR(0x0000422cu): goto L_422C;
    case RC_ADDR(0x00004230u): goto L_4230;
    case RC_ADDR(0x00004232u): goto L_4232;
    case RC_ADDR(0x00004236u): goto L_4236;
    case RC_ADDR(0x0000423eu): goto L_423E;
    case RC_ADDR(0x00004240u): goto L_4240;
    case RC_ADDR(0x00004248u): goto L_4248;
    case RC_ADDR(0x0000424au): goto L_424A;
    case RC_ADDR(0x00004250u): goto L_4250;
    case RC_ADDR(0x00004252u): goto L_4252;
    case RC_ADDR(0x00004258u): goto L_4258;
    case RC_ADDR(0x0000425eu): goto L_425E;
    case RC_ADDR(0x00004260u): goto L_4260;
    case RC_ADDR(0x00004264u): goto L_4264;
    case RC_ADDR(0x0000426au): goto L_426A;
    case RC_ADDR(0x0000426eu): goto L_426E;
    case RC_ADDR(0x00004274u): goto L_4274;
    case RC_ADDR(0x00004278u): goto L_4278;
    case RC_ADDR(0x0000427cu): goto L_427C;
    case RC_ADDR(0x0000427eu): goto L_427E;
    case RC_ADDR(0x00004282u): goto L_4282;
    case RC_ADDR(0x00004284u): goto L_4284;
    case RC_ADDR(0x00004288u): goto L_4288;
    case RC_ADDR(0x0000428au): goto L_428A;
    case RC_ADDR(0x0000428eu): goto L_428E;
    case RC_ADDR(0x00004292u): goto L_4292;
    case RC_ADDR(0x00004296u): goto L_4296;
    case RC_ADDR(0x0000429cu): goto L_429C;
    case RC_ADDR(0x0000429eu): goto L_429E;
    case RC_ADDR(0x000042a4u): goto L_42A4;
    case RC_ADDR(0x000042a6u): goto L_42A6;
    case RC_ADDR(0x000042aau): goto L_42AA;
    case RC_ADDR(0x000042aeu): goto L_42AE;
    case RC_ADDR(0x000042b2u): goto L_42B2;
    case RC_ADDR(0x000042b4u): goto L_42B4;
    case RC_ADDR(0x000042b6u): goto L_42B6;
    case RC_ADDR(0x000042bau): goto L_42BA;
    case RC_ADDR(0x000042beu): goto L_42BE;
    case RC_ADDR(0x000042c0u): goto L_42C0;
    case RC_ADDR(0x000042c4u): goto L_42C4;
    case RC_ADDR(0x000042c6u): goto L_42C6;
    case RC_ADDR(0x000042cau): goto L_42CA;
    case RC_ADDR(0x000042ceu): goto L_42CE;
    case RC_ADDR(0x000042d0u): goto L_42D0;
    case RC_ADDR(0x000042d2u): goto L_42D2;
    case RC_ADDR(0x000042d6u): goto L_42D6;
    case RC_ADDR(0x000042d8u): goto L_42D8;
    case RC_ADDR(0x000042dau): goto L_42DA;
    case RC_ADDR(0x000042deu): goto L_42DE;
    case RC_ADDR(0x000042e0u): goto L_42E0;
    case RC_ADDR(0x000042e4u): goto L_42E4;
    case RC_ADDR(0x000042eau): goto L_42EA;
    case RC_ADDR(0x000042eeu): goto L_42EE;
    case RC_ADDR(0x000042f2u): goto L_42F2;
    case RC_ADDR(0x000042f6u): goto L_42F6;
    case RC_ADDR(0x000042fau): goto L_42FA;
    case RC_ADDR(0x000042fcu): goto L_42FC;
    case RC_ADDR(0x00004300u): goto L_4300;
    case RC_ADDR(0x00004304u): goto L_4304;
    case RC_ADDR(0x00004306u): goto L_4306;
    case RC_ADDR(0x00004308u): goto L_4308;
    case RC_ADDR(0x0000430au): goto L_430A;
    case RC_ADDR(0x0000430cu): goto L_430C;
    case RC_ADDR(0x00004310u): goto L_4310;
    case RC_ADDR(0x00004314u): goto L_4314;
    case RC_ADDR(0x0000431au): goto L_431A;
    case RC_ADDR(0x0000431cu): goto L_431C;
    case RC_ADDR(0x00004320u): goto L_4320;
    case RC_ADDR(0x00004322u): goto L_4322;
    case RC_ADDR(0x00004326u): goto L_4326;
    case RC_ADDR(0x0000432au): goto L_432A;
    case RC_ADDR(0x0000432eu): goto L_432E;
    case RC_ADDR(0x00004330u): goto L_4330;
    case RC_ADDR(0x00004334u): goto L_4334;
    case RC_ADDR(0x00004336u): goto L_4336;
    case RC_ADDR(0x0000433au): goto L_433A;
    case RC_ADDR(0x0000433eu): goto L_433E;
    case RC_ADDR(0x00004344u): goto L_4344;
    case RC_ADDR(0x00004346u): goto L_4346;
    case RC_ADDR(0x0000434au): goto L_434A;
    case RC_ADDR(0x0000434eu): goto L_434E;
    case RC_ADDR(0x00004352u): goto L_4352;
    case RC_ADDR(0x00004356u): goto L_4356;
    case RC_ADDR(0x0000435au): goto L_435A;
    case RC_ADDR(0x0000435eu): goto L_435E;
    case RC_ADDR(0x00004362u): goto L_4362;
    case RC_ADDR(0x00004366u): goto L_4366;
    case RC_ADDR(0x0000436au): goto L_436A;
    case RC_ADDR(0x0000436eu): goto L_436E;
    case RC_ADDR(0x00004372u): goto L_4372;
    case RC_ADDR(0x00004374u): goto L_4374;
    case RC_ADDR(0x00004376u): goto L_4376;
    case RC_ADDR(0x0000437au): goto L_437A;
    case RC_ADDR(0x0000437eu): goto L_437E;
    case RC_ADDR(0x00004382u): goto L_4382;
    case RC_ADDR(0x00004384u): goto L_4384;
    case RC_ADDR(0x00004386u): goto L_4386;
    case RC_ADDR(0x0000438au): goto L_438A;
    case RC_ADDR(0x0000438eu): goto L_438E;
    case RC_ADDR(0x00004392u): goto L_4392;
    case RC_ADDR(0x00004396u): goto L_4396;
    case RC_ADDR(0x00004398u): goto L_4398;
    case RC_ADDR(0x0000439cu): goto L_439C;
    case RC_ADDR(0x000043a0u): goto L_43A0;
    case RC_ADDR(0x000043a6u): goto L_43A6;
    case RC_ADDR(0x000043a8u): goto L_43A8;
    case RC_ADDR(0x000043aeu): goto L_43AE;
    case RC_ADDR(0x000043b4u): goto L_43B4;
    case RC_ADDR(0x000043b6u): goto L_43B6;
    case RC_ADDR(0x000043bau): goto L_43BA;
    case RC_ADDR(0x000043beu): goto L_43BE;
    case RC_ADDR(0x000043c4u): goto L_43C4;
    case RC_ADDR(0x000043c6u): goto L_43C6;
    case RC_ADDR(0x000043cau): goto L_43CA;
    case RC_ADDR(0x000043ceu): goto L_43CE;
    case RC_ADDR(0x000043d2u): goto L_43D2;
    case RC_ADDR(0x000043d6u): goto L_43D6;
    case RC_ADDR(0x000043dau): goto L_43DA;
    case RC_ADDR(0x000043deu): goto L_43DE;
    case RC_ADDR(0x000043e2u): goto L_43E2;
    case RC_ADDR(0x000043e6u): goto L_43E6;
    case RC_ADDR(0x000043eau): goto L_43EA;
    case RC_ADDR(0x000043eeu): goto L_43EE;
    case RC_ADDR(0x000043f2u): goto L_43F2;
    case RC_ADDR(0x000043f6u): goto L_43F6;
    case RC_ADDR(0x000043fau): goto L_43FA;
    case RC_ADDR(0x000043feu): goto L_43FE;
    case RC_ADDR(0x00004402u): goto L_4402;
    case RC_ADDR(0x00004404u): goto L_4404;
    case RC_ADDR(0x00004406u): goto L_4406;
    case RC_ADDR(0x0000440au): goto L_440A;
    case RC_ADDR(0x00004410u): goto L_4410;
    case RC_ADDR(0x00004412u): goto L_4412;
    case RC_ADDR(0x00004418u): goto L_4418;
    case RC_ADDR(0x0000441eu): goto L_441E;
    case RC_ADDR(0x00004420u): goto L_4420;
    case RC_ADDR(0x00004422u): goto L_4422;
    case RC_ADDR(0x00004426u): goto L_4426;
    case RC_ADDR(0x0000442au): goto L_442A;
    case RC_ADDR(0x0000442cu): goto L_442C;
    case RC_ADDR(0x0000442eu): goto L_442E;
    case RC_ADDR(0x00004430u): goto L_4430;
    case RC_ADDR(0x00004434u): goto L_4434;
    case RC_ADDR(0x00004436u): goto L_4436;
    case RC_ADDR(0x0000443au): goto L_443A;
    case RC_ADDR(0x0000443eu): goto L_443E;
    case RC_ADDR(0x00004440u): goto L_4440;
    case RC_ADDR(0x00004446u): goto L_4446;
    case RC_ADDR(0x0000444cu): goto L_444C;
    case RC_ADDR(0x00004452u): goto L_4452;
    case RC_ADDR(0x00004454u): goto L_4454;
    case RC_ADDR(0x00004458u): goto L_4458;
    case RC_ADDR(0x0000445cu): goto L_445C;
    case RC_ADDR(0x00004460u): goto L_4460;
    case RC_ADDR(0x00004464u): goto L_4464;
    case RC_ADDR(0x00004468u): goto L_4468;
    case RC_ADDR(0x0000446cu): goto L_446C;
    case RC_ADDR(0x00004470u): goto L_4470;
    case RC_ADDR(0x00004472u): goto L_4472;
    case RC_ADDR(0x00004476u): goto L_4476;
    case RC_ADDR(0x00004478u): goto L_4478;
    case RC_ADDR(0x0000447cu): goto L_447C;
    case RC_ADDR(0x00004480u): goto L_4480;
    case RC_ADDR(0x00004482u): goto L_4482;
    case RC_ADDR(0x00004488u): goto L_4488;
    case RC_ADDR(0x0000448cu): goto L_448C;
    case RC_ADDR(0x0000448eu): goto L_448E;
    case RC_ADDR(0x00004490u): goto L_4490;
    case RC_ADDR(0x00004492u): goto L_4492;
    case RC_ADDR(0x00004496u): goto L_4496;
    case RC_ADDR(0x00004498u): goto L_4498;
    case RC_ADDR(0x0000449au): goto L_449A;
    case RC_ADDR(0x0000449cu): goto L_449C;
    case RC_ADDR(0x0000449eu): goto L_449E;
    case RC_ADDR(0x000044a2u): goto L_44A2;
    case RC_ADDR(0x000044a6u): goto L_44A6;
    case RC_ADDR(0x000044aau): goto L_44AA;
    case RC_ADDR(0x000044aeu): goto L_44AE;
    case RC_ADDR(0x000044b2u): goto L_44B2;
    case RC_ADDR(0x000044b6u): goto L_44B6;
    case RC_ADDR(0x000044bau): goto L_44BA;
    case RC_ADDR(0x000044beu): goto L_44BE;
    case RC_ADDR(0x000044c2u): goto L_44C2;
    case RC_ADDR(0x000044c6u): goto L_44C6;
    case RC_ADDR(0x000044cau): goto L_44CA;
    case RC_ADDR(0x000044ceu): goto L_44CE;
    case RC_ADDR(0x000044d0u): goto L_44D0;
    case RC_ADDR(0x000044d4u): goto L_44D4;
    case RC_ADDR(0x000044dau): goto L_44DA;
    case RC_ADDR(0x000044dcu): goto L_44DC;
    case RC_ADDR(0x000044deu): goto L_44DE;
    case RC_ADDR(0x000044e2u): goto L_44E2;
    case RC_ADDR(0x000044e6u): goto L_44E6;
    case RC_ADDR(0x000044e8u): goto L_44E8;
    case RC_ADDR(0x000044ecu): goto L_44EC;
    case RC_ADDR(0x000044f0u): goto L_44F0;
    case RC_ADDR(0x000044f2u): goto L_44F2;
    case RC_ADDR(0x000044f6u): goto L_44F6;
    case RC_ADDR(0x000044f8u): goto L_44F8;
    case RC_ADDR(0x000044fcu): goto L_44FC;
    case RC_ADDR(0x00004500u): goto L_4500;
    case RC_ADDR(0x00004504u): goto L_4504;
    case RC_ADDR(0x00004508u): goto L_4508;
    case RC_ADDR(0x0000450au): goto L_450A;
    case RC_ADDR(0x0000450eu): goto L_450E;
    case RC_ADDR(0x00004510u): goto L_4510;
    case RC_ADDR(0x00004514u): goto L_4514;
    case RC_ADDR(0x00004518u): goto L_4518;
    case RC_ADDR(0x0000451cu): goto L_451C;
    case RC_ADDR(0x00004520u): goto L_4520;
    case RC_ADDR(0x00004522u): goto L_4522;
    case RC_ADDR(0x00004526u): goto L_4526;
    case RC_ADDR(0x00004528u): goto L_4528;
    case RC_ADDR(0x0000452cu): goto L_452C;
    case RC_ADDR(0x00004530u): goto L_4530;
    case RC_ADDR(0x00004534u): goto L_4534;
    case RC_ADDR(0x00004536u): goto L_4536;
    case RC_ADDR(0x0000453au): goto L_453A;
    case RC_ADDR(0x0000453eu): goto L_453E;
    case RC_ADDR(0x00004540u): goto L_4540;
    case RC_ADDR(0x00004544u): goto L_4544;
    case RC_ADDR(0x00004546u): goto L_4546;
    case RC_ADDR(0x0000454cu): goto L_454C;
    case RC_ADDR(0x0000454eu): goto L_454E;
    case RC_ADDR(0x00004552u): goto L_4552;
    case RC_ADDR(0x00004556u): goto L_4556;
    case RC_ADDR(0x0000455au): goto L_455A;
    case RC_ADDR(0x0000455cu): goto L_455C;
    case RC_ADDR(0x00004560u): goto L_4560;
    case RC_ADDR(0x00004566u): goto L_4566;
    case RC_ADDR(0x00004568u): goto L_4568;
    case RC_ADDR(0x0000456eu): goto L_456E;
    case RC_ADDR(0x00004570u): goto L_4570;
    case RC_ADDR(0x00004574u): goto L_4574;
    case RC_ADDR(0x00004578u): goto L_4578;
    case RC_ADDR(0x0000457cu): goto L_457C;
    case RC_ADDR(0x0000457eu): goto L_457E;
    case RC_ADDR(0x00004582u): goto L_4582;
    case RC_ADDR(0x00004586u): goto L_4586;
    case RC_ADDR(0x00004588u): goto L_4588;
    case RC_ADDR(0x0000458cu): goto L_458C;
    case RC_ADDR(0x0000458eu): goto L_458E;
    case RC_ADDR(0x00004592u): goto L_4592;
    case RC_ADDR(0x00004596u): goto L_4596;
    case RC_ADDR(0x0000459cu): goto L_459C;
    case RC_ADDR(0x0000459eu): goto L_459E;
    case RC_ADDR(0x000045a2u): goto L_45A2;
    case RC_ADDR(0x000045a6u): goto L_45A6;
    case RC_ADDR(0x000045acu): goto L_45AC;
    case RC_ADDR(0x000045aeu): goto L_45AE;
    case RC_ADDR(0x000045b2u): goto L_45B2;
    case RC_ADDR(0x000045b4u): goto L_45B4;
    case RC_ADDR(0x000045b8u): goto L_45B8;
    case RC_ADDR(0x000045bcu): goto L_45BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3F9E:
    /* 00003f9e   4  link.w A5,#ffffff90 */
    c->pc = RC_ADDR(0x00003f9eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x70u;

L_3FA2:
    /* 00003fa2   4  tst.w (ffff9582,A4) */
    c->pc = RC_ADDR(0x00003fa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a7eu));
    rc_set_nzvc(c, t0, RC_W);

L_3FA6:
    /* 00003fa6   2  beq 00003fae */
    c->pc = RC_ADDR(0x00003fa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3FAE;

L_3FA8:
    /* 00003fa8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00003fa8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3FAA:
    /* 00003faa   2  unlk A5 */
    c->pc = RC_ADDR(0x00003faau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3FAC:
    /* 00003fac   2  rts */
    c->pc = RC_ADDR(0x00003facu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_3FAE:
    /* 00003fae   4  clr.w (ffffd56a,A4) */
    c->pc = RC_ADDR(0x00003faeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a96u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FB2:
    /* 00003fb2   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00003fb2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FB8:
    /* 00003fb8   4  tst.w (fffff78e,A4) */
    c->pc = RC_ADDR(0x00003fb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x872u));
    rc_set_nzvc(c, t0, RC_W);

L_3FBC:
    /* 00003fbc   4  beq 00004078 */
    c->pc = RC_ADDR(0x00003fbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4078;

L_3FC0:
    /* 00003fc0   4  clr.w (fffff790,A4) */
    c->pc = RC_ADDR(0x00003fc0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x870u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FC4:
    /* 00003fc4   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00003fc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_3FC8:
    /* 00003fc8   2  bne 00003fe8 */
    c->pc = RC_ADDR(0x00003fc8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3FE8;

L_3FCA:
    /* 00003fca   4  tst.w (fffff7b4,A4) */
    c->pc = RC_ADDR(0x00003fcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x84cu));
    rc_set_nzvc(c, t0, RC_W);

L_3FCE:
    /* 00003fce   2  beq 00003fe8 */
    c->pc = RC_ADDR(0x00003fceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3FE8;

L_3FD0:
    /* 00003fd0   4  clr.w (fffff7b4,A4) */
    c->pc = RC_ADDR(0x00003fd0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x84cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FD4:
    /* 00003fd4   6  move.w #ff,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x00003fd4u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3FDA:
    /* 00003fda   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00003fdau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_3FDE:
    /* 00003fde   4  pea (ffffa27a,A4) */
    c->pc = RC_ADDR(0x00003fdeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5d86u));

L_3FE2:
    /* 00003fe2   4  jsr (0000b0be) */
    c->pc = RC_ADDR(0x00003fe2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003fe6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0beu);
    return;

L_3FE6:
    /* 00003fe6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003fe6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3FE8:
    /* 00003fe8   4  clr.w (fffff78e,A4) */
    c->pc = RC_ADDR(0x00003fe8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x872u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FEC:
    /* 00003fec   4  pea (000045c0) */
    c->pc = RC_ADDR(0x00003fecu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045c0u));

L_3FF0:
    /* 00003ff0   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00003ff0u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00003ff4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_3FF4:
    /* 00003ff4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003ff4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3FF6:
    /* 00003ff6   4  move.l D0,(ffffd54e,A4) */
    c->pc = RC_ADDR(0x00003ff6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2ab2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FFA:
    /* 00003ffa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003ffau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3FFC:
    /* 00003ffc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003ffcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3FFE:
    /* 00003ffe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003ffeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4000:
    /* 00004000   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004000u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4002:
    /* 00004002   4  move.l (ffffd54e,A4),-(A7) */
    c->pc = RC_ADDR(0x00004002u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2ab2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4006:
    /* 00004006   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004006u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_400A:
    /* 0000400a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000400au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000400eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_400E:
    /* 0000400e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000400eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4012:
    /* 00004012   4  pea (000045c5) */
    c->pc = RC_ADDR(0x00004012u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045c5u));

L_4016:
    /* 00004016   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00004016u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000401au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_401A:
    /* 0000401a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000401au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_401C:
    /* 0000401c   4  move.l D0,(fffff788,A4) */
    c->pc = RC_ADDR(0x0000401cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x878u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4020:
    /* 00004020   4  pea (000045ca) */
    c->pc = RC_ADDR(0x00004020u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045cau));

L_4024:
    /* 00004024   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00004024u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00004028u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_4028:
    /* 00004028   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004028u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_402A:
    /* 0000402a   4  move.l D0,(ffffd552,A4) */
    c->pc = RC_ADDR(0x0000402au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2aaeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_402E:
    /* 0000402e   4  pea (000045cf) */
    c->pc = RC_ADDR(0x0000402eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045cfu));

L_4032:
    /* 00004032   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00004032u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00004036u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_4036:
    /* 00004036   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004036u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4038:
    /* 00004038   4  move.l D0,(ffffd55a,A4) */
    c->pc = RC_ADDR(0x00004038u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2aa6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_403C:
    /* 0000403c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000403cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_403E:
    /* 0000403e   4  move.l (ffffd552,A4),-(A7) */
    c->pc = RC_ADDR(0x0000403eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aaeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4042:
    /* 00004042   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x00004042u);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4046:
    /* 00004046   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004046u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000404au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_404A:
    /* 0000404a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000404au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_404C:
    /* 0000404c   4  pea (000045d4) */
    c->pc = RC_ADDR(0x0000404cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045d4u));

L_4050:
    /* 00004050   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00004050u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00004054u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_4054:
    /* 00004054   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004054u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4056:
    /* 00004056   4  move.l D0,(ffffd556,A4) */
    c->pc = RC_ADDR(0x00004056u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2aaau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_405A:
    /* 0000405a   4  pea (000045d9) */
    c->pc = RC_ADDR(0x0000405au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045d9u));

L_405E:
    /* 0000405e   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000405eu);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00004062u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_4062:
    /* 00004062   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004062u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4064:
    /* 00004064   4  move.l D0,(fffff780,A4) */
    c->pc = RC_ADDR(0x00004064u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x880u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4068:
    /* 00004068   4  clr.l (ffffd562,A4) */
    c->pc = RC_ADDR(0x00004068u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a9eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_406C:
    /* 0000406c   4  clr.l (ffffd55e,A4) */
    c->pc = RC_ADDR(0x0000406cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2aa2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4070:
    /* 00004070   4  lea (000045de),A0 */
    c->pc = RC_ADDR(0x00004070u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000045deu);

L_4074:
    /* 00004074   4  move.l A0,(ffffd566,A4) */
    c->pc = RC_ADDR(0x00004074u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a9au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4078:
    /* 00004078   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004078u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_407C:
    /* 0000407c   2  beq 0000408e */
    c->pc = RC_ADDR(0x0000407cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_408E;

L_407E:
    /* 0000407e   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000407eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_4082:
    /* 00004082   2  beq 0000408e */
    c->pc = RC_ADDR(0x00004082u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_408E;

L_4084:
    /* 00004084   4  clr.l (ffffd562,A4) */
    c->pc = RC_ADDR(0x00004084u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a9eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4088:
    /* 00004088   4  clr.l (ffffd55e,A4) */
    c->pc = RC_ADDR(0x00004088u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2aa2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_408C:
    /* 0000408c   2  bra 000040ba */
    c->pc = RC_ADDR(0x0000408cu);
    rc_step(c, m, 10);
    goto L_40BA;

L_408E:
    /* 0000408e   4  tst.w (ffffd5c4,A4) */
    c->pc = RC_ADDR(0x0000408eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_set_nzvc(c, t0, RC_W);

L_4092:
    /* 00004092   2  beq 000040a0 */
    c->pc = RC_ADDR(0x00004092u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_40A0;

L_4094:
    /* 00004094   4  move.w (ffffd5c4,A4),D0 */
    c->pc = RC_ADDR(0x00004094u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4098:
    /* 00004098   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004098u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_409A:
    /* 0000409a   4  add.l D0,(ffffd55e,A4) */
    c->pc = RC_ADDR(0x0000409au);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2aa2u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_409E:
    /* 0000409e   2  bra 000040a4 */
    c->pc = RC_ADDR(0x0000409eu);
    rc_step(c, m, 10);
    goto L_40A4;

L_40A0:
    /* 000040a0   4  clr.l (ffffd55e,A4) */
    c->pc = RC_ADDR(0x000040a0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2aa2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_40A4:
    /* 000040a4   4  tst.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x000040a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_set_nzvc(c, t0, RC_W);

L_40A8:
    /* 000040a8   2  beq 000040b6 */
    c->pc = RC_ADDR(0x000040a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_40B6;

L_40AA:
    /* 000040aa   4  move.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x000040aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_40AE:
    /* 000040ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x000040aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_40B0:
    /* 000040b0   4  add.l D0,(ffffd562,A4) */
    c->pc = RC_ADDR(0x000040b0u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2a9eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_40B4:
    /* 000040b4   2  bra 000040ba */
    c->pc = RC_ADDR(0x000040b4u);
    rc_step(c, m, 10);
    goto L_40BA;

L_40B6:
    /* 000040b6   4  clr.l (ffffd562,A4) */
    c->pc = RC_ADDR(0x000040b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2a9eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_40BA:
    /* 000040ba   4  move.l (ffffd55e,A4),D0 */
    c->pc = RC_ADDR(0x000040bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aa2u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_40BE:
    /* 000040be   4  add.l D0,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040beu);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x85au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_40C2:
    /* 000040c2   4  move.l (ffffd562,A4),D0 */
    c->pc = RC_ADDR(0x000040c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a9eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_40C6:
    /* 000040c6   4  add.l D0,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x000040c6u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x856u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_40CA:
    /* 000040ca   8  cmpi.l #136,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_cmp(c, RC_L, t0, 0x00000136u);

L_40D2:
    /* 000040d2   2  bgt 000040de */
    c->pc = RC_ADDR(0x000040d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_40DE;

L_40D4:
    /* 000040d4   8  cmpi.l #19,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_cmp(c, RC_L, t0, 0x00000019u);

L_40DC:
    /* 000040dc   2  bge 00004102 */
    c->pc = RC_ADDR(0x000040dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_4102;

L_40DE:
    /* 000040de   8  cmpi.l #136,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_cmp(c, RC_L, t0, 0x00000136u);

L_40E6:
    /* 000040e6   2  ble 000040f2 */
    c->pc = RC_ADDR(0x000040e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_40F2;

L_40E8:
    /* 000040e8   8  move.l #136,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040e8u);
    rc_step(c, m, 24);
    t0 = 0x00000136u;
    rc_wr32(c, m, (c->a[4] - 0x85au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_40F0:
    /* 000040f0   2  bra 000040fa */
    c->pc = RC_ADDR(0x000040f0u);
    rc_step(c, m, 10);
    goto L_40FA;

L_40F2:
    /* 000040f2   8  move.l #19,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x000040f2u);
    rc_step(c, m, 24);
    t0 = 0x00000019u;
    rc_wr32(c, m, (c->a[4] - 0x85au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_40FA:
    /* 000040fa   4  move.l (ffffd55e,A4),D0 */
    c->pc = RC_ADDR(0x000040fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aa2u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_40FE:
    /* 000040fe   4  sub.l D0,(fffff79e,A4) */
    c->pc = RC_ADDR(0x000040feu);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x862u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_4102:
    /* 00004102   4  move.w (fffff79a,A4),D0 */
    c->pc = RC_ADDR(0x00004102u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x866u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4106:
    /* 00004106   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004106u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4108:
    /* 00004108   4  move.l (fffff7aa,A4),D1 */
    c->pc = RC_ADDR(0x00004108u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_410C:
    /* 0000410c   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0000410cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_410E:
    /* 0000410e   2  bgt 0000411a */
    c->pc = RC_ADDR(0x0000410eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_411A;

L_4110:
    /* 00004110   8  cmpi.l #19,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x00004110u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_cmp(c, RC_L, t0, 0x00000019u);

L_4118:
    /* 00004118   2  bge 00004144 */
    c->pc = RC_ADDR(0x00004118u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_4144;

L_411A:
    /* 0000411a   4  move.w (fffff79a,A4),D0 */
    c->pc = RC_ADDR(0x0000411au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x866u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_411E:
    /* 0000411e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000411eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4120:
    /* 00004120   4  move.l (fffff7aa,A4),D1 */
    c->pc = RC_ADDR(0x00004120u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4124:
    /* 00004124   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00004124u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_4126:
    /* 00004126   2  ble 00004134 */
    c->pc = RC_ADDR(0x00004126u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4134;

L_4128:
    /* 00004128   4  move.w (fffff79a,A4),D0 */
    c->pc = RC_ADDR(0x00004128u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x866u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_412C:
    /* 0000412c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000412cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_412E:
    /* 0000412e   4  move.l D0,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x0000412eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x856u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4132:
    /* 00004132   2  bra 0000413c */
    c->pc = RC_ADDR(0x00004132u);
    rc_step(c, m, 10);
    goto L_413C;

L_4134:
    /* 00004134   8  move.l #19,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x00004134u);
    rc_step(c, m, 24);
    t0 = 0x00000019u;
    rc_wr32(c, m, (c->a[4] - 0x856u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_413C:
    /* 0000413c   4  move.l (ffffd562,A4),D0 */
    c->pc = RC_ADDR(0x0000413cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a9eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4140:
    /* 00004140   4  sub.l D0,(fffff7a2,A4) */
    c->pc = RC_ADDR(0x00004140u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x85eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_4144:
    /* 00004144   4  jsr (00003a52) */
    c->pc = RC_ADDR(0x00004144u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004148u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003a52u);
    return;

L_4148:
    /* 00004148   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004148u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_414C:
    /* 0000414c   4  jsr (000047f0) */
    c->pc = RC_ADDR(0x0000414cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004150u));
    rc_depth++;
    c->pc = RC_ADDR(0x000047f0u);
    return;

L_4150:
    /* 00004150   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004150u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4152:
    /* 00004152   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004152u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_4156:
    /* 00004156   2  bne 0000418c */
    c->pc = RC_ADDR(0x00004156u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_418C;

L_4158:
    /* 00004158   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004158u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_415A:
    /* 0000415a   4  move.l (fffff7a2,A4),D0 */
    c->pc = RC_ADDR(0x0000415au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_415E:
    /* 0000415e   6  add.l #a,D0 */
    c->pc = RC_ADDR(0x0000415eu);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4164:
    /* 00004164   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004164u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4166:
    /* 00004166   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004166u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4168:
    /* 00004168   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004168u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_416A:
    /* 0000416a   4  move.l (fffff79e,A4),D0 */
    c->pc = RC_ADDR(0x0000416au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_416E:
    /* 0000416e   6  add.l #20,D0 */
    c->pc = RC_ADDR(0x0000416eu);
    rc_step(c, m, 16);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4174:
    /* 00004174   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004174u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4176:
    /* 00004176   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004176u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4178:
    /* 00004178   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004178u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_417A:
    /* 0000417a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000417au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_417C:
    /* 0000417c   4  move.l (ffffd55a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000417cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aa6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4180:
    /* 00004180   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004180u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4184:
    /* 00004184   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004184u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004188u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_4188:
    /* 00004188   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004188u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_418C:
    /* 0000418c   4  move.l (fffff79e,A4),D0 */
    c->pc = RC_ADDR(0x0000418cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4190:
    /* 00004190   2  neg.l D0 */
    c->pc = RC_ADDR(0x00004190u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4192:
    /* 00004192   4  add.l (fffff7a6,A4),D0 */
    c->pc = RC_ADDR(0x00004192u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4196:
    /* 00004196   6  sub.l #11,D0 */
    c->pc = RC_ADDR(0x00004196u);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_419C:
    /* 0000419c   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000419cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_41A0:
    /* 000041a0   4  move.l (fffff7a2,A4),D0 */
    c->pc = RC_ADDR(0x000041a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_41A4:
    /* 000041a4   2  neg.l D0 */
    c->pc = RC_ADDR(0x000041a4u);
    rc_step(c, m, 6);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_41A6:
    /* 000041a6   4  add.l (fffff7aa,A4),D0 */
    c->pc = RC_ADDR(0x000041a6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_41AA:
    /* 000041aa   6  sub.l #12,D0 */
    c->pc = RC_ADDR(0x000041aau);
    rc_step(c, m, 16);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_41B0:
    /* 000041b0   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000041b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_41B4:
    /* 000041b4   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000041b4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_41B8:
    /* 000041b8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000041b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41BC:
    /* 000041bc   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000041bcu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_41C0:
    /* 000041c0   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x000041c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_41C4:
    /* 000041c4   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000041c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41C8:
    /* 000041c8   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000041c8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_41CC:
    /* 000041cc   4  bcs 00004260 */
    c->pc = RC_ADDR(0x000041ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_4260;

L_41D0:
    /* 000041d0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000041d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41D4:
    /* 000041d4   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000041d4u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_41D8:
    /* 000041d8   4  lea (ffff85ee,A4),A0 */
    c->pc = RC_ADDR(0x000041d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a12u);

L_41DC:
    /* 000041dc   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000041dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41E0:
    /* 000041e0   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000041e0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_41E4:
    /* 000041e4   2  bhi 00004260 */
    c->pc = RC_ADDR(0x000041e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_4260;

L_41E6:
    /* 000041e6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000041e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41EA:
    /* 000041ea   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x000041eau);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_41EE:
    /* 000041ee   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x000041eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_41F2:
    /* 000041f2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000041f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_41F6:
    /* 000041f6   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000041f6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_41FA:
    /* 000041fa   2  bcs 00004260 */
    c->pc = RC_ADDR(0x000041fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_4260;

L_41FC:
    /* 000041fc   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000041fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4200:
    /* 00004200   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004200u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4204:
    /* 00004204   4  lea (ffff85f0,A4),A0 */
    c->pc = RC_ADDR(0x00004204u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a10u);

L_4208:
    /* 00004208   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004208u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_420C:
    /* 0000420c   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000420cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4210:
    /* 00004210   2  bhi 00004260 */
    c->pc = RC_ADDR(0x00004210u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_4260;

L_4212:
    /* 00004212   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00004212u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4216:
    /* 00004216   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004216u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_421A:
    /* 0000421a   4  lea (ffff85f3,A4),A0 */
    c->pc = RC_ADDR(0x0000421au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0du);

L_421E:
    /* 0000421e   4  movea.l (ffffd566,A4),A1 */
    c->pc = RC_ADDR(0x0000421eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a9au));
    c->a[1] = t0;

L_4222:
    /* 00004222   6  move.b (0,A0,D0.w),(3,A1) */
    c->pc = RC_ADDR(0x00004222u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[1] + 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_4228:
    /* 00004228   4  move.l (ffffd566,A4),-(A7) */
    c->pc = RC_ADDR(0x00004228u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_422C:
    /* 0000422c   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000422cu);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00004230u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_4230:
    /* 00004230   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004230u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4232:
    /* 00004232   4  move.l D0,(fffff784,A4) */
    c->pc = RC_ADDR(0x00004232u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x87cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4236:
    /* 00004236   8  cmpi.l #3f,(fffff7aa,A4) */
    c->pc = RC_ADDR(0x00004236u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_cmp(c, RC_L, t0, 0x0000003fu);

L_423E:
    /* 0000423e   2  bgt 0000424a */
    c->pc = RC_ADDR(0x0000423eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_424A;

L_4240:
    /* 00004240   8  cmpi.l #de,(fffff7a6,A4) */
    c->pc = RC_ADDR(0x00004240u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_cmp(c, RC_L, t0, 0x000000deu);

L_4248:
    /* 00004248   2  ble 00004252 */
    c->pc = RC_ADDR(0x00004248u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4252;

L_424A:
    /* 0000424a   6  move.w #17,(fffff792,A4) */
    c->pc = RC_ADDR(0x0000424au);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x86eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4250:
    /* 00004250   2  bra 00004258 */
    c->pc = RC_ADDR(0x00004250u);
    rc_step(c, m, 10);
    goto L_4258;

L_4252:
    /* 00004252   6  move.w (fffff79c,A4),(fffff792,A4) */
    c->pc = RC_ADDR(0x00004252u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x864u));
    rc_wr16(c, m, (c->a[4] - 0x86eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4258:
    /* 00004258   6  move.w #1,(ffffd56a,A4) */
    c->pc = RC_ADDR(0x00004258u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_425E:
    /* 0000425e   2  bra 0000426e */
    c->pc = RC_ADDR(0x0000425eu);
    rc_step(c, m, 10);
    goto L_426E;

L_4260:
    /* 00004260   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004260u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4264:
    /* 00004264   6  cmpi.w #27,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004264u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_426A:
    /* 0000426a   4  blt 000041b8 */
    c->pc = RC_ADDR(0x0000426au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_41B8; }

L_426E:
    /* 0000426e   6  move.w (fffffffa,A5),(fffff794,A4) */
    c->pc = RC_ADDR(0x0000426eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x86cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4274:
    /* 00004274   4  jsr (00003d92) */
    c->pc = RC_ADDR(0x00004274u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004278u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003d92u);
    return;

L_4278:
    /* 00004278   4  tst.w (ffffd56a,A4) */
    c->pc = RC_ADDR(0x00004278u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a96u));
    rc_set_nzvc(c, t0, RC_W);

L_427C:
    /* 0000427c   2  beq 0000428a */
    c->pc = RC_ADDR(0x0000427cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_428A;

L_427E:
    /* 0000427e   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000427eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_4282:
    /* 00004282   2  beq 0000428a */
    c->pc = RC_ADDR(0x00004282u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_428A;

L_4284:
    /* 00004284   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004284u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_4288:
    /* 00004288   2  beq 00004292 */
    c->pc = RC_ADDR(0x00004288u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4292;

L_428A:
    /* 0000428a   4  tst.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x0000428au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a58u));
    rc_set_nzvc(c, t0, RC_W);

L_428E:
    /* 0000428e   4  beq 0000443a */
    c->pc = RC_ADDR(0x0000428eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_443A;

L_4292:
    /* 00004292   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00004292u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004296u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_4296:
    /* 00004296   6  cmpi.w #5,(fffff794,A4) */
    c->pc = RC_ADDR(0x00004296u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_429C:
    /* 0000429c   2  blt 000042a6 */
    c->pc = RC_ADDR(0x0000429cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_42A6;

L_429E:
    /* 0000429e   6  cmpi.w #f,(fffff794,A4) */
    c->pc = RC_ADDR(0x0000429eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_42A4:
    /* 000042a4   2  bne 000042ba */
    c->pc = RC_ADDR(0x000042a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_42BA;

L_42A6:
    /* 000042a6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000042a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_42AA:
    /* 000042aa   4  pea (000045e3) */
    c->pc = RC_ADDR(0x000042aau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000045e3u));

L_42AE:
    /* 000042ae   4  jsr (00004852) */
    c->pc = RC_ADDR(0x000042aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000042b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_42B2:
    /* 000042b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000042b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_42B4:
    /* 000042b4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000042b4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_42B6:
    /* 000042b6   4  bra 00003faa */
    c->pc = RC_ADDR(0x000042b6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_42BA:
    /* 000042ba   4  tst.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x000042bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a58u));
    rc_set_nzvc(c, t0, RC_W);

L_42BE:
    /* 000042be   2  beq 000042c6 */
    c->pc = RC_ADDR(0x000042beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_42C6;

L_42C0:
    /* 000042c0   4  clr.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x000042c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a58u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_42C4:
    /* 000042c4   2  bra 000042e4 */
    c->pc = RC_ADDR(0x000042c4u);
    rc_step(c, m, 10);
    goto L_42E4;

L_42C6:
    /* 000042c6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000042c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_42CA:
    /* 000042ca   4  move.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x000042cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_42CE:
    /* 000042ce   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000042ceu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_42D0:
    /* 000042d0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000042d0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_42D2:
    /* 000042d2   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x000042d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_42D6:
    /* 000042d6   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000042d6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_42D8:
    /* 000042d8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000042d8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_42DA:
    /* 000042da   4  jsr (ffff8200,A4) */
    c->pc = RC_ADDR(0x000042dau);
    rc_step(c, m, 18);
    /* vector 85 */
    rc_push32(c, m, RC_ADDR(0x000042deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cf6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ec9cu);
    return;

L_42DE:
    /* 000042de   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000042deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_42E0:
    /* 000042e0   4  move.w D0,(ffff85a8,A4) */
    c->pc = RC_ADDR(0x000042e0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7a58u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_42E4:
    /* 000042e4   6  move.w (fffff794,A4),(fffff78c,A4) */
    c->pc = RC_ADDR(0x000042e4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_42EA:
    /* 000042ea   4  move.w (fffff796,A4),D0 */
    c->pc = RC_ADDR(0x000042eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_42EE:
    /* 000042ee   4  add.w D0,(ffff83e8,A4) */
    c->pc = RC_ADDR(0x000042eeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c18u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_42F2:
    /* 000042f2   4  jsr (00005a40) */
    c->pc = RC_ADDR(0x000042f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000042f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005a40u);
    return;

L_42F6:
    /* 000042f6   4  tst.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x000042f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a58u));
    rc_set_nzvc(c, t0, RC_W);

L_42FA:
    /* 000042fa   2  beq 00004326 */
    c->pc = RC_ADDR(0x000042fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4326;

L_42FC:
    /* 000042fc   4  move.w (fffff78c,A4),-(A7) */
    c->pc = RC_ADDR(0x000042fcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4300:
    /* 00004300   4  jsr (00005c60) */
    c->pc = RC_ADDR(0x00004300u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004304u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005c60u);
    return;

L_4304:
    /* 00004304   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00004304u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4306:
    /* 00004306   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004306u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4308:
    /* 00004308   2  bne 00004320 */
    c->pc = RC_ADDR(0x00004308u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4320;

L_430A:
    /* 0000430a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000430au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_430C:
    /* 0000430c   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x0000430cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4310:
    /* 00004310   4  lea (fffff946,A4),A0 */
    c->pc = RC_ADDR(0x00004310u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6bau);

L_4314:
    /* 00004314   6  cmpi.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004314u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_431A:
    /* 0000431a   2  beq 00004320 */
    c->pc = RC_ADDR(0x0000431au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4320;

L_431C:
    /* 0000431c   4  clr.w (ffff85a8,A4) */
    c->pc = RC_ADDR(0x0000431cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a58u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4320:
    /* 00004320   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004320u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4322:
    /* 00004322   4  bra 00003faa */
    c->pc = RC_ADDR(0x00004322u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_4326:
    /* 00004326   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004326u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_432A:
    /* 0000432a   4  jsr (00003b86) */
    c->pc = RC_ADDR(0x0000432au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000432eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00003b86u);
    return;

L_432E:
    /* 0000432e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000432eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4330:
    /* 00004330   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x00004330u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x00004334u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_4334:
    /* 00004334   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004334u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4336:
    /* 00004336   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00004336u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_433A:
    /* 0000433a   4  lea (fffff946,A4),A0 */
    c->pc = RC_ADDR(0x0000433au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6bau);

L_433E:
    /* 0000433e   6  cmpi.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000433eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_4344:
    /* 00004344   2  bne 0000437a */
    c->pc = RC_ADDR(0x00004344u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_437A;

L_4346:
    /* 00004346   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00004346u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_434A:
    /* 0000434a   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x0000434au);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_434E:
    /* 0000434e   4  lea (ffff85e6,A4),A0 */
    c->pc = RC_ADDR(0x0000434eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a1au);

L_4352:
    /* 00004352   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004352u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4356:
    /* 00004356   4  pea (00004618) */
    c->pc = RC_ADDR(0x00004356u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004618u));

L_435A:
    /* 0000435a   4  pea (ffffff90,A5) */
    c->pc = RC_ADDR(0x0000435au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x70u));

L_435E:
    /* 0000435e   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000435eu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00004362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_4362:
    /* 00004362   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00004362u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_4366:
    /* 00004366   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004366u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_436A:
    /* 0000436a   4  pea (ffffff90,A5) */
    c->pc = RC_ADDR(0x0000436au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x70u));

L_436E:
    /* 0000436e   4  jsr (00004852) */
    c->pc = RC_ADDR(0x0000436eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004372u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_4372:
    /* 00004372   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004372u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4374:
    /* 00004374   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004374u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4376:
    /* 00004376   4  bra 00003faa */
    c->pc = RC_ADDR(0x00004376u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_437A:
    /* 0000437a   4  move.w (fffff78c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000437au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_437E:
    /* 0000437e   4  jsr (00005c60) */
    c->pc = RC_ADDR(0x0000437eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004382u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005c60u);
    return;

L_4382:
    /* 00004382   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00004382u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4384:
    /* 00004384   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004384u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4386:
    /* 00004386   4  beq 0000440a */
    c->pc = RC_ADDR(0x00004386u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_440A;

L_438A:
    /* 0000438a   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x0000438au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_438E:
    /* 0000438e   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x0000438eu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_4392:
    /* 00004392   4  lea (ffff85f4,A4),A0 */
    c->pc = RC_ADDR(0x00004392u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0cu);

L_4396:
    /* 00004396   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00004396u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4398:
    /* 00004398   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004398u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_439C:
    /* 0000439c   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000439cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43A0:
    /* 000043a0   6  cmpi.w #17,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000043a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_43A6:
    /* 000043a6   2  ble 000043ae */
    c->pc = RC_ADDR(0x000043a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_43AE;

L_43A8:
    /* 000043a8   6  move.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000043a8u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43AE:
    /* 000043ae   6  cmpi.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000043aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_43B4:
    /* 000043b4   2  ble 000043c6 */
    c->pc = RC_ADDR(0x000043b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_43C6;

L_43B6:
    /* 000043b6   4  lea (00004636),A0 */
    c->pc = RC_ADDR(0x000043b6u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00004636u);

L_43BA:
    /* 000043ba   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000043bau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_43BE:
    /* 000043be   6  subi.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000043beu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000cu;
    rc_flags_sub(c, RC_W, t1, 0x0000000cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_43C4:
    /* 000043c4   2  bra 000043ce */
    c->pc = RC_ADDR(0x000043c4u);
    rc_step(c, m, 10);
    goto L_43CE;

L_43C6:
    /* 000043c6   4  lea (0000463b),A0 */
    c->pc = RC_ADDR(0x000043c6u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000463bu);

L_43CA:
    /* 000043ca   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000043cau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_43CE:
    /* 000043ce   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x000043ceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_43D2:
    /* 000043d2   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000043d2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_43D6:
    /* 000043d6   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x000043d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_43DA:
    /* 000043da   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x000043dau);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_43DE:
    /* 000043de   4  lea (ffff85e6,A4),A0 */
    c->pc = RC_ADDR(0x000043deu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a1au);

L_43E2:
    /* 000043e2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000043e2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_43E6:
    /* 000043e6   4  pea (00004640) */
    c->pc = RC_ADDR(0x000043e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004640u));

L_43EA:
    /* 000043ea   4  pea (ffffff90,A5) */
    c->pc = RC_ADDR(0x000043eau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x70u));

L_43EE:
    /* 000043ee   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x000043eeu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x000043f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_43F2:
    /* 000043f2   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x000043f2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_43F6:
    /* 000043f6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000043f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_43FA:
    /* 000043fa   4  pea (ffffff90,A5) */
    c->pc = RC_ADDR(0x000043fau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x70u));

L_43FE:
    /* 000043fe   4  jsr (00004852) */
    c->pc = RC_ADDR(0x000043feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004402u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_4402:
    /* 00004402   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004402u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4404:
    /* 00004404   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004404u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4406:
    /* 00004406   4  bra 00003faa */
    c->pc = RC_ADDR(0x00004406u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_440A:
    /* 0000440a   6  cmpi.w #1d,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000440au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_4410:
    /* 00004410   2  bne 00004434 */
    c->pc = RC_ADDR(0x00004410u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4434;

L_4412:
    /* 00004412   6  move.w #6,(ffffd728,A4) */
    c->pc = RC_ADDR(0x00004412u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] - 0x28d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4418:
    /* 00004418   6  move.w #1,(7b6,A4) */
    c->pc = RC_ADDR(0x00004418u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x7b6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_441E:
    /* 0000441e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000441eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4420:
    /* 00004420   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004420u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4422:
    /* 00004422   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004422u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4426:
    /* 00004426   4  jsr (000030a6) */
    c->pc = RC_ADDR(0x00004426u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000442au));
    rc_depth++;
    c->pc = RC_ADDR(0x000030a6u);
    return;

L_442A:
    /* 0000442a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000442au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_442C:
    /* 0000442c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000442cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_442E:
    /* 0000442e   2  bne 00004434 */
    c->pc = RC_ADDR(0x0000442eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4434;

L_4430:
    /* 00004430   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00004430u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4434:
    /* 00004434   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004434u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4436:
    /* 00004436   4  bra 00003faa */
    c->pc = RC_ADDR(0x00004436u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_443A:
    /* 0000443a   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x0000443au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_443E:
    /* 0000443e   2  beq 00004472 */
    c->pc = RC_ADDR(0x0000443eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4472;

L_4440:
    /* 00004440   6  pea (00020000).l */
    c->pc = RC_ADDR(0x00004440u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00020000u);

L_4446:
    /* 00004446   6  pea (00be0000).l */
    c->pc = RC_ADDR(0x00004446u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00be0000u);

L_444C:
    /* 0000444c   6  pea (00a00000).l */
    c->pc = RC_ADDR(0x0000444cu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00a00000u);

L_4452:
    /* 00004452   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004452u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4454:
    /* 00004454   4  move.l (ffffd556,A4),-(A7) */
    c->pc = RC_ADDR(0x00004454u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aaau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4458:
    /* 00004458   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004458u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_445C:
    /* 0000445c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000445cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004460u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_4460:
    /* 00004460   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004460u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4464:
    /* 00004464   4  move.w (ffffd56a,A4),-(A7) */
    c->pc = RC_ADDR(0x00004464u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a96u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4468:
    /* 00004468   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004468u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_446C:
    /* 0000446c   4  jsr (00004da0) */
    c->pc = RC_ADDR(0x0000446cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004470u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004da0u);
    return;

L_4470:
    /* 00004470   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00004470u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_4472:
    /* 00004472   4  tst.w (ffffd56a,A4) */
    c->pc = RC_ADDR(0x00004472u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a96u));
    rc_set_nzvc(c, t0, RC_W);

L_4476:
    /* 00004476   2  beq 00004482 */
    c->pc = RC_ADDR(0x00004476u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4482;

L_4478:
    /* 00004478   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004478u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_447C:
    /* 0000447c   4  jsr (00003b86) */
    c->pc = RC_ADDR(0x0000447cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004480u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003b86u);
    return;

L_4480:
    /* 00004480   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004480u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4482:
    /* 00004482   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00004482u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4488:
    /* 00004488   4  move.l (fffff7aa,A4),D0 */
    c->pc = RC_ADDR(0x00004488u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_448C:
    /* 0000448c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000448cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_448E:
    /* 0000448e   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000448eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4490:
    /* 00004490   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004490u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4492:
    /* 00004492   4  move.l (fffff7a6,A4),D0 */
    c->pc = RC_ADDR(0x00004492u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4496:
    /* 00004496   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004496u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4498:
    /* 00004498   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004498u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_449A:
    /* 0000449a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000449au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_449C:
    /* 0000449c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000449cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_449E:
    /* 0000449e   4  move.l (ffffd552,A4),-(A7) */
    c->pc = RC_ADDR(0x0000449eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2aaeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_44A2:
    /* 000044a2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000044a2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_44A6:
    /* 000044a6   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000044a6u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000044aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_44AA:
    /* 000044aa   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000044aau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_44AE:
    /* 000044ae   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x000044aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_44B2:
    /* 000044b2   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000044b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_44B6:
    /* 000044b6   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000044b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_44BA:
    /* 000044ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000044bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_44BE:
    /* 000044be   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000044beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_44C2:
    /* 000044c2   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x000044c2u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x000044c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_44C6:
    /* 000044c6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000044c6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_44CA:
    /* 000044ca   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x000044cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_44CE:
    /* 000044ce   2  beq 000044d4 */
    c->pc = RC_ADDR(0x000044ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_44D4;

L_44D0:
    /* 000044d0   4  jsr (00004c60) */
    c->pc = RC_ADDR(0x000044d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000044d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004c60u);
    return;

L_44D4:
    /* 000044d4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000044d4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_44DA:
    /* 000044da   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000044dau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_44DC:
    /* 000044dc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000044dcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_44DE:
    /* 000044de   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000044deu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_44E2:
    /* 000044e2   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000044e2u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000044e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_44E6:
    /* 000044e6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000044e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_44E8:
    /* 000044e8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000044e8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_44EC:
    /* 000044ec   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x000044ecu);
    rc_step(c, m, 18);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x000044f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c48u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011e8au);
    return;

L_44F0:
    /* 000044f0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000044f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_44F2:
    /* 000044f2   4  tst.w (fffff7b2,A4) */
    c->pc = RC_ADDR(0x000044f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x84eu));
    rc_set_nzvc(c, t0, RC_W);

L_44F6:
    /* 000044f6   2  beq 0000450a */
    c->pc = RC_ADDR(0x000044f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_450A;

L_44F8:
    /* 000044f8   4  clr.w (fffff7b2,A4) */
    c->pc = RC_ADDR(0x000044f8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x84eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_44FC:
    /* 000044fc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000044fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4500:
    /* 00004500   4  pea (00004675) */
    c->pc = RC_ADDR(0x00004500u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004675u));

L_4504:
    /* 00004504   4  jsr (00004852) */
    c->pc = RC_ADDR(0x00004504u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004508u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_4508:
    /* 00004508   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004508u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_450A:
    /* 0000450a   4  tst.w (ffff85ac,A4) */
    c->pc = RC_ADDR(0x0000450au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a54u));
    rc_set_nzvc(c, t0, RC_W);

L_450E:
    /* 0000450e   2  beq 00004522 */
    c->pc = RC_ADDR(0x0000450eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4522;

L_4510:
    /* 00004510   4  clr.w (ffff85ac,A4) */
    c->pc = RC_ADDR(0x00004510u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a54u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4514:
    /* 00004514   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004514u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4518:
    /* 00004518   4  pea (000046f3) */
    c->pc = RC_ADDR(0x00004518u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000046f3u));

L_451C:
    /* 0000451c   4  jsr (00004852) */
    c->pc = RC_ADDR(0x0000451cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004520u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_4520:
    /* 00004520   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004520u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4522:
    /* 00004522   4  tst.w (ffff8460,A4) */
    c->pc = RC_ADDR(0x00004522u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ba0u));
    rc_set_nzvc(c, t0, RC_W);

L_4526:
    /* 00004526   2  beq 00004536 */
    c->pc = RC_ADDR(0x00004526u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4536;

L_4528:
    /* 00004528   4  clr.w (ffff8460,A4) */
    c->pc = RC_ADDR(0x00004528u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7ba0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_452C:
    /* 0000452c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000452cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4530:
    /* 00004530   4  jsr (00002720) */
    c->pc = RC_ADDR(0x00004530u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004534u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002720u);
    return;

L_4534:
    /* 00004534   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004534u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4536:
    /* 00004536   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004536u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_453A:
    /* 0000453a   4  jsr (00002752) */
    c->pc = RC_ADDR(0x0000453au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000453eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002752u);
    return;

L_453E:
    /* 0000453e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000453eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4540:
    /* 00004540   4  tst.w (ffff83f8,A4) */
    c->pc = RC_ADDR(0x00004540u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c08u));
    rc_set_nzvc(c, t0, RC_W);

L_4544:
    /* 00004544   2  beq 00004582 */
    c->pc = RC_ADDR(0x00004544u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4582;

L_4546:
    /* 00004546   6  cmpi.w #15,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x00004546u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x760u));
    rc_cmp(c, RC_W, t0, 0x00000015u);

L_454C:
    /* 0000454c   2  ble 00004560 */
    c->pc = RC_ADDR(0x0000454cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4560;

L_454E:
    /* 0000454e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000454eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4552:
    /* 00004552   4  pea (00004798) */
    c->pc = RC_ADDR(0x00004552u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004798u));

L_4556:
    /* 00004556   4  jsr (00004852) */
    c->pc = RC_ADDR(0x00004556u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000455au));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_455A:
    /* 0000455a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000455au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_455C:
    /* 0000455c   4  clr.w (ffff83f8,A4) */
    c->pc = RC_ADDR(0x0000455cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c08u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4560:
    /* 00004560   6  cmpi.w #11,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x00004560u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x760u));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_4566:
    /* 00004566   2  ble 00004582 */
    c->pc = RC_ADDR(0x00004566u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4582;

L_4568:
    /* 00004568   6  cmpi.w #1,(ffff83f8,A4) */
    c->pc = RC_ADDR(0x00004568u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c08u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_456E:
    /* 0000456e   2  bne 00004582 */
    c->pc = RC_ADDR(0x0000456eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4582;

L_4570:
    /* 00004570   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004570u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4574:
    /* 00004574   4  pea (000047cb) */
    c->pc = RC_ADDR(0x00004574u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000047cbu));

L_4578:
    /* 00004578   4  jsr (00004852) */
    c->pc = RC_ADDR(0x00004578u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000457cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004852u);
    return;

L_457C:
    /* 0000457c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000457cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_457E:
    /* 0000457e   4  addq.w #1,(ffff83f8,A4) */
    c->pc = RC_ADDR(0x0000457eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c08u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4582:
    /* 00004582   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004582u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_4586:
    /* 00004586   2  bne 000045b8 */
    c->pc = RC_ADDR(0x00004586u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_45B8;

L_4588:
    /* 00004588   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x00004588u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_458C:
    /* 0000458c   2  beq 000045b8 */
    c->pc = RC_ADDR(0x0000458cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_45B8;

L_458E:
    /* 0000458e   4  move.l (fffff7a6,A4),D0 */
    c->pc = RC_ADDR(0x0000458eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4592:
    /* 00004592   4  sub.l (fffff79e,A4),D0 */
    c->pc = RC_ADDR(0x00004592u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4596:
    /* 00004596   6  cmp.l #3b,D0 */
    c->pc = RC_ADDR(0x00004596u);
    rc_step(c, m, 14);
    t0 = 0x0000003bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_459C:
    /* 0000459c   2  bgt 000045b8 */
    c->pc = RC_ADDR(0x0000459cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_45B8;

L_459E:
    /* 0000459e   4  move.l (fffff7aa,A4),D0 */
    c->pc = RC_ADDR(0x0000459eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x856u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_45A2:
    /* 000045a2   4  sub.l (fffff7a2,A4),D0 */
    c->pc = RC_ADDR(0x000045a2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_45A6:
    /* 000045a6   6  cmp.l #28,D0 */
    c->pc = RC_ADDR(0x000045a6u);
    rc_step(c, m, 14);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_45AC:
    /* 000045ac   2  bgt 000045b8 */
    c->pc = RC_ADDR(0x000045acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_45B8;

L_45AE:
    /* 000045ae   4  clr.w (ffffd5b8,A4) */
    c->pc = RC_ADDR(0x000045aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_45B2:
    /* 000045b2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000045b2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_45B4:
    /* 000045b4   4  bra 00003faa */
    c->pc = RC_ADDR(0x000045b4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

L_45B8:
    /* 000045b8   4  move.w (fffff790,A4),D0 */
    c->pc = RC_ADDR(0x000045b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x870u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_45BC:
    /* 000045bc   4  bra 00003faa */
    c->pc = RC_ADDR(0x000045bcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3FAA;

}
