/* fn_00016978 - 200 byte(s), 54 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016978(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016978u): goto L_16978;
    case RC_ADDR(0x0001697cu): goto L_1697C;
    case RC_ADDR(0x00016982u): goto L_16982;
    case RC_ADDR(0x00016986u): goto L_16986;
    case RC_ADDR(0x0001698au): goto L_1698A;
    case RC_ADDR(0x0001698cu): goto L_1698C;
    case RC_ADDR(0x00016990u): goto L_16990;
    case RC_ADDR(0x00016994u): goto L_16994;
    case RC_ADDR(0x0001699au): goto L_1699A;
    case RC_ADDR(0x000169a0u): goto L_169A0;
    case RC_ADDR(0x000169a4u): goto L_169A4;
    case RC_ADDR(0x000169a6u): goto L_169A6;
    case RC_ADDR(0x000169a8u): goto L_169A8;
    case RC_ADDR(0x000169acu): goto L_169AC;
    case RC_ADDR(0x000169b0u): goto L_169B0;
    case RC_ADDR(0x000169b4u): goto L_169B4;
    case RC_ADDR(0x000169b8u): goto L_169B8;
    case RC_ADDR(0x000169bcu): goto L_169BC;
    case RC_ADDR(0x000169c0u): goto L_169C0;
    case RC_ADDR(0x000169c6u): goto L_169C6;
    case RC_ADDR(0x000169cau): goto L_169CA;
    case RC_ADDR(0x000169d0u): goto L_169D0;
    case RC_ADDR(0x000169d4u): goto L_169D4;
    case RC_ADDR(0x000169d8u): goto L_169D8;
    case RC_ADDR(0x000169deu): goto L_169DE;
    case RC_ADDR(0x000169e2u): goto L_169E2;
    case RC_ADDR(0x000169e4u): goto L_169E4;
    case RC_ADDR(0x000169e8u): goto L_169E8;
    case RC_ADDR(0x000169ecu): goto L_169EC;
    case RC_ADDR(0x000169f0u): goto L_169F0;
    case RC_ADDR(0x000169f2u): goto L_169F2;
    case RC_ADDR(0x000169f6u): goto L_169F6;
    case RC_ADDR(0x000169f8u): goto L_169F8;
    case RC_ADDR(0x000169fau): goto L_169FA;
    case RC_ADDR(0x000169fcu): goto L_169FC;
    case RC_ADDR(0x00016a00u): goto L_16A00;
    case RC_ADDR(0x00016a04u): goto L_16A04;
    case RC_ADDR(0x00016a06u): goto L_16A06;
    case RC_ADDR(0x00016a08u): goto L_16A08;
    case RC_ADDR(0x00016a0au): goto L_16A0A;
    case RC_ADDR(0x00016a0eu): goto L_16A0E;
    case RC_ADDR(0x00016a14u): goto L_16A14;
    case RC_ADDR(0x00016a18u): goto L_16A18;
    case RC_ADDR(0x00016a1cu): goto L_16A1C;
    case RC_ADDR(0x00016a1eu): goto L_16A1E;
    case RC_ADDR(0x00016a22u): goto L_16A22;
    case RC_ADDR(0x00016a26u): goto L_16A26;
    case RC_ADDR(0x00016a28u): goto L_16A28;
    case RC_ADDR(0x00016a2au): goto L_16A2A;
    case RC_ADDR(0x00016a2eu): goto L_16A2E;
    case RC_ADDR(0x00016a32u): goto L_16A32;
    case RC_ADDR(0x00016a38u): goto L_16A38;
    case RC_ADDR(0x00016a3cu): goto L_16A3C;
    case RC_ADDR(0x00016a3eu): goto L_16A3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16978:
    /* 00016978   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00016978u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1697C:
    /* 0001697c   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001697cu);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_16982:
    /* 00016982   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x00016982u);
    rc_push32(c, m, RC_ADDR(0x0000002cu));

L_16986:
    /* 00016986   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00016986u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001698au);
    rc_os_call(c, m, 0, -198);

L_1698A:
    /* 0001698a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001698au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1698C:
    /* 0001698c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001698cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16990:
    /* 00016990   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00016990u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_16994:
    /* 00016994   6  move.l (ffffb3b4,A4),(28,A0) */
    c->pc = RC_ADDR(0x00016994u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    rc_wr32(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1699A:
    /* 0001699a   6  move.l (fffffffc,A5),(ffffb3b4,A4) */
    c->pc = RC_ADDR(0x0001699au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x4c4cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_169A0:
    /* 000169a0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169a0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_169A4:
    /* 000169a4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000169a4u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_169A6:
    /* 000169a6   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x000169a6u);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169A8:
    /* 000169a8   4  move.l D0,(1348,A4) */
    c->pc = RC_ADDR(0x000169a8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1348u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_169AC:
    /* 000169ac   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169acu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_169B0:
    /* 000169b0   4  movea.l (ffffb3b4,A4),A1 */
    c->pc = RC_ADDR(0x000169b0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[1] = t0;

L_169B4:
    /* 000169b4   4  move.w (c,A0),(A1) */
    c->pc = RC_ADDR(0x000169b4u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_169B8:
    /* 000169b8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169b8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_169BC:
    /* 000169bc   4  movea.l (ffffb3b4,A4),A1 */
    c->pc = RC_ADDR(0x000169bcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[1] = t0;

L_169C0:
    /* 000169c0   6  move.w (e,A0),(2,A1) */
    c->pc = RC_ADDR(0x000169c0u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xeu));
    rc_wr16(c, m, (c->a[1] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_169C6:
    /* 000169c6   4  movea.l (ffffb3b4,A4),A0 */
    c->pc = RC_ADDR(0x000169c6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[0] = t0;

L_169CA:
    /* 000169ca   6  move.b (134b,A4),(4,A0) */
    c->pc = RC_ADDR(0x000169cau);
    t0 = rc_rd8(c, m, (c->a[4] + 0x134bu));
    rc_wr8(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_169D0:
    /* 000169d0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169d0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_169D4:
    /* 000169d4   4  movea.l (ffffb3b4,A4),A1 */
    c->pc = RC_ADDR(0x000169d4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[1] = t0;

L_169D8:
    /* 000169d8   6  move.b (11,A0),(5,A1) */
    c->pc = RC_ADDR(0x000169d8u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_wr8(c, m, (c->a[1] + 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_169DE:
    /* 000169de   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169deu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_169E2:
    /* 000169e2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000169e2u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_169E4:
    /* 000169e4   4  move.w (6,A0),D0 */
    c->pc = RC_ADDR(0x000169e4u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169E8:
    /* 000169e8   4  move.l D0,(1344,A4) */
    c->pc = RC_ADDR(0x000169e8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1344u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_169EC:
    /* 000169ec   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000169ecu);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_169F0:
    /* 000169f0   2  bra 00016a18 */
    c->pc = RC_ADDR(0x000169f0u);
    goto L_16A18;

L_169F2:
    /* 000169f2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000169f2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169F6:
    /* 000169f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000169f6u);
    rc_ext_l(c, 0);

L_169F8:
    /* 000169f8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000169f8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_169FA:
    /* 000169fa   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000169fau);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_169FC:
    /* 000169fc   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000169fcu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_16A00:
    /* 00016a00   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00016a00u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A04:
    /* 00016a04   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016a04u);
    rc_ext_l(c, 0);

L_16A06:
    /* 00016a06   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00016a06u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_16A08:
    /* 00016a08   2  movea.l D0,A1 */
    c->pc = RC_ADDR(0x00016a08u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_16A0A:
    /* 00016a0a   4  adda.l (ffffb3b4,A4),A1 */
    c->pc = RC_ADDR(0x00016a0au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[1] += t0;

L_16A0E:
    /* 00016a0e   6  move.l (14,A0),(8,A1) */
    c->pc = RC_ADDR(0x00016a0eu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    rc_wr32(c, m, (c->a[1] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A14:
    /* 00016a14   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00016a14u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16A18:
    /* 00016a18   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00016a18u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16A1C:
    /* 00016a1c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016a1cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16A1E:
    /* 00016a1e   4  move.b (11,A0),D0 */
    c->pc = RC_ADDR(0x00016a1eu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16A22:
    /* 00016a22   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00016a22u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A26:
    /* 00016a26   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016a26u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A28:
    /* 00016a28   2  bcs 000169f2 */
    c->pc = RC_ADDR(0x00016a28u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_169F2; }

L_16A2A:
    /* 00016a2a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00016a2au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_16A2E:
    /* 00016a2e   4  movea.l (ffffb3b4,A4),A1 */
    c->pc = RC_ADDR(0x00016a2eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    c->a[1] = t0;

L_16A32:
    /* 00016a32   6  move.l (34,A0),(20,A1) */
    c->pc = RC_ADDR(0x00016a32u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x34u));
    rc_wr32(c, m, (c->a[1] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A38:
    /* 00016a38   4  move.l (ffffb3b4,A4),D0 */
    c->pc = RC_ADDR(0x00016a38u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c4cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A3C:
    /* 00016a3c   2  unlk A5 */
    c->pc = RC_ADDR(0x00016a3cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16A3E:
    /* 00016a3e   2  rts */
    c->pc = RC_ADDR(0x00016a3eu);
    rc_ret(c, m);
    return;

}
