/* fn_00005468 - 86 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005468(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005468u): goto L_5468;
    case RC_ADDR(0x0000546cu): goto L_546C;
    case RC_ADDR(0x00005470u): goto L_5470;
    case RC_ADDR(0x00005474u): goto L_5474;
    case RC_ADDR(0x00005476u): goto L_5476;
    case RC_ADDR(0x00005478u): goto L_5478;
    case RC_ADDR(0x0000547cu): goto L_547C;
    case RC_ADDR(0x00005480u): goto L_5480;
    case RC_ADDR(0x00005484u): goto L_5484;
    case RC_ADDR(0x00005488u): goto L_5488;
    case RC_ADDR(0x0000548cu): goto L_548C;
    case RC_ADDR(0x00005490u): goto L_5490;
    case RC_ADDR(0x00005494u): goto L_5494;
    case RC_ADDR(0x00005498u): goto L_5498;
    case RC_ADDR(0x0000549au): goto L_549A;
    case RC_ADDR(0x0000549eu): goto L_549E;
    case RC_ADDR(0x000054a2u): goto L_54A2;
    case RC_ADDR(0x000054a6u): goto L_54A6;
    case RC_ADDR(0x000054aau): goto L_54AA;
    case RC_ADDR(0x000054aeu): goto L_54AE;
    case RC_ADDR(0x000054b2u): goto L_54B2;
    case RC_ADDR(0x000054b6u): goto L_54B6;
    case RC_ADDR(0x000054bau): goto L_54BA;
    case RC_ADDR(0x000054bcu): goto L_54BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5468:
    /* 00005468   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00005468u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_546C:
    /* 0000546c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000546cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5470:
    /* 00005470   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00005470u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00005474u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_5474:
    /* 00005474   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005474u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5476:
    /* 00005476   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005476u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5478:
    /* 00005478   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005478u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_547C:
    /* 0000547c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000547cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5480:
    /* 00005480   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005480u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5484:
    /* 00005484   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00005484u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5488:
    /* 00005488   4  jsr (ffff83c8,A4) */
    c->pc = RC_ADDR(0x00005488u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000548cu));
    rc_depth++;
    t3 = (c->a[4] - 0x7c38u);
    c->pc = t3;
    return;

L_548C:
    /* 0000548c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000548cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_5490:
    /* 00005490   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00005490u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5494:
    /* 00005494   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00005494u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5498:
    /* 00005498   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00005498u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_549A:
    /* 0000549a   4  sub.w D0,(c,A5) */
    c->pc = RC_ADDR(0x0000549au);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_549E:
    /* 0000549e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000549eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_54A2:
    /* 000054a2   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000054a2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_54A6:
    /* 000054a6   4  move.w (e,A5),-(A7) */
    c->pc = RC_ADDR(0x000054a6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_54AA:
    /* 000054aa   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000054aau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_54AE:
    /* 000054ae   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000054aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_54B2:
    /* 000054b2   4  jsr (000053b0) */
    c->pc = RC_ADDR(0x000054b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000054b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000053b0u);
    return;

L_54B6:
    /* 000054b6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000054b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_54BA:
    /* 000054ba   2  unlk A5 */
    c->pc = RC_ADDR(0x000054bau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_54BC:
    /* 000054bc   2  rts */
    c->pc = RC_ADDR(0x000054bcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
