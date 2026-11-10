/* fn_000202c4 - 282 byte(s), 77 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000202c4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000202c4u): goto L_202C4;
    case RC_ADDR(0x000202c8u): goto L_202C8;
    case RC_ADDR(0x000202ccu): goto L_202CC;
    case RC_ADDR(0x000202d0u): goto L_202D0;
    case RC_ADDR(0x000202d4u): goto L_202D4;
    case RC_ADDR(0x000202dau): goto L_202DA;
    case RC_ADDR(0x000202dcu): goto L_202DC;
    case RC_ADDR(0x000202e0u): goto L_202E0;
    case RC_ADDR(0x000202e4u): goto L_202E4;
    case RC_ADDR(0x000202e8u): goto L_202E8;
    case RC_ADDR(0x000202ecu): goto L_202EC;
    case RC_ADDR(0x000202f2u): goto L_202F2;
    case RC_ADDR(0x000202f6u): goto L_202F6;
    case RC_ADDR(0x000202f8u): goto L_202F8;
    case RC_ADDR(0x000202fcu): goto L_202FC;
    case RC_ADDR(0x00020300u): goto L_20300;
    case RC_ADDR(0x00020304u): goto L_20304;
    case RC_ADDR(0x0002030au): goto L_2030A;
    case RC_ADDR(0x0002030eu): goto L_2030E;
    case RC_ADDR(0x00020312u): goto L_20312;
    case RC_ADDR(0x00020316u): goto L_20316;
    case RC_ADDR(0x0002031au): goto L_2031A;
    case RC_ADDR(0x0002031cu): goto L_2031C;
    case RC_ADDR(0x00020320u): goto L_20320;
    case RC_ADDR(0x00020322u): goto L_20322;
    case RC_ADDR(0x00020326u): goto L_20326;
    case RC_ADDR(0x0002032au): goto L_2032A;
    case RC_ADDR(0x0002032cu): goto L_2032C;
    case RC_ADDR(0x00020330u): goto L_20330;
    case RC_ADDR(0x00020334u): goto L_20334;
    case RC_ADDR(0x00020338u): goto L_20338;
    case RC_ADDR(0x0002033cu): goto L_2033C;
    case RC_ADDR(0x00020340u): goto L_20340;
    case RC_ADDR(0x00020344u): goto L_20344;
    case RC_ADDR(0x00020348u): goto L_20348;
    case RC_ADDR(0x0002034cu): goto L_2034C;
    case RC_ADDR(0x0002034eu): goto L_2034E;
    case RC_ADDR(0x00020350u): goto L_20350;
    case RC_ADDR(0x00020354u): goto L_20354;
    case RC_ADDR(0x00020358u): goto L_20358;
    case RC_ADDR(0x0002035cu): goto L_2035C;
    case RC_ADDR(0x00020360u): goto L_20360;
    case RC_ADDR(0x00020364u): goto L_20364;
    case RC_ADDR(0x00020366u): goto L_20366;
    case RC_ADDR(0x0002036au): goto L_2036A;
    case RC_ADDR(0x0002036cu): goto L_2036C;
    case RC_ADDR(0x00020370u): goto L_20370;
    case RC_ADDR(0x00020374u): goto L_20374;
    case RC_ADDR(0x00020378u): goto L_20378;
    case RC_ADDR(0x0002037au): goto L_2037A;
    case RC_ADDR(0x00020380u): goto L_20380;
    case RC_ADDR(0x00020384u): goto L_20384;
    case RC_ADDR(0x00020388u): goto L_20388;
    case RC_ADDR(0x0002038cu): goto L_2038C;
    case RC_ADDR(0x00020390u): goto L_20390;
    case RC_ADDR(0x00020394u): goto L_20394;
    case RC_ADDR(0x00020398u): goto L_20398;
    case RC_ADDR(0x0002039cu): goto L_2039C;
    case RC_ADDR(0x000203a0u): goto L_203A0;
    case RC_ADDR(0x000203a4u): goto L_203A4;
    case RC_ADDR(0x000203a8u): goto L_203A8;
    case RC_ADDR(0x000203aeu): goto L_203AE;
    case RC_ADDR(0x000203b2u): goto L_203B2;
    case RC_ADDR(0x000203b6u): goto L_203B6;
    case RC_ADDR(0x000203b8u): goto L_203B8;
    case RC_ADDR(0x000203bcu): goto L_203BC;
    case RC_ADDR(0x000203c0u): goto L_203C0;
    case RC_ADDR(0x000203c4u): goto L_203C4;
    case RC_ADDR(0x000203c8u): goto L_203C8;
    case RC_ADDR(0x000203ccu): goto L_203CC;
    case RC_ADDR(0x000203d0u): goto L_203D0;
    case RC_ADDR(0x000203d2u): goto L_203D2;
    case RC_ADDR(0x000203d4u): goto L_203D4;
    case RC_ADDR(0x000203d6u): goto L_203D6;
    case RC_ADDR(0x000203d8u): goto L_203D8;
    case RC_ADDR(0x000203dau): goto L_203DA;
    case RC_ADDR(0x000203dcu): goto L_203DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_202C4:
    /* 000202c4   4  link.w A5,#ffffffbc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x44u;

L_202C8:
    /* 000202c8   4  clr.w (ffffffbc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c8u);
    rc_wr16(c, m, (c->a[5] - 0x44u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_202CC:
    /* 000202cc   4  move.w (ffffffbc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202ccu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_202D0:
    /* 000202d0   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202d0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_202D4:
    /* 000202d4   6  cmpi.b #3a,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202d4u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_202DA:
    /* 000202da   2  beq 000202f8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202dau);
    if (rc_cond(c, 7)) goto L_202F8;

L_202DC:
    /* 000202dc   4  move.w (ffffffbc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202dcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_202E0:
    /* 000202e0   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202e0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_202E4:
    /* 000202e4   4  move.w (ffffffbc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202e4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_202E8:
    /* 000202e8   4  lea (ffffffe7,A5),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202e8u);
    c->a[1] = (c->a[5] - 0x19u);

L_202EC:
    /* 000202ec   6  move.b (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202ecu);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_202F2:
    /* 000202f2   4  addq.w #1,(ffffffbc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202f2u);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_202F6:
    /* 000202f6   2  bra 000202cc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202f6u);
    rc_tick();
    goto L_202CC;

L_202F8:
    /* 000202f8   4  move.w (ffffffbc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202f8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_202FC:
    /* 000202fc   4  addq.w #1,(ffffffbc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202fcu);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20300:
    /* 00020300   4  lea (ffffffe7,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020300u);
    c->a[0] = (c->a[5] - 0x19u);

L_20304:
    /* 00020304   6  move.b #3a,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020304u);
    t0 = 0x0000003au;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2030A:
    /* 0002030a   4  move.w (ffffffbc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002030au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2030E:
    /* 0002030e   4  lea (ffffffe7,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002030eu);
    c->a[0] = (c->a[5] - 0x19u);

L_20312:
    /* 00020312   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020312u);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20316:
    /* 00020316   4  move.w (ffffffbc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020316u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2031A:
    /* 0002031a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002031au);
    rc_ext_l(c, 0);

L_2031C:
    /* 0002031c   4  add.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002031cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20320:
    /* 00020320   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020320u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20322:
    /* 00020322   4  pea (ffffffbf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020322u);
    rc_push32(c, m, (c->a[5] - 0x41u));

L_20326:
    /* 00020326   4  jsr (ffff82a8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020326u);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0002032au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020810u);
    return;

L_2032A:
    /* 0002032a   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002032au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2032C:
    /* 0002032c   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002032cu);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20330:
    /* 00020330   4  pea (ffffffbf,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020330u);
    rc_push32(c, m, (c->a[5] - 0x41u));

L_20334:
    /* 00020334   4  pea (ffffffe7,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020334u);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_20338:
    /* 00020338   4  jsr (ffff800e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020338u);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0002033cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_2033C:
    /* 0002033c   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002033cu);
    c->a[7] = (c->a[7] + 0xau);

L_20340:
    /* 00020340   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020340u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20344:
    /* 00020344   4  pea (2ae2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020344u);
    rc_push32(c, m, (c->a[4] + 0x2ae2u));

L_20348:
    /* 00020348   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020348u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0002034cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_2034C:
    /* 0002034c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002034cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2034E:
    /* 0002034e   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002034eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20350:
    /* 00020350   4  beq 000203da */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020350u);
    if (rc_cond(c, 7)) goto L_203DA;

L_20354:
    /* 00020354   4  jsr (00020266) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020354u);
    rc_push32(c, m, RC_ADDR(0x00020358u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020266u);
    return;

L_20358:
    /* 00020358   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020358u);
    rc_push32(c, m, 0x000003edu);

L_2035C:
    /* 0002035c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002035cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20360:
    /* 00020360   4  jsr (00020476) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020360u);
    rc_push32(c, m, RC_ADDR(0x00020364u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_20364:
    /* 00020364   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020364u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20366:
    /* 00020366   4  move.l D0,(2ada,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020366u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2adau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2036A:
    /* 0002036a   2  beq 000203d6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002036au);
    if (rc_cond(c, 7)) goto L_203D6;

L_2036C:
    /* 0002036c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002036cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20370:
    /* 00020370   4  pea (2ae2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020370u);
    rc_push32(c, m, (c->a[4] + 0x2ae2u));

L_20374:
    /* 00020374   4  jsr (ffff82a8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020374u);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00020378u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020810u);
    return;

L_20378:
    /* 00020378   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020378u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2037A:
    /* 0002037a   6  move.w #1,(2ad8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002037au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2ad8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20380:
    /* 00020380   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020380u);
    rc_push32(c, m, 0x00000002u);

L_20384:
    /* 00020384   4  pea (2b18,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020384u);
    rc_push32(c, m, (c->a[4] + 0x2b18u));

L_20388:
    /* 00020388   4  move.l (2ada,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020388u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2038C:
    /* 0002038c   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002038cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00020390u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_20390:
    /* 00020390   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020390u);
    c->a[7] = (c->a[7] + 0xcu);

L_20394:
    /* 00020394   4  pea (00000004).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020394u);
    rc_push32(c, m, 0x00000004u);

L_20398:
    /* 00020398   4  pea (2b14,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020398u);
    rc_push32(c, m, (c->a[4] + 0x2b14u));

L_2039C:
    /* 0002039c   4  move.l (2ada,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002039cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203A0:
    /* 000203a0   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203a0u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000203a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_203A4:
    /* 000203a4   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203a4u);
    c->a[7] = (c->a[7] + 0xcu);

L_203A8:
    /* 000203a8   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203a8u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_203AE:
    /* 000203ae   4  move.l (2b14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203aeu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203B2:
    /* 000203b2   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203b2u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x000203b6u);
    rc_os_call(c, m, 0, -198);

L_203B6:
    /* 000203b6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203b6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_203B8:
    /* 000203b8   4  move.l D0,(2ade,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203b8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2adeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_203BC:
    /* 000203bc   4  move.l (2b14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203bcu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2b14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203C0:
    /* 000203c0   4  move.l (2ade,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203c0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203C4:
    /* 000203c4   4  move.l (2ada,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203c4u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2adau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203C8:
    /* 000203c8   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203c8u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000203ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_203CC:
    /* 000203cc   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203ccu);
    c->a[7] = (c->a[7] + 0xcu);

L_203D0:
    /* 000203d0   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203d0u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_203D2:
    /* 000203d2   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203d2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_203D4:
    /* 000203d4   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203d4u);
    rc_ret(c, m);
    return;

L_203D6:
    /* 000203d6   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203d6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_203D8:
    /* 000203d8   2  bra 000203d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203d8u);
    rc_tick();
    goto L_203D2;

L_203DA:
    /* 000203da   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203dau);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_203DC:
    /* 000203dc   2  bra 000203d2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000203dcu);
    rc_tick();
    goto L_203D2;

}
