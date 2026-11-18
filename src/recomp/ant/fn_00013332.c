/* fn_00013332 - 80 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013332(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013332u): goto L_13332;
    case RC_ADDR(0x00013336u): goto L_13336;
    case RC_ADDR(0x0001333au): goto L_1333A;
    case RC_ADDR(0x0001333eu): goto L_1333E;
    case RC_ADDR(0x00013342u): goto L_13342;
    case RC_ADDR(0x00013348u): goto L_13348;
    case RC_ADDR(0x0001334au): goto L_1334A;
    case RC_ADDR(0x0001334cu): goto L_1334C;
    case RC_ADDR(0x00013352u): goto L_13352;
    case RC_ADDR(0x00013356u): goto L_13356;
    case RC_ADDR(0x00013358u): goto L_13358;
    case RC_ADDR(0x0001335eu): goto L_1335E;
    case RC_ADDR(0x00013364u): goto L_13364;
    case RC_ADDR(0x0001336cu): goto L_1336C;
    case RC_ADDR(0x0001336eu): goto L_1336E;
    case RC_ADDR(0x00013370u): goto L_13370;
    case RC_ADDR(0x00013374u): goto L_13374;
    case RC_ADDR(0x00013376u): goto L_13376;
    case RC_ADDR(0x00013378u): goto L_13378;
    case RC_ADDR(0x0001337cu): goto L_1337C;
    case RC_ADDR(0x00013380u): goto L_13380;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13332:
    /* 00013332   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00013332u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_13336:
    /* 00013336   4  bsr 00013258 */
    c->pc = RC_ADDR(0x00013336u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001333au));
    rc_depth++;
    c->pc = RC_ADDR(0x00013258u);
    return;

L_1333A:
    /* 0001333a   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0001333au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_1333E:
    /* 0001333e   4  move.w (17e6,A4),D7 */
    c->pc = RC_ADDR(0x0001333eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e6u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13342:
    /* 00013342   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00013342u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13348:
    /* 00013348   2  clr.l D0 */
    c->pc = RC_ADDR(0x00013348u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1334A:
    /* 0001334a   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0001334au);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1334C:
    /* 0001334c   6  adda.l #28,A0 */
    c->pc = RC_ADDR(0x0001334cu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[0] += t0;

L_13352:
    /* 00013352   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00013352u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13356:
    /* 00013356   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x00013356u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_13358:
    /* 00013358   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x00013358u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1335E:
    /* 0001335e   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x0001335eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13364:
    /* 00013364   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00013364u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1336C:
    /* 0001336c   2  bne 00013364 */
    c->pc = RC_ADDR(0x0001336cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13364; }

L_1336E:
    /* 0001336e   2  adda.l D3,A2 */
    c->pc = RC_ADDR(0x0001336eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_13370:
    /* 00013370   4  dbf D7,00013342 */
    c->pc = RC_ADDR(0x00013370u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13342; }
    }

L_13374:
    /* 00013374   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00013374u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_13376:
    /* 00013376   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00013376u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_13378:
    /* 00013378   4  dbf D2,0001333a */
    c->pc = RC_ADDR(0x00013378u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1333A; }
    }

L_1337C:
    /* 0001337c   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x0001337cu);
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

L_13380:
    /* 00013380   2  rts */
    c->pc = RC_ADDR(0x00013380u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
