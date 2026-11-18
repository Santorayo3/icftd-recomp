/* fn_000119a6 - 106 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000119a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000119a6u): goto L_119A6;
    case RC_ADDR(0x000119aau): goto L_119AA;
    case RC_ADDR(0x000119aeu): goto L_119AE;
    case RC_ADDR(0x000119b0u): goto L_119B0;
    case RC_ADDR(0x000119b4u): goto L_119B4;
    case RC_ADDR(0x000119b6u): goto L_119B6;
    case RC_ADDR(0x000119b8u): goto L_119B8;
    case RC_ADDR(0x000119bcu): goto L_119BC;
    case RC_ADDR(0x000119beu): goto L_119BE;
    case RC_ADDR(0x000119c2u): goto L_119C2;
    case RC_ADDR(0x000119c6u): goto L_119C6;
    case RC_ADDR(0x000119cau): goto L_119CA;
    case RC_ADDR(0x000119ccu): goto L_119CC;
    case RC_ADDR(0x000119d0u): goto L_119D0;
    case RC_ADDR(0x000119d6u): goto L_119D6;
    case RC_ADDR(0x000119dcu): goto L_119DC;
    case RC_ADDR(0x000119e2u): goto L_119E2;
    case RC_ADDR(0x000119e8u): goto L_119E8;
    case RC_ADDR(0x000119eeu): goto L_119EE;
    case RC_ADDR(0x000119f6u): goto L_119F6;
    case RC_ADDR(0x000119feu): goto L_119FE;
    case RC_ADDR(0x00011a06u): goto L_11A06;
    case RC_ADDR(0x00011a0au): goto L_11A0A;
    case RC_ADDR(0x00011a0eu): goto L_11A0E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_119A6:
    /* 000119a6   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x000119a6u);
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
    c->a[7] = t3;

L_119AA:
    /* 000119aa   4  lea (00011a46),A1 */
    c->pc = RC_ADDR(0x000119aau);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x00011a46u);

L_119AE:
    /* 000119ae   2  move.l (A1),D0 */
    c->pc = RC_ADDR(0x000119aeu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_119B0:
    /* 000119b0   4  bne 00011a06 */
    c->pc = RC_ADDR(0x000119b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11A06;

L_119B4:
    /* 000119b4   2  move.l A6,(A1) */
    c->pc = RC_ADDR(0x000119b4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_L);

L_119B6:
    /* 000119b6   2  movea.l A6,A1 */
    c->pc = RC_ADDR(0x000119b6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[1] = t0;

L_119B8:
    /* 000119b8   4  move.w #f4,D0 */
    c->pc = RC_ADDR(0x000119b8u);
    rc_step(c, m, 8);
    t0 = 0x000000f4u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_119BC:
    /* 000119bc   2  clr.w (A1)+ */
    c->pc = RC_ADDR(0x000119bcu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    rc_wr16(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_119BE:
    /* 000119be   4  dbf D0,000119bc */
    c->pc = RC_ADDR(0x000119beu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_119BC; }
    }

L_119C2:
    /* 000119c2   4  move.l A0,(106,A6) */
    c->pc = RC_ADDR(0x000119c2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x106u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_119C6:
    /* 000119c6   4  move.w #203,D0 */
    c->pc = RC_ADDR(0x000119c6u);
    rc_step(c, m, 8);
    t0 = 0x00000203u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_119CA:
    /* 000119ca   2  clr.w (A0)+ */
    c->pc = RC_ADDR(0x000119cau);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    rc_wr16(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_119CC:
    /* 000119cc   4  dbf D0,000119ca */
    c->pc = RC_ADDR(0x000119ccu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_119CA; }
    }

L_119D0:
    /* 000119d0   6  move.w #3f,(36,A6) */
    c->pc = RC_ADDR(0x000119d0u);
    rc_step(c, m, 16);
    t0 = 0x0000003fu;
    rc_wr16(c, m, (c->a[6] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119D6:
    /* 000119d6   6  move.w #8000,(22,A6) */
    c->pc = RC_ADDR(0x000119d6u);
    rc_step(c, m, 16);
    t0 = 0x00008000u;
    rc_wr16(c, m, (c->a[6] + 0x22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119DC:
    /* 000119dc   6  move.w #ff,(0,A6) */
    c->pc = RC_ADDR(0x000119dcu);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119E2:
    /* 000119e2   6  move.w #80,(2,A6) */
    c->pc = RC_ADDR(0x000119e2u);
    rc_step(c, m, 16);
    t0 = 0x00000080u;
    rc_wr16(c, m, (c->a[6] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119E8:
    /* 000119e8   6  move.w #80,(4,A6) */
    c->pc = RC_ADDR(0x000119e8u);
    rc_step(c, m, 16);
    t0 = 0x00000080u;
    rc_wr16(c, m, (c->a[6] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_119EE:
    /* 000119ee   8  move.b #9c,(00bfe401).l */
    c->pc = RC_ADDR(0x000119eeu);
    rc_step(c, m, 20);
    t0 = 0x0000009cu;
    rc_wr8(c, m, 0x00bfe401u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_119F6:
    /* 000119f6   8  move.b #2e,(00bfe501).l */
    c->pc = RC_ADDR(0x000119f6u);
    rc_step(c, m, 20);
    t0 = 0x0000002eu;
    rc_wr8(c, m, 0x00bfe501u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_119FE:
    /* 000119fe   8  move.b #11,(00bfee01).l */
    c->pc = RC_ADDR(0x000119feu);
    rc_step(c, m, 20);
    t0 = 0x00000011u;
    rc_wr8(c, m, 0x00bfee01u, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11A06:
    /* 00011a06   4  move.l (00011a46),D0 */
    c->pc = RC_ADDR(0x00011a06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, RC_ADDR(0x00011a46u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11A0A:
    /* 00011a0a   4  movem.l (SP)+,{ D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00011a0au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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

L_11A0E:
    /* 00011a0e   2  rts */
    c->pc = RC_ADDR(0x00011a0eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
