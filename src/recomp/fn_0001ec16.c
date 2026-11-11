/* fn_0001ec16 - 44 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ec16(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ec16u): goto L_1EC16;
    case RC_ADDR(0x0001ec1au): goto L_1EC1A;
    case RC_ADDR(0x0001ec1eu): goto L_1EC1E;
    case RC_ADDR(0x0001ec20u): goto L_1EC20;
    case RC_ADDR(0x0001ec22u): goto L_1EC22;
    case RC_ADDR(0x0001ec26u): goto L_1EC26;
    case RC_ADDR(0x0001ec2au): goto L_1EC2A;
    case RC_ADDR(0x0001ec2eu): goto L_1EC2E;
    case RC_ADDR(0x0001ec32u): goto L_1EC32;
    case RC_ADDR(0x0001ec34u): goto L_1EC34;
    case RC_ADDR(0x0001ec38u): goto L_1EC38;
    case RC_ADDR(0x0001ec3cu): goto L_1EC3C;
    case RC_ADDR(0x0001ec40u): goto L_1EC40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC16:
    /* 0001ec16   4  lea (ffffcc06,A4),A0 */
    c->pc = RC_ADDR(0x0001ec16u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x33fau);

L_1EC1A:
    /* 0001ec1a   4  move.w (ffffcc04,A4),D1 */
    c->pc = RC_ADDR(0x0001ec1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x33fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC1E:
    /* 0001ec1e   2  subq.w #2,D1 */
    c->pc = RC_ADDR(0x0001ec1eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EC20:
    /* 0001ec20   2  bpl 0001ec26 */
    c->pc = RC_ADDR(0x0001ec20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1EC26;

L_1EC22:
    /* 0001ec22   4  move.w #70,D1 */
    c->pc = RC_ADDR(0x0001ec22u);
    rc_step(c, m, 8);
    t0 = 0x00000070u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC26:
    /* 0001ec26   4  move.w D1,(ffffcc04,A4) */
    c->pc = RC_ADDR(0x0001ec26u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x33fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC2A:
    /* 0001ec2a   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001ec2au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC2E:
    /* 0001ec2e   4  sub.w #64,D1 */
    c->pc = RC_ADDR(0x0001ec2eu);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EC32:
    /* 0001ec32   2  bpl 0001ec38 */
    c->pc = RC_ADDR(0x0001ec32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1EC38;

L_1EC34:
    /* 0001ec34   4  add.w #72,D1 */
    c->pc = RC_ADDR(0x0001ec34u);
    rc_step(c, m, 10);
    t0 = 0x00000072u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EC38:
    /* 0001ec38   4  add.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001ec38u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1EC3C:
    /* 0001ec3c   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0001ec3cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC40:
    /* 0001ec40   2  rts */
    c->pc = RC_ADDR(0x0001ec40u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
