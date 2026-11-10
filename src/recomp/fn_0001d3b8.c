/* fn_0001d3b8 - 158 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d3b8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d3b8u): goto L_1D3B8;
    case RC_ADDR(0x0001d3bcu): goto L_1D3BC;
    case RC_ADDR(0x0001d3beu): goto L_1D3BE;
    case RC_ADDR(0x0001d3c4u): goto L_1D3C4;
    case RC_ADDR(0x0001d3c8u): goto L_1D3C8;
    case RC_ADDR(0x0001d3ccu): goto L_1D3CC;
    case RC_ADDR(0x0001d3ceu): goto L_1D3CE;
    case RC_ADDR(0x0001d3d2u): goto L_1D3D2;
    case RC_ADDR(0x0001d3d6u): goto L_1D3D6;
    case RC_ADDR(0x0001d3d8u): goto L_1D3D8;
    case RC_ADDR(0x0001d3dau): goto L_1D3DA;
    case RC_ADDR(0x0001d3dcu): goto L_1D3DC;
    case RC_ADDR(0x0001d3deu): goto L_1D3DE;
    case RC_ADDR(0x0001d3e0u): goto L_1D3E0;
    case RC_ADDR(0x0001d3e4u): goto L_1D3E4;
    case RC_ADDR(0x0001d3e8u): goto L_1D3E8;
    case RC_ADDR(0x0001d3ecu): goto L_1D3EC;
    case RC_ADDR(0x0001d3f0u): goto L_1D3F0;
    case RC_ADDR(0x0001d3f4u): goto L_1D3F4;
    case RC_ADDR(0x0001d3f8u): goto L_1D3F8;
    case RC_ADDR(0x0001d3fcu): goto L_1D3FC;
    case RC_ADDR(0x0001d3feu): goto L_1D3FE;
    case RC_ADDR(0x0001d402u): goto L_1D402;
    case RC_ADDR(0x0001d404u): goto L_1D404;
    case RC_ADDR(0x0001d40au): goto L_1D40A;
    case RC_ADDR(0x0001d40eu): goto L_1D40E;
    case RC_ADDR(0x0001d414u): goto L_1D414;
    case RC_ADDR(0x0001d416u): goto L_1D416;
    case RC_ADDR(0x0001d41cu): goto L_1D41C;
    case RC_ADDR(0x0001d420u): goto L_1D420;
    case RC_ADDR(0x0001d424u): goto L_1D424;
    case RC_ADDR(0x0001d426u): goto L_1D426;
    case RC_ADDR(0x0001d42au): goto L_1D42A;
    case RC_ADDR(0x0001d42cu): goto L_1D42C;
    case RC_ADDR(0x0001d42eu): goto L_1D42E;
    case RC_ADDR(0x0001d430u): goto L_1D430;
    case RC_ADDR(0x0001d432u): goto L_1D432;
    case RC_ADDR(0x0001d436u): goto L_1D436;
    case RC_ADDR(0x0001d438u): goto L_1D438;
    case RC_ADDR(0x0001d43au): goto L_1D43A;
    case RC_ADDR(0x0001d43cu): goto L_1D43C;
    case RC_ADDR(0x0001d43eu): goto L_1D43E;
    case RC_ADDR(0x0001d440u): goto L_1D440;
    case RC_ADDR(0x0001d444u): goto L_1D444;
    case RC_ADDR(0x0001d448u): goto L_1D448;
    case RC_ADDR(0x0001d44au): goto L_1D44A;
    case RC_ADDR(0x0001d44eu): goto L_1D44E;
    case RC_ADDR(0x0001d450u): goto L_1D450;
    case RC_ADDR(0x0001d454u): goto L_1D454;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D3B8:
    /* 0001d3b8   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001d3b8u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1D3BC:
    /* 0001d3bc   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d3bcu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3BE:
    /* 0001d3be   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001d3beu);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_1D3C4:
    /* 0001d3c4   4  pea (00000028).l */
    c->pc = RC_ADDR(0x0001d3c4u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000028u);

L_1D3C8:
    /* 0001d3c8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d3c8u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d3ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D3CC:
    /* 0001d3cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d3ccu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D3CE:
    /* 0001d3ce   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d3ceu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3D2:
    /* 0001d3d2   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d3d2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D3D6:
    /* 0001d3d6   2  bne 0001d3e0 */
    c->pc = RC_ADDR(0x0001d3d6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D3E0;

L_1D3D8:
    /* 0001d3d8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d3d8u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D3DA:
    /* 0001d3da   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001d3dau);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D3DC:
    /* 0001d3dc   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d3dcu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D3DE:
    /* 0001d3de   2  rts */
    c->pc = RC_ADDR(0x0001d3deu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D3E0:
    /* 0001d3e0   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3E4:
    /* 0001d3e4   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3e4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3E8:
    /* 0001d3e8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3e8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3EC:
    /* 0001d3ec   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d3ecu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D3F0:
    /* 0001d3f0   4  jsr (00021850) */
    c->pc = RC_ADDR(0x0001d3f0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d3f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021850u);
    return;

L_1D3F4:
    /* 0001d3f4   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0001d3f4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x10u);

L_1D3F8:
    /* 0001d3f8   4  movea.l (fffffffc,A5),A2 */
    c->pc = RC_ADDR(0x0001d3f8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[2] = t0;

L_1D3FC:
    /* 0001d3fc   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001d3fcu);
    rc_step(c, m);
    c->a[2] += 0x00000008u;

L_1D3FE:
    /* 0001d3fe   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d3feu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D402:
    /* 0001d402   2  bra 0001d444 */
    c->pc = RC_ADDR(0x0001d402u);
    rc_step(c, m);
    goto L_1D444;

L_1D404:
    /* 0001d404   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001d404u);
    rc_step(c, m);
    rc_push32(c, m, 0x00010002u);

L_1D40A:
    /* 0001d40a   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001d40au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D40E:
    /* 0001d40e   6  add.l #f,D0 */
    c->pc = RC_ADDR(0x0001d40eu);
    rc_step(c, m);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1D414:
    /* 0001d414   2  lsr.l #3,D0 */
    c->pc = RC_ADDR(0x0001d414u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1D416:
    /* 0001d416   6  and.l #fffe,D0 */
    c->pc = RC_ADDR(0x0001d416u);
    rc_step(c, m);
    t0 = 0x0000fffeu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_1D41C:
    /* 0001d41c   4  move.l (10,A5),D1 */
    c->pc = RC_ADDR(0x0001d41cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D420:
    /* 0001d420   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0001d420u);
    rc_step(c, m);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0001d424u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d22u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_1D424:
    /* 0001d424   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d424u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D426:
    /* 0001d426   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d426u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d42au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D42A:
    /* 0001d42a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d42au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D42C:
    /* 0001d42c   2  move.l D0,(A2) */
    c->pc = RC_ADDR(0x0001d42cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D42E:
    /* 0001d42e   2  tst.l (A2) */
    c->pc = RC_ADDR(0x0001d42eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_L);

L_1D430:
    /* 0001d430   2  bne 0001d43e */
    c->pc = RC_ADDR(0x0001d430u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D43E;

L_1D432:
    /* 0001d432   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d432u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D436:
    /* 0001d436   2  bsr 0001d456 */
    c->pc = RC_ADDR(0x0001d436u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d438u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d456u);
    return;

L_1D438:
    /* 0001d438   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d438u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D43A:
    /* 0001d43a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d43au);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D43C:
    /* 0001d43c   2  bra 0001d3da */
    c->pc = RC_ADDR(0x0001d43cu);
    rc_step(c, m);
    rc_tick();
    goto L_1D3DA;

L_1D43E:
    /* 0001d43e   2  addq.l #4,A2 */
    c->pc = RC_ADDR(0x0001d43eu);
    rc_step(c, m);
    c->a[2] += 0x00000004u;

L_1D440:
    /* 0001d440   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d440u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D444:
    /* 0001d444   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d444u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D448:
    /* 0001d448   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d448u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1D44A:
    /* 0001d44a   4  cmp.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0001d44au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1D44E:
    /* 0001d44e   2  bcs 0001d404 */
    c->pc = RC_ADDR(0x0001d44eu);
    rc_step(c, m);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D404; }

L_1D450:
    /* 0001d450   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d450u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D454:
    /* 0001d454   2  bra 0001d3da */
    c->pc = RC_ADDR(0x0001d454u);
    rc_step(c, m);
    rc_tick();
    goto L_1D3DA;

}
