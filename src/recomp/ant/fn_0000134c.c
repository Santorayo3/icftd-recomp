/* fn_0000134c - 72 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000134c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000134cu): goto L_134C;
    case RC_ADDR(0x00001350u): goto L_1350;
    case RC_ADDR(0x00001354u): goto L_1354;
    case RC_ADDR(0x00001358u): goto L_1358;
    case RC_ADDR(0x0000135cu): goto L_135C;
    case RC_ADDR(0x00001360u): goto L_1360;
    case RC_ADDR(0x00001364u): goto L_1364;
    case RC_ADDR(0x00001366u): goto L_1366;
    case RC_ADDR(0x0000136au): goto L_136A;
    case RC_ADDR(0x0000136cu): goto L_136C;
    case RC_ADDR(0x00001370u): goto L_1370;
    case RC_ADDR(0x00001374u): goto L_1374;
    case RC_ADDR(0x00001378u): goto L_1378;
    case RC_ADDR(0x0000137cu): goto L_137C;
    case RC_ADDR(0x0000137eu): goto L_137E;
    case RC_ADDR(0x00001382u): goto L_1382;
    case RC_ADDR(0x00001386u): goto L_1386;
    case RC_ADDR(0x0000138au): goto L_138A;
    case RC_ADDR(0x0000138eu): goto L_138E;
    case RC_ADDR(0x00001390u): goto L_1390;
    case RC_ADDR(0x00001392u): goto L_1392;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_134C:
    /* 0000134c   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000134cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1350:
    /* 00001350   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00001350u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1354:
    /* 00001354   4  pea (fffffffe,A5) */
    c->pc = RC_ADDR(0x00001354u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x2u));

L_1358:
    /* 00001358   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001358u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_135C:
    /* 0000135c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000135cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1360:
    /* 00001360   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001360u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1364:
    /* 00001364   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001364u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1366:
    /* 00001366   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_136A:
    /* 0000136a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000136au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_136C:
    /* 0000136c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000136cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1370:
    /* 00001370   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001370u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1374:
    /* 00001374   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001374u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001378u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1378:
    /* 00001378   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001378u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_137C:
    /* 0000137c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000137cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_137E:
    /* 0000137e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000137eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1382:
    /* 00001382   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00001382u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1386:
    /* 00001386   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001386u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_138A:
    /* 0000138a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000138au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138E:
    /* 0000138e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000138eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1390:
    /* 00001390   2  unlk A5 */
    c->pc = RC_ADDR(0x00001390u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1392:
    /* 00001392   2  rts */
    c->pc = RC_ADDR(0x00001392u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
