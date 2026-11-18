/* fn_00006436 - 66 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006436(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006436u): goto L_6436;
    case RC_ADDR(0x0000643au): goto L_643A;
    case RC_ADDR(0x0000643eu): goto L_643E;
    case RC_ADDR(0x00006440u): goto L_6440;
    case RC_ADDR(0x00006444u): goto L_6444;
    case RC_ADDR(0x00006446u): goto L_6446;
    case RC_ADDR(0x00006448u): goto L_6448;
    case RC_ADDR(0x0000644cu): goto L_644C;
    case RC_ADDR(0x00006450u): goto L_6450;
    case RC_ADDR(0x00006454u): goto L_6454;
    case RC_ADDR(0x00006458u): goto L_6458;
    case RC_ADDR(0x0000645au): goto L_645A;
    case RC_ADDR(0x0000645eu): goto L_645E;
    case RC_ADDR(0x00006464u): goto L_6464;
    case RC_ADDR(0x00006466u): goto L_6466;
    case RC_ADDR(0x0000646au): goto L_646A;
    case RC_ADDR(0x00006470u): goto L_6470;
    case RC_ADDR(0x00006474u): goto L_6474;
    case RC_ADDR(0x00006476u): goto L_6476;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6436:
    /* 00006436   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00006436u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_643A:
    /* 0000643a   4  tst.w (ffff85a4,A4) */
    c->pc = RC_ADDR(0x0000643au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a5cu));
    rc_set_nzvc(c, t0, RC_W);

L_643E:
    /* 0000643e   2  beq 00006474 */
    c->pc = RC_ADDR(0x0000643eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6474;

L_6440:
    /* 00006440   4  move.w (ffff83ee,A4),D0 */
    c->pc = RC_ADDR(0x00006440u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6444:
    /* 00006444   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006444u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6446:
    /* 00006446   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006446u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6448:
    /* 00006448   4  lea (ffff855c,A4),A0 */
    c->pc = RC_ADDR(0x00006448u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7aa4u);

L_644C:
    /* 0000644c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000644cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6450:
    /* 00006450   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6454:
    /* 00006454   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x00006454u);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x00006458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_6458:
    /* 00006458   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_645A:
    /* 0000645a   4  addq.w #1,(ffff83ee,A4) */
    c->pc = RC_ADDR(0x0000645au);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_645E:
    /* 0000645e   6  cmpi.w #2,(ffff83ee,A4) */
    c->pc = RC_ADDR(0x0000645eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c12u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_6464:
    /* 00006464   2  ble 0000646a */
    c->pc = RC_ADDR(0x00006464u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_646A;

L_6466:
    /* 00006466   4  clr.w (ffff83ee,A4) */
    c->pc = RC_ADDR(0x00006466u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_646A:
    /* 0000646a   6  move.w #1,(fffff8a6,A4) */
    c->pc = RC_ADDR(0x0000646au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x75au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6470:
    /* 00006470   4  clr.w (ffff85a4,A4) */
    c->pc = RC_ADDR(0x00006470u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6474:
    /* 00006474   2  unlk A5 */
    c->pc = RC_ADDR(0x00006474u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6476:
    /* 00006476   2  rts */
    c->pc = RC_ADDR(0x00006476u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
