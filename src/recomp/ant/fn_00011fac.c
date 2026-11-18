/* fn_00011fac - 76 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011fac(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011facu): goto L_11FAC;
    case RC_ADDR(0x00011fb0u): goto L_11FB0;
    case RC_ADDR(0x00011fb4u): goto L_11FB4;
    case RC_ADDR(0x00011fb6u): goto L_11FB6;
    case RC_ADDR(0x00011fbcu): goto L_11FBC;
    case RC_ADDR(0x00011fc0u): goto L_11FC0;
    case RC_ADDR(0x00011fc2u): goto L_11FC2;
    case RC_ADDR(0x00011fc6u): goto L_11FC6;
    case RC_ADDR(0x00011fc8u): goto L_11FC8;
    case RC_ADDR(0x00011fccu): goto L_11FCC;
    case RC_ADDR(0x00011fceu): goto L_11FCE;
    case RC_ADDR(0x00011fd0u): goto L_11FD0;
    case RC_ADDR(0x00011fd4u): goto L_11FD4;
    case RC_ADDR(0x00011fd6u): goto L_11FD6;
    case RC_ADDR(0x00011fdau): goto L_11FDA;
    case RC_ADDR(0x00011fdcu): goto L_11FDC;
    case RC_ADDR(0x00011fe0u): goto L_11FE0;
    case RC_ADDR(0x00011fe2u): goto L_11FE2;
    case RC_ADDR(0x00011fe6u): goto L_11FE6;
    case RC_ADDR(0x00011fe8u): goto L_11FE8;
    case RC_ADDR(0x00011fecu): goto L_11FEC;
    case RC_ADDR(0x00011ff0u): goto L_11FF0;
    case RC_ADDR(0x00011ff4u): goto L_11FF4;
    case RC_ADDR(0x00011ff6u): goto L_11FF6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11FAC:
    /* 00011fac   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011facu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11FB0:
    /* 00011fb0   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x00011fb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_11FB4:
    /* 00011fb4   2  beq 00011fec */
    c->pc = RC_ADDR(0x00011fb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11FEC;

L_11FB6:
    /* 00011fb6   6  move.w #1,(ffff83ea,A4) */
    c->pc = RC_ADDR(0x00011fb6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FBC:
    /* 00011fbc   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x00011fbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_11FC0:
    /* 00011fc0   2  beq 00011fc8 */
    c->pc = RC_ADDR(0x00011fc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11FC8;

L_11FC2:
    /* 00011fc2   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011fc2u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011fc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11FC6:
    /* 00011fc6   2  bra 00011fbc */
    c->pc = RC_ADDR(0x00011fc6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11FBC;

L_11FC8:
    /* 00011fc8   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011fc8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11FCC:
    /* 00011fcc   2  bsr 00011f88 */
    c->pc = RC_ADDR(0x00011fccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011fceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011f88u);
    return;

L_11FCE:
    /* 00011fce   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00011fceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_11FD0:
    /* 00011fd0   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x00011fd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_11FD4:
    /* 00011fd4   2  bne 00011fdc */
    c->pc = RC_ADDR(0x00011fd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11FDC;

L_11FD6:
    /* 00011fd6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011fd6u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011fdau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11FDA:
    /* 00011fda   2  bra 00011fd0 */
    c->pc = RC_ADDR(0x00011fdau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11FD0;

L_11FDC:
    /* 00011fdc   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x00011fdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_11FE0:
    /* 00011fe0   2  beq 00011fe8 */
    c->pc = RC_ADDR(0x00011fe0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11FE8;

L_11FE2:
    /* 00011fe2   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011fe2u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011fe6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11FE6:
    /* 00011fe6   2  bra 00011fdc */
    c->pc = RC_ADDR(0x00011fe6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11FDC;

L_11FE8:
    /* 00011fe8   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x00011fe8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11FEC:
    /* 00011fec   4  clr.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00011fecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11FF0:
    /* 00011ff0   4  clr.w (ffffd5b6,A4) */
    c->pc = RC_ADDR(0x00011ff0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11FF4:
    /* 00011ff4   2  unlk A5 */
    c->pc = RC_ADDR(0x00011ff4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11FF6:
    /* 00011ff6   2  rts */
    c->pc = RC_ADDR(0x00011ff6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
