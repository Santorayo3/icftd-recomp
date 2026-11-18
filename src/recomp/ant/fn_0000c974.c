/* fn_0000c974 - 166 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c974(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c974u): goto L_C974;
    case RC_ADDR(0x0000c978u): goto L_C978;
    case RC_ADDR(0x0000c97cu): goto L_C97C;
    case RC_ADDR(0x0000c980u): goto L_C980;
    case RC_ADDR(0x0000c984u): goto L_C984;
    case RC_ADDR(0x0000c988u): goto L_C988;
    case RC_ADDR(0x0000c98eu): goto L_C98E;
    case RC_ADDR(0x0000c994u): goto L_C994;
    case RC_ADDR(0x0000c996u): goto L_C996;
    case RC_ADDR(0x0000c99au): goto L_C99A;
    case RC_ADDR(0x0000c99cu): goto L_C99C;
    case RC_ADDR(0x0000c9a0u): goto L_C9A0;
    case RC_ADDR(0x0000c9a6u): goto L_C9A6;
    case RC_ADDR(0x0000c9acu): goto L_C9AC;
    case RC_ADDR(0x0000c9aeu): goto L_C9AE;
    case RC_ADDR(0x0000c9b2u): goto L_C9B2;
    case RC_ADDR(0x0000c9b6u): goto L_C9B6;
    case RC_ADDR(0x0000c9bau): goto L_C9BA;
    case RC_ADDR(0x0000c9beu): goto L_C9BE;
    case RC_ADDR(0x0000c9c0u): goto L_C9C0;
    case RC_ADDR(0x0000c9c4u): goto L_C9C4;
    case RC_ADDR(0x0000c9c8u): goto L_C9C8;
    case RC_ADDR(0x0000c9ccu): goto L_C9CC;
    case RC_ADDR(0x0000c9d0u): goto L_C9D0;
    case RC_ADDR(0x0000c9d2u): goto L_C9D2;
    case RC_ADDR(0x0000c9d6u): goto L_C9D6;
    case RC_ADDR(0x0000c9d8u): goto L_C9D8;
    case RC_ADDR(0x0000c9dau): goto L_C9DA;
    case RC_ADDR(0x0000c9deu): goto L_C9DE;
    case RC_ADDR(0x0000c9e0u): goto L_C9E0;
    case RC_ADDR(0x0000c9e2u): goto L_C9E2;
    case RC_ADDR(0x0000c9e6u): goto L_C9E6;
    case RC_ADDR(0x0000c9e8u): goto L_C9E8;
    case RC_ADDR(0x0000c9ecu): goto L_C9EC;
    case RC_ADDR(0x0000c9eeu): goto L_C9EE;
    case RC_ADDR(0x0000c9f4u): goto L_C9F4;
    case RC_ADDR(0x0000c9f8u): goto L_C9F8;
    case RC_ADDR(0x0000c9fau): goto L_C9FA;
    case RC_ADDR(0x0000ca00u): goto L_CA00;
    case RC_ADDR(0x0000ca02u): goto L_CA02;
    case RC_ADDR(0x0000ca06u): goto L_CA06;
    case RC_ADDR(0x0000ca0au): goto L_CA0A;
    case RC_ADDR(0x0000ca0eu): goto L_CA0E;
    case RC_ADDR(0x0000ca12u): goto L_CA12;
    case RC_ADDR(0x0000ca18u): goto L_CA18;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C974:
    /* 0000c974   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000c974u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_C978:
    /* 0000c978   4  clr.w (ffff9910,A4) */
    c->pc = RC_ADDR(0x0000c978u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x66f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C97C:
    /* 0000c97c   4  clr.w (7ba,A4) */
    c->pc = RC_ADDR(0x0000c97cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C980:
    /* 0000c980   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000c980u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C984:
    /* 0000c984   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000c984u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C988:
    /* 0000c988   6  move.w (ffff9912,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000c988u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66eeu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C98E:
    /* 0000c98e   6  cmpi.w #26,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000c98eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_C994:
    /* 0000c994   2  beq 0000c99c */
    c->pc = RC_ADDR(0x0000c994u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C99C;

L_C996:
    /* 0000c996   4  tst.w (ffff83fa,A4) */
    c->pc = RC_ADDR(0x0000c996u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c06u));
    rc_set_nzvc(c, t0, RC_W);

L_C99A:
    /* 0000c99a   2  beq 0000c9ae */
    c->pc = RC_ADDR(0x0000c99au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C9AE;

L_C99C:
    /* 0000c99c   4  clr.w (ffff83fa,A4) */
    c->pc = RC_ADDR(0x0000c99cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C9A0:
    /* 0000c9a0   6  move.w #1,(e14,A4) */
    c->pc = RC_ADDR(0x0000c9a0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9A6:
    /* 0000c9a6   6  move.w #2,(ffff9912,A4) */
    c->pc = RC_ADDR(0x0000c9a6u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x66eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9AC:
    /* 0000c9ac   2  bra 0000c9b2 */
    c->pc = RC_ADDR(0x0000c9acu);
    rc_step(c, m, 10);
    goto L_C9B2;

L_C9AE:
    /* 0000c9ae   4  clr.w (e14,A4) */
    c->pc = RC_ADDR(0x0000c9aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C9B2:
    /* 0000c9b2   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000c9b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_C9B6:
    /* 0000c9b6   4  pea (ffff9e56,A4) */
    c->pc = RC_ADDR(0x0000c9b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x61aau));

L_C9BA:
    /* 0000c9ba   4  jsr (0000b0be) */
    c->pc = RC_ADDR(0x0000c9bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c9beu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0beu);
    return;

L_C9BE:
    /* 0000c9be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c9beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C9C0:
    /* 0000c9c0   4  movea.l (ffffa428,A4),A0 */
    c->pc = RC_ADDR(0x0000c9c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[0] = t0;

L_C9C4:
    /* 0000c9c4   4  move.w #40,(A0) */
    c->pc = RC_ADDR(0x0000c9c4u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9C8:
    /* 0000c9c8   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000c9c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_C9CC:
    /* 0000c9cc   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0000c9ccu);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0000c9d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_C9D0:
    /* 0000c9d0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000c9d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C9D2:
    /* 0000c9d2   4  jsr (0000c824) */
    c->pc = RC_ADDR(0x0000c9d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c9d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c824u);
    return;

L_C9D6:
    /* 0000c9d6   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000c9d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C9D8:
    /* 0000c9d8   2  bne 0000c9e2 */
    c->pc = RC_ADDR(0x0000c9d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C9E2;

L_C9DA:
    /* 0000c9da   4  move.w (856,A4),D0 */
    c->pc = RC_ADDR(0x0000c9dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9DE:
    /* 0000c9de   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c9deu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C9E0:
    /* 0000c9e0   2  rts */
    c->pc = RC_ADDR(0x0000c9e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_C9E2:
    /* 0000c9e2   4  pea (0000bc56) */
    c->pc = RC_ADDR(0x0000c9e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000bc56u));

L_C9E6:
    /* 0000c9e6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000c9e6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_C9E8:
    /* 0000c9e8   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x0000c9e8u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x0000c9ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_C9EC:
    /* 0000c9ec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c9ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C9EE:
    /* 0000c9ee   6  move.w (fffffffe,A5),(ffff9912,A4) */
    c->pc = RC_ADDR(0x0000c9eeu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x66eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C9F4:
    /* 0000c9f4   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x0000c9f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_C9F8:
    /* 0000c9f8   2  beq 0000ca06 */
    c->pc = RC_ADDR(0x0000c9f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CA06;

L_C9FA:
    /* 0000c9fa   6  cmpi.w #3,(ffff9912,A4) */
    c->pc = RC_ADDR(0x0000c9fau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66eeu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_CA00:
    /* 0000ca00   2  bge 0000ca06 */
    c->pc = RC_ADDR(0x0000ca00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CA06;

L_CA02:
    /* 0000ca02   4  addq.w #1,(ffff9912,A4) */
    c->pc = RC_ADDR(0x0000ca02u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x66eeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CA06:
    /* 0000ca06   4  jsr (0000c926) */
    c->pc = RC_ADDR(0x0000ca06u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ca0au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c926u);
    return;

L_CA0A:
    /* 0000ca0a   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000ca0au);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000ca0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_CA0E:
    /* 0000ca0e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000ca0eu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000ca12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_CA12:
    /* 0000ca12   6  move.w #1,(ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000ca12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA18:
    /* 0000ca18   2  bra 0000c9de */
    c->pc = RC_ADDR(0x0000ca18u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_C9DE;

}
