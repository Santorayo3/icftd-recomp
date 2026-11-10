/* fn_0001be80 - 166 byte(s), 45 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001be80(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001be80u): goto L_1BE80;
    case RC_ADDR(0x0001be84u): goto L_1BE84;
    case RC_ADDR(0x0001be88u): goto L_1BE88;
    case RC_ADDR(0x0001be8cu): goto L_1BE8C;
    case RC_ADDR(0x0001be92u): goto L_1BE92;
    case RC_ADDR(0x0001be96u): goto L_1BE96;
    case RC_ADDR(0x0001be9au): goto L_1BE9A;
    case RC_ADDR(0x0001be9cu): goto L_1BE9C;
    case RC_ADDR(0x0001bea0u): goto L_1BEA0;
    case RC_ADDR(0x0001bea4u): goto L_1BEA4;
    case RC_ADDR(0x0001bea6u): goto L_1BEA6;
    case RC_ADDR(0x0001bea8u): goto L_1BEA8;
    case RC_ADDR(0x0001beacu): goto L_1BEAC;
    case RC_ADDR(0x0001beb2u): goto L_1BEB2;
    case RC_ADDR(0x0001beb4u): goto L_1BEB4;
    case RC_ADDR(0x0001beb8u): goto L_1BEB8;
    case RC_ADDR(0x0001bebau): goto L_1BEBA;
    case RC_ADDR(0x0001bebcu): goto L_1BEBC;
    case RC_ADDR(0x0001bec0u): goto L_1BEC0;
    case RC_ADDR(0x0001bec4u): goto L_1BEC4;
    case RC_ADDR(0x0001bec6u): goto L_1BEC6;
    case RC_ADDR(0x0001bec8u): goto L_1BEC8;
    case RC_ADDR(0x0001beccu): goto L_1BECC;
    case RC_ADDR(0x0001bed2u): goto L_1BED2;
    case RC_ADDR(0x0001bed6u): goto L_1BED6;
    case RC_ADDR(0x0001bed8u): goto L_1BED8;
    case RC_ADDR(0x0001bedcu): goto L_1BEDC;
    case RC_ADDR(0x0001bee2u): goto L_1BEE2;
    case RC_ADDR(0x0001bee6u): goto L_1BEE6;
    case RC_ADDR(0x0001bee8u): goto L_1BEE8;
    case RC_ADDR(0x0001beecu): goto L_1BEEC;
    case RC_ADDR(0x0001bef2u): goto L_1BEF2;
    case RC_ADDR(0x0001bef6u): goto L_1BEF6;
    case RC_ADDR(0x0001befcu): goto L_1BEFC;
    case RC_ADDR(0x0001bf00u): goto L_1BF00;
    case RC_ADDR(0x0001bf06u): goto L_1BF06;
    case RC_ADDR(0x0001bf0au): goto L_1BF0A;
    case RC_ADDR(0x0001bf0eu): goto L_1BF0E;
    case RC_ADDR(0x0001bf10u): goto L_1BF10;
    case RC_ADDR(0x0001bf14u): goto L_1BF14;
    case RC_ADDR(0x0001bf18u): goto L_1BF18;
    case RC_ADDR(0x0001bf1cu): goto L_1BF1C;
    case RC_ADDR(0x0001bf20u): goto L_1BF20;
    case RC_ADDR(0x0001bf22u): goto L_1BF22;
    case RC_ADDR(0x0001bf24u): goto L_1BF24;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BE80:
    /* 0001be80   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001be80u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1BE84:
    /* 0001be84   4  clr.w (22c2,A4) */
    c->pc = RC_ADDR(0x0001be84u);
    rc_wr16(c, m, (c->a[4] + 0x22c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BE88:
    /* 0001be88   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001be88u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BE8C:
    /* 0001be8c   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001be8cu);
    rc_push32(c, m, RC_ADDR(0x00010002u));

L_1BE92:
    /* 0001be92   4  pea (000007d0).l */
    c->pc = RC_ADDR(0x0001be92u);
    rc_push32(c, m, RC_ADDR(0x000007d0u));

L_1BE96:
    /* 0001be96   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001be96u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001be9au);
    rc_os_call(c, m, 0, -198);

L_1BE9A:
    /* 0001be9a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001be9au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BE9C:
    /* 0001be9c   4  move.l D0,(a12,A4) */
    c->pc = RC_ADDR(0x0001be9cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xa12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BEA0:
    /* 0001bea0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001bea0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEA4:
    /* 0001bea4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bea4u);
    rc_ext_l(c, 0);

L_1BEA6:
    /* 0001bea6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bea6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1BEA8:
    /* 0001bea8   4  lea (ffffc7c8,A4),A0 */
    c->pc = RC_ADDR(0x0001bea8u);
    c->a[0] = (c->a[4] - 0x3838u);

L_1BEAC:
    /* 0001beac   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001beacu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_1BEB2:
    /* 0001beb2   2  beq 0001bed8 */
    c->pc = RC_ADDR(0x0001beb2u);
    if (rc_cond(c, 7)) goto L_1BED8;

L_1BEB4:
    /* 0001beb4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001beb4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEB8:
    /* 0001beb8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001beb8u);
    rc_ext_l(c, 0);

L_1BEBA:
    /* 0001beba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bebau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1BEBC:
    /* 0001bebc   4  lea (ffffc7c8,A4),A0 */
    c->pc = RC_ADDR(0x0001bebcu);
    c->a[0] = (c->a[4] - 0x3838u);

L_1BEC0:
    /* 0001bec0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001bec0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEC4:
    /* 0001bec4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001bec4u);
    rc_ext_l(c, 1);

L_1BEC6:
    /* 0001bec6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001bec6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1BEC8:
    /* 0001bec8   4  movea.l (a12,A4),A1 */
    c->pc = RC_ADDR(0x0001bec8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[1] = t0;

L_1BECC:
    /* 0001becc   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001beccu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BED2:
    /* 0001bed2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001bed2u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BED6:
    /* 0001bed6   2  bra 0001bea0 */
    c->pc = RC_ADDR(0x0001bed6u);
    rc_tick();
    goto L_1BEA0;

L_1BED8:
    /* 0001bed8   4  movea.l (ffffcb10,A4),A0 */
    c->pc = RC_ADDR(0x0001bed8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[0] = t0;

L_1BEDC:
    /* 0001bedc   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001bedcu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BEE2:
    /* 0001bee2   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001bee2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1BEE6:
    /* 0001bee6   2  clr.l (A0) */
    c->pc = RC_ADDR(0x0001bee6u);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BEE8:
    /* 0001bee8   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001bee8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1BEEC:
    /* 0001beec   6  move.l (4,A0),(e32,A4) */
    c->pc = RC_ADDR(0x0001beecu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0xe32u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BEF2:
    /* 0001bef2   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001bef2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1BEF6:
    /* 0001bef6   6  move.w (8,A0),(e36,A4) */
    c->pc = RC_ADDR(0x0001bef6u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xe36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEFC:
    /* 0001befc   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001befcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1BF00:
    /* 0001bf00   6  move.l (a12,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001bf00u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF06:
    /* 0001bf06   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001bf06u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1BF0A:
    /* 0001bf0a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001bf0au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF0E:
    /* 0001bf0e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bf0eu);
    rc_ext_l(c, 0);

L_1BF10:
    /* 0001bf10   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001bf10u);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1BF14:
    /* 0001bf14   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x0001bf14u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF18:
    /* 0001bf18   4  move.l (ffffcb10,A4),-(A7) */
    c->pc = RC_ADDR(0x0001bf18u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BF1C:
    /* 0001bf1c   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x0001bf1cu);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x0001bf20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1BF20:
    /* 0001bf20   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001bf20u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1BF22:
    /* 0001bf22   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bf22u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BF24:
    /* 0001bf24   2  rts */
    c->pc = RC_ADDR(0x0001bf24u);
    rc_ret(c, m);
    return;

}
