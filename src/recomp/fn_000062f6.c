/* fn_000062f6 - 150 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000062f6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x000062f6u: goto L_62F6;
    case 0x000062fau: goto L_62FA;
    case 0x000062feu: goto L_62FE;
    case 0x00006302u: goto L_6302;
    case 0x00006306u: goto L_6306;
    case 0x00006308u: goto L_6308;
    case 0x0000630cu: goto L_630C;
    case 0x0000630eu: goto L_630E;
    case 0x00006310u: goto L_6310;
    case 0x00006314u: goto L_6314;
    case 0x00006316u: goto L_6316;
    case 0x0000631au: goto L_631A;
    case 0x0000631eu: goto L_631E;
    case 0x00006322u: goto L_6322;
    case 0x00006324u: goto L_6324;
    case 0x00006326u: goto L_6326;
    case 0x00006328u: goto L_6328;
    case 0x0000632cu: goto L_632C;
    case 0x00006330u: goto L_6330;
    case 0x00006334u: goto L_6334;
    case 0x00006336u: goto L_6336;
    case 0x0000633au: goto L_633A;
    case 0x0000633cu: goto L_633C;
    case 0x00006340u: goto L_6340;
    case 0x00006342u: goto L_6342;
    case 0x00006344u: goto L_6344;
    case 0x00006346u: goto L_6346;
    case 0x00006348u: goto L_6348;
    case 0x0000634cu: goto L_634C;
    case 0x00006350u: goto L_6350;
    case 0x00006352u: goto L_6352;
    case 0x00006356u: goto L_6356;
    case 0x00006358u: goto L_6358;
    case 0x0000635au: goto L_635A;
    case 0x0000635eu: goto L_635E;
    case 0x00006360u: goto L_6360;
    case 0x00006364u: goto L_6364;
    case 0x00006368u: goto L_6368;
    case 0x0000636cu: goto L_636C;
    case 0x0000636eu: goto L_636E;
    case 0x00006372u: goto L_6372;
    case 0x00006376u: goto L_6376;
    case 0x0000637au: goto L_637A;
    case 0x0000637cu: goto L_637C;
    case 0x00006380u: goto L_6380;
    case 0x00006382u: goto L_6382;
    case 0x00006386u: goto L_6386;
    case 0x0000638au: goto L_638A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_62F6:
    /* 000062f6   4  link.w A5,#fffffffc */
    c->pc = 0x000062f6u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_62FA:
    /* 000062fa   4  clr.w (fffffffc,A5) */
    c->pc = 0x000062fau;
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_62FE:
    /* 000062fe   4  movea.l (8,A5),A0 */
    c->pc = 0x000062feu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6302:
    /* 00006302   4  cmpi.b #2b,(A0) */
    c->pc = 0x00006302u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_6306:
    /* 00006306   2  bne 00006348 */
    c->pc = 0x00006306u;
    if (rc_cond(c, 6)) goto L_6348;

L_6308:
    /* 00006308   4  movea.l (8,A5),A0 */
    c->pc = 0x00006308u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_630C:
    /* 0000630c   2  addq.l #1,A0 */
    c->pc = 0x0000630cu;
    c->a[0] += 0x00000001u;

L_630E:
    /* 0000630e   2  move.l A0,-(A7) */
    c->pc = 0x0000630eu;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6310:
    /* 00006310   4  jsr (ffff82b4,A4) */
    c->pc = 0x00006310u;
    /* vector 115 */
    rc_push32(c, m, 0x00006314u);
    rc_depth++;
    c->pc = 0x00020832u;
    return;

L_6314:
    /* 00006314   2  addq.w #4,A7 */
    c->pc = 0x00006314u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6316:
    /* 00006316   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x00006316u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_631A:
    /* 0000631a   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x0000631au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_631E:
    /* 0000631e   4  jsr (ffff8086,A4) */
    c->pc = 0x0000631eu;
    /* vector 22 */
    rc_push32(c, m, 0x00006322u);
    rc_depth++;
    c->pc = 0x0000711cu;
    return;

L_6322:
    /* 00006322   2  addq.w #2,A7 */
    c->pc = 0x00006322u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6324:
    /* 00006324   2  tst.w D0 */
    c->pc = 0x00006324u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6326:
    /* 00006326   2  beq 00006342 */
    c->pc = 0x00006326u;
    if (rc_cond(c, 7)) goto L_6342;

L_6328:
    /* 00006328   4  movea.l (8,A5),A0 */
    c->pc = 0x00006328u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_632C:
    /* 0000632c   4  addq.l #1,(8,A5) */
    c->pc = 0x0000632cu;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6330:
    /* 00006330   4  cmpi.b #20,(A0) */
    c->pc = 0x00006330u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_6334:
    /* 00006334   2  beq 0000633c */
    c->pc = 0x00006334u;
    if (rc_cond(c, 7)) goto L_633C;

L_6336:
    /* 00006336   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x00006336u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_633A:
    /* 0000633a   2  bra 00006328 */
    c->pc = 0x0000633au;
    rc_tick();
    goto L_6328;

L_633C:
    /* 0000633c   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x0000633cu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6340:
    /* 00006340   2  bra 00006348 */
    c->pc = 0x00006340u;
    goto L_6348;

L_6342:
    /* 00006342   2  moveq #ffffffff,D0 */
    c->pc = 0x00006342u;
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6344:
    /* 00006344   2  unlk A5 */
    c->pc = 0x00006344u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6346:
    /* 00006346   2  rts */
    c->pc = 0x00006346u;
    rc_ret(c, m);
    return;

L_6348:
    /* 00006348   4  movea.l (8,A5),A0 */
    c->pc = 0x00006348u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_634C:
    /* 0000634c   4  cmpi.b #3e,(A0) */
    c->pc = 0x0000634cu;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000003eu);

L_6350:
    /* 00006350   2  bne 00006386 */
    c->pc = 0x00006350u;
    if (rc_cond(c, 6)) goto L_6386;

L_6352:
    /* 00006352   4  movea.l (8,A5),A0 */
    c->pc = 0x00006352u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6356:
    /* 00006356   2  addq.l #1,A0 */
    c->pc = 0x00006356u;
    c->a[0] += 0x00000001u;

L_6358:
    /* 00006358   2  move.l A0,-(A7) */
    c->pc = 0x00006358u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_635A:
    /* 0000635a   4  jsr (ffff82b4,A4) */
    c->pc = 0x0000635au;
    /* vector 115 */
    rc_push32(c, m, 0x0000635eu);
    rc_depth++;
    c->pc = 0x00020832u;
    return;

L_635E:
    /* 0000635e   2  addq.w #4,A7 */
    c->pc = 0x0000635eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6360:
    /* 00006360   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x00006360u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6364:
    /* 00006364   4  move.w (fffffffe,A5),-(A7) */
    c->pc = 0x00006364u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6368:
    /* 00006368   4  jsr (ffff8080,A4) */
    c->pc = 0x00006368u;
    /* vector 21 */
    rc_push32(c, m, 0x0000636cu);
    rc_depth++;
    c->pc = 0x000070cau;
    return;

L_636C:
    /* 0000636c   2  addq.w #2,A7 */
    c->pc = 0x0000636cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_636E:
    /* 0000636e   4  movea.l (8,A5),A0 */
    c->pc = 0x0000636eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6372:
    /* 00006372   4  addq.l #1,(8,A5) */
    c->pc = 0x00006372u;
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6376:
    /* 00006376   4  cmpi.b #20,(A0) */
    c->pc = 0x00006376u;
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_637A:
    /* 0000637a   2  beq 00006382 */
    c->pc = 0x0000637au;
    if (rc_cond(c, 7)) goto L_6382;

L_637C:
    /* 0000637c   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x0000637cu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6380:
    /* 00006380   2  bra 0000636e */
    c->pc = 0x00006380u;
    rc_tick();
    goto L_636E;

L_6382:
    /* 00006382   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x00006382u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6386:
    /* 00006386   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x00006386u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_638A:
    /* 0000638a   2  bra 00006344 */
    c->pc = 0x0000638au;
    rc_tick();
    goto L_6344;

}
