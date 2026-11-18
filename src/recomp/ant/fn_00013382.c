/* fn_00013382 - 92 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013382(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013382u): goto L_13382;
    case RC_ADDR(0x00013386u): goto L_13386;
    case RC_ADDR(0x0001338au): goto L_1338A;
    case RC_ADDR(0x0001338eu): goto L_1338E;
    case RC_ADDR(0x00013394u): goto L_13394;
    case RC_ADDR(0x00013398u): goto L_13398;
    case RC_ADDR(0x0001339eu): goto L_1339E;
    case RC_ADDR(0x000133a4u): goto L_133A4;
    case RC_ADDR(0x000133a6u): goto L_133A6;
    case RC_ADDR(0x000133a8u): goto L_133A8;
    case RC_ADDR(0x000133aeu): goto L_133AE;
    case RC_ADDR(0x000133b2u): goto L_133B2;
    case RC_ADDR(0x000133b4u): goto L_133B4;
    case RC_ADDR(0x000133bau): goto L_133BA;
    case RC_ADDR(0x000133c0u): goto L_133C0;
    case RC_ADDR(0x000133c8u): goto L_133C8;
    case RC_ADDR(0x000133cau): goto L_133CA;
    case RC_ADDR(0x000133ccu): goto L_133CC;
    case RC_ADDR(0x000133d0u): goto L_133D0;
    case RC_ADDR(0x000133d2u): goto L_133D2;
    case RC_ADDR(0x000133d4u): goto L_133D4;
    case RC_ADDR(0x000133d8u): goto L_133D8;
    case RC_ADDR(0x000133dcu): goto L_133DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13382:
    /* 00013382   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00013382u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_13386:
    /* 00013386   4  bsr 00013258 */
    c->pc = RC_ADDR(0x00013386u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001338au));
    rc_depth++;
    c->pc = RC_ADDR(0x00013258u);
    return;

L_1338A:
    /* 0001338a   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001338au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_1338E:
    /* 0001338e   6  adda.l #26,A0 */
    c->pc = RC_ADDR(0x0001338eu);
    rc_step(c, m, 16);
    t0 = 0x00000026u;
    c->a[0] += t0;

L_13394:
    /* 00013394   4  move.w (17e6,A4),D7 */
    c->pc = RC_ADDR(0x00013394u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e6u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13398:
    /* 00013398   6  adda.l #1db0,A2 */
    c->pc = RC_ADDR(0x00013398u);
    rc_step(c, m, 16);
    t0 = 0x00001db0u;
    c->a[2] += t0;

L_1339E:
    /* 0001339e   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x0001339eu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_133A4:
    /* 000133a4   2  clr.l D0 */
    c->pc = RC_ADDR(0x000133a4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_133A6:
    /* 000133a6   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x000133a6u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133A8:
    /* 000133a8   6  adda.l #28,A0 */
    c->pc = RC_ADDR(0x000133a8u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[0] += t0;

L_133AE:
    /* 000133ae   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x000133aeu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133B2:
    /* 000133b2   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x000133b2u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_133B4:
    /* 000133b4   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x000133b4u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_133BA:
    /* 000133ba   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x000133bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133C0:
    /* 000133c0   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000133c0u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_133C8:
    /* 000133c8   2  bne 000133c0 */
    c->pc = RC_ADDR(0x000133c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_133C0; }

L_133CA:
    /* 000133ca   2  adda.l D3,A2 */
    c->pc = RC_ADDR(0x000133cau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_133CC:
    /* 000133cc   4  dbf D7,0001339e */
    c->pc = RC_ADDR(0x000133ccu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1339E; }
    }

L_133D0:
    /* 000133d0   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x000133d0u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_133D2:
    /* 000133d2   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x000133d2u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_133D4:
    /* 000133d4   4  dbf D2,0001338a */
    c->pc = RC_ADDR(0x000133d4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1338A; }
    }

L_133D8:
    /* 000133d8   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x000133d8u);
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

L_133DC:
    /* 000133dc   2  rts */
    c->pc = RC_ADDR(0x000133dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
