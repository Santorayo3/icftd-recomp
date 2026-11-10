/* fn_0000d49c - 130 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d49c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000d49cu: goto L_D49C;
    case 0x0000d4a0u: goto L_D4A0;
    case 0x0000d4a2u: goto L_D4A2;
    case 0x0000d4a4u: goto L_D4A4;
    case 0x0000d4a6u: goto L_D4A6;
    case 0x0000d4a8u: goto L_D4A8;
    case 0x0000d4acu: goto L_D4AC;
    case 0x0000d4b0u: goto L_D4B0;
    case 0x0000d4b2u: goto L_D4B2;
    case 0x0000d4b4u: goto L_D4B4;
    case 0x0000d4b6u: goto L_D4B6;
    case 0x0000d4bau: goto L_D4BA;
    case 0x0000d4c0u: goto L_D4C0;
    case 0x0000d4c2u: goto L_D4C2;
    case 0x0000d4c4u: goto L_D4C4;
    case 0x0000d4c8u: goto L_D4C8;
    case 0x0000d4ceu: goto L_D4CE;
    case 0x0000d4d0u: goto L_D4D0;
    case 0x0000d4d2u: goto L_D4D2;
    case 0x0000d4d6u: goto L_D4D6;
    case 0x0000d4dcu: goto L_D4DC;
    case 0x0000d4deu: goto L_D4DE;
    case 0x0000d4e0u: goto L_D4E0;
    case 0x0000d4e4u: goto L_D4E4;
    case 0x0000d4eau: goto L_D4EA;
    case 0x0000d4eeu: goto L_D4EE;
    case 0x0000d4f0u: goto L_D4F0;
    case 0x0000d4f2u: goto L_D4F2;
    case 0x0000d4f6u: goto L_D4F6;
    case 0x0000d4fau: goto L_D4FA;
    case 0x0000d4fcu: goto L_D4FC;
    case 0x0000d4feu: goto L_D4FE;
    case 0x0000d502u: goto L_D502;
    case 0x0000d506u: goto L_D506;
    case 0x0000d508u: goto L_D508;
    case 0x0000d50cu: goto L_D50C;
    case 0x0000d50eu: goto L_D50E;
    case 0x0000d510u: goto L_D510;
    case 0x0000d516u: goto L_D516;
    case 0x0000d518u: goto L_D518;
    case 0x0000d51au: goto L_D51A;
    case 0x0000d51cu: goto L_D51C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D49C:
    /* 0000d49c   4  link.w A5,#0 */
    c->pc = 0x0000d49cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D4A0:
    /* 0000d4a0   2  move.l D4,-(A7) */
    c->pc = 0x0000d4a0u;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4A2:
    /* 0000d4a2   2  moveq #0,D4 */
    c->pc = 0x0000d4a2u;
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_D4A4:
    /* 0000d4a4   2  move.l D4,D0 */
    c->pc = 0x0000d4a4u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4A6:
    /* 0000d4a6   2  asl.l #1,D0 */
    c->pc = 0x0000d4a6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4A8:
    /* 0000d4a8   4  lea (50c,A4),A0 */
    c->pc = 0x0000d4a8u;
    c->a[0] = (c->a[4] + 0x50cu);

L_D4AC:
    /* 0000d4ac   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000d4acu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_D4B0:
    /* 0000d4b0   2  bne 0000d50e */
    c->pc = 0x0000d4b0u;
    if (rc_cond(c, 6)) goto L_D50E;

L_D4B2:
    /* 0000d4b2   2  move.l D4,D0 */
    c->pc = 0x0000d4b2u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4B4:
    /* 0000d4b4   2  asl.l #1,D0 */
    c->pc = 0x0000d4b4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4B6:
    /* 0000d4b6   4  lea (50c,A4),A0 */
    c->pc = 0x0000d4b6u;
    c->a[0] = (c->a[4] + 0x50cu);

L_D4BA:
    /* 0000d4ba   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x0000d4bau;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4C0:
    /* 0000d4c0   2  move.l D4,D0 */
    c->pc = 0x0000d4c0u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4C2:
    /* 0000d4c2   2  asl.l #1,D0 */
    c->pc = 0x0000d4c2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4C4:
    /* 0000d4c4   4  lea (68c,A4),A0 */
    c->pc = 0x0000d4c4u;
    c->a[0] = (c->a[4] + 0x68cu);

L_D4C8:
    /* 0000d4c8   6  move.w #20,(0,A0,D0.w) */
    c->pc = 0x0000d4c8u;
    t0 = 0x00000020u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4CE:
    /* 0000d4ce   2  move.l D4,D0 */
    c->pc = 0x0000d4ceu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4D0:
    /* 0000d4d0   2  asl.l #1,D0 */
    c->pc = 0x0000d4d0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4D2:
    /* 0000d4d2   4  lea (58c,A4),A0 */
    c->pc = 0x0000d4d2u;
    c->a[0] = (c->a[4] + 0x58cu);

L_D4D6:
    /* 0000d4d6   6  move.w (8,A5),(0,A0,D0.w) */
    c->pc = 0x0000d4d6u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4DC:
    /* 0000d4dc   2  move.l D4,D0 */
    c->pc = 0x0000d4dcu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4DE:
    /* 0000d4de   2  asl.l #1,D0 */
    c->pc = 0x0000d4deu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4E0:
    /* 0000d4e0   4  lea (60c,A4),A0 */
    c->pc = 0x0000d4e0u;
    c->a[0] = (c->a[4] + 0x60cu);

L_D4E4:
    /* 0000d4e4   6  move.w (a,A5),(0,A0,D0.w) */
    c->pc = 0x0000d4e4u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4EA:
    /* 0000d4ea   4  move.w (a,A5),D0 */
    c->pc = 0x0000d4eau;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4EE:
    /* 0000d4ee   2  ext.l D0 */
    c->pc = 0x0000d4eeu;
    rc_ext_l(c, 0);

L_D4F0:
    /* 0000d4f0   2  asl.l #1,D0 */
    c->pc = 0x0000d4f0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D4F2:
    /* 0000d4f2   4  movea.l (fffff2f8,A4),A0 */
    c->pc = 0x0000d4f2u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_D4F6:
    /* 0000d4f6   4  move.w (8,A5),D1 */
    c->pc = 0x0000d4f6u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4FA:
    /* 0000d4fa   2  ext.l D1 */
    c->pc = 0x0000d4fau;
    rc_ext_l(c, 1);

L_D4FC:
    /* 0000d4fc   2  asl.l #1,D1 */
    c->pc = 0x0000d4fcu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_D4FE:
    /* 0000d4fe   4  lea (ffff993a,A4),A1 */
    c->pc = 0x0000d4feu;
    c->a[1] = (c->a[4] - 0x66c6u);

L_D502:
    /* 0000d502   4  move.w (0,A1,D1.w),D2 */
    c->pc = 0x0000d502u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D506:
    /* 0000d506   2  asl.w #1,D2 */
    c->pc = 0x0000d506u;
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W);

L_D508:
    /* 0000d508   4  move.w D2,(0,A0,D0.w) */
    c->pc = 0x0000d508u;
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D50C:
    /* 0000d50c   2  bra 0000d518 */
    c->pc = 0x0000d50cu;
    goto L_D518;

L_D50E:
    /* 0000d50e   2  addq.l #1,D4 */
    c->pc = 0x0000d50eu;
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_D510:
    /* 0000d510   6  cmp.l #40,D4 */
    c->pc = 0x0000d510u;
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_D516:
    /* 0000d516   2  blt 0000d4a4 */
    c->pc = 0x0000d516u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_D4A4; }

L_D518:
    /* 0000d518   2  move.l (A7)+,D4 */
    c->pc = 0x0000d518u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D51A:
    /* 0000d51a   2  unlk A5 */
    c->pc = 0x0000d51au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D51C:
    /* 0000d51c   2  rts */
    c->pc = 0x0000d51cu;
    rc_ret(c, m);
    return;

}
