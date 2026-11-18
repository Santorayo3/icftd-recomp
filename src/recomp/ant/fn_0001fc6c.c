/* fn_0001fc6c - 224 byte(s), 70 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fc6c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fc6cu): goto L_1FC6C;
    case RC_ADDR(0x0001fc70u): goto L_1FC70;
    case RC_ADDR(0x0001fc74u): goto L_1FC74;
    case RC_ADDR(0x0001fc78u): goto L_1FC78;
    case RC_ADDR(0x0001fc7cu): goto L_1FC7C;
    case RC_ADDR(0x0001fc80u): goto L_1FC80;
    case RC_ADDR(0x0001fc86u): goto L_1FC86;
    case RC_ADDR(0x0001fc88u): goto L_1FC88;
    case RC_ADDR(0x0001fc8au): goto L_1FC8A;
    case RC_ADDR(0x0001fc8eu): goto L_1FC8E;
    case RC_ADDR(0x0001fc92u): goto L_1FC92;
    case RC_ADDR(0x0001fc94u): goto L_1FC94;
    case RC_ADDR(0x0001fc96u): goto L_1FC96;
    case RC_ADDR(0x0001fc9au): goto L_1FC9A;
    case RC_ADDR(0x0001fc9eu): goto L_1FC9E;
    case RC_ADDR(0x0001fca4u): goto L_1FCA4;
    case RC_ADDR(0x0001fca6u): goto L_1FCA6;
    case RC_ADDR(0x0001fca8u): goto L_1FCA8;
    case RC_ADDR(0x0001fcacu): goto L_1FCAC;
    case RC_ADDR(0x0001fcb0u): goto L_1FCB0;
    case RC_ADDR(0x0001fcb2u): goto L_1FCB2;
    case RC_ADDR(0x0001fcb4u): goto L_1FCB4;
    case RC_ADDR(0x0001fcb8u): goto L_1FCB8;
    case RC_ADDR(0x0001fcbcu): goto L_1FCBC;
    case RC_ADDR(0x0001fcc0u): goto L_1FCC0;
    case RC_ADDR(0x0001fcc4u): goto L_1FCC4;
    case RC_ADDR(0x0001fcc6u): goto L_1FCC6;
    case RC_ADDR(0x0001fccau): goto L_1FCCA;
    case RC_ADDR(0x0001fcccu): goto L_1FCCC;
    case RC_ADDR(0x0001fcceu): goto L_1FCCE;
    case RC_ADDR(0x0001fcd2u): goto L_1FCD2;
    case RC_ADDR(0x0001fcd6u): goto L_1FCD6;
    case RC_ADDR(0x0001fcd8u): goto L_1FCD8;
    case RC_ADDR(0x0001fcdcu): goto L_1FCDC;
    case RC_ADDR(0x0001fcdeu): goto L_1FCDE;
    case RC_ADDR(0x0001fce2u): goto L_1FCE2;
    case RC_ADDR(0x0001fce6u): goto L_1FCE6;
    case RC_ADDR(0x0001fceau): goto L_1FCEA;
    case RC_ADDR(0x0001fcecu): goto L_1FCEC;
    case RC_ADDR(0x0001fcf0u): goto L_1FCF0;
    case RC_ADDR(0x0001fcf2u): goto L_1FCF2;
    case RC_ADDR(0x0001fcf6u): goto L_1FCF6;
    case RC_ADDR(0x0001fcfau): goto L_1FCFA;
    case RC_ADDR(0x0001fcfcu): goto L_1FCFC;
    case RC_ADDR(0x0001fd00u): goto L_1FD00;
    case RC_ADDR(0x0001fd02u): goto L_1FD02;
    case RC_ADDR(0x0001fd06u): goto L_1FD06;
    case RC_ADDR(0x0001fd08u): goto L_1FD08;
    case RC_ADDR(0x0001fd0au): goto L_1FD0A;
    case RC_ADDR(0x0001fd0eu): goto L_1FD0E;
    case RC_ADDR(0x0001fd10u): goto L_1FD10;
    case RC_ADDR(0x0001fd14u): goto L_1FD14;
    case RC_ADDR(0x0001fd16u): goto L_1FD16;
    case RC_ADDR(0x0001fd18u): goto L_1FD18;
    case RC_ADDR(0x0001fd1cu): goto L_1FD1C;
    case RC_ADDR(0x0001fd1eu): goto L_1FD1E;
    case RC_ADDR(0x0001fd20u): goto L_1FD20;
    case RC_ADDR(0x0001fd24u): goto L_1FD24;
    case RC_ADDR(0x0001fd26u): goto L_1FD26;
    case RC_ADDR(0x0001fd2au): goto L_1FD2A;
    case RC_ADDR(0x0001fd2cu): goto L_1FD2C;
    case RC_ADDR(0x0001fd2eu): goto L_1FD2E;
    case RC_ADDR(0x0001fd32u): goto L_1FD32;
    case RC_ADDR(0x0001fd34u): goto L_1FD34;
    case RC_ADDR(0x0001fd38u): goto L_1FD38;
    case RC_ADDR(0x0001fd3cu): goto L_1FD3C;
    case RC_ADDR(0x0001fd40u): goto L_1FD40;
    case RC_ADDR(0x0001fd44u): goto L_1FD44;
    case RC_ADDR(0x0001fd48u): goto L_1FD48;
    case RC_ADDR(0x0001fd4au): goto L_1FD4A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FC6C:
    /* 0001fc6c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fc6cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FC70:
    /* 0001fc70   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x0001fc70u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FC74:
    /* 0001fc74   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001fc74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FC78:
    /* 0001fc78   4  movea.l (4,A2),A3 */
    c->pc = RC_ADDR(0x0001fc78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[3] = t0;

L_1FC7C:
    /* 0001fc7c   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x0001fc7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC80:
    /* 0001fc80   6  add.l #8000,D0 */
    c->pc = RC_ADDR(0x0001fc80u);
    rc_step(c, m, 16);
    t0 = 0x00008000u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FC86:
    /* 0001fc86   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001fc86u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1FC88:
    /* 0001fc88   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001fc88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1FC8A:
    /* 0001fc8a   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001fc8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1FC8E:
    /* 0001fc8e   4  move.w (8,A0),D1 */
    c->pc = RC_ADDR(0x0001fc8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC92:
    /* 0001fc92   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001fc92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1FC94:
    /* 0001fc94   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001fc94u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FC96:
    /* 0001fc96   4  move.w D0,(c,A2) */
    c->pc = RC_ADDR(0x0001fc96u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FC9A:
    /* 0001fc9a   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001fc9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FC9E:
    /* 0001fc9e   6  add.l #8000,D0 */
    c->pc = RC_ADDR(0x0001fc9eu);
    rc_step(c, m, 16);
    t0 = 0x00008000u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FCA4:
    /* 0001fca4   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001fca4u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1FCA6:
    /* 0001fca6   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001fca6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1FCA8:
    /* 0001fca8   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001fca8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1FCAC:
    /* 0001fcac   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x0001fcacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FCB0:
    /* 0001fcb0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001fcb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1FCB2:
    /* 0001fcb2   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001fcb2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1FCB4:
    /* 0001fcb4   4  move.w D0,(e,A2) */
    c->pc = RC_ADDR(0x0001fcb4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FCB8:
    /* 0001fcb8   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x0001fcb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_1FCBC:
    /* 0001fcbc   4  bne 0001fd44 */
    c->pc = RC_ADDR(0x0001fcbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FD44;

L_1FCC0:
    /* 0001fcc0   4  tst.l (c,A3) */
    c->pc = RC_ADDR(0x0001fcc0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1FCC4:
    /* 0001fcc4   2  beq 0001fd44 */
    c->pc = RC_ADDR(0x0001fcc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FD44;

L_1FCC6:
    /* 0001fcc6   4  move.w (3c,A2),D0 */
    c->pc = RC_ADDR(0x0001fcc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FCCA:
    /* 0001fcca   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fccau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FCCC:
    /* 0001fccc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fcccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCCE:
    /* 0001fcce   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001fcceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1FCD2:
    /* 0001fcd2   4  move.l (30,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fcd2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCD6:
    /* 0001fcd6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fcd6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FCD8:
    /* 0001fcd8   4  move.w (30e4,A4),D0 */
    c->pc = RC_ADDR(0x0001fcd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30e4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FCDC:
    /* 0001fcdc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001fcdcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1FCDE:
    /* 0001fcde   4  lea (ffffd422,A4),A0 */
    c->pc = RC_ADDR(0x0001fcdeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2bdeu);

L_1FCE2:
    /* 0001fce2   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001fce2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCE6:
    /* 0001fce6   4  and.l (38,A2),D1 */
    c->pc = RC_ADDR(0x0001fce6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[2] + 0x38u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1FCEA:
    /* 0001fcea   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fceau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FCEC:
    /* 0001fcec   4  move.w (30e4,A4),D0 */
    c->pc = RC_ADDR(0x0001fcecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30e4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FCF0:
    /* 0001fcf0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001fcf0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1FCF2:
    /* 0001fcf2   4  lea (ffffd446,A4),A0 */
    c->pc = RC_ADDR(0x0001fcf2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2bbau);

L_1FCF6:
    /* 0001fcf6   4  or.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001fcf6u);
    rc_step(c, m, 20);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t2 = t0 | rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1FCFA:
    /* 0001fcfa   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x0001fcfau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FCFC:
    /* 0001fcfc   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x0001fcfcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_1FD00:
    /* 0001fd00   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD02:
    /* 0001fd02   4  move.w (36,A2),D0 */
    c->pc = RC_ADDR(0x0001fd02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD06:
    /* 0001fd06   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD08:
    /* 0001fd08   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd08u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD0A:
    /* 0001fd0a   4  move.w (34,A2),D0 */
    c->pc = RC_ADDR(0x0001fd0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD0E:
    /* 0001fd0e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd0eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD10:
    /* 0001fd10   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0001fd10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD14:
    /* 0001fd14   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fd14u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FD16:
    /* 0001fd16   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd16u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD18:
    /* 0001fd18   4  move.w (c,A2),D0 */
    c->pc = RC_ADDR(0x0001fd18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD1C:
    /* 0001fd1c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fd1cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FD1E:
    /* 0001fd1e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd1eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD20:
    /* 0001fd20   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x0001fd20u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD24:
    /* 0001fd24   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd24u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD26:
    /* 0001fd26   4  move.w (32,A2),D0 */
    c->pc = RC_ADDR(0x0001fd26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD2A:
    /* 0001fd2a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd2au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD2C:
    /* 0001fd2c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fd2cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FD2E:
    /* 0001fd2e   4  move.w (30,A2),D0 */
    c->pc = RC_ADDR(0x0001fd2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FD32:
    /* 0001fd32   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001fd32u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FD34:
    /* 0001fd34   4  movea.l (c,A3),A0 */
    c->pc = RC_ADDR(0x0001fd34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0xcu));
    c->a[0] = t0;

L_1FD38:
    /* 0001fd38   4  pea (c,A0) */
    c->pc = RC_ADDR(0x0001fd38u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_1FD3C:
    /* 0001fd3c   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0001fd3cu);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0001fd40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_1FD40:
    /* 0001fd40   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001fd40u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_1FD44:
    /* 0001fd44   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0001fd44u);
    rc_step(c, m, 12);
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

L_1FD48:
    /* 0001fd48   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fd48u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FD4A:
    /* 0001fd4a   2  rts */
    c->pc = RC_ADDR(0x0001fd4au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
