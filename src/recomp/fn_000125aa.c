/* fn_000125aa - 990 byte(s), 295 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000125aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000125aau): goto L_125AA;
    case RC_ADDR(0x000125aeu): goto L_125AE;
    case RC_ADDR(0x000125b2u): goto L_125B2;
    case RC_ADDR(0x000125b6u): goto L_125B6;
    case RC_ADDR(0x000125bau): goto L_125BA;
    case RC_ADDR(0x000125bcu): goto L_125BC;
    case RC_ADDR(0x000125beu): goto L_125BE;
    case RC_ADDR(0x000125c2u): goto L_125C2;
    case RC_ADDR(0x000125c8u): goto L_125C8;
    case RC_ADDR(0x000125ccu): goto L_125CC;
    case RC_ADDR(0x000125d2u): goto L_125D2;
    case RC_ADDR(0x000125d6u): goto L_125D6;
    case RC_ADDR(0x000125d8u): goto L_125D8;
    case RC_ADDR(0x000125dau): goto L_125DA;
    case RC_ADDR(0x000125deu): goto L_125DE;
    case RC_ADDR(0x000125e2u): goto L_125E2;
    case RC_ADDR(0x000125e6u): goto L_125E6;
    case RC_ADDR(0x000125eau): goto L_125EA;
    case RC_ADDR(0x000125ecu): goto L_125EC;
    case RC_ADDR(0x000125eeu): goto L_125EE;
    case RC_ADDR(0x000125f2u): goto L_125F2;
    case RC_ADDR(0x000125f8u): goto L_125F8;
    case RC_ADDR(0x000125fcu): goto L_125FC;
    case RC_ADDR(0x000125feu): goto L_125FE;
    case RC_ADDR(0x00012600u): goto L_12600;
    case RC_ADDR(0x00012604u): goto L_12604;
    case RC_ADDR(0x0001260au): goto L_1260A;
    case RC_ADDR(0x0001260eu): goto L_1260E;
    case RC_ADDR(0x00012612u): goto L_12612;
    case RC_ADDR(0x00012614u): goto L_12614;
    case RC_ADDR(0x00012616u): goto L_12616;
    case RC_ADDR(0x0001261au): goto L_1261A;
    case RC_ADDR(0x0001261eu): goto L_1261E;
    case RC_ADDR(0x00012620u): goto L_12620;
    case RC_ADDR(0x00012622u): goto L_12622;
    case RC_ADDR(0x00012624u): goto L_12624;
    case RC_ADDR(0x00012628u): goto L_12628;
    case RC_ADDR(0x0001262eu): goto L_1262E;
    case RC_ADDR(0x00012632u): goto L_12632;
    case RC_ADDR(0x00012634u): goto L_12634;
    case RC_ADDR(0x00012636u): goto L_12636;
    case RC_ADDR(0x0001263au): goto L_1263A;
    case RC_ADDR(0x0001263eu): goto L_1263E;
    case RC_ADDR(0x00012640u): goto L_12640;
    case RC_ADDR(0x00012644u): goto L_12644;
    case RC_ADDR(0x00012646u): goto L_12646;
    case RC_ADDR(0x00012648u): goto L_12648;
    case RC_ADDR(0x0001264cu): goto L_1264C;
    case RC_ADDR(0x00012650u): goto L_12650;
    case RC_ADDR(0x00012652u): goto L_12652;
    case RC_ADDR(0x00012656u): goto L_12656;
    case RC_ADDR(0x0001265au): goto L_1265A;
    case RC_ADDR(0x0001265cu): goto L_1265C;
    case RC_ADDR(0x00012660u): goto L_12660;
    case RC_ADDR(0x00012664u): goto L_12664;
    case RC_ADDR(0x00012666u): goto L_12666;
    case RC_ADDR(0x0001266au): goto L_1266A;
    case RC_ADDR(0x0001266eu): goto L_1266E;
    case RC_ADDR(0x00012670u): goto L_12670;
    case RC_ADDR(0x00012674u): goto L_12674;
    case RC_ADDR(0x00012676u): goto L_12676;
    case RC_ADDR(0x00012678u): goto L_12678;
    case RC_ADDR(0x0001267cu): goto L_1267C;
    case RC_ADDR(0x00012680u): goto L_12680;
    case RC_ADDR(0x00012684u): goto L_12684;
    case RC_ADDR(0x00012686u): goto L_12686;
    case RC_ADDR(0x0001268au): goto L_1268A;
    case RC_ADDR(0x0001268eu): goto L_1268E;
    case RC_ADDR(0x00012692u): goto L_12692;
    case RC_ADDR(0x00012694u): goto L_12694;
    case RC_ADDR(0x00012698u): goto L_12698;
    case RC_ADDR(0x0001269au): goto L_1269A;
    case RC_ADDR(0x0001269cu): goto L_1269C;
    case RC_ADDR(0x000126a0u): goto L_126A0;
    case RC_ADDR(0x000126a4u): goto L_126A4;
    case RC_ADDR(0x000126a6u): goto L_126A6;
    case RC_ADDR(0x000126a8u): goto L_126A8;
    case RC_ADDR(0x000126acu): goto L_126AC;
    case RC_ADDR(0x000126b2u): goto L_126B2;
    case RC_ADDR(0x000126b6u): goto L_126B6;
    case RC_ADDR(0x000126b8u): goto L_126B8;
    case RC_ADDR(0x000126bcu): goto L_126BC;
    case RC_ADDR(0x000126c0u): goto L_126C0;
    case RC_ADDR(0x000126c4u): goto L_126C4;
    case RC_ADDR(0x000126cau): goto L_126CA;
    case RC_ADDR(0x000126ceu): goto L_126CE;
    case RC_ADDR(0x000126d0u): goto L_126D0;
    case RC_ADDR(0x000126d4u): goto L_126D4;
    case RC_ADDR(0x000126d8u): goto L_126D8;
    case RC_ADDR(0x000126dcu): goto L_126DC;
    case RC_ADDR(0x000126deu): goto L_126DE;
    case RC_ADDR(0x000126e2u): goto L_126E2;
    case RC_ADDR(0x000126e6u): goto L_126E6;
    case RC_ADDR(0x000126eau): goto L_126EA;
    case RC_ADDR(0x000126ecu): goto L_126EC;
    case RC_ADDR(0x000126eeu): goto L_126EE;
    case RC_ADDR(0x000126f2u): goto L_126F2;
    case RC_ADDR(0x000126f6u): goto L_126F6;
    case RC_ADDR(0x000126fau): goto L_126FA;
    case RC_ADDR(0x000126feu): goto L_126FE;
    case RC_ADDR(0x00012702u): goto L_12702;
    case RC_ADDR(0x00012706u): goto L_12706;
    case RC_ADDR(0x00012708u): goto L_12708;
    case RC_ADDR(0x0001270au): goto L_1270A;
    case RC_ADDR(0x0001270eu): goto L_1270E;
    case RC_ADDR(0x00012712u): goto L_12712;
    case RC_ADDR(0x00012716u): goto L_12716;
    case RC_ADDR(0x0001271au): goto L_1271A;
    case RC_ADDR(0x0001271eu): goto L_1271E;
    case RC_ADDR(0x00012722u): goto L_12722;
    case RC_ADDR(0x00012726u): goto L_12726;
    case RC_ADDR(0x0001272au): goto L_1272A;
    case RC_ADDR(0x0001272eu): goto L_1272E;
    case RC_ADDR(0x00012730u): goto L_12730;
    case RC_ADDR(0x00012734u): goto L_12734;
    case RC_ADDR(0x00012736u): goto L_12736;
    case RC_ADDR(0x00012738u): goto L_12738;
    case RC_ADDR(0x0001273cu): goto L_1273C;
    case RC_ADDR(0x00012742u): goto L_12742;
    case RC_ADDR(0x00012744u): goto L_12744;
    case RC_ADDR(0x00012748u): goto L_12748;
    case RC_ADDR(0x0001274au): goto L_1274A;
    case RC_ADDR(0x0001274eu): goto L_1274E;
    case RC_ADDR(0x00012752u): goto L_12752;
    case RC_ADDR(0x00012756u): goto L_12756;
    case RC_ADDR(0x0001275au): goto L_1275A;
    case RC_ADDR(0x0001275cu): goto L_1275C;
    case RC_ADDR(0x0001275eu): goto L_1275E;
    case RC_ADDR(0x00012762u): goto L_12762;
    case RC_ADDR(0x00012766u): goto L_12766;
    case RC_ADDR(0x0001276au): goto L_1276A;
    case RC_ADDR(0x0001276eu): goto L_1276E;
    case RC_ADDR(0x00012770u): goto L_12770;
    case RC_ADDR(0x00012772u): goto L_12772;
    case RC_ADDR(0x00012776u): goto L_12776;
    case RC_ADDR(0x0001277au): goto L_1277A;
    case RC_ADDR(0x0001277eu): goto L_1277E;
    case RC_ADDR(0x00012782u): goto L_12782;
    case RC_ADDR(0x00012784u): goto L_12784;
    case RC_ADDR(0x00012786u): goto L_12786;
    case RC_ADDR(0x0001278au): goto L_1278A;
    case RC_ADDR(0x0001278eu): goto L_1278E;
    case RC_ADDR(0x00012792u): goto L_12792;
    case RC_ADDR(0x00012796u): goto L_12796;
    case RC_ADDR(0x00012798u): goto L_12798;
    case RC_ADDR(0x0001279au): goto L_1279A;
    case RC_ADDR(0x000127a0u): goto L_127A0;
    case RC_ADDR(0x000127a6u): goto L_127A6;
    case RC_ADDR(0x000127aau): goto L_127AA;
    case RC_ADDR(0x000127acu): goto L_127AC;
    case RC_ADDR(0x000127aeu): goto L_127AE;
    case RC_ADDR(0x000127b2u): goto L_127B2;
    case RC_ADDR(0x000127b8u): goto L_127B8;
    case RC_ADDR(0x000127bau): goto L_127BA;
    case RC_ADDR(0x000127bcu): goto L_127BC;
    case RC_ADDR(0x000127c0u): goto L_127C0;
    case RC_ADDR(0x000127c2u): goto L_127C2;
    case RC_ADDR(0x000127c4u): goto L_127C4;
    case RC_ADDR(0x000127c8u): goto L_127C8;
    case RC_ADDR(0x000127ccu): goto L_127CC;
    case RC_ADDR(0x000127d0u): goto L_127D0;
    case RC_ADDR(0x000127d2u): goto L_127D2;
    case RC_ADDR(0x000127d4u): goto L_127D4;
    case RC_ADDR(0x000127d8u): goto L_127D8;
    case RC_ADDR(0x000127dcu): goto L_127DC;
    case RC_ADDR(0x000127e0u): goto L_127E0;
    case RC_ADDR(0x000127e2u): goto L_127E2;
    case RC_ADDR(0x000127e4u): goto L_127E4;
    case RC_ADDR(0x000127e8u): goto L_127E8;
    case RC_ADDR(0x000127ecu): goto L_127EC;
    case RC_ADDR(0x000127f0u): goto L_127F0;
    case RC_ADDR(0x000127f2u): goto L_127F2;
    case RC_ADDR(0x000127f4u): goto L_127F4;
    case RC_ADDR(0x000127f8u): goto L_127F8;
    case RC_ADDR(0x000127fcu): goto L_127FC;
    case RC_ADDR(0x00012800u): goto L_12800;
    case RC_ADDR(0x00012804u): goto L_12804;
    case RC_ADDR(0x00012808u): goto L_12808;
    case RC_ADDR(0x0001280au): goto L_1280A;
    case RC_ADDR(0x0001280cu): goto L_1280C;
    case RC_ADDR(0x00012810u): goto L_12810;
    case RC_ADDR(0x00012812u): goto L_12812;
    case RC_ADDR(0x00012816u): goto L_12816;
    case RC_ADDR(0x00012818u): goto L_12818;
    case RC_ADDR(0x0001281au): goto L_1281A;
    case RC_ADDR(0x0001281eu): goto L_1281E;
    case RC_ADDR(0x00012822u): goto L_12822;
    case RC_ADDR(0x00012824u): goto L_12824;
    case RC_ADDR(0x00012828u): goto L_12828;
    case RC_ADDR(0x0001282au): goto L_1282A;
    case RC_ADDR(0x0001282cu): goto L_1282C;
    case RC_ADDR(0x00012830u): goto L_12830;
    case RC_ADDR(0x00012834u): goto L_12834;
    case RC_ADDR(0x00012838u): goto L_12838;
    case RC_ADDR(0x0001283cu): goto L_1283C;
    case RC_ADDR(0x00012840u): goto L_12840;
    case RC_ADDR(0x00012842u): goto L_12842;
    case RC_ADDR(0x00012844u): goto L_12844;
    case RC_ADDR(0x00012848u): goto L_12848;
    case RC_ADDR(0x0001284eu): goto L_1284E;
    case RC_ADDR(0x00012852u): goto L_12852;
    case RC_ADDR(0x00012854u): goto L_12854;
    case RC_ADDR(0x00012856u): goto L_12856;
    case RC_ADDR(0x0001285au): goto L_1285A;
    case RC_ADDR(0x00012860u): goto L_12860;
    case RC_ADDR(0x00012864u): goto L_12864;
    case RC_ADDR(0x00012868u): goto L_12868;
    case RC_ADDR(0x0001286au): goto L_1286A;
    case RC_ADDR(0x0001286cu): goto L_1286C;
    case RC_ADDR(0x00012870u): goto L_12870;
    case RC_ADDR(0x00012874u): goto L_12874;
    case RC_ADDR(0x00012878u): goto L_12878;
    case RC_ADDR(0x0001287au): goto L_1287A;
    case RC_ADDR(0x0001287cu): goto L_1287C;
    case RC_ADDR(0x00012880u): goto L_12880;
    case RC_ADDR(0x00012884u): goto L_12884;
    case RC_ADDR(0x00012888u): goto L_12888;
    case RC_ADDR(0x0001288au): goto L_1288A;
    case RC_ADDR(0x0001288eu): goto L_1288E;
    case RC_ADDR(0x00012890u): goto L_12890;
    case RC_ADDR(0x00012894u): goto L_12894;
    case RC_ADDR(0x00012898u): goto L_12898;
    case RC_ADDR(0x0001289au): goto L_1289A;
    case RC_ADDR(0x0001289cu): goto L_1289C;
    case RC_ADDR(0x000128a0u): goto L_128A0;
    case RC_ADDR(0x000128a4u): goto L_128A4;
    case RC_ADDR(0x000128a8u): goto L_128A8;
    case RC_ADDR(0x000128aau): goto L_128AA;
    case RC_ADDR(0x000128aeu): goto L_128AE;
    case RC_ADDR(0x000128b0u): goto L_128B0;
    case RC_ADDR(0x000128b2u): goto L_128B2;
    case RC_ADDR(0x000128b6u): goto L_128B6;
    case RC_ADDR(0x000128bau): goto L_128BA;
    case RC_ADDR(0x000128beu): goto L_128BE;
    case RC_ADDR(0x000128c0u): goto L_128C0;
    case RC_ADDR(0x000128c4u): goto L_128C4;
    case RC_ADDR(0x000128c6u): goto L_128C6;
    case RC_ADDR(0x000128cau): goto L_128CA;
    case RC_ADDR(0x000128ceu): goto L_128CE;
    case RC_ADDR(0x000128d0u): goto L_128D0;
    case RC_ADDR(0x000128d2u): goto L_128D2;
    case RC_ADDR(0x000128d6u): goto L_128D6;
    case RC_ADDR(0x000128dau): goto L_128DA;
    case RC_ADDR(0x000128deu): goto L_128DE;
    case RC_ADDR(0x000128e0u): goto L_128E0;
    case RC_ADDR(0x000128e4u): goto L_128E4;
    case RC_ADDR(0x000128e6u): goto L_128E6;
    case RC_ADDR(0x000128e8u): goto L_128E8;
    case RC_ADDR(0x000128ecu): goto L_128EC;
    case RC_ADDR(0x000128f0u): goto L_128F0;
    case RC_ADDR(0x000128f4u): goto L_128F4;
    case RC_ADDR(0x000128f6u): goto L_128F6;
    case RC_ADDR(0x000128fau): goto L_128FA;
    case RC_ADDR(0x000128fcu): goto L_128FC;
    case RC_ADDR(0x00012900u): goto L_12900;
    case RC_ADDR(0x00012902u): goto L_12902;
    case RC_ADDR(0x00012904u): goto L_12904;
    case RC_ADDR(0x00012908u): goto L_12908;
    case RC_ADDR(0x0001290eu): goto L_1290E;
    case RC_ADDR(0x00012910u): goto L_12910;
    case RC_ADDR(0x00012914u): goto L_12914;
    case RC_ADDR(0x00012916u): goto L_12916;
    case RC_ADDR(0x00012918u): goto L_12918;
    case RC_ADDR(0x0001291cu): goto L_1291C;
    case RC_ADDR(0x00012922u): goto L_12922;
    case RC_ADDR(0x00012924u): goto L_12924;
    case RC_ADDR(0x00012928u): goto L_12928;
    case RC_ADDR(0x0001292au): goto L_1292A;
    case RC_ADDR(0x0001292cu): goto L_1292C;
    case RC_ADDR(0x00012930u): goto L_12930;
    case RC_ADDR(0x00012936u): goto L_12936;
    case RC_ADDR(0x00012938u): goto L_12938;
    case RC_ADDR(0x0001293cu): goto L_1293C;
    case RC_ADDR(0x0001293eu): goto L_1293E;
    case RC_ADDR(0x00012940u): goto L_12940;
    case RC_ADDR(0x00012944u): goto L_12944;
    case RC_ADDR(0x0001294au): goto L_1294A;
    case RC_ADDR(0x0001294cu): goto L_1294C;
    case RC_ADDR(0x00012950u): goto L_12950;
    case RC_ADDR(0x00012952u): goto L_12952;
    case RC_ADDR(0x00012954u): goto L_12954;
    case RC_ADDR(0x00012958u): goto L_12958;
    case RC_ADDR(0x0001295cu): goto L_1295C;
    case RC_ADDR(0x00012960u): goto L_12960;
    case RC_ADDR(0x00012966u): goto L_12966;
    case RC_ADDR(0x0001296au): goto L_1296A;
    case RC_ADDR(0x0001296eu): goto L_1296E;
    case RC_ADDR(0x00012970u): goto L_12970;
    case RC_ADDR(0x00012974u): goto L_12974;
    case RC_ADDR(0x00012978u): goto L_12978;
    case RC_ADDR(0x0001297au): goto L_1297A;
    case RC_ADDR(0x0001297eu): goto L_1297E;
    case RC_ADDR(0x00012982u): goto L_12982;
    case RC_ADDR(0x00012984u): goto L_12984;
    case RC_ADDR(0x00012986u): goto L_12986;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_125AA:
    /* 000125aa   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x000125aau);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_125AE:
    /* 000125ae   4  clr.w (1084,A4) */
    c->pc = RC_ADDR(0x000125aeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1084u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_125B2:
    /* 000125b2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000125b2u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_125B6:
    /* 000125b6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000125b6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125BA:
    /* 000125ba   2  ext.l D0 */
    c->pc = RC_ADDR(0x000125bau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_125BC:
    /* 000125bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000125bcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_125BE:
    /* 000125be   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x000125beu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_125C2:
    /* 000125c2   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000125c2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_125C8:
    /* 000125c8   4  ble 0001295c */
    c->pc = RC_ADDR(0x000125c8u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1295C;

L_125CC:
    /* 000125cc   6  move.w #1,(1084,A4) */
    c->pc = RC_ADDR(0x000125ccu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1084u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_125D2:
    /* 000125d2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000125d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125D6:
    /* 000125d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000125d6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_125D8:
    /* 000125d8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000125d8u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_125DA:
    /* 000125da   4  lea (f92,A4),A0 */
    c->pc = RC_ADDR(0x000125dau);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf92u);

L_125DE:
    /* 000125de   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000125deu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_125E2:
    /* 000125e2   4  bne 0001294c */
    c->pc = RC_ADDR(0x000125e2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1294C;

L_125E6:
    /* 000125e6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000125e6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125EA:
    /* 000125ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000125eau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_125EC:
    /* 000125ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000125ecu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_125EE:
    /* 000125ee   4  lea (f56,A4),A0 */
    c->pc = RC_ADDR(0x000125eeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf56u);

L_125F2:
    /* 000125f2   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000125f2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_125F8:
    /* 000125f8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000125f8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_125FC:
    /* 000125fc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000125fcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_125FE:
    /* 000125fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000125feu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12600:
    /* 00012600   4  lea (fce,A4),A0 */
    c->pc = RC_ADDR(0x00012600u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xfceu);

L_12604:
    /* 00012604   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012604u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1260A:
    /* 0001260a   4  bne 00012694 */
    c->pc = RC_ADDR(0x0001260au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_12694;

L_1260E:
    /* 0001260e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001260eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12612:
    /* 00012612   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012612u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12614:
    /* 00012614   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012614u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12616:
    /* 00012616   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x00012616u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_1261A:
    /* 0001261a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001261au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1261E:
    /* 0001261e   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0001261eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12620:
    /* 00012620   2  ext.l D1 */
    c->pc = RC_ADDR(0x00012620u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_12622:
    /* 00012622   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00012622u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_12624:
    /* 00012624   4  lea (e4e,A4),A0 */
    c->pc = RC_ADDR(0x00012624u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe4eu);

L_12628:
    /* 00012628   6  move.l (0,A0,D1.w),(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012628u);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1262E:
    /* 0001262e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001262eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12632:
    /* 00012632   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012632u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12634:
    /* 00012634   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012634u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12636:
    /* 00012636   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x00012636u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_1263A:
    /* 0001263a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001263au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1263E:
    /* 0001263e   2  bne 00012692 */
    c->pc = RC_ADDR(0x0001263eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_12692;

L_12640:
    /* 00012640   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012640u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12644:
    /* 00012644   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012644u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12646:
    /* 00012646   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012646u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12648:
    /* 00012648   4  lea (ede,A4),A0 */
    c->pc = RC_ADDR(0x00012648u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xedeu);

L_1264C:
    /* 0001264c   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001264cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_12650:
    /* 00012650   2  ble 00012692 */
    c->pc = RC_ADDR(0x00012650u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_12692;

L_12652:
    /* 00012652   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00012652u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_12656:
    /* 00012656   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x00012656u);
    rc_step(c, m);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x0001265au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b78u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_1265A:
    /* 0001265a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001265au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1265C:
    /* 0001265c   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0001265cu);
    rc_step(c, m);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12660:
    /* 00012660   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00012660u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12664:
    /* 00012664   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x00012664u);
    rc_step(c, m);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12666:
    /* 00012666   4  sub.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00012666u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1266A:
    /* 0001266a   4  muls.w #3e8,D0 */
    c->pc = RC_ADDR(0x0001266au);
    rc_step(c, m);
    t0 = 0x000003e8u;
    rc_muls(c, 0, t0);

L_1266E:
    /* 0001266e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001266eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12670:
    /* 00012670   4  move.l (2de,A4),D1 */
    c->pc = RC_ADDR(0x00012670u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12674:
    /* 00012674   2  sub.l D0,D1 */
    c->pc = RC_ADDR(0x00012674u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_12676:
    /* 00012676   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00012676u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12678:
    /* 00012678   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00012678u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1267C:
    /* 0001267c   4  muls.w #64,D0 */
    c->pc = RC_ADDR(0x0001267cu);
    rc_step(c, m);
    t0 = 0x00000064u;
    rc_muls(c, 0, t0);

L_12680:
    /* 00012680   4  add.w #12c,D0 */
    c->pc = RC_ADDR(0x00012680u);
    rc_step(c, m);
    t0 = 0x0000012cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12684:
    /* 00012684   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012684u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12686:
    /* 00012686   4  move.l (ffffb150,A4),-(A7) */
    c->pc = RC_ADDR(0x00012686u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1268A:
    /* 0001268a   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0001268au);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001268eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1268E:
    /* 0001268e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001268eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_12692:
    /* 00012692   2  bra 000126b2 */
    c->pc = RC_ADDR(0x00012692u);
    rc_step(c, m);
    goto L_126B2;

L_12694:
    /* 00012694   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012694u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12698:
    /* 00012698   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012698u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1269A:
    /* 0001269a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001269au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1269C:
    /* 0001269c   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x0001269cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_126A0:
    /* 000126a0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000126a0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_126A4:
    /* 000126a4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000126a4u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_126A6:
    /* 000126a6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000126a6u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_126A8:
    /* 000126a8   4  lea (1088,A4),A0 */
    c->pc = RC_ADDR(0x000126a8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1088u);

L_126AC:
    /* 000126ac   6  move.l (0,A0,D1.w),(ffffffec,A5) */
    c->pc = RC_ADDR(0x000126acu);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_126B2:
    /* 000126b2   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x000126b2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_126B6:
    /* 000126b6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000126b6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_126B8:
    /* 000126b8   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x000126b8u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_126BC:
    /* 000126bc   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000126bcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_126C0:
    /* 000126c0   4  movea.l (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x000126c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[0] = t0;

L_126C4:
    /* 000126c4   6  move.w (2,A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x000126c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_126CA:
    /* 000126ca   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000126cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_126CE:
    /* 000126ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000126ceu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_126D0:
    /* 000126d0   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x000126d0u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_126D4:
    /* 000126d4   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000126d4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_126D8:
    /* 000126d8   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x000126d8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_126DC:
    /* 000126dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000126dcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_126DE:
    /* 000126de   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x000126deu);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_126E2:
    /* 000126e2   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000126e2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_126E6:
    /* 000126e6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000126e6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_126EA:
    /* 000126ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000126eau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_126EC:
    /* 000126ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000126ecu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_126EE:
    /* 000126ee   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x000126eeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe66u);

L_126F2:
    /* 000126f2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000126f2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_126F6:
    /* 000126f6   4  sub.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x000126f6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_126FA:
    /* 000126fa   4  sub.w (dfa,A4),D1 */
    c->pc = RC_ADDR(0x000126fau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_126FE:
    /* 000126fe   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000126feu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12702:
    /* 00012702   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012702u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12706:
    /* 00012706   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012706u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12708:
    /* 00012708   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012708u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1270A:
    /* 0001270a   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x0001270au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xea2u);

L_1270E:
    /* 0001270e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001270eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12712:
    /* 00012712   4  sub.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00012712u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12716:
    /* 00012716   4  sub.w (dfc,A4),D1 */
    c->pc = RC_ADDR(0x00012716u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1271A:
    /* 0001271a   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001271au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1271E:
    /* 0001271e   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x0001271eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_12722:
    /* 00012722   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00012722u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12726:
    /* 00012726   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00012726u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1272A:
    /* 0001272a   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x0001272au);
    rc_step(c, m);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x0001272eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_1272E:
    /* 0001272e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001272eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12730:
    /* 00012730   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012730u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12734:
    /* 00012734   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012734u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12736:
    /* 00012736   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012736u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12738:
    /* 00012738   4  lea (fce,A4),A0 */
    c->pc = RC_ADDR(0x00012738u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xfceu);

L_1273C:
    /* 0001273c   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001273cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_12742:
    /* 00012742   2  bne 000127a6 */
    c->pc = RC_ADDR(0x00012742u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_127A6;

L_12744:
    /* 00012744   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x00012744u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_12748:
    /* 00012748   2  bne 000127a6 */
    c->pc = RC_ADDR(0x00012748u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_127A6;

L_1274A:
    /* 0001274a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001274au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1274E:
    /* 0001274e   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001274eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12752:
    /* 00012752   4  move.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x00012752u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12756:
    /* 00012756   4  sub.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x00012756u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1275A:
    /* 0001275a   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001275au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1275C:
    /* 0001275c   2  ble 000127a6 */
    c->pc = RC_ADDR(0x0001275cu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_127A6;

L_1275E:
    /* 0001275e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001275eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12762:
    /* 00012762   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00012762u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12766:
    /* 00012766   4  move.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x00012766u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1276A:
    /* 0001276a   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0001276au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1276E:
    /* 0001276e   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x0001276eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12770:
    /* 00012770   2  bge 000127a6 */
    c->pc = RC_ADDR(0x00012770u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_127A6;

L_12772:
    /* 00012772   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012772u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12776:
    /* 00012776   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00012776u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1277A:
    /* 0001277a   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x0001277au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1277E:
    /* 0001277e   4  sub.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0001277eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12782:
    /* 00012782   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00012782u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12784:
    /* 00012784   2  ble 000127a6 */
    c->pc = RC_ADDR(0x00012784u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_127A6;

L_12786:
    /* 00012786   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012786u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1278A:
    /* 0001278a   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001278au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1278E:
    /* 0001278e   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x0001278eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12792:
    /* 00012792   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00012792u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12796:
    /* 00012796   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00012796u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12798:
    /* 00012798   2  bge 000127a6 */
    c->pc = RC_ADDR(0x00012798u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_127A6;

L_1279A:
    /* 0001279a   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x0001279au);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127A0:
    /* 000127a0   6  move.w #1,(1086,A4) */
    c->pc = RC_ADDR(0x000127a0u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1086u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_127A6:
    /* 000127a6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000127a6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127AA:
    /* 000127aa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000127aau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_127AC:
    /* 000127ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000127acu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_127AE:
    /* 000127ae   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x000127aeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_127B2:
    /* 000127b2   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000127b2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_127B8:
    /* 000127b8   2  ble 00012804 */
    c->pc = RC_ADDR(0x000127b8u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_12804;

L_127BA:
    /* 000127ba   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000127bau);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_127BC:
    /* 000127bc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000127bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127C0:
    /* 000127c0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000127c0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_127C2:
    /* 000127c2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000127c2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_127C4:
    /* 000127c4   4  lea (1046,A4),A0 */
    c->pc = RC_ADDR(0x000127c4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1046u);

L_127C8:
    /* 000127c8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000127c8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_127CC:
    /* 000127cc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000127ccu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127D0:
    /* 000127d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000127d0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_127D2:
    /* 000127d2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000127d2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_127D4:
    /* 000127d4   4  lea (100a,A4),A0 */
    c->pc = RC_ADDR(0x000127d4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x100au);

L_127D8:
    /* 000127d8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000127d8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_127DC:
    /* 000127dc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000127dcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127E0:
    /* 000127e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000127e0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_127E2:
    /* 000127e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000127e2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_127E4:
    /* 000127e4   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x000127e4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xea2u);

L_127E8:
    /* 000127e8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000127e8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_127EC:
    /* 000127ec   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000127ecu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_127F0:
    /* 000127f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000127f0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_127F2:
    /* 000127f2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000127f2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_127F4:
    /* 000127f4   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x000127f4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe66u);

L_127F8:
    /* 000127f8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000127f8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_127FC:
    /* 000127fc   4  jsr (00013dba) */
    c->pc = RC_ADDR(0x000127fcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00012800u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013dbau);
    return;

L_12800:
    /* 00012800   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00012800u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_12804:
    /* 00012804   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012804u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12808:
    /* 00012808   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012808u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1280A:
    /* 0001280a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001280au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1280C:
    /* 0001280c   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x0001280cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_12810:
    /* 00012810   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00012810u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_12812:
    /* 00012812   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012812u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12816:
    /* 00012816   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012816u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12818:
    /* 00012818   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012818u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1281A:
    /* 0001281a   4  lea (ede,A4),A1 */
    c->pc = RC_ADDR(0x0001281au);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0xedeu);

L_1281E:
    /* 0001281e   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x0001281eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12822:
    /* 00012822   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x00012822u);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12824:
    /* 00012824   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012824u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12828:
    /* 00012828   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012828u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1282A:
    /* 0001282a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001282au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1282C:
    /* 0001282c   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x0001282cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_12830:
    /* 00012830   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012830u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12834:
    /* 00012834   4  cmp.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00012834u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12838:
    /* 00012838   4  bne 000128fc */
    c->pc = RC_ADDR(0x00012838u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_128FC;

L_1283C:
    /* 0001283c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001283cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12840:
    /* 00012840   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012840u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12842:
    /* 00012842   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012842u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12844:
    /* 00012844   4  lea (ede,A4),A0 */
    c->pc = RC_ADDR(0x00012844u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xedeu);

L_12848:
    /* 00012848   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012848u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1284E:
    /* 0001284e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001284eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12852:
    /* 00012852   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012852u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12854:
    /* 00012854   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012854u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12856:
    /* 00012856   4  lea (fce,A4),A0 */
    c->pc = RC_ADDR(0x00012856u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xfceu);

L_1285A:
    /* 0001285a   6  cmpi.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001285au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_12860:
    /* 00012860   4  bne 000128fc */
    c->pc = RC_ADDR(0x00012860u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_128FC;

L_12864:
    /* 00012864   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012864u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12868:
    /* 00012868   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012868u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1286A:
    /* 0001286a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001286au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1286C:
    /* 0001286c   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x0001286cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xea2u);

L_12870:
    /* 00012870   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00012870u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12874:
    /* 00012874   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012874u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12878:
    /* 00012878   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012878u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1287A:
    /* 0001287a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001287au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1287C:
    /* 0001287c   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x0001287cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe66u);

L_12880:
    /* 00012880   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00012880u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12884:
    /* 00012884   4  jsr (00015eb2) */
    c->pc = RC_ADDR(0x00012884u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00012888u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015eb2u);
    return;

L_12888:
    /* 00012888   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012888u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1288A:
    /* 0001288a   4  btst #7,D0 */
    c->pc = RC_ADDR(0x0001288au);
    rc_step(c, m);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1288E:
    /* 0001288e   2  beq 000128fc */
    c->pc = RC_ADDR(0x0001288eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_128FC;

L_12890:
    /* 00012890   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00012890u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12894:
    /* 00012894   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012894u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12898:
    /* 00012898   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012898u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1289A:
    /* 0001289a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001289au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1289C:
    /* 0001289c   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x0001289cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xea2u);

L_128A0:
    /* 000128a0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000128a0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128A4:
    /* 000128a4   4  sub.w #a,D1 */
    c->pc = RC_ADDR(0x000128a4u);
    rc_step(c, m);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_128A8:
    /* 000128a8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x000128a8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_128AA:
    /* 000128aa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000128aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128AE:
    /* 000128ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x000128aeu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_128B0:
    /* 000128b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000128b0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_128B2:
    /* 000128b2   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x000128b2u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe66u);

L_128B6:
    /* 000128b6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000128b6u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128BA:
    /* 000128ba   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x000128bau);
    rc_step(c, m);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_128BE:
    /* 000128be   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x000128beu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_128C0:
    /* 000128c0   4  jsr (00015fec) */
    c->pc = RC_ADDR(0x000128c0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000128c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fecu);
    return;

L_128C4:
    /* 000128c4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000128c4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_128C6:
    /* 000128c6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000128c6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_128CA:
    /* 000128ca   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000128cau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128CE:
    /* 000128ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000128ceu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_128D0:
    /* 000128d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000128d0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_128D2:
    /* 000128d2   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x000128d2u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xea2u);

L_128D6:
    /* 000128d6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000128d6u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128DA:
    /* 000128da   4  sub.w #a,D1 */
    c->pc = RC_ADDR(0x000128dau);
    rc_step(c, m);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_128DE:
    /* 000128de   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x000128deu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_128E0:
    /* 000128e0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000128e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128E4:
    /* 000128e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000128e4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_128E6:
    /* 000128e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000128e6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_128E8:
    /* 000128e8   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x000128e8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xe66u);

L_128EC:
    /* 000128ec   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000128ecu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_128F0:
    /* 000128f0   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x000128f0u);
    rc_step(c, m);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_128F4:
    /* 000128f4   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x000128f4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_128F6:
    /* 000128f6   4  jsr (00015fec) */
    c->pc = RC_ADDR(0x000128f6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000128fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00015fecu);
    return;

L_128FA:
    /* 000128fa   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000128fau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_128FC:
    /* 000128fc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000128fcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12900:
    /* 00012900   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012900u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12902:
    /* 00012902   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012902u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12904:
    /* 00012904   4  lea (fce,A4),A0 */
    c->pc = RC_ADDR(0x00012904u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xfceu);

L_12908:
    /* 00012908   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012908u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1290E:
    /* 0001290e   2  bne 0001294a */
    c->pc = RC_ADDR(0x0001290eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1294A;

L_12910:
    /* 00012910   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012910u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12914:
    /* 00012914   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012914u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12916:
    /* 00012916   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012916u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12918:
    /* 00012918   4  lea (ede,A4),A0 */
    c->pc = RC_ADDR(0x00012918u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xedeu);

L_1291C:
    /* 0001291c   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001291cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_12922:
    /* 00012922   2  bne 0001294a */
    c->pc = RC_ADDR(0x00012922u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1294A;

L_12924:
    /* 00012924   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012924u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12928:
    /* 00012928   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012928u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1292A:
    /* 0001292a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001292au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1292C:
    /* 0001292c   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x0001292cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_12930:
    /* 00012930   6  cmpi.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012930u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_12936:
    /* 00012936   2  bne 0001294a */
    c->pc = RC_ADDR(0x00012936u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1294A;

L_12938:
    /* 00012938   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012938u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1293C:
    /* 0001293c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001293cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1293E:
    /* 0001293e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001293eu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12940:
    /* 00012940   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x00012940u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf1au);

L_12944:
    /* 00012944   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012944u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1294A:
    /* 0001294a   2  bra 0001295c */
    c->pc = RC_ADDR(0x0001294au);
    rc_step(c, m);
    goto L_1295C;

L_1294C:
    /* 0001294c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001294cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12950:
    /* 00012950   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012950u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_12952:
    /* 00012952   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012952u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12954:
    /* 00012954   4  lea (f92,A4),A0 */
    c->pc = RC_ADDR(0x00012954u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0xf92u);

L_12958:
    /* 00012958   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012958u);
    rc_step(c, m);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1295C:
    /* 0001295c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001295cu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12960:
    /* 00012960   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012960u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_12966:
    /* 00012966   4  blt 000125b6 */
    c->pc = RC_ADDR(0x00012966u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_125B6; }

L_1296A:
    /* 0001296a   4  tst.w (1084,A4) */
    c->pc = RC_ADDR(0x0001296au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1084u));
    rc_set_nzvc(c, t0, RC_W);

L_1296E:
    /* 0001296e   2  bne 00012984 */
    c->pc = RC_ADDR(0x0001296eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_12984;

L_12970:
    /* 00012970   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00012970u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12974:
    /* 00012974   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00012974u);
    rc_step(c, m);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00012978u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_12978:
    /* 00012978   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012978u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1297A:
    /* 0001297a   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001297au);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_1297E:
    /* 0001297e   4  jsr (0000efc0) */
    c->pc = RC_ADDR(0x0001297eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00012982u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efc0u);
    return;

L_12982:
    /* 00012982   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012982u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_12984:
    /* 00012984   2  unlk A5 */
    c->pc = RC_ADDR(0x00012984u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12986:
    /* 00012986   2  rts */
    c->pc = RC_ADDR(0x00012986u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
