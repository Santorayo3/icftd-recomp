/* fn_0000b12e - 246 byte(s), 73 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b12e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b12eu): goto L_B12E;
    case RC_ADDR(0x0000b132u): goto L_B132;
    case RC_ADDR(0x0000b136u): goto L_B136;
    case RC_ADDR(0x0000b138u): goto L_B138;
    case RC_ADDR(0x0000b13cu): goto L_B13C;
    case RC_ADDR(0x0000b13eu): goto L_B13E;
    case RC_ADDR(0x0000b140u): goto L_B140;
    case RC_ADDR(0x0000b144u): goto L_B144;
    case RC_ADDR(0x0000b146u): goto L_B146;
    case RC_ADDR(0x0000b14au): goto L_B14A;
    case RC_ADDR(0x0000b14eu): goto L_B14E;
    case RC_ADDR(0x0000b150u): goto L_B150;
    case RC_ADDR(0x0000b156u): goto L_B156;
    case RC_ADDR(0x0000b15au): goto L_B15A;
    case RC_ADDR(0x0000b15cu): goto L_B15C;
    case RC_ADDR(0x0000b160u): goto L_B160;
    case RC_ADDR(0x0000b166u): goto L_B166;
    case RC_ADDR(0x0000b168u): goto L_B168;
    case RC_ADDR(0x0000b16cu): goto L_B16C;
    case RC_ADDR(0x0000b170u): goto L_B170;
    case RC_ADDR(0x0000b172u): goto L_B172;
    case RC_ADDR(0x0000b174u): goto L_B174;
    case RC_ADDR(0x0000b176u): goto L_B176;
    case RC_ADDR(0x0000b17au): goto L_B17A;
    case RC_ADDR(0x0000b17eu): goto L_B17E;
    case RC_ADDR(0x0000b180u): goto L_B180;
    case RC_ADDR(0x0000b184u): goto L_B184;
    case RC_ADDR(0x0000b186u): goto L_B186;
    case RC_ADDR(0x0000b188u): goto L_B188;
    case RC_ADDR(0x0000b18cu): goto L_B18C;
    case RC_ADDR(0x0000b18eu): goto L_B18E;
    case RC_ADDR(0x0000b192u): goto L_B192;
    case RC_ADDR(0x0000b196u): goto L_B196;
    case RC_ADDR(0x0000b198u): goto L_B198;
    case RC_ADDR(0x0000b19eu): goto L_B19E;
    case RC_ADDR(0x0000b1a2u): goto L_B1A2;
    case RC_ADDR(0x0000b1a4u): goto L_B1A4;
    case RC_ADDR(0x0000b1a8u): goto L_B1A8;
    case RC_ADDR(0x0000b1aeu): goto L_B1AE;
    case RC_ADDR(0x0000b1b0u): goto L_B1B0;
    case RC_ADDR(0x0000b1b4u): goto L_B1B4;
    case RC_ADDR(0x0000b1b8u): goto L_B1B8;
    case RC_ADDR(0x0000b1bau): goto L_B1BA;
    case RC_ADDR(0x0000b1bcu): goto L_B1BC;
    case RC_ADDR(0x0000b1beu): goto L_B1BE;
    case RC_ADDR(0x0000b1c0u): goto L_B1C0;
    case RC_ADDR(0x0000b1c4u): goto L_B1C4;
    case RC_ADDR(0x0000b1cau): goto L_B1CA;
    case RC_ADDR(0x0000b1ceu): goto L_B1CE;
    case RC_ADDR(0x0000b1d2u): goto L_B1D2;
    case RC_ADDR(0x0000b1d6u): goto L_B1D6;
    case RC_ADDR(0x0000b1d8u): goto L_B1D8;
    case RC_ADDR(0x0000b1dcu): goto L_B1DC;
    case RC_ADDR(0x0000b1e0u): goto L_B1E0;
    case RC_ADDR(0x0000b1e4u): goto L_B1E4;
    case RC_ADDR(0x0000b1e6u): goto L_B1E6;
    case RC_ADDR(0x0000b1e8u): goto L_B1E8;
    case RC_ADDR(0x0000b1ecu): goto L_B1EC;
    case RC_ADDR(0x0000b1f0u): goto L_B1F0;
    case RC_ADDR(0x0000b1f4u): goto L_B1F4;
    case RC_ADDR(0x0000b1f8u): goto L_B1F8;
    case RC_ADDR(0x0000b1fcu): goto L_B1FC;
    case RC_ADDR(0x0000b200u): goto L_B200;
    case RC_ADDR(0x0000b204u): goto L_B204;
    case RC_ADDR(0x0000b208u): goto L_B208;
    case RC_ADDR(0x0000b20au): goto L_B20A;
    case RC_ADDR(0x0000b20cu): goto L_B20C;
    case RC_ADDR(0x0000b210u): goto L_B210;
    case RC_ADDR(0x0000b214u): goto L_B214;
    case RC_ADDR(0x0000b218u): goto L_B218;
    case RC_ADDR(0x0000b21cu): goto L_B21C;
    case RC_ADDR(0x0000b220u): goto L_B220;
    case RC_ADDR(0x0000b222u): goto L_B222;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B12E:
    /* 0000b12e   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b12eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B132:
    /* 0000b132   4  tst.w (3d8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b132u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d8u));
    rc_set_nzvc(c, t0, RC_W);

L_B136:
    /* 0000b136   2  beq 0000b17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b136u);
    if (rc_cond(c, 7)) goto L_B17A;

L_B138:
    /* 0000b138   4  subq.w #1,(3dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b138u);
    t3 = (c->a[4] + 0x3dcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B13C:
    /* 0000b13c   2  bne 0000b17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b13cu);
    if (rc_cond(c, 6)) goto L_B17A;

L_B13E:
    /* 0000b13e   2  moveq #14,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b13eu);
    c->d[0] = 0x00000014u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B140:
    /* 0000b140   4  sub.w (3d8,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b140u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B144:
    /* 0000b144   2  asl.w #3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b144u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_B146:
    /* 0000b146   4  move.w D0,(3dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b146u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B14A:
    /* 0000b14a   4  tst.w (3dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b14au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3dcu));
    rc_set_nzvc(c, t0, RC_W);

L_B14E:
    /* 0000b14e   2  bgt 0000b156 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b14eu);
    if (rc_cond(c, 14)) goto L_B156;

L_B150:
    /* 0000b150   6  move.w #1,(3dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b150u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B156:
    /* 0000b156   4  tst.w (3e0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b156u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e0u));
    rc_set_nzvc(c, t0, RC_W);

L_B15A:
    /* 0000b15a   2  beq 0000b17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b15au);
    if (rc_cond(c, 7)) goto L_B17A;

L_B15C:
    /* 0000b15c   4  subq.w #1,(3e0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b15cu);
    t3 = (c->a[4] + 0x3e0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B160:
    /* 0000b160   6  cmpi.w #14,(3dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b160u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3dcu));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_B166:
    /* 0000b166   2  bgt 0000b176 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b166u);
    if (rc_cond(c, 14)) goto L_B176;

L_B168:
    /* 0000b168   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b168u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B16C:
    /* 0000b16c   4  jsr (ffff8248,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b16cu);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000b170u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_B170:
    /* 0000b170   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b170u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B172:
    /* 0000b172   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b172u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B174:
    /* 0000b174   2  bne 0000b17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b174u);
    if (rc_cond(c, 6)) goto L_B17A;

L_B176:
    /* 0000b176   4  jsr (0000b224) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b176u);
    rc_push32(c, m, RC_ADDR(0x0000b17au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b224u);
    return;

L_B17A:
    /* 0000b17a   4  tst.w (3da,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b17au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3dau));
    rc_set_nzvc(c, t0, RC_W);

L_B17E:
    /* 0000b17e   2  beq 0000b1c0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b17eu);
    if (rc_cond(c, 7)) goto L_B1C0;

L_B180:
    /* 0000b180   4  subq.w #1,(3de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b180u);
    t3 = (c->a[4] + 0x3deu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B184:
    /* 0000b184   2  bne 0000b1c0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b184u);
    if (rc_cond(c, 6)) goto L_B1C0;

L_B186:
    /* 0000b186   2  moveq #14,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b186u);
    c->d[0] = 0x00000014u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B188:
    /* 0000b188   4  sub.w (3da,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b188u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3dau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B18C:
    /* 0000b18c   2  asl.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b18cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W);

L_B18E:
    /* 0000b18e   4  move.w D0,(3de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b18eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B192:
    /* 0000b192   4  tst.w (3de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b192u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3deu));
    rc_set_nzvc(c, t0, RC_W);

L_B196:
    /* 0000b196   2  bgt 0000b19e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b196u);
    if (rc_cond(c, 14)) goto L_B19E;

L_B198:
    /* 0000b198   6  move.w #1,(3de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b198u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B19E:
    /* 0000b19e   4  tst.w (3e2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b19eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e2u));
    rc_set_nzvc(c, t0, RC_W);

L_B1A2:
    /* 0000b1a2   2  beq 0000b1c0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1a2u);
    if (rc_cond(c, 7)) goto L_B1C0;

L_B1A4:
    /* 0000b1a4   4  subq.w #1,(3e2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1a4u);
    t3 = (c->a[4] + 0x3e2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B1A8:
    /* 0000b1a8   6  cmpi.w #14,(3de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1a8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3deu));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_B1AE:
    /* 0000b1ae   2  bgt 0000b1be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1aeu);
    if (rc_cond(c, 14)) goto L_B1BE;

L_B1B0:
    /* 0000b1b0   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1b0u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B1B4:
    /* 0000b1b4   4  jsr (ffff8248,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1b4u);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000b1b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_B1B8:
    /* 0000b1b8   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1b8u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B1BA:
    /* 0000b1ba   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1bau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B1BC:
    /* 0000b1bc   2  bne 0000b1c0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1bcu);
    if (rc_cond(c, 6)) goto L_B1C0;

L_B1BE:
    /* 0000b1be   2  bsr 0000b22c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1beu);
    rc_push32(c, m, RC_ADDR(0x0000b1c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b22cu);
    return;

L_B1C0:
    /* 0000b1c0   4  movea.l (ffffcb14,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1c0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_B1C4:
    /* 0000b1c4   6  move.l (ffffcbbc,A4),(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1c4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1CA:
    /* 0000b1ca   4  pea (00000015).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1cau);
    rc_push32(c, m, 0x00000015u);

L_B1CE:
    /* 0000b1ce   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1ceu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1D2:
    /* 0000b1d2   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1d2u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0000b1d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_B1D6:
    /* 0000b1d6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1d6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B1D8:
    /* 0000b1d8   4  pea (000000c2).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1d8u);
    rc_push32(c, m, 0x000000c2u);

L_B1DC:
    /* 0000b1dc   4  move.w (3e0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1dcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B1E0:
    /* 0000b1e0   4  add.w #63,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1e0u);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B1E4:
    /* 0000b1e4   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1e4u);
    rc_ext_l(c, 0);

L_B1E6:
    /* 0000b1e6   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1e6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1E8:
    /* 0000b1e8   4  pea (000000be).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1e8u);
    rc_push32(c, m, 0x000000beu);

L_B1EC:
    /* 0000b1ec   4  pea (00000065).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1ecu);
    rc_push32(c, m, 0x00000065u);

L_B1F0:
    /* 0000b1f0   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1f0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B1F4:
    /* 0000b1f4   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1f4u);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000b1f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_B1F8:
    /* 0000b1f8   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1f8u);
    c->a[7] = (c->a[7] + 0x14u);

L_B1FC:
    /* 0000b1fc   4  pea (0000000a).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b1fcu);
    rc_push32(c, m, 0x0000000au);

L_B200:
    /* 0000b200   4  move.w (3e2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b200u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B204:
    /* 0000b204   4  add.w #63,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b204u);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B208:
    /* 0000b208   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b208u);
    rc_ext_l(c, 0);

L_B20A:
    /* 0000b20a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b20au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B20C:
    /* 0000b20c   4  pea (00000006).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b20cu);
    rc_push32(c, m, 0x00000006u);

L_B210:
    /* 0000b210   4  pea (00000065).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b210u);
    rc_push32(c, m, 0x00000065u);

L_B214:
    /* 0000b214   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b214u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B218:
    /* 0000b218   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b218u);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000b21cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_B21C:
    /* 0000b21c   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b21cu);
    c->a[7] = (c->a[7] + 0x14u);

L_B220:
    /* 0000b220   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b220u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B222:
    /* 0000b222   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b222u);
    rc_ret(c, m);
    return;

}
