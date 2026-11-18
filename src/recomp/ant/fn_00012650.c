/* fn_00012650 - 78 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012650(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012650u): goto L_12650;
    case RC_ADDR(0x00012654u): goto L_12654;
    case RC_ADDR(0x00012658u): goto L_12658;
    case RC_ADDR(0x0001265cu): goto L_1265C;
    case RC_ADDR(0x00012660u): goto L_12660;
    case RC_ADDR(0x00012664u): goto L_12664;
    case RC_ADDR(0x00012666u): goto L_12666;
    case RC_ADDR(0x0001266au): goto L_1266A;
    case RC_ADDR(0x0001266eu): goto L_1266E;
    case RC_ADDR(0x00012670u): goto L_12670;
    case RC_ADDR(0x00012674u): goto L_12674;
    case RC_ADDR(0x00012678u): goto L_12678;
    case RC_ADDR(0x0001267cu): goto L_1267C;
    case RC_ADDR(0x00012680u): goto L_12680;
    case RC_ADDR(0x00012682u): goto L_12682;
    case RC_ADDR(0x00012686u): goto L_12686;
    case RC_ADDR(0x0001268au): goto L_1268A;
    case RC_ADDR(0x0001268eu): goto L_1268E;
    case RC_ADDR(0x00012692u): goto L_12692;
    case RC_ADDR(0x00012698u): goto L_12698;
    case RC_ADDR(0x0001269au): goto L_1269A;
    case RC_ADDR(0x0001269cu): goto L_1269C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12650:
    /* 00012650   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00012650u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12654:
    /* 00012654   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012654u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12658:
    /* 00012658   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012658u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1265C:
    /* 0001265c   4  lea (ffffa43a,A4),A0 */
    c->pc = RC_ADDR(0x0001265cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5bc6u);

L_12660:
    /* 00012660   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012660u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_12664:
    /* 00012664   2  bne 00012682 */
    c->pc = RC_ADDR(0x00012664u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12682;

L_12666:
    /* 00012666   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00012666u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1266A:
    /* 0001266a   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0001266au);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x0001266eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_1266E:
    /* 0001266e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001266eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12670:
    /* 00012670   4  add.w #7f,D0 */
    c->pc = RC_ADDR(0x00012670u);
    rc_step(c, m, 10);
    t0 = 0x0000007fu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12674:
    /* 00012674   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00012674u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12678:
    /* 00012678   4  lea (ffffa43a,A4),A0 */
    c->pc = RC_ADDR(0x00012678u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5bc6u);

L_1267C:
    /* 0001267c   4  move.b D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0001267cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_B);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_12680:
    /* 00012680   2  bra 0001268e */
    c->pc = RC_ADDR(0x00012680u);
    rc_step(c, m, 10);
    goto L_1268E;

L_12682:
    /* 00012682   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012682u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12686:
    /* 00012686   4  lea (ffffa43a,A4),A0 */
    c->pc = RC_ADDR(0x00012686u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x5bc6u);

L_1268A:
    /* 0001268a   4  subq.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001268au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1268E:
    /* 0001268e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001268eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12692:
    /* 00012692   6  cmpi.w #e10,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012692u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000e10u);

L_12698:
    /* 00012698   2  blt 00012658 */
    c->pc = RC_ADDR(0x00012698u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_12658; }

L_1269A:
    /* 0001269a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001269au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1269C:
    /* 0001269c   2  rts */
    c->pc = RC_ADDR(0x0001269cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
