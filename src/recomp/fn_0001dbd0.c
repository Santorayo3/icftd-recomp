/* fn_0001dbd0 - 224 byte(s), 70 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dbd0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dbd0u): goto L_1DBD0;
    case RC_ADDR(0x0001dbd4u): goto L_1DBD4;
    case RC_ADDR(0x0001dbd8u): goto L_1DBD8;
    case RC_ADDR(0x0001dbdcu): goto L_1DBDC;
    case RC_ADDR(0x0001dbe0u): goto L_1DBE0;
    case RC_ADDR(0x0001dbe4u): goto L_1DBE4;
    case RC_ADDR(0x0001dbeau): goto L_1DBEA;
    case RC_ADDR(0x0001dbecu): goto L_1DBEC;
    case RC_ADDR(0x0001dbeeu): goto L_1DBEE;
    case RC_ADDR(0x0001dbf2u): goto L_1DBF2;
    case RC_ADDR(0x0001dbf6u): goto L_1DBF6;
    case RC_ADDR(0x0001dbf8u): goto L_1DBF8;
    case RC_ADDR(0x0001dbfau): goto L_1DBFA;
    case RC_ADDR(0x0001dbfeu): goto L_1DBFE;
    case RC_ADDR(0x0001dc02u): goto L_1DC02;
    case RC_ADDR(0x0001dc08u): goto L_1DC08;
    case RC_ADDR(0x0001dc0au): goto L_1DC0A;
    case RC_ADDR(0x0001dc0cu): goto L_1DC0C;
    case RC_ADDR(0x0001dc10u): goto L_1DC10;
    case RC_ADDR(0x0001dc14u): goto L_1DC14;
    case RC_ADDR(0x0001dc16u): goto L_1DC16;
    case RC_ADDR(0x0001dc18u): goto L_1DC18;
    case RC_ADDR(0x0001dc1cu): goto L_1DC1C;
    case RC_ADDR(0x0001dc20u): goto L_1DC20;
    case RC_ADDR(0x0001dc24u): goto L_1DC24;
    case RC_ADDR(0x0001dc28u): goto L_1DC28;
    case RC_ADDR(0x0001dc2au): goto L_1DC2A;
    case RC_ADDR(0x0001dc2eu): goto L_1DC2E;
    case RC_ADDR(0x0001dc30u): goto L_1DC30;
    case RC_ADDR(0x0001dc32u): goto L_1DC32;
    case RC_ADDR(0x0001dc36u): goto L_1DC36;
    case RC_ADDR(0x0001dc3au): goto L_1DC3A;
    case RC_ADDR(0x0001dc3cu): goto L_1DC3C;
    case RC_ADDR(0x0001dc40u): goto L_1DC40;
    case RC_ADDR(0x0001dc42u): goto L_1DC42;
    case RC_ADDR(0x0001dc46u): goto L_1DC46;
    case RC_ADDR(0x0001dc4au): goto L_1DC4A;
    case RC_ADDR(0x0001dc4eu): goto L_1DC4E;
    case RC_ADDR(0x0001dc50u): goto L_1DC50;
    case RC_ADDR(0x0001dc54u): goto L_1DC54;
    case RC_ADDR(0x0001dc56u): goto L_1DC56;
    case RC_ADDR(0x0001dc5au): goto L_1DC5A;
    case RC_ADDR(0x0001dc5eu): goto L_1DC5E;
    case RC_ADDR(0x0001dc60u): goto L_1DC60;
    case RC_ADDR(0x0001dc64u): goto L_1DC64;
    case RC_ADDR(0x0001dc66u): goto L_1DC66;
    case RC_ADDR(0x0001dc6au): goto L_1DC6A;
    case RC_ADDR(0x0001dc6cu): goto L_1DC6C;
    case RC_ADDR(0x0001dc6eu): goto L_1DC6E;
    case RC_ADDR(0x0001dc72u): goto L_1DC72;
    case RC_ADDR(0x0001dc74u): goto L_1DC74;
    case RC_ADDR(0x0001dc78u): goto L_1DC78;
    case RC_ADDR(0x0001dc7au): goto L_1DC7A;
    case RC_ADDR(0x0001dc7cu): goto L_1DC7C;
    case RC_ADDR(0x0001dc80u): goto L_1DC80;
    case RC_ADDR(0x0001dc82u): goto L_1DC82;
    case RC_ADDR(0x0001dc84u): goto L_1DC84;
    case RC_ADDR(0x0001dc88u): goto L_1DC88;
    case RC_ADDR(0x0001dc8au): goto L_1DC8A;
    case RC_ADDR(0x0001dc8eu): goto L_1DC8E;
    case RC_ADDR(0x0001dc90u): goto L_1DC90;
    case RC_ADDR(0x0001dc92u): goto L_1DC92;
    case RC_ADDR(0x0001dc96u): goto L_1DC96;
    case RC_ADDR(0x0001dc98u): goto L_1DC98;
    case RC_ADDR(0x0001dc9cu): goto L_1DC9C;
    case RC_ADDR(0x0001dca0u): goto L_1DCA0;
    case RC_ADDR(0x0001dca4u): goto L_1DCA4;
    case RC_ADDR(0x0001dca8u): goto L_1DCA8;
    case RC_ADDR(0x0001dcacu): goto L_1DCAC;
    case RC_ADDR(0x0001dcaeu): goto L_1DCAE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DBD0:
    /* 0001dbd0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dbd0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DBD4:
    /* 0001dbd4   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001dbd4u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1DBD8:
    /* 0001dbd8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001dbd8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1DBDC:
    /* 0001dbdc   4  movea.l (4,A2),A3 */
    c->pc = RC_ADDR(0x0001dbdcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[3] = t0;

L_1DBE0:
    /* 0001dbe0   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001dbe0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DBE4:
    /* 0001dbe4   6  add.l #8000,D0 */
    c->pc = RC_ADDR(0x0001dbe4u);
    rc_step(c, m);
    t0 = 0x00008000u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1DBEA:
    /* 0001dbea   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001dbeau);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1DBEC:
    /* 0001dbec   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001dbecu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1DBEE:
    /* 0001dbee   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001dbeeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1DBF2:
    /* 0001dbf2   4  move.w (8,A0),D1 */
    c->pc = RC_ADDR(0x0001dbf2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DBF6:
    /* 0001dbf6   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001dbf6u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1DBF8:
    /* 0001dbf8   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001dbf8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1DBFA:
    /* 0001dbfa   4  move.w D0,(c,A2) */
    c->pc = RC_ADDR(0x0001dbfau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DBFE:
    /* 0001dbfe   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001dbfeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC02:
    /* 0001dc02   6  add.l #8000,D0 */
    c->pc = RC_ADDR(0x0001dc02u);
    rc_step(c, m);
    t0 = 0x00008000u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1DC08:
    /* 0001dc08   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001dc08u);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1DC0A:
    /* 0001dc0a   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001dc0au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1DC0C:
    /* 0001dc0c   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001dc0cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1DC10:
    /* 0001dc10   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x0001dc10u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC14:
    /* 0001dc14   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001dc14u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_1DC16:
    /* 0001dc16   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001dc16u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1DC18:
    /* 0001dc18   4  move.w D0,(e,A2) */
    c->pc = RC_ADDR(0x0001dc18u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC1C:
    /* 0001dc1c   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x0001dc1cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1DC20:
    /* 0001dc20   4  bne 0001dca8 */
    c->pc = RC_ADDR(0x0001dc20u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1DCA8;

L_1DC24:
    /* 0001dc24   4  tst.l (c,A3) */
    c->pc = RC_ADDR(0x0001dc24u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1DC28:
    /* 0001dc28   2  beq 0001dca8 */
    c->pc = RC_ADDR(0x0001dc28u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1DCA8;

L_1DC2A:
    /* 0001dc2a   4  move.w (3c,A2),D0 */
    c->pc = RC_ADDR(0x0001dc2au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC2E:
    /* 0001dc2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001dc2eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1DC30:
    /* 0001dc30   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc30u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC32:
    /* 0001dc32   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001dc32u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1DC36:
    /* 0001dc36   4  move.l (30,A0),-(A7) */
    c->pc = RC_ADDR(0x0001dc36u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC3A:
    /* 0001dc3a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc3au);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC3C:
    /* 0001dc3c   4  move.w (26b4,A4),D0 */
    c->pc = RC_ADDR(0x0001dc3cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26b4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC40:
    /* 0001dc40   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001dc40u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1DC42:
    /* 0001dc42   4  lea (ffffcc9e,A4),A0 */
    c->pc = RC_ADDR(0x0001dc42u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3362u);

L_1DC46:
    /* 0001dc46   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001dc46u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC4A:
    /* 0001dc4a   4  and.l (38,A2),D1 */
    c->pc = RC_ADDR(0x0001dc4au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1DC4E:
    /* 0001dc4e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc4eu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC50:
    /* 0001dc50   4  move.w (26b4,A4),D0 */
    c->pc = RC_ADDR(0x0001dc50u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26b4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC54:
    /* 0001dc54   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001dc54u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1DC56:
    /* 0001dc56   4  lea (ffffccc2,A4),A0 */
    c->pc = RC_ADDR(0x0001dc56u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x333eu);

L_1DC5A:
    /* 0001dc5a   4  or.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001dc5au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t2 = t0 | rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1DC5E:
    /* 0001dc5e   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0001dc5eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC60:
    /* 0001dc60   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x0001dc60u);
    rc_step(c, m);
    rc_push32(c, m, 0x000000cau);

L_1DC64:
    /* 0001dc64   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc64u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC66:
    /* 0001dc66   4  move.w (36,A2),D0 */
    c->pc = RC_ADDR(0x0001dc66u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC6A:
    /* 0001dc6a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc6au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC6C:
    /* 0001dc6c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc6cu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC6E:
    /* 0001dc6e   4  move.w (34,A2),D0 */
    c->pc = RC_ADDR(0x0001dc6eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC72:
    /* 0001dc72   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc72u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC74:
    /* 0001dc74   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0001dc74u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC78:
    /* 0001dc78   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001dc78u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1DC7A:
    /* 0001dc7a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc7au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC7C:
    /* 0001dc7c   4  move.w (c,A2),D0 */
    c->pc = RC_ADDR(0x0001dc7cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC80:
    /* 0001dc80   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001dc80u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1DC82:
    /* 0001dc82   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc82u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC84:
    /* 0001dc84   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dc84u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC88:
    /* 0001dc88   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc88u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC8A:
    /* 0001dc8a   4  move.w (32,A2),D0 */
    c->pc = RC_ADDR(0x0001dc8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC8E:
    /* 0001dc8e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc8eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC90:
    /* 0001dc90   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001dc90u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DC92:
    /* 0001dc92   4  move.w (30,A2),D0 */
    c->pc = RC_ADDR(0x0001dc92u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC96:
    /* 0001dc96   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001dc96u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC98:
    /* 0001dc98   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001dc98u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1DC9C:
    /* 0001dc9c   4  pea (c,A0) */
    c->pc = RC_ADDR(0x0001dc9cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_1DCA0:
    /* 0001dca0   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0001dca0u);
    rc_step(c, m);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0001dca4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c92u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_1DCA4:
    /* 0001dca4   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001dca4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x30u);

L_1DCA8:
    /* 0001dca8   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001dca8u);
    rc_step(c, m);
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

L_1DCAC:
    /* 0001dcac   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dcacu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DCAE:
    /* 0001dcae   2  rts */
    c->pc = RC_ADDR(0x0001dcaeu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
