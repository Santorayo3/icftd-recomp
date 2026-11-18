/* fn_0000564c - 184 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000564c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000564cu): goto L_564C;
    case RC_ADDR(0x00005650u): goto L_5650;
    case RC_ADDR(0x00005654u): goto L_5654;
    case RC_ADDR(0x00005658u): goto L_5658;
    case RC_ADDR(0x0000565au): goto L_565A;
    case RC_ADDR(0x0000565eu): goto L_565E;
    case RC_ADDR(0x00005662u): goto L_5662;
    case RC_ADDR(0x00005664u): goto L_5664;
    case RC_ADDR(0x00005668u): goto L_5668;
    case RC_ADDR(0x0000566cu): goto L_566C;
    case RC_ADDR(0x0000566eu): goto L_566E;
    case RC_ADDR(0x00005672u): goto L_5672;
    case RC_ADDR(0x00005676u): goto L_5676;
    case RC_ADDR(0x00005678u): goto L_5678;
    case RC_ADDR(0x00005680u): goto L_5680;
    case RC_ADDR(0x00005686u): goto L_5686;
    case RC_ADDR(0x0000568cu): goto L_568C;
    case RC_ADDR(0x00005694u): goto L_5694;
    case RC_ADDR(0x00005698u): goto L_5698;
    case RC_ADDR(0x0000569au): goto L_569A;
    case RC_ADDR(0x0000569cu): goto L_569C;
    case RC_ADDR(0x0000569eu): goto L_569E;
    case RC_ADDR(0x000056a2u): goto L_56A2;
    case RC_ADDR(0x000056a6u): goto L_56A6;
    case RC_ADDR(0x000056a8u): goto L_56A8;
    case RC_ADDR(0x000056acu): goto L_56AC;
    case RC_ADDR(0x000056aeu): goto L_56AE;
    case RC_ADDR(0x000056b0u): goto L_56B0;
    case RC_ADDR(0x000056b2u): goto L_56B2;
    case RC_ADDR(0x000056b6u): goto L_56B6;
    case RC_ADDR(0x000056b8u): goto L_56B8;
    case RC_ADDR(0x000056bcu): goto L_56BC;
    case RC_ADDR(0x000056beu): goto L_56BE;
    case RC_ADDR(0x000056c2u): goto L_56C2;
    case RC_ADDR(0x000056c6u): goto L_56C6;
    case RC_ADDR(0x000056cau): goto L_56CA;
    case RC_ADDR(0x000056ccu): goto L_56CC;
    case RC_ADDR(0x000056d0u): goto L_56D0;
    case RC_ADDR(0x000056d4u): goto L_56D4;
    case RC_ADDR(0x000056d8u): goto L_56D8;
    case RC_ADDR(0x000056dcu): goto L_56DC;
    case RC_ADDR(0x000056e0u): goto L_56E0;
    case RC_ADDR(0x000056e2u): goto L_56E2;
    case RC_ADDR(0x000056e8u): goto L_56E8;
    case RC_ADDR(0x000056eeu): goto L_56EE;
    case RC_ADDR(0x000056f4u): goto L_56F4;
    case RC_ADDR(0x000056f8u): goto L_56F8;
    case RC_ADDR(0x00005700u): goto L_5700;
    case RC_ADDR(0x00005702u): goto L_5702;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_564C:
    /* 0000564c   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000564cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_5650:
    /* 00005650   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005650u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5654:
    /* 00005654   4  jsr (00005596) */
    c->pc = RC_ADDR(0x00005654u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005658u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_5658:
    /* 00005658   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005658u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_565A:
    /* 0000565a   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000565au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_565E:
    /* 0000565e   4  move.w (850,A4),D0 */
    c->pc = RC_ADDR(0x0000565eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x850u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5662:
    /* 00005662   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005662u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5664:
    /* 00005664   4  move.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00005664u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5668:
    /* 00005668   4  move.w (852,A4),D0 */
    c->pc = RC_ADDR(0x00005668u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x852u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_566C:
    /* 0000566c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000566cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_566E:
    /* 0000566e   4  move.l D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000566eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5672:
    /* 00005672   4  tst.w (9e2,A4) */
    c->pc = RC_ADDR(0x00005672u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9e2u));
    rc_set_nzvc(c, t0, RC_W);

L_5676:
    /* 00005676   2  beq 00005694 */
    c->pc = RC_ADDR(0x00005676u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5694;

L_5678:
    /* 00005678   8  move.l #12e,(9f0,A4) */
    c->pc = RC_ADDR(0x00005678u);
    rc_step(c, m, 24);
    t0 = 0x0000012eu;
    rc_wr32(c, m, (c->a[4] + 0x9f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5680:
    /* 00005680   6  move.w #16,(850,A4) */
    c->pc = RC_ADDR(0x00005680u);
    rc_step(c, m, 16);
    t0 = 0x00000016u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5686:
    /* 00005686   6  move.w #127,(852,A4) */
    c->pc = RC_ADDR(0x00005686u);
    rc_step(c, m, 16);
    t0 = 0x00000127u;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_568C:
    /* 0000568c   8  move.l #f,(9ec,A4) */
    c->pc = RC_ADDR(0x0000568cu);
    rc_step(c, m, 24);
    t0 = 0x0000000fu;
    rc_wr32(c, m, (c->a[4] + 0x9ecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5694:
    /* 00005694   4  move.w (ffffd288,A4),D0 */
    c->pc = RC_ADDR(0x00005694u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5698:
    /* 00005698   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00005698u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_569A:
    /* 0000569a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000569au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_569C:
    /* 0000569c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000569cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_569E:
    /* 0000569e   4  move.l (9f0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000569eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56A2:
    /* 000056a2   4  move.w (ffffd288,A4),D0 */
    c->pc = RC_ADDR(0x000056a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_56A6:
    /* 000056a6   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x000056a6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_56A8:
    /* 000056a8   4  sub.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000056a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_56AC:
    /* 000056ac   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000056acu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_56AE:
    /* 000056ae   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000056aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_56B0:
    /* 000056b0   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x000056b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56B2:
    /* 000056b2   4  move.l (9ec,A4),-(A7) */
    c->pc = RC_ADDR(0x000056b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56B6:
    /* 000056b6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000056b6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_56B8:
    /* 000056b8   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000056b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_56BC:
    /* 000056bc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000056bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56BE:
    /* 000056be   4  jsr (000055d8) */
    c->pc = RC_ADDR(0x000056beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000056c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000055d8u);
    return;

L_56C2:
    /* 000056c2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000056c2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_56C6:
    /* 000056c6   4  move.w (ffffd288,A4),D0 */
    c->pc = RC_ADDR(0x000056c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_56CA:
    /* 000056ca   2  addq.w #6,D0 */
    c->pc = RC_ADDR(0x000056cau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_56CC:
    /* 000056cc   4  sub.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000056ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_56D0:
    /* 000056d0   4  move.w D0,(fffffa1a,A4) */
    c->pc = RC_ADDR(0x000056d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5e6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56D4:
    /* 000056d4   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000056d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_56D8:
    /* 000056d8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000056d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56DC:
    /* 000056dc   4  jsr (00005544) */
    c->pc = RC_ADDR(0x000056dcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000056e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005544u);
    return;

L_56E0:
    /* 000056e0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000056e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_56E2:
    /* 000056e2   6  move.w (fffffffc,A5),(850,A4) */
    c->pc = RC_ADDR(0x000056e2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56E8:
    /* 000056e8   6  move.w (fffffff8,A5),(852,A4) */
    c->pc = RC_ADDR(0x000056e8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56EE:
    /* 000056ee   6  move.l (8,A5),(fffffa20,A4) */
    c->pc = RC_ADDR(0x000056eeu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x5e0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56F4:
    /* 000056f4   4  clr.l (9ec,A4) */
    c->pc = RC_ADDR(0x000056f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x9ecu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_56F8:
    /* 000056f8   8  move.l #13f,(9f0,A4) */
    c->pc = RC_ADDR(0x000056f8u);
    rc_step(c, m, 24);
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[4] + 0x9f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5700:
    /* 00005700   2  unlk A5 */
    c->pc = RC_ADDR(0x00005700u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5702:
    /* 00005702   2  rts */
    c->pc = RC_ADDR(0x00005702u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
