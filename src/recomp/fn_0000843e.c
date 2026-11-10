/* fn_0000843e - 166 byte(s), 51 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000843e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000843eu): goto L_843E;
    case RC_ADDR(0x00008442u): goto L_8442;
    case RC_ADDR(0x00008444u): goto L_8444;
    case RC_ADDR(0x0000844au): goto L_844A;
    case RC_ADDR(0x0000844cu): goto L_844C;
    case RC_ADDR(0x0000844eu): goto L_844E;
    case RC_ADDR(0x00008450u): goto L_8450;
    case RC_ADDR(0x00008452u): goto L_8452;
    case RC_ADDR(0x00008456u): goto L_8456;
    case RC_ADDR(0x00008458u): goto L_8458;
    case RC_ADDR(0x0000845au): goto L_845A;
    case RC_ADDR(0x0000845cu): goto L_845C;
    case RC_ADDR(0x00008460u): goto L_8460;
    case RC_ADDR(0x00008464u): goto L_8464;
    case RC_ADDR(0x00008466u): goto L_8466;
    case RC_ADDR(0x00008468u): goto L_8468;
    case RC_ADDR(0x0000846au): goto L_846A;
    case RC_ADDR(0x0000846cu): goto L_846C;
    case RC_ADDR(0x00008470u): goto L_8470;
    case RC_ADDR(0x00008474u): goto L_8474;
    case RC_ADDR(0x00008478u): goto L_8478;
    case RC_ADDR(0x0000847cu): goto L_847C;
    case RC_ADDR(0x00008482u): goto L_8482;
    case RC_ADDR(0x00008486u): goto L_8486;
    case RC_ADDR(0x0000848au): goto L_848A;
    case RC_ADDR(0x0000848eu): goto L_848E;
    case RC_ADDR(0x00008490u): goto L_8490;
    case RC_ADDR(0x00008492u): goto L_8492;
    case RC_ADDR(0x00008496u): goto L_8496;
    case RC_ADDR(0x0000849au): goto L_849A;
    case RC_ADDR(0x0000849cu): goto L_849C;
    case RC_ADDR(0x0000849eu): goto L_849E;
    case RC_ADDR(0x000084a2u): goto L_84A2;
    case RC_ADDR(0x000084a6u): goto L_84A6;
    case RC_ADDR(0x000084aau): goto L_84AA;
    case RC_ADDR(0x000084acu): goto L_84AC;
    case RC_ADDR(0x000084aeu): goto L_84AE;
    case RC_ADDR(0x000084b0u): goto L_84B0;
    case RC_ADDR(0x000084b2u): goto L_84B2;
    case RC_ADDR(0x000084b6u): goto L_84B6;
    case RC_ADDR(0x000084bau): goto L_84BA;
    case RC_ADDR(0x000084beu): goto L_84BE;
    case RC_ADDR(0x000084c2u): goto L_84C2;
    case RC_ADDR(0x000084c6u): goto L_84C6;
    case RC_ADDR(0x000084cau): goto L_84CA;
    case RC_ADDR(0x000084ceu): goto L_84CE;
    case RC_ADDR(0x000084d0u): goto L_84D0;
    case RC_ADDR(0x000084d6u): goto L_84D6;
    case RC_ADDR(0x000084d8u): goto L_84D8;
    case RC_ADDR(0x000084dcu): goto L_84DC;
    case RC_ADDR(0x000084e0u): goto L_84E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_843E:
    /* 0000843e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000843eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8442:
    /* 00008442   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00008442u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8444:
    /* 00008444   6  cmpi.w #2,(fffff100,A4) */
    c->pc = RC_ADDR(0x00008444u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_844A:
    /* 0000844a   2  bne 00008452 */
    c->pc = RC_ADDR(0x0000844au);
    if (rc_cond(c, 6)) goto L_8452;

L_844C:
    /* 0000844c   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000844cu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_844E:
    /* 0000844e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000844eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8450:
    /* 00008450   2  rts */
    c->pc = RC_ADDR(0x00008450u);
    rc_ret(c, m);
    return;

L_8452:
    /* 00008452   4  jsr (ffff8380,A4) */
    c->pc = RC_ADDR(0x00008452u);
    /* vector 149 */
    rc_push32(c, m, RC_ADDR(0x00008456u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d0u);
    return;

L_8456:
    /* 00008456   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00008456u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_8458:
    /* 00008458   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00008458u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_845A:
    /* 0000845a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000845au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_845C:
    /* 0000845c   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x0000845cu);
    c->a[0] = (c->a[4] + 0x24u);

L_8460:
    /* 00008460   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00008460u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_8464:
    /* 00008464   2  beq 000084ce */
    c->pc = RC_ADDR(0x00008464u);
    if (rc_cond(c, 7)) goto L_84CE;

L_8466:
    /* 00008466   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00008466u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8468:
    /* 00008468   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00008468u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_846A:
    /* 0000846a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000846au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_846C:
    /* 0000846c   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x0000846cu);
    c->a[0] = (c->a[4] + 0x24u);

L_8470:
    /* 00008470   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00008470u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_8474:
    /* 00008474   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x00008474u);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_8478:
    /* 00008478   4  move.l (30,A0),-(A7) */
    c->pc = RC_ADDR(0x00008478u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_847C:
    /* 0000847c   6  pea (00043210).l */
    c->pc = RC_ADDR(0x0000847cu);
    rc_push32(c, m, RC_ADDR(0x00043210u));

L_8482:
    /* 00008482   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x00008482u);
    rc_push32(c, m, RC_ADDR(0x000000cau));

L_8486:
    /* 00008486   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00008486u);
    rc_push32(c, m, RC_ADDR(0x000000c8u));

L_848A:
    /* 0000848a   4  pea (0000012c).l */
    c->pc = RC_ADDR(0x0000848au);
    rc_push32(c, m, RC_ADDR(0x0000012cu));

L_848E:
    /* 0000848e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000848eu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8490:
    /* 00008490   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00008490u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_8492:
    /* 00008492   4  lea (5c,A4),A0 */
    c->pc = RC_ADDR(0x00008492u);
    c->a[0] = (c->a[4] + 0x5cu);

L_8496:
    /* 00008496   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00008496u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_849A:
    /* 0000849a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000849au);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_849C:
    /* 0000849c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000849cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_849E:
    /* 0000849e   4  lea (40,A4),A0 */
    c->pc = RC_ADDR(0x0000849eu);
    c->a[0] = (c->a[4] + 0x40u);

L_84A2:
    /* 000084a2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000084a2u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_84A6:
    /* 000084a6   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = RC_ADDR(0x000084a6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_84AA:
    /* 000084aa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000084aau);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_84AC:
    /* 000084ac   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000084acu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_84AE:
    /* 000084ae   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000084aeu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_84B0:
    /* 000084b0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000084b0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_84B2:
    /* 000084b2   4  lea (24,A4),A0 */
    c->pc = RC_ADDR(0x000084b2u);
    c->a[0] = (c->a[4] + 0x24u);

L_84B6:
    /* 000084b6   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x000084b6u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_84BA:
    /* 000084ba   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x000084bau);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_84BE:
    /* 000084be   4  pea (c,A0) */
    c->pc = RC_ADDR(0x000084beu);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_84C2:
    /* 000084c2   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x000084c2u);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x000084c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_84C6:
    /* 000084c6   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x000084c6u);
    c->a[7] = (c->a[7] + 0x30u);

L_84CA:
    /* 000084ca   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x000084cau);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x000084ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021948u);
    return;

L_84CE:
    /* 000084ce   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x000084ceu);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_84D0:
    /* 000084d0   6  cmp.l #7,D4 */
    c->pc = RC_ADDR(0x000084d0u);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_84D6:
    /* 000084d6   2  blt 00008458 */
    c->pc = RC_ADDR(0x000084d6u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_8458; }

L_84D8:
    /* 000084d8   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x000084d8u);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x000084dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021948u);
    return;

L_84DC:
    /* 000084dc   4  jsr (ffff8362,A4) */
    c->pc = RC_ADDR(0x000084dcu);
    /* vector 144 */
    rc_push32(c, m, RC_ADDR(0x000084e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217f4u);
    return;

L_84E0:
    /* 000084e0   4  bra 0000844c */
    c->pc = RC_ADDR(0x000084e0u);
    rc_tick();
    goto L_844C;

}
