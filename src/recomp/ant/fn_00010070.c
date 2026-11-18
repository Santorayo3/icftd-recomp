/* fn_00010070 - 1090 byte(s), 311 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010070(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010070u): goto L_10070;
    case RC_ADDR(0x00010074u): goto L_10074;
    case RC_ADDR(0x00010078u): goto L_10078;
    case RC_ADDR(0x0001007au): goto L_1007A;
    case RC_ADDR(0x0001007cu): goto L_1007C;
    case RC_ADDR(0x0001007eu): goto L_1007E;
    case RC_ADDR(0x00010082u): goto L_10082;
    case RC_ADDR(0x00010086u): goto L_10086;
    case RC_ADDR(0x0001008au): goto L_1008A;
    case RC_ADDR(0x0001008cu): goto L_1008C;
    case RC_ADDR(0x00010090u): goto L_10090;
    case RC_ADDR(0x00010094u): goto L_10094;
    case RC_ADDR(0x00010096u): goto L_10096;
    case RC_ADDR(0x0001009au): goto L_1009A;
    case RC_ADDR(0x0001009cu): goto L_1009C;
    case RC_ADDR(0x000100a0u): goto L_100A0;
    case RC_ADDR(0x000100a2u): goto L_100A2;
    case RC_ADDR(0x000100a8u): goto L_100A8;
    case RC_ADDR(0x000100aeu): goto L_100AE;
    case RC_ADDR(0x000100b2u): goto L_100B2;
    case RC_ADDR(0x000100b6u): goto L_100B6;
    case RC_ADDR(0x000100b8u): goto L_100B8;
    case RC_ADDR(0x000100bcu): goto L_100BC;
    case RC_ADDR(0x000100c0u): goto L_100C0;
    case RC_ADDR(0x000100c4u): goto L_100C4;
    case RC_ADDR(0x000100c8u): goto L_100C8;
    case RC_ADDR(0x000100ccu): goto L_100CC;
    case RC_ADDR(0x000100d0u): goto L_100D0;
    case RC_ADDR(0x000100d4u): goto L_100D4;
    case RC_ADDR(0x000100d8u): goto L_100D8;
    case RC_ADDR(0x000100dau): goto L_100DA;
    case RC_ADDR(0x000100dcu): goto L_100DC;
    case RC_ADDR(0x000100deu): goto L_100DE;
    case RC_ADDR(0x000100e0u): goto L_100E0;
    case RC_ADDR(0x000100e4u): goto L_100E4;
    case RC_ADDR(0x000100e8u): goto L_100E8;
    case RC_ADDR(0x000100eeu): goto L_100EE;
    case RC_ADDR(0x000100f2u): goto L_100F2;
    case RC_ADDR(0x000100f6u): goto L_100F6;
    case RC_ADDR(0x000100fau): goto L_100FA;
    case RC_ADDR(0x000100feu): goto L_100FE;
    case RC_ADDR(0x00010100u): goto L_10100;
    case RC_ADDR(0x00010104u): goto L_10104;
    case RC_ADDR(0x0001010au): goto L_1010A;
    case RC_ADDR(0x0001010eu): goto L_1010E;
    case RC_ADDR(0x00010112u): goto L_10112;
    case RC_ADDR(0x00010114u): goto L_10114;
    case RC_ADDR(0x00010118u): goto L_10118;
    case RC_ADDR(0x0001011eu): goto L_1011E;
    case RC_ADDR(0x00010122u): goto L_10122;
    case RC_ADDR(0x00010126u): goto L_10126;
    case RC_ADDR(0x0001012au): goto L_1012A;
    case RC_ADDR(0x0001012cu): goto L_1012C;
    case RC_ADDR(0x0001012eu): goto L_1012E;
    case RC_ADDR(0x00010130u): goto L_10130;
    case RC_ADDR(0x00010134u): goto L_10134;
    case RC_ADDR(0x00010138u): goto L_10138;
    case RC_ADDR(0x0001013au): goto L_1013A;
    case RC_ADDR(0x0001013eu): goto L_1013E;
    case RC_ADDR(0x00010140u): goto L_10140;
    case RC_ADDR(0x00010144u): goto L_10144;
    case RC_ADDR(0x00010148u): goto L_10148;
    case RC_ADDR(0x0001014cu): goto L_1014C;
    case RC_ADDR(0x00010150u): goto L_10150;
    case RC_ADDR(0x00010156u): goto L_10156;
    case RC_ADDR(0x0001015eu): goto L_1015E;
    case RC_ADDR(0x00010162u): goto L_10162;
    case RC_ADDR(0x00010166u): goto L_10166;
    case RC_ADDR(0x0001016au): goto L_1016A;
    case RC_ADDR(0x0001016cu): goto L_1016C;
    case RC_ADDR(0x00010170u): goto L_10170;
    case RC_ADDR(0x00010174u): goto L_10174;
    case RC_ADDR(0x00010178u): goto L_10178;
    case RC_ADDR(0x0001017au): goto L_1017A;
    case RC_ADDR(0x0001017cu): goto L_1017C;
    case RC_ADDR(0x00010180u): goto L_10180;
    case RC_ADDR(0x00010186u): goto L_10186;
    case RC_ADDR(0x0001018cu): goto L_1018C;
    case RC_ADDR(0x00010190u): goto L_10190;
    case RC_ADDR(0x00010192u): goto L_10192;
    case RC_ADDR(0x00010194u): goto L_10194;
    case RC_ADDR(0x00010198u): goto L_10198;
    case RC_ADDR(0x0001019cu): goto L_1019C;
    case RC_ADDR(0x000101a0u): goto L_101A0;
    case RC_ADDR(0x000101a2u): goto L_101A2;
    case RC_ADDR(0x000101a6u): goto L_101A6;
    case RC_ADDR(0x000101a8u): goto L_101A8;
    case RC_ADDR(0x000101aau): goto L_101AA;
    case RC_ADDR(0x000101aeu): goto L_101AE;
    case RC_ADDR(0x000101b2u): goto L_101B2;
    case RC_ADDR(0x000101b6u): goto L_101B6;
    case RC_ADDR(0x000101b8u): goto L_101B8;
    case RC_ADDR(0x000101bau): goto L_101BA;
    case RC_ADDR(0x000101beu): goto L_101BE;
    case RC_ADDR(0x000101c2u): goto L_101C2;
    case RC_ADDR(0x000101c6u): goto L_101C6;
    case RC_ADDR(0x000101c8u): goto L_101C8;
    case RC_ADDR(0x000101ccu): goto L_101CC;
    case RC_ADDR(0x000101d0u): goto L_101D0;
    case RC_ADDR(0x000101d2u): goto L_101D2;
    case RC_ADDR(0x000101d6u): goto L_101D6;
    case RC_ADDR(0x000101d8u): goto L_101D8;
    case RC_ADDR(0x000101dau): goto L_101DA;
    case RC_ADDR(0x000101dcu): goto L_101DC;
    case RC_ADDR(0x000101e0u): goto L_101E0;
    case RC_ADDR(0x000101e6u): goto L_101E6;
    case RC_ADDR(0x000101eau): goto L_101EA;
    case RC_ADDR(0x000101ecu): goto L_101EC;
    case RC_ADDR(0x000101eeu): goto L_101EE;
    case RC_ADDR(0x000101f2u): goto L_101F2;
    case RC_ADDR(0x000101f6u): goto L_101F6;
    case RC_ADDR(0x000101fau): goto L_101FA;
    case RC_ADDR(0x000101fcu): goto L_101FC;
    case RC_ADDR(0x000101feu): goto L_101FE;
    case RC_ADDR(0x00010202u): goto L_10202;
    case RC_ADDR(0x00010206u): goto L_10206;
    case RC_ADDR(0x0001020au): goto L_1020A;
    case RC_ADDR(0x0001020eu): goto L_1020E;
    case RC_ADDR(0x00010212u): goto L_10212;
    case RC_ADDR(0x00010216u): goto L_10216;
    case RC_ADDR(0x0001021au): goto L_1021A;
    case RC_ADDR(0x0001021cu): goto L_1021C;
    case RC_ADDR(0x0001021eu): goto L_1021E;
    case RC_ADDR(0x00010220u): goto L_10220;
    case RC_ADDR(0x00010224u): goto L_10224;
    case RC_ADDR(0x00010228u): goto L_10228;
    case RC_ADDR(0x0001022cu): goto L_1022C;
    case RC_ADDR(0x00010230u): goto L_10230;
    case RC_ADDR(0x00010232u): goto L_10232;
    case RC_ADDR(0x00010234u): goto L_10234;
    case RC_ADDR(0x00010238u): goto L_10238;
    case RC_ADDR(0x0001023cu): goto L_1023C;
    case RC_ADDR(0x00010240u): goto L_10240;
    case RC_ADDR(0x00010244u): goto L_10244;
    case RC_ADDR(0x00010246u): goto L_10246;
    case RC_ADDR(0x0001024au): goto L_1024A;
    case RC_ADDR(0x0001024eu): goto L_1024E;
    case RC_ADDR(0x00010252u): goto L_10252;
    case RC_ADDR(0x00010256u): goto L_10256;
    case RC_ADDR(0x0001025au): goto L_1025A;
    case RC_ADDR(0x0001025eu): goto L_1025E;
    case RC_ADDR(0x00010262u): goto L_10262;
    case RC_ADDR(0x00010266u): goto L_10266;
    case RC_ADDR(0x0001026au): goto L_1026A;
    case RC_ADDR(0x0001026eu): goto L_1026E;
    case RC_ADDR(0x00010272u): goto L_10272;
    case RC_ADDR(0x00010276u): goto L_10276;
    case RC_ADDR(0x00010278u): goto L_10278;
    case RC_ADDR(0x0001027cu): goto L_1027C;
    case RC_ADDR(0x00010280u): goto L_10280;
    case RC_ADDR(0x00010284u): goto L_10284;
    case RC_ADDR(0x00010288u): goto L_10288;
    case RC_ADDR(0x0001028au): goto L_1028A;
    case RC_ADDR(0x0001028eu): goto L_1028E;
    case RC_ADDR(0x00010292u): goto L_10292;
    case RC_ADDR(0x00010296u): goto L_10296;
    case RC_ADDR(0x0001029au): goto L_1029A;
    case RC_ADDR(0x0001029cu): goto L_1029C;
    case RC_ADDR(0x0001029eu): goto L_1029E;
    case RC_ADDR(0x000102a2u): goto L_102A2;
    case RC_ADDR(0x000102a6u): goto L_102A6;
    case RC_ADDR(0x000102a8u): goto L_102A8;
    case RC_ADDR(0x000102aau): goto L_102AA;
    case RC_ADDR(0x000102aeu): goto L_102AE;
    case RC_ADDR(0x000102b0u): goto L_102B0;
    case RC_ADDR(0x000102b2u): goto L_102B2;
    case RC_ADDR(0x000102b6u): goto L_102B6;
    case RC_ADDR(0x000102bau): goto L_102BA;
    case RC_ADDR(0x000102beu): goto L_102BE;
    case RC_ADDR(0x000102c0u): goto L_102C0;
    case RC_ADDR(0x000102c2u): goto L_102C2;
    case RC_ADDR(0x000102c6u): goto L_102C6;
    case RC_ADDR(0x000102c8u): goto L_102C8;
    case RC_ADDR(0x000102ceu): goto L_102CE;
    case RC_ADDR(0x000102d2u): goto L_102D2;
    case RC_ADDR(0x000102d8u): goto L_102D8;
    case RC_ADDR(0x000102dcu): goto L_102DC;
    case RC_ADDR(0x000102deu): goto L_102DE;
    case RC_ADDR(0x000102e0u): goto L_102E0;
    case RC_ADDR(0x000102e4u): goto L_102E4;
    case RC_ADDR(0x000102e8u): goto L_102E8;
    case RC_ADDR(0x000102ecu): goto L_102EC;
    case RC_ADDR(0x000102eeu): goto L_102EE;
    case RC_ADDR(0x000102f2u): goto L_102F2;
    case RC_ADDR(0x000102f4u): goto L_102F4;
    case RC_ADDR(0x000102f6u): goto L_102F6;
    case RC_ADDR(0x000102fau): goto L_102FA;
    case RC_ADDR(0x000102feu): goto L_102FE;
    case RC_ADDR(0x00010302u): goto L_10302;
    case RC_ADDR(0x00010306u): goto L_10306;
    case RC_ADDR(0x00010308u): goto L_10308;
    case RC_ADDR(0x0001030au): goto L_1030A;
    case RC_ADDR(0x0001030eu): goto L_1030E;
    case RC_ADDR(0x00010312u): goto L_10312;
    case RC_ADDR(0x00010316u): goto L_10316;
    case RC_ADDR(0x0001031au): goto L_1031A;
    case RC_ADDR(0x0001031eu): goto L_1031E;
    case RC_ADDR(0x00010322u): goto L_10322;
    case RC_ADDR(0x00010324u): goto L_10324;
    case RC_ADDR(0x00010326u): goto L_10326;
    case RC_ADDR(0x0001032au): goto L_1032A;
    case RC_ADDR(0x0001032eu): goto L_1032E;
    case RC_ADDR(0x00010334u): goto L_10334;
    case RC_ADDR(0x00010338u): goto L_10338;
    case RC_ADDR(0x0001033au): goto L_1033A;
    case RC_ADDR(0x0001033cu): goto L_1033C;
    case RC_ADDR(0x00010340u): goto L_10340;
    case RC_ADDR(0x00010344u): goto L_10344;
    case RC_ADDR(0x0001034au): goto L_1034A;
    case RC_ADDR(0x0001034eu): goto L_1034E;
    case RC_ADDR(0x00010350u): goto L_10350;
    case RC_ADDR(0x00010354u): goto L_10354;
    case RC_ADDR(0x00010358u): goto L_10358;
    case RC_ADDR(0x0001035cu): goto L_1035C;
    case RC_ADDR(0x00010360u): goto L_10360;
    case RC_ADDR(0x00010364u): goto L_10364;
    case RC_ADDR(0x00010368u): goto L_10368;
    case RC_ADDR(0x0001036cu): goto L_1036C;
    case RC_ADDR(0x00010370u): goto L_10370;
    case RC_ADDR(0x00010374u): goto L_10374;
    case RC_ADDR(0x00010378u): goto L_10378;
    case RC_ADDR(0x0001037cu): goto L_1037C;
    case RC_ADDR(0x00010380u): goto L_10380;
    case RC_ADDR(0x00010382u): goto L_10382;
    case RC_ADDR(0x00010386u): goto L_10386;
    case RC_ADDR(0x0001038au): goto L_1038A;
    case RC_ADDR(0x0001038eu): goto L_1038E;
    case RC_ADDR(0x00010392u): goto L_10392;
    case RC_ADDR(0x00010394u): goto L_10394;
    case RC_ADDR(0x00010398u): goto L_10398;
    case RC_ADDR(0x0001039au): goto L_1039A;
    case RC_ADDR(0x000103a2u): goto L_103A2;
    case RC_ADDR(0x000103a6u): goto L_103A6;
    case RC_ADDR(0x000103a8u): goto L_103A8;
    case RC_ADDR(0x000103aau): goto L_103AA;
    case RC_ADDR(0x000103aeu): goto L_103AE;
    case RC_ADDR(0x000103b4u): goto L_103B4;
    case RC_ADDR(0x000103bau): goto L_103BA;
    case RC_ADDR(0x000103beu): goto L_103BE;
    case RC_ADDR(0x000103c0u): goto L_103C0;
    case RC_ADDR(0x000103c2u): goto L_103C2;
    case RC_ADDR(0x000103c6u): goto L_103C6;
    case RC_ADDR(0x000103cau): goto L_103CA;
    case RC_ADDR(0x000103ceu): goto L_103CE;
    case RC_ADDR(0x000103d0u): goto L_103D0;
    case RC_ADDR(0x000103d4u): goto L_103D4;
    case RC_ADDR(0x000103d6u): goto L_103D6;
    case RC_ADDR(0x000103d8u): goto L_103D8;
    case RC_ADDR(0x000103dcu): goto L_103DC;
    case RC_ADDR(0x000103e0u): goto L_103E0;
    case RC_ADDR(0x000103e4u): goto L_103E4;
    case RC_ADDR(0x000103e6u): goto L_103E6;
    case RC_ADDR(0x000103e8u): goto L_103E8;
    case RC_ADDR(0x000103ecu): goto L_103EC;
    case RC_ADDR(0x000103f0u): goto L_103F0;
    case RC_ADDR(0x000103f4u): goto L_103F4;
    case RC_ADDR(0x000103f6u): goto L_103F6;
    case RC_ADDR(0x000103f8u): goto L_103F8;
    case RC_ADDR(0x000103fcu): goto L_103FC;
    case RC_ADDR(0x00010400u): goto L_10400;
    case RC_ADDR(0x00010404u): goto L_10404;
    case RC_ADDR(0x00010408u): goto L_10408;
    case RC_ADDR(0x0001040cu): goto L_1040C;
    case RC_ADDR(0x00010410u): goto L_10410;
    case RC_ADDR(0x00010414u): goto L_10414;
    case RC_ADDR(0x00010416u): goto L_10416;
    case RC_ADDR(0x00010418u): goto L_10418;
    case RC_ADDR(0x0001041au): goto L_1041A;
    case RC_ADDR(0x0001041eu): goto L_1041E;
    case RC_ADDR(0x00010420u): goto L_10420;
    case RC_ADDR(0x00010424u): goto L_10424;
    case RC_ADDR(0x00010426u): goto L_10426;
    case RC_ADDR(0x00010428u): goto L_10428;
    case RC_ADDR(0x0001042cu): goto L_1042C;
    case RC_ADDR(0x00010434u): goto L_10434;
    case RC_ADDR(0x0001043au): goto L_1043A;
    case RC_ADDR(0x0001043eu): goto L_1043E;
    case RC_ADDR(0x00010440u): goto L_10440;
    case RC_ADDR(0x00010442u): goto L_10442;
    case RC_ADDR(0x00010446u): goto L_10446;
    case RC_ADDR(0x0001044au): goto L_1044A;
    case RC_ADDR(0x0001044eu): goto L_1044E;
    case RC_ADDR(0x00010450u): goto L_10450;
    case RC_ADDR(0x00010454u): goto L_10454;
    case RC_ADDR(0x00010456u): goto L_10456;
    case RC_ADDR(0x00010458u): goto L_10458;
    case RC_ADDR(0x0001045cu): goto L_1045C;
    case RC_ADDR(0x00010460u): goto L_10460;
    case RC_ADDR(0x00010464u): goto L_10464;
    case RC_ADDR(0x00010466u): goto L_10466;
    case RC_ADDR(0x00010468u): goto L_10468;
    case RC_ADDR(0x0001046cu): goto L_1046C;
    case RC_ADDR(0x00010470u): goto L_10470;
    case RC_ADDR(0x00010474u): goto L_10474;
    case RC_ADDR(0x00010478u): goto L_10478;
    case RC_ADDR(0x0001047au): goto L_1047A;
    case RC_ADDR(0x0001047cu): goto L_1047C;
    case RC_ADDR(0x00010480u): goto L_10480;
    case RC_ADDR(0x00010484u): goto L_10484;
    case RC_ADDR(0x00010488u): goto L_10488;
    case RC_ADDR(0x0001048au): goto L_1048A;
    case RC_ADDR(0x0001048cu): goto L_1048C;
    case RC_ADDR(0x00010490u): goto L_10490;
    case RC_ADDR(0x00010494u): goto L_10494;
    case RC_ADDR(0x00010498u): goto L_10498;
    case RC_ADDR(0x0001049au): goto L_1049A;
    case RC_ADDR(0x0001049eu): goto L_1049E;
    case RC_ADDR(0x000104a2u): goto L_104A2;
    case RC_ADDR(0x000104a6u): goto L_104A6;
    case RC_ADDR(0x000104aau): goto L_104AA;
    case RC_ADDR(0x000104aeu): goto L_104AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10070:
    /* 00010070   4  link.w A5,#ffffffd8 */
    c->pc = RC_ADDR(0x00010070u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x28u;

L_10074:
    /* 00010074   4  tst.l (ffffa422,A4) */
    c->pc = RC_ADDR(0x00010074u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    rc_set_nzvc(c, t0, RC_L);

L_10078:
    /* 00010078   2  beq 0001007e */
    c->pc = RC_ADDR(0x00010078u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1007E;

L_1007A:
    /* 0001007a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001007au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1007C:
    /* 0001007c   2  rts */
    c->pc = RC_ADDR(0x0001007cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1007E:
    /* 0001007e   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001007eu);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x00010082u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_10082:
    /* 00010082   4  pea (000104b2) */
    c->pc = RC_ADDR(0x00010082u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000104b2u));

L_10086:
    /* 00010086   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00010086u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0001008au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_1008A:
    /* 0001008a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001008au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1008C:
    /* 0001008c   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0001008cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_10090:
    /* 00010090   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00010090u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_10094:
    /* 00010094   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00010094u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10096:
    /* 00010096   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00010096u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0001009au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1009A:
    /* 0001009a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001009au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1009C:
    /* 0001009c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001009cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_100A0:
    /* 000100a0   2  beq 000100dc */
    c->pc = RC_ADDR(0x000100a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_100DC;

L_100A2:
    /* 000100a2   6  move.l (14bc,A4),(1418,A4) */
    c->pc = RC_ADDR(0x000100a2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14bcu));
    rc_wr32(c, m, (c->a[4] + 0x1418u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_100A8:
    /* 000100a8   6  pea (00010001).l */
    c->pc = RC_ADDR(0x000100a8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_100AE:
    /* 000100ae   4  move.l (1418,A4),-(A7) */
    c->pc = RC_ADDR(0x000100aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1418u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_100B2:
    /* 000100b2   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000100b2u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000100b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_100B6:
    /* 000100b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000100b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_100B8:
    /* 000100b8   4  move.l D0,(ffffa422,A4) */
    c->pc = RC_ADDR(0x000100b8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5bdeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_100BC:
    /* 000100bc   4  move.l (1418,A4),-(A7) */
    c->pc = RC_ADDR(0x000100bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1418u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_100C0:
    /* 000100c0   4  move.l (ffffa422,A4),-(A7) */
    c->pc = RC_ADDR(0x000100c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_100C4:
    /* 000100c4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000100c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_100C8:
    /* 000100c8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000100c8u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x000100ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_100CC:
    /* 000100cc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000100ccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_100D0:
    /* 000100d0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000100d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_100D4:
    /* 000100d4   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x000100d4u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000100d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_100D8:
    /* 000100d8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000100d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_100DA:
    /* 000100da   2  bra 000100e0 */
    c->pc = RC_ADDR(0x000100dau);
    rc_step(c, m, 10);
    goto L_100E0;

L_100DC:
    /* 000100dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000100dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_100DE:
    /* 000100de   2  bra 0001007a */
    c->pc = RC_ADDR(0x000100deu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1007A;

L_100E0:
    /* 000100e0   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x000100e0u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000100e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_100E4:
    /* 000100e4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000100e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_100E8:
    /* 000100e8   6  move.w (4,A0),(ffffa426,A4) */
    c->pc = RC_ADDR(0x000100e8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[4] - 0x5bdau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_100EE:
    /* 000100ee   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000100eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_100F2:
    /* 000100f2   4  bra 0001049e */
    c->pc = RC_ADDR(0x000100f2u);
    rc_step(c, m, 10);
    goto L_1049E;

L_100F6:
    /* 000100f6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000100f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_100FA:
    /* 000100fa   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000100fau);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_100FE:
    /* 000100fe   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000100feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10100:
    /* 00010100   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00010100u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_10104:
    /* 00010104   6  move.l (6,A0),(ffffffde,A5) */
    c->pc = RC_ADDR(0x00010104u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1010A:
    /* 0001010a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001010au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1010E:
    /* 0001010e   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0001010eu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_10112:
    /* 00010112   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010112u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10114:
    /* 00010114   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00010114u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_10118:
    /* 00010118   6  move.l (a,A0),(ffffffda,A5) */
    c->pc = RC_ADDR(0x00010118u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xau));
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1011E:
    /* 0001011e   4  pea (000104be) */
    c->pc = RC_ADDR(0x0001011eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000104beu));

L_10122:
    /* 00010122   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x00010122u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10126:
    /* 00010126   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00010126u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0001012au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_1012A:
    /* 0001012a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001012au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1012C:
    /* 0001012c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001012cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1012E:
    /* 0001012e   2  beq 00010140 */
    c->pc = RC_ADDR(0x0001012eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10140;

L_10130:
    /* 00010130   4  pea (000104c4) */
    c->pc = RC_ADDR(0x00010130u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000104c4u));

L_10134:
    /* 00010134   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00010134u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00010138u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_10138:
    /* 00010138   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00010138u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1013A:
    /* 0001013a   4  clr.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x0001013au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1013E:
    /* 0001013e   2  bra 0001015e */
    c->pc = RC_ADDR(0x0001013eu);
    rc_step(c, m, 10);
    goto L_1015E;

L_10140:
    /* 00010140   4  lea (000104cf),A0 */
    c->pc = RC_ADDR(0x00010140u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000104cfu);

L_10144:
    /* 00010144   4  move.l A0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x00010144u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10148:
    /* 00010148   4  lea (000104e1),A0 */
    c->pc = RC_ADDR(0x00010148u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000104e1u);

L_1014C:
    /* 0001014c   4  move.l A0,(ffffffda,A5) */
    c->pc = RC_ADDR(0x0001014cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10150:
    /* 00010150   6  move.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x00010150u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10156:
    /* 00010156   8  move.l #20,(14bc,A4) */
    c->pc = RC_ADDR(0x00010156u);
    rc_step(c, m, 24);
    t0 = 0x00000020u;
    rc_wr32(c, m, (c->a[4] + 0x14bcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1015E:
    /* 0001015e   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x0001015eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_10162:
    /* 00010162   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x00010162u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10166:
    /* 00010166   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00010166u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x0001016au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_1016A:
    /* 0001016a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001016au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1016C:
    /* 0001016c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001016cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10170:
    /* 00010170   4  beq 0001021e */
    c->pc = RC_ADDR(0x00010170u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1021E;

L_10174:
    /* 00010174   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10178:
    /* 00010178   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010178u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1017A:
    /* 0001017a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001017au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1017C:
    /* 0001017c   4  lea (141c,A4),A0 */
    c->pc = RC_ADDR(0x0001017cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x141cu);

L_10180:
    /* 00010180   6  move.l (14bc,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00010180u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14bcu));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10186:
    /* 00010186   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00010186u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1018C:
    /* 0001018c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001018cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10190:
    /* 00010190   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010190u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10192:
    /* 00010192   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010192u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10194:
    /* 00010194   4  lea (141c,A4),A0 */
    c->pc = RC_ADDR(0x00010194u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x141cu);

L_10198:
    /* 00010198   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010198u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1019C:
    /* 0001019c   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001019cu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000101a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_101A0:
    /* 000101a0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000101a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_101A2:
    /* 000101a2   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000101a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101A6:
    /* 000101a6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000101a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_101A8:
    /* 000101a8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000101a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_101AA:
    /* 000101aa   4  lea (1494,A4),A0 */
    c->pc = RC_ADDR(0x000101aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1494u);

L_101AE:
    /* 000101ae   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000101aeu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_101B2:
    /* 000101b2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000101b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101B6:
    /* 000101b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000101b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_101B8:
    /* 000101b8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000101b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_101BA:
    /* 000101ba   4  lea (1494,A4),A0 */
    c->pc = RC_ADDR(0x000101bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1494u);

L_101BE:
    /* 000101be   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000101beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101C2:
    /* 000101c2   4  muls.w #a,D1 */
    c->pc = RC_ADDR(0x000101c2u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 1, t0);

L_101C6:
    /* 000101c6   2  movea.l D1,A1 */
    c->pc = RC_ADDR(0x000101c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_101C8:
    /* 000101c8   4  adda.l (8,A5),A1 */
    c->pc = RC_ADDR(0x000101c8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] += t0;

L_101CC:
    /* 000101cc   4  move.w (e,A1),D1 */
    c->pc = RC_ADDR(0x000101ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101D0:
    /* 000101d0   2  ext.l D1 */
    c->pc = RC_ADDR(0x000101d0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_101D2:
    /* 000101d2   4  divs.w #4,D1 */
    c->pc = RC_ADDR(0x000101d2u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 1, t0);

L_101D6:
    /* 000101d6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000101d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_101D8:
    /* 000101d8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000101d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_101DA:
    /* 000101da   2  movea.l D1,A1 */
    c->pc = RC_ADDR(0x000101dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_101DC:
    /* 000101dc   4  adda.l (ffffa422,A4),A1 */
    c->pc = RC_ADDR(0x000101dcu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    c->a[1] += t0;

L_101E0:
    /* 000101e0   6  move.l (0,A0,D0.w),(40,A1) */
    c->pc = RC_ADDR(0x000101e0u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[1] + 0x40u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_101E6:
    /* 000101e6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000101e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101EA:
    /* 000101ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000101eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_101EC:
    /* 000101ec   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000101ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_101EE:
    /* 000101ee   4  lea (141c,A4),A0 */
    c->pc = RC_ADDR(0x000101eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x141cu);

L_101F2:
    /* 000101f2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000101f2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_101F6:
    /* 000101f6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000101f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_101FA:
    /* 000101fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000101fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_101FC:
    /* 000101fc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000101fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_101FE:
    /* 000101fe   4  lea (1494,A4),A0 */
    c->pc = RC_ADDR(0x000101feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1494u);

L_10202:
    /* 00010202   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010202u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10206:
    /* 00010206   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010206u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1020A:
    /* 0001020a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001020au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001020eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1020E:
    /* 0001020e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001020eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10212:
    /* 00010212   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010212u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10216:
    /* 00010216   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00010216u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001021au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_1021A:
    /* 0001021a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001021au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1021C:
    /* 0001021c   2  bra 00010224 */
    c->pc = RC_ADDR(0x0001021cu);
    rc_step(c, m, 10);
    goto L_10224;

L_1021E:
    /* 0001021e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001021eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10220:
    /* 00010220   4  bra 0001007a */
    c->pc = RC_ADDR(0x00010220u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1007A;

L_10224:
    /* 00010224   4  pea (000104f2) */
    c->pc = RC_ADDR(0x00010224u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000104f2u));

L_10228:
    /* 00010228   4  move.l (ffffffda,A5),-(A7) */
    c->pc = RC_ADDR(0x00010228u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1022C:
    /* 0001022c   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0001022cu);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00010230u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_10230:
    /* 00010230   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010230u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10232:
    /* 00010232   2  tst.w D0 */
    c->pc = RC_ADDR(0x00010232u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_10234:
    /* 00010234   4  beq 00010420 */
    c->pc = RC_ADDR(0x00010234u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10420;

L_10238:
    /* 00010238   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00010238u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_1023C:
    /* 0001023c   4  move.l (ffffffda,A5),-(A7) */
    c->pc = RC_ADDR(0x0001023cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10240:
    /* 00010240   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00010240u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00010244u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_10244:
    /* 00010244   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010244u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10246:
    /* 00010246   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00010246u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1024A:
    /* 0001024a   4  beq 00010418 */
    c->pc = RC_ADDR(0x0001024au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10418;

L_1024E:
    /* 0001024e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0001024eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_10252:
    /* 00010252   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x00010252u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_10256:
    /* 00010256   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010256u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1025A:
    /* 0001025a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001025au);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001025eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1025E:
    /* 0001025e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001025eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10262:
    /* 00010262   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00010262u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_10266:
    /* 00010266   4  pea (ffffffee,A5) */
    c->pc = RC_ADDR(0x00010266u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x12u));

L_1026A:
    /* 0001026a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001026au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1026E:
    /* 0001026e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001026eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00010272u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_10272:
    /* 00010272   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00010272u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10276:
    /* 00010276   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00010276u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10278:
    /* 00010278   4  pea (fffffffa).l */
    c->pc = RC_ADDR(0x00010278u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffau);

L_1027C:
    /* 0001027c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001027cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10280:
    /* 00010280   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x00010280u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00010284u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_10284:
    /* 00010284   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00010284u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10288:
    /* 00010288   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010288u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1028A:
    /* 0001028a   4  move.b (fffffff1,A5),D0 */
    c->pc = RC_ADDR(0x0001028au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1028E:
    /* 0001028e   4  cmp.w #ff,D0 */
    c->pc = RC_ADDR(0x0001028eu);
    rc_step(c, m, 8);
    t0 = 0x000000ffu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10292:
    /* 00010292   4  bne 00010394 */
    c->pc = RC_ADDR(0x00010292u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10394;

L_10296:
    /* 00010296   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00010296u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1029A:
    /* 0001029a   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x0001029au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_1029C:
    /* 0001029c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001029cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1029E:
    /* 0001029e   4  move.l D0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x0001029eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_102A2:
    /* 000102a2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000102a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_102A6:
    /* 000102a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000102a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_102A8:
    /* 000102a8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000102a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_102AA:
    /* 000102aa   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x000102aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_102AE:
    /* 000102ae   2  moveq #2,D1 */
    c->pc = RC_ADDR(0x000102aeu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000002u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_102B0:
    /* 000102b0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000102b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_102B2:
    /* 000102b2   4  move.l (ffffffe2,A5),D0 */
    c->pc = RC_ADDR(0x000102b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_102B6:
    /* 000102b6   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x000102b6u);
    rc_step(c, m, 18);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x000102bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002324eu);
    return;

L_102BA:
    /* 000102ba   4  move.l (ffffffe2,A5),D1 */
    c->pc = RC_ADDR(0x000102bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_102BE:
    /* 000102be   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000102beu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_102C0:
    /* 000102c0   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000102c0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_102C2:
    /* 000102c2   4  add.l (ffffffe2,A5),D0 */
    c->pc = RC_ADDR(0x000102c2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_102C6:
    /* 000102c6   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000102c6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_102C8:
    /* 000102c8   6  add.l #3e,D0 */
    c->pc = RC_ADDR(0x000102c8u);
    rc_step(c, m, 16);
    t0 = 0x0000003eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_102CE:
    /* 000102ce   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000102ceu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_102D2:
    /* 000102d2   6  pea (00010002).l */
    c->pc = RC_ADDR(0x000102d2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_102D8:
    /* 000102d8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000102d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_102DC:
    /* 000102dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000102dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_102DE:
    /* 000102de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000102deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_102E0:
    /* 000102e0   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x000102e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_102E4:
    /* 000102e4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000102e4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_102E8:
    /* 000102e8   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000102e8u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000102ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_102EC:
    /* 000102ec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000102ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_102EE:
    /* 000102ee   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000102eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_102F2:
    /* 000102f2   2  ext.l D1 */
    c->pc = RC_ADDR(0x000102f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_102F4:
    /* 000102f4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000102f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_102F6:
    /* 000102f6   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x000102f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_102FA:
    /* 000102fa   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000102fau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_102FE:
    /* 000102fe   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x000102feu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_10302:
    /* 00010302   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010302u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10306:
    /* 00010306   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010306u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10308:
    /* 00010308   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010308u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1030A:
    /* 0001030a   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x0001030au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_1030E:
    /* 0001030e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001030eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10312:
    /* 00010312   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010312u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10316:
    /* 00010316   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00010316u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001031au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1031A:
    /* 0001031a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001031au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1031E:
    /* 0001031e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001031eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10322:
    /* 00010322   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010322u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10324:
    /* 00010324   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010324u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10326:
    /* 00010326   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x00010326u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_1032A:
    /* 0001032a   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0001032au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1032E:
    /* 0001032e   6  move.b #6,(5,A1) */
    c->pc = RC_ADDR(0x0001032eu);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr8(c, m, (c->a[1] + 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10334:
    /* 00010334   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010334u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10338:
    /* 00010338   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010338u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1033A:
    /* 0001033a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001033au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1033C:
    /* 0001033c   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x0001033cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_10340:
    /* 00010340   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00010340u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_10344:
    /* 00010344   6  adda.l #3e,A1 */
    c->pc = RC_ADDR(0x00010344u);
    rc_step(c, m, 16);
    t0 = 0x0000003eu;
    c->a[1] += t0;

L_1034A:
    /* 0001034a   4  move.l A1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001034au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1034E:
    /* 0001034e   2  moveq #2,D1 */
    c->pc = RC_ADDR(0x0001034eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000002u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10350:
    /* 00010350   4  move.l (ffffffe2,A5),D0 */
    c->pc = RC_ADDR(0x00010350u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10354:
    /* 00010354   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x00010354u);
    rc_step(c, m, 18);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x00010358u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002324eu);
    return;

L_10358:
    /* 00010358   4  add.l (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00010358u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1035C:
    /* 0001035c   4  move.l D0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x0001035cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10360:
    /* 00010360   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00010360u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10364:
    /* 00010364   4  move.l (ffffffe6,A5),-(A7) */
    c->pc = RC_ADDR(0x00010364u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10368:
    /* 00010368   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010368u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1036C:
    /* 0001036c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001036cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00010370u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_10370:
    /* 00010370   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00010370u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_10374:
    /* 00010374   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00010374u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10378:
    /* 00010378   4  movea.l (ffffffe6,A5),A0 */
    c->pc = RC_ADDR(0x00010378u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_1037C:
    /* 0001037c   4  adda.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0001037cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] += t0;

L_10380:
    /* 00010380   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00010380u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10382:
    /* 00010382   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x00010382u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10386:
    /* 00010386   4  move.l (ffffffe6,A5),-(A7) */
    c->pc = RC_ADDR(0x00010386u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1038A:
    /* 0001038a   4  jsr (0001003a) */
    c->pc = RC_ADDR(0x0001038au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001038eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001003au);
    return;

L_1038E:
    /* 0001038e   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0001038eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_10392:
    /* 00010392   2  bra 0001040c */
    c->pc = RC_ADDR(0x00010392u);
    rc_step(c, m, 10);
    goto L_1040C;

L_10394:
    /* 00010394   4  tst.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00010394u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_10398:
    /* 00010398   2  beq 000103a2 */
    c->pc = RC_ADDR(0x00010398u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_103A2;

L_1039A:
    /* 0001039a   8  move.l #1622,(14bc,A4) */
    c->pc = RC_ADDR(0x0001039au);
    rc_step(c, m, 24);
    t0 = 0x00001622u;
    rc_wr32(c, m, (c->a[4] + 0x14bcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_103A2:
    /* 000103a2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000103a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_103A6:
    /* 000103a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000103a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_103A8:
    /* 000103a8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000103a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_103AA:
    /* 000103aa   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x000103aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_103AE:
    /* 000103ae   6  move.l (14bc,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000103aeu);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14bcu));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_103B4:
    /* 000103b4   6  pea (00010002).l */
    c->pc = RC_ADDR(0x000103b4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_103BA:
    /* 000103ba   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000103bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_103BE:
    /* 000103be   2  ext.l D0 */
    c->pc = RC_ADDR(0x000103beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_103C0:
    /* 000103c0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000103c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_103C2:
    /* 000103c2   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x000103c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_103C6:
    /* 000103c6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000103c6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_103CA:
    /* 000103ca   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000103cau);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000103ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_103CE:
    /* 000103ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000103ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_103D0:
    /* 000103d0   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x000103d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_103D4:
    /* 000103d4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000103d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_103D6:
    /* 000103d6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000103d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_103D8:
    /* 000103d8   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x000103d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_103DC:
    /* 000103dc   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000103dcu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_103E0:
    /* 000103e0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000103e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_103E4:
    /* 000103e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000103e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_103E6:
    /* 000103e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000103e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_103E8:
    /* 000103e8   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x000103e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_103EC:
    /* 000103ec   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000103ecu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_103F0:
    /* 000103f0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000103f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_103F4:
    /* 000103f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000103f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_103F6:
    /* 000103f6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000103f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_103F8:
    /* 000103f8   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x000103f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_103FC:
    /* 000103fc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000103fcu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10400:
    /* 00010400   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00010400u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10404:
    /* 00010404   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00010404u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00010408u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_10408:
    /* 00010408   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00010408u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1040C:
    /* 0001040c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001040cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10410:
    /* 00010410   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00010410u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00010414u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_10414:
    /* 00010414   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00010414u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10416:
    /* 00010416   2  bra 0001041e */
    c->pc = RC_ADDR(0x00010416u);
    rc_step(c, m, 10);
    goto L_1041E;

L_10418:
    /* 00010418   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00010418u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1041A:
    /* 0001041a   4  bra 0001007a */
    c->pc = RC_ADDR(0x0001041au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1007A;

L_1041E:
    /* 0001041e   2  bra 00010474 */
    c->pc = RC_ADDR(0x0001041eu);
    rc_step(c, m, 10);
    goto L_10474;

L_10420:
    /* 00010420   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010420u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10424:
    /* 00010424   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010424u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10426:
    /* 00010426   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010426u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10428:
    /* 00010428   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x00010428u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_1042C:
    /* 0001042c   8  move.l #2000,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001042cu);
    rc_step(c, m, 26);
    t0 = 0x00002000u;
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10434:
    /* 00010434   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00010434u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1043A:
    /* 0001043a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001043au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1043E:
    /* 0001043e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001043eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10440:
    /* 00010440   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010440u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10442:
    /* 00010442   4  lea (1444,A4),A0 */
    c->pc = RC_ADDR(0x00010442u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1444u);

L_10446:
    /* 00010446   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010446u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1044A:
    /* 0001044a   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001044au);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001044eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1044E:
    /* 0001044e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001044eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10450:
    /* 00010450   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00010450u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10454:
    /* 00010454   2  ext.l D1 */
    c->pc = RC_ADDR(0x00010454u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_10456:
    /* 00010456   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00010456u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_10458:
    /* 00010458   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x00010458u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_1045C:
    /* 0001045c   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0001045cu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10460:
    /* 00010460   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010460u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10464:
    /* 00010464   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010464u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10466:
    /* 00010466   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00010466u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_10468:
    /* 00010468   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x00010468u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_1046C:
    /* 0001046c   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0001046cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_10470:
    /* 00010470   4  move.b #80,(A1) */
    c->pc = RC_ADDR(0x00010470u);
    rc_step(c, m, 12);
    t0 = 0x00000080u;
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_10474:
    /* 00010474   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010474u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10478:
    /* 00010478   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010478u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1047A:
    /* 0001047a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001047au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1047C:
    /* 0001047c   4  lea (146c,A4),A0 */
    c->pc = RC_ADDR(0x0001047cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x146cu);

L_10480:
    /* 00010480   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010480u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10484:
    /* 00010484   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00010484u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10488:
    /* 00010488   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010488u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1048A:
    /* 0001048a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001048au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1048C:
    /* 0001048c   4  lea (1494,A4),A0 */
    c->pc = RC_ADDR(0x0001048cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1494u);

L_10490:
    /* 00010490   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00010490u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10494:
    /* 00010494   4  jsr (00010846) */
    c->pc = RC_ADDR(0x00010494u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010498u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010846u);
    return;

L_10498:
    /* 00010498   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00010498u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1049A:
    /* 0001049a   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001049au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1049E:
    /* 0001049e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001049eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_104A2:
    /* 000104a2   4  cmp.w (ffffa426,A4),D0 */
    c->pc = RC_ADDR(0x000104a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5bdau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_104A6:
    /* 000104a6   4  blt 000100f6 */
    c->pc = RC_ADDR(0x000104a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_100F6; }

L_104AA:
    /* 000104aa   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x000104aau);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000104aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_104AE:
    /* 000104ae   4  bra 0001007a */
    c->pc = RC_ADDR(0x000104aeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1007A;

}
