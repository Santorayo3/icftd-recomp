/* fn_00013298 - 70 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013298(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013298u): goto L_13298;
    case RC_ADDR(0x0001329cu): goto L_1329C;
    case RC_ADDR(0x0001329eu): goto L_1329E;
    case RC_ADDR(0x000132a2u): goto L_132A2;
    case RC_ADDR(0x000132a6u): goto L_132A6;
    case RC_ADDR(0x000132acu): goto L_132AC;
    case RC_ADDR(0x000132aeu): goto L_132AE;
    case RC_ADDR(0x000132b0u): goto L_132B0;
    case RC_ADDR(0x000132b4u): goto L_132B4;
    case RC_ADDR(0x000132b6u): goto L_132B6;
    case RC_ADDR(0x000132bcu): goto L_132BC;
    case RC_ADDR(0x000132c2u): goto L_132C2;
    case RC_ADDR(0x000132cau): goto L_132CA;
    case RC_ADDR(0x000132ccu): goto L_132CC;
    case RC_ADDR(0x000132d0u): goto L_132D0;
    case RC_ADDR(0x000132d2u): goto L_132D2;
    case RC_ADDR(0x000132d4u): goto L_132D4;
    case RC_ADDR(0x000132d8u): goto L_132D8;
    case RC_ADDR(0x000132dcu): goto L_132DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13298:
    /* 00013298   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00013298u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_1329C:
    /* 0001329c   2  bsr 00013258 */
    c->pc = RC_ADDR(0x0001329cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001329eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013258u);
    return;

L_1329E:
    /* 0001329e   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001329eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_132A2:
    /* 000132a2   4  move.w (17e4,A4),D6 */
    c->pc = RC_ADDR(0x000132a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e4u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132A6:
    /* 000132a6   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000132a6u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_132AC:
    /* 000132ac   2  clr.l D0 */
    c->pc = RC_ADDR(0x000132acu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_132AE:
    /* 000132ae   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x000132aeu);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132B0:
    /* 000132b0   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x000132b0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132B4:
    /* 000132b4   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x000132b4u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_132B6:
    /* 000132b6   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x000132b6u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_132BC:
    /* 000132bc   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x000132bcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_132C2:
    /* 000132c2   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000132c2u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_132CA:
    /* 000132ca   2  bne 000132c2 */
    c->pc = RC_ADDR(0x000132cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_132C2; }

L_132CC:
    /* 000132cc   4  dbf D6,000132ac */
    c->pc = RC_ADDR(0x000132ccu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_132AC; }
    }

L_132D0:
    /* 000132d0   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x000132d0u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_132D2:
    /* 000132d2   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x000132d2u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_132D4:
    /* 000132d4   4  dbf D2,0001329e */
    c->pc = RC_ADDR(0x000132d4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1329E; }
    }

L_132D8:
    /* 000132d8   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x000132d8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_132DC:
    /* 000132dc   2  rts */
    c->pc = RC_ADDR(0x000132dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
