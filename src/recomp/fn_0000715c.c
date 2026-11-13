/* fn_0000715c - 326 byte(s), 93 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000715c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000715cu): goto L_715C;
    case RC_ADDR(0x00007160u): goto L_7160;
    case RC_ADDR(0x00007164u): goto L_7164;
    case RC_ADDR(0x0000716au): goto L_716A;
    case RC_ADDR(0x0000716eu): goto L_716E;
    case RC_ADDR(0x00007172u): goto L_7172;
    case RC_ADDR(0x00007176u): goto L_7176;
    case RC_ADDR(0x0000717au): goto L_717A;
    case RC_ADDR(0x0000717eu): goto L_717E;
    case RC_ADDR(0x00007182u): goto L_7182;
    case RC_ADDR(0x00007186u): goto L_7186;
    case RC_ADDR(0x00007188u): goto L_7188;
    case RC_ADDR(0x0000718cu): goto L_718C;
    case RC_ADDR(0x00007190u): goto L_7190;
    case RC_ADDR(0x00007192u): goto L_7192;
    case RC_ADDR(0x00007196u): goto L_7196;
    case RC_ADDR(0x0000719au): goto L_719A;
    case RC_ADDR(0x0000719cu): goto L_719C;
    case RC_ADDR(0x000071a0u): goto L_71A0;
    case RC_ADDR(0x000071a4u): goto L_71A4;
    case RC_ADDR(0x000071a6u): goto L_71A6;
    case RC_ADDR(0x000071aau): goto L_71AA;
    case RC_ADDR(0x000071aeu): goto L_71AE;
    case RC_ADDR(0x000071b2u): goto L_71B2;
    case RC_ADDR(0x000071b6u): goto L_71B6;
    case RC_ADDR(0x000071bau): goto L_71BA;
    case RC_ADDR(0x000071beu): goto L_71BE;
    case RC_ADDR(0x000071c2u): goto L_71C2;
    case RC_ADDR(0x000071c6u): goto L_71C6;
    case RC_ADDR(0x000071cau): goto L_71CA;
    case RC_ADDR(0x000071ceu): goto L_71CE;
    case RC_ADDR(0x000071d0u): goto L_71D0;
    case RC_ADDR(0x000071d4u): goto L_71D4;
    case RC_ADDR(0x000071d8u): goto L_71D8;
    case RC_ADDR(0x000071dcu): goto L_71DC;
    case RC_ADDR(0x000071e0u): goto L_71E0;
    case RC_ADDR(0x000071e2u): goto L_71E2;
    case RC_ADDR(0x000071e4u): goto L_71E4;
    case RC_ADDR(0x000071e8u): goto L_71E8;
    case RC_ADDR(0x000071ecu): goto L_71EC;
    case RC_ADDR(0x000071eeu): goto L_71EE;
    case RC_ADDR(0x000071f2u): goto L_71F2;
    case RC_ADDR(0x000071f6u): goto L_71F6;
    case RC_ADDR(0x000071f8u): goto L_71F8;
    case RC_ADDR(0x000071fcu): goto L_71FC;
    case RC_ADDR(0x000071feu): goto L_71FE;
    case RC_ADDR(0x00007200u): goto L_7200;
    case RC_ADDR(0x00007202u): goto L_7202;
    case RC_ADDR(0x00007206u): goto L_7206;
    case RC_ADDR(0x0000720au): goto L_720A;
    case RC_ADDR(0x0000720cu): goto L_720C;
    case RC_ADDR(0x00007212u): goto L_7212;
    case RC_ADDR(0x00007216u): goto L_7216;
    case RC_ADDR(0x0000721au): goto L_721A;
    case RC_ADDR(0x0000721eu): goto L_721E;
    case RC_ADDR(0x00007220u): goto L_7220;
    case RC_ADDR(0x00007226u): goto L_7226;
    case RC_ADDR(0x00007228u): goto L_7228;
    case RC_ADDR(0x0000722eu): goto L_722E;
    case RC_ADDR(0x00007230u): goto L_7230;
    case RC_ADDR(0x00007236u): goto L_7236;
    case RC_ADDR(0x00007238u): goto L_7238;
    case RC_ADDR(0x0000723cu): goto L_723C;
    case RC_ADDR(0x00007240u): goto L_7240;
    case RC_ADDR(0x00007244u): goto L_7244;
    case RC_ADDR(0x00007248u): goto L_7248;
    case RC_ADDR(0x0000724au): goto L_724A;
    case RC_ADDR(0x0000724eu): goto L_724E;
    case RC_ADDR(0x00007250u): goto L_7250;
    case RC_ADDR(0x00007254u): goto L_7254;
    case RC_ADDR(0x00007258u): goto L_7258;
    case RC_ADDR(0x0000725au): goto L_725A;
    case RC_ADDR(0x0000725cu): goto L_725C;
    case RC_ADDR(0x0000725eu): goto L_725E;
    case RC_ADDR(0x00007264u): goto L_7264;
    case RC_ADDR(0x00007268u): goto L_7268;
    case RC_ADDR(0x0000726au): goto L_726A;
    case RC_ADDR(0x0000726eu): goto L_726E;
    case RC_ADDR(0x00007272u): goto L_7272;
    case RC_ADDR(0x00007274u): goto L_7274;
    case RC_ADDR(0x00007276u): goto L_7276;
    case RC_ADDR(0x00007278u): goto L_7278;
    case RC_ADDR(0x0000727eu): goto L_727E;
    case RC_ADDR(0x00007280u): goto L_7280;
    case RC_ADDR(0x00007286u): goto L_7286;
    case RC_ADDR(0x00007288u): goto L_7288;
    case RC_ADDR(0x0000728au): goto L_728A;
    case RC_ADDR(0x0000728eu): goto L_728E;
    case RC_ADDR(0x00007294u): goto L_7294;
    case RC_ADDR(0x00007296u): goto L_7296;
    case RC_ADDR(0x0000729au): goto L_729A;
    case RC_ADDR(0x0000729eu): goto L_729E;
    case RC_ADDR(0x000072a0u): goto L_72A0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_715C:
    /* 0000715c   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000715cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_7160:
    /* 00007160   4  clr.w (ffffcf44,A4) */
    c->pc = RC_ADDR(0x00007160u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x30bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7164:
    /* 00007164   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007164u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_716A:
    /* 0000716a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000716au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_716E:
    /* 0000716e   4  cmpi.b #5e,(A0) */
    c->pc = RC_ADDR(0x0000716eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000005eu);

L_7172:
    /* 00007172   4  bne 0000729a */
    c->pc = RC_ADDR(0x00007172u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_729A;

L_7176:
    /* 00007176   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007176u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_717A:
    /* 0000717a   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x0000717au);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_717E:
    /* 0000717e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000717eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7182:
    /* 00007182   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x00007182u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_7186:
    /* 00007186   2  bne 00007192 */
    c->pc = RC_ADDR(0x00007186u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7192;

L_7188:
    /* 00007188   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007188u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_718C:
    /* 0000718c   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x0000718cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_7190:
    /* 00007190   2  bra 0000717e */
    c->pc = RC_ADDR(0x00007190u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_717E;

L_7192:
    /* 00007192   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007192u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7196:
    /* 00007196   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x00007196u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_719A:
    /* 0000719a   2  beq 000071b2 */
    c->pc = RC_ADDR(0x0000719au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_71B2;

L_719C:
    /* 0000719c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000719cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71A0:
    /* 000071a0   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x000071a0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_71A4:
    /* 000071a4   2  beq 000071b2 */
    c->pc = RC_ADDR(0x000071a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_71B2;

L_71A6:
    /* 000071a6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000071a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71AA:
    /* 000071aa   4  cmpi.b #3e,(A0) */
    c->pc = RC_ADDR(0x000071aau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000003eu);

L_71AE:
    /* 000071ae   4  bne 0000729a */
    c->pc = RC_ADDR(0x000071aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_729A;

L_71B2:
    /* 000071b2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000071b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_71B6:
    /* 000071b6   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x000071b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_71BA:
    /* 000071ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000071bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71BE:
    /* 000071be   4  move.b (A0),(fffffffd,A5) */
    c->pc = RC_ADDR(0x000071beu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, (c->a[5] - 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_71C2:
    /* 000071c2   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000071c2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_71C6:
    /* 000071c6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000071c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_71CA:
    /* 000071ca   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x000071cau);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x000071ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d0au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020832u);
    return;

L_71CE:
    /* 000071ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000071ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_71D0:
    /* 000071d0   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000071d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_71D4:
    /* 000071d4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000071d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71D8:
    /* 000071d8   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000071d8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_71DC:
    /* 000071dc   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x000071dcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_71E0:
    /* 000071e0   2  beq 000071e4 */
    c->pc = RC_ADDR(0x000071e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_71E4;

L_71E2:
    /* 000071e2   2  bra 000071d4 */
    c->pc = RC_ADDR(0x000071e2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_71D4;

L_71E4:
    /* 000071e4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000071e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71E8:
    /* 000071e8   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x000071e8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_71EC:
    /* 000071ec   2  bne 000071f8 */
    c->pc = RC_ADDR(0x000071ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_71F8;

L_71EE:
    /* 000071ee   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000071eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_71F2:
    /* 000071f2   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000071f2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_71F6:
    /* 000071f6   2  bra 000071e4 */
    c->pc = RC_ADDR(0x000071f6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_71E4;

L_71F8:
    /* 000071f8   4  move.b (fffffffd,A5),D0 */
    c->pc = RC_ADDR(0x000071f8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_71FC:
    /* 000071fc   2  ext.w D0 */
    c->pc = RC_ADDR(0x000071fcu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_71FE:
    /* 000071fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000071feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7200:
    /* 00007200   2  bra 00007280 */
    c->pc = RC_ADDR(0x00007200u);
    rc_step(c, m, 10);
    goto L_7280;

L_7202:
    /* 00007202   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00007202u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7206:
    /* 00007206   4  jsr (00007108) */
    c->pc = RC_ADDR(0x00007206u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000720au));
    rc_depth++;
    c->pc = RC_ADDR(0x00007108u);
    return;

L_720A:
    /* 0000720a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000720au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_720C:
    /* 0000720c   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000720cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7212:
    /* 00007212   4  bra 00007296 */
    c->pc = RC_ADDR(0x00007212u);
    rc_step(c, m, 10);
    goto L_7296;

L_7216:
    /* 00007216   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00007216u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_721A:
    /* 0000721a   4  jsr (000070ca) */
    c->pc = RC_ADDR(0x0000721au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000721eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000070cau);
    return;

L_721E:
    /* 0000721e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000721eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7220:
    /* 00007220   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007220u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7226:
    /* 00007226   2  bra 00007296 */
    c->pc = RC_ADDR(0x00007226u);
    rc_step(c, m, 10);
    goto L_7296;

L_7228:
    /* 00007228   6  cmpi.w #ef,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007228u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000efu);

L_722E:
    /* 0000722e   2  ble 00007264 */
    c->pc = RC_ADDR(0x0000722eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7264;

L_7230:
    /* 00007230   6  cmpi.w #f4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007230u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000f4u);

L_7236:
    /* 00007236   2  bge 00007264 */
    c->pc = RC_ADDR(0x00007236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7264;

L_7238:
    /* 00007238   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00007238u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_723C:
    /* 0000723c   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x0000723cu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_7240:
    /* 00007240   4  move.w (ffffefe4,A4),D1 */
    c->pc = RC_ADDR(0x00007240u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7244:
    /* 00007244   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00007244u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_7248:
    /* 00007248   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00007248u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_724A:
    /* 0000724a   4  lea (ffffcf9d,A4),A0 */
    c->pc = RC_ADDR(0x0000724au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3063u);

L_724E:
    /* 0000724e   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000724eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_7250:
    /* 00007250   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7254:
    /* 00007254   4  sub.w #f0,D0 */
    c->pc = RC_ADDR(0x00007254u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_7258:
    /* 00007258   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x00007258u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_725A:
    /* 0000725a   2  asl.w D0,D1 */
    c->pc = RC_ADDR(0x0000725au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_725C:
    /* 0000725c   2  or.b D1,(A0) */
    c->pc = RC_ADDR(0x0000725cu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_725E:
    /* 0000725e   6  move.w (fffffffe,A5),(ffffcf44,A4) */
    c->pc = RC_ADDR(0x0000725eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x30bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7264:
    /* 00007264   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007264u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_7268:
    /* 00007268   2  beq 0000727e */
    c->pc = RC_ADDR(0x00007268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_727E;

L_726A:
    /* 0000726a   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000726au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_726E:
    /* 0000726e   4  jsr (0000711c) */
    c->pc = RC_ADDR(0x0000726eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007272u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_7272:
    /* 00007272   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007272u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7274:
    /* 00007274   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007274u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7276:
    /* 00007276   2  beq 0000727e */
    c->pc = RC_ADDR(0x00007276u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_727E;

L_7278:
    /* 00007278   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007278u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_727E:
    /* 0000727e   2  bra 00007296 */
    c->pc = RC_ADDR(0x0000727eu);
    rc_step(c, m, 10);
    goto L_7296;

L_7280:
    /* 00007280   6  sub.l #2b,D0 */
    c->pc = RC_ADDR(0x00007280u);
    rc_step(c, m, 16);
    t0 = 0x0000002bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7286:
    /* 00007286   2  beq 00007228 */
    c->pc = RC_ADDR(0x00007286u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7228; }

L_7288:
    /* 00007288   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00007288u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_728A:
    /* 0000728a   4  beq 00007202 */
    c->pc = RC_ADDR(0x0000728au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7202; }

L_728E:
    /* 0000728e   6  sub.l #11,D0 */
    c->pc = RC_ADDR(0x0000728eu);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7294:
    /* 00007294   2  beq 00007216 */
    c->pc = RC_ADDR(0x00007294u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_7216; }

L_7296:
    /* 00007296   4  bra 00007192 */
    c->pc = RC_ADDR(0x00007296u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7192;

L_729A:
    /* 0000729a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000729au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_729E:
    /* 0000729e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000729eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_72A0:
    /* 000072a0   2  rts */
    c->pc = RC_ADDR(0x000072a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
