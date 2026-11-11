/* fn_0000b46c - 156 byte(s), 42 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b46c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b46cu): goto L_B46C;
    case RC_ADDR(0x0000b470u): goto L_B470;
    case RC_ADDR(0x0000b474u): goto L_B474;
    case RC_ADDR(0x0000b478u): goto L_B478;
    case RC_ADDR(0x0000b47cu): goto L_B47C;
    case RC_ADDR(0x0000b480u): goto L_B480;
    case RC_ADDR(0x0000b486u): goto L_B486;
    case RC_ADDR(0x0000b48cu): goto L_B48C;
    case RC_ADDR(0x0000b48eu): goto L_B48E;
    case RC_ADDR(0x0000b494u): goto L_B494;
    case RC_ADDR(0x0000b49au): goto L_B49A;
    case RC_ADDR(0x0000b49cu): goto L_B49C;
    case RC_ADDR(0x0000b4a0u): goto L_B4A0;
    case RC_ADDR(0x0000b4a4u): goto L_B4A4;
    case RC_ADDR(0x0000b4a8u): goto L_B4A8;
    case RC_ADDR(0x0000b4acu): goto L_B4AC;
    case RC_ADDR(0x0000b4aeu): goto L_B4AE;
    case RC_ADDR(0x0000b4b2u): goto L_B4B2;
    case RC_ADDR(0x0000b4b6u): goto L_B4B6;
    case RC_ADDR(0x0000b4bau): goto L_B4BA;
    case RC_ADDR(0x0000b4beu): goto L_B4BE;
    case RC_ADDR(0x0000b4c0u): goto L_B4C0;
    case RC_ADDR(0x0000b4c4u): goto L_B4C4;
    case RC_ADDR(0x0000b4c6u): goto L_B4C6;
    case RC_ADDR(0x0000b4c8u): goto L_B4C8;
    case RC_ADDR(0x0000b4ccu): goto L_B4CC;
    case RC_ADDR(0x0000b4ceu): goto L_B4CE;
    case RC_ADDR(0x0000b4d0u): goto L_B4D0;
    case RC_ADDR(0x0000b4d4u): goto L_B4D4;
    case RC_ADDR(0x0000b4d6u): goto L_B4D6;
    case RC_ADDR(0x0000b4dau): goto L_B4DA;
    case RC_ADDR(0x0000b4dcu): goto L_B4DC;
    case RC_ADDR(0x0000b4e2u): goto L_B4E2;
    case RC_ADDR(0x0000b4e6u): goto L_B4E6;
    case RC_ADDR(0x0000b4e8u): goto L_B4E8;
    case RC_ADDR(0x0000b4eeu): goto L_B4EE;
    case RC_ADDR(0x0000b4f0u): goto L_B4F0;
    case RC_ADDR(0x0000b4f4u): goto L_B4F4;
    case RC_ADDR(0x0000b4f8u): goto L_B4F8;
    case RC_ADDR(0x0000b4fcu): goto L_B4FC;
    case RC_ADDR(0x0000b500u): goto L_B500;
    case RC_ADDR(0x0000b506u): goto L_B506;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B46C:
    /* 0000b46c   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000b46cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_B470:
    /* 0000b470   4  clr.w (ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000b470u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x6960u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B474:
    /* 0000b474   4  clr.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x0000b474u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x1c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B478:
    /* 0000b478   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000b478u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B47C:
    /* 0000b47c   4  clr.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x0000b47cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B480:
    /* 0000b480   6  move.w (ffff96a2,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000b480u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x695eu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B486:
    /* 0000b486   6  cmpi.w #26,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x0000b486u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_B48C:
    /* 0000b48c   2  bne 0000b49c */
    c->pc = RC_ADDR(0x0000b48cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B49C;

L_B48E:
    /* 0000b48e   6  move.w #1,(416,A4) */
    c->pc = RC_ADDR(0x0000b48eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x416u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B494:
    /* 0000b494   6  move.w #2,(ffff96a2,A4) */
    c->pc = RC_ADDR(0x0000b494u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x695eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B49A:
    /* 0000b49a   2  bra 0000b4a0 */
    c->pc = RC_ADDR(0x0000b49au);
    rc_step(c, m, 10);
    goto L_B4A0;

L_B49C:
    /* 0000b49c   4  clr.w (416,A4) */
    c->pc = RC_ADDR(0x0000b49cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x416u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B4A0:
    /* 0000b4a0   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000b4a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_B4A4:
    /* 0000b4a4   4  pea (ffff9c36,A4) */
    c->pc = RC_ADDR(0x0000b4a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x63cau));

L_B4A8:
    /* 0000b4a8   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x0000b4a8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b4acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_B4AC:
    /* 0000b4ac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b4acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B4AE:
    /* 0000b4ae   4  movea.l (ffffa208,A4),A0 */
    c->pc = RC_ADDR(0x0000b4aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_B4B2:
    /* 0000b4b2   4  move.w #40,(A0) */
    c->pc = RC_ADDR(0x0000b4b2u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B4B6:
    /* 0000b4b6   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000b4b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_B4BA:
    /* 0000b4ba   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x0000b4bau);
    rc_step(c, m, 18);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x0000b4beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b78u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_B4BE:
    /* 0000b4be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b4beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B4C0:
    /* 0000b4c0   4  jsr (0000b31c) */
    c->pc = RC_ADDR(0x0000b4c0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b4c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b31cu);
    return;

L_B4C4:
    /* 0000b4c4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b4c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B4C6:
    /* 0000b4c6   2  bne 0000b4d0 */
    c->pc = RC_ADDR(0x0000b4c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B4D0;

L_B4C8:
    /* 0000b4c8   4  move.w (fffffec8,A4),D0 */
    c->pc = RC_ADDR(0x0000b4c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B4CC:
    /* 0000b4cc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b4ccu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B4CE:
    /* 0000b4ce   2  rts */
    c->pc = RC_ADDR(0x0000b4ceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_B4D0:
    /* 0000b4d0   4  pea (0000a74e) */
    c->pc = RC_ADDR(0x0000b4d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a74eu));

L_B4D4:
    /* 0000b4d4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b4d4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B4D6:
    /* 0000b4d6   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x0000b4d6u);
    rc_step(c, m, 18);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x0000b4dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c50u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_B4DA:
    /* 0000b4da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b4dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B4DC:
    /* 0000b4dc   6  move.w (fffffffe,A5),(ffff96a2,A4) */
    c->pc = RC_ADDR(0x0000b4dcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x695eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B4E2:
    /* 0000b4e2   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000b4e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_B4E6:
    /* 0000b4e6   2  beq 0000b4f4 */
    c->pc = RC_ADDR(0x0000b4e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B4F4;

L_B4E8:
    /* 0000b4e8   6  cmpi.w #3,(ffff96a2,A4) */
    c->pc = RC_ADDR(0x0000b4e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x695eu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_B4EE:
    /* 0000b4ee   2  bge 0000b4f4 */
    c->pc = RC_ADDR(0x0000b4eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_B4F4;

L_B4F0:
    /* 0000b4f0   4  addq.w #1,(ffff96a2,A4) */
    c->pc = RC_ADDR(0x0000b4f0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x695eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B4F4:
    /* 0000b4f4   4  jsr (0000b41e) */
    c->pc = RC_ADDR(0x0000b4f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b4f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b41eu);
    return;

L_B4F8:
    /* 0000b4f8   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0000b4f8u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000b4fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_B4FC:
    /* 0000b4fc   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000b4fcu);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0000b500u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_B500:
    /* 0000b500   6  move.w #1,(ffffcb20,A4) */
    c->pc = RC_ADDR(0x0000b500u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B506:
    /* 0000b506   2  bra 0000b4cc */
    c->pc = RC_ADDR(0x0000b506u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_B4CC;

}
