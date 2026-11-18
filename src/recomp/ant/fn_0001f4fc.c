/* fn_0001f4fc - 136 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f4fc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f4fcu): goto L_1F4FC;
    case RC_ADDR(0x0001f500u): goto L_1F500;
    case RC_ADDR(0x0001f506u): goto L_1F506;
    case RC_ADDR(0x0001f50au): goto L_1F50A;
    case RC_ADDR(0x0001f50eu): goto L_1F50E;
    case RC_ADDR(0x0001f510u): goto L_1F510;
    case RC_ADDR(0x0001f514u): goto L_1F514;
    case RC_ADDR(0x0001f516u): goto L_1F516;
    case RC_ADDR(0x0001f518u): goto L_1F518;
    case RC_ADDR(0x0001f51au): goto L_1F51A;
    case RC_ADDR(0x0001f51cu): goto L_1F51C;
    case RC_ADDR(0x0001f522u): goto L_1F522;
    case RC_ADDR(0x0001f526u): goto L_1F526;
    case RC_ADDR(0x0001f52au): goto L_1F52A;
    case RC_ADDR(0x0001f52cu): goto L_1F52C;
    case RC_ADDR(0x0001f52eu): goto L_1F52E;
    case RC_ADDR(0x0001f530u): goto L_1F530;
    case RC_ADDR(0x0001f532u): goto L_1F532;
    case RC_ADDR(0x0001f536u): goto L_1F536;
    case RC_ADDR(0x0001f538u): goto L_1F538;
    case RC_ADDR(0x0001f53cu): goto L_1F53C;
    case RC_ADDR(0x0001f540u): goto L_1F540;
    case RC_ADDR(0x0001f542u): goto L_1F542;
    case RC_ADDR(0x0001f546u): goto L_1F546;
    case RC_ADDR(0x0001f54au): goto L_1F54A;
    case RC_ADDR(0x0001f54eu): goto L_1F54E;
    case RC_ADDR(0x0001f550u): goto L_1F550;
    case RC_ADDR(0x0001f552u): goto L_1F552;
    case RC_ADDR(0x0001f554u): goto L_1F554;
    case RC_ADDR(0x0001f558u): goto L_1F558;
    case RC_ADDR(0x0001f55cu): goto L_1F55C;
    case RC_ADDR(0x0001f560u): goto L_1F560;
    case RC_ADDR(0x0001f564u): goto L_1F564;
    case RC_ADDR(0x0001f566u): goto L_1F566;
    case RC_ADDR(0x0001f56au): goto L_1F56A;
    case RC_ADDR(0x0001f570u): goto L_1F570;
    case RC_ADDR(0x0001f574u): goto L_1F574;
    case RC_ADDR(0x0001f578u): goto L_1F578;
    case RC_ADDR(0x0001f57cu): goto L_1F57C;
    case RC_ADDR(0x0001f57eu): goto L_1F57E;
    case RC_ADDR(0x0001f582u): goto L_1F582;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F4FC:
    /* 0001f4fc   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001f4fcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F500:
    /* 0001f500   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001f500u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1F506:
    /* 0001f506   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001f506u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000010u);

L_1F50A:
    /* 0001f50a   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f50au);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f50eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F50E:
    /* 0001f50e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f50eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F510:
    /* 0001f510   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f510u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F514:
    /* 0001f514   2  bne 0001f51c */
    c->pc = RC_ADDR(0x0001f514u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F51C;

L_1F516:
    /* 0001f516   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f516u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F518:
    /* 0001f518   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f518u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F51A:
    /* 0001f51a   2  rts */
    c->pc = RC_ADDR(0x0001f51au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F51C:
    /* 0001f51c   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001f51cu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1F522:
    /* 0001f522   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f522u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F526:
    /* 0001f526   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0001f526u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0001f52au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_1F52A:
    /* 0001f52a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f52au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F52C:
    /* 0001f52c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f52cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F52E:
    /* 0001f52e   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001f52eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F530:
    /* 0001f530   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f530u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F532:
    /* 0001f532   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f532u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f536u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F536:
    /* 0001f536   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f536u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F538:
    /* 0001f538   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f538u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F53C:
    /* 0001f53c   4  move.l D0,(4,A0) */
    c->pc = RC_ADDR(0x0001f53cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F540:
    /* 0001f540   2  bne 0001f554 */
    c->pc = RC_ADDR(0x0001f540u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F554;

L_1F542:
    /* 0001f542   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001f542u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000010u);

L_1F546:
    /* 0001f546   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f546u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F54A:
    /* 0001f54a   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f54au);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f54eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F54E:
    /* 0001f54e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f54eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F550:
    /* 0001f550   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f550u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F552:
    /* 0001f552   2  bra 0001f518 */
    c->pc = RC_ADDR(0x0001f552u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F518;

L_1F554:
    /* 0001f554   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f554u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F558:
    /* 0001f558   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f558u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F55C:
    /* 0001f55c   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f55cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F560:
    /* 0001f560   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0001f560u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0001f564u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_1F564:
    /* 0001f564   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f564u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F566:
    /* 0001f566   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001f566u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F56A:
    /* 0001f56a   6  move.w #1,(a,A0) */
    c->pc = RC_ADDR(0x0001f56au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F570:
    /* 0001f570   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f570u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F574:
    /* 0001f574   4  pea (ffffd29c,A4) */
    c->pc = RC_ADDR(0x0001f574u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2d64u));

L_1F578:
    /* 0001f578   4  jsr (00020542) */
    c->pc = RC_ADDR(0x0001f578u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f57cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020542u);
    return;

L_1F57C:
    /* 0001f57c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f57cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F57E:
    /* 0001f57e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001f57eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F582:
    /* 0001f582   2  bra 0001f518 */
    c->pc = RC_ADDR(0x0001f582u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F518;

}
