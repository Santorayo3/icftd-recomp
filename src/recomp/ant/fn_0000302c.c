/* fn_0000302c - 116 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000302c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0000302cu): goto L_302C;
    case RC_ADDR(0x00003030u): goto L_3030;
    case RC_ADDR(0x00003034u): goto L_3034;
    case RC_ADDR(0x00003038u): goto L_3038;
    case RC_ADDR(0x0000303au): goto L_303A;
    case RC_ADDR(0x0000303eu): goto L_303E;
    case RC_ADDR(0x00003040u): goto L_3040;
    case RC_ADDR(0x00003046u): goto L_3046;
    case RC_ADDR(0x00003048u): goto L_3048;
    case RC_ADDR(0x0000304eu): goto L_304E;
    case RC_ADDR(0x00003052u): goto L_3052;
    case RC_ADDR(0x00003056u): goto L_3056;
    case RC_ADDR(0x00003058u): goto L_3058;
    case RC_ADDR(0x0000305cu): goto L_305C;
    case RC_ADDR(0x00003062u): goto L_3062;
    case RC_ADDR(0x00003066u): goto L_3066;
    case RC_ADDR(0x0000306au): goto L_306A;
    case RC_ADDR(0x0000306cu): goto L_306C;
    case RC_ADDR(0x0000306eu): goto L_306E;
    case RC_ADDR(0x00003072u): goto L_3072;
    case RC_ADDR(0x00003076u): goto L_3076;
    case RC_ADDR(0x00003078u): goto L_3078;
    case RC_ADDR(0x0000307eu): goto L_307E;
    case RC_ADDR(0x00003082u): goto L_3082;
    case RC_ADDR(0x00003086u): goto L_3086;
    case RC_ADDR(0x00003088u): goto L_3088;
    case RC_ADDR(0x0000308cu): goto L_308C;
    case RC_ADDR(0x00003090u): goto L_3090;
    case RC_ADDR(0x00003096u): goto L_3096;
    case RC_ADDR(0x0000309cu): goto L_309C;
    case RC_ADDR(0x0000309eu): goto L_309E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_302C:
    /* 0000302c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000302cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3030:
    /* 00003030   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00003030u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3034:
    /* 00003034   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00003034u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00003038u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_3038:
    /* 00003038   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003038u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_303A:
    /* 0000303a   4  cmp.w #7d,D0 */
    c->pc = RC_ADDR(0x0000303au);
    rc_step(c, m, 8);
    t0 = 0x0000007du;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_303E:
    /* 0000303e   2  bge 0000306e */
    c->pc = RC_ADDR(0x0000303eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_306E;

L_3040:
    /* 00003040   6  cmpi.w #1d,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00003040u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_3046:
    /* 00003046   2  beq 0000306e */
    c->pc = RC_ADDR(0x00003046u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_306E;

L_3048:
    /* 00003048   6  move.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00003048u);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_304E:
    /* 0000304e   4  pea (000030a0) */
    c->pc = RC_ADDR(0x0000304eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000030a0u));

L_3052:
    /* 00003052   4  jsr (000082ce) */
    c->pc = RC_ADDR(0x00003052u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003056u));
    rc_depth++;
    c->pc = RC_ADDR(0x000082ceu);
    return;

L_3056:
    /* 00003056   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003056u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3058:
    /* 00003058   4  move.w D0,(ffff8d98,A4) */
    c->pc = RC_ADDR(0x00003058u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_305C:
    /* 0000305c   6  move.w #1,(ffff85a4,A4) */
    c->pc = RC_ADDR(0x0000305cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a5cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3062:
    /* 00003062   4  move.w #b4,-(A7) */
    c->pc = RC_ADDR(0x00003062u);
    rc_step(c, m, 12);
    t0 = 0x000000b4u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3066:
    /* 00003066   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00003066u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0000306au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_306A:
    /* 0000306a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000306au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_306C:
    /* 0000306c   2  bra 00003090 */
    c->pc = RC_ADDR(0x0000306cu);
    rc_step(c, m, 10);
    goto L_3090;

L_306E:
    /* 0000306e   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000306eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3072:
    /* 00003072   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00003072u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00003076u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_3076:
    /* 00003076   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003076u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3078:
    /* 00003078   6  move.w #1d,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00003078u);
    rc_step(c, m, 16);
    t0 = 0x0000001du;
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_307E:
    /* 0000307e   4  pea (000030a3) */
    c->pc = RC_ADDR(0x0000307eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000030a3u));

L_3082:
    /* 00003082   4  jsr (000082ce) */
    c->pc = RC_ADDR(0x00003082u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00003086u));
    rc_depth++;
    c->pc = RC_ADDR(0x000082ceu);
    return;

L_3086:
    /* 00003086   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003086u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3088:
    /* 00003088   4  move.w D0,(ffff8d98,A4) */
    c->pc = RC_ADDR(0x00003088u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_308C:
    /* 0000308c   4  clr.w (ffff85a4,A4) */
    c->pc = RC_ADDR(0x0000308cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3090:
    /* 00003090   6  move.w #1,(ffff83f2,A4) */
    c->pc = RC_ADDR(0x00003090u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3096:
    /* 00003096   6  move.w #1,(ffff8d96,A4) */
    c->pc = RC_ADDR(0x00003096u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x726au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_309C:
    /* 0000309c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000309cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_309E:
    /* 0000309e   2  rts */
    c->pc = RC_ADDR(0x0000309eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
