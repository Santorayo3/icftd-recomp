/* fn_00001bb0 - 54 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001bb0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001bb0u): goto L_1BB0;
    case RC_ADDR(0x00001bb4u): goto L_1BB4;
    case RC_ADDR(0x00001bb8u): goto L_1BB8;
    case RC_ADDR(0x00001bbcu): goto L_1BBC;
    case RC_ADDR(0x00001bbeu): goto L_1BBE;
    case RC_ADDR(0x00001bc0u): goto L_1BC0;
    case RC_ADDR(0x00001bc4u): goto L_1BC4;
    case RC_ADDR(0x00001bc8u): goto L_1BC8;
    case RC_ADDR(0x00001bccu): goto L_1BCC;
    case RC_ADDR(0x00001bceu): goto L_1BCE;
    case RC_ADDR(0x00001bd0u): goto L_1BD0;
    case RC_ADDR(0x00001bd2u): goto L_1BD2;
    case RC_ADDR(0x00001bd4u): goto L_1BD4;
    case RC_ADDR(0x00001bd8u): goto L_1BD8;
    case RC_ADDR(0x00001bdeu): goto L_1BDE;
    case RC_ADDR(0x00001be0u): goto L_1BE0;
    case RC_ADDR(0x00001be4u): goto L_1BE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BB0:
    /* 00001bb0   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00001bb0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1BB4:
    /* 00001bb4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00001bb4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BB8:
    /* 00001bb8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001bb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BBC:
    /* 00001bbc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001bbcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BBE:
    /* 00001bbe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00001bbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BC0:
    /* 00001bc0   4  lea (ffffd6fc,A4),A0 */
    c->pc = RC_ADDR(0x00001bc0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2904u);

L_1BC4:
    /* 00001bc4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00001bc4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BC8:
    /* 00001bc8   4  cmp.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00001bc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BCC:
    /* 00001bcc   2  bne 00001bd4 */
    c->pc = RC_ADDR(0x00001bccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BD4;

L_1BCE:
    /* 00001bce   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00001bceu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1BD0:
    /* 00001bd0   2  unlk A5 */
    c->pc = RC_ADDR(0x00001bd0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BD2:
    /* 00001bd2   2  rts */
    c->pc = RC_ADDR(0x00001bd2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1BD4:
    /* 00001bd4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001bd4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BD8:
    /* 00001bd8   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001bd8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_1BDE:
    /* 00001bde   2  blt 00001bb8 */
    c->pc = RC_ADDR(0x00001bdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BB8; }

L_1BE0:
    /* 00001be0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00001be0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE4:
    /* 00001be4   2  bra 00001bd0 */
    c->pc = RC_ADDR(0x00001be4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BD0;

}
