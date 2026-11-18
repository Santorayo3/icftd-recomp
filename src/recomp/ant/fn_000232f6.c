/* fn_000232f6 - 30 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000232f6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000232f6u): goto L_232F6;
    case RC_ADDR(0x000232fau): goto L_232FA;
    case RC_ADDR(0x000232feu): goto L_232FE;
    case RC_ADDR(0x00023300u): goto L_23300;
    case RC_ADDR(0x00023304u): goto L_23304;
    case RC_ADDR(0x00023306u): goto L_23306;
    case RC_ADDR(0x0002330au): goto L_2330A;
    case RC_ADDR(0x0002330eu): goto L_2330E;
    case RC_ADDR(0x00023310u): goto L_23310;
    case RC_ADDR(0x00023312u): goto L_23312;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_232F6:
    /* 000232f6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000232f6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_232FA:
    /* 000232fa   4  tst.l (454a,A4) */
    c->pc = RC_ADDR(0x000232fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x454au));
    rc_set_nzvc(c, t0, RC_L);

L_232FE:
    /* 000232fe   2  beq 00023306 */
    c->pc = RC_ADDR(0x000232feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23306;

L_23300:
    /* 00023300   4  movea.l (454a,A4),A0 */
    c->pc = RC_ADDR(0x00023300u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x454au));
    c->a[0] = t0;

L_23304:
    /* 00023304   2  jsr (A0) */
    c->pc = RC_ADDR(0x00023304u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023306u));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_23306:
    /* 00023306   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00023306u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2330A:
    /* 0002330a   4  jsr (00023314) */
    c->pc = RC_ADDR(0x0002330au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002330eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023314u);
    return;

L_2330E:
    /* 0002330e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0002330eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_23310:
    /* 00023310   2  unlk A5 */
    c->pc = RC_ADDR(0x00023310u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23312:
    /* 00023312   2  rts */
    c->pc = RC_ADDR(0x00023312u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
