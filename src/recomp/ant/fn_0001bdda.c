/* fn_0001bdda - 94 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001bdda(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bddau): goto L_1BDDA;
    case RC_ADDR(0x0001bddeu): goto L_1BDDE;
    case RC_ADDR(0x0001bde2u): goto L_1BDE2;
    case RC_ADDR(0x0001bde6u): goto L_1BDE6;
    case RC_ADDR(0x0001bde8u): goto L_1BDE8;
    case RC_ADDR(0x0001bdecu): goto L_1BDEC;
    case RC_ADDR(0x0001bdf2u): goto L_1BDF2;
    case RC_ADDR(0x0001bdf6u): goto L_1BDF6;
    case RC_ADDR(0x0001bdf8u): goto L_1BDF8;
    case RC_ADDR(0x0001bdfcu): goto L_1BDFC;
    case RC_ADDR(0x0001be00u): goto L_1BE00;
    case RC_ADDR(0x0001be02u): goto L_1BE02;
    case RC_ADDR(0x0001be06u): goto L_1BE06;
    case RC_ADDR(0x0001be0au): goto L_1BE0A;
    case RC_ADDR(0x0001be0eu): goto L_1BE0E;
    case RC_ADDR(0x0001be10u): goto L_1BE10;
    case RC_ADDR(0x0001be12u): goto L_1BE12;
    case RC_ADDR(0x0001be16u): goto L_1BE16;
    case RC_ADDR(0x0001be1au): goto L_1BE1A;
    case RC_ADDR(0x0001be1eu): goto L_1BE1E;
    case RC_ADDR(0x0001be20u): goto L_1BE20;
    case RC_ADDR(0x0001be24u): goto L_1BE24;
    case RC_ADDR(0x0001be26u): goto L_1BE26;
    case RC_ADDR(0x0001be2au): goto L_1BE2A;
    case RC_ADDR(0x0001be32u): goto L_1BE32;
    case RC_ADDR(0x0001be34u): goto L_1BE34;
    case RC_ADDR(0x0001be36u): goto L_1BE36;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BDDA:
    /* 0001bdda   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001bddau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1BDDE:
    /* 0001bdde   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001bddeu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BDE2:
    /* 0001bde2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001bde2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BDE6:
    /* 0001bde6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bde6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BDE8:
    /* 0001bde8   4  lea (26ea,A4),A0 */
    c->pc = RC_ADDR(0x0001bde8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eau);

L_1BDEC:
    /* 0001bdec   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001bdecu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BDF2:
    /* 0001bdf2   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001bdf2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_1BDF6:
    /* 0001bdf6   2  ble 0001be26 */
    c->pc = RC_ADDR(0x0001bdf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BE26;

L_1BDF8:
    /* 0001bdf8   4  move.l (2a32,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bdf8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a32u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BDFC:
    /* 0001bdfc   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001bdfcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BE00:
    /* 0001be00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001be00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BE02:
    /* 0001be02   4  lea (26ee,A4),A0 */
    c->pc = RC_ADDR(0x0001be02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26eeu);

L_1BE06:
    /* 0001be06   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001be06u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE0A:
    /* 0001be0a   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0001be0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE0E:
    /* 0001be0e   2  subq.w #7,D1 */
    c->pc = RC_ADDR(0x0001be0eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE10:
    /* 0001be10   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001be10u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE12:
    /* 0001be12   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001be12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE16:
    /* 0001be16   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001be16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BE1A:
    /* 0001be1a   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001be1au);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BE1E:
    /* 0001be1e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001be1eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE20:
    /* 0001be20   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001be20u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001be24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BE24:
    /* 0001be24   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001be24u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BE26:
    /* 0001be26   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001be26u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BE2A:
    /* 0001be2a   8  cmpi.l #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001be2au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000002u);

L_1BE32:
    /* 0001be32   2  blt 0001bde2 */
    c->pc = RC_ADDR(0x0001be32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BDE2; }

L_1BE34:
    /* 0001be34   2  unlk A5 */
    c->pc = RC_ADDR(0x0001be34u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BE36:
    /* 0001be36   2  rts */
    c->pc = RC_ADDR(0x0001be36u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
