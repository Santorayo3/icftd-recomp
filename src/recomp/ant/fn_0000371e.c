/* fn_0000371e - 62 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000371e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000371eu): goto L_371E;
    case RC_ADDR(0x00003722u): goto L_3722;
    case RC_ADDR(0x00003728u): goto L_3728;
    case RC_ADDR(0x0000372cu): goto L_372C;
    case RC_ADDR(0x00003730u): goto L_3730;
    case RC_ADDR(0x00003732u): goto L_3732;
    case RC_ADDR(0x00003736u): goto L_3736;
    case RC_ADDR(0x0000373au): goto L_373A;
    case RC_ADDR(0x0000373cu): goto L_373C;
    case RC_ADDR(0x00003740u): goto L_3740;
    case RC_ADDR(0x00003742u): goto L_3742;
    case RC_ADDR(0x00003748u): goto L_3748;
    case RC_ADDR(0x0000374cu): goto L_374C;
    case RC_ADDR(0x0000374eu): goto L_374E;
    case RC_ADDR(0x00003752u): goto L_3752;
    case RC_ADDR(0x00003754u): goto L_3754;
    case RC_ADDR(0x00003756u): goto L_3756;
    case RC_ADDR(0x00003758u): goto L_3758;
    case RC_ADDR(0x0000375au): goto L_375A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_371E:
    /* 0000371e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000371eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_3722:
    /* 00003722   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003722u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3728:
    /* 00003728   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003728u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_372C:
    /* 0000372c   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000372cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_3730:
    /* 00003730   2  beq 0000375a */
    c->pc = RC_ADDR(0x00003730u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_375A;

L_3732:
    /* 00003732   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003732u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3736:
    /* 00003736   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00003736u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000373au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_373A:
    /* 0000373a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000373au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_373C:
    /* 0000373c   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000373cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_3740:
    /* 00003740   2  beq 00003748 */
    c->pc = RC_ADDR(0x00003740u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3748;

L_3742:
    /* 00003742   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003742u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3748:
    /* 00003748   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003748u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_374C:
    /* 0000374c   2  beq 00003758 */
    c->pc = RC_ADDR(0x0000374cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3758;

L_374E:
    /* 0000374e   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000374eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_3752:
    /* 00003752   2  bne 00003758 */
    c->pc = RC_ADDR(0x00003752u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_3758;

L_3754:
    /* 00003754   2  unlk A5 */
    c->pc = RC_ADDR(0x00003754u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3756:
    /* 00003756   2  rts */
    c->pc = RC_ADDR(0x00003756u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_3758:
    /* 00003758   2  bra 0000372c */
    c->pc = RC_ADDR(0x00003758u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_372C;

L_375A:
    /* 0000375a   2  bra 00003754 */
    c->pc = RC_ADDR(0x0000375au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_3754;

}
