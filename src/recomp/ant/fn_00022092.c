/* fn_00022092 - 116 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022092(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00022092u): goto L_22092;
    case RC_ADDR(0x00022096u): goto L_22096;
    case RC_ADDR(0x0002209au): goto L_2209A;
    case RC_ADDR(0x000220a0u): goto L_220A0;
    case RC_ADDR(0x000220a4u): goto L_220A4;
    case RC_ADDR(0x000220a8u): goto L_220A8;
    case RC_ADDR(0x000220aau): goto L_220AA;
    case RC_ADDR(0x000220acu): goto L_220AC;
    case RC_ADDR(0x000220b0u): goto L_220B0;
    case RC_ADDR(0x000220b2u): goto L_220B2;
    case RC_ADDR(0x000220b4u): goto L_220B4;
    case RC_ADDR(0x000220b8u): goto L_220B8;
    case RC_ADDR(0x000220bau): goto L_220BA;
    case RC_ADDR(0x000220bcu): goto L_220BC;
    case RC_ADDR(0x000220beu): goto L_220BE;
    case RC_ADDR(0x000220c2u): goto L_220C2;
    case RC_ADDR(0x000220c4u): goto L_220C4;
    case RC_ADDR(0x000220c6u): goto L_220C6;
    case RC_ADDR(0x000220c8u): goto L_220C8;
    case RC_ADDR(0x000220ccu): goto L_220CC;
    case RC_ADDR(0x000220ceu): goto L_220CE;
    case RC_ADDR(0x000220d0u): goto L_220D0;
    case RC_ADDR(0x000220d4u): goto L_220D4;
    case RC_ADDR(0x000220d8u): goto L_220D8;
    case RC_ADDR(0x000220deu): goto L_220DE;
    case RC_ADDR(0x000220e2u): goto L_220E2;
    case RC_ADDR(0x000220e4u): goto L_220E4;
    case RC_ADDR(0x000220e6u): goto L_220E6;
    case RC_ADDR(0x000220e8u): goto L_220E8;
    case RC_ADDR(0x000220eau): goto L_220EA;
    case RC_ADDR(0x000220ecu): goto L_220EC;
    case RC_ADDR(0x000220f0u): goto L_220F0;
    case RC_ADDR(0x000220f6u): goto L_220F6;
    case RC_ADDR(0x000220f8u): goto L_220F8;
    case RC_ADDR(0x000220fau): goto L_220FA;
    case RC_ADDR(0x000220fcu): goto L_220FC;
    case RC_ADDR(0x000220feu): goto L_220FE;
    case RC_ADDR(0x00022100u): goto L_22100;
    case RC_ADDR(0x00022102u): goto L_22102;
    case RC_ADDR(0x00022104u): goto L_22104;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22092:
    /* 00022092   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00022092u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_22096:
    /* 00022096   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00022096u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_2209A:
    /* 0002209a   6  adda.l #c,A1 */
    c->pc = RC_ADDR(0x0002209au);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    c->a[1] += t0;

L_220A0:
    /* 000220a0   4  move.l A1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000220a0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_220A4:
    /* 000220a4   4  move.w (c,A2),D0 */
    c->pc = RC_ADDR(0x000220a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_220A8:
    /* 000220a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000220a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_220AA:
    /* 000220aa   2  sub.l D0,D4 */
    c->pc = RC_ADDR(0x000220aau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_220AC:
    /* 000220ac   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x000220acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_220B0:
    /* 000220b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000220b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_220B2:
    /* 000220b2   2  sub.l D0,D5 */
    c->pc = RC_ADDR(0x000220b2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_220B4:
    /* 000220b4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000220b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_220B8:
    /* 000220b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000220b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_220BA:
    /* 000220ba   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x000220bau);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_220BC:
    /* 000220bc   2  move.l D5,D1 */
    c->pc = RC_ADDR(0x000220bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220BE:
    /* 000220be   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x000220beu);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x000220c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_220C2:
    /* 000220c2   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x000220c2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_220C4:
    /* 000220c4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000220c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_220C6:
    /* 000220c6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000220c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220C8:
    /* 000220c8   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x000220c8u);
    rc_step(c, m, 18);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x000220ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023df2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002324eu);
    return;

L_220CC:
    /* 000220cc   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x000220ccu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220CE:
    /* 000220ce   2  add.l D0,D1 */
    c->pc = RC_ADDR(0x000220ceu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_220D0:
    /* 000220d0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000220d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_220D4:
    /* 000220d4   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x000220d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_220D8:
    /* 000220d8   6  move.b (0,A1,D1.w),(fffffffb,A5) */
    c->pc = RC_ADDR(0x000220d8u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_220DE:
    /* 000220de   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x000220deu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_220E2:
    /* 000220e2   2  ext.w D0 */
    c->pc = RC_ADDR(0x000220e2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_220E4:
    /* 000220e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000220e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_220E6:
    /* 000220e6   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x000220e6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_220E8:
    /* 000220e8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000220e8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_220EA:
    /* 000220ea   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x000220eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220EC:
    /* 000220ec   4  jsr (00023276) */
    c->pc = RC_ADDR(0x000220ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000220f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023276u);
    return;

L_220F0:
    /* 000220f0   6  move.l #80,D1 */
    c->pc = RC_ADDR(0x000220f0u);
    rc_step(c, m, 12);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220F6:
    /* 000220f6   2  asr.l D0,D1 */
    c->pc = RC_ADDR(0x000220f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_220F8:
    /* 000220f8   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x000220f8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_220FA:
    /* 000220fa   2  and.l D1,D0 */
    c->pc = RC_ADDR(0x000220fau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_220FC:
    /* 000220fc   2  beq 00022102 */
    c->pc = RC_ADDR(0x000220fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22102;

L_220FE:
    /* 000220fe   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000220feu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22100:
    /* 00022100   2  bra 0002208a */
    c->pc = RC_ADDR(0x00022100u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002208au);
    return;

L_22102:
    /* 00022102   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022102u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22104:
    /* 00022104   2  bra 0002208a */
    c->pc = RC_ADDR(0x00022104u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002208au);
    return;

}
