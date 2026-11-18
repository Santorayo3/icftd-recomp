/* fn_0001390a - 64 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001390a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001390au): goto L_1390A;
    case RC_ADDR(0x0001390eu): goto L_1390E;
    case RC_ADDR(0x00013914u): goto L_13914;
    case RC_ADDR(0x00013918u): goto L_13918;
    case RC_ADDR(0x0001391cu): goto L_1391C;
    case RC_ADDR(0x0001391eu): goto L_1391E;
    case RC_ADDR(0x00013920u): goto L_13920;
    case RC_ADDR(0x00013924u): goto L_13924;
    case RC_ADDR(0x00013928u): goto L_13928;
    case RC_ADDR(0x0001392au): goto L_1392A;
    case RC_ADDR(0x0001392cu): goto L_1392C;
    case RC_ADDR(0x00013930u): goto L_13930;
    case RC_ADDR(0x00013936u): goto L_13936;
    case RC_ADDR(0x0001393au): goto L_1393A;
    case RC_ADDR(0x0001393eu): goto L_1393E;
    case RC_ADDR(0x00013944u): goto L_13944;
    case RC_ADDR(0x00013946u): goto L_13946;
    case RC_ADDR(0x00013948u): goto L_13948;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1390A:
    /* 0001390a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001390au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1390E:
    /* 0001390e   6  move.w #29,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001390eu);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13914:
    /* 00013914   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013914u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13918:
    /* 00013918   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013918u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1391C:
    /* 0001391c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001391cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1391E:
    /* 0001391e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001391eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13920:
    /* 00013920   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x00013920u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_13924:
    /* 00013924   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00013924u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13928:
    /* 00013928   2  ext.l D1 */
    c->pc = RC_ADDR(0x00013928u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1392A:
    /* 0001392a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001392au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1392C:
    /* 0001392c   4  movea.l (17fe,A4),A1 */
    c->pc = RC_ADDR(0x0001392cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[1] = t0;

L_13930:
    /* 00013930   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00013930u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13936:
    /* 00013936   4  addq.w #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013936u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1393A:
    /* 0001393a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001393au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1393E:
    /* 0001393e   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001393eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_13944:
    /* 00013944   2  blt 00013918 */
    c->pc = RC_ADDR(0x00013944u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13918; }

L_13946:
    /* 00013946   2  unlk A5 */
    c->pc = RC_ADDR(0x00013946u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13948:
    /* 00013948   2  rts */
    c->pc = RC_ADDR(0x00013948u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
