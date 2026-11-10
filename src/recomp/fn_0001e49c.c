/* fn_0001e49c - 104 byte(s), 37 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e49c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e49cu): goto L_1E49C;
    case RC_ADDR(0x0001e4a0u): goto L_1E4A0;
    case RC_ADDR(0x0001e4a4u): goto L_1E4A4;
    case RC_ADDR(0x0001e4a8u): goto L_1E4A8;
    case RC_ADDR(0x0001e4acu): goto L_1E4AC;
    case RC_ADDR(0x0001e4aeu): goto L_1E4AE;
    case RC_ADDR(0x0001e4b0u): goto L_1E4B0;
    case RC_ADDR(0x0001e4b4u): goto L_1E4B4;
    case RC_ADDR(0x0001e4b6u): goto L_1E4B6;
    case RC_ADDR(0x0001e4bau): goto L_1E4BA;
    case RC_ADDR(0x0001e4beu): goto L_1E4BE;
    case RC_ADDR(0x0001e4c2u): goto L_1E4C2;
    case RC_ADDR(0x0001e4c4u): goto L_1E4C4;
    case RC_ADDR(0x0001e4c6u): goto L_1E4C6;
    case RC_ADDR(0x0001e4c8u): goto L_1E4C8;
    case RC_ADDR(0x0001e4ccu): goto L_1E4CC;
    case RC_ADDR(0x0001e4ceu): goto L_1E4CE;
    case RC_ADDR(0x0001e4d2u): goto L_1E4D2;
    case RC_ADDR(0x0001e4d4u): goto L_1E4D4;
    case RC_ADDR(0x0001e4d6u): goto L_1E4D6;
    case RC_ADDR(0x0001e4dau): goto L_1E4DA;
    case RC_ADDR(0x0001e4dcu): goto L_1E4DC;
    case RC_ADDR(0x0001e4deu): goto L_1E4DE;
    case RC_ADDR(0x0001e4e0u): goto L_1E4E0;
    case RC_ADDR(0x0001e4e2u): goto L_1E4E2;
    case RC_ADDR(0x0001e4e6u): goto L_1E4E6;
    case RC_ADDR(0x0001e4eau): goto L_1E4EA;
    case RC_ADDR(0x0001e4eeu): goto L_1E4EE;
    case RC_ADDR(0x0001e4f0u): goto L_1E4F0;
    case RC_ADDR(0x0001e4f2u): goto L_1E4F2;
    case RC_ADDR(0x0001e4f4u): goto L_1E4F4;
    case RC_ADDR(0x0001e4f6u): goto L_1E4F6;
    case RC_ADDR(0x0001e4f8u): goto L_1E4F8;
    case RC_ADDR(0x0001e4fau): goto L_1E4FA;
    case RC_ADDR(0x0001e4fcu): goto L_1E4FC;
    case RC_ADDR(0x0001e500u): goto L_1E500;
    case RC_ADDR(0x0001e502u): goto L_1E502;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E49C:
    /* 0001e49c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e49cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E4A0:
    /* 0001e4a0   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001e4a0u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1E4A4:
    /* 0001e4a4   4  movea.l (c,A5),A2 */
    c->pc = RC_ADDR(0x0001e4a4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[2] = t0;

L_1E4A8:
    /* 0001e4a8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e4a8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E4AC:
    /* 0001e4ac   2  tst.l (A0) */
    c->pc = RC_ADDR(0x0001e4acu);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_1E4AE:
    /* 0001e4ae   2  beq 0001e4c8 */
    c->pc = RC_ADDR(0x0001e4aeu);
    if (rc_cond(c, 7)) goto L_1E4C8;

L_1E4B0:
    /* 0001e4b0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e4b0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E4B4:
    /* 0001e4b4   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001e4b4u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1E4B6:
    /* 0001e4b6   4  move.l (4,A1),-(A7) */
    c->pc = RC_ADDR(0x0001e4b6u);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4BA:
    /* 0001e4ba   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001e4bau);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4BE:
    /* 0001e4be   4  jsr (0001f03e) */
    c->pc = RC_ADDR(0x0001e4beu);
    rc_push32(c, m, RC_ADDR(0x0001e4c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f03eu);
    return;

L_1E4C2:
    /* 0001e4c2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e4c2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E4C4:
    /* 0001e4c4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001e4c4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1E4C6:
    /* 0001e4c6   2  bge 0001e4d6 */
    c->pc = RC_ADDR(0x0001e4c6u);
    if (rc_cond(c, 12)) goto L_1E4D6;

L_1E4C8:
    /* 0001e4c8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e4c8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E4CC:
    /* 0001e4cc   2  move.l (A0),(A2) */
    c->pc = RC_ADDR(0x0001e4ccu);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4CE:
    /* 0001e4ce   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e4ceu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E4D2:
    /* 0001e4d2   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x0001e4d2u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4D4:
    /* 0001e4d4   2  bra 0001e4fc */
    c->pc = RC_ADDR(0x0001e4d4u);
    goto L_1E4FC;

L_1E4D6:
    /* 0001e4d6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001e4d6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1E4DA:
    /* 0001e4da   2  movea.l (A0),A3 */
    c->pc = RC_ADDR(0x0001e4dau);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_1E4DC:
    /* 0001e4dc   2  tst.l (A3) */
    c->pc = RC_ADDR(0x0001e4dcu);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_1E4DE:
    /* 0001e4de   2  beq 0001e4f8 */
    c->pc = RC_ADDR(0x0001e4deu);
    if (rc_cond(c, 7)) goto L_1E4F8;

L_1E4E0:
    /* 0001e4e0   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x0001e4e0u);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_1E4E2:
    /* 0001e4e2   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001e4e2u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4E6:
    /* 0001e4e6   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001e4e6u);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4EA:
    /* 0001e4ea   4  jsr (0001f03e) */
    c->pc = RC_ADDR(0x0001e4eau);
    rc_push32(c, m, RC_ADDR(0x0001e4eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f03eu);
    return;

L_1E4EE:
    /* 0001e4ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e4eeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E4F0:
    /* 0001e4f0   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001e4f0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1E4F2:
    /* 0001e4f2   2  blt 0001e4f8 */
    c->pc = RC_ADDR(0x0001e4f2u);
    if (rc_cond(c, 13)) goto L_1E4F8;

L_1E4F4:
    /* 0001e4f4   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x0001e4f4u);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_1E4F6:
    /* 0001e4f6   2  bra 0001e4dc */
    c->pc = RC_ADDR(0x0001e4f6u);
    rc_tick();
    goto L_1E4DC;

L_1E4F8:
    /* 0001e4f8   2  move.l (A3),(A2) */
    c->pc = RC_ADDR(0x0001e4f8u);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4FA:
    /* 0001e4fa   2  move.l A2,(A3) */
    c->pc = RC_ADDR(0x0001e4fau);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4FC:
    /* 0001e4fc   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001e4fcu);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1E500:
    /* 0001e500   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e500u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E502:
    /* 0001e502   2  rts */
    c->pc = RC_ADDR(0x0001e502u);
    rc_ret(c, m);
    return;

}
