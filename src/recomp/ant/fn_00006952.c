/* fn_00006952 - 160 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006952(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006952u): goto L_6952;
    case RC_ADDR(0x00006956u): goto L_6956;
    case RC_ADDR(0x0000695au): goto L_695A;
    case RC_ADDR(0x0000695eu): goto L_695E;
    case RC_ADDR(0x00006962u): goto L_6962;
    case RC_ADDR(0x00006964u): goto L_6964;
    case RC_ADDR(0x00006968u): goto L_6968;
    case RC_ADDR(0x0000696au): goto L_696A;
    case RC_ADDR(0x0000696cu): goto L_696C;
    case RC_ADDR(0x00006970u): goto L_6970;
    case RC_ADDR(0x00006972u): goto L_6972;
    case RC_ADDR(0x00006976u): goto L_6976;
    case RC_ADDR(0x0000697au): goto L_697A;
    case RC_ADDR(0x0000697eu): goto L_697E;
    case RC_ADDR(0x00006980u): goto L_6980;
    case RC_ADDR(0x00006982u): goto L_6982;
    case RC_ADDR(0x00006984u): goto L_6984;
    case RC_ADDR(0x00006988u): goto L_6988;
    case RC_ADDR(0x0000698cu): goto L_698C;
    case RC_ADDR(0x00006990u): goto L_6990;
    case RC_ADDR(0x00006992u): goto L_6992;
    case RC_ADDR(0x00006996u): goto L_6996;
    case RC_ADDR(0x00006998u): goto L_6998;
    case RC_ADDR(0x0000699cu): goto L_699C;
    case RC_ADDR(0x000069a0u): goto L_69A0;
    case RC_ADDR(0x000069a4u): goto L_69A4;
    case RC_ADDR(0x000069a6u): goto L_69A6;
    case RC_ADDR(0x000069a8u): goto L_69A8;
    case RC_ADDR(0x000069aau): goto L_69AA;
    case RC_ADDR(0x000069acu): goto L_69AC;
    case RC_ADDR(0x000069aeu): goto L_69AE;
    case RC_ADDR(0x000069b2u): goto L_69B2;
    case RC_ADDR(0x000069b6u): goto L_69B6;
    case RC_ADDR(0x000069b8u): goto L_69B8;
    case RC_ADDR(0x000069bcu): goto L_69BC;
    case RC_ADDR(0x000069beu): goto L_69BE;
    case RC_ADDR(0x000069c0u): goto L_69C0;
    case RC_ADDR(0x000069c4u): goto L_69C4;
    case RC_ADDR(0x000069c6u): goto L_69C6;
    case RC_ADDR(0x000069cau): goto L_69CA;
    case RC_ADDR(0x000069ceu): goto L_69CE;
    case RC_ADDR(0x000069d2u): goto L_69D2;
    case RC_ADDR(0x000069d4u): goto L_69D4;
    case RC_ADDR(0x000069d8u): goto L_69D8;
    case RC_ADDR(0x000069dcu): goto L_69DC;
    case RC_ADDR(0x000069e0u): goto L_69E0;
    case RC_ADDR(0x000069e2u): goto L_69E2;
    case RC_ADDR(0x000069e6u): goto L_69E6;
    case RC_ADDR(0x000069e8u): goto L_69E8;
    case RC_ADDR(0x000069ecu): goto L_69EC;
    case RC_ADDR(0x000069f0u): goto L_69F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6952:
    /* 00006952   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00006952u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_6956:
    /* 00006956   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00006956u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_695A:
    /* 0000695a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000695au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_695E:
    /* 0000695e   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x0000695eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_6962:
    /* 00006962   2  bne 000069ae */
    c->pc = RC_ADDR(0x00006962u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_69AE;

L_6964:
    /* 00006964   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006964u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6968:
    /* 00006968   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x00006968u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_696A:
    /* 0000696a   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000696au);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_696C:
    /* 0000696c   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x0000696cu);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00006970u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_6970:
    /* 00006970   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006970u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6972:
    /* 00006972   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006972u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6976:
    /* 00006976   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00006976u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_697A:
    /* 0000697a   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000697au);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x0000697eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_697E:
    /* 0000697e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000697eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6980:
    /* 00006980   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006980u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6982:
    /* 00006982   2  beq 000069a8 */
    c->pc = RC_ADDR(0x00006982u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_69A8;

L_6984:
    /* 00006984   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006984u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6988:
    /* 00006988   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006988u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_698C:
    /* 0000698c   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x0000698cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_6990:
    /* 00006990   2  beq 00006998 */
    c->pc = RC_ADDR(0x00006990u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6998;

L_6992:
    /* 00006992   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006992u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6996:
    /* 00006996   2  bra 00006984 */
    c->pc = RC_ADDR(0x00006996u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6984;

L_6998:
    /* 00006998   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006998u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_699C:
    /* 0000699c   4  move.w #58,-(A7) */
    c->pc = RC_ADDR(0x0000699cu);
    rc_step(c, m, 12);
    t0 = 0x00000058u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_69A0:
    /* 000069a0   4  jsr (00008054) */
    c->pc = RC_ADDR(0x000069a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000069a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_69A4:
    /* 000069a4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000069a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_69A6:
    /* 000069a6   2  bra 000069ae */
    c->pc = RC_ADDR(0x000069a6u);
    rc_step(c, m, 10);
    goto L_69AE;

L_69A8:
    /* 000069a8   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000069a8u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_69AA:
    /* 000069aa   2  unlk A5 */
    c->pc = RC_ADDR(0x000069aau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_69AC:
    /* 000069ac   2  rts */
    c->pc = RC_ADDR(0x000069acu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_69AE:
    /* 000069ae   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000069aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_69B2:
    /* 000069b2   4  cmpi.b #3e,(A0) */
    c->pc = RC_ADDR(0x000069b2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000003eu);

L_69B6:
    /* 000069b6   2  bne 000069ec */
    c->pc = RC_ADDR(0x000069b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_69EC;

L_69B8:
    /* 000069b8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000069b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_69BC:
    /* 000069bc   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x000069bcu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_69BE:
    /* 000069be   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000069beu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_69C0:
    /* 000069c0   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x000069c0u);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x000069c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_69C4:
    /* 000069c4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000069c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_69C6:
    /* 000069c6   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000069c6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_69CA:
    /* 000069ca   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x000069cau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_69CE:
    /* 000069ce   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x000069ceu);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x000069d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_69D2:
    /* 000069d2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000069d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_69D4:
    /* 000069d4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000069d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_69D8:
    /* 000069d8   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000069d8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_69DC:
    /* 000069dc   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x000069dcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_69E0:
    /* 000069e0   2  beq 000069e8 */
    c->pc = RC_ADDR(0x000069e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_69E8;

L_69E2:
    /* 000069e2   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000069e2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_69E6:
    /* 000069e6   2  bra 000069d4 */
    c->pc = RC_ADDR(0x000069e6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_69D4;

L_69E8:
    /* 000069e8   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000069e8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_69EC:
    /* 000069ec   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000069ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_69F0:
    /* 000069f0   2  bra 000069aa */
    c->pc = RC_ADDR(0x000069f0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_69AA;

}
