/* fn_000142ea - 884 byte(s), 246 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000142ea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000142eau): goto L_142EA;
    case RC_ADDR(0x000142eeu): goto L_142EE;
    case RC_ADDR(0x000142f2u): goto L_142F2;
    case RC_ADDR(0x000142f4u): goto L_142F4;
    case RC_ADDR(0x000142fau): goto L_142FA;
    case RC_ADDR(0x000142fcu): goto L_142FC;
    case RC_ADDR(0x00014300u): goto L_14300;
    case RC_ADDR(0x00014304u): goto L_14304;
    case RC_ADDR(0x0001430au): goto L_1430A;
    case RC_ADDR(0x0001430cu): goto L_1430C;
    case RC_ADDR(0x0001430eu): goto L_1430E;
    case RC_ADDR(0x00014312u): goto L_14312;
    case RC_ADDR(0x00014314u): goto L_14314;
    case RC_ADDR(0x0001431au): goto L_1431A;
    case RC_ADDR(0x0001431eu): goto L_1431E;
    case RC_ADDR(0x00014320u): goto L_14320;
    case RC_ADDR(0x00014324u): goto L_14324;
    case RC_ADDR(0x00014328u): goto L_14328;
    case RC_ADDR(0x0001432cu): goto L_1432C;
    case RC_ADDR(0x00014330u): goto L_14330;
    case RC_ADDR(0x00014334u): goto L_14334;
    case RC_ADDR(0x00014338u): goto L_14338;
    case RC_ADDR(0x0001433cu): goto L_1433C;
    case RC_ADDR(0x00014340u): goto L_14340;
    case RC_ADDR(0x00014344u): goto L_14344;
    case RC_ADDR(0x00014348u): goto L_14348;
    case RC_ADDR(0x0001434cu): goto L_1434C;
    case RC_ADDR(0x00014350u): goto L_14350;
    case RC_ADDR(0x00014354u): goto L_14354;
    case RC_ADDR(0x00014358u): goto L_14358;
    case RC_ADDR(0x0001435au): goto L_1435A;
    case RC_ADDR(0x0001435eu): goto L_1435E;
    case RC_ADDR(0x00014360u): goto L_14360;
    case RC_ADDR(0x00014364u): goto L_14364;
    case RC_ADDR(0x00014368u): goto L_14368;
    case RC_ADDR(0x0001436au): goto L_1436A;
    case RC_ADDR(0x0001436eu): goto L_1436E;
    case RC_ADDR(0x00014370u): goto L_14370;
    case RC_ADDR(0x00014372u): goto L_14372;
    case RC_ADDR(0x00014376u): goto L_14376;
    case RC_ADDR(0x0001437au): goto L_1437A;
    case RC_ADDR(0x0001437cu): goto L_1437C;
    case RC_ADDR(0x00014380u): goto L_14380;
    case RC_ADDR(0x00014382u): goto L_14382;
    case RC_ADDR(0x00014386u): goto L_14386;
    case RC_ADDR(0x00014388u): goto L_14388;
    case RC_ADDR(0x0001438cu): goto L_1438C;
    case RC_ADDR(0x00014390u): goto L_14390;
    case RC_ADDR(0x00014392u): goto L_14392;
    case RC_ADDR(0x00014396u): goto L_14396;
    case RC_ADDR(0x0001439au): goto L_1439A;
    case RC_ADDR(0x0001439eu): goto L_1439E;
    case RC_ADDR(0x000143a2u): goto L_143A2;
    case RC_ADDR(0x000143a6u): goto L_143A6;
    case RC_ADDR(0x000143aau): goto L_143AA;
    case RC_ADDR(0x000143aeu): goto L_143AE;
    case RC_ADDR(0x000143b2u): goto L_143B2;
    case RC_ADDR(0x000143b8u): goto L_143B8;
    case RC_ADDR(0x000143bcu): goto L_143BC;
    case RC_ADDR(0x000143beu): goto L_143BE;
    case RC_ADDR(0x000143c4u): goto L_143C4;
    case RC_ADDR(0x000143c6u): goto L_143C6;
    case RC_ADDR(0x000143cau): goto L_143CA;
    case RC_ADDR(0x000143ceu): goto L_143CE;
    case RC_ADDR(0x000143d0u): goto L_143D0;
    case RC_ADDR(0x000143d4u): goto L_143D4;
    case RC_ADDR(0x000143d6u): goto L_143D6;
    case RC_ADDR(0x000143dau): goto L_143DA;
    case RC_ADDR(0x000143dcu): goto L_143DC;
    case RC_ADDR(0x000143e0u): goto L_143E0;
    case RC_ADDR(0x000143e4u): goto L_143E4;
    case RC_ADDR(0x000143e8u): goto L_143E8;
    case RC_ADDR(0x000143ecu): goto L_143EC;
    case RC_ADDR(0x000143f0u): goto L_143F0;
    case RC_ADDR(0x000143f2u): goto L_143F2;
    case RC_ADDR(0x000143f4u): goto L_143F4;
    case RC_ADDR(0x000143fau): goto L_143FA;
    case RC_ADDR(0x000143feu): goto L_143FE;
    case RC_ADDR(0x00014400u): goto L_14400;
    case RC_ADDR(0x00014404u): goto L_14404;
    case RC_ADDR(0x00014408u): goto L_14408;
    case RC_ADDR(0x0001440au): goto L_1440A;
    case RC_ADDR(0x0001440eu): goto L_1440E;
    case RC_ADDR(0x00014412u): goto L_14412;
    case RC_ADDR(0x00014414u): goto L_14414;
    case RC_ADDR(0x00014418u): goto L_14418;
    case RC_ADDR(0x0001441eu): goto L_1441E;
    case RC_ADDR(0x00014420u): goto L_14420;
    case RC_ADDR(0x00014426u): goto L_14426;
    case RC_ADDR(0x00014428u): goto L_14428;
    case RC_ADDR(0x0001442eu): goto L_1442E;
    case RC_ADDR(0x00014434u): goto L_14434;
    case RC_ADDR(0x00014436u): goto L_14436;
    case RC_ADDR(0x0001443cu): goto L_1443C;
    case RC_ADDR(0x0001443eu): goto L_1443E;
    case RC_ADDR(0x00014444u): goto L_14444;
    case RC_ADDR(0x00014448u): goto L_14448;
    case RC_ADDR(0x0001444eu): goto L_1444E;
    case RC_ADDR(0x00014452u): goto L_14452;
    case RC_ADDR(0x00014454u): goto L_14454;
    case RC_ADDR(0x00014458u): goto L_14458;
    case RC_ADDR(0x0001445au): goto L_1445A;
    case RC_ADDR(0x0001445eu): goto L_1445E;
    case RC_ADDR(0x00014460u): goto L_14460;
    case RC_ADDR(0x00014464u): goto L_14464;
    case RC_ADDR(0x00014466u): goto L_14466;
    case RC_ADDR(0x0001446cu): goto L_1446C;
    case RC_ADDR(0x0001446eu): goto L_1446E;
    case RC_ADDR(0x00014474u): goto L_14474;
    case RC_ADDR(0x00014478u): goto L_14478;
    case RC_ADDR(0x0001447cu): goto L_1447C;
    case RC_ADDR(0x0001447eu): goto L_1447E;
    case RC_ADDR(0x00014482u): goto L_14482;
    case RC_ADDR(0x00014486u): goto L_14486;
    case RC_ADDR(0x00014488u): goto L_14488;
    case RC_ADDR(0x0001448cu): goto L_1448C;
    case RC_ADDR(0x00014490u): goto L_14490;
    case RC_ADDR(0x00014492u): goto L_14492;
    case RC_ADDR(0x00014496u): goto L_14496;
    case RC_ADDR(0x0001449au): goto L_1449A;
    case RC_ADDR(0x0001449cu): goto L_1449C;
    case RC_ADDR(0x000144a0u): goto L_144A0;
    case RC_ADDR(0x000144a2u): goto L_144A2;
    case RC_ADDR(0x000144a6u): goto L_144A6;
    case RC_ADDR(0x000144a8u): goto L_144A8;
    case RC_ADDR(0x000144acu): goto L_144AC;
    case RC_ADDR(0x000144aeu): goto L_144AE;
    case RC_ADDR(0x000144b2u): goto L_144B2;
    case RC_ADDR(0x000144b4u): goto L_144B4;
    case RC_ADDR(0x000144b8u): goto L_144B8;
    case RC_ADDR(0x000144bcu): goto L_144BC;
    case RC_ADDR(0x000144beu): goto L_144BE;
    case RC_ADDR(0x000144c4u): goto L_144C4;
    case RC_ADDR(0x000144cau): goto L_144CA;
    case RC_ADDR(0x000144ccu): goto L_144CC;
    case RC_ADDR(0x000144d0u): goto L_144D0;
    case RC_ADDR(0x000144d4u): goto L_144D4;
    case RC_ADDR(0x000144d6u): goto L_144D6;
    case RC_ADDR(0x000144d8u): goto L_144D8;
    case RC_ADDR(0x000144dcu): goto L_144DC;
    case RC_ADDR(0x000144e2u): goto L_144E2;
    case RC_ADDR(0x000144e6u): goto L_144E6;
    case RC_ADDR(0x000144eau): goto L_144EA;
    case RC_ADDR(0x000144eeu): goto L_144EE;
    case RC_ADDR(0x000144f0u): goto L_144F0;
    case RC_ADDR(0x000144f2u): goto L_144F2;
    case RC_ADDR(0x000144f8u): goto L_144F8;
    case RC_ADDR(0x000144fau): goto L_144FA;
    case RC_ADDR(0x000144fcu): goto L_144FC;
    case RC_ADDR(0x00014502u): goto L_14502;
    case RC_ADDR(0x00014504u): goto L_14504;
    case RC_ADDR(0x00014506u): goto L_14506;
    case RC_ADDR(0x0001450cu): goto L_1450C;
    case RC_ADDR(0x0001450eu): goto L_1450E;
    case RC_ADDR(0x00014510u): goto L_14510;
    case RC_ADDR(0x00014516u): goto L_14516;
    case RC_ADDR(0x0001451au): goto L_1451A;
    case RC_ADDR(0x0001451eu): goto L_1451E;
    case RC_ADDR(0x00014520u): goto L_14520;
    case RC_ADDR(0x00014524u): goto L_14524;
    case RC_ADDR(0x00014526u): goto L_14526;
    case RC_ADDR(0x00014528u): goto L_14528;
    case RC_ADDR(0x0001452eu): goto L_1452E;
    case RC_ADDR(0x00014530u): goto L_14530;
    case RC_ADDR(0x00014536u): goto L_14536;
    case RC_ADDR(0x00014538u): goto L_14538;
    case RC_ADDR(0x0001453eu): goto L_1453E;
    case RC_ADDR(0x00014540u): goto L_14540;
    case RC_ADDR(0x00014544u): goto L_14544;
    case RC_ADDR(0x00014546u): goto L_14546;
    case RC_ADDR(0x0001454cu): goto L_1454C;
    case RC_ADDR(0x0001454eu): goto L_1454E;
    case RC_ADDR(0x00014554u): goto L_14554;
    case RC_ADDR(0x00014556u): goto L_14556;
    case RC_ADDR(0x0001455cu): goto L_1455C;
    case RC_ADDR(0x0001455eu): goto L_1455E;
    case RC_ADDR(0x00014564u): goto L_14564;
    case RC_ADDR(0x00014566u): goto L_14566;
    case RC_ADDR(0x0001457eu): goto L_1457E;
    case RC_ADDR(0x00014584u): goto L_14584;
    case RC_ADDR(0x00014586u): goto L_14586;
    case RC_ADDR(0x00014588u): goto L_14588;
    case RC_ADDR(0x0001458cu): goto L_1458C;
    case RC_ADDR(0x00014590u): goto L_14590;
    case RC_ADDR(0x00014594u): goto L_14594;
    case RC_ADDR(0x00014598u): goto L_14598;
    case RC_ADDR(0x0001459cu): goto L_1459C;
    case RC_ADDR(0x0001459eu): goto L_1459E;
    case RC_ADDR(0x000145a2u): goto L_145A2;
    case RC_ADDR(0x000145a6u): goto L_145A6;
    case RC_ADDR(0x000145aau): goto L_145AA;
    case RC_ADDR(0x000145aeu): goto L_145AE;
    case RC_ADDR(0x000145b2u): goto L_145B2;
    case RC_ADDR(0x000145b4u): goto L_145B4;
    case RC_ADDR(0x000145b8u): goto L_145B8;
    case RC_ADDR(0x000145bcu): goto L_145BC;
    case RC_ADDR(0x000145c0u): goto L_145C0;
    case RC_ADDR(0x000145c4u): goto L_145C4;
    case RC_ADDR(0x000145c8u): goto L_145C8;
    case RC_ADDR(0x000145cau): goto L_145CA;
    case RC_ADDR(0x000145ceu): goto L_145CE;
    case RC_ADDR(0x000145d2u): goto L_145D2;
    case RC_ADDR(0x000145d6u): goto L_145D6;
    case RC_ADDR(0x000145dau): goto L_145DA;
    case RC_ADDR(0x000145deu): goto L_145DE;
    case RC_ADDR(0x000145e0u): goto L_145E0;
    case RC_ADDR(0x000145e4u): goto L_145E4;
    case RC_ADDR(0x000145e8u): goto L_145E8;
    case RC_ADDR(0x000145ecu): goto L_145EC;
    case RC_ADDR(0x000145f0u): goto L_145F0;
    case RC_ADDR(0x000145f4u): goto L_145F4;
    case RC_ADDR(0x000145f6u): goto L_145F6;
    case RC_ADDR(0x000145fau): goto L_145FA;
    case RC_ADDR(0x000145feu): goto L_145FE;
    case RC_ADDR(0x00014602u): goto L_14602;
    case RC_ADDR(0x00014606u): goto L_14606;
    case RC_ADDR(0x0001460au): goto L_1460A;
    case RC_ADDR(0x0001460cu): goto L_1460C;
    case RC_ADDR(0x00014610u): goto L_14610;
    case RC_ADDR(0x00014614u): goto L_14614;
    case RC_ADDR(0x00014618u): goto L_14618;
    case RC_ADDR(0x0001461cu): goto L_1461C;
    case RC_ADDR(0x00014620u): goto L_14620;
    case RC_ADDR(0x00014622u): goto L_14622;
    case RC_ADDR(0x00014626u): goto L_14626;
    case RC_ADDR(0x0001462au): goto L_1462A;
    case RC_ADDR(0x0001462eu): goto L_1462E;
    case RC_ADDR(0x00014632u): goto L_14632;
    case RC_ADDR(0x00014636u): goto L_14636;
    case RC_ADDR(0x00014638u): goto L_14638;
    case RC_ADDR(0x0001463cu): goto L_1463C;
    case RC_ADDR(0x00014640u): goto L_14640;
    case RC_ADDR(0x00014644u): goto L_14644;
    case RC_ADDR(0x00014648u): goto L_14648;
    case RC_ADDR(0x0001464au): goto L_1464A;
    case RC_ADDR(0x0001464cu): goto L_1464C;
    case RC_ADDR(0x00014650u): goto L_14650;
    case RC_ADDR(0x00014654u): goto L_14654;
    case RC_ADDR(0x00014658u): goto L_14658;
    case RC_ADDR(0x0001465cu): goto L_1465C;
    case RC_ADDR(0x0001465eu): goto L_1465E;
    case RC_ADDR(0x00014662u): goto L_14662;
    case RC_ADDR(0x00014666u): goto L_14666;
    case RC_ADDR(0x00014668u): goto L_14668;
    case RC_ADDR(0x0001466cu): goto L_1466C;
    case RC_ADDR(0x00014670u): goto L_14670;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_142EA:
    /* 000142ea   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x000142eau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_142EE:
    /* 000142ee   4  tst.w (10e2,A4) */
    c->pc = RC_ADDR(0x000142eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_142F2:
    /* 000142f2   2  beq 0001430e */
    c->pc = RC_ADDR(0x000142f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1430E;

L_142F4:
    /* 000142f4   6  cmpi.w #32,(10e2,A4) */
    c->pc = RC_ADDR(0x000142f4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_cmp(c, RC_W, t0, 0x00000032u);

L_142FA:
    /* 000142fa   2  bne 0001430e */
    c->pc = RC_ADDR(0x000142fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1430E;

L_142FC:
    /* 000142fc   4  clr.w (10ce,A4) */
    c->pc = RC_ADDR(0x000142fcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x10ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14300:
    /* 00014300   4  jsr (00014210) */
    c->pc = RC_ADDR(0x00014300u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014304u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014210u);
    return;

L_14304:
    /* 00014304   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x00014304u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1430A:
    /* 0001430a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001430au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1430C:
    /* 0001430c   2  rts */
    c->pc = RC_ADDR(0x0001430cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1430E:
    /* 0001430e   4  tst.w (1140,A4) */
    c->pc = RC_ADDR(0x0001430eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1140u));
    rc_set_nzvc(c, t0, RC_W);

L_14312:
    /* 00014312   2  beq 00014320 */
    c->pc = RC_ADDR(0x00014312u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14320;

L_14314:
    /* 00014314   6  move.w #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00014314u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1431A:
    /* 0001431a   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001431au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1431E:
    /* 0001431e   2  bra 00014338 */
    c->pc = RC_ADDR(0x0001431eu);
    rc_step(c, m, 10);
    goto L_14338;

L_14320:
    /* 00014320   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00014320u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14324:
    /* 00014324   4  and.w #4,D0 */
    c->pc = RC_ADDR(0x00014324u);
    rc_step(c, m, 10);
    t0 = 0x00000004u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_14328:
    /* 00014328   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00014328u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1432C:
    /* 0001432c   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x0001432cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14330:
    /* 00014330   4  and.w #8,D0 */
    c->pc = RC_ADDR(0x00014330u);
    rc_step(c, m, 10);
    t0 = 0x00000008u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_14334:
    /* 00014334   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014334u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14338:
    /* 00014338   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00014338u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1433C:
    /* 0001433c   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x0001433cu);
    rc_step(c, m, 10);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_14340:
    /* 00014340   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014340u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14344:
    /* 00014344   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00014344u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14348:
    /* 00014348   4  and.w #2,D0 */
    c->pc = RC_ADDR(0x00014348u);
    rc_step(c, m, 10);
    t0 = 0x00000002u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1434C:
    /* 0001434c   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001434cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14350:
    /* 00014350   4  move.w (10de,A4),-(A7) */
    c->pc = RC_ADDR(0x00014350u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10deu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14354:
    /* 00014354   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00014354u);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00014358u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012132u);
    return;

L_14358:
    /* 00014358   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014358u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1435A:
    /* 0001435a   4  mulu.w (fffff286,A4),D0 */
    c->pc = RC_ADDR(0x0001435au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_mulu(c, 0, t0);

L_1435E:
    /* 0001435e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001435eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14360:
    /* 00014360   4  move.w (10e0,A4),-(A7) */
    c->pc = RC_ADDR(0x00014360u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14364:
    /* 00014364   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00014364u);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00014368u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012132u);
    return;

L_14368:
    /* 00014368   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014368u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1436A:
    /* 0001436a   4  mulu.w (fffff288,A4),D0 */
    c->pc = RC_ADDR(0x0001436au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_mulu(c, 0, t0);

L_1436E:
    /* 0001436e   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x0001436eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14370:
    /* 00014370   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00014370u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14372:
    /* 00014372   4  move.w D1,(10ce,A4) */
    c->pc = RC_ADDR(0x00014372u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14376:
    /* 00014376   4  tst.w (10ce,A4) */
    c->pc = RC_ADDR(0x00014376u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ceu));
    rc_set_nzvc(c, t0, RC_W);

L_1437A:
    /* 0001437a   2  beq 000143f4 */
    c->pc = RC_ADDR(0x0001437au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_143F4;

L_1437C:
    /* 0001437c   4  move.w (af8,A4),D0 */
    c->pc = RC_ADDR(0x0001437cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14380:
    /* 00014380   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x00014380u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_14382:
    /* 00014382   4  move.w #276,D1 */
    c->pc = RC_ADDR(0x00014382u);
    rc_step(c, m, 8);
    t0 = 0x00000276u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14386:
    /* 00014386   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00014386u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14388:
    /* 00014388   4  move.w D1,(1138,A4) */
    c->pc = RC_ADDR(0x00014388u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1438C:
    /* 0001438c   4  tst.w (ffffb1aa,A4) */
    c->pc = RC_ADDR(0x0001438cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4e56u));
    rc_set_nzvc(c, t0, RC_W);

L_14390:
    /* 00014390   2  beq 000143b2 */
    c->pc = RC_ADDR(0x00014390u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_143B2;

L_14392:
    /* 00014392   4  clr.w (ffffb1aa,A4) */
    c->pc = RC_ADDR(0x00014392u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4e56u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14396:
    /* 00014396   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00014396u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1439A:
    /* 0001439a   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001439au);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1439E:
    /* 0001439e   4  move.l (113a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001439eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x113au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143A2:
    /* 000143a2   4  move.w (1138,A4),-(A7) */
    c->pc = RC_ADDR(0x000143a2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1138u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143A6:
    /* 000143a6   4  move.l (ffffb166,A4),-(A7) */
    c->pc = RC_ADDR(0x000143a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_143AA:
    /* 000143aa   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x000143aau);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x000143aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_143AE:
    /* 000143ae   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000143aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_143B2:
    /* 000143b2   6  move.w #3f,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000143b2u);
    rc_step(c, m, 16);
    t0 = 0x0000003fu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_143B8:
    /* 000143b8   4  tst.w (1132,A4) */
    c->pc = RC_ADDR(0x000143b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_143BC:
    /* 000143bc   2  beq 000143dc */
    c->pc = RC_ADDR(0x000143bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_143DC;

L_143BE:
    /* 000143be   6  cmpi.w #a,(1132,A4) */
    c->pc = RC_ADDR(0x000143beu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_143C4:
    /* 000143c4   2  bge 000143da */
    c->pc = RC_ADDR(0x000143c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_143DA;

L_143C6:
    /* 000143c6   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000143c6u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143CA:
    /* 000143ca   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000143cau);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000143ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_143CE:
    /* 000143ce   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000143ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_143D0:
    /* 000143d0   4  cmp.w #c8,D0 */
    c->pc = RC_ADDR(0x000143d0u);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_143D4:
    /* 000143d4   2  bge 000143da */
    c->pc = RC_ADDR(0x000143d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_143DA;

L_143D6:
    /* 000143d6   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000143d6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_143DA:
    /* 000143da   2  bra 000143e0 */
    c->pc = RC_ADDR(0x000143dau);
    rc_step(c, m, 10);
    goto L_143E0;

L_143DC:
    /* 000143dc   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000143dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_143E0:
    /* 000143e0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000143e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143E4:
    /* 000143e4   4  move.w (1138,A4),-(A7) */
    c->pc = RC_ADDR(0x000143e4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1138u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143E8:
    /* 000143e8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000143e8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_143EC:
    /* 000143ec   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x000143ecu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x000143f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009c1au);
    return;

L_143F0:
    /* 000143f0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000143f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_143F2:
    /* 000143f2   2  bra 000143fa */
    c->pc = RC_ADDR(0x000143f2u);
    rc_step(c, m, 10);
    goto L_143FA;

L_143F4:
    /* 000143f4   6  move.w #1,(ffffb1aa,A4) */
    c->pc = RC_ADDR(0x000143f4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4e56u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_143FA:
    /* 000143fa   4  tst.w (10e2,A4) */
    c->pc = RC_ADDR(0x000143fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_143FE:
    /* 000143fe   2  beq 00014404 */
    c->pc = RC_ADDR(0x000143feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14404;

L_14400:
    /* 00014400   4  bra 0001430a */
    c->pc = RC_ADDR(0x00014400u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1430A;

L_14404:
    /* 00014404   4  tst.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x00014404u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fc8u));
    rc_set_nzvc(c, t0, RC_W);

L_14408:
    /* 00014408   2  beq 0001444e */
    c->pc = RC_ADDR(0x00014408u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1444E;

L_1440A:
    /* 0001440a   4  clr.w (ffffb038,A4) */
    c->pc = RC_ADDR(0x0001440au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4fc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1440E:
    /* 0001440e   4  tst.w (10ce,A4) */
    c->pc = RC_ADDR(0x0001440eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ceu));
    rc_set_nzvc(c, t0, RC_W);

L_14412:
    /* 00014412   2  bne 00014448 */
    c->pc = RC_ADDR(0x00014412u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14448;

L_14414:
    /* 00014414   4  jsr (00014210) */
    c->pc = RC_ADDR(0x00014414u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014418u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014210u);
    return;

L_14418:
    /* 00014418   6  cmpi.w #a0,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00014418u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x000000a0u);

L_1441E:
    /* 0001441e   2  bls 00014428 */
    c->pc = RC_ADDR(0x0001441eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_14428;

L_14420:
    /* 00014420   6  subi.w #17,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00014420u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000017u;
    rc_flags_sub(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14426:
    /* 00014426   2  bra 0001442e */
    c->pc = RC_ADDR(0x00014426u);
    rc_step(c, m, 10);
    goto L_1442E;

L_14428:
    /* 00014428   6  addi.w #17,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00014428u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000017u;
    rc_flags_add(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1442E:
    /* 0001442e   6  cmpi.w #64,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001442eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_14434:
    /* 00014434   2  bls 0001443e */
    c->pc = RC_ADDR(0x00014434u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_1443E;

L_14436:
    /* 00014436   6  subi.w #17,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00014436u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000017u;
    rc_flags_sub(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1443C:
    /* 0001443c   2  bra 00014444 */
    c->pc = RC_ADDR(0x0001443cu);
    rc_step(c, m, 10);
    goto L_14444;

L_1443E:
    /* 0001443e   6  addi.w #17,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001443eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000017u;
    rc_flags_add(c, RC_W, t1, 0x00000017u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14444:
    /* 00014444   4  bra 0001430a */
    c->pc = RC_ADDR(0x00014444u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1430A;

L_14448:
    /* 00014448   6  move.w #1,(1142,A4) */
    c->pc = RC_ADDR(0x00014448u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1142u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1444E:
    /* 0001444e   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0001444eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_14452:
    /* 00014452   2  beq 00014478 */
    c->pc = RC_ADDR(0x00014452u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14478;

L_14454:
    /* 00014454   4  tst.w (1142,A4) */
    c->pc = RC_ADDR(0x00014454u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1142u));
    rc_set_nzvc(c, t0, RC_W);

L_14458:
    /* 00014458   2  beq 00014478 */
    c->pc = RC_ADDR(0x00014458u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14478;

L_1445A:
    /* 0001445a   4  tst.w (1130,A4) */
    c->pc = RC_ADDR(0x0001445au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1130u));
    rc_set_nzvc(c, t0, RC_W);

L_1445E:
    /* 0001445e   2  beq 00014478 */
    c->pc = RC_ADDR(0x0001445eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14478;

L_14460:
    /* 00014460   4  tst.w (113e,A4) */
    c->pc = RC_ADDR(0x00014460u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113eu));
    rc_set_nzvc(c, t0, RC_W);

L_14464:
    /* 00014464   2  bne 00014478 */
    c->pc = RC_ADDR(0x00014464u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14478;

L_14466:
    /* 00014466   6  cmpi.w #5,(af8,A4) */
    c->pc = RC_ADDR(0x00014466u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1446C:
    /* 0001446c   2  ble 00014478 */
    c->pc = RC_ADDR(0x0001446cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14478;

L_1446E:
    /* 0001446e   6  move.w #1,(113e,A4) */
    c->pc = RC_ADDR(0x0001446eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x113eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14474:
    /* 00014474   4  clr.w (1142,A4) */
    c->pc = RC_ADDR(0x00014474u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1142u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14478:
    /* 00014478   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00014478u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1447C:
    /* 0001447c   2  beq 00014482 */
    c->pc = RC_ADDR(0x0001447cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14482;

L_1447E:
    /* 0001447e   4  jsr (00014132) */
    c->pc = RC_ADDR(0x0001447eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014482u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014132u);
    return;

L_14482:
    /* 00014482   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00014482u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_14486:
    /* 00014486   2  beq 0001448c */
    c->pc = RC_ADDR(0x00014486u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1448C;

L_14488:
    /* 00014488   4  jsr (000141b6) */
    c->pc = RC_ADDR(0x00014488u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001448cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000141b6u);
    return;

L_1448C:
    /* 0001448c   4  tst.w (10ce,A4) */
    c->pc = RC_ADDR(0x0001448cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ceu));
    rc_set_nzvc(c, t0, RC_W);

L_14490:
    /* 00014490   2  beq 000144d0 */
    c->pc = RC_ADDR(0x00014490u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_144D0;

L_14492:
    /* 00014492   4  move.w (fffff28c,A4),D0 */
    c->pc = RC_ADDR(0x00014492u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14496:
    /* 00014496   4  cmp.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00014496u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1449A:
    /* 0001449a   2  beq 000144d0 */
    c->pc = RC_ADDR(0x0001449au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_144D0;

L_1449C:
    /* 0001449c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001449cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_144A0:
    /* 000144a0   2  bne 000144a8 */
    c->pc = RC_ADDR(0x000144a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_144A8;

L_144A2:
    /* 000144a2   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000144a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_144A6:
    /* 000144a6   2  beq 000144d0 */
    c->pc = RC_ADDR(0x000144a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_144D0;

L_144A8:
    /* 000144a8   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000144a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_144AC:
    /* 000144ac   2  beq 000144b4 */
    c->pc = RC_ADDR(0x000144acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_144B4;

L_144AE:
    /* 000144ae   4  addq.w #1,(10d4,A4) */
    c->pc = RC_ADDR(0x000144aeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x10d4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_144B2:
    /* 000144b2   2  bra 000144b8 */
    c->pc = RC_ADDR(0x000144b2u);
    rc_step(c, m, 10);
    goto L_144B8;

L_144B4:
    /* 000144b4   4  subq.w #1,(10d4,A4) */
    c->pc = RC_ADDR(0x000144b4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x10d4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_144B8:
    /* 000144b8   4  tst.w (10d4,A4) */
    c->pc = RC_ADDR(0x000144b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d4u));
    rc_set_nzvc(c, t0, RC_W);

L_144BC:
    /* 000144bc   2  bge 000144c4 */
    c->pc = RC_ADDR(0x000144bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_144C4;

L_144BE:
    /* 000144be   6  move.w #7,(10d4,A4) */
    c->pc = RC_ADDR(0x000144beu);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x10d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_144C4:
    /* 000144c4   6  cmpi.w #7,(10d4,A4) */
    c->pc = RC_ADDR(0x000144c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d4u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_144CA:
    /* 000144ca   2  ble 000144d0 */
    c->pc = RC_ADDR(0x000144cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_144D0;

L_144CC:
    /* 000144cc   4  clr.w (10d4,A4) */
    c->pc = RC_ADDR(0x000144ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x10d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_144D0:
    /* 000144d0   4  move.w (10d4,A4),D0 */
    c->pc = RC_ADDR(0x000144d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_144D4:
    /* 000144d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000144d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_144D6:
    /* 000144d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000144d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_144D8:
    /* 000144d8   4  lea (ffffb156,A4),A0 */
    c->pc = RC_ADDR(0x000144d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4eaau);

L_144DC:
    /* 000144dc   6  move.w (0,A0,D0.w),(10cc,A4) */
    c->pc = RC_ADDR(0x000144dcu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x10ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_144E2:
    /* 000144e2   4  clr.w (10de,A4) */
    c->pc = RC_ADDR(0x000144e2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x10deu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_144E6:
    /* 000144e6   4  clr.w (10e0,A4) */
    c->pc = RC_ADDR(0x000144e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x10e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_144EA:
    /* 000144ea   4  move.w (10cc,A4),D0 */
    c->pc = RC_ADDR(0x000144eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_144EE:
    /* 000144ee   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000144eeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_144F0:
    /* 000144f0   2  bcc 000144f8 */
    c->pc = RC_ADDR(0x000144f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_144F8;

L_144F2:
    /* 000144f2   6  move.w #1,(10de,A4) */
    c->pc = RC_ADDR(0x000144f2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_144F8:
    /* 000144f8   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000144f8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_144FA:
    /* 000144fa   2  bcc 00014502 */
    c->pc = RC_ADDR(0x000144fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14502;

L_144FC:
    /* 000144fc   6  move.w #ffff,(10de,A4) */
    c->pc = RC_ADDR(0x000144fcu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x10deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14502:
    /* 00014502   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00014502u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_14504:
    /* 00014504   2  bcc 0001450c */
    c->pc = RC_ADDR(0x00014504u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1450C;

L_14506:
    /* 00014506   6  move.w #1,(10e0,A4) */
    c->pc = RC_ADDR(0x00014506u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1450C:
    /* 0001450c   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0001450cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1450E:
    /* 0001450e   2  bcc 00014516 */
    c->pc = RC_ADDR(0x0001450eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14516;

L_14510:
    /* 00014510   6  move.w #ffff,(10e0,A4) */
    c->pc = RC_ADDR(0x00014510u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x10e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14516:
    /* 00014516   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00014516u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1451A:
    /* 0001451a   4  cmp.w (fffff28c,A4),D0 */
    c->pc = RC_ADDR(0x0001451au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd74u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1451E:
    /* 0001451e   2  beq 00014590 */
    c->pc = RC_ADDR(0x0001451eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14590;

L_14520:
    /* 00014520   4  move.w (10cc,A4),D0 */
    c->pc = RC_ADDR(0x00014520u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14524:
    /* 00014524   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014524u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14526:
    /* 00014526   2  bra 0001457e */
    c->pc = RC_ADDR(0x00014526u);
    rc_step(c, m, 10);
    goto L_1457E;

L_14528:
    /* 00014528   6  move.w #2,(10ca,A4) */
    c->pc = RC_ADDR(0x00014528u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1452E:
    /* 0001452e   2  bra 00014590 */
    c->pc = RC_ADDR(0x0001452eu);
    rc_step(c, m, 10);
    goto L_14590;

L_14530:
    /* 00014530   6  move.w #3,(10ca,A4) */
    c->pc = RC_ADDR(0x00014530u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14536:
    /* 00014536   2  bra 00014590 */
    c->pc = RC_ADDR(0x00014536u);
    rc_step(c, m, 10);
    goto L_14590;

L_14538:
    /* 00014538   6  move.w #1,(10ca,A4) */
    c->pc = RC_ADDR(0x00014538u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1453E:
    /* 0001453e   2  bra 00014590 */
    c->pc = RC_ADDR(0x0001453eu);
    rc_step(c, m, 10);
    goto L_14590;

L_14540:
    /* 00014540   4  clr.w (10ca,A4) */
    c->pc = RC_ADDR(0x00014540u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x10cau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14544:
    /* 00014544   2  bra 00014590 */
    c->pc = RC_ADDR(0x00014544u);
    rc_step(c, m, 10);
    goto L_14590;

L_14546:
    /* 00014546   6  move.w #6,(10ca,A4) */
    c->pc = RC_ADDR(0x00014546u);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1454C:
    /* 0001454c   2  bra 00014590 */
    c->pc = RC_ADDR(0x0001454cu);
    rc_step(c, m, 10);
    goto L_14590;

L_1454E:
    /* 0001454e   6  move.w #4,(10ca,A4) */
    c->pc = RC_ADDR(0x0001454eu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14554:
    /* 00014554   2  bra 00014590 */
    c->pc = RC_ADDR(0x00014554u);
    rc_step(c, m, 10);
    goto L_14590;

L_14556:
    /* 00014556   6  move.w #7,(10ca,A4) */
    c->pc = RC_ADDR(0x00014556u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1455C:
    /* 0001455c   2  bra 00014590 */
    c->pc = RC_ADDR(0x0001455cu);
    rc_step(c, m, 10);
    goto L_14590;

L_1455E:
    /* 0001455e   6  move.w #5,(10ca,A4) */
    c->pc = RC_ADDR(0x0001455eu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14564:
    /* 00014564   2  bra 00014590 */
    c->pc = RC_ADDR(0x00014564u);
    rc_step(c, m, 10);
    goto L_14590;

L_14566:
    /* 00014566   2  bra 00014590 */
    c->pc = RC_ADDR(0x00014566u);
    rc_step(c, m, 10);
    goto L_14590;

L_1457E:
    /* 0001457e   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x0001457eu);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_14584:
    /* 00014584   2  bcc 00014590 */
    c->pc = RC_ADDR(0x00014584u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14590;

L_14586:
    /* 00014586   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014586u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14588:
    /* 00014588   4  move.w (00014568),D0 */
    c->pc = RC_ADDR(0x00014588u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00014568u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1458C:
    /* 0001458c   4  jmp (0001458e) */
    c->pc = RC_ADDR(0x0001458cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001458eu) + t4);
    c->pc = t3;
    return;

L_14590:
    /* 00014590   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x00014590u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14594:
    /* 00014594   4  lea (ffffb16a,A4),A0 */
    c->pc = RC_ADDR(0x00014594u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e96u);

L_14598:
    /* 00014598   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014598u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1459C:
    /* 0001459c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001459cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1459E:
    /* 0001459e   4  add.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x0001459eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_145A2:
    /* 000145a2   4  move.w D1,(111c,A4) */
    c->pc = RC_ADDR(0x000145a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x111cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145A6:
    /* 000145a6   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000145a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_145AA:
    /* 000145aa   4  lea (ffffb172,A4),A0 */
    c->pc = RC_ADDR(0x000145aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e8eu);

L_145AE:
    /* 000145ae   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000145aeu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_145B2:
    /* 000145b2   2  ext.w D1 */
    c->pc = RC_ADDR(0x000145b2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_145B4:
    /* 000145b4   4  add.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x000145b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_145B8:
    /* 000145b8   4  move.w D1,(1120,A4) */
    c->pc = RC_ADDR(0x000145b8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1120u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145BC:
    /* 000145bc   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000145bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_145C0:
    /* 000145c0   4  lea (ffffb17a,A4),A0 */
    c->pc = RC_ADDR(0x000145c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e86u);

L_145C4:
    /* 000145c4   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000145c4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_145C8:
    /* 000145c8   2  ext.w D1 */
    c->pc = RC_ADDR(0x000145c8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_145CA:
    /* 000145ca   4  add.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x000145cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_145CE:
    /* 000145ce   4  move.w D1,(1124,A4) */
    c->pc = RC_ADDR(0x000145ceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1124u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145D2:
    /* 000145d2   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000145d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_145D6:
    /* 000145d6   4  lea (ffffb182,A4),A0 */
    c->pc = RC_ADDR(0x000145d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e7eu);

L_145DA:
    /* 000145da   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000145dau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_145DE:
    /* 000145de   2  ext.w D1 */
    c->pc = RC_ADDR(0x000145deu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_145E0:
    /* 000145e0   4  add.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x000145e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_145E4:
    /* 000145e4   4  move.w D1,(1128,A4) */
    c->pc = RC_ADDR(0x000145e4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1128u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145E8:
    /* 000145e8   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000145e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_145EC:
    /* 000145ec   4  lea (ffffb18a,A4),A0 */
    c->pc = RC_ADDR(0x000145ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e76u);

L_145F0:
    /* 000145f0   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000145f0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_145F4:
    /* 000145f4   2  ext.w D1 */
    c->pc = RC_ADDR(0x000145f4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_145F6:
    /* 000145f6   4  add.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x000145f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_145FA:
    /* 000145fa   4  move.w D1,(111e,A4) */
    c->pc = RC_ADDR(0x000145fau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x111eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_145FE:
    /* 000145fe   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x000145feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14602:
    /* 00014602   4  lea (ffffb192,A4),A0 */
    c->pc = RC_ADDR(0x00014602u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e6eu);

L_14606:
    /* 00014606   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014606u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1460A:
    /* 0001460a   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001460au);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1460C:
    /* 0001460c   4  add.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x0001460cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14610:
    /* 00014610   4  move.w D1,(1122,A4) */
    c->pc = RC_ADDR(0x00014610u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1122u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14614:
    /* 00014614   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x00014614u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14618:
    /* 00014618   4  lea (ffffb19a,A4),A0 */
    c->pc = RC_ADDR(0x00014618u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e66u);

L_1461C:
    /* 0001461c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001461cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14620:
    /* 00014620   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014620u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_14622:
    /* 00014622   4  add.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00014622u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14626:
    /* 00014626   4  move.w D1,(1126,A4) */
    c->pc = RC_ADDR(0x00014626u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1126u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1462A:
    /* 0001462a   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x0001462au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1462E:
    /* 0001462e   4  lea (ffffb1a2,A4),A0 */
    c->pc = RC_ADDR(0x0001462eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4e5eu);

L_14632:
    /* 00014632   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014632u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14636:
    /* 00014636   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014636u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_14638:
    /* 00014638   4  add.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00014638u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1463C:
    /* 0001463c   4  move.w D1,(112a,A4) */
    c->pc = RC_ADDR(0x0001463cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x112au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14640:
    /* 00014640   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00014640u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14644:
    /* 00014644   4  move.w (10ca,A4),D0 */
    c->pc = RC_ADDR(0x00014644u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14648:
    /* 00014648   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014648u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1464A:
    /* 0001464a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001464au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1464C:
    /* 0001464c   4  lea (10e4,A4),A0 */
    c->pc = RC_ADDR(0x0001464cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x10e4u);

L_14650:
    /* 00014650   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014650u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14654:
    /* 00014654   4  move.w (af8,A4),D0 */
    c->pc = RC_ADDR(0x00014654u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14658:
    /* 00014658   4  add.w (fffffd9a,A4),D0 */
    c->pc = RC_ADDR(0x00014658u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1465C:
    /* 0001465c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001465cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1465E:
    /* 0001465e   4  move.w (af8,A4),D0 */
    c->pc = RC_ADDR(0x0001465eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14662:
    /* 00014662   4  add.w (fffffd98,A4),D0 */
    c->pc = RC_ADDR(0x00014662u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14666:
    /* 00014666   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00014666u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14668:
    /* 00014668   4  jsr (00011626) */
    c->pc = RC_ADDR(0x00014668u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001466cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011626u);
    return;

L_1466C:
    /* 0001466c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001466cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_14670:
    /* 00014670   4  bra 0001430a */
    c->pc = RC_ADDR(0x00014670u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1430A;

}
