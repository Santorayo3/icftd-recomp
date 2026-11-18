/* fn_00021272 - 272 byte(s), 87 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021272(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021272u): goto L_21272;
    case RC_ADDR(0x00021276u): goto L_21276;
    case RC_ADDR(0x00021278u): goto L_21278;
    case RC_ADDR(0x0002127cu): goto L_2127C;
    case RC_ADDR(0x0002127eu): goto L_2127E;
    case RC_ADDR(0x00021282u): goto L_21282;
    case RC_ADDR(0x00021286u): goto L_21286;
    case RC_ADDR(0x00021288u): goto L_21288;
    case RC_ADDR(0x0002128au): goto L_2128A;
    case RC_ADDR(0x0002128cu): goto L_2128C;
    case RC_ADDR(0x0002128eu): goto L_2128E;
    case RC_ADDR(0x00021292u): goto L_21292;
    case RC_ADDR(0x00021294u): goto L_21294;
    case RC_ADDR(0x00021296u): goto L_21296;
    case RC_ADDR(0x0002129au): goto L_2129A;
    case RC_ADDR(0x0002129cu): goto L_2129C;
    case RC_ADDR(0x000212a0u): goto L_212A0;
    case RC_ADDR(0x000212a4u): goto L_212A4;
    case RC_ADDR(0x000212a6u): goto L_212A6;
    case RC_ADDR(0x000212aau): goto L_212AA;
    case RC_ADDR(0x000212aeu): goto L_212AE;
    case RC_ADDR(0x000212b0u): goto L_212B0;
    case RC_ADDR(0x000212b4u): goto L_212B4;
    case RC_ADDR(0x000212b6u): goto L_212B6;
    case RC_ADDR(0x000212bau): goto L_212BA;
    case RC_ADDR(0x000212bcu): goto L_212BC;
    case RC_ADDR(0x000212c0u): goto L_212C0;
    case RC_ADDR(0x000212c2u): goto L_212C2;
    case RC_ADDR(0x000212c6u): goto L_212C6;
    case RC_ADDR(0x000212cau): goto L_212CA;
    case RC_ADDR(0x000212ccu): goto L_212CC;
    case RC_ADDR(0x000212d0u): goto L_212D0;
    case RC_ADDR(0x000212d2u): goto L_212D2;
    case RC_ADDR(0x000212d6u): goto L_212D6;
    case RC_ADDR(0x000212dau): goto L_212DA;
    case RC_ADDR(0x000212deu): goto L_212DE;
    case RC_ADDR(0x000212e0u): goto L_212E0;
    case RC_ADDR(0x000212e4u): goto L_212E4;
    case RC_ADDR(0x000212e8u): goto L_212E8;
    case RC_ADDR(0x000212eau): goto L_212EA;
    case RC_ADDR(0x000212eeu): goto L_212EE;
    case RC_ADDR(0x000212f0u): goto L_212F0;
    case RC_ADDR(0x000212f4u): goto L_212F4;
    case RC_ADDR(0x000212f8u): goto L_212F8;
    case RC_ADDR(0x000212fau): goto L_212FA;
    case RC_ADDR(0x000212feu): goto L_212FE;
    case RC_ADDR(0x00021300u): goto L_21300;
    case RC_ADDR(0x00021304u): goto L_21304;
    case RC_ADDR(0x00021308u): goto L_21308;
    case RC_ADDR(0x0002130au): goto L_2130A;
    case RC_ADDR(0x0002130eu): goto L_2130E;
    case RC_ADDR(0x00021310u): goto L_21310;
    case RC_ADDR(0x00021314u): goto L_21314;
    case RC_ADDR(0x00021318u): goto L_21318;
    case RC_ADDR(0x0002131au): goto L_2131A;
    case RC_ADDR(0x0002131eu): goto L_2131E;
    case RC_ADDR(0x00021324u): goto L_21324;
    case RC_ADDR(0x00021326u): goto L_21326;
    case RC_ADDR(0x00021328u): goto L_21328;
    case RC_ADDR(0x0002132cu): goto L_2132C;
    case RC_ADDR(0x00021330u): goto L_21330;
    case RC_ADDR(0x00021332u): goto L_21332;
    case RC_ADDR(0x0002133au): goto L_2133A;
    case RC_ADDR(0x0002133eu): goto L_2133E;
    case RC_ADDR(0x00021340u): goto L_21340;
    case RC_ADDR(0x00021344u): goto L_21344;
    case RC_ADDR(0x00021346u): goto L_21346;
    case RC_ADDR(0x0002134au): goto L_2134A;
    case RC_ADDR(0x0002134cu): goto L_2134C;
    case RC_ADDR(0x0002134eu): goto L_2134E;
    case RC_ADDR(0x00021352u): goto L_21352;
    case RC_ADDR(0x00021356u): goto L_21356;
    case RC_ADDR(0x0002135au): goto L_2135A;
    case RC_ADDR(0x0002135cu): goto L_2135C;
    case RC_ADDR(0x0002135eu): goto L_2135E;
    case RC_ADDR(0x00021360u): goto L_21360;
    case RC_ADDR(0x00021362u): goto L_21362;
    case RC_ADDR(0x00021366u): goto L_21366;
    case RC_ADDR(0x0002136au): goto L_2136A;
    case RC_ADDR(0x0002136eu): goto L_2136E;
    case RC_ADDR(0x00021370u): goto L_21370;
    case RC_ADDR(0x00021374u): goto L_21374;
    case RC_ADDR(0x00021378u): goto L_21378;
    case RC_ADDR(0x0002137cu): goto L_2137C;
    case RC_ADDR(0x0002137eu): goto L_2137E;
    case RC_ADDR(0x00021382u): goto L_21382;
    case RC_ADDR(0x00021386u): goto L_21386;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21272:
    /* 00021272   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00021272u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_21276:
    /* 00021276   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021276u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21278:
    /* 00021278   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00021278u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2127C:
    /* 0002127c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002127cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2127E:
    /* 0002127e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002127eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21282:
    /* 00021282   4  tst.l (3afc,A4) */
    c->pc = RC_ADDR(0x00021282u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    rc_set_nzvc(c, t0, RC_L);

L_21286:
    /* 00021286   2  beq 000212b0 */
    c->pc = RC_ADDR(0x00021286u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212B0;

L_21288:
    /* 00021288   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00021288u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_2128A:
    /* 0002128a   2  bra 00021296 */
    c->pc = RC_ADDR(0x0002128au);
    rc_step(c, m, 10);
    goto L_21296;

L_2128C:
    /* 0002128c   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x0002128cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2128E:
    /* 0002128e   4  jsr (0002138e) */
    c->pc = RC_ADDR(0x0002128eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021292u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002138eu);
    return;

L_21292:
    /* 00021292   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00021292u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_21294:
    /* 00021294   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00021294u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_21296:
    /* 00021296   4  cmp.w (ffffcdbe,A4),D4 */
    c->pc = RC_ADDR(0x00021296u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3242u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2129A:
    /* 0002129a   2  blt 0002128c */
    c->pc = RC_ADDR(0x0002129au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_2128C; }

L_2129C:
    /* 0002129c   4  move.w (ffffcdbe,A4),D0 */
    c->pc = RC_ADDR(0x0002129cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3242u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_212A0:
    /* 000212a0   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x000212a0u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_212A4:
    /* 000212a4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000212a4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212A6:
    /* 000212a6   4  move.l (3afc,A4),-(A7) */
    c->pc = RC_ADDR(0x000212a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212AA:
    /* 000212aa   4  jsr (000216d0) */
    c->pc = RC_ADDR(0x000212aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000212aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_212AE:
    /* 000212ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000212aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_212B0:
    /* 000212b0   4  tst.l (3b1e,A4) */
    c->pc = RC_ADDR(0x000212b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b1eu));
    rc_set_nzvc(c, t0, RC_L);

L_212B4:
    /* 000212b4   2  beq 000212bc */
    c->pc = RC_ADDR(0x000212b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212BC;

L_212B6:
    /* 000212b6   4  movea.l (3b1e,A4),A0 */
    c->pc = RC_ADDR(0x000212b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b1eu));
    c->a[0] = t0;

L_212BA:
    /* 000212ba   2  jsr (A0) */
    c->pc = RC_ADDR(0x000212bau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000212bcu));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_212BC:
    /* 000212bc   4  tst.l (ffffcdc4,A4) */
    c->pc = RC_ADDR(0x000212bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x323cu));
    rc_set_nzvc(c, t0, RC_L);

L_212C0:
    /* 000212c0   2  beq 000212cc */
    c->pc = RC_ADDR(0x000212c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212CC;

L_212C2:
    /* 000212c2   4  move.l (ffffcdc4,A4),-(A7) */
    c->pc = RC_ADDR(0x000212c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x323cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212C6:
    /* 000212c6   4  jsr (ffff8320,A4) */
    c->pc = RC_ADDR(0x000212c6u);
    rc_step(c, m, 18);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x000212cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021496u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002149au);
    return;

L_212CA:
    /* 000212ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000212cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_212CC:
    /* 000212cc   4  tst.l (3b22,A4) */
    c->pc = RC_ADDR(0x000212ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b22u));
    rc_set_nzvc(c, t0, RC_L);

L_212D0:
    /* 000212d0   2  beq 000212da */
    c->pc = RC_ADDR(0x000212d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212DA;

L_212D2:
    /* 000212d2   4  movea.l (3b22,A4),A0 */
    c->pc = RC_ADDR(0x000212d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b22u));
    c->a[0] = t0;

L_212D6:
    /* 000212d6   4  move.l (3b26,A4),(A0) */
    c->pc = RC_ADDR(0x000212d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b26u));
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212DA:
    /* 000212da   4  tst.l (3b2a,A4) */
    c->pc = RC_ADDR(0x000212dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2au));
    rc_set_nzvc(c, t0, RC_L);

L_212DE:
    /* 000212de   2  beq 000212ea */
    c->pc = RC_ADDR(0x000212deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212EA;

L_212E0:
    /* 000212e0   4  move.l (3b2a,A4),-(A7) */
    c->pc = RC_ADDR(0x000212e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212E4:
    /* 000212e4   4  jsr (000214ee) */
    c->pc = RC_ADDR(0x000212e4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000212e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_212E8:
    /* 000212e8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000212e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_212EA:
    /* 000212ea   4  tst.l (3b2e,A4) */
    c->pc = RC_ADDR(0x000212eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2eu));
    rc_set_nzvc(c, t0, RC_L);

L_212EE:
    /* 000212ee   2  beq 000212fa */
    c->pc = RC_ADDR(0x000212eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212FA;

L_212F0:
    /* 000212f0   4  move.l (3b2e,A4),-(A7) */
    c->pc = RC_ADDR(0x000212f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212F4:
    /* 000212f4   4  jsr (000214ee) */
    c->pc = RC_ADDR(0x000212f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000212f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_212F8:
    /* 000212f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000212f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_212FA:
    /* 000212fa   4  tst.l (3b32,A4) */
    c->pc = RC_ADDR(0x000212fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b32u));
    rc_set_nzvc(c, t0, RC_L);

L_212FE:
    /* 000212fe   2  beq 0002130a */
    c->pc = RC_ADDR(0x000212feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2130A;

L_21300:
    /* 00021300   4  move.l (3b32,A4),-(A7) */
    c->pc = RC_ADDR(0x00021300u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b32u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21304:
    /* 00021304   4  jsr (000214ee) */
    c->pc = RC_ADDR(0x00021304u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021308u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_21308:
    /* 00021308   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021308u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2130A:
    /* 0002130a   4  tst.l (3b36,A4) */
    c->pc = RC_ADDR(0x0002130au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b36u));
    rc_set_nzvc(c, t0, RC_L);

L_2130E:
    /* 0002130e   2  beq 0002131a */
    c->pc = RC_ADDR(0x0002130eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2131A;

L_21310:
    /* 00021310   4  move.l (3b36,A4),-(A7) */
    c->pc = RC_ADDR(0x00021310u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21314:
    /* 00021314   4  jsr (000214ee) */
    c->pc = RC_ADDR(0x00021314u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021318u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_21318:
    /* 00021318   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021318u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2131A:
    /* 0002131a   4  movea.l (00000004).l,A6 */
    c->pc = RC_ADDR(0x0002131au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, 0x00000004u);
    c->a[6] = t0;

L_2131E:
    /* 0002131e   6  btst #4,(129,A6) */
    c->pc = RC_ADDR(0x0002131eu);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0x129u);
    t4 = 0x00000004u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21324:
    /* 00021324   2  beq 0002133a */
    c->pc = RC_ADDR(0x00021324u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2133A;

L_21326:
    /* 00021326   2  move.l A5,-(A7) */
    c->pc = RC_ADDR(0x00021326u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21328:
    /* 00021328   4  lea (00021334),A5 */
    c->pc = RC_ADDR(0x00021328u);
    rc_step(c, m, 8);
    c->a[5] = RC_ADDR(0x00021334u);

L_2132C:
    /* 0002132c   4  jsr (ffffffe2,A6) */
    c->pc = RC_ADDR(0x0002132cu);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00021330u);
    rc_push32(c, m, RC_ADDR(0x00021330u));
    rc_depth++;
    rc_os_call_a6(c, m, -30);

L_21330:
    /* 00021330   2  movea.l (A7)+,A5 */
    c->pc = RC_ADDR(0x00021330u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;

L_21332:
    /* 00021332   2  bra 0002133a */
    c->pc = RC_ADDR(0x00021332u);
    rc_step(c, m, 10);
    goto L_2133A;

L_2133A:
    /* 0002133a   4  tst.l (3b06,A4) */
    c->pc = RC_ADDR(0x0002133au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    rc_set_nzvc(c, t0, RC_L);

L_2133E:
    /* 0002133e   2  bne 00021370 */
    c->pc = RC_ADDR(0x0002133eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21370;

L_21340:
    /* 00021340   4  tst.l (3b12,A4) */
    c->pc = RC_ADDR(0x00021340u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    rc_set_nzvc(c, t0, RC_L);

L_21344:
    /* 00021344   2  beq 0002136e */
    c->pc = RC_ADDR(0x00021344u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2136E;

L_21346:
    /* 00021346   4  move.w (3b10,A4),D0 */
    c->pc = RC_ADDR(0x00021346u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2134A:
    /* 0002134a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002134au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2134C:
    /* 0002134c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002134cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2134E:
    /* 0002134e   4  move.l (3b12,A4),-(A7) */
    c->pc = RC_ADDR(0x0002134eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21352:
    /* 00021352   4  jsr (000216d0) */
    c->pc = RC_ADDR(0x00021352u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021356u));
    rc_depth++;
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_21356:
    /* 00021356   4  move.w (3b0e,A4),D0 */
    c->pc = RC_ADDR(0x00021356u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b0eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2135A:
    /* 0002135a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0002135au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2135C:
    /* 0002135c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002135cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2135E:
    /* 0002135e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0002135eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_21360:
    /* 00021360   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021360u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21362:
    /* 00021362   4  move.l (3b0a,A4),-(A7) */
    c->pc = RC_ADDR(0x00021362u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b0au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21366:
    /* 00021366   4  jsr (000216d0) */
    c->pc = RC_ADDR(0x00021366u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002136au));
    rc_depth++;
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_2136A:
    /* 0002136a   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0002136au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_2136E:
    /* 0002136e   2  bra 0002137e */
    c->pc = RC_ADDR(0x0002136eu);
    rc_step(c, m, 10);
    goto L_2137E;

L_21370:
    /* 00021370   4  jsr (000216c4) */
    c->pc = RC_ADDR(0x00021370u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021374u));
    rc_depth++;
    c->pc = RC_ADDR(0x000216c4u);
    return;

L_21374:
    /* 00021374   4  move.l (3b06,A4),-(A7) */
    c->pc = RC_ADDR(0x00021374u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21378:
    /* 00021378   4  jsr (0002175e) */
    c->pc = RC_ADDR(0x00021378u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002137cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002175eu);
    return;

L_2137C:
    /* 0002137c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002137cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2137E:
    /* 0002137e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0002137eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21382:
    /* 00021382   4  movea.l (3af0,A4),A7 */
    c->pc = RC_ADDR(0x00021382u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af0u));
    c->a[7] = t0;

L_21386:
    /* 00021386   2  rts */
    c->pc = RC_ADDR(0x00021386u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
