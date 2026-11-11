/* fn_000133d4 - 92 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000133d4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000133d4u): goto L_133D4;
    case RC_ADDR(0x000133d8u): goto L_133D8;
    case RC_ADDR(0x000133dcu): goto L_133DC;
    case RC_ADDR(0x000133e0u): goto L_133E0;
    case RC_ADDR(0x000133e2u): goto L_133E2;
    case RC_ADDR(0x000133e6u): goto L_133E6;
    case RC_ADDR(0x000133e8u): goto L_133E8;
    case RC_ADDR(0x000133ecu): goto L_133EC;
    case RC_ADDR(0x000133f0u): goto L_133F0;
    case RC_ADDR(0x000133f4u): goto L_133F4;
    case RC_ADDR(0x000133f8u): goto L_133F8;
    case RC_ADDR(0x000133fcu): goto L_133FC;
    case RC_ADDR(0x00013400u): goto L_13400;
    case RC_ADDR(0x00013402u): goto L_13402;
    case RC_ADDR(0x00013406u): goto L_13406;
    case RC_ADDR(0x0001340au): goto L_1340A;
    case RC_ADDR(0x0001340eu): goto L_1340E;
    case RC_ADDR(0x00013412u): goto L_13412;
    case RC_ADDR(0x00013416u): goto L_13416;
    case RC_ADDR(0x0001341au): goto L_1341A;
    case RC_ADDR(0x0001341eu): goto L_1341E;
    case RC_ADDR(0x00013422u): goto L_13422;
    case RC_ADDR(0x00013426u): goto L_13426;
    case RC_ADDR(0x0001342cu): goto L_1342C;
    case RC_ADDR(0x0001342eu): goto L_1342E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_133D4:
    /* 000133d4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000133d4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_133D8:
    /* 000133d8   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000133d8u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_133DC:
    /* 000133dc   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000133dcu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000133e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_133E0:
    /* 000133e0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000133e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_133E2:
    /* 000133e2   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x000133e2u);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_133E6:
    /* 000133e6   2  bge 00013402 */
    c->pc = RC_ADDR(0x000133e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13402;

L_133E8:
    /* 000133e8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000133e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133EC:
    /* 000133ec   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000133ecu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_133F0:
    /* 000133f0   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x000133f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc7au);

L_133F4:
    /* 000133f4   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000133f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133F8:
    /* 000133f8   4  add.w #32,D1 */
    c->pc = RC_ADDR(0x000133f8u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_133FC:
    /* 000133fc   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000133fcu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13400:
    /* 00013400   2  bra 0001341a */
    c->pc = RC_ADDR(0x00013400u);
    rc_step(c, m, 10);
    goto L_1341A;

L_13402:
    /* 00013402   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013402u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13406:
    /* 00013406   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013406u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1340A:
    /* 0001340a   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x0001340au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc7au);

L_1340E:
    /* 0001340e   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001340eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13412:
    /* 00013412   4  sub.w #32,D1 */
    c->pc = RC_ADDR(0x00013412u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13416:
    /* 00013416   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013416u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1341A:
    /* 0001341a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001341au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1341E:
    /* 0001341e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001341eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13422:
    /* 00013422   4  lea (fffff390,A4),A0 */
    c->pc = RC_ADDR(0x00013422u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc70u);

L_13426:
    /* 00013426   6  move.b #14,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013426u);
    rc_step(c, m, 18);
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1342C:
    /* 0001342c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001342cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1342E:
    /* 0001342e   2  rts */
    c->pc = RC_ADDR(0x0001342eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
