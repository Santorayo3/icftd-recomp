/* fn_00006182 - 74 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006182(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006182u): goto L_6182;
    case RC_ADDR(0x00006186u): goto L_6186;
    case RC_ADDR(0x0000618au): goto L_618A;
    case RC_ADDR(0x0000618cu): goto L_618C;
    case RC_ADDR(0x00006190u): goto L_6190;
    case RC_ADDR(0x00006194u): goto L_6194;
    case RC_ADDR(0x00006196u): goto L_6196;
    case RC_ADDR(0x00006198u): goto L_6198;
    case RC_ADDR(0x0000619cu): goto L_619C;
    case RC_ADDR(0x000061a0u): goto L_61A0;
    case RC_ADDR(0x000061a4u): goto L_61A4;
    case RC_ADDR(0x000061a8u): goto L_61A8;
    case RC_ADDR(0x000061aau): goto L_61AA;
    case RC_ADDR(0x000061acu): goto L_61AC;
    case RC_ADDR(0x000061aeu): goto L_61AE;
    case RC_ADDR(0x000061b0u): goto L_61B0;
    case RC_ADDR(0x000061b2u): goto L_61B2;
    case RC_ADDR(0x000061b6u): goto L_61B6;
    case RC_ADDR(0x000061bcu): goto L_61BC;
    case RC_ADDR(0x000061beu): goto L_61BE;
    case RC_ADDR(0x000061c2u): goto L_61C2;
    case RC_ADDR(0x000061c4u): goto L_61C4;
    case RC_ADDR(0x000061c6u): goto L_61C6;
    case RC_ADDR(0x000061cau): goto L_61CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6182:
    /* 00006182   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00006182u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_6186:
    /* 00006186   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00006186u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_618A:
    /* 0000618a   2  beq 000061c6 */
    c->pc = RC_ADDR(0x0000618au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_61C6;

L_618C:
    /* 0000618c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000618cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6190:
    /* 00006190   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006190u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6194:
    /* 00006194   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006194u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_6196:
    /* 00006196   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00006196u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_6198:
    /* 00006198   4  lea (fffff074,A4),A0 */
    c->pc = RC_ADDR(0x00006198u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xf8cu);

L_619C:
    /* 0000619c   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x0000619cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_61A0:
    /* 000061a0   4  suba.l (fffff06a,A4),A1 */
    c->pc = RC_ADDR(0x000061a0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf96u));
    c->a[1] -= t0;

L_61A4:
    /* 000061a4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000061a4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_61A8:
    /* 000061a8   2  cmp.w A1,D1 */
    c->pc = RC_ADDR(0x000061a8u);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_61AA:
    /* 000061aa   2  bne 000061b2 */
    c->pc = RC_ADDR(0x000061aau);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_61B2;

L_61AC:
    /* 000061ac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000061acu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_61AE:
    /* 000061ae   2  unlk A5 */
    c->pc = RC_ADDR(0x000061aeu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_61B0:
    /* 000061b0   2  rts */
    c->pc = RC_ADDR(0x000061b0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_61B2:
    /* 000061b2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000061b2u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_61B6:
    /* 000061b6   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000061b6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_61BC:
    /* 000061bc   2  blt 00006190 */
    c->pc = RC_ADDR(0x000061bcu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6190; }

L_61BE:
    /* 000061be   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000061beu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_61C2:
    /* 000061c2   2  bsr 00006152 */
    c->pc = RC_ADDR(0x000061c2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000061c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006152u);
    return;

L_61C4:
    /* 000061c4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000061c4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_61C6:
    /* 000061c6   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x000061c6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_61CA:
    /* 000061ca   2  bra 000061ae */
    c->pc = RC_ADDR(0x000061cau);
    rc_step(c, m);
    rc_tick();
    goto L_61AE;

}
