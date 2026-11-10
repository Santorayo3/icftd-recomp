/* fn_0001d476 - 132 byte(s), 41 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d476(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d476u): goto L_1D476;
    case RC_ADDR(0x0001d47au): goto L_1D47A;
    case RC_ADDR(0x0001d480u): goto L_1D480;
    case RC_ADDR(0x0001d484u): goto L_1D484;
    case RC_ADDR(0x0001d488u): goto L_1D488;
    case RC_ADDR(0x0001d48au): goto L_1D48A;
    case RC_ADDR(0x0001d48eu): goto L_1D48E;
    case RC_ADDR(0x0001d490u): goto L_1D490;
    case RC_ADDR(0x0001d492u): goto L_1D492;
    case RC_ADDR(0x0001d494u): goto L_1D494;
    case RC_ADDR(0x0001d496u): goto L_1D496;
    case RC_ADDR(0x0001d498u): goto L_1D498;
    case RC_ADDR(0x0001d49cu): goto L_1D49C;
    case RC_ADDR(0x0001d4a0u): goto L_1D4A0;
    case RC_ADDR(0x0001d4a2u): goto L_1D4A2;
    case RC_ADDR(0x0001d4a4u): goto L_1D4A4;
    case RC_ADDR(0x0001d4a6u): goto L_1D4A6;
    case RC_ADDR(0x0001d4a8u): goto L_1D4A8;
    case RC_ADDR(0x0001d4acu): goto L_1D4AC;
    case RC_ADDR(0x0001d4aeu): goto L_1D4AE;
    case RC_ADDR(0x0001d4b2u): goto L_1D4B2;
    case RC_ADDR(0x0001d4b6u): goto L_1D4B6;
    case RC_ADDR(0x0001d4b8u): goto L_1D4B8;
    case RC_ADDR(0x0001d4bcu): goto L_1D4BC;
    case RC_ADDR(0x0001d4c0u): goto L_1D4C0;
    case RC_ADDR(0x0001d4c4u): goto L_1D4C4;
    case RC_ADDR(0x0001d4c6u): goto L_1D4C6;
    case RC_ADDR(0x0001d4c8u): goto L_1D4C8;
    case RC_ADDR(0x0001d4cau): goto L_1D4CA;
    case RC_ADDR(0x0001d4ceu): goto L_1D4CE;
    case RC_ADDR(0x0001d4d2u): goto L_1D4D2;
    case RC_ADDR(0x0001d4d6u): goto L_1D4D6;
    case RC_ADDR(0x0001d4dau): goto L_1D4DA;
    case RC_ADDR(0x0001d4dcu): goto L_1D4DC;
    case RC_ADDR(0x0001d4e0u): goto L_1D4E0;
    case RC_ADDR(0x0001d4e6u): goto L_1D4E6;
    case RC_ADDR(0x0001d4eau): goto L_1D4EA;
    case RC_ADDR(0x0001d4eeu): goto L_1D4EE;
    case RC_ADDR(0x0001d4f2u): goto L_1D4F2;
    case RC_ADDR(0x0001d4f4u): goto L_1D4F4;
    case RC_ADDR(0x0001d4f8u): goto L_1D4F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D476:
    /* 0001d476   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001d476u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1D47A:
    /* 0001d47a   6  pea (00010000).l */
    c->pc = RC_ADDR(0x0001d47au);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_1D480:
    /* 0001d480   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001d480u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000010u);

L_1D484:
    /* 0001d484   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d484u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d488u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D488:
    /* 0001d488   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d488u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D48A:
    /* 0001d48a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d48au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D48E:
    /* 0001d48e   2  bne 0001d496 */
    c->pc = RC_ADDR(0x0001d48eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D496;

L_1D490:
    /* 0001d490   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d490u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D492:
    /* 0001d492   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d492u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D494:
    /* 0001d494   2  rts */
    c->pc = RC_ADDR(0x0001d494u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D496:
    /* 0001d496   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001d496u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D498:
    /* 0001d498   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d498u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D49C:
    /* 0001d49c   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0001d49cu);
    rc_step(c, m);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0001d4a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_1D4A0:
    /* 0001d4a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d4a0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D4A2:
    /* 0001d4a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d4a2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1D4A4:
    /* 0001d4a4   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001d4a4u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1D4A6:
    /* 0001d4a6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d4a6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4A8:
    /* 0001d4a8   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d4a8u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d4acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D4AC:
    /* 0001d4ac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d4acu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D4AE:
    /* 0001d4ae   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001d4aeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1D4B2:
    /* 0001d4b2   4  move.l D0,(4,A0) */
    c->pc = RC_ADDR(0x0001d4b2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4B6:
    /* 0001d4b6   2  bne 0001d4ca */
    c->pc = RC_ADDR(0x0001d4b6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D4CA;

L_1D4B8:
    /* 0001d4b8   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001d4b8u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000010u);

L_1D4BC:
    /* 0001d4bc   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d4bcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4C0:
    /* 0001d4c0   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d4c0u);
    rc_step(c, m);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001d4c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D4C4:
    /* 0001d4c4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d4c4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D4C6:
    /* 0001d4c6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d4c6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D4C8:
    /* 0001d4c8   2  bra 0001d492 */
    c->pc = RC_ADDR(0x0001d4c8u);
    rc_step(c, m);
    rc_tick();
    goto L_1D492;

L_1D4CA:
    /* 0001d4ca   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d4cau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4CE:
    /* 0001d4ce   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001d4ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1D4D2:
    /* 0001d4d2   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001d4d2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4D6:
    /* 0001d4d6   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0001d4d6u);
    rc_step(c, m);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0001d4dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020810u);
    return;

L_1D4DA:
    /* 0001d4da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d4dau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D4DC:
    /* 0001d4dc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001d4dcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1D4E0:
    /* 0001d4e0   6  move.w #1,(a,A0) */
    c->pc = RC_ADDR(0x0001d4e0u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D4E6:
    /* 0001d4e6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d4e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4EA:
    /* 0001d4ea   4  pea (ffffcb18,A4) */
    c->pc = RC_ADDR(0x0001d4eau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x34e8u));

L_1D4EE:
    /* 0001d4ee   4  jsr (0001e49c) */
    c->pc = RC_ADDR(0x0001d4eeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d4f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e49cu);
    return;

L_1D4F2:
    /* 0001d4f2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d4f2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D4F4:
    /* 0001d4f4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d4f4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D4F8:
    /* 0001d4f8   2  bra 0001d492 */
    c->pc = RC_ADDR(0x0001d4f8u);
    rc_step(c, m);
    rc_tick();
    goto L_1D492;

}
