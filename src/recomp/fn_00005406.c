/* fn_00005406 - 188 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005406(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00005406u: goto L_5406;
    case 0x0000540au: goto L_540A;
    case 0x0000540eu: goto L_540E;
    case 0x00005412u: goto L_5412;
    case 0x00005416u: goto L_5416;
    case 0x0000541cu: goto L_541C;
    case 0x0000541eu: goto L_541E;
    case 0x00005422u: goto L_5422;
    case 0x00005426u: goto L_5426;
    case 0x0000542au: goto L_542A;
    case 0x0000542eu: goto L_542E;
    case 0x00005430u: goto L_5430;
    case 0x00005434u: goto L_5434;
    case 0x0000543au: goto L_543A;
    case 0x0000543eu: goto L_543E;
    case 0x00005444u: goto L_5444;
    case 0x00005446u: goto L_5446;
    case 0x0000544au: goto L_544A;
    case 0x0000544eu: goto L_544E;
    case 0x00005452u: goto L_5452;
    case 0x00005454u: goto L_5454;
    case 0x0000545au: goto L_545A;
    case 0x0000545eu: goto L_545E;
    case 0x00005464u: goto L_5464;
    case 0x00005468u: goto L_5468;
    case 0x0000546cu: goto L_546C;
    case 0x00005470u: goto L_5470;
    case 0x00005474u: goto L_5474;
    case 0x00005476u: goto L_5476;
    case 0x0000547cu: goto L_547C;
    case 0x00005482u: goto L_5482;
    case 0x00005484u: goto L_5484;
    case 0x0000548au: goto L_548A;
    case 0x0000548cu: goto L_548C;
    case 0x00005492u: goto L_5492;
    case 0x00005494u: goto L_5494;
    case 0x00005498u: goto L_5498;
    case 0x0000549cu: goto L_549C;
    case 0x000054a0u: goto L_54A0;
    case 0x000054a4u: goto L_54A4;
    case 0x000054a8u: goto L_54A8;
    case 0x000054aau: goto L_54AA;
    case 0x000054aeu: goto L_54AE;
    case 0x000054b2u: goto L_54B2;
    case 0x000054b6u: goto L_54B6;
    case 0x000054b8u: goto L_54B8;
    case 0x000054beu: goto L_54BE;
    case 0x000054c0u: goto L_54C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5406:
    /* 00005406   4  link.w A5,#0 */
    c->pc = 0x00005406u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_540A:
    /* 0000540a   4  tst.w (ffff83d0,A4) */
    c->pc = 0x0000540au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c30u));
    rc_set_nzvc(c, t0, RC_W);

L_540E:
    /* 0000540e   4  bne 000054be */
    c->pc = 0x0000540eu;
    if (rc_cond(c, 6)) goto L_54BE;

L_5412:
    /* 00005412   4  addq.w #1,(ffff83ce,A4) */
    c->pc = 0x00005412u;
    t3 = (c->a[4] - 0x7c32u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5416:
    /* 00005416   6  cmpi.w #3b,(ffff83ce,A4) */
    c->pc = 0x00005416u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c32u));
    rc_cmp(c, RC_W, t0, 0x0000003bu);

L_541C:
    /* 0000541c   2  ble 00005476 */
    c->pc = 0x0000541cu;
    if (rc_cond(c, 15)) goto L_5476;

L_541E:
    /* 0000541e   4  jsr (00008cfe) */
    c->pc = 0x0000541eu;
    rc_push32(c, m, 0x00005422u);
    rc_depth++;
    c->pc = 0x00008cfeu;
    return;

L_5422:
    /* 00005422   4  jsr (00009020) */
    c->pc = 0x00005422u;
    rc_push32(c, m, 0x00005426u);
    rc_depth++;
    c->pc = 0x00009020u;
    return;

L_5426:
    /* 00005426   4  move.w #35,-(A7) */
    c->pc = 0x00005426u;
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_542A:
    /* 0000542a   4  jsr (00007108) */
    c->pc = 0x0000542au;
    rc_push32(c, m, 0x0000542eu);
    rc_depth++;
    c->pc = 0x00007108u;
    return;

L_542E:
    /* 0000542e   2  addq.w #2,A7 */
    c->pc = 0x0000542eu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5430:
    /* 00005430   4  jsr (00004ac4) */
    c->pc = 0x00005430u;
    rc_push32(c, m, 0x00005434u);
    rc_depth++;
    c->pc = 0x00004ac4u;
    return;

L_5434:
    /* 00005434   6  subi.w #3c,(ffff83ce,A4) */
    c->pc = 0x00005434u;
    t3 = (c->a[4] - 0x7c32u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000003cu;
    rc_flags_sub(c, RC_W, t1, 0x0000003cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_543A:
    /* 0000543a   4  addq.w #1,(ffff83cc,A4) */
    c->pc = 0x0000543au;
    t3 = (c->a[4] - 0x7c34u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_543E:
    /* 0000543e   6  cmpi.w #18,(ffff83cc,A4) */
    c->pc = 0x0000543eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_5444:
    /* 00005444   2  bne 00005474 */
    c->pc = 0x00005444u;
    if (rc_cond(c, 6)) goto L_5474;

L_5446:
    /* 00005446   4  jsr (00004c5c) */
    c->pc = 0x00005446u;
    rc_push32(c, m, 0x0000544au);
    rc_depth++;
    c->pc = 0x00004c5cu;
    return;

L_544A:
    /* 0000544a   4  subq.w #1,(ffff83c8,A4) */
    c->pc = 0x0000544au;
    t3 = (c->a[4] - 0x7c38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_544E:
    /* 0000544e   4  tst.w (ffff83c8,A4) */
    c->pc = 0x0000544eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_set_nzvc(c, t0, RC_W);

L_5452:
    /* 00005452   2  bge 0000545e */
    c->pc = 0x00005452u;
    if (rc_cond(c, 12)) goto L_545E;

L_5454:
    /* 00005454   6  move.w #3,(ffff9312,A4) */
    c->pc = 0x00005454u;
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6ceeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_545A:
    /* 0000545a   4  clr.w (ffff83c8,A4) */
    c->pc = 0x0000545au;
    rc_wr16(c, m, (c->a[4] - 0x7c38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_545E:
    /* 0000545e   6  move.w #1,(ffffce2c,A4) */
    c->pc = 0x0000545eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31d4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5464:
    /* 00005464   4  clr.w (ffff851c,A4) */
    c->pc = 0x00005464u;
    rc_wr16(c, m, (c->a[4] - 0x7ae4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5468:
    /* 00005468   4  jsr (00006126) */
    c->pc = 0x00005468u;
    rc_push32(c, m, 0x0000546cu);
    rc_depth++;
    c->pc = 0x00006126u;
    return;

L_546C:
    /* 0000546c   4  jsr (000072a2) */
    c->pc = 0x0000546cu;
    rc_push32(c, m, 0x00005470u);
    rc_depth++;
    c->pc = 0x000072a2u;
    return;

L_5470:
    /* 00005470   4  clr.w (ffff83cc,A4) */
    c->pc = 0x00005470u;
    rc_wr16(c, m, (c->a[4] - 0x7c34u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5474:
    /* 00005474   2  bra 00005416 */
    c->pc = 0x00005474u;
    rc_tick();
    goto L_5416;

L_5476:
    /* 00005476   6  move.w (ffff83cc,A4),(ffffce1a,A4) */
    c->pc = 0x00005476u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_wr16(c, m, (c->a[4] - 0x31e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_547C:
    /* 0000547c   6  cmpi.w #c,(ffff83cc,A4) */
    c->pc = 0x0000547cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_5482:
    /* 00005482   2  blt 000054aa */
    c->pc = 0x00005482u;
    if (rc_cond(c, 13)) goto L_54AA;

L_5484:
    /* 00005484   6  cmpi.w #18,(ffff83cc,A4) */
    c->pc = 0x00005484u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_548A:
    /* 0000548a   2  bge 000054aa */
    c->pc = 0x0000548au;
    if (rc_cond(c, 12)) goto L_54AA;

L_548C:
    /* 0000548c   6  cmpi.w #c,(ffff83cc,A4) */
    c->pc = 0x0000548cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_5492:
    /* 00005492   2  ble 000054a0 */
    c->pc = 0x00005492u;
    if (rc_cond(c, 15)) goto L_54A0;

L_5494:
    /* 00005494   4  move.w (ffff83cc,A4),D0 */
    c->pc = 0x00005494u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5498:
    /* 00005498   4  sub.w #c,D0 */
    c->pc = 0x00005498u;
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_549C:
    /* 0000549c   4  move.w D0,(ffffce1a,A4) */
    c->pc = 0x0000549cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x31e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_54A0:
    /* 000054a0   4  lea (000054c2),A0 */
    c->pc = 0x000054a0u;
    c->a[0] = 0x000054c2u;

L_54A4:
    /* 000054a4   4  move.l A0,(ffffce1c,A4) */
    c->pc = 0x000054a4u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31e4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_54A8:
    /* 000054a8   2  bra 000054be */
    c->pc = 0x000054a8u;
    goto L_54BE;

L_54AA:
    /* 000054aa   4  lea (000054c7),A0 */
    c->pc = 0x000054aau;
    c->a[0] = 0x000054c7u;

L_54AE:
    /* 000054ae   4  move.l A0,(ffffce1c,A4) */
    c->pc = 0x000054aeu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31e4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_54B2:
    /* 000054b2   4  tst.w (ffffce1a,A4) */
    c->pc = 0x000054b2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x31e6u));
    rc_set_nzvc(c, t0, RC_W);

L_54B6:
    /* 000054b6   2  bne 000054be */
    c->pc = 0x000054b6u;
    if (rc_cond(c, 6)) goto L_54BE;

L_54B8:
    /* 000054b8   6  move.w #c,(ffffce1a,A4) */
    c->pc = 0x000054b8u;
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] - 0x31e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_54BE:
    /* 000054be   2  unlk A5 */
    c->pc = 0x000054beu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_54C0:
    /* 000054c0   2  rts */
    c->pc = 0x000054c0u;
    rc_ret(c, m);
    return;

}
