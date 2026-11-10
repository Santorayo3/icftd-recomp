/* fn_00002218 - 162 byte(s), 50 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002218(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00002218u): goto L_2218;
    case RC_ADDR(0x0000221cu): goto L_221C;
    case RC_ADDR(0x00002220u): goto L_2220;
    case RC_ADDR(0x00002222u): goto L_2222;
    case RC_ADDR(0x00002226u): goto L_2226;
    case RC_ADDR(0x00002228u): goto L_2228;
    case RC_ADDR(0x0000222au): goto L_222A;
    case RC_ADDR(0x0000222eu): goto L_222E;
    case RC_ADDR(0x00002232u): goto L_2232;
    case RC_ADDR(0x00002236u): goto L_2236;
    case RC_ADDR(0x0000223au): goto L_223A;
    case RC_ADDR(0x0000223cu): goto L_223C;
    case RC_ADDR(0x00002240u): goto L_2240;
    case RC_ADDR(0x00002244u): goto L_2244;
    case RC_ADDR(0x00002248u): goto L_2248;
    case RC_ADDR(0x0000224cu): goto L_224C;
    case RC_ADDR(0x0000224eu): goto L_224E;
    case RC_ADDR(0x00002252u): goto L_2252;
    case RC_ADDR(0x00002256u): goto L_2256;
    case RC_ADDR(0x00002258u): goto L_2258;
    case RC_ADDR(0x0000225au): goto L_225A;
    case RC_ADDR(0x0000225eu): goto L_225E;
    case RC_ADDR(0x00002262u): goto L_2262;
    case RC_ADDR(0x00002264u): goto L_2264;
    case RC_ADDR(0x00002266u): goto L_2266;
    case RC_ADDR(0x00002268u): goto L_2268;
    case RC_ADDR(0x0000226cu): goto L_226C;
    case RC_ADDR(0x0000226eu): goto L_226E;
    case RC_ADDR(0x00002274u): goto L_2274;
    case RC_ADDR(0x00002276u): goto L_2276;
    case RC_ADDR(0x00002278u): goto L_2278;
    case RC_ADDR(0x0000227au): goto L_227A;
    case RC_ADDR(0x0000227eu): goto L_227E;
    case RC_ADDR(0x00002282u): goto L_2282;
    case RC_ADDR(0x00002286u): goto L_2286;
    case RC_ADDR(0x0000228au): goto L_228A;
    case RC_ADDR(0x0000228cu): goto L_228C;
    case RC_ADDR(0x00002290u): goto L_2290;
    case RC_ADDR(0x00002294u): goto L_2294;
    case RC_ADDR(0x00002296u): goto L_2296;
    case RC_ADDR(0x0000229au): goto L_229A;
    case RC_ADDR(0x0000229cu): goto L_229C;
    case RC_ADDR(0x000022a0u): goto L_22A0;
    case RC_ADDR(0x000022a4u): goto L_22A4;
    case RC_ADDR(0x000022a6u): goto L_22A6;
    case RC_ADDR(0x000022aau): goto L_22AA;
    case RC_ADDR(0x000022aeu): goto L_22AE;
    case RC_ADDR(0x000022b0u): goto L_22B0;
    case RC_ADDR(0x000022b4u): goto L_22B4;
    case RC_ADDR(0x000022b6u): goto L_22B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2218:
    /* 00002218   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002218u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_221C:
    /* 0000221c   4  tst.w (ffff83de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000221cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c22u));
    rc_set_nzvc(c, t0, RC_W);

L_2220:
    /* 00002220   2  beq 0000222a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002220u);
    if (rc_cond(c, 7)) goto L_222A;

L_2222:
    /* 00002222   4  clr.w (ffff83de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002222u);
    rc_wr16(c, m, (c->a[4] - 0x7c22u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2226:
    /* 00002226   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002226u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2228:
    /* 00002228   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002228u);
    rc_ret(c, m);
    return;

L_222A:
    /* 0000222a   4  clr.w (ffffcf48,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000222au);
    rc_wr16(c, m, (c->a[4] - 0x30b8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_222E:
    /* 0000222e   4  move.w #5,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000222eu);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2232:
    /* 00002232   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002232u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2236:
    /* 00002236   4  jsr (0000510e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002236u);
    rc_push32(c, m, RC_ADDR(0x0000223au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000510eu);
    return;

L_223A:
    /* 0000223a   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000223au);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_223C:
    /* 0000223c   4  move.w D0,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000223cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2240:
    /* 00002240   4  move.w #ffff,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002240u);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2244:
    /* 00002244   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002244u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2248:
    /* 00002248   4  jsr (00005eac) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002248u);
    rc_push32(c, m, RC_ADDR(0x0000224cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_224C:
    /* 0000224c   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000224cu);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_224E:
    /* 0000224e   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000224eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2252:
    /* 00002252   4  subq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002252u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2256:
    /* 00002256   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002256u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2258:
    /* 00002258   2  beq 000022b6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002258u);
    if (rc_cond(c, 7)) goto L_22B6;

L_225A:
    /* 0000225a   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000225au);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_225E:
    /* 0000225e   4  jsr (00001f84) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000225eu);
    rc_push32(c, m, RC_ADDR(0x00002262u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f84u);
    return;

L_2262:
    /* 00002262   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002262u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2264:
    /* 00002264   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002264u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2266:
    /* 00002266   2  beq 000022a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002266u);
    if (rc_cond(c, 7)) goto L_22A0;

L_2268:
    /* 00002268   4  tst.w (ffffce40,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002268u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_226C:
    /* 0000226c   2  bne 0000229c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000226cu);
    if (rc_cond(c, 6)) goto L_229C;

L_226E:
    /* 0000226e   6  move.w #96,(fffff272,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000226eu);
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0xd8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2274:
    /* 00002274   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002274u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2276:
    /* 00002276   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002276u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2278:
    /* 00002278   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002278u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_227A:
    /* 0000227a   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000227au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_227E:
    /* 0000227e   4  move.l (2c,A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000227eu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2282:
    /* 00002282   4  jsr (ffff8278,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002282u);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00002286u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_2286:
    /* 00002286   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002286u);
    c->a[7] = (c->a[7] + 0xeu);

L_228A:
    /* 0000228a   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000228au);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_228C:
    /* 0000228c   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000228cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2290:
    /* 00002290   4  jsr (00004f0a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002290u);
    rc_push32(c, m, RC_ADDR(0x00002294u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f0au);
    return;

L_2294:
    /* 00002294   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002294u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2296:
    /* 00002296   4  jsr (ffff81ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002296u);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x0000229au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_229A:
    /* 0000229a   2  bra 00002268 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000229au);
    rc_tick();
    goto L_2268;

L_229C:
    /* 0000229c   4  jsr (0000334a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000229cu);
    rc_push32(c, m, RC_ADDR(0x000022a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_22A0:
    /* 000022a0   4  tst.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022a0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_22A4:
    /* 000022a4   2  beq 000022b4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022a4u);
    if (rc_cond(c, 7)) goto L_22B4;

L_22A6:
    /* 000022a6   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022a6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22AA:
    /* 000022aa   4  jsr (0000518e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022aau);
    rc_push32(c, m, RC_ADDR(0x000022aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000518eu);
    return;

L_22AE:
    /* 000022ae   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022aeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22B0:
    /* 000022b0   4  move.l D0,(c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022b0u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22B4:
    /* 000022b4   2  bra 0000224e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022b4u);
    rc_tick();
    goto L_224E;

L_22B6:
    /* 000022b6   4  bra 00002226 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000022b6u);
    rc_tick();
    goto L_2226;

}
