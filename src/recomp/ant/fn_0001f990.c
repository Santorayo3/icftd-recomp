/* fn_0001f990 - 122 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f990(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f990u): goto L_1F990;
    case RC_ADDR(0x0001f994u): goto L_1F994;
    case RC_ADDR(0x0001f998u): goto L_1F998;
    case RC_ADDR(0x0001f99cu): goto L_1F99C;
    case RC_ADDR(0x0001f9a0u): goto L_1F9A0;
    case RC_ADDR(0x0001f9a4u): goto L_1F9A4;
    case RC_ADDR(0x0001f9a8u): goto L_1F9A8;
    case RC_ADDR(0x0001f9aeu): goto L_1F9AE;
    case RC_ADDR(0x0001f9b2u): goto L_1F9B2;
    case RC_ADDR(0x0001f9b4u): goto L_1F9B4;
    case RC_ADDR(0x0001f9b8u): goto L_1F9B8;
    case RC_ADDR(0x0001f9bcu): goto L_1F9BC;
    case RC_ADDR(0x0001f9c0u): goto L_1F9C0;
    case RC_ADDR(0x0001f9c2u): goto L_1F9C2;
    case RC_ADDR(0x0001f9c6u): goto L_1F9C6;
    case RC_ADDR(0x0001f9cau): goto L_1F9CA;
    case RC_ADDR(0x0001f9ceu): goto L_1F9CE;
    case RC_ADDR(0x0001f9d0u): goto L_1F9D0;
    case RC_ADDR(0x0001f9d2u): goto L_1F9D2;
    case RC_ADDR(0x0001f9d4u): goto L_1F9D4;
    case RC_ADDR(0x0001f9d8u): goto L_1F9D8;
    case RC_ADDR(0x0001f9dau): goto L_1F9DA;
    case RC_ADDR(0x0001f9dcu): goto L_1F9DC;
    case RC_ADDR(0x0001f9deu): goto L_1F9DE;
    case RC_ADDR(0x0001f9e2u): goto L_1F9E2;
    case RC_ADDR(0x0001f9e4u): goto L_1F9E4;
    case RC_ADDR(0x0001f9e6u): goto L_1F9E6;
    case RC_ADDR(0x0001f9e8u): goto L_1F9E8;
    case RC_ADDR(0x0001f9ecu): goto L_1F9EC;
    case RC_ADDR(0x0001f9eeu): goto L_1F9EE;
    case RC_ADDR(0x0001f9f0u): goto L_1F9F0;
    case RC_ADDR(0x0001f9f2u): goto L_1F9F2;
    case RC_ADDR(0x0001f9f6u): goto L_1F9F6;
    case RC_ADDR(0x0001f9f8u): goto L_1F9F8;
    case RC_ADDR(0x0001f9fau): goto L_1F9FA;
    case RC_ADDR(0x0001f9fcu): goto L_1F9FC;
    case RC_ADDR(0x0001fa00u): goto L_1FA00;
    case RC_ADDR(0x0001fa04u): goto L_1FA04;
    case RC_ADDR(0x0001fa08u): goto L_1FA08;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F990:
    /* 0001f990   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001f990u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1F994:
    /* 0001f994   4  lea (7f6,A4),A0 */
    c->pc = RC_ADDR(0x0001f994u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7f6u);

L_1F998:
    /* 0001f998   4  lea (89c,A4),A1 */
    c->pc = RC_ADDR(0x0001f998u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x89cu);

L_1F99C:
    /* 0001f99c   4  lea (30f0,A4),A3 */
    c->pc = RC_ADDR(0x0001f99cu);
    rc_step(c, m, 8);
    c->a[3] = (c->a[4] + 0x30f0u);

L_1F9A0:
    /* 0001f9a0   4  lea (3130,A4),A2 */
    c->pc = RC_ADDR(0x0001f9a0u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x3130u);

L_1F9A4:
    /* 0001f9a4   4  lea (31f0,A4),A6 */
    c->pc = RC_ADDR(0x0001f9a4u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x31f0u);

L_1F9A8:
    /* 0001f9a8   6  move.w #1,(32f8,A4) */
    c->pc = RC_ADDR(0x0001f9a8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x32f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9AE:
    /* 0001f9ae   4  move.w (922,A4),D4 */
    c->pc = RC_ADDR(0x0001f9aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x922u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9B2:
    /* 0001f9b2   2  bne 0001f9b8 */
    c->pc = RC_ADDR(0x0001f9b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F9B8;

L_1F9B4:
    /* 0001f9b4   4  move.w #1,D4 */
    c->pc = RC_ADDR(0x0001f9b4u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9B8:
    /* 0001f9b8   4  move.w D4,(32f6,A4) */
    c->pc = RC_ADDR(0x0001f9b8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x32f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9BC:
    /* 0001f9bc   4  move.w (920,A4),D4 */
    c->pc = RC_ADDR(0x0001f9bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x920u));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9C0:
    /* 0001f9c0   2  bne 0001f9c6 */
    c->pc = RC_ADDR(0x0001f9c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F9C6;

L_1F9C2:
    /* 0001f9c2   4  move.w #1,D4 */
    c->pc = RC_ADDR(0x0001f9c2u);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9C6:
    /* 0001f9c6   4  move.w D4,(32f4,A4) */
    c->pc = RC_ADDR(0x0001f9c6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x32f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9CA:
    /* 0001f9ca   4  move.w #1f,D6 */
    c->pc = RC_ADDR(0x0001f9cau);
    rc_step(c, m, 8);
    t0 = 0x0000001fu;
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9CE:
    /* 0001f9ce   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x0001f9ceu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9D0:
    /* 0001f9d0   2  move.w (A1)+,D2 */
    c->pc = RC_ADDR(0x0001f9d0u);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9D2:
    /* 0001f9d2   2  move.w D2,(A3)+ */
    c->pc = RC_ADDR(0x0001f9d2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    t3 = c->a[3];
    c->a[3] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9D4:
    /* 0001f9d4   4  move.w #2,D5 */
    c->pc = RC_ADDR(0x0001f9d4u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9D8:
    /* 0001f9d8   2  rol.w #4,D0 */
    c->pc = RC_ADDR(0x0001f9d8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1F9DA:
    /* 0001f9da   2  clr.l D1 */
    c->pc = RC_ADDR(0x0001f9dau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F9DC:
    /* 0001f9dc   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001f9dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9DE:
    /* 0001f9de   4  and.w #f000,D1 */
    c->pc = RC_ADDR(0x0001f9deu);
    rc_step(c, m, 10);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1F9E2:
    /* 0001f9e2   2  move.w D1,(A2)+ */
    c->pc = RC_ADDR(0x0001f9e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[2];
    c->a[2] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9E4:
    /* 0001f9e4   2  rol.w #4,D2 */
    c->pc = RC_ADDR(0x0001f9e4u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_1F9E6:
    /* 0001f9e6   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x0001f9e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9E8:
    /* 0001f9e8   4  and.w #f000,D3 */
    c->pc = RC_ADDR(0x0001f9e8u);
    rc_step(c, m, 10);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_1F9EC:
    /* 0001f9ec   2  sub.w D3,D1 */
    c->pc = RC_ADDR(0x0001f9ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1F9EE:
    /* 0001f9ee   2  bcc 0001f9f8 */
    c->pc = RC_ADDR(0x0001f9eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1F9F8;

L_1F9F0:
    /* 0001f9f0   2  swap D1 */
    c->pc = RC_ADDR(0x0001f9f0u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F9F2:
    /* 0001f9f2   4  move.w #ffff,D1 */
    c->pc = RC_ADDR(0x0001f9f2u);
    rc_step(c, m, 8);
    t0 = 0x0000ffffu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9F6:
    /* 0001f9f6   2  swap D1 */
    c->pc = RC_ADDR(0x0001f9f6u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F9F8:
    /* 0001f9f8   2  divs.w D4,D1 */
    c->pc = RC_ADDR(0x0001f9f8u);
    rc_step(c, m, 158);
    t0 = rc_d_get(c, 4, RC_W);
    rc_divs(c, m, 1, t0);

L_1F9FA:
    /* 0001f9fa   2  move.w D1,(A6)+ */
    c->pc = RC_ADDR(0x0001f9fau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9FC:
    /* 0001f9fc   4  dbf D5,0001f9d8 */
    c->pc = RC_ADDR(0x0001f9fcu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 5, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 5, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1F9D8; }
    }

L_1FA00:
    /* 0001fa00   4  dbf D6,0001f9ce */
    c->pc = RC_ADDR(0x0001fa00u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1F9CE; }
    }

L_1FA04:
    /* 0001fa04   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = RC_ADDR(0x0001fa04u);
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
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FA08:
    /* 0001fa08   2  rts */
    c->pc = RC_ADDR(0x0001fa08u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
