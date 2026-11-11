/* fn_00021650 - 60 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021650(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021650u): goto L_21650;
    case RC_ADDR(0x00021654u): goto L_21654;
    case RC_ADDR(0x00021656u): goto L_21656;
    case RC_ADDR(0x0002165au): goto L_2165A;
    case RC_ADDR(0x0002165cu): goto L_2165C;
    case RC_ADDR(0x0002165eu): goto L_2165E;
    case RC_ADDR(0x00021660u): goto L_21660;
    case RC_ADDR(0x00021662u): goto L_21662;
    case RC_ADDR(0x00021664u): goto L_21664;
    case RC_ADDR(0x0002166au): goto L_2166A;
    case RC_ADDR(0x00021672u): goto L_21672;
    case RC_ADDR(0x0002167au): goto L_2167A;
    case RC_ADDR(0x0002167cu): goto L_2167C;
    case RC_ADDR(0x00021680u): goto L_21680;
    case RC_ADDR(0x00021682u): goto L_21682;
    case RC_ADDR(0x00021684u): goto L_21684;
    case RC_ADDR(0x00021688u): goto L_21688;
    case RC_ADDR(0x0002168au): goto L_2168A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21650:
    /* 00021650   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021650u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21654:
    /* 00021654   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021654u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21656:
    /* 00021656   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021656u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_2165A:
    /* 0002165a   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0002165au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2165C:
    /* 0002165c   2  bne 00021664 */
    c->pc = RC_ADDR(0x0002165cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21664;

L_2165E:
    /* 0002165e   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0002165eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_21660:
    /* 00021660   2  unlk A5 */
    c->pc = RC_ADDR(0x00021660u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21662:
    /* 00021662   2  rts */
    c->pc = RC_ADDR(0x00021662u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21664:
    /* 00021664   6  move.b #ff,(8,A2) */
    c->pc = RC_ADDR(0x00021664u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2166A:
    /* 0002166a   8  move.l #ffffffff,(14,A2) */
    c->pc = RC_ADDR(0x0002166au);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21672:
    /* 00021672   8  move.l #ffffffff,(18,A2) */
    c->pc = RC_ADDR(0x00021672u);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2167A:
    /* 0002167a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002167au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2167C:
    /* 0002167c   4  move.w (12,A2),D0 */
    c->pc = RC_ADDR(0x0002167cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21680:
    /* 00021680   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021680u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21682:
    /* 00021682   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021682u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21684:
    /* 00021684   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00021684u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00021688u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_21688:
    /* 00021688   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021688u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2168A:
    /* 0002168a   2  bra 0002165e */
    c->pc = RC_ADDR(0x0002168au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2165E;

}
