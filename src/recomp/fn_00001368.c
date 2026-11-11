/* fn_00001368 - 42 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001368(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001368u): goto L_1368;
    case RC_ADDR(0x0000136cu): goto L_136C;
    case RC_ADDR(0x0000136eu): goto L_136E;
    case RC_ADDR(0x00001374u): goto L_1374;
    case RC_ADDR(0x00001378u): goto L_1378;
    case RC_ADDR(0x0000137cu): goto L_137C;
    case RC_ADDR(0x0000137eu): goto L_137E;
    case RC_ADDR(0x00001382u): goto L_1382;
    case RC_ADDR(0x00001386u): goto L_1386;
    case RC_ADDR(0x0000138au): goto L_138A;
    case RC_ADDR(0x00001390u): goto L_1390;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1368:
    /* 00001368   4  tst.w (ffffffd8,A5) */
    c->pc = RC_ADDR(0x00001368u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x28u));
    rc_set_nzvc(c, t0, RC_W);

L_136C:
    /* 0000136c   2  beq 00001392 */
    c->pc = RC_ADDR(0x0000136cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00001392u);
        return;
    }

L_136E:
    /* 0000136e   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000136eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1374:
    /* 00001374   4  pea (0000000e).l */
    c->pc = RC_ADDR(0x00001374u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000eu);

L_1378:
    /* 00001378   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00001378u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000137cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_137C:
    /* 0000137c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000137cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_137E:
    /* 0000137e   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0000137eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1382:
    /* 00001382   4  move.l D0,(8,A0) */
    c->pc = RC_ADDR(0x00001382u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1386:
    /* 00001386   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00001386u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_138A:
    /* 0000138a   6  move.l (8,A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000138au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1390:
    /* 00001390   2  bra 000013ae */
    c->pc = RC_ADDR(0x00001390u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000013aeu);
    return;

}
