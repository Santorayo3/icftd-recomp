/* fn_00023628 - 70 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023628(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023628u): goto L_23628;
    case RC_ADDR(0x0002362cu): goto L_2362C;
    case RC_ADDR(0x0002362eu): goto L_2362E;
    case RC_ADDR(0x00023632u): goto L_23632;
    case RC_ADDR(0x00023636u): goto L_23636;
    case RC_ADDR(0x00023638u): goto L_23638;
    case RC_ADDR(0x0002363au): goto L_2363A;
    case RC_ADDR(0x0002363eu): goto L_2363E;
    case RC_ADDR(0x00023640u): goto L_23640;
    case RC_ADDR(0x00023646u): goto L_23646;
    case RC_ADDR(0x0002364eu): goto L_2364E;
    case RC_ADDR(0x00023650u): goto L_23650;
    case RC_ADDR(0x00023654u): goto L_23654;
    case RC_ADDR(0x00023656u): goto L_23656;
    case RC_ADDR(0x0002365au): goto L_2365A;
    case RC_ADDR(0x0002365eu): goto L_2365E;
    case RC_ADDR(0x00023660u): goto L_23660;
    case RC_ADDR(0x00023664u): goto L_23664;
    case RC_ADDR(0x00023668u): goto L_23668;
    case RC_ADDR(0x0002366au): goto L_2366A;
    case RC_ADDR(0x0002366cu): goto L_2366C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23628:
    /* 00023628   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00023628u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2362C:
    /* 0002362c   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0002362cu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2362E:
    /* 0002362e   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0002362eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_23632:
    /* 00023632   4  tst.l (a,A2) */
    c->pc = RC_ADDR(0x00023632u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_23636:
    /* 00023636   2  beq 00023640 */
    c->pc = RC_ADDR(0x00023636u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23640;

L_23638:
    /* 00023638   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00023638u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2363A:
    /* 0002363a   4  jsr (000237f4) */
    c->pc = RC_ADDR(0x0002363au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002363eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000237f4u);
    return;

L_2363E:
    /* 0002363e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002363eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23640:
    /* 00023640   6  move.b #ff,(8,A2) */
    c->pc = RC_ADDR(0x00023640u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_23646:
    /* 00023646   8  move.l #ffffffff,(14,A2) */
    c->pc = RC_ADDR(0x00023646u);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2364E:
    /* 0002364e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002364eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_23650:
    /* 00023650   4  move.b (f,A2),D0 */
    c->pc = RC_ADDR(0x00023650u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_23654:
    /* 00023654   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023654u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23656:
    /* 00023656   4  jsr (00023782) */
    c->pc = RC_ADDR(0x00023656u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002365au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023782u);
    return;

L_2365A:
    /* 0002365a   4  pea (00000022).l */
    c->pc = RC_ADDR(0x0002365au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000022u);

L_2365E:
    /* 0002365e   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0002365eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23660:
    /* 00023660   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00023660u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00023664u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_23664:
    /* 00023664   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00023664u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_23668:
    /* 00023668   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00023668u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_2366A:
    /* 0002366a   2  unlk A5 */
    c->pc = RC_ADDR(0x0002366au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2366C:
    /* 0002366c   2  rts */
    c->pc = RC_ADDR(0x0002366cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
