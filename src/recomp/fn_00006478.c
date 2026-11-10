/* fn_00006478 - 106 byte(s), 32 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006478(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006478u): goto L_6478;
    case RC_ADDR(0x0000647cu): goto L_647C;
    case RC_ADDR(0x00006482u): goto L_6482;
    case RC_ADDR(0x00006484u): goto L_6484;
    case RC_ADDR(0x00006488u): goto L_6488;
    case RC_ADDR(0x0000648cu): goto L_648C;
    case RC_ADDR(0x00006490u): goto L_6490;
    case RC_ADDR(0x00006494u): goto L_6494;
    case RC_ADDR(0x00006496u): goto L_6496;
    case RC_ADDR(0x0000649au): goto L_649A;
    case RC_ADDR(0x0000649eu): goto L_649E;
    case RC_ADDR(0x000064a2u): goto L_64A2;
    case RC_ADDR(0x000064a4u): goto L_64A4;
    case RC_ADDR(0x000064a8u): goto L_64A8;
    case RC_ADDR(0x000064aau): goto L_64AA;
    case RC_ADDR(0x000064aeu): goto L_64AE;
    case RC_ADDR(0x000064b0u): goto L_64B0;
    case RC_ADDR(0x000064b4u): goto L_64B4;
    case RC_ADDR(0x000064b8u): goto L_64B8;
    case RC_ADDR(0x000064bcu): goto L_64BC;
    case RC_ADDR(0x000064beu): goto L_64BE;
    case RC_ADDR(0x000064c2u): goto L_64C2;
    case RC_ADDR(0x000064c4u): goto L_64C4;
    case RC_ADDR(0x000064c8u): goto L_64C8;
    case RC_ADDR(0x000064ccu): goto L_64CC;
    case RC_ADDR(0x000064d0u): goto L_64D0;
    case RC_ADDR(0x000064d2u): goto L_64D2;
    case RC_ADDR(0x000064d4u): goto L_64D4;
    case RC_ADDR(0x000064d8u): goto L_64D8;
    case RC_ADDR(0x000064dcu): goto L_64DC;
    case RC_ADDR(0x000064deu): goto L_64DE;
    case RC_ADDR(0x000064e0u): goto L_64E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6478:
    /* 00006478   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00006478u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_647C:
    /* 0000647c   6  move.l (fffff06a,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000647cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf96u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6482:
    /* 00006482   2  moveq #e,D0 */
    c->pc = RC_ADDR(0x00006482u);
    rc_step(c, m);
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6484:
    /* 00006484   4  sub.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00006484u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6488:
    /* 00006488   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006488u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_648C:
    /* 0000648c   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000648cu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6490:
    /* 00006490   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00006490u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_6494:
    /* 00006494   2  beq 000064aa */
    c->pc = RC_ADDR(0x00006494u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_64AA;

L_6496:
    /* 00006496   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006496u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_649A:
    /* 0000649a   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000649au);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_649E:
    /* 0000649e   4  cmpi.b #2a,(A0) */
    c->pc = RC_ADDR(0x0000649eu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002au);

L_64A2:
    /* 000064a2   2  bne 000064a8 */
    c->pc = RC_ADDR(0x000064a2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_64A8;

L_64A4:
    /* 000064a4   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000064a4u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_64A8:
    /* 000064a8   2  bra 00006490 */
    c->pc = RC_ADDR(0x000064a8u);
    rc_step(c, m);
    rc_tick();
    goto L_6490;

L_64AA:
    /* 000064aa   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x000064aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_64AE:
    /* 000064ae   2  beq 000064c4 */
    c->pc = RC_ADDR(0x000064aeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_64C4;

L_64B0:
    /* 000064b0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000064b0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_64B4:
    /* 000064b4   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000064b4u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_64B8:
    /* 000064b8   4  cmpi.b #23,(A0) */
    c->pc = RC_ADDR(0x000064b8u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000023u);

L_64BC:
    /* 000064bc   2  bne 000064c2 */
    c->pc = RC_ADDR(0x000064bcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_64C2;

L_64BE:
    /* 000064be   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x000064beu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_64C2:
    /* 000064c2   2  bra 000064aa */
    c->pc = RC_ADDR(0x000064c2u);
    rc_step(c, m);
    rc_tick();
    goto L_64AA;

L_64C4:
    /* 000064c4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000064c4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_64C8:
    /* 000064c8   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000064c8u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_64CC:
    /* 000064cc   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x000064ccu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_64D0:
    /* 000064d0   2  beq 000064d4 */
    c->pc = RC_ADDR(0x000064d0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_64D4;

L_64D2:
    /* 000064d2   2  bra 000064c4 */
    c->pc = RC_ADDR(0x000064d2u);
    rc_step(c, m);
    rc_tick();
    goto L_64C4;

L_64D4:
    /* 000064d4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000064d4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_64D8:
    /* 000064d8   4  jsr (0000638c) */
    c->pc = RC_ADDR(0x000064d8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000064dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000638cu);
    return;

L_64DC:
    /* 000064dc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000064dcu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_64DE:
    /* 000064de   2  unlk A5 */
    c->pc = RC_ADDR(0x000064deu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_64E0:
    /* 000064e0   2  rts */
    c->pc = RC_ADDR(0x000064e0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
