/* fn_000013ec - 174 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000013ec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000013ecu): goto L_13EC;
    case RC_ADDR(0x000013f0u): goto L_13F0;
    case RC_ADDR(0x000013f4u): goto L_13F4;
    case RC_ADDR(0x000013f6u): goto L_13F6;
    case RC_ADDR(0x000013fau): goto L_13FA;
    case RC_ADDR(0x000013fcu): goto L_13FC;
    case RC_ADDR(0x00001400u): goto L_1400;
    case RC_ADDR(0x00001404u): goto L_1404;
    case RC_ADDR(0x00001408u): goto L_1408;
    case RC_ADDR(0x0000140cu): goto L_140C;
    case RC_ADDR(0x00001410u): goto L_1410;
    case RC_ADDR(0x00001414u): goto L_1414;
    case RC_ADDR(0x00001418u): goto L_1418;
    case RC_ADDR(0x0000141cu): goto L_141C;
    case RC_ADDR(0x00001420u): goto L_1420;
    case RC_ADDR(0x00001424u): goto L_1424;
    case RC_ADDR(0x00001428u): goto L_1428;
    case RC_ADDR(0x0000142cu): goto L_142C;
    case RC_ADDR(0x00001430u): goto L_1430;
    case RC_ADDR(0x00001434u): goto L_1434;
    case RC_ADDR(0x00001438u): goto L_1438;
    case RC_ADDR(0x0000143cu): goto L_143C;
    case RC_ADDR(0x00001440u): goto L_1440;
    case RC_ADDR(0x00001444u): goto L_1444;
    case RC_ADDR(0x00001448u): goto L_1448;
    case RC_ADDR(0x0000144cu): goto L_144C;
    case RC_ADDR(0x0000144eu): goto L_144E;
    case RC_ADDR(0x00001452u): goto L_1452;
    case RC_ADDR(0x00001456u): goto L_1456;
    case RC_ADDR(0x0000145au): goto L_145A;
    case RC_ADDR(0x0000145eu): goto L_145E;
    case RC_ADDR(0x00001462u): goto L_1462;
    case RC_ADDR(0x00001466u): goto L_1466;
    case RC_ADDR(0x00001468u): goto L_1468;
    case RC_ADDR(0x0000146au): goto L_146A;
    case RC_ADDR(0x00001470u): goto L_1470;
    case RC_ADDR(0x00001474u): goto L_1474;
    case RC_ADDR(0x00001478u): goto L_1478;
    case RC_ADDR(0x0000147au): goto L_147A;
    case RC_ADDR(0x0000147eu): goto L_147E;
    case RC_ADDR(0x00001482u): goto L_1482;
    case RC_ADDR(0x00001486u): goto L_1486;
    case RC_ADDR(0x00001488u): goto L_1488;
    case RC_ADDR(0x0000148cu): goto L_148C;
    case RC_ADDR(0x00001492u): goto L_1492;
    case RC_ADDR(0x00001498u): goto L_1498;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13EC:
    /* 000013ec   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013ecu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_13F0:
    /* 000013f0   4  move.b (9,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013f0u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F4:
    /* 000013f4   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013f4u);
    rc_ext_w(c, 0);

L_13F6:
    /* 000013f6   4  move.w (ffffffd8,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013f6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FA:
    /* 000013fa   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013fau);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13FC:
    /* 000013fc   4  bcs 00001368 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000013fcu);
    if (rc_cond(c, 5))
    {
        c->pc = RC_ADDR(0x00001368u);
        return;
    }

L_1400:
    /* 00001400   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001400u);
    rc_push32(c, m, 0x00000002u);

L_1404:
    /* 00001404   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001404u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1408:
    /* 00001408   4  pea (24,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001408u);
    rc_push32(c, m, (c->a[0] + 0x24u));

L_140C:
    /* 0000140c   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000140cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1410:
    /* 00001410   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001410u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001414u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1414:
    /* 00001414   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001414u);
    c->a[7] = (c->a[7] + 0xcu);

L_1418:
    /* 00001418   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001418u);
    rc_push32(c, m, 0x00000001u);

L_141C:
    /* 0000141c   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000141cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1420:
    /* 00001420   4  pea (26,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001420u);
    rc_push32(c, m, (c->a[0] + 0x26u));

L_1424:
    /* 00001424   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001424u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1428:
    /* 00001428   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001428u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0000142cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_142C:
    /* 0000142c   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000142cu);
    c->a[7] = (c->a[7] + 0xcu);

L_1430:
    /* 00001430   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001430u);
    rc_push32(c, m, 0x00000001u);

L_1434:
    /* 00001434   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001434u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1438:
    /* 00001438   4  pea (27,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001438u);
    rc_push32(c, m, (c->a[0] + 0x27u));

L_143C:
    /* 0000143c   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000143cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1440:
    /* 00001440   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001440u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00001444u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1444:
    /* 00001444   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001444u);
    c->a[7] = (c->a[7] + 0xcu);

L_1448:
    /* 00001448   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001448u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_144C:
    /* 0000144c   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000144cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_144E:
    /* 0000144e   4  move.b (27,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000144eu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1452:
    /* 00001452   4  move.w D0,(ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001452u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1456:
    /* 00001456   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001456u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_145A:
    /* 0000145a   4  clr.l (28,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000145au);
    rc_wr32(c, m, (c->a[0] + 0x28u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_145E:
    /* 0000145e   4  move.w (ffffffd8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000145eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1462:
    /* 00001462   4  subq.w #1,(ffffffd8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001462u);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1466:
    /* 00001466   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001466u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1468:
    /* 00001468   2  beq 000014d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001468u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x000014d2u);
        return;
    }

L_146A:
    /* 0000146a   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000146au);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1470:
    /* 00001470   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001470u);
    rc_push32(c, m, 0x0000000au);

L_1474:
    /* 00001474   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001474u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00001478u);
    rc_os_call(c, m, 0, -198);

L_1478:
    /* 00001478   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001478u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_147A:
    /* 0000147a   4  move.l D0,(ffffffe0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000147au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_147E:
    /* 0000147e   4  movea.l (fffffff4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000147eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1482:
    /* 00001482   4  tst.l (28,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001482u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_set_nzvc(c, t0, RC_L);

L_1486:
    /* 00001486   2  beq 0000149a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001486u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0000149au);
        return;
    }

L_1488:
    /* 00001488   4  movea.l (ffffffe4,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001488u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1cu));
    c->a[0] = t0;

L_148C:
    /* 0000148c   6  move.l (ffffffe0,A5),(6,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000148cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1492:
    /* 00001492   6  move.l (ffffffe0,A5),(ffffffe4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001492u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_wr32(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1498:
    /* 00001498   2  bra 000014aa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001498u);
    c->pc = RC_ADDR(0x000014aau);
    return;

}
