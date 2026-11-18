/* fn_000158c2 - 190 byte(s), 43 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000158c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000158c2u): goto L_158C2;
    case RC_ADDR(0x000158c6u): goto L_158C6;
    case RC_ADDR(0x000158ccu): goto L_158CC;
    case RC_ADDR(0x000158d2u): goto L_158D2;
    case RC_ADDR(0x000158d8u): goto L_158D8;
    case RC_ADDR(0x000158dcu): goto L_158DC;
    case RC_ADDR(0x000158e2u): goto L_158E2;
    case RC_ADDR(0x000158e8u): goto L_158E8;
    case RC_ADDR(0x000158ecu): goto L_158EC;
    case RC_ADDR(0x000158f0u): goto L_158F0;
    case RC_ADDR(0x000158f6u): goto L_158F6;
    case RC_ADDR(0x000158fau): goto L_158FA;
    case RC_ADDR(0x00015900u): goto L_15900;
    case RC_ADDR(0x00015906u): goto L_15906;
    case RC_ADDR(0x0001590cu): goto L_1590C;
    case RC_ADDR(0x00015912u): goto L_15912;
    case RC_ADDR(0x00015918u): goto L_15918;
    case RC_ADDR(0x0001591cu): goto L_1591C;
    case RC_ADDR(0x00015920u): goto L_15920;
    case RC_ADDR(0x00015924u): goto L_15924;
    case RC_ADDR(0x00015928u): goto L_15928;
    case RC_ADDR(0x0001592au): goto L_1592A;
    case RC_ADDR(0x0001592eu): goto L_1592E;
    case RC_ADDR(0x00015930u): goto L_15930;
    case RC_ADDR(0x00015934u): goto L_15934;
    case RC_ADDR(0x0001593au): goto L_1593A;
    case RC_ADDR(0x0001593cu): goto L_1593C;
    case RC_ADDR(0x00015942u): goto L_15942;
    case RC_ADDR(0x00015948u): goto L_15948;
    case RC_ADDR(0x0001594cu): goto L_1594C;
    case RC_ADDR(0x00015950u): goto L_15950;
    case RC_ADDR(0x00015954u): goto L_15954;
    case RC_ADDR(0x00015956u): goto L_15956;
    case RC_ADDR(0x0001595au): goto L_1595A;
    case RC_ADDR(0x0001595eu): goto L_1595E;
    case RC_ADDR(0x00015962u): goto L_15962;
    case RC_ADDR(0x00015966u): goto L_15966;
    case RC_ADDR(0x0001596au): goto L_1596A;
    case RC_ADDR(0x0001596eu): goto L_1596E;
    case RC_ADDR(0x00015972u): goto L_15972;
    case RC_ADDR(0x00015976u): goto L_15976;
    case RC_ADDR(0x0001597cu): goto L_1597C;
    case RC_ADDR(0x0001597eu): goto L_1597E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_158C2:
    /* 000158c2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000158c2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_158C6:
    /* 000158c6   6  move.w #10,(1b12,A4) */
    c->pc = RC_ADDR(0x000158c6u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] + 0x1b12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158CC:
    /* 000158cc   6  move.w #a,(1b14,A4) */
    c->pc = RC_ADDR(0x000158ccu);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x1b14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158D2:
    /* 000158d2   6  move.w #f,(1b26,A4) */
    c->pc = RC_ADDR(0x000158d2u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x1b26u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158D8:
    /* 000158d8   4  clr.w (14f0,A4) */
    c->pc = RC_ADDR(0x000158d8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158DC:
    /* 000158dc   6  move.w #1,(1ac4,A4) */
    c->pc = RC_ADDR(0x000158dcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158E2:
    /* 000158e2   6  move.w #2,(1ac6,A4) */
    c->pc = RC_ADDR(0x000158e2u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1ac6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158E8:
    /* 000158e8   4  clr.w (1ac8,A4) */
    c->pc = RC_ADDR(0x000158e8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158EC:
    /* 000158ec   4  clr.w (1aca,A4) */
    c->pc = RC_ADDR(0x000158ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1acau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158F0:
    /* 000158f0   6  move.w #1,(14f2,A4) */
    c->pc = RC_ADDR(0x000158f0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_158F6:
    /* 000158f6   4  clr.w (1acc,A4) */
    c->pc = RC_ADDR(0x000158f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1accu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158FA:
    /* 000158fa   6  move.w #2,(1ace,A4) */
    c->pc = RC_ADDR(0x000158fau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1aceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15900:
    /* 00015900   6  move.w #2cf,(1ad0,A4) */
    c->pc = RC_ADDR(0x00015900u);
    rc_step(c, m, 16);
    t0 = 0x000002cfu;
    rc_wr16(c, m, (c->a[4] + 0x1ad0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15906:
    /* 00015906   6  move.w #238,(1ad2,A4) */
    c->pc = RC_ADDR(0x00015906u);
    rc_step(c, m, 16);
    t0 = 0x00000238u;
    rc_wr16(c, m, (c->a[4] + 0x1ad2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1590C:
    /* 0001590c   6  move.w #4,(1ad4,A4) */
    c->pc = RC_ADDR(0x0001590cu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1ad4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15912:
    /* 00015912   6  move.w #8,(1ad6,A4) */
    c->pc = RC_ADDR(0x00015912u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x1ad6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15918:
    /* 00015918   4  clr.w (1b40,A4) */
    c->pc = RC_ADDR(0x00015918u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b40u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1591C:
    /* 0001591c   4  clr.w (1b3e,A4) */
    c->pc = RC_ADDR(0x0001591cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15920:
    /* 00015920   4  clr.w (1b38,A4) */
    c->pc = RC_ADDR(0x00015920u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15924:
    /* 00015924   4  clr.w (1b28,A4) */
    c->pc = RC_ADDR(0x00015924u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15928:
    /* 00015928   2  moveq #e,D0 */
    c->pc = RC_ADDR(0x00015928u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1592A:
    /* 0001592a   4  sub.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0001592au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1592E:
    /* 0001592e   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001592eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_15930:
    /* 00015930   4  move.w D0,(1b2a,A4) */
    c->pc = RC_ADDR(0x00015930u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15934:
    /* 00015934   6  cmpi.w #5,(1b2a,A4) */
    c->pc = RC_ADDR(0x00015934u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b2au));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1593A:
    /* 0001593a   2  bge 00015942 */
    c->pc = RC_ADDR(0x0001593au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15942;

L_1593C:
    /* 0001593c   6  move.w #5,(1b2a,A4) */
    c->pc = RC_ADDR(0x0001593cu);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1b2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15942:
    /* 00015942   6  move.w #bd,(1b2c,A4) */
    c->pc = RC_ADDR(0x00015942u);
    rc_step(c, m, 16);
    t0 = 0x000000bdu;
    rc_wr16(c, m, (c->a[4] + 0x1b2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15948:
    /* 00015948   4  move.w (712,A4),D0 */
    c->pc = RC_ADDR(0x00015948u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1594C:
    /* 0001594c   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x0001594cu);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_15950:
    /* 00015950   4  move.w #f0,D1 */
    c->pc = RC_ADDR(0x00015950u);
    rc_step(c, m, 8);
    t0 = 0x000000f0u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15954:
    /* 00015954   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00015954u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15956:
    /* 00015956   4  move.w D1,(1b30,A4) */
    c->pc = RC_ADDR(0x00015956u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1b30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1595A:
    /* 0001595a   4  clr.w (1adc,A4) */
    c->pc = RC_ADDR(0x0001595au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1adcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1595E:
    /* 0001595e   4  clr.w (1b2e,A4) */
    c->pc = RC_ADDR(0x0001595eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15962:
    /* 00015962   4  clr.w (1ac2,A4) */
    c->pc = RC_ADDR(0x00015962u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ac2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15966:
    /* 00015966   4  clr.w (1b46,A4) */
    c->pc = RC_ADDR(0x00015966u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1596A:
    /* 0001596a   4  clr.w (1b44,A4) */
    c->pc = RC_ADDR(0x0001596au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b44u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1596E:
    /* 0001596e   4  clr.w (1b42,A4) */
    c->pc = RC_ADDR(0x0001596eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b42u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15972:
    /* 00015972   4  clr.w (1b3a,A4) */
    c->pc = RC_ADDR(0x00015972u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15976:
    /* 00015976   6  move.w #1,(1b3c,A4) */
    c->pc = RC_ADDR(0x00015976u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1597C:
    /* 0001597c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001597cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1597E:
    /* 0001597e   2  rts */
    c->pc = RC_ADDR(0x0001597eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
