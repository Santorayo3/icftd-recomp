/* fn_00023430 - 76 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023430(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00023430u): goto L_23430;
    case RC_ADDR(0x00023434u): goto L_23434;
    case RC_ADDR(0x00023438u): goto L_23438;
    case RC_ADDR(0x0002343cu): goto L_2343C;
    case RC_ADDR(0x0002343eu): goto L_2343E;
    case RC_ADDR(0x00023442u): goto L_23442;
    case RC_ADDR(0x00023444u): goto L_23444;
    case RC_ADDR(0x00023448u): goto L_23448;
    case RC_ADDR(0x0002344au): goto L_2344A;
    case RC_ADDR(0x0002344cu): goto L_2344C;
    case RC_ADDR(0x00023450u): goto L_23450;
    case RC_ADDR(0x00023452u): goto L_23452;
    case RC_ADDR(0x00023454u): goto L_23454;
    case RC_ADDR(0x00023456u): goto L_23456;
    case RC_ADDR(0x0002345cu): goto L_2345C;
    case RC_ADDR(0x0002345eu): goto L_2345E;
    case RC_ADDR(0x00023462u): goto L_23462;
    case RC_ADDR(0x00023464u): goto L_23464;
    case RC_ADDR(0x00023466u): goto L_23466;
    case RC_ADDR(0x0002346cu): goto L_2346C;
    case RC_ADDR(0x0002346eu): goto L_2346E;
    case RC_ADDR(0x00023470u): goto L_23470;
    case RC_ADDR(0x00023474u): goto L_23474;
    case RC_ADDR(0x00023476u): goto L_23476;
    case RC_ADDR(0x00023478u): goto L_23478;
    case RC_ADDR(0x0002347au): goto L_2347A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23430:
    /* 00023430   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00023430u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_23434:
    /* 00023434   4  movem.l { D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00023434u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_23438:
    /* 00023438   4  move.w (8,A5),D4 */
    c->pc = RC_ADDR(0x00023438u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2343C:
    /* 0002343c   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0002343cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2343E:
    /* 0002343e   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x0002343eu);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_23442:
    /* 00023442   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00023442u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_23444:
    /* 00023444   4  adda.l (452c,A4),A2 */
    c->pc = RC_ADDR(0x00023444u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[2] += t0;

L_23448:
    /* 00023448   2  tst.w D4 */
    c->pc = RC_ADDR(0x00023448u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2344A:
    /* 0002344a   2  blt 00023456 */
    c->pc = RC_ADDR(0x0002344au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_23456;

L_2344C:
    /* 0002344c   4  cmp.w (ffffd542,A4),D4 */
    c->pc = RC_ADDR(0x0002344cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2abeu));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_23450:
    /* 00023450   2  bge 00023456 */
    c->pc = RC_ADDR(0x00023450u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_23456;

L_23452:
    /* 00023452   2  tst.l (A2) */
    c->pc = RC_ADDR(0x00023452u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_L);

L_23454:
    /* 00023454   2  bne 00023466 */
    c->pc = RC_ADDR(0x00023454u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23466;

L_23456:
    /* 00023456   6  move.w #2,(456a,A4) */
    c->pc = RC_ADDR(0x00023456u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x456au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2345C:
    /* 0002345c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0002345cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2345E:
    /* 0002345e   4  movem.l (SP)+,{ D4 D5 D6 A2 } */
    c->pc = RC_ADDR(0x0002345eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23462:
    /* 00023462   2  unlk A5 */
    c->pc = RC_ADDR(0x00023462u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23464:
    /* 00023464   2  rts */
    c->pc = RC_ADDR(0x00023464u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_23466:
    /* 00023466   6  btst #7,(4,A2) */
    c->pc = RC_ADDR(0x00023466u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x4u);
    t4 = 0x00000007u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_2346C:
    /* 0002346c   2  bne 00023476 */
    c->pc = RC_ADDR(0x0002346cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23476;

L_2346E:
    /* 0002346e   2  move.l (A2),-(A7) */
    c->pc = RC_ADDR(0x0002346eu);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23470:
    /* 00023470   4  jsr (000234a2) */
    c->pc = RC_ADDR(0x00023470u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023474u));
    rc_depth++;
    c->pc = RC_ADDR(0x000234a2u);
    return;

L_23474:
    /* 00023474   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00023474u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23476:
    /* 00023476   2  clr.l (A2) */
    c->pc = RC_ADDR(0x00023476u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[2], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_23478:
    /* 00023478   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00023478u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2347A:
    /* 0002347a   2  bra 0002345e */
    c->pc = RC_ADDR(0x0002347au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2345E;

}
