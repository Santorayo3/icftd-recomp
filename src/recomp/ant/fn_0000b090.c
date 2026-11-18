/* fn_0000b090 - 46 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b090(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b090u): goto L_B090;
    case RC_ADDR(0x0000b094u): goto L_B094;
    case RC_ADDR(0x0000b098u): goto L_B098;
    case RC_ADDR(0x0000b09au): goto L_B09A;
    case RC_ADDR(0x0000b09cu): goto L_B09C;
    case RC_ADDR(0x0000b0a0u): goto L_B0A0;
    case RC_ADDR(0x0000b0a4u): goto L_B0A4;
    case RC_ADDR(0x0000b0a6u): goto L_B0A6;
    case RC_ADDR(0x0000b0aau): goto L_B0AA;
    case RC_ADDR(0x0000b0aeu): goto L_B0AE;
    case RC_ADDR(0x0000b0b2u): goto L_B0B2;
    case RC_ADDR(0x0000b0b6u): goto L_B0B6;
    case RC_ADDR(0x0000b0bau): goto L_B0BA;
    case RC_ADDR(0x0000b0bcu): goto L_B0BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B090:
    /* 0000b090   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b090u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B094:
    /* 0000b094   4  tst.w (fffff7ca,A4) */
    c->pc = RC_ADDR(0x0000b094u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x836u));
    rc_set_nzvc(c, t0, RC_W);

L_B098:
    /* 0000b098   2  bne 0000b0b2 */
    c->pc = RC_ADDR(0x0000b098u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B0B2;

L_B09A:
    /* 0000b09a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b09au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B09C:
    /* 0000b09c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b09cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0A0:
    /* 0000b0a0   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000b0a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_B0A4:
    /* 0000b0a4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b0a4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B0A6:
    /* 0000b0a6   4  move.l (ffffa422,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b0a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0AA:
    /* 0000b0aa   4  jsr (00010714) */
    c->pc = RC_ADDR(0x0000b0aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b0aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010714u);
    return;

L_B0AE:
    /* 0000b0ae   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000b0aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_B0B2:
    /* 0000b0b2   4  movea.l (ffffa428,A4),A0 */
    c->pc = RC_ADDR(0x0000b0b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[0] = t0;

L_B0B6:
    /* 0000b0b6   4  move.w (fffff7cc,A4),(A0) */
    c->pc = RC_ADDR(0x0000b0b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x834u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0BA:
    /* 0000b0ba   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b0bau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B0BC:
    /* 0000b0bc   2  rts */
    c->pc = RC_ADDR(0x0000b0bcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
