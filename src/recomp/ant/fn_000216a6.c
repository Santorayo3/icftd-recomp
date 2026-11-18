/* fn_000216a6 - 54 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000216a6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000216a6u): goto L_216A6;
    case RC_ADDR(0x000216a8u): goto L_216A8;
    case RC_ADDR(0x000216acu): goto L_216AC;
    case RC_ADDR(0x000216aeu): goto L_216AE;
    case RC_ADDR(0x000216b2u): goto L_216B2;
    case RC_ADDR(0x000216b6u): goto L_216B6;
    case RC_ADDR(0x000216bau): goto L_216BA;
    case RC_ADDR(0x000216beu): goto L_216BE;
    case RC_ADDR(0x000216c2u): goto L_216C2;
    case RC_ADDR(0x000216c4u): goto L_216C4;
    case RC_ADDR(0x000216c8u): goto L_216C8;
    case RC_ADDR(0x000216cau): goto L_216CA;
    case RC_ADDR(0x000216ccu): goto L_216CC;
    case RC_ADDR(0x000216d0u): goto L_216D0;
    case RC_ADDR(0x000216d2u): goto L_216D2;
    case RC_ADDR(0x000216d8u): goto L_216D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216A6:
    /* 000216a6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000216a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_216A8:
    /* 000216a8   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000216a8u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_216AC:
    /* 000216ac   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000216acu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_216AE:
    /* 000216ae   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000216aeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_216B2:
    /* 000216b2   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x000216b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_216B6:
    /* 000216b6   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000216b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_216BA:
    /* 000216ba   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x000216bau);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x000216beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_216BE:
    /* 000216be   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000216beu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_216C2:
    /* 000216c2   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000216c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_216C4:
    /* 000216c4   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000216c4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_216C8:
    /* 000216c8   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000216c8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_216CA:
    /* 000216ca   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x000216cau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_216CC:
    /* 000216cc   4  move.w D0,(3c,A2) */
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_216D0:
    /* 000216d0   2  bne 000216d8 */
    c->pc = RC_ADDR(0x000216d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_216D8;

L_216D2:
    /* 000216d2   6  move.w #1,(3c,A2) */
    c->pc = RC_ADDR(0x000216d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_216D8:
    /* 000216d8   4  bra 00021950 */
    c->pc = RC_ADDR(0x000216d8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
