/* fn_00019218 - 68 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019218(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00019218u): goto L_19218;
    case RC_ADDR(0x0001921cu): goto L_1921C;
    case RC_ADDR(0x00019220u): goto L_19220;
    case RC_ADDR(0x00019224u): goto L_19224;
    case RC_ADDR(0x00019226u): goto L_19226;
    case RC_ADDR(0x00019228u): goto L_19228;
    case RC_ADDR(0x0001922au): goto L_1922A;
    case RC_ADDR(0x0001922eu): goto L_1922E;
    case RC_ADDR(0x00019232u): goto L_19232;
    case RC_ADDR(0x00019236u): goto L_19236;
    case RC_ADDR(0x0001923au): goto L_1923A;
    case RC_ADDR(0x0001923eu): goto L_1923E;
    case RC_ADDR(0x00019242u): goto L_19242;
    case RC_ADDR(0x00019246u): goto L_19246;
    case RC_ADDR(0x0001924au): goto L_1924A;
    case RC_ADDR(0x0001924eu): goto L_1924E;
    case RC_ADDR(0x00019252u): goto L_19252;
    case RC_ADDR(0x00019256u): goto L_19256;
    case RC_ADDR(0x00019258u): goto L_19258;
    case RC_ADDR(0x0001925au): goto L_1925A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19218:
    /* 00019218   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00019218u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1921C:
    /* 0001921c   4  move.w #31,-(A7) */
    c->pc = RC_ADDR(0x0001921cu);
    rc_step(c, m, 12);
    t0 = 0x00000031u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19220:
    /* 00019220   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00019220u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00019224u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_19224:
    /* 00019224   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00019224u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_19226:
    /* 00019226   2  tst.w D0 */
    c->pc = RC_ADDR(0x00019226u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_19228:
    /* 00019228   2  beq 00019258 */
    c->pc = RC_ADDR(0x00019228u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_19258;

L_1922A:
    /* 0001922a   4  move.w (ffffb5d8,A4),D0 */
    c->pc = RC_ADDR(0x0001922au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1922E:
    /* 0001922e   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x0001922eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19232:
    /* 00019232   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019232u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19236:
    /* 00019236   4  move.w (ffffb5da,A4),D0 */
    c->pc = RC_ADDR(0x00019236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4a26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1923A:
    /* 0001923a   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x0001923au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1923E:
    /* 0001923e   4  add.w #c8,D0 */
    c->pc = RC_ADDR(0x0001923eu);
    rc_step(c, m, 10);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_19242:
    /* 00019242   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00019242u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19246:
    /* 00019246   4  move.l (1db2,A4),-(A7) */
    c->pc = RC_ADDR(0x00019246u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1db2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1924A:
    /* 0001924a   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001924au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1924E:
    /* 0001924e   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0001924eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_19252:
    /* 00019252   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00019252u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00019256u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_19256:
    /* 00019256   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019256u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19258:
    /* 00019258   2  unlk A5 */
    c->pc = RC_ADDR(0x00019258u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1925A:
    /* 0001925a   2  rts */
    c->pc = RC_ADDR(0x0001925au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
