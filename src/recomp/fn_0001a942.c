/* fn_0001a942 - 194 byte(s), 56 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a942(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a942u): goto L_1A942;
    case RC_ADDR(0x0001a946u): goto L_1A946;
    case RC_ADDR(0x0001a94au): goto L_1A94A;
    case RC_ADDR(0x0001a94eu): goto L_1A94E;
    case RC_ADDR(0x0001a952u): goto L_1A952;
    case RC_ADDR(0x0001a956u): goto L_1A956;
    case RC_ADDR(0x0001a95au): goto L_1A95A;
    case RC_ADDR(0x0001a95eu): goto L_1A95E;
    case RC_ADDR(0x0001a962u): goto L_1A962;
    case RC_ADDR(0x0001a964u): goto L_1A964;
    case RC_ADDR(0x0001a96au): goto L_1A96A;
    case RC_ADDR(0x0001a96cu): goto L_1A96C;
    case RC_ADDR(0x0001a96eu): goto L_1A96E;
    case RC_ADDR(0x0001a972u): goto L_1A972;
    case RC_ADDR(0x0001a976u): goto L_1A976;
    case RC_ADDR(0x0001a97au): goto L_1A97A;
    case RC_ADDR(0x0001a97cu): goto L_1A97C;
    case RC_ADDR(0x0001a97eu): goto L_1A97E;
    case RC_ADDR(0x0001a980u): goto L_1A980;
    case RC_ADDR(0x0001a982u): goto L_1A982;
    case RC_ADDR(0x0001a986u): goto L_1A986;
    case RC_ADDR(0x0001a98au): goto L_1A98A;
    case RC_ADDR(0x0001a98eu): goto L_1A98E;
    case RC_ADDR(0x0001a990u): goto L_1A990;
    case RC_ADDR(0x0001a992u): goto L_1A992;
    case RC_ADDR(0x0001a994u): goto L_1A994;
    case RC_ADDR(0x0001a996u): goto L_1A996;
    case RC_ADDR(0x0001a998u): goto L_1A998;
    case RC_ADDR(0x0001a99au): goto L_1A99A;
    case RC_ADDR(0x0001a99cu): goto L_1A99C;
    case RC_ADDR(0x0001a99eu): goto L_1A99E;
    case RC_ADDR(0x0001a9a2u): goto L_1A9A2;
    case RC_ADDR(0x0001a9a6u): goto L_1A9A6;
    case RC_ADDR(0x0001a9aau): goto L_1A9AA;
    case RC_ADDR(0x0001a9acu): goto L_1A9AC;
    case RC_ADDR(0x0001a9aeu): goto L_1A9AE;
    case RC_ADDR(0x0001a9b2u): goto L_1A9B2;
    case RC_ADDR(0x0001a9b6u): goto L_1A9B6;
    case RC_ADDR(0x0001a9bau): goto L_1A9BA;
    case RC_ADDR(0x0001a9bcu): goto L_1A9BC;
    case RC_ADDR(0x0001a9c2u): goto L_1A9C2;
    case RC_ADDR(0x0001a9c4u): goto L_1A9C4;
    case RC_ADDR(0x0001a9cau): goto L_1A9CA;
    case RC_ADDR(0x0001a9ccu): goto L_1A9CC;
    case RC_ADDR(0x0001a9d2u): goto L_1A9D2;
    case RC_ADDR(0x0001a9d8u): goto L_1A9D8;
    case RC_ADDR(0x0001a9dau): goto L_1A9DA;
    case RC_ADDR(0x0001a9e0u): goto L_1A9E0;
    case RC_ADDR(0x0001a9e6u): goto L_1A9E6;
    case RC_ADDR(0x0001a9e8u): goto L_1A9E8;
    case RC_ADDR(0x0001a9eeu): goto L_1A9EE;
    case RC_ADDR(0x0001a9f4u): goto L_1A9F4;
    case RC_ADDR(0x0001a9f6u): goto L_1A9F6;
    case RC_ADDR(0x0001a9fcu): goto L_1A9FC;
    case RC_ADDR(0x0001aa00u): goto L_1AA00;
    case RC_ADDR(0x0001aa02u): goto L_1AA02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A942:
    /* 0001a942   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a942u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A946:
    /* 0001a946   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001a946u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A94A:
    /* 0001a94a   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001a94au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A94E:
    /* 0001a94e   4  sub.w (470,A4),D5 */
    c->pc = RC_ADDR(0x0001a94eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A952:
    /* 0001a952   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001a952u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A956:
    /* 0001a956   4  sub.w (472,A4),D6 */
    c->pc = RC_ADDR(0x0001a956u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1A95A:
    /* 0001a95a   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0001a95au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A95E:
    /* 0001a95e   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0001a95eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A962:
    /* 0001a962   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001a962u);
    rc_step(c, m);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1A964:
    /* 0001a964   6  pea (0f8f81fc).l */
    c->pc = RC_ADDR(0x0001a964u);
    rc_step(c, m);
    rc_push32(c, m, 0x0f8f81fcu);

L_1A96A:
    /* 0001a96a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a96au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A96C:
    /* 0001a96c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a96cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A96E:
    /* 0001a96e   4  lea (ffffc786,A4),A0 */
    c->pc = RC_ADDR(0x0001a96eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x387au);

L_1A972:
    /* 0001a972   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a972u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A976:
    /* 0001a976   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a976u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A97A:
    /* 0001a97a   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001a97au);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A97C:
    /* 0001a97c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a97cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A97E:
    /* 0001a97e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a97eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A980:
    /* 0001a980   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a980u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A982:
    /* 0001a982   4  lea (ffffc776,A4),A0 */
    c->pc = RC_ADDR(0x0001a982u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x388au);

L_1A986:
    /* 0001a986   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a986u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A98A:
    /* 0001a98a   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001a98au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1A98E:
    /* 0001a98e   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001a98eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1A990:
    /* 0001a990   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001a990u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A992:
    /* 0001a992   2  bsr 0001aa04 */
    c->pc = RC_ADDR(0x0001a992u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001a994u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001aa04u);
    return;

L_1A994:
    /* 0001a994   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001a994u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1A996:
    /* 0001a996   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001a996u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1A998:
    /* 0001a998   2  beq 0001a9ba */
    c->pc = RC_ADDR(0x0001a998u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1A9BA;

L_1A99A:
    /* 0001a99a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a99au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A99C:
    /* 0001a99c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a99cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A99E:
    /* 0001a99e   4  lea (ffffc796,A4),A0 */
    c->pc = RC_ADDR(0x0001a99eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x386au);

L_1A9A2:
    /* 0001a9a2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a9a2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9A6:
    /* 0001a9a6   4  add.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a9a6u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A9AA:
    /* 0001a9aa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001a9aau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A9AC:
    /* 0001a9ac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001a9acu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1A9AE:
    /* 0001a9ae   4  lea (ffffc7a6,A4),A0 */
    c->pc = RC_ADDR(0x0001a9aeu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x385au);

L_1A9B2:
    /* 0001a9b2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001a9b2u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9B6:
    /* 0001a9b6   4  add.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a9b6u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A9BA:
    /* 0001a9ba   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001a9bau);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1A9BC:
    /* 0001a9bc   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0001a9bcu);
    rc_step(c, m);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1A9C2:
    /* 0001a9c2   2  blt 0001a964 */
    c->pc = RC_ADDR(0x0001a9c2u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1A964; }

L_1A9C4:
    /* 0001a9c4   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a9c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A9CA:
    /* 0001a9ca   2  bge 0001a9d2 */
    c->pc = RC_ADDR(0x0001a9cau);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A9D2;

L_1A9CC:
    /* 0001a9cc   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0001a9ccu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9D2:
    /* 0001a9d2   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a9d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A9D8:
    /* 0001a9d8   2  ble 0001a9e0 */
    c->pc = RC_ADDR(0x0001a9d8u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A9E0;

L_1A9DA:
    /* 0001a9da   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0001a9dau);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9E0:
    /* 0001a9e0   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a9e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1A9E6:
    /* 0001a9e6   2  bge 0001a9ee */
    c->pc = RC_ADDR(0x0001a9e6u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1A9EE;

L_1A9E8:
    /* 0001a9e8   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0001a9e8u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9EE:
    /* 0001a9ee   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a9eeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1A9F4:
    /* 0001a9f4   2  ble 0001a9fc */
    c->pc = RC_ADDR(0x0001a9f4u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1A9FC;

L_1A9F6:
    /* 0001a9f6   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0001a9f6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A9FC:
    /* 0001a9fc   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001a9fcu);
    rc_step(c, m);
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
    c->a[7] = t3;

L_1AA00:
    /* 0001aa00   2  unlk A5 */
    c->pc = RC_ADDR(0x0001aa00u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1AA02:
    /* 0001aa02   2  rts */
    c->pc = RC_ADDR(0x0001aa02u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
