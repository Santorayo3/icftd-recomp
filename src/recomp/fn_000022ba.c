/* fn_000022ba - 286 byte(s), 83 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000022ba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000022bau): goto L_22BA;
    case RC_ADDR(0x000022beu): goto L_22BE;
    case RC_ADDR(0x000022c2u): goto L_22C2;
    case RC_ADDR(0x000022c6u): goto L_22C6;
    case RC_ADDR(0x000022cau): goto L_22CA;
    case RC_ADDR(0x000022ccu): goto L_22CC;
    case RC_ADDR(0x000022d0u): goto L_22D0;
    case RC_ADDR(0x000022d4u): goto L_22D4;
    case RC_ADDR(0x000022d6u): goto L_22D6;
    case RC_ADDR(0x000022dau): goto L_22DA;
    case RC_ADDR(0x000022deu): goto L_22DE;
    case RC_ADDR(0x000022e0u): goto L_22E0;
    case RC_ADDR(0x000022e4u): goto L_22E4;
    case RC_ADDR(0x000022e8u): goto L_22E8;
    case RC_ADDR(0x000022ecu): goto L_22EC;
    case RC_ADDR(0x000022f0u): goto L_22F0;
    case RC_ADDR(0x000022f2u): goto L_22F2;
    case RC_ADDR(0x000022f6u): goto L_22F6;
    case RC_ADDR(0x000022fcu): goto L_22FC;
    case RC_ADDR(0x000022feu): goto L_22FE;
    case RC_ADDR(0x00002302u): goto L_2302;
    case RC_ADDR(0x00002304u): goto L_2304;
    case RC_ADDR(0x0000230au): goto L_230A;
    case RC_ADDR(0x0000230eu): goto L_230E;
    case RC_ADDR(0x00002310u): goto L_2310;
    case RC_ADDR(0x00002314u): goto L_2314;
    case RC_ADDR(0x00002318u): goto L_2318;
    case RC_ADDR(0x0000231cu): goto L_231C;
    case RC_ADDR(0x0000231eu): goto L_231E;
    case RC_ADDR(0x00002322u): goto L_2322;
    case RC_ADDR(0x00002326u): goto L_2326;
    case RC_ADDR(0x0000232au): goto L_232A;
    case RC_ADDR(0x0000232cu): goto L_232C;
    case RC_ADDR(0x00002330u): goto L_2330;
    case RC_ADDR(0x00002334u): goto L_2334;
    case RC_ADDR(0x00002338u): goto L_2338;
    case RC_ADDR(0x0000233eu): goto L_233E;
    case RC_ADDR(0x00002340u): goto L_2340;
    case RC_ADDR(0x00002344u): goto L_2344;
    case RC_ADDR(0x00002348u): goto L_2348;
    case RC_ADDR(0x0000234cu): goto L_234C;
    case RC_ADDR(0x00002350u): goto L_2350;
    case RC_ADDR(0x00002354u): goto L_2354;
    case RC_ADDR(0x00002356u): goto L_2356;
    case RC_ADDR(0x0000235au): goto L_235A;
    case RC_ADDR(0x0000235cu): goto L_235C;
    case RC_ADDR(0x00002360u): goto L_2360;
    case RC_ADDR(0x00002364u): goto L_2364;
    case RC_ADDR(0x00002368u): goto L_2368;
    case RC_ADDR(0x0000236au): goto L_236A;
    case RC_ADDR(0x0000236cu): goto L_236C;
    case RC_ADDR(0x00002370u): goto L_2370;
    case RC_ADDR(0x00002374u): goto L_2374;
    case RC_ADDR(0x00002378u): goto L_2378;
    case RC_ADDR(0x0000237cu): goto L_237C;
    case RC_ADDR(0x00002382u): goto L_2382;
    case RC_ADDR(0x00002386u): goto L_2386;
    case RC_ADDR(0x00002388u): goto L_2388;
    case RC_ADDR(0x0000238cu): goto L_238C;
    case RC_ADDR(0x00002390u): goto L_2390;
    case RC_ADDR(0x00002394u): goto L_2394;
    case RC_ADDR(0x00002396u): goto L_2396;
    case RC_ADDR(0x0000239au): goto L_239A;
    case RC_ADDR(0x0000239cu): goto L_239C;
    case RC_ADDR(0x000023a0u): goto L_23A0;
    case RC_ADDR(0x000023a2u): goto L_23A2;
    case RC_ADDR(0x000023a6u): goto L_23A6;
    case RC_ADDR(0x000023aau): goto L_23AA;
    case RC_ADDR(0x000023aeu): goto L_23AE;
    case RC_ADDR(0x000023b0u): goto L_23B0;
    case RC_ADDR(0x000023b4u): goto L_23B4;
    case RC_ADDR(0x000023b6u): goto L_23B6;
    case RC_ADDR(0x000023bau): goto L_23BA;
    case RC_ADDR(0x000023beu): goto L_23BE;
    case RC_ADDR(0x000023c2u): goto L_23C2;
    case RC_ADDR(0x000023c6u): goto L_23C6;
    case RC_ADDR(0x000023c8u): goto L_23C8;
    case RC_ADDR(0x000023cau): goto L_23CA;
    case RC_ADDR(0x000023ceu): goto L_23CE;
    case RC_ADDR(0x000023d0u): goto L_23D0;
    case RC_ADDR(0x000023d2u): goto L_23D2;
    case RC_ADDR(0x000023d4u): goto L_23D4;
    case RC_ADDR(0x000023d6u): goto L_23D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22BA:
    /* 000022ba   4  link.w A5,#ffffffe8 */
    c->pc = RC_ADDR(0x000022bau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_22BE:
    /* 000022be   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000022beu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22C2:
    /* 000022c2   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000022c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22C6:
    /* 000022c6   4  jsr (00006e60) */
    c->pc = RC_ADDR(0x000022c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000022cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006e60u);
    return;

L_22CA:
    /* 000022ca   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000022cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_22CC:
    /* 000022cc   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000022ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D0:
    /* 000022d0   4  jsr (00008f54) */
    c->pc = RC_ADDR(0x000022d0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000022d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008f54u);
    return;

L_22D4:
    /* 000022d4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000022d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22D6:
    /* 000022d6   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000022d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_22DA:
    /* 000022da   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x000022dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000022deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_22DE:
    /* 000022de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000022deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_22E0:
    /* 000022e0   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000022e0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E4:
    /* 000022e4   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000022e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_22E8:
    /* 000022e8   4  beq 000023d4 */
    c->pc = RC_ADDR(0x000022e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23D4;

L_22EC:
    /* 000022ec   4  tst.w (fffff0fe,A4) */
    c->pc = RC_ADDR(0x000022ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf02u));
    rc_set_nzvc(c, t0, RC_W);

L_22F0:
    /* 000022f0   2  beq 0000230a */
    c->pc = RC_ADDR(0x000022f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_230A;

L_22F2:
    /* 000022f2   4  clr.w (fffff0fe,A4) */
    c->pc = RC_ADDR(0x000022f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xf02u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22F6:
    /* 000022f6   6  cmpi.w #17,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000022f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_22FC:
    /* 000022fc   2  bne 0000230a */
    c->pc = RC_ADDR(0x000022fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_230A;

L_22FE:
    /* 000022fe   4  tst.w (ffffcf4e,A4) */
    c->pc = RC_ADDR(0x000022feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b2u));
    rc_set_nzvc(c, t0, RC_W);

L_2302:
    /* 00002302   2  beq 0000230a */
    c->pc = RC_ADDR(0x00002302u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_230A;

L_2304:
    /* 00002304   6  move.w #1,(ffff83de,A4) */
    c->pc = RC_ADDR(0x00002304u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_230A:
    /* 0000230a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000230au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_230E:
    /* 0000230e   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x0000230eu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_2310:
    /* 00002310   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002310u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2314:
    /* 00002314   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00002314u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2318:
    /* 00002318   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00002318u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_231C:
    /* 0000231c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000231cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_231E:
    /* 0000231e   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0000231eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2322:
    /* 00002322   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00002322u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2326:
    /* 00002326   4  subq.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00002326u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_232A:
    /* 0000232a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000232au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_232C:
    /* 0000232c   4  beq 000023be */
    c->pc = RC_ADDR(0x0000232cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23BE;

L_2330:
    /* 00002330   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00002330u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002334u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_2334:
    /* 00002334   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002334u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_2338:
    /* 00002338   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00002338u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_233E:
    /* 0000233e   2  bne 00002388 */
    c->pc = RC_ADDR(0x0000233eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2388;

L_2340:
    /* 00002340   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002340u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_2344:
    /* 00002344   4  move.l (A0),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002344u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2348:
    /* 00002348   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002348u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_234C:
    /* 0000234c   4  move.l (c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000234cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2350:
    /* 00002350   4  jsr (0000715c) */
    c->pc = RC_ADDR(0x00002350u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002354u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000715cu);
    return;

L_2354:
    /* 00002354   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002354u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2356:
    /* 00002356   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00002356u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_235A:
    /* 0000235a   2  beq 00002378 */
    c->pc = RC_ADDR(0x0000235au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2378;

L_235C:
    /* 0000235c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000235cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2360:
    /* 00002360   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002360u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2364:
    /* 00002364   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002364u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_2368:
    /* 00002368   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00002368u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_236A:
    /* 0000236a   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000236au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236C:
    /* 0000236c   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0000236cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2370:
    /* 00002370   4  jsr (00001faa) */
    c->pc = RC_ADDR(0x00002370u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002374u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001faau);
    return;

L_2374:
    /* 00002374   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x00002374u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_2378:
    /* 00002378   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002378u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_237C:
    /* 0000237c   6  adda.l #10,A0 */
    c->pc = RC_ADDR(0x0000237cu);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_2382:
    /* 00002382   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002382u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2386:
    /* 00002386   2  bra 000023ba */
    c->pc = RC_ADDR(0x00002386u);
    rc_step(c, m, 10);
    goto L_23BA;

L_2388:
    /* 00002388   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002388u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_238C:
    /* 0000238c   4  move.l (A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000238cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2390:
    /* 00002390   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00002390u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_2394:
    /* 00002394   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00002394u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2396:
    /* 00002396   4  jsr (0000715c) */
    c->pc = RC_ADDR(0x00002396u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000239au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000715cu);
    return;

L_239A:
    /* 0000239a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000239au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_239C:
    /* 0000239c   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x0000239cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A0:
    /* 000023a0   2  beq 000023b0 */
    c->pc = RC_ADDR(0x000023a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23B0;

L_23A2:
    /* 000023a2   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x000023a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23A6:
    /* 000023a6   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000023a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23AA:
    /* 000023aa   4  jsr (00002218) */
    c->pc = RC_ADDR(0x000023aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000023aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002218u);
    return;

L_23AE:
    /* 000023ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000023aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23B0:
    /* 000023b0   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x000023b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_23B4:
    /* 000023b4   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x000023b4u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_23B6:
    /* 000023b6   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000023b6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23BA:
    /* 000023ba   4  bra 00002322 */
    c->pc = RC_ADDR(0x000023bau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2322;

L_23BE:
    /* 000023be   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000023beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23C2:
    /* 000023c2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000023c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_23C6:
    /* 000023c6   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x000023c6u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_23C8:
    /* 000023c8   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000023c8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23CA:
    /* 000023ca   4  jsr (0000247a) */
    c->pc = RC_ADDR(0x000023cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000023ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000247au);
    return;

L_23CE:
    /* 000023ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000023ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23D0:
    /* 000023d0   2  unlk A5 */
    c->pc = RC_ADDR(0x000023d0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23D2:
    /* 000023d2   2  rts */
    c->pc = RC_ADDR(0x000023d2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_23D4:
    /* 000023d4   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000023d4u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_23D6:
    /* 000023d6   2  bra 000023d0 */
    c->pc = RC_ADDR(0x000023d6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_23D0;

}
