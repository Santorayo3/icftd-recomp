/* fn_0001f658 - 116 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f658(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f658u): goto L_1F658;
    case RC_ADDR(0x0001f65cu): goto L_1F65C;
    case RC_ADDR(0x0001f660u): goto L_1F660;
    case RC_ADDR(0x0001f666u): goto L_1F666;
    case RC_ADDR(0x0001f66au): goto L_1F66A;
    case RC_ADDR(0x0001f66eu): goto L_1F66E;
    case RC_ADDR(0x0001f670u): goto L_1F670;
    case RC_ADDR(0x0001f672u): goto L_1F672;
    case RC_ADDR(0x0001f674u): goto L_1F674;
    case RC_ADDR(0x0001f678u): goto L_1F678;
    case RC_ADDR(0x0001f67cu): goto L_1F67C;
    case RC_ADDR(0x0001f680u): goto L_1F680;
    case RC_ADDR(0x0001f682u): goto L_1F682;
    case RC_ADDR(0x0001f684u): goto L_1F684;
    case RC_ADDR(0x0001f688u): goto L_1F688;
    case RC_ADDR(0x0001f68cu): goto L_1F68C;
    case RC_ADDR(0x0001f690u): goto L_1F690;
    case RC_ADDR(0x0001f692u): goto L_1F692;
    case RC_ADDR(0x0001f694u): goto L_1F694;
    case RC_ADDR(0x0001f696u): goto L_1F696;
    case RC_ADDR(0x0001f69au): goto L_1F69A;
    case RC_ADDR(0x0001f69eu): goto L_1F69E;
    case RC_ADDR(0x0001f6a0u): goto L_1F6A0;
    case RC_ADDR(0x0001f6a4u): goto L_1F6A4;
    case RC_ADDR(0x0001f6a6u): goto L_1F6A6;
    case RC_ADDR(0x0001f6aau): goto L_1F6AA;
    case RC_ADDR(0x0001f6aeu): goto L_1F6AE;
    case RC_ADDR(0x0001f6b2u): goto L_1F6B2;
    case RC_ADDR(0x0001f6b6u): goto L_1F6B6;
    case RC_ADDR(0x0001f6bau): goto L_1F6BA;
    case RC_ADDR(0x0001f6beu): goto L_1F6BE;
    case RC_ADDR(0x0001f6c2u): goto L_1F6C2;
    case RC_ADDR(0x0001f6c6u): goto L_1F6C6;
    case RC_ADDR(0x0001f6cau): goto L_1F6CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F658:
    /* 0001f658   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001f658u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1F65C:
    /* 0001f65c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f65cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F660:
    /* 0001f660   6  andi.w #fffb,(a,A0) */
    c->pc = RC_ADDR(0x0001f660u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffbu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1F666:
    /* 0001f666   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f666u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F66A:
    /* 0001f66a   4  tst.l (c,A0) */
    c->pc = RC_ADDR(0x0001f66au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1F66E:
    /* 0001f66e   2  bne 0001f674 */
    c->pc = RC_ADDR(0x0001f66eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F674;

L_1F670:
    /* 0001f670   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f670u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F672:
    /* 0001f672   2  rts */
    c->pc = RC_ADDR(0x0001f672u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F674:
    /* 0001f674   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f674u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F678:
    /* 0001f678   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f678u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F67C:
    /* 0001f67c   4  tst.l (30,A1) */
    c->pc = RC_ADDR(0x0001f67cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1F680:
    /* 0001f680   2  beq 0001f684 */
    c->pc = RC_ADDR(0x0001f680u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F684;

L_1F682:
    /* 0001f682   2  bra 0001f670 */
    c->pc = RC_ADDR(0x0001f682u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F670;

L_1F684:
    /* 0001f684   4  jsr (0001fc3a) */
    c->pc = RC_ADDR(0x0001f684u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f688u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc3au);
    return;

L_1F688:
    /* 0001f688   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f688u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F68C:
    /* 0001f68c   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f68cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F690:
    /* 0001f690   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f690u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F692:
    /* 0001f692   2  move.w (A1),D0 */
    c->pc = RC_ADDR(0x0001f692u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F694:
    /* 0001f694   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f694u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F696:
    /* 0001f696   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f696u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F69A:
    /* 0001f69a   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f69au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F69E:
    /* 0001f69e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f69eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F6A0:
    /* 0001f6a0   4  move.w (6,A1),D0 */
    c->pc = RC_ADDR(0x0001f6a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6A4:
    /* 0001f6a4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f6a4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6A6:
    /* 0001f6a6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f6a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F6AA:
    /* 0001f6aa   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f6aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6AE:
    /* 0001f6ae   4  pea (c,A1) */
    c->pc = RC_ADDR(0x0001f6aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_1F6B2:
    /* 0001f6b2   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x0001f6b2u);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x0001f6b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d4au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000205aau);
    return;

L_1F6B6:
    /* 0001f6b6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001f6b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1F6BA:
    /* 0001f6ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001f6bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1F6BE:
    /* 0001f6be   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001f6beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1F6C2:
    /* 0001f6c2   4  move.l D0,(30,A1) */
    c->pc = RC_ADDR(0x0001f6c2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6C6:
    /* 0001f6c6   4  jsr (0001fc50) */
    c->pc = RC_ADDR(0x0001f6c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f6cau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc50u);
    return;

L_1F6CA:
    /* 0001f6ca   2  bra 0001f670 */
    c->pc = RC_ADDR(0x0001f6cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F670;

}
