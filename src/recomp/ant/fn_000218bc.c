/* fn_000218bc - 74 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000218bc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000218bcu): goto L_218BC;
    case RC_ADDR(0x000218beu): goto L_218BE;
    case RC_ADDR(0x000218c2u): goto L_218C2;
    case RC_ADDR(0x000218c4u): goto L_218C4;
    case RC_ADDR(0x000218c8u): goto L_218C8;
    case RC_ADDR(0x000218ccu): goto L_218CC;
    case RC_ADDR(0x000218ceu): goto L_218CE;
    case RC_ADDR(0x000218d4u): goto L_218D4;
    case RC_ADDR(0x000218d6u): goto L_218D6;
    case RC_ADDR(0x000218dau): goto L_218DA;
    case RC_ADDR(0x000218deu): goto L_218DE;
    case RC_ADDR(0x000218e2u): goto L_218E2;
    case RC_ADDR(0x000218e4u): goto L_218E4;
    case RC_ADDR(0x000218e8u): goto L_218E8;
    case RC_ADDR(0x000218eau): goto L_218EA;
    case RC_ADDR(0x000218eeu): goto L_218EE;
    case RC_ADDR(0x000218f0u): goto L_218F0;
    case RC_ADDR(0x000218f4u): goto L_218F4;
    case RC_ADDR(0x000218f6u): goto L_218F6;
    case RC_ADDR(0x000218fau): goto L_218FA;
    case RC_ADDR(0x000218feu): goto L_218FE;
    case RC_ADDR(0x00021900u): goto L_21900;
    case RC_ADDR(0x00021904u): goto L_21904;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218BC:
    /* 000218bc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000218bcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_218BE:
    /* 000218be   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000218beu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_218C2:
    /* 000218c2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000218c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_218C4:
    /* 000218c4   4  lea (344c,A4),A0 */
    c->pc = RC_ADDR(0x000218c4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x344cu);

L_218C8:
    /* 000218c8   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000218c8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_218CC:
    /* 000218cc   2  beq 00021904 */
    c->pc = RC_ADDR(0x000218ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21904;

L_218CE:
    /* 000218ce   6  cmpi.b #10,(f,A5) */
    c->pc = RC_ADDR(0x000218ceu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_cmp(c, RC_B, t0, 0x00000010u);

L_218D4:
    /* 000218d4   2  bcc 00021904 */
    c->pc = RC_ADDR(0x000218d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21904;

L_218D6:
    /* 000218d6   4  move.l (18,A5),-(A7) */
    c->pc = RC_ADDR(0x000218d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_218DA:
    /* 000218da   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x000218dau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_218DE:
    /* 000218de   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x000218deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_218E2:
    /* 000218e2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000218e2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_218E4:
    /* 000218e4   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000218e4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_218E8:
    /* 000218e8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000218e8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_218EA:
    /* 000218ea   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000218eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_218EE:
    /* 000218ee   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000218eeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_218F0:
    /* 000218f0   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000218f0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_218F4:
    /* 000218f4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000218f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_218F6:
    /* 000218f6   4  lea (344c,A4),A0 */
    c->pc = RC_ADDR(0x000218f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x344cu);

L_218FA:
    /* 000218fa   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x000218fau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_218FE:
    /* 000218fe   2  jsr (A1) */
    c->pc = RC_ADDR(0x000218feu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00021900u));
    rc_depth++;
    t3 = c->a[1];
    c->pc = t3;
    return;

L_21900:
    /* 00021900   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x00021900u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_21904:
    /* 00021904   2  bra 00021950 */
    c->pc = RC_ADDR(0x00021904u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
