/* fn_00015888 - 48 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015888(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00015888u): goto L_15888;
    case RC_ADDR(0x0001588cu): goto L_1588C;
    case RC_ADDR(0x00015890u): goto L_15890;
    case RC_ADDR(0x00015894u): goto L_15894;
    case RC_ADDR(0x00015898u): goto L_15898;
    case RC_ADDR(0x0001589cu): goto L_1589C;
    case RC_ADDR(0x000158a0u): goto L_158A0;
    case RC_ADDR(0x000158a4u): goto L_158A4;
    case RC_ADDR(0x000158a8u): goto L_158A8;
    case RC_ADDR(0x000158acu): goto L_158AC;
    case RC_ADDR(0x000158b0u): goto L_158B0;
    case RC_ADDR(0x000158b4u): goto L_158B4;
    case RC_ADDR(0x000158b6u): goto L_158B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15888:
    /* 00015888   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015888u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1588C:
    /* 0001588c   4  pea (1ade,A4) */
    c->pc = RC_ADDR(0x0001588cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1adeu));

L_15890:
    /* 00015890   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x00015890u);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15894:
    /* 00015894   4  pea (000158b8) */
    c->pc = RC_ADDR(0x00015894u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000158b8u));

L_15898:
    /* 00015898   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x00015898u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001589cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1589C:
    /* 0001589c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001589cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_158A0:
    /* 000158a0   4  pea (1a82,A4) */
    c->pc = RC_ADDR(0x000158a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1a82u));

L_158A4:
    /* 000158a4   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x000158a4u);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_158A8:
    /* 000158a8   4  pea (000158bd) */
    c->pc = RC_ADDR(0x000158a8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000158bdu));

L_158AC:
    /* 000158ac   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x000158acu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x000158b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_158B0:
    /* 000158b0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000158b0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_158B4:
    /* 000158b4   2  unlk A5 */
    c->pc = RC_ADDR(0x000158b4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_158B6:
    /* 000158b6   2  rts */
    c->pc = RC_ADDR(0x000158b6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
