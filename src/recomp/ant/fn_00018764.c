/* fn_00018764 - 56 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018764(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018764u): goto L_18764;
    case RC_ADDR(0x00018768u): goto L_18768;
    case RC_ADDR(0x0001876cu): goto L_1876C;
    case RC_ADDR(0x00018770u): goto L_18770;
    case RC_ADDR(0x00018772u): goto L_18772;
    case RC_ADDR(0x00018778u): goto L_18778;
    case RC_ADDR(0x0001877au): goto L_1877A;
    case RC_ADDR(0x0001877eu): goto L_1877E;
    case RC_ADDR(0x00018784u): goto L_18784;
    case RC_ADDR(0x00018788u): goto L_18788;
    case RC_ADDR(0x0001878cu): goto L_1878C;
    case RC_ADDR(0x0001878eu): goto L_1878E;
    case RC_ADDR(0x00018790u): goto L_18790;
    case RC_ADDR(0x00018792u): goto L_18792;
    case RC_ADDR(0x00018794u): goto L_18794;
    case RC_ADDR(0x00018798u): goto L_18798;
    case RC_ADDR(0x0001879au): goto L_1879A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18764:
    /* 00018764   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018764u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18768:
    /* 00018768   4  pea (1d52,A4) */
    c->pc = RC_ADDR(0x00018768u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1d52u));

L_1876C:
    /* 0001876c   4  jsr (ffff8320,A4) */
    c->pc = RC_ADDR(0x0001876cu);
    rc_step(c, m, 18);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x00018770u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e16u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234beu);
    return;

L_18770:
    /* 00018770   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018770u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18772:
    /* 00018772   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x00018772u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18778:
    /* 00018778   2  swap D0 */
    c->pc = RC_ADDR(0x00018778u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1877A:
    /* 0001877a   4  move.w #1388,D1 */
    c->pc = RC_ADDR(0x0001877au);
    rc_step(c, m, 8);
    t0 = 0x00001388u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1877E:
    /* 0001877e   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x0001877eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18784:
    /* 00018784   4  dbf D1,0001877e */
    c->pc = RC_ADDR(0x00018784u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1877E; }
    }

L_18788:
    /* 00018788   4  lea (1d52,A4),A0 */
    c->pc = RC_ADDR(0x00018788u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1d52u);

L_1878C:
    /* 0001878c   2  move.l (A0)+,D1 */
    c->pc = RC_ADDR(0x0001878cu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1878E:
    /* 0001878e   2  add.l (A0)+,D1 */
    c->pc = RC_ADDR(0x0001878eu);
    rc_step(c, m, 14);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_18790:
    /* 00018790   2  add.l (A0)+,D1 */
    c->pc = RC_ADDR(0x00018790u);
    rc_step(c, m, 14);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_18792:
    /* 00018792   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00018792u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_18794:
    /* 00018794   4  move.l D0,(ffffd38a,A4) */
    c->pc = RC_ADDR(0x00018794u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2c76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18798:
    /* 00018798   2  unlk A5 */
    c->pc = RC_ADDR(0x00018798u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1879A:
    /* 0001879a   2  rts */
    c->pc = RC_ADDR(0x0001879au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
