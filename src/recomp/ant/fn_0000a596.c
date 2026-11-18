/* fn_0000a596 - 66 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a596(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a596u): goto L_A596;
    case RC_ADDR(0x0000a59au): goto L_A59A;
    case RC_ADDR(0x0000a59eu): goto L_A59E;
    case RC_ADDR(0x0000a5a2u): goto L_A5A2;
    case RC_ADDR(0x0000a5a6u): goto L_A5A6;
    case RC_ADDR(0x0000a5a8u): goto L_A5A8;
    case RC_ADDR(0x0000a5aau): goto L_A5AA;
    case RC_ADDR(0x0000a5aeu): goto L_A5AE;
    case RC_ADDR(0x0000a5b2u): goto L_A5B2;
    case RC_ADDR(0x0000a5b4u): goto L_A5B4;
    case RC_ADDR(0x0000a5b6u): goto L_A5B6;
    case RC_ADDR(0x0000a5bau): goto L_A5BA;
    case RC_ADDR(0x0000a5c0u): goto L_A5C0;
    case RC_ADDR(0x0000a5c4u): goto L_A5C4;
    case RC_ADDR(0x0000a5cau): goto L_A5CA;
    case RC_ADDR(0x0000a5ccu): goto L_A5CC;
    case RC_ADDR(0x0000a5d2u): goto L_A5D2;
    case RC_ADDR(0x0000a5d4u): goto L_A5D4;
    case RC_ADDR(0x0000a5d6u): goto L_A5D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A596:
    /* 0000a596   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000a596u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_A59A:
    /* 0000a59a   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000a59au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A59E:
    /* 0000a59e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a59eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A5A2:
    /* 0000a5a2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a5a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5A6:
    /* 0000a5a6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a5a6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A5A8:
    /* 0000a5a8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a5a8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A5AA:
    /* 0000a5aa   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x0000a5aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_A5AE:
    /* 0000a5ae   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000a5aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5B2:
    /* 0000a5b2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000a5b2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_A5B4:
    /* 0000a5b4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000a5b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_A5B6:
    /* 0000a5b6   4  lea (fffff7ce,A4),A1 */
    c->pc = RC_ADDR(0x0000a5b6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x832u);

L_A5BA:
    /* 0000a5ba   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000a5bau);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5C0:
    /* 0000a5c0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a5c0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A5C4:
    /* 0000a5c4   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a5c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_A5CA:
    /* 0000a5ca   2  blt 0000a5a2 */
    c->pc = RC_ADDR(0x0000a5cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_A5A2; }

L_A5CC:
    /* 0000a5cc   6  move.w #1,(ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000a5ccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5D2:
    /* 0000a5d2   2  bsr 0000a5d8 */
    c->pc = RC_ADDR(0x0000a5d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a5d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a5d8u);
    return;

L_A5D4:
    /* 0000a5d4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a5d4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A5D6:
    /* 0000a5d6   2  rts */
    c->pc = RC_ADDR(0x0000a5d6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
