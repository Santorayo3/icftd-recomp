/* fn_0001c05c - 194 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c05c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c05cu): goto L_1C05C;
    case RC_ADDR(0x0001c060u): goto L_1C060;
    case RC_ADDR(0x0001c064u): goto L_1C064;
    case RC_ADDR(0x0001c068u): goto L_1C068;
    case RC_ADDR(0x0001c06cu): goto L_1C06C;
    case RC_ADDR(0x0001c070u): goto L_1C070;
    case RC_ADDR(0x0001c074u): goto L_1C074;
    case RC_ADDR(0x0001c078u): goto L_1C078;
    case RC_ADDR(0x0001c07cu): goto L_1C07C;
    case RC_ADDR(0x0001c07eu): goto L_1C07E;
    case RC_ADDR(0x0001c082u): goto L_1C082;
    case RC_ADDR(0x0001c084u): goto L_1C084;
    case RC_ADDR(0x0001c086u): goto L_1C086;
    case RC_ADDR(0x0001c08au): goto L_1C08A;
    case RC_ADDR(0x0001c08eu): goto L_1C08E;
    case RC_ADDR(0x0001c092u): goto L_1C092;
    case RC_ADDR(0x0001c094u): goto L_1C094;
    case RC_ADDR(0x0001c096u): goto L_1C096;
    case RC_ADDR(0x0001c098u): goto L_1C098;
    case RC_ADDR(0x0001c09au): goto L_1C09A;
    case RC_ADDR(0x0001c09eu): goto L_1C09E;
    case RC_ADDR(0x0001c0a2u): goto L_1C0A2;
    case RC_ADDR(0x0001c0a6u): goto L_1C0A6;
    case RC_ADDR(0x0001c0a8u): goto L_1C0A8;
    case RC_ADDR(0x0001c0aau): goto L_1C0AA;
    case RC_ADDR(0x0001c0aeu): goto L_1C0AE;
    case RC_ADDR(0x0001c0b0u): goto L_1C0B0;
    case RC_ADDR(0x0001c0b2u): goto L_1C0B2;
    case RC_ADDR(0x0001c0b4u): goto L_1C0B4;
    case RC_ADDR(0x0001c0b6u): goto L_1C0B6;
    case RC_ADDR(0x0001c0b8u): goto L_1C0B8;
    case RC_ADDR(0x0001c0bcu): goto L_1C0BC;
    case RC_ADDR(0x0001c0c0u): goto L_1C0C0;
    case RC_ADDR(0x0001c0c4u): goto L_1C0C4;
    case RC_ADDR(0x0001c0c6u): goto L_1C0C6;
    case RC_ADDR(0x0001c0c8u): goto L_1C0C8;
    case RC_ADDR(0x0001c0ccu): goto L_1C0CC;
    case RC_ADDR(0x0001c0d0u): goto L_1C0D0;
    case RC_ADDR(0x0001c0d4u): goto L_1C0D4;
    case RC_ADDR(0x0001c0d6u): goto L_1C0D6;
    case RC_ADDR(0x0001c0dcu): goto L_1C0DC;
    case RC_ADDR(0x0001c0deu): goto L_1C0DE;
    case RC_ADDR(0x0001c0e4u): goto L_1C0E4;
    case RC_ADDR(0x0001c0e6u): goto L_1C0E6;
    case RC_ADDR(0x0001c0ecu): goto L_1C0EC;
    case RC_ADDR(0x0001c0f2u): goto L_1C0F2;
    case RC_ADDR(0x0001c0f4u): goto L_1C0F4;
    case RC_ADDR(0x0001c0fau): goto L_1C0FA;
    case RC_ADDR(0x0001c100u): goto L_1C100;
    case RC_ADDR(0x0001c102u): goto L_1C102;
    case RC_ADDR(0x0001c108u): goto L_1C108;
    case RC_ADDR(0x0001c10eu): goto L_1C10E;
    case RC_ADDR(0x0001c110u): goto L_1C110;
    case RC_ADDR(0x0001c116u): goto L_1C116;
    case RC_ADDR(0x0001c11au): goto L_1C11A;
    case RC_ADDR(0x0001c11cu): goto L_1C11C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C05C:
    /* 0001c05c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c05cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C060:
    /* 0001c060   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001c060u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1C064:
    /* 0001c064   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001c064u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C068:
    /* 0001c068   4  sub.w (e6c,A4),D5 */
    c->pc = RC_ADDR(0x0001c068u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1C06C:
    /* 0001c06c   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001c06cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C070:
    /* 0001c070   4  sub.w (e6e,A4),D6 */
    c->pc = RC_ADDR(0x0001c070u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1C074:
    /* 0001c074   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0001c074u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C078:
    /* 0001c078   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001c078u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C07C:
    /* 0001c07c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001c07cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1C07E:
    /* 0001c07e   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001c07eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffff83ffu);

L_1C082:
    /* 0001c082   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c082u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C084:
    /* 0001c084   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c084u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C086:
    /* 0001c086   4  lea (ffffcedc,A4),A0 */
    c->pc = RC_ADDR(0x0001c086u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3124u);

L_1C08A:
    /* 0001c08a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c08au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C08E:
    /* 0001c08e   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c08eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C092:
    /* 0001c092   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001c092u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C094:
    /* 0001c094   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c094u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C096:
    /* 0001c096   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c096u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C098:
    /* 0001c098   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c098u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C09A:
    /* 0001c09a   4  lea (ffffced4,A4),A0 */
    c->pc = RC_ADDR(0x0001c09au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x312cu);

L_1C09E:
    /* 0001c09e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c09eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0A2:
    /* 0001c0a2   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c0a2u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1C0A6:
    /* 0001c0a6   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001c0a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C0A8:
    /* 0001c0a8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001c0a8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0AA:
    /* 0001c0aa   4  jsr (0001c2a2) */
    c->pc = RC_ADDR(0x0001c0aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001c0aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c2a2u);
    return;

L_1C0AE:
    /* 0001c0ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c0aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C0B0:
    /* 0001c0b0   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001c0b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1C0B2:
    /* 0001c0b2   2  beq 0001c0d4 */
    c->pc = RC_ADDR(0x0001c0b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C0D4;

L_1C0B4:
    /* 0001c0b4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c0b4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0B6:
    /* 0001c0b6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c0b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C0B8:
    /* 0001c0b8   4  lea (ffffced4,A4),A0 */
    c->pc = RC_ADDR(0x0001c0b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x312cu);

L_1C0BC:
    /* 0001c0bc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c0bcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0C0:
    /* 0001c0c0   4  sub.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c0c0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C0C4:
    /* 0001c0c4   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c0c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C0C6:
    /* 0001c0c6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c0c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C0C8:
    /* 0001c0c8   4  lea (ffffcedc,A4),A0 */
    c->pc = RC_ADDR(0x0001c0c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3124u);

L_1C0CC:
    /* 0001c0cc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c0ccu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0D0:
    /* 0001c0d0   4  sub.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c0d0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C0D4:
    /* 0001c0d4   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001c0d4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1C0D6:
    /* 0001c0d6   6  cmp.l #4,D4 */
    c->pc = RC_ADDR(0x0001c0d6u);
    rc_step(c, m, 14);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C0DC:
    /* 0001c0dc   2  blt 0001c07e */
    c->pc = RC_ADDR(0x0001c0dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C07E; }

L_1C0DE:
    /* 0001c0de   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c0deu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C0E4:
    /* 0001c0e4   2  bge 0001c0ec */
    c->pc = RC_ADDR(0x0001c0e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C0EC;

L_1C0E6:
    /* 0001c0e6   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c0e6u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0EC:
    /* 0001c0ec   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c0ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C0F2:
    /* 0001c0f2   2  ble 0001c0fa */
    c->pc = RC_ADDR(0x0001c0f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C0FA;

L_1C0F4:
    /* 0001c0f4   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c0f4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C0FA:
    /* 0001c0fa   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c0fau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C100:
    /* 0001c100   2  bge 0001c108 */
    c->pc = RC_ADDR(0x0001c100u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C108;

L_1C102:
    /* 0001c102   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c102u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C108:
    /* 0001c108   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c108u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C10E:
    /* 0001c10e   2  ble 0001c116 */
    c->pc = RC_ADDR(0x0001c10eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C116;

L_1C110:
    /* 0001c110   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c110u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C116:
    /* 0001c116   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001c116u);
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
    c->a[7] = t3;

L_1C11A:
    /* 0001c11a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c11au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C11C:
    /* 0001c11c   2  rts */
    c->pc = RC_ADDR(0x0001c11cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
