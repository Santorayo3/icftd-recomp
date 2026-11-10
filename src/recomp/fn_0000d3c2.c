/* fn_0000d3c2 - 218 byte(s), 65 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d3c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d3c2u): goto L_D3C2;
    case RC_ADDR(0x0000d3c6u): goto L_D3C6;
    case RC_ADDR(0x0000d3cau): goto L_D3CA;
    case RC_ADDR(0x0000d3ccu): goto L_D3CC;
    case RC_ADDR(0x0000d3ceu): goto L_D3CE;
    case RC_ADDR(0x0000d3d2u): goto L_D3D2;
    case RC_ADDR(0x0000d3d6u): goto L_D3D6;
    case RC_ADDR(0x0000d3d8u): goto L_D3D8;
    case RC_ADDR(0x0000d3dcu): goto L_D3DC;
    case RC_ADDR(0x0000d3e0u): goto L_D3E0;
    case RC_ADDR(0x0000d3e4u): goto L_D3E4;
    case RC_ADDR(0x0000d3e6u): goto L_D3E6;
    case RC_ADDR(0x0000d3eau): goto L_D3EA;
    case RC_ADDR(0x0000d3eeu): goto L_D3EE;
    case RC_ADDR(0x0000d3f2u): goto L_D3F2;
    case RC_ADDR(0x0000d3f6u): goto L_D3F6;
    case RC_ADDR(0x0000d3f8u): goto L_D3F8;
    case RC_ADDR(0x0000d3fcu): goto L_D3FC;
    case RC_ADDR(0x0000d400u): goto L_D400;
    case RC_ADDR(0x0000d404u): goto L_D404;
    case RC_ADDR(0x0000d408u): goto L_D408;
    case RC_ADDR(0x0000d40cu): goto L_D40C;
    case RC_ADDR(0x0000d410u): goto L_D410;
    case RC_ADDR(0x0000d414u): goto L_D414;
    case RC_ADDR(0x0000d416u): goto L_D416;
    case RC_ADDR(0x0000d41au): goto L_D41A;
    case RC_ADDR(0x0000d41eu): goto L_D41E;
    case RC_ADDR(0x0000d420u): goto L_D420;
    case RC_ADDR(0x0000d422u): goto L_D422;
    case RC_ADDR(0x0000d428u): goto L_D428;
    case RC_ADDR(0x0000d42cu): goto L_D42C;
    case RC_ADDR(0x0000d42eu): goto L_D42E;
    case RC_ADDR(0x0000d430u): goto L_D430;
    case RC_ADDR(0x0000d434u): goto L_D434;
    case RC_ADDR(0x0000d438u): goto L_D438;
    case RC_ADDR(0x0000d43au): goto L_D43A;
    case RC_ADDR(0x0000d43cu): goto L_D43C;
    case RC_ADDR(0x0000d43eu): goto L_D43E;
    case RC_ADDR(0x0000d442u): goto L_D442;
    case RC_ADDR(0x0000d446u): goto L_D446;
    case RC_ADDR(0x0000d448u): goto L_D448;
    case RC_ADDR(0x0000d44cu): goto L_D44C;
    case RC_ADDR(0x0000d44eu): goto L_D44E;
    case RC_ADDR(0x0000d454u): goto L_D454;
    case RC_ADDR(0x0000d458u): goto L_D458;
    case RC_ADDR(0x0000d45cu): goto L_D45C;
    case RC_ADDR(0x0000d45eu): goto L_D45E;
    case RC_ADDR(0x0000d464u): goto L_D464;
    case RC_ADDR(0x0000d468u): goto L_D468;
    case RC_ADDR(0x0000d46cu): goto L_D46C;
    case RC_ADDR(0x0000d46eu): goto L_D46E;
    case RC_ADDR(0x0000d472u): goto L_D472;
    case RC_ADDR(0x0000d476u): goto L_D476;
    case RC_ADDR(0x0000d478u): goto L_D478;
    case RC_ADDR(0x0000d47cu): goto L_D47C;
    case RC_ADDR(0x0000d47eu): goto L_D47E;
    case RC_ADDR(0x0000d482u): goto L_D482;
    case RC_ADDR(0x0000d486u): goto L_D486;
    case RC_ADDR(0x0000d488u): goto L_D488;
    case RC_ADDR(0x0000d48cu): goto L_D48C;
    case RC_ADDR(0x0000d48eu): goto L_D48E;
    case RC_ADDR(0x0000d490u): goto L_D490;
    case RC_ADDR(0x0000d494u): goto L_D494;
    case RC_ADDR(0x0000d498u): goto L_D498;
    case RC_ADDR(0x0000d49au): goto L_D49A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D3C2:
    /* 0000d3c2   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0000d3c2u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_D3C6:
    /* 0000d3c6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d3c6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3CA:
    /* 0000d3ca   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d3cau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_D3CC:
    /* 0000d3cc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d3ccu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D3CE:
    /* 0000d3ce   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x0000d3ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_D3D2:
    /* 0000d3d2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d3d2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3D6:
    /* 0000d3d6   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000d3d6u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_D3D8:
    /* 0000d3d8   4  move.w D1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000d3d8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3DC:
    /* 0000d3dc   4  clr.l (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d3dcu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D3E0:
    /* 0000d3e0   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000d3e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3E4:
    /* 0000d3e4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d3e4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D3E6:
    /* 0000d3e6   4  lea (ffff9904,A4),A0 */
    c->pc = RC_ADDR(0x0000d3e6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x66fcu);

L_D3EA:
    /* 0000d3ea   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d3eau);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_D3EE:
    /* 0000d3ee   4  beq 0000d498 */
    c->pc = RC_ADDR(0x0000d3eeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_D498;

L_D3F2:
    /* 0000d3f2   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000d3f2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3F6:
    /* 0000d3f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d3f6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D3F8:
    /* 0000d3f8   4  lea (ffff9904,A4),A0 */
    c->pc = RC_ADDR(0x0000d3f8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x66fcu);

L_D3FC:
    /* 0000d3fc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d3fcu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D400:
    /* 0000d400   4  cmp.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000d400u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D404:
    /* 0000d404   4  bne 0000d490 */
    c->pc = RC_ADDR(0x0000d404u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_D490;

L_D408:
    /* 0000d408   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d408u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D40C:
    /* 0000d40c   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d40cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D410:
    /* 0000d410   4  jsr (0000d49c) */
    c->pc = RC_ADDR(0x0000d410u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d414u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d49cu);
    return;

L_D414:
    /* 0000d414   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d414u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D416:
    /* 0000d416   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000d416u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D41A:
    /* 0000d41a   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d41au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D41E:
    /* 0000d41e   2  bsr 0000d3c2 */
    c->pc = RC_ADDR(0x0000d41eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d420u));
    rc_depth++;
    goto L_D3C2;

L_D420:
    /* 0000d420   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d420u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D422:
    /* 0000d422   6  addi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000d422u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000027u;
    rc_flags_add(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D428:
    /* 0000d428   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d428u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D42C:
    /* 0000d42c   2  bsr 0000d3c2 */
    c->pc = RC_ADDR(0x0000d42cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d42eu));
    rc_depth++;
    goto L_D3C2;

L_D42E:
    /* 0000d42e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d42eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D430:
    /* 0000d430   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d430u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D434:
    /* 0000d434   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000d434u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D438:
    /* 0000d438   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d438u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D43A:
    /* 0000d43a   2  bsr 0000d3c2 */
    c->pc = RC_ADDR(0x0000d43au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d43cu));
    rc_depth++;
    goto L_D3C2;

L_D43C:
    /* 0000d43c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d43cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D43E:
    /* 0000d43e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d43eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D442:
    /* 0000d442   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000d442u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D446:
    /* 0000d446   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d446u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D448:
    /* 0000d448   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000d448u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d44cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_D44C:
    /* 0000d44c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d44cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D44E:
    /* 0000d44e   6  subi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000d44eu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000027u;
    rc_flags_sub(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D454:
    /* 0000d454   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d454u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D458:
    /* 0000d458   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000d458u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d45cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_D45C:
    /* 0000d45c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d45cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D45E:
    /* 0000d45e   6  subi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000d45eu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000027u;
    rc_flags_sub(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D464:
    /* 0000d464   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d464u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D468:
    /* 0000d468   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000d468u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d46cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_D46C:
    /* 0000d46c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d46cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D46E:
    /* 0000d46e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d46eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D472:
    /* 0000d472   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000d472u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D476:
    /* 0000d476   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d476u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D478:
    /* 0000d478   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000d478u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d47cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_D47C:
    /* 0000d47c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d47cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D47E:
    /* 0000d47e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000d47eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D482:
    /* 0000d482   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000d482u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D486:
    /* 0000d486   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000d486u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D488:
    /* 0000d488   4  jsr (0000d3c2) */
    c->pc = RC_ADDR(0x0000d488u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000d48cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d3c2u);
    return;

L_D48C:
    /* 0000d48c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d48cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D48E:
    /* 0000d48e   2  bra 0000d498 */
    c->pc = RC_ADDR(0x0000d48eu);
    rc_step(c, m);
    goto L_D498;

L_D490:
    /* 0000d490   4  addq.l #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000d490u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D494:
    /* 0000d494   4  bra 0000d3e0 */
    c->pc = RC_ADDR(0x0000d494u);
    rc_step(c, m);
    rc_tick();
    goto L_D3E0;

L_D498:
    /* 0000d498   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d498u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D49A:
    /* 0000d49a   2  rts */
    c->pc = RC_ADDR(0x0000d49au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
