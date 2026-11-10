/* fn_0001f95c - 166 byte(s), 50 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f95c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f95cu): goto L_1F95C;
    case RC_ADDR(0x0001f960u): goto L_1F960;
    case RC_ADDR(0x0001f964u): goto L_1F964;
    case RC_ADDR(0x0001f968u): goto L_1F968;
    case RC_ADDR(0x0001f96cu): goto L_1F96C;
    case RC_ADDR(0x0001f96eu): goto L_1F96E;
    case RC_ADDR(0x0001f972u): goto L_1F972;
    case RC_ADDR(0x0001f976u): goto L_1F976;
    case RC_ADDR(0x0001f978u): goto L_1F978;
    case RC_ADDR(0x0001f97cu): goto L_1F97C;
    case RC_ADDR(0x0001f97eu): goto L_1F97E;
    case RC_ADDR(0x0001f984u): goto L_1F984;
    case RC_ADDR(0x0001f98au): goto L_1F98A;
    case RC_ADDR(0x0001f98eu): goto L_1F98E;
    case RC_ADDR(0x0001f992u): goto L_1F992;
    case RC_ADDR(0x0001f994u): goto L_1F994;
    case RC_ADDR(0x0001f998u): goto L_1F998;
    case RC_ADDR(0x0001f99cu): goto L_1F99C;
    case RC_ADDR(0x0001f9a0u): goto L_1F9A0;
    case RC_ADDR(0x0001f9a2u): goto L_1F9A2;
    case RC_ADDR(0x0001f9a6u): goto L_1F9A6;
    case RC_ADDR(0x0001f9aau): goto L_1F9AA;
    case RC_ADDR(0x0001f9aeu): goto L_1F9AE;
    case RC_ADDR(0x0001f9b0u): goto L_1F9B0;
    case RC_ADDR(0x0001f9b4u): goto L_1F9B4;
    case RC_ADDR(0x0001f9b8u): goto L_1F9B8;
    case RC_ADDR(0x0001f9bcu): goto L_1F9BC;
    case RC_ADDR(0x0001f9c0u): goto L_1F9C0;
    case RC_ADDR(0x0001f9c2u): goto L_1F9C2;
    case RC_ADDR(0x0001f9c6u): goto L_1F9C6;
    case RC_ADDR(0x0001f9c8u): goto L_1F9C8;
    case RC_ADDR(0x0001f9cau): goto L_1F9CA;
    case RC_ADDR(0x0001f9ceu): goto L_1F9CE;
    case RC_ADDR(0x0001f9d0u): goto L_1F9D0;
    case RC_ADDR(0x0001f9d2u): goto L_1F9D2;
    case RC_ADDR(0x0001f9d6u): goto L_1F9D6;
    case RC_ADDR(0x0001f9dau): goto L_1F9DA;
    case RC_ADDR(0x0001f9deu): goto L_1F9DE;
    case RC_ADDR(0x0001f9e0u): goto L_1F9E0;
    case RC_ADDR(0x0001f9e4u): goto L_1F9E4;
    case RC_ADDR(0x0001f9e8u): goto L_1F9E8;
    case RC_ADDR(0x0001f9ecu): goto L_1F9EC;
    case RC_ADDR(0x0001f9eeu): goto L_1F9EE;
    case RC_ADDR(0x0001f9f2u): goto L_1F9F2;
    case RC_ADDR(0x0001f9f4u): goto L_1F9F4;
    case RC_ADDR(0x0001f9f6u): goto L_1F9F6;
    case RC_ADDR(0x0001f9fau): goto L_1F9FA;
    case RC_ADDR(0x0001f9fcu): goto L_1F9FC;
    case RC_ADDR(0x0001f9feu): goto L_1F9FE;
    case RC_ADDR(0x0001fa00u): goto L_1FA00;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F95C:
    /* 0001f95c   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f95cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F960:
    /* 0001f960   4  movem.l { D4 D5 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f960u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1F964:
    /* 0001f964   4  movea.l (8,A5),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f964u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F968:
    /* 0001f968   4  tst.w (28,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f968u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_1F96C:
    /* 0001f96c   2  ble 0001f972 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f96cu);
    if (rc_cond(c, 15)) goto L_1F972;

L_1F96E:
    /* 0001f96e   4  subq.w #1,(28,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f96eu);
    t3 = (c->a[2] + 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F972:
    /* 0001f972   4  tst.w (28,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f972u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_1F976:
    /* 0001f976   2  ble 0001f97e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f976u);
    if (rc_cond(c, 15)) goto L_1F97E;

L_1F978:
    /* 0001f978   4  clr.w (2ad6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f978u);
    rc_wr16(c, m, (c->a[4] + 0x2ad6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F97C:
    /* 0001f97c   2  bra 0001f984 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f97cu);
    goto L_1F984;

L_1F97E:
    /* 0001f97e   6  move.w #1,(2ad6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f97eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2ad6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F984:
    /* 0001f984   6  move.l (4,A2),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f984u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F98A:
    /* 0001f98a   4  move.l A2,(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f98au);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F98E:
    /* 0001f98e   4  tst.w (2ad6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f98eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ad6u));
    rc_set_nzvc(c, t0, RC_W);

L_1F992:
    /* 0001f992   2  beq 0001f9e0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f992u);
    if (rc_cond(c, 7)) goto L_1F9E0;

L_1F994:
    /* 0001f994   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f994u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F998:
    /* 0001f998   4  move.w (2a,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f998u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F99C:
    /* 0001f99c   4  cmp.w (c,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f99cu);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F9A0:
    /* 0001f9a0   2  bge 0001f9e0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9a0u);
    if (rc_cond(c, 12)) goto L_1F9E0;

L_1F9A2:
    /* 0001f9a2   4  move.w (2a,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9a2u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9A6:
    /* 0001f9a6   4  muls.w #12,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9a6u);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_1F9AA:
    /* 0001f9aa   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9aau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F9AE:
    /* 0001f9ae   2  movea.l D0,A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9aeu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_1F9B0:
    /* 0001f9b0   4  adda.l (1e,A0),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9b0u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x1eu));
    c->a[3] += t0;

L_1F9B4:
    /* 0001f9b4   4  move.l (e,A3),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9b4u);
    t0 = rc_rd32(c, m, (c->a[3] + 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F9B8:
    /* 0001f9b8   4  move.l (a,A3),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9b8u);
    t0 = rc_rd32(c, m, (c->a[3] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F9BC:
    /* 0001f9bc   4  move.l (6,A3),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9bcu);
    t0 = rc_rd32(c, m, (c->a[3] + 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F9C0:
    /* 0001f9c0   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9c0u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F9C2:
    /* 0001f9c2   4  move.b (4,A3),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9c2u);
    t0 = rc_rd8(c, m, (c->a[3] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F9C6:
    /* 0001f9c6   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9c6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9C8:
    /* 0001f9c8   2  move.l (A3),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9c8u);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F9CA:
    /* 0001f9ca   4  move.b (5,A3),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9cau);
    t0 = rc_rd8(c, m, (c->a[3] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F9CE:
    /* 0001f9ce   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9ceu);
    rc_ext_w(c, 0);

L_1F9D0:
    /* 0001f9d0   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9d0u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9D2:
    /* 0001f9d2   4  jsr (0001f2ae) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9d2u);
    rc_push32(c, m, RC_ADDR(0x0001f9d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_1F9D6:
    /* 0001f9d6   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9d6u);
    c->a[7] = (c->a[7] + 0x14u);

L_1F9DA:
    /* 0001f9da   4  addq.w #1,(2a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9dau);
    t3 = (c->a[2] + 0x2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F9DE:
    /* 0001f9de   2  bra 0001f98e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9deu);
    rc_tick();
    goto L_1F98E;

L_1F9E0:
    /* 0001f9e0   4  movea.l (fffffffc,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9e0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F9E4:
    /* 0001f9e4   4  move.w (2a,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9e4u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F9E8:
    /* 0001f9e8   4  cmp.w (c,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9e8u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F9EC:
    /* 0001f9ec   2  bne 0001f9fe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9ecu);
    if (rc_cond(c, 6)) goto L_1F9FE;

L_1F9EE:
    /* 0001f9ee   4  tst.w (28,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9eeu);
    t0 = rc_rd16(c, m, (c->a[2] + 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_1F9F2:
    /* 0001f9f2   2  bne 0001f9fe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9f2u);
    if (rc_cond(c, 6)) goto L_1F9FE;

L_1F9F4:
    /* 0001f9f4   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9f4u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F9F6:
    /* 0001f9f6   4  movem.l (SP)+,{ A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9f6u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F9FA:
    /* 0001f9fa   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9fau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F9FC:
    /* 0001f9fc   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9fcu);
    rc_ret(c, m);
    return;

L_1F9FE:
    /* 0001f9fe   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f9feu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA00:
    /* 0001fa00   2  bra 0001f9f6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa00u);
    rc_tick();
    goto L_1F9F6;

}
