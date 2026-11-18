/* fn_0000520c - 110 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000520c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000520cu): goto L_520C;
    case RC_ADDR(0x00005210u): goto L_5210;
    case RC_ADDR(0x00005214u): goto L_5214;
    case RC_ADDR(0x00005216u): goto L_5216;
    case RC_ADDR(0x00005218u): goto L_5218;
    case RC_ADDR(0x0000521cu): goto L_521C;
    case RC_ADDR(0x00005222u): goto L_5222;
    case RC_ADDR(0x00005226u): goto L_5226;
    case RC_ADDR(0x00005228u): goto L_5228;
    case RC_ADDR(0x0000522au): goto L_522A;
    case RC_ADDR(0x0000522eu): goto L_522E;
    case RC_ADDR(0x00005234u): goto L_5234;
    case RC_ADDR(0x00005238u): goto L_5238;
    case RC_ADDR(0x0000523cu): goto L_523C;
    case RC_ADDR(0x00005240u): goto L_5240;
    case RC_ADDR(0x00005244u): goto L_5244;
    case RC_ADDR(0x00005246u): goto L_5246;
    case RC_ADDR(0x0000524au): goto L_524A;
    case RC_ADDR(0x0000524eu): goto L_524E;
    case RC_ADDR(0x00005252u): goto L_5252;
    case RC_ADDR(0x00005254u): goto L_5254;
    case RC_ADDR(0x00005258u): goto L_5258;
    case RC_ADDR(0x0000525cu): goto L_525C;
    case RC_ADDR(0x00005260u): goto L_5260;
    case RC_ADDR(0x00005262u): goto L_5262;
    case RC_ADDR(0x00005264u): goto L_5264;
    case RC_ADDR(0x00005268u): goto L_5268;
    case RC_ADDR(0x0000526au): goto L_526A;
    case RC_ADDR(0x0000526cu): goto L_526C;
    case RC_ADDR(0x0000526eu): goto L_526E;
    case RC_ADDR(0x00005270u): goto L_5270;
    case RC_ADDR(0x00005274u): goto L_5274;
    case RC_ADDR(0x00005276u): goto L_5276;
    case RC_ADDR(0x00005278u): goto L_5278;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_520C:
    /* 0000520c   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000520cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_5210:
    /* 00005210   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00005210u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5214:
    /* 00005214   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005214u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5216:
    /* 00005216   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005216u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_5218:
    /* 00005218   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00005218u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_521C:
    /* 0000521c   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000521cu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5222:
    /* 00005222   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00005222u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5226:
    /* 00005226   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005226u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5228:
    /* 00005228   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005228u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_522A:
    /* 0000522a   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x0000522au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_522E:
    /* 0000522e   6  move.l (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000522eu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5234:
    /* 00005234   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00005234u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5238:
    /* 00005238   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005238u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_523C:
    /* 0000523c   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0000523cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_5240:
    /* 00005240   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00005240u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_5244:
    /* 00005244   2  beq 00005276 */
    c->pc = RC_ADDR(0x00005244u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5276;

L_5246:
    /* 00005246   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005246u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_524A:
    /* 0000524a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000524au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_524E:
    /* 0000524e   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000524eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_5252:
    /* 00005252   2  beq 00005270 */
    c->pc = RC_ADDR(0x00005252u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5270;

L_5254:
    /* 00005254   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5258:
    /* 00005258   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00005258u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_525C:
    /* 0000525c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000525cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5260:
    /* 00005260   2  ext.w D1 */
    c->pc = RC_ADDR(0x00005260u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_5262:
    /* 00005262   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00005262u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_5264:
    /* 00005264   4  cmp.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00005264u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5268:
    /* 00005268   2  bne 00005270 */
    c->pc = RC_ADDR(0x00005268u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5270;

L_526A:
    /* 0000526a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000526au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_526C:
    /* 0000526c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000526cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_526E:
    /* 0000526e   2  rts */
    c->pc = RC_ADDR(0x0000526eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_5270:
    /* 00005270   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00005270u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5274:
    /* 00005274   2  bra 00005238 */
    c->pc = RC_ADDR(0x00005274u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5238;

L_5276:
    /* 00005276   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00005276u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5278:
    /* 00005278   2  bra 0000526c */
    c->pc = RC_ADDR(0x00005278u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_526C;

}
