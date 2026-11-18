/* fn_0000226a - 64 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000226a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0000226au): goto L_226A;
    case RC_ADDR(0x0000226eu): goto L_226E;
    case RC_ADDR(0x00002272u): goto L_2272;
    case RC_ADDR(0x00002274u): goto L_2274;
    case RC_ADDR(0x00002276u): goto L_2276;
    case RC_ADDR(0x00002278u): goto L_2278;
    case RC_ADDR(0x0000227au): goto L_227A;
    case RC_ADDR(0x00002280u): goto L_2280;
    case RC_ADDR(0x00002284u): goto L_2284;
    case RC_ADDR(0x00002286u): goto L_2286;
    case RC_ADDR(0x0000228au): goto L_228A;
    case RC_ADDR(0x0000228cu): goto L_228C;
    case RC_ADDR(0x0000228eu): goto L_228E;
    case RC_ADDR(0x00002292u): goto L_2292;
    case RC_ADDR(0x00002294u): goto L_2294;
    case RC_ADDR(0x00002298u): goto L_2298;
    case RC_ADDR(0x0000229au): goto L_229A;
    case RC_ADDR(0x0000229eu): goto L_229E;
    case RC_ADDR(0x000022a4u): goto L_22A4;
    case RC_ADDR(0x000022a6u): goto L_22A6;
    case RC_ADDR(0x000022a8u): goto L_22A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_226A:
    /* 0000226a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000226au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_226E:
    /* 0000226e   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0000226eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_2272:
    /* 00002272   2  bge 0000227a */
    c->pc = RC_ADDR(0x00002272u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_227A;

L_2274:
    /* 00002274   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00002274u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2276:
    /* 00002276   2  unlk A5 */
    c->pc = RC_ADDR(0x00002276u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2278:
    /* 00002278   2  rts */
    c->pc = RC_ADDR(0x00002278u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_227A:
    /* 0000227a   6  move.l (fffff744,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000227au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8bcu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2280:
    /* 00002280   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002280u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_2284:
    /* 00002284   2  beq 000022a6 */
    c->pc = RC_ADDR(0x00002284u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22A6;

L_2286:
    /* 00002286   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00002286u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_228A:
    /* 0000228a   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0000228au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_228C:
    /* 0000228c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000228cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_228E:
    /* 0000228e   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000228eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2292:
    /* 00002292   2  bne 0000229a */
    c->pc = RC_ADDR(0x00002292u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_229A;

L_2294:
    /* 00002294   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002294u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2298:
    /* 00002298   2  bra 00002276 */
    c->pc = RC_ADDR(0x00002298u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2276;

L_229A:
    /* 0000229a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000229au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_229E:
    /* 0000229e   6  move.l (e,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000229eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22A4:
    /* 000022a4   2  bra 00002280 */
    c->pc = RC_ADDR(0x000022a4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2280;

L_22A6:
    /* 000022a6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000022a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22A8:
    /* 000022a8   2  bra 00002276 */
    c->pc = RC_ADDR(0x000022a8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2276;

}
