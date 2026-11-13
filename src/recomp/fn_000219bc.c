/* fn_000219bc - 80 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000219bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000219bcu): goto L_219BC;
    case RC_ADDR(0x000219c0u): goto L_219C0;
    case RC_ADDR(0x000219c2u): goto L_219C2;
    case RC_ADDR(0x000219c6u): goto L_219C6;
    case RC_ADDR(0x000219c8u): goto L_219C8;
    case RC_ADDR(0x000219ccu): goto L_219CC;
    case RC_ADDR(0x000219d0u): goto L_219D0;
    case RC_ADDR(0x000219d2u): goto L_219D2;
    case RC_ADDR(0x000219d6u): goto L_219D6;
    case RC_ADDR(0x000219d8u): goto L_219D8;
    case RC_ADDR(0x000219deu): goto L_219DE;
    case RC_ADDR(0x000219e2u): goto L_219E2;
    case RC_ADDR(0x000219e6u): goto L_219E6;
    case RC_ADDR(0x000219e8u): goto L_219E8;
    case RC_ADDR(0x000219ecu): goto L_219EC;
    case RC_ADDR(0x000219f0u): goto L_219F0;
    case RC_ADDR(0x000219f4u): goto L_219F4;
    case RC_ADDR(0x000219f6u): goto L_219F6;
    case RC_ADDR(0x000219fau): goto L_219FA;
    case RC_ADDR(0x000219feu): goto L_219FE;
    case RC_ADDR(0x00021a02u): goto L_21A02;
    case RC_ADDR(0x00021a06u): goto L_21A06;
    case RC_ADDR(0x00021a0au): goto L_21A0A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_219BC:
    /* 000219bc   4  tst.l (3b2e,A4) */
    c->pc = RC_ADDR(0x000219bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2eu));
    rc_set_nzvc(c, t0, RC_L);

L_219C0:
    /* 000219c0   2  bne 000219f4 */
    c->pc = RC_ADDR(0x000219c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_219F4;

L_219C2:
    /* 000219c2   4  movem.l { D6 D7 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x000219c2u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_219C6:
    /* 000219c6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000219c6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_219C8:
    /* 000219c8   4  pea (00021a0c) */
    c->pc = RC_ADDR(0x000219c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00021a0cu));

L_219CC:
    /* 000219cc   4  jsr (00021724) */
    c->pc = RC_ADDR(0x000219ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021724u);
    return;

L_219D0:
    /* 000219d0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000219d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_219D2:
    /* 000219d2   4  move.l D0,(3b2e,A4) */
    c->pc = RC_ADDR(0x000219d2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b2eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_219D6:
    /* 000219d6   2  bne 000219f0 */
    c->pc = RC_ADDR(0x000219d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_219F0;

L_219D8:
    /* 000219d8   6  move.l #10,-(A7) */
    c->pc = RC_ADDR(0x000219d8u);
    rc_step(c, m, 20);
    t0 = 0x00000010u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219DE:
    /* 000219de   4  pea (00021a1c) */
    c->pc = RC_ADDR(0x000219deu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00021a1cu));

L_219E2:
    /* 000219e2   4  jsr (0002146a) */
    c->pc = RC_ADDR(0x000219e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002146au);
    return;

L_219E6:
    /* 000219e6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000219e6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219E8:
    /* 000219e8   4  jsr (000214aa) */
    c->pc = RC_ADDR(0x000219e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x000214aau);
    return;

L_219EC:
    /* 000219ec   4  jsr (00021a2c) */
    c->pc = RC_ADDR(0x000219ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a2cu);
    return;

L_219F0:
    /* 000219f0   4  movem.l (SP)+,{ D0 D1 A0 A1 } */
    c->pc = RC_ADDR(0x000219f0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_219F4:
    /* 000219f4   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000219f4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219F6:
    /* 000219f6   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000219f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_219FA:
    /* 000219fa   4  move.l A6,(4,A7) */
    c->pc = RC_ADDR(0x000219fau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[7] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_219FE:
    /* 000219fe   4  movea.l (3b2e,A4),A6 */
    c->pc = RC_ADDR(0x000219feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b2eu));
    c->a[6] = t0;

L_21A02:
    /* 00021a02   4  jsr (0,A6,D0.w) */
    c->pc = RC_ADDR(0x00021a02u);
    rc_step(c, m, 22);
    rc_push32(c, m, RC_ADDR(0x00021a06u));
    rc_depth++;
    t4 = c->a[0];
    t3 = (c->a[6] + 0x0u + t4);
    c->pc = t3;
    return;

L_21A06:
    /* 00021a06   4  movem.l (SP)+,{ A0 A6 } */
    c->pc = RC_ADDR(0x00021a06u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21A0A:
    /* 00021a0a   2  rts */
    c->pc = RC_ADDR(0x00021a0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
