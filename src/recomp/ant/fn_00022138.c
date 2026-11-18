/* fn_00022138 - 132 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022138(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022138u): goto L_22138;
    case RC_ADDR(0x0002213cu): goto L_2213C;
    case RC_ADDR(0x0002213eu): goto L_2213E;
    case RC_ADDR(0x00022142u): goto L_22142;
    case RC_ADDR(0x00022146u): goto L_22146;
    case RC_ADDR(0x00022148u): goto L_22148;
    case RC_ADDR(0x0002214au): goto L_2214A;
    case RC_ADDR(0x0002214cu): goto L_2214C;
    case RC_ADDR(0x00022150u): goto L_22150;
    case RC_ADDR(0x00022154u): goto L_22154;
    case RC_ADDR(0x00022156u): goto L_22156;
    case RC_ADDR(0x0002215au): goto L_2215A;
    case RC_ADDR(0x0002215cu): goto L_2215C;
    case RC_ADDR(0x0002215eu): goto L_2215E;
    case RC_ADDR(0x00022160u): goto L_22160;
    case RC_ADDR(0x00022166u): goto L_22166;
    case RC_ADDR(0x0002216au): goto L_2216A;
    case RC_ADDR(0x0002216cu): goto L_2216C;
    case RC_ADDR(0x00022174u): goto L_22174;
    case RC_ADDR(0x00022176u): goto L_22176;
    case RC_ADDR(0x0002217au): goto L_2217A;
    case RC_ADDR(0x0002217cu): goto L_2217C;
    case RC_ADDR(0x00022180u): goto L_22180;
    case RC_ADDR(0x00022184u): goto L_22184;
    case RC_ADDR(0x00022188u): goto L_22188;
    case RC_ADDR(0x0002218au): goto L_2218A;
    case RC_ADDR(0x0002218cu): goto L_2218C;
    case RC_ADDR(0x00022190u): goto L_22190;
    case RC_ADDR(0x00022194u): goto L_22194;
    case RC_ADDR(0x00022198u): goto L_22198;
    case RC_ADDR(0x0002219au): goto L_2219A;
    case RC_ADDR(0x0002219cu): goto L_2219C;
    case RC_ADDR(0x000221a0u): goto L_221A0;
    case RC_ADDR(0x000221a2u): goto L_221A2;
    case RC_ADDR(0x000221a4u): goto L_221A4;
    case RC_ADDR(0x000221a6u): goto L_221A6;
    case RC_ADDR(0x000221aau): goto L_221AA;
    case RC_ADDR(0x000221aeu): goto L_221AE;
    case RC_ADDR(0x000221b4u): goto L_221B4;
    case RC_ADDR(0x000221b6u): goto L_221B6;
    case RC_ADDR(0x000221b8u): goto L_221B8;
    case RC_ADDR(0x000221bau): goto L_221BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22138:
    /* 00022138   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00022138u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_2213C:
    /* 0002213c   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0002213cu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2213E:
    /* 0002213e   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0002213eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_22142:
    /* 00022142   4  move.w (2,A2),D0 */
    c->pc = RC_ADDR(0x00022142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22146:
    /* 00022146   2  mulu.w (A2),D0 */
    c->pc = RC_ADDR(0x00022146u);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[2]);
    rc_mulu(c, 0, t0);

L_22148:
    /* 00022148   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00022148u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2214A:
    /* 0002214a   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0002214au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2214C:
    /* 0002214c   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0002214cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22150:
    /* 00022150   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00022150u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22154:
    /* 00022154   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022154u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22156:
    /* 00022156   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00022156u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2215A:
    /* 0002215a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0002215au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2215C:
    /* 0002215c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0002215cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_2215E:
    /* 0002215e   2  adda.l A2,A0 */
    c->pc = RC_ADDR(0x0002215eu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] += t0;

L_22160:
    /* 00022160   6  move.l (8,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00022160u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22166:
    /* 00022166   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00022166u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_2216A:
    /* 0002216a   2  beq 0002219a */
    c->pc = RC_ADDR(0x0002216au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2219A;

L_2216C:
    /* 0002216c   8  cmpi.l #ffffffff,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002216cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0xffffffffu);

L_22174:
    /* 00022174   2  beq 0002219a */
    c->pc = RC_ADDR(0x00022174u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2219A;

L_22176:
    /* 00022176   4  tst.w (6,A2) */
    c->pc = RC_ADDR(0x00022176u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_2217A:
    /* 0002217a   2  beq 0002218c */
    c->pc = RC_ADDR(0x0002217au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2218C;

L_2217C:
    /* 0002217c   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002217cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22180:
    /* 00022180   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00022180u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22184:
    /* 00022184   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022184u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022188u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22188:
    /* 00022188   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022188u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2218A:
    /* 0002218a   2  bra 0002219a */
    c->pc = RC_ADDR(0x0002218au);
    rc_step(c, m, 10);
    goto L_2219A;

L_2218C:
    /* 0002218c   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002218cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22190:
    /* 00022190   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00022190u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22194:
    /* 00022194   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022194u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022198u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22198:
    /* 00022198   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022198u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2219A:
    /* 0002219a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002219au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2219C:
    /* 0002219c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0002219cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_221A0:
    /* 000221a0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000221a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_221A2:
    /* 000221a2   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000221a2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_221A4:
    /* 000221a4   2  adda.l A2,A0 */
    c->pc = RC_ADDR(0x000221a4u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] += t0;

L_221A6:
    /* 000221a6   4  clr.l (8,A0) */
    c->pc = RC_ADDR(0x000221a6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_221AA:
    /* 000221aa   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000221aau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_221AE:
    /* 000221ae   6  cmpi.w #8,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000221aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_221B4:
    /* 000221b4   2  bcs 00022154 */
    c->pc = RC_ADDR(0x000221b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_22154; }

L_221B6:
    /* 000221b6   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x000221b6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_221B8:
    /* 000221b8   2  unlk A5 */
    c->pc = RC_ADDR(0x000221b8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_221BA:
    /* 000221ba   2  rts */
    c->pc = RC_ADDR(0x000221bau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
