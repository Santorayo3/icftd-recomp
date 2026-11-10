/* fn_0000335a - 62 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000335a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000335au): goto L_335A;
    case RC_ADDR(0x0000335eu): goto L_335E;
    case RC_ADDR(0x00003364u): goto L_3364;
    case RC_ADDR(0x00003368u): goto L_3368;
    case RC_ADDR(0x0000336cu): goto L_336C;
    case RC_ADDR(0x0000336eu): goto L_336E;
    case RC_ADDR(0x00003372u): goto L_3372;
    case RC_ADDR(0x00003376u): goto L_3376;
    case RC_ADDR(0x00003378u): goto L_3378;
    case RC_ADDR(0x0000337cu): goto L_337C;
    case RC_ADDR(0x0000337eu): goto L_337E;
    case RC_ADDR(0x00003384u): goto L_3384;
    case RC_ADDR(0x00003388u): goto L_3388;
    case RC_ADDR(0x0000338au): goto L_338A;
    case RC_ADDR(0x0000338eu): goto L_338E;
    case RC_ADDR(0x00003390u): goto L_3390;
    case RC_ADDR(0x00003392u): goto L_3392;
    case RC_ADDR(0x00003394u): goto L_3394;
    case RC_ADDR(0x00003396u): goto L_3396;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_335A:
    /* 0000335a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000335au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_335E:
    /* 0000335e   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000335eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3364:
    /* 00003364   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003364u);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3368:
    /* 00003368   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003368u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_336C:
    /* 0000336c   2  beq 00003396 */
    c->pc = RC_ADDR(0x0000336cu);
    if (rc_cond(c, 7)) goto L_3396;

L_336E:
    /* 0000336e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000336eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3372:
    /* 00003372   4  jsr (00005fbe) */
    c->pc = RC_ADDR(0x00003372u);
    rc_push32(c, m, RC_ADDR(0x00003376u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005fbeu);
    return;

L_3376:
    /* 00003376   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003376u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3378:
    /* 00003378   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00003378u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_337C:
    /* 0000337c   2  beq 00003384 */
    c->pc = RC_ADDR(0x0000337cu);
    if (rc_cond(c, 7)) goto L_3384;

L_337E:
    /* 0000337e   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000337eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3384:
    /* 00003384   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003384u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_3388:
    /* 00003388   2  beq 00003394 */
    c->pc = RC_ADDR(0x00003388u);
    if (rc_cond(c, 7)) goto L_3394;

L_338A:
    /* 0000338a   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x0000338au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_338E:
    /* 0000338e   2  bne 00003394 */
    c->pc = RC_ADDR(0x0000338eu);
    if (rc_cond(c, 6)) goto L_3394;

L_3390:
    /* 00003390   2  unlk A5 */
    c->pc = RC_ADDR(0x00003390u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3392:
    /* 00003392   2  rts */
    c->pc = RC_ADDR(0x00003392u);
    rc_ret(c, m);
    return;

L_3394:
    /* 00003394   2  bra 00003368 */
    c->pc = RC_ADDR(0x00003394u);
    rc_tick();
    goto L_3368;

L_3396:
    /* 00003396   2  bra 00003390 */
    c->pc = RC_ADDR(0x00003396u);
    rc_tick();
    goto L_3390;

}
