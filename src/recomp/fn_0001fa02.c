/* fn_0001fa02 - 234 byte(s), 72 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fa02(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fa02u): goto L_1FA02;
    case RC_ADDR(0x0001fa06u): goto L_1FA06;
    case RC_ADDR(0x0001fa08u): goto L_1FA08;
    case RC_ADDR(0x0001fa0cu): goto L_1FA0C;
    case RC_ADDR(0x0001fa12u): goto L_1FA12;
    case RC_ADDR(0x0001fa16u): goto L_1FA16;
    case RC_ADDR(0x0001fa18u): goto L_1FA18;
    case RC_ADDR(0x0001fa1cu): goto L_1FA1C;
    case RC_ADDR(0x0001fa20u): goto L_1FA20;
    case RC_ADDR(0x0001fa26u): goto L_1FA26;
    case RC_ADDR(0x0001fa28u): goto L_1FA28;
    case RC_ADDR(0x0001fa2cu): goto L_1FA2C;
    case RC_ADDR(0x0001fa2eu): goto L_1FA2E;
    case RC_ADDR(0x0001fa32u): goto L_1FA32;
    case RC_ADDR(0x0001fa38u): goto L_1FA38;
    case RC_ADDR(0x0001fa3au): goto L_1FA3A;
    case RC_ADDR(0x0001fa3cu): goto L_1FA3C;
    case RC_ADDR(0x0001fa3eu): goto L_1FA3E;
    case RC_ADDR(0x0001fa40u): goto L_1FA40;
    case RC_ADDR(0x0001fa42u): goto L_1FA42;
    case RC_ADDR(0x0001fa46u): goto L_1FA46;
    case RC_ADDR(0x0001fa4au): goto L_1FA4A;
    case RC_ADDR(0x0001fa4cu): goto L_1FA4C;
    case RC_ADDR(0x0001fa50u): goto L_1FA50;
    case RC_ADDR(0x0001fa54u): goto L_1FA54;
    case RC_ADDR(0x0001fa56u): goto L_1FA56;
    case RC_ADDR(0x0001fa58u): goto L_1FA58;
    case RC_ADDR(0x0001fa5cu): goto L_1FA5C;
    case RC_ADDR(0x0001fa60u): goto L_1FA60;
    case RC_ADDR(0x0001fa62u): goto L_1FA62;
    case RC_ADDR(0x0001fa66u): goto L_1FA66;
    case RC_ADDR(0x0001fa68u): goto L_1FA68;
    case RC_ADDR(0x0001fa6au): goto L_1FA6A;
    case RC_ADDR(0x0001fa6eu): goto L_1FA6E;
    case RC_ADDR(0x0001fa70u): goto L_1FA70;
    case RC_ADDR(0x0001fa72u): goto L_1FA72;
    case RC_ADDR(0x0001fa74u): goto L_1FA74;
    case RC_ADDR(0x0001fa78u): goto L_1FA78;
    case RC_ADDR(0x0001fa7cu): goto L_1FA7C;
    case RC_ADDR(0x0001fa7eu): goto L_1FA7E;
    case RC_ADDR(0x0001fa82u): goto L_1FA82;
    case RC_ADDR(0x0001fa88u): goto L_1FA88;
    case RC_ADDR(0x0001fa8au): goto L_1FA8A;
    case RC_ADDR(0x0001fa8cu): goto L_1FA8C;
    case RC_ADDR(0x0001fa8eu): goto L_1FA8E;
    case RC_ADDR(0x0001fa90u): goto L_1FA90;
    case RC_ADDR(0x0001fa92u): goto L_1FA92;
    case RC_ADDR(0x0001fa96u): goto L_1FA96;
    case RC_ADDR(0x0001fa9au): goto L_1FA9A;
    case RC_ADDR(0x0001fa9cu): goto L_1FA9C;
    case RC_ADDR(0x0001faa0u): goto L_1FAA0;
    case RC_ADDR(0x0001faa4u): goto L_1FAA4;
    case RC_ADDR(0x0001faa6u): goto L_1FAA6;
    case RC_ADDR(0x0001faaau): goto L_1FAAA;
    case RC_ADDR(0x0001faaeu): goto L_1FAAE;
    case RC_ADDR(0x0001fab2u): goto L_1FAB2;
    case RC_ADDR(0x0001fab6u): goto L_1FAB6;
    case RC_ADDR(0x0001fab8u): goto L_1FAB8;
    case RC_ADDR(0x0001fabcu): goto L_1FABC;
    case RC_ADDR(0x0001fac0u): goto L_1FAC0;
    case RC_ADDR(0x0001fac4u): goto L_1FAC4;
    case RC_ADDR(0x0001fac8u): goto L_1FAC8;
    case RC_ADDR(0x0001faccu): goto L_1FACC;
    case RC_ADDR(0x0001fad0u): goto L_1FAD0;
    case RC_ADDR(0x0001fad4u): goto L_1FAD4;
    case RC_ADDR(0x0001fad8u): goto L_1FAD8;
    case RC_ADDR(0x0001fadau): goto L_1FADA;
    case RC_ADDR(0x0001fadeu): goto L_1FADE;
    case RC_ADDR(0x0001fae2u): goto L_1FAE2;
    case RC_ADDR(0x0001fae6u): goto L_1FAE6;
    case RC_ADDR(0x0001fae8u): goto L_1FAE8;
    case RC_ADDR(0x0001faeau): goto L_1FAEA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FA02:
    /* 0001fa02   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001fa02u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1FA06:
    /* 0001fa06   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fa06u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA08:
    /* 0001fa08   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001fa08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FA0C:
    /* 0001fa0c   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fa0cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA12:
    /* 0001fa12   4  jsr (0001db9e) */
    c->pc = RC_ADDR(0x0001fa12u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fa16u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db9eu);
    return;

L_1FA16:
    /* 0001fa16   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001fa16u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA18:
    /* 0001fa18   4  beq 0001fade */
    c->pc = RC_ADDR(0x0001fa18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FADE;

L_1FA1C:
    /* 0001fa1c   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0001fa1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_1FA20:
    /* 0001fa20   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x0001fa20u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FA26:
    /* 0001fa26   2  beq 0001fa62 */
    c->pc = RC_ADDR(0x0001fa26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA62;

L_1FA28:
    /* 0001fa28   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x0001fa28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1FA2C:
    /* 0001fa2c   2  bne 0001fa3a */
    c->pc = RC_ADDR(0x0001fa2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA3A;

L_1FA2E:
    /* 0001fa2e   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0001fa2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_1FA32:
    /* 0001fa32   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x0001fa32u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FA38:
    /* 0001fa38   2  beq 0001fa3e */
    c->pc = RC_ADDR(0x0001fa38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA3E;

L_1FA3A:
    /* 0001fa3a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001fa3au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA3C:
    /* 0001fa3c   2  bra 0001fa40 */
    c->pc = RC_ADDR(0x0001fa3cu);
    rc_step(c, m, 10);
    goto L_1FA40;

L_1FA3E:
    /* 0001fa3e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fa3eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA40:
    /* 0001fa40   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001fa40u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA42:
    /* 0001fa42   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x0001fa42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA46:
    /* 0001fa46   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001fa46u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FA4A:
    /* 0001fa4a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fa4au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA4C:
    /* 0001fa4c   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x0001fa4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA50:
    /* 0001fa50   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001fa50u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FA54:
    /* 0001fa54   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fa54u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA56:
    /* 0001fa56   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fa56u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA58:
    /* 0001fa58   4  jsr (0001dbd0) */
    c->pc = RC_ADDR(0x0001fa58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fa5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dbd0u);
    return;

L_1FA5C:
    /* 0001fa5c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001fa5cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1FA60:
    /* 0001fa60   2  bra 0001fab2 */
    c->pc = RC_ADDR(0x0001fa60u);
    rc_step(c, m, 10);
    goto L_1FAB2;

L_1FA62:
    /* 0001fa62   4  tst.w (ffffccec,A4) */
    c->pc = RC_ADDR(0x0001fa62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3314u));
    rc_set_nzvc(c, t0, RC_W);

L_1FA66:
    /* 0001fa66   2  bne 0001fa78 */
    c->pc = RC_ADDR(0x0001fa66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA78;

L_1FA68:
    /* 0001fa68   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001fa68u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA6A:
    /* 0001fa6a   4  jsr (0001f95c) */
    c->pc = RC_ADDR(0x0001fa6au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fa6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f95cu);
    return;

L_1FA6E:
    /* 0001fa6e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fa6eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FA70:
    /* 0001fa70   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001fa70u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1FA72:
    /* 0001fa72   2  bne 0001fa78 */
    c->pc = RC_ADDR(0x0001fa72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA78;

L_1FA74:
    /* 0001fa74   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fa74u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FA78:
    /* 0001fa78   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x0001fa78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1FA7C:
    /* 0001fa7c   2  bne 0001fa8a */
    c->pc = RC_ADDR(0x0001fa7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA8A;

L_1FA7E:
    /* 0001fa7e   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x0001fa7eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_1FA82:
    /* 0001fa82   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x0001fa82u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FA88:
    /* 0001fa88   2  beq 0001fa8e */
    c->pc = RC_ADDR(0x0001fa88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA8E;

L_1FA8A:
    /* 0001fa8a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001fa8au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA8C:
    /* 0001fa8c   2  bra 0001fa90 */
    c->pc = RC_ADDR(0x0001fa8cu);
    rc_step(c, m, 10);
    goto L_1FA90;

L_1FA8E:
    /* 0001fa8e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fa8eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FA90:
    /* 0001fa90   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001fa90u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA92:
    /* 0001fa92   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x0001fa92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA96:
    /* 0001fa96   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001fa96u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FA9A:
    /* 0001fa9a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fa9au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FA9C:
    /* 0001fa9c   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x0001fa9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FAA0:
    /* 0001faa0   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001faa0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FAA4:
    /* 0001faa4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001faa4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FAA6:
    /* 0001faa6   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x0001faa6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FAAA:
    /* 0001faaa   4  jsr (0001fa02) */
    c->pc = RC_ADDR(0x0001faaau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001faaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_1FAAE:
    /* 0001faae   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001faaeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1FAB2:
    /* 0001fab2   4  tst.w (ffffccea,A4) */
    c->pc = RC_ADDR(0x0001fab2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3316u));
    rc_set_nzvc(c, t0, RC_W);

L_1FAB6:
    /* 0001fab6   2  bne 0001fad8 */
    c->pc = RC_ADDR(0x0001fab6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FAD8;

L_1FAB8:
    /* 0001fab8   4  move.l (20,A2),D0 */
    c->pc = RC_ADDR(0x0001fab8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FABC:
    /* 0001fabc   4  add.l D0,(18,A2) */
    c->pc = RC_ADDR(0x0001fabcu);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x18u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1FAC0:
    /* 0001fac0   4  move.l (24,A2),D0 */
    c->pc = RC_ADDR(0x0001fac0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FAC4:
    /* 0001fac4   4  add.l D0,(1c,A2) */
    c->pc = RC_ADDR(0x0001fac4u);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1FAC8:
    /* 0001fac8   4  move.l (18,A2),D0 */
    c->pc = RC_ADDR(0x0001fac8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FACC:
    /* 0001facc   4  add.l D0,(10,A2) */
    c->pc = RC_ADDR(0x0001faccu);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x10u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1FAD0:
    /* 0001fad0   4  move.l (1c,A2),D0 */
    c->pc = RC_ADDR(0x0001fad0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x1cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FAD4:
    /* 0001fad4   4  add.l D0,(14,A2) */
    c->pc = RC_ADDR(0x0001fad4u);
    rc_step(c, m, 24);
    t3 = (c->a[2] + 0x14u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1FAD8:
    /* 0001fad8   2  movea.l (A2),A2 */
    c->pc = RC_ADDR(0x0001fad8u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_1FADA:
    /* 0001fada   4  bra 0001fa16 */
    c->pc = RC_ADDR(0x0001fadau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FA16;

L_1FADE:
    /* 0001fade   4  jsr (0001dbb4) */
    c->pc = RC_ADDR(0x0001fadeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fae2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dbb4u);
    return;

L_1FAE2:
    /* 0001fae2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001fae2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAE6:
    /* 0001fae6   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001fae6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1FAE8:
    /* 0001fae8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fae8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FAEA:
    /* 0001faea   2  rts */
    c->pc = RC_ADDR(0x0001faeau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
