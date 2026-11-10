/* fn_0002138e - 76 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002138e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002138eu): goto L_2138E;
    case RC_ADDR(0x00021392u): goto L_21392;
    case RC_ADDR(0x00021396u): goto L_21396;
    case RC_ADDR(0x0002139au): goto L_2139A;
    case RC_ADDR(0x0002139cu): goto L_2139C;
    case RC_ADDR(0x000213a0u): goto L_213A0;
    case RC_ADDR(0x000213a2u): goto L_213A2;
    case RC_ADDR(0x000213a6u): goto L_213A6;
    case RC_ADDR(0x000213a8u): goto L_213A8;
    case RC_ADDR(0x000213aau): goto L_213AA;
    case RC_ADDR(0x000213aeu): goto L_213AE;
    case RC_ADDR(0x000213b0u): goto L_213B0;
    case RC_ADDR(0x000213b2u): goto L_213B2;
    case RC_ADDR(0x000213b4u): goto L_213B4;
    case RC_ADDR(0x000213bau): goto L_213BA;
    case RC_ADDR(0x000213bcu): goto L_213BC;
    case RC_ADDR(0x000213c0u): goto L_213C0;
    case RC_ADDR(0x000213c2u): goto L_213C2;
    case RC_ADDR(0x000213c4u): goto L_213C4;
    case RC_ADDR(0x000213cau): goto L_213CA;
    case RC_ADDR(0x000213ccu): goto L_213CC;
    case RC_ADDR(0x000213ceu): goto L_213CE;
    case RC_ADDR(0x000213d2u): goto L_213D2;
    case RC_ADDR(0x000213d4u): goto L_213D4;
    case RC_ADDR(0x000213d6u): goto L_213D6;
    case RC_ADDR(0x000213d8u): goto L_213D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2138E:
    /* 0002138e   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002138eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21392:
    /* 00021392   4  movem.l { D5 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021392u);
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

L_21396:
    /* 00021396   4  move.w (8,A5),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021396u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2139A:
    /* 0002139a   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002139au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2139C:
    /* 0002139c   4  muls.w #6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002139cu);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_213A0:
    /* 000213a0   2  movea.l D0,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213a0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_213A2:
    /* 000213a2   4  adda.l (3afc,A4),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213a2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[2] += t0;

L_213A6:
    /* 000213a6   2  tst.w D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213a6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_213A8:
    /* 000213a8   2  blt 000213b4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213a8u);
    if (rc_cond(c, 13)) goto L_213B4;

L_213AA:
    /* 000213aa   4  cmp.w (ffffcdbe,A4),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213aau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3242u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_213AE:
    /* 000213ae   2  bge 000213b4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213aeu);
    if (rc_cond(c, 12)) goto L_213B4;

L_213B0:
    /* 000213b0   2  tst.l (A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213b0u);
    t0 = rc_rd32(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_L);

L_213B2:
    /* 000213b2   2  bne 000213c4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213b2u);
    if (rc_cond(c, 6)) goto L_213C4;

L_213B4:
    /* 000213b4   6  move.w #2,(3b3a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213b4u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x3b3au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_213BA:
    /* 000213ba   2  moveq #ffffffff,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213bau);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_213BC:
    /* 000213bc   4  movem.l (SP)+,{ D4 D5 D6 A2 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213bcu);
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

L_213C0:
    /* 000213c0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213c0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_213C2:
    /* 000213c2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213c2u);
    rc_ret(c, m);
    return;

L_213C4:
    /* 000213c4   6  btst #7,(4,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213c4u);
    t4 = 0x00000007u;
    t3 = (c->a[2] + 0x4u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_213CA:
    /* 000213ca   2  bne 000213d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213cau);
    if (rc_cond(c, 6)) goto L_213D4;

L_213CC:
    /* 000213cc   2  move.l (A2),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213ccu);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_213CE:
    /* 000213ce   4  jsr (00021400) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213ceu);
    rc_push32(c, m, RC_ADDR(0x000213d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021400u);
    return;

L_213D2:
    /* 000213d2   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213d2u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_213D4:
    /* 000213d4   2  clr.l (A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213d4u);
    rc_wr32(c, m, c->a[2], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_213D6:
    /* 000213d6   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213d6u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_213D8:
    /* 000213d8   2  bra 000213bc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000213d8u);
    rc_tick();
    goto L_213BC;

}
