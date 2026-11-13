/* fn_00012202 - 398 byte(s), 104 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012202(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012202u): goto L_12202;
    case RC_ADDR(0x00012206u): goto L_12206;
    case RC_ADDR(0x00012208u): goto L_12208;
    case RC_ADDR(0x0001220cu): goto L_1220C;
    case RC_ADDR(0x00012210u): goto L_12210;
    case RC_ADDR(0x00012214u): goto L_12214;
    case RC_ADDR(0x00012218u): goto L_12218;
    case RC_ADDR(0x0001221cu): goto L_1221C;
    case RC_ADDR(0x00012220u): goto L_12220;
    case RC_ADDR(0x00012224u): goto L_12224;
    case RC_ADDR(0x00012228u): goto L_12228;
    case RC_ADDR(0x0001222eu): goto L_1222E;
    case RC_ADDR(0x00012234u): goto L_12234;
    case RC_ADDR(0x00012236u): goto L_12236;
    case RC_ADDR(0x0001223au): goto L_1223A;
    case RC_ADDR(0x0001223cu): goto L_1223C;
    case RC_ADDR(0x00012240u): goto L_12240;
    case RC_ADDR(0x00012242u): goto L_12242;
    case RC_ADDR(0x00012248u): goto L_12248;
    case RC_ADDR(0x0001224au): goto L_1224A;
    case RC_ADDR(0x00012250u): goto L_12250;
    case RC_ADDR(0x00012252u): goto L_12252;
    case RC_ADDR(0x00012258u): goto L_12258;
    case RC_ADDR(0x0001225au): goto L_1225A;
    case RC_ADDR(0x00012260u): goto L_12260;
    case RC_ADDR(0x00012262u): goto L_12262;
    case RC_ADDR(0x00012268u): goto L_12268;
    case RC_ADDR(0x0001226au): goto L_1226A;
    case RC_ADDR(0x00012270u): goto L_12270;
    case RC_ADDR(0x00012272u): goto L_12272;
    case RC_ADDR(0x00012278u): goto L_12278;
    case RC_ADDR(0x0001227au): goto L_1227A;
    case RC_ADDR(0x0001227eu): goto L_1227E;
    case RC_ADDR(0x00012296u): goto L_12296;
    case RC_ADDR(0x0001229cu): goto L_1229C;
    case RC_ADDR(0x0001229eu): goto L_1229E;
    case RC_ADDR(0x000122a0u): goto L_122A0;
    case RC_ADDR(0x000122a4u): goto L_122A4;
    case RC_ADDR(0x000122a8u): goto L_122A8;
    case RC_ADDR(0x000122acu): goto L_122AC;
    case RC_ADDR(0x000122aeu): goto L_122AE;
    case RC_ADDR(0x000122b2u): goto L_122B2;
    case RC_ADDR(0x000122b4u): goto L_122B4;
    case RC_ADDR(0x000122b8u): goto L_122B8;
    case RC_ADDR(0x000122bcu): goto L_122BC;
    case RC_ADDR(0x000122c0u): goto L_122C0;
    case RC_ADDR(0x000122c4u): goto L_122C4;
    case RC_ADDR(0x000122c8u): goto L_122C8;
    case RC_ADDR(0x000122ccu): goto L_122CC;
    case RC_ADDR(0x000122d0u): goto L_122D0;
    case RC_ADDR(0x000122d4u): goto L_122D4;
    case RC_ADDR(0x000122d8u): goto L_122D8;
    case RC_ADDR(0x000122dcu): goto L_122DC;
    case RC_ADDR(0x000122e0u): goto L_122E0;
    case RC_ADDR(0x000122e4u): goto L_122E4;
    case RC_ADDR(0x000122e8u): goto L_122E8;
    case RC_ADDR(0x000122ecu): goto L_122EC;
    case RC_ADDR(0x000122f0u): goto L_122F0;
    case RC_ADDR(0x000122f6u): goto L_122F6;
    case RC_ADDR(0x000122f8u): goto L_122F8;
    case RC_ADDR(0x000122feu): goto L_122FE;
    case RC_ADDR(0x00012304u): goto L_12304;
    case RC_ADDR(0x00012306u): goto L_12306;
    case RC_ADDR(0x0001230cu): goto L_1230C;
    case RC_ADDR(0x00012312u): goto L_12312;
    case RC_ADDR(0x00012314u): goto L_12314;
    case RC_ADDR(0x0001231au): goto L_1231A;
    case RC_ADDR(0x00012320u): goto L_12320;
    case RC_ADDR(0x00012322u): goto L_12322;
    case RC_ADDR(0x00012328u): goto L_12328;
    case RC_ADDR(0x0001232eu): goto L_1232E;
    case RC_ADDR(0x00012334u): goto L_12334;
    case RC_ADDR(0x00012338u): goto L_12338;
    case RC_ADDR(0x0001233cu): goto L_1233C;
    case RC_ADDR(0x0001233eu): goto L_1233E;
    case RC_ADDR(0x00012340u): goto L_12340;
    case RC_ADDR(0x00012344u): goto L_12344;
    case RC_ADDR(0x00012346u): goto L_12346;
    case RC_ADDR(0x0001234au): goto L_1234A;
    case RC_ADDR(0x0001234eu): goto L_1234E;
    case RC_ADDR(0x00012350u): goto L_12350;
    case RC_ADDR(0x00012354u): goto L_12354;
    case RC_ADDR(0x00012356u): goto L_12356;
    case RC_ADDR(0x0001235au): goto L_1235A;
    case RC_ADDR(0x0001235cu): goto L_1235C;
    case RC_ADDR(0x00012362u): goto L_12362;
    case RC_ADDR(0x00012368u): goto L_12368;
    case RC_ADDR(0x0001236au): goto L_1236A;
    case RC_ADDR(0x0001236eu): goto L_1236E;
    case RC_ADDR(0x00012370u): goto L_12370;
    case RC_ADDR(0x00012374u): goto L_12374;
    case RC_ADDR(0x00012378u): goto L_12378;
    case RC_ADDR(0x0001237au): goto L_1237A;
    case RC_ADDR(0x0001237eu): goto L_1237E;
    case RC_ADDR(0x00012382u): goto L_12382;
    case RC_ADDR(0x00012386u): goto L_12386;
    case RC_ADDR(0x0001238au): goto L_1238A;
    case RC_ADDR(0x0001238cu): goto L_1238C;
    case RC_ADDR(0x00012392u): goto L_12392;
    case RC_ADDR(0x00012394u): goto L_12394;
    case RC_ADDR(0x0001239au): goto L_1239A;
    case RC_ADDR(0x0001239cu): goto L_1239C;
    case RC_ADDR(0x000123a2u): goto L_123A2;
    case RC_ADDR(0x000123a4u): goto L_123A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12202:
    /* 00012202   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00012202u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_12206:
    /* 00012206   2  bsr 000121c2 */
    c->pc = RC_ADDR(0x00012206u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012208u));
    rc_depth++;
    c->pc = RC_ADDR(0x000121c2u);
    return;

L_12208:
    /* 00012208   4  jsr (000123a6) */
    c->pc = RC_ADDR(0x00012208u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001220cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000123a6u);
    return;

L_1220C:
    /* 0001220c   4  clr.w (fffffda0,A4) */
    c->pc = RC_ADDR(0x0001220cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x260u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12210:
    /* 00012210   4  tst.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x00012210u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_12214:
    /* 00012214   4  beq 000122a8 */
    c->pc = RC_ADDR(0x00012214u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_122A8;

L_12218:
    /* 00012218   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00012218u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1221C:
    /* 0001221c   4  cmp.w (fffff28c,A4),D0 */
    c->pc = RC_ADDR(0x0001221cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd74u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12220:
    /* 00012220   4  beq 000122a8 */
    c->pc = RC_ADDR(0x00012220u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_122A8;

L_12224:
    /* 00012224   4  clr.w (fffffd94,A4) */
    c->pc = RC_ADDR(0x00012224u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x26cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12228:
    /* 00012228   6  move.w #1,(fffffd96,A4) */
    c->pc = RC_ADDR(0x00012228u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1222E:
    /* 0001222e   6  move.w (ffffb030,A4),(fffff28c,A4) */
    c->pc = RC_ADDR(0x0001222eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_wr16(c, m, (c->a[4] - 0xd74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12234:
    /* 00012234   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012234u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12236:
    /* 00012236   4  move.w (ffffb030,A4),D0 */
    c->pc = RC_ADDR(0x00012236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1223A:
    /* 0001223a   2  bra 00012296 */
    c->pc = RC_ADDR(0x0001223au);
    rc_step(c, m, 10);
    goto L_12296;

L_1223C:
    /* 0001223c   4  clr.w (fffffd92,A4) */
    c->pc = RC_ADDR(0x0001223cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x26eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12240:
    /* 00012240   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012240u);
    rc_step(c, m, 10);
    goto L_122A8;

L_12242:
    /* 00012242   6  move.w #4,(fffffd92,A4) */
    c->pc = RC_ADDR(0x00012242u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12248:
    /* 00012248   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012248u);
    rc_step(c, m, 10);
    goto L_122A8;

L_1224A:
    /* 0001224a   6  move.w #8,(fffffd92,A4) */
    c->pc = RC_ADDR(0x0001224au);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12250:
    /* 00012250   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012250u);
    rc_step(c, m, 10);
    goto L_122A8;

L_12252:
    /* 00012252   6  move.w #c,(fffffd92,A4) */
    c->pc = RC_ADDR(0x00012252u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12258:
    /* 00012258   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012258u);
    rc_step(c, m, 10);
    goto L_122A8;

L_1225A:
    /* 0001225a   6  move.w #10,(fffffd92,A4) */
    c->pc = RC_ADDR(0x0001225au);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12260:
    /* 00012260   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012260u);
    rc_step(c, m, 10);
    goto L_122A8;

L_12262:
    /* 00012262   6  move.w #14,(fffffd92,A4) */
    c->pc = RC_ADDR(0x00012262u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12268:
    /* 00012268   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012268u);
    rc_step(c, m, 10);
    goto L_122A8;

L_1226A:
    /* 0001226a   6  move.w #18,(fffffd92,A4) */
    c->pc = RC_ADDR(0x0001226au);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12270:
    /* 00012270   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012270u);
    rc_step(c, m, 10);
    goto L_122A8;

L_12272:
    /* 00012272   6  move.w #1c,(fffffd92,A4) */
    c->pc = RC_ADDR(0x00012272u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    rc_wr16(c, m, (c->a[4] - 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12278:
    /* 00012278   2  bra 000122a8 */
    c->pc = RC_ADDR(0x00012278u);
    rc_step(c, m, 10);
    goto L_122A8;

L_1227A:
    /* 0001227a   4  clr.w (fffffd92,A4) */
    c->pc = RC_ADDR(0x0001227au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x26eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1227E:
    /* 0001227e   2  bra 000122a8 */
    c->pc = RC_ADDR(0x0001227eu);
    rc_step(c, m, 10);
    goto L_122A8;

L_12296:
    /* 00012296   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00012296u);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1229C:
    /* 0001229c   2  bcc 0001227a */
    c->pc = RC_ADDR(0x0001229cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_1227A; }

L_1229E:
    /* 0001229e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001229eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_122A0:
    /* 000122a0   4  move.w (00012280),D0 */
    c->pc = RC_ADDR(0x000122a0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00012280u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_122A4:
    /* 000122a4   4  jmp (000122a6) */
    c->pc = RC_ADDR(0x000122a4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x000122a6u) + t4);
    c->pc = t3;
    return;

L_122A8:
    /* 000122a8   4  pea (fffff326,A4) */
    c->pc = RC_ADDR(0x000122a8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0xcdau));

L_122AC:
    /* 000122ac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000122acu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_122AE:
    /* 000122ae   4  move.w (fffffd92,A4),D0 */
    c->pc = RC_ADDR(0x000122aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x26eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_122B2:
    /* 000122b2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000122b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_122B4:
    /* 000122b4   4  lea (fffffdb6,A4),A0 */
    c->pc = RC_ADDR(0x000122b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x24au);

L_122B8:
    /* 000122b8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000122b8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_122BC:
    /* 000122bc   4  move.w (fffffd9a,A4),-(A7) */
    c->pc = RC_ADDR(0x000122bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_122C0:
    /* 000122c0   4  move.w (fffffd98,A4),-(A7) */
    c->pc = RC_ADDR(0x000122c0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_122C4:
    /* 000122c4   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x000122c4u);
    rc_step(c, m, 18);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x000122c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ba8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011130u);
    return;

L_122C8:
    /* 000122c8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000122c8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_122CC:
    /* 000122cc   4  clr.w (fffffd9c,A4) */
    c->pc = RC_ADDR(0x000122ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_122D0:
    /* 000122d0   4  tst.w (ffffb030,A4) */
    c->pc = RC_ADDR(0x000122d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_set_nzvc(c, t0, RC_W);

L_122D4:
    /* 000122d4   4  beq 000123a2 */
    c->pc = RC_ADDR(0x000122d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_123A2;

L_122D8:
    /* 000122d8   4  move.w (ffffb02a,A4),D2 */
    c->pc = RC_ADDR(0x000122d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_122DC:
    /* 000122dc   4  move.w (ffffb02c,A4),D3 */
    c->pc = RC_ADDR(0x000122dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_122E0:
    /* 000122e0   4  mulu.w (fffff286,A4),D2 */
    c->pc = RC_ADDR(0x000122e0u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_mulu(c, 2, t0);

L_122E4:
    /* 000122e4   4  mulu.w (fffff288,A4),D3 */
    c->pc = RC_ADDR(0x000122e4u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_mulu(c, 3, t0);

L_122E8:
    /* 000122e8   4  add.w D2,(fffffd98,A4) */
    c->pc = RC_ADDR(0x000122e8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_122EC:
    /* 000122ec   4  add.w D3,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x000122ecu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_122F0:
    /* 000122f0   6  cmpi.w #f0,(fffffd98,A4) */
    c->pc = RC_ADDR(0x000122f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_122F6:
    /* 000122f6   2  blt 000122fe */
    c->pc = RC_ADDR(0x000122f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_122FE;

L_122F8:
    /* 000122f8   6  ori.w #1,(fffffd9c,A4) */
    c->pc = RC_ADDR(0x000122f8u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_122FE:
    /* 000122fe   6  cmpi.w #50,(fffffd98,A4) */
    c->pc = RC_ADDR(0x000122feu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x00000050u);

L_12304:
    /* 00012304   2  bgt 0001230c */
    c->pc = RC_ADDR(0x00012304u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1230C;

L_12306:
    /* 00012306   6  ori.w #2,(fffffd9c,A4) */
    c->pc = RC_ADDR(0x00012306u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000002u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1230C:
    /* 0001230c   6  cmpi.w #8c,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001230cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x0000008cu);

L_12312:
    /* 00012312   2  blt 0001231a */
    c->pc = RC_ADDR(0x00012312u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1231A;

L_12314:
    /* 00012314   6  ori.w #4,(fffffd9c,A4) */
    c->pc = RC_ADDR(0x00012314u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000004u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1231A:
    /* 0001231a   6  cmpi.w #3c,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001231au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x0000003cu);

L_12320:
    /* 00012320   2  bgt 00012328 */
    c->pc = RC_ADDR(0x00012320u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12328;

L_12322:
    /* 00012322   6  ori.w #8,(fffffd9c,A4) */
    c->pc = RC_ADDR(0x00012322u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000008u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12328:
    /* 00012328   6  move.w #2,(fffff286,A4) */
    c->pc = RC_ADDR(0x00012328u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1232E:
    /* 0001232e   6  move.w #2,(fffff288,A4) */
    c->pc = RC_ADDR(0x0001232eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12334:
    /* 00012334   4  move.w (fffffd98,A4),D0 */
    c->pc = RC_ADDR(0x00012334u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12338:
    /* 00012338   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00012338u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1233C:
    /* 0001233c   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x0001233cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1233E:
    /* 0001233e   2  addq.w #3,D1 */
    c->pc = RC_ADDR(0x0001233eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12340:
    /* 00012340   4  bsr 00015e20 */
    c->pc = RC_ADDR(0x00012340u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012344u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015e20u);
    return;

L_12344:
    /* 00012344   2  beq 0001237a */
    c->pc = RC_ADDR(0x00012344u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1237A;

L_12346:
    /* 00012346   4  andi.b #7f,D0 */
    c->pc = RC_ADDR(0x00012346u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x0000007fu;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_1234A:
    /* 0001234a   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x0001234au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_1234E:
    /* 0001234e   2  beq 0001236a */
    c->pc = RC_ADDR(0x0001234eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1236A;

L_12350:
    /* 00012350   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x00012350u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_12354:
    /* 00012354   2  bgt 0001237a */
    c->pc = RC_ADDR(0x00012354u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1237A;

L_12356:
    /* 00012356   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x00012356u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_1235A:
    /* 0001235a   2  beq 0001236a */
    c->pc = RC_ADDR(0x0001235au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1236A;

L_1235C:
    /* 0001235c   6  move.w #1,(fffff286,A4) */
    c->pc = RC_ADDR(0x0001235cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12362:
    /* 00012362   6  move.w #1,(fffff288,A4) */
    c->pc = RC_ADDR(0x00012362u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12368:
    /* 00012368   2  bra 0001237e */
    c->pc = RC_ADDR(0x00012368u);
    rc_step(c, m, 10);
    goto L_1237E;

L_1236A:
    /* 0001236a   4  tst.w (e4c,A4) */
    c->pc = RC_ADDR(0x0001236au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe4cu));
    rc_set_nzvc(c, t0, RC_W);

L_1236E:
    /* 0001236e   2  bne 0001235c */
    c->pc = RC_ADDR(0x0001236eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1235C; }

L_12370:
    /* 00012370   4  sub.w D2,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00012370u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12374:
    /* 00012374   4  sub.w D3,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x00012374u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 3, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12378:
    /* 00012378   2  bra 000123a2 */
    c->pc = RC_ADDR(0x00012378u);
    rc_step(c, m, 10);
    goto L_123A2;

L_1237A:
    /* 0001237a   4  clr.w (e4c,A4) */
    c->pc = RC_ADDR(0x0001237au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1237E:
    /* 0001237e   4  move.w (fffffd96,A4),D0 */
    c->pc = RC_ADDR(0x0001237eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x26au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12382:
    /* 00012382   4  add.w D0,(fffffd92,A4) */
    c->pc = RC_ADDR(0x00012382u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x26eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12386:
    /* 00012386   4  add.w D0,(fffffd94,A4) */
    c->pc = RC_ADDR(0x00012386u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x26cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1238A:
    /* 0001238a   2  bne 00012394 */
    c->pc = RC_ADDR(0x0001238au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12394;

L_1238C:
    /* 0001238c   6  move.w #1,(fffffd96,A4) */
    c->pc = RC_ADDR(0x0001238cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12392:
    /* 00012392   2  bra 000123a2 */
    c->pc = RC_ADDR(0x00012392u);
    rc_step(c, m, 10);
    goto L_123A2;

L_12394:
    /* 00012394   6  cmpi.w #3,(fffffd94,A4) */
    c->pc = RC_ADDR(0x00012394u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x26cu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1239A:
    /* 0001239a   2  bne 000123a2 */
    c->pc = RC_ADDR(0x0001239au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_123A2;

L_1239C:
    /* 0001239c   6  move.w #ffff,(fffffd96,A4) */
    c->pc = RC_ADDR(0x0001239cu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123A2:
    /* 000123a2   2  unlk A5 */
    c->pc = RC_ADDR(0x000123a2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_123A4:
    /* 000123a4   2  rts */
    c->pc = RC_ADDR(0x000123a4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
