/* fn_00012520 - 78 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012520(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012520u): goto L_12520;
    case RC_ADDR(0x00012524u): goto L_12524;
    case RC_ADDR(0x00012528u): goto L_12528;
    case RC_ADDR(0x0001252cu): goto L_1252C;
    case RC_ADDR(0x00012530u): goto L_12530;
    case RC_ADDR(0x00012534u): goto L_12534;
    case RC_ADDR(0x00012538u): goto L_12538;
    case RC_ADDR(0x0001253cu): goto L_1253C;
    case RC_ADDR(0x0001253eu): goto L_1253E;
    case RC_ADDR(0x00012542u): goto L_12542;
    case RC_ADDR(0x00012544u): goto L_12544;
    case RC_ADDR(0x00012548u): goto L_12548;
    case RC_ADDR(0x0001254cu): goto L_1254C;
    case RC_ADDR(0x00012550u): goto L_12550;
    case RC_ADDR(0x00012552u): goto L_12552;
    case RC_ADDR(0x00012556u): goto L_12556;
    case RC_ADDR(0x0001255cu): goto L_1255C;
    case RC_ADDR(0x0001255eu): goto L_1255E;
    case RC_ADDR(0x00012564u): goto L_12564;
    case RC_ADDR(0x0001256au): goto L_1256A;
    case RC_ADDR(0x0001256cu): goto L_1256C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12520:
    /* 00012520   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00012520u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12524:
    /* 00012524   4  movea.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x00012524u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] = t0;

L_12528:
    /* 00012528   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x00012528u);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1252C:
    /* 0001252c   4  movea.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x0001252cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] = t0;

L_12530:
    /* 00012530   4  move.w #2a,(A0) */
    c->pc = RC_ADDR(0x00012530u);
    rc_step(c, m, 12);
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12534:
    /* 00012534   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012534u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12538:
    /* 00012538   4  pea (00001f40).l */
    c->pc = RC_ADDR(0x00012538u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001f40u);

L_1253C:
    /* 0001253c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001253cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1253E:
    /* 0001253e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001253eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12542:
    /* 00012542   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012542u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12544:
    /* 00012544   4  lea (fffffb0a,A4),A0 */
    c->pc = RC_ADDR(0x00012544u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4f6u);

L_12548:
    /* 00012548   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00012548u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1254C:
    /* 0001254c   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001254cu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00012550u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_12550:
    /* 00012550   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00012550u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12552:
    /* 00012552   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012552u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12556:
    /* 00012556   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012556u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1255C:
    /* 0001255c   2  bcs 00012538 */
    c->pc = RC_ADDR(0x0001255cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_12538; }

L_1255E:
    /* 0001255e   6  move.l (14fa,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001255eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14fau));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12564:
    /* 00012564   6  move.l (14fe,A4),(ffffd33c,A4) */
    c->pc = RC_ADDR(0x00012564u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14feu));
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1256A:
    /* 0001256a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001256au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1256C:
    /* 0001256c   2  rts */
    c->pc = RC_ADDR(0x0001256cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
