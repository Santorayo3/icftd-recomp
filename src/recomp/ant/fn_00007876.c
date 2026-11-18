/* fn_00007876 - 116 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007876(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00007876u): goto L_7876;
    case RC_ADDR(0x0000787au): goto L_787A;
    case RC_ADDR(0x0000787eu): goto L_787E;
    case RC_ADDR(0x00007882u): goto L_7882;
    case RC_ADDR(0x00007886u): goto L_7886;
    case RC_ADDR(0x0000788au): goto L_788A;
    case RC_ADDR(0x0000788eu): goto L_788E;
    case RC_ADDR(0x00007892u): goto L_7892;
    case RC_ADDR(0x00007896u): goto L_7896;
    case RC_ADDR(0x00007898u): goto L_7898;
    case RC_ADDR(0x0000789cu): goto L_789C;
    case RC_ADDR(0x000078a0u): goto L_78A0;
    case RC_ADDR(0x000078a2u): goto L_78A2;
    case RC_ADDR(0x000078a8u): goto L_78A8;
    case RC_ADDR(0x000078acu): goto L_78AC;
    case RC_ADDR(0x000078b0u): goto L_78B0;
    case RC_ADDR(0x000078b2u): goto L_78B2;
    case RC_ADDR(0x000078b8u): goto L_78B8;
    case RC_ADDR(0x000078bcu): goto L_78BC;
    case RC_ADDR(0x000078beu): goto L_78BE;
    case RC_ADDR(0x000078c0u): goto L_78C0;
    case RC_ADDR(0x000078c2u): goto L_78C2;
    case RC_ADDR(0x000078c6u): goto L_78C6;
    case RC_ADDR(0x000078cau): goto L_78CA;
    case RC_ADDR(0x000078ccu): goto L_78CC;
    case RC_ADDR(0x000078ceu): goto L_78CE;
    case RC_ADDR(0x000078d0u): goto L_78D0;
    case RC_ADDR(0x000078d2u): goto L_78D2;
    case RC_ADDR(0x000078d6u): goto L_78D6;
    case RC_ADDR(0x000078dau): goto L_78DA;
    case RC_ADDR(0x000078deu): goto L_78DE;
    case RC_ADDR(0x000078e2u): goto L_78E2;
    case RC_ADDR(0x000078e6u): goto L_78E6;
    case RC_ADDR(0x000078e8u): goto L_78E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7876:
    /* 00007876   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x00007876u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_787A:
    /* 0000787a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000787au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_787E:
    /* 0000787e   4  pea (000078ea) */
    c->pc = RC_ADDR(0x0000787eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000078eau));

L_7882:
    /* 00007882   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00007882u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_7886:
    /* 00007886   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00007886u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0000788au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_788A:
    /* 0000788a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000788au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_788E:
    /* 0000788e   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000788eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_7892:
    /* 00007892   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00007892u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00007896u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_7896:
    /* 00007896   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007896u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7898:
    /* 00007898   4  move.l D0,(a5e,A4) */
    c->pc = RC_ADDR(0x00007898u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xa5eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_789C:
    /* 0000789c   4  tst.l (a5e,A4) */
    c->pc = RC_ADDR(0x0000789cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa5eu));
    rc_set_nzvc(c, t0, RC_L);

L_78A0:
    /* 000078a0   2  beq 000078e6 */
    c->pc = RC_ADDR(0x000078a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_78E6;

L_78A2:
    /* 000078a2   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000078a2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_78A8:
    /* 000078a8   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000078a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_78AC:
    /* 000078ac   4  jsr (0000782a) */
    c->pc = RC_ADDR(0x000078acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000078b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000782au);
    return;

L_78B0:
    /* 000078b0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000078b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_78B2:
    /* 000078b2   6  pea (00050000).l */
    c->pc = RC_ADDR(0x000078b2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00050000u);

L_78B8:
    /* 000078b8   4  move.l (fffff88c,A4),D0 */
    c->pc = RC_ADDR(0x000078b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x774u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_78BC:
    /* 000078bc   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000078bcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_78BE:
    /* 000078be   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000078beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_78C0:
    /* 000078c0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000078c0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_78C2:
    /* 000078c2   4  move.l (fffff888,A4),D0 */
    c->pc = RC_ADDR(0x000078c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x778u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_78C6:
    /* 000078c6   4  add.l (fffffa0c,A4),D0 */
    c->pc = RC_ADDR(0x000078c6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5f4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_78CA:
    /* 000078ca   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000078cau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_78CC:
    /* 000078cc   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000078ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_78CE:
    /* 000078ce   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000078ceu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_78D0:
    /* 000078d0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000078d0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_78D2:
    /* 000078d2   4  move.l (a5e,A4),-(A7) */
    c->pc = RC_ADDR(0x000078d2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa5eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_78D6:
    /* 000078d6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000078d6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_78DA:
    /* 000078da   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000078dau);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000078deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_78DE:
    /* 000078de   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000078deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_78E2:
    /* 000078e2   4  clr.l (fffffa0c,A4) */
    c->pc = RC_ADDR(0x000078e2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5f4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_78E6:
    /* 000078e6   2  unlk A5 */
    c->pc = RC_ADDR(0x000078e6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_78E8:
    /* 000078e8   2  rts */
    c->pc = RC_ADDR(0x000078e8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
