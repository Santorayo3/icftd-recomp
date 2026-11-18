/* fn_000011a8 - 32 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000011a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000011a8u): goto L_11A8;
    case RC_ADDR(0x000011aau): goto L_11AA;
    case RC_ADDR(0x000011aeu): goto L_11AE;
    case RC_ADDR(0x000011b0u): goto L_11B0;
    case RC_ADDR(0x000011b2u): goto L_11B2;
    case RC_ADDR(0x000011b6u): goto L_11B6;
    case RC_ADDR(0x000011bau): goto L_11BA;
    case RC_ADDR(0x000011beu): goto L_11BE;
    case RC_ADDR(0x000011c2u): goto L_11C2;
    case RC_ADDR(0x000011c4u): goto L_11C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A8:
    /* 000011a8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000011a8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11AA:
    /* 000011aa   4  move.w (ffffffd8,A5),D0 */
    c->pc = RC_ADDR(0x000011aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AE:
    /* 000011ae   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000011aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_11B0:
    /* 000011b0   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000011b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_11B2:
    /* 000011b2   4  adda.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x000011b2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] += t0;

L_11B6:
    /* 000011b6   4  pea (12,A0) */
    c->pc = RC_ADDR(0x000011b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x12u));

L_11BA:
    /* 000011ba   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000011bau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BE:
    /* 000011be   4  jsr (00000fa2) */
    c->pc = RC_ADDR(0x000011beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000011c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000fa2u);
    return;

L_11C2:
    /* 000011c2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000011c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11C4:
    /* 000011c4   4  addq.w #1,(ffffffd8,A5) */
    c->pc = RC_ADDR(0x000011c4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

    /* falls through into 000011c8 */
    c->pc = RC_ADDR(0x000011c8u);
    return;
}
