/* fn_0000f0ac - 50 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f0ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f0acu): goto L_F0AC;
    case RC_ADDR(0x0000f0b0u): goto L_F0B0;
    case RC_ADDR(0x0000f0b2u): goto L_F0B2;
    case RC_ADDR(0x0000f0b4u): goto L_F0B4;
    case RC_ADDR(0x0000f0b8u): goto L_F0B8;
    case RC_ADDR(0x0000f0bau): goto L_F0BA;
    case RC_ADDR(0x0000f0c0u): goto L_F0C0;
    case RC_ADDR(0x0000f0c2u): goto L_F0C2;
    case RC_ADDR(0x0000f0c6u): goto L_F0C6;
    case RC_ADDR(0x0000f0c8u): goto L_F0C8;
    case RC_ADDR(0x0000f0ccu): goto L_F0CC;
    case RC_ADDR(0x0000f0d0u): goto L_F0D0;
    case RC_ADDR(0x0000f0d2u): goto L_F0D2;
    case RC_ADDR(0x0000f0d6u): goto L_F0D6;
    case RC_ADDR(0x0000f0d8u): goto L_F0D8;
    case RC_ADDR(0x0000f0dcu): goto L_F0DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F0AC:
    /* 0000f0ac   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f0acu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F0B0:
    /* 0000f0b0   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0000f0b0u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F0B2:
    /* 0000f0b2   2  beq 0000f0d8 */
    c->pc = RC_ADDR(0x0000f0b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F0D8;

L_F0B4:
    /* 0000f0b4   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x0000f0b4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_F0B8:
    /* 0000f0b8   2  clr.b D0 */
    c->pc = RC_ADDR(0x0000f0b8u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F0BA:
    /* 0000f0ba   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000f0bau);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_F0C0:
    /* 0000f0c0   2  beq 0000f0cc */
    c->pc = RC_ADDR(0x0000f0c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F0CC;

L_F0C2:
    /* 0000f0c2   4  cmpa.l (4,A1),A0 */
    c->pc = RC_ADDR(0x0000f0c2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_cmp(c, RC_L, c->a[0], t0);

L_F0C6:
    /* 0000f0c6   2  bne 0000f0cc */
    c->pc = RC_ADDR(0x0000f0c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F0CC;

L_F0C8:
    /* 0000f0c8   4  bsr 0000f5b8 */
    c->pc = RC_ADDR(0x0000f0c8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f0ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f5b8u);
    return;

L_F0CC:
    /* 0000f0cc   4  adda.w #16,A1 */
    c->pc = RC_ADDR(0x0000f0ccu);
    rc_step(c, m, 14);
    t0 = 0x00000016u;
    c->a[1] += rc_ext(t0, RC_W);

L_F0D0:
    /* 0000f0d0   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x0000f0d0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_F0D2:
    /* 0000f0d2   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x0000f0d2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_F0D6:
    /* 0000f0d6   2  bne 0000f0ba */
    c->pc = RC_ADDR(0x0000f0d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F0BA; }

L_F0D8:
    /* 0000f0d8   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f0d8u);
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
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F0DC:
    /* 0000f0dc   2  rts */
    c->pc = RC_ADDR(0x0000f0dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
