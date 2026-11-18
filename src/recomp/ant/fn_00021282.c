/* fn_00021282 - 70 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021282(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021282u): goto L_21282;
    case RC_ADDR(0x00021286u): goto L_21286;
    case RC_ADDR(0x00021288u): goto L_21288;
    case RC_ADDR(0x0002128cu): goto L_2128C;
    case RC_ADDR(0x00021290u): goto L_21290;
    case RC_ADDR(0x00021292u): goto L_21292;
    case RC_ADDR(0x00021296u): goto L_21296;
    case RC_ADDR(0x00021298u): goto L_21298;
    case RC_ADDR(0x0002129au): goto L_2129A;
    case RC_ADDR(0x0002129eu): goto L_2129E;
    case RC_ADDR(0x000212a0u): goto L_212A0;
    case RC_ADDR(0x000212a4u): goto L_212A4;
    case RC_ADDR(0x000212a8u): goto L_212A8;
    case RC_ADDR(0x000212aau): goto L_212AA;
    case RC_ADDR(0x000212acu): goto L_212AC;
    case RC_ADDR(0x000212aeu): goto L_212AE;
    case RC_ADDR(0x000212b2u): goto L_212B2;
    case RC_ADDR(0x000212b6u): goto L_212B6;
    case RC_ADDR(0x000212b8u): goto L_212B8;
    case RC_ADDR(0x000212bcu): goto L_212BC;
    case RC_ADDR(0x000212c0u): goto L_212C0;
    case RC_ADDR(0x000212c2u): goto L_212C2;
    case RC_ADDR(0x000212c4u): goto L_212C4;
    case RC_ADDR(0x000212c6u): goto L_212C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21282:
    /* 00021282   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021282u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21286:
    /* 00021286   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021286u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21288:
    /* 00021288   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021288u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_2128C:
    /* 0002128c   4  tst.l (1a,A2) */
    c->pc = RC_ADDR(0x0002128cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1au));
    rc_set_nzvc(c, t0, RC_L);

L_21290:
    /* 00021290   2  beq 0002129a */
    c->pc = RC_ADDR(0x00021290u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2129A;

L_21292:
    /* 00021292   4  move.l (1a,A2),-(A7) */
    c->pc = RC_ADDR(0x00021292u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21296:
    /* 00021296   2  bsr 00021272 */
    c->pc = RC_ADDR(0x00021296u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021298u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021272u);
    return;

L_21298:
    /* 00021298   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021298u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2129A:
    /* 0002129a   4  tst.l (1e,A2) */
    c->pc = RC_ADDR(0x0002129au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_2129E:
    /* 0002129e   2  beq 000212b8 */
    c->pc = RC_ADDR(0x0002129eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_212B8;

L_212A0:
    /* 000212a0   4  move.w (22,A2),D0 */
    c->pc = RC_ADDR(0x000212a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_212A4:
    /* 000212a4   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x000212a4u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_212A8:
    /* 000212a8   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000212a8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_212AA:
    /* 000212aa   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000212aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_212AC:
    /* 000212ac   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000212acu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212AE:
    /* 000212ae   4  move.l (1e,A2),-(A7) */
    c->pc = RC_ADDR(0x000212aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_212B2:
    /* 000212b2   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000212b2u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000212b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_212B6:
    /* 000212b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000212b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_212B8:
    /* 000212b8   4  clr.l (1e,A2) */
    c->pc = RC_ADDR(0x000212b8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_212BC:
    /* 000212bc   4  clr.l (1a,A2) */
    c->pc = RC_ADDR(0x000212bcu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_212C0:
    /* 000212c0   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000212c0u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_212C2:
    /* 000212c2   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x000212c2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_212C4:
    /* 000212c4   2  unlk A5 */
    c->pc = RC_ADDR(0x000212c4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_212C6:
    /* 000212c6   2  rts */
    c->pc = RC_ADDR(0x000212c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
