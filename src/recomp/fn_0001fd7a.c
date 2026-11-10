/* fn_0001fd7a - 110 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fd7a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fd7au): goto L_1FD7A;
    case RC_ADDR(0x0001fd7eu): goto L_1FD7E;
    case RC_ADDR(0x0001fd82u): goto L_1FD82;
    case RC_ADDR(0x0001fd86u): goto L_1FD86;
    case RC_ADDR(0x0001fd8au): goto L_1FD8A;
    case RC_ADDR(0x0001fd8cu): goto L_1FD8C;
    case RC_ADDR(0x0001fd8eu): goto L_1FD8E;
    case RC_ADDR(0x0001fd92u): goto L_1FD92;
    case RC_ADDR(0x0001fd94u): goto L_1FD94;
    case RC_ADDR(0x0001fd98u): goto L_1FD98;
    case RC_ADDR(0x0001fd9cu): goto L_1FD9C;
    case RC_ADDR(0x0001fda0u): goto L_1FDA0;
    case RC_ADDR(0x0001fda4u): goto L_1FDA4;
    case RC_ADDR(0x0001fda6u): goto L_1FDA6;
    case RC_ADDR(0x0001fda8u): goto L_1FDA8;
    case RC_ADDR(0x0001fdaau): goto L_1FDAA;
    case RC_ADDR(0x0001fdacu): goto L_1FDAC;
    case RC_ADDR(0x0001fdb0u): goto L_1FDB0;
    case RC_ADDR(0x0001fdb2u): goto L_1FDB2;
    case RC_ADDR(0x0001fdb4u): goto L_1FDB4;
    case RC_ADDR(0x0001fdb8u): goto L_1FDB8;
    case RC_ADDR(0x0001fdbau): goto L_1FDBA;
    case RC_ADDR(0x0001fdbcu): goto L_1FDBC;
    case RC_ADDR(0x0001fdc0u): goto L_1FDC0;
    case RC_ADDR(0x0001fdc2u): goto L_1FDC2;
    case RC_ADDR(0x0001fdc4u): goto L_1FDC4;
    case RC_ADDR(0x0001fdc6u): goto L_1FDC6;
    case RC_ADDR(0x0001fdc8u): goto L_1FDC8;
    case RC_ADDR(0x0001fdcau): goto L_1FDCA;
    case RC_ADDR(0x0001fdccu): goto L_1FDCC;
    case RC_ADDR(0x0001fdceu): goto L_1FDCE;
    case RC_ADDR(0x0001fdd0u): goto L_1FDD0;
    case RC_ADDR(0x0001fdd4u): goto L_1FDD4;
    case RC_ADDR(0x0001fdd6u): goto L_1FDD6;
    case RC_ADDR(0x0001fdd8u): goto L_1FDD8;
    case RC_ADDR(0x0001fddau): goto L_1FDDA;
    case RC_ADDR(0x0001fddeu): goto L_1FDDE;
    case RC_ADDR(0x0001fde2u): goto L_1FDE2;
    case RC_ADDR(0x0001fde4u): goto L_1FDE4;
    case RC_ADDR(0x0001fde6u): goto L_1FDE6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FD7A:
    /* 0001fd7a   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd7au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FD7E:
    /* 0001fd7e   4  movem.l { D5 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd7eu);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1FD82:
    /* 0001fd82   4  subq.w #1,(10,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd82u);
    t3 = (c->a[5] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FD86:
    /* 0001fd86   4  move.w (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd86u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD8A:
    /* 0001fd8a   2  asl.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd8au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1FD8C:
    /* 0001fd8c   2  move.w D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd8cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD8E:
    /* 0001fd8e   4  add.w #180,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd8eu);
    t0 = 0x00000180u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1FD92:
    /* 0001fd92   2  bra 0001fdde */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd92u);
    goto L_1FDDE;

L_1FD94:
    /* 0001fd94   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd94u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FD98:
    /* 0001fd98   4  movea.l (4,A0),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd98u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[2] = t0;

L_1FD9C:
    /* 0001fd9c   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fd9cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FDA0:
    /* 0001fda0   4  move.w (8,A0),D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fda0u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDA4:
    /* 0001fda4   2  bra 0001fdc6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fda4u);
    goto L_1FDC6;

L_1FDA6:
    /* 0001fda6   2  move.w (A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fda6u);
    t0 = rc_rd16(c, m, c->a[2]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDA8:
    /* 0001fda8   2  cmp.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fda8u);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FDAA:
    /* 0001fdaa   2  bne 0001fdc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdaau);
    if (rc_cond(c, 6)) goto L_1FDC2;

L_1FDAC:
    /* 0001fdac   4  move.w (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdacu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDB0:
    /* 0001fdb0   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdb0u);
    rc_ext_l(c, 0);

L_1FDB2:
    /* 0001fdb2   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdb2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1FDB4:
    /* 0001fdb4   4  movea.l (c,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdb4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1FDB8:
    /* 0001fdb8   2  movea.l A2,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdb8u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_1FDBA:
    /* 0001fdba   2  addq.l #2,A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdbau);
    c->a[1] += 0x00000002u;

L_1FDBC:
    /* 0001fdbc   4  move.l A1,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdbcu);
    t0 = rc_a_get(c, 1, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FDC0:
    /* 0001fdc0   2  bra 0001fdca */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdc0u);
    goto L_1FDCA;

L_1FDC2:
    /* 0001fdc2   2  addq.l #4,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdc2u);
    c->a[2] += 0x00000004u;

L_1FDC4:
    /* 0001fdc4   2  subq.w #1,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdc4u);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1FDC6:
    /* 0001fdc6   2  tst.w D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdc6u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FDC8:
    /* 0001fdc8   2  bgt 0001fda6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdc8u);
    if (rc_cond(c, 14)) { rc_tick(); goto L_1FDA6; }

L_1FDCA:
    /* 0001fdca   2  tst.w D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdcau);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FDCC:
    /* 0001fdcc   2  bne 0001fdd8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdccu);
    if (rc_cond(c, 6)) goto L_1FDD8;

L_1FDCE:
    /* 0001fdce   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdceu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FDD0:
    /* 0001fdd0   4  movem.l (SP)+,{ D4 D5 A2 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdd0u);
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
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FDD4:
    /* 0001fdd4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdd4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FDD6:
    /* 0001fdd6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdd6u);
    rc_ret(c, m);
    return;

L_1FDD8:
    /* 0001fdd8   2  subq.w #2,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fdd8u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1FDDA:
    /* 0001fdda   4  subq.w #1,(10,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fddau);
    t3 = (c->a[5] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FDDE:
    /* 0001fdde   4  tst.w (10,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fddeu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_1FDE2:
    /* 0001fde2   2  bge 0001fd94 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fde2u);
    if (rc_cond(c, 12)) { rc_tick(); goto L_1FD94; }

L_1FDE4:
    /* 0001fde4   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fde4u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FDE6:
    /* 0001fde6   2  bra 0001fdd0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fde6u);
    rc_tick();
    goto L_1FDD0;

}
