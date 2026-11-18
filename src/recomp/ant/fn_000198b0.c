/* fn_000198b0 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000198b0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000198b0u): goto L_198B0;
    case RC_ADDR(0x000198b4u): goto L_198B4;
    case RC_ADDR(0x000198b8u): goto L_198B8;
    case RC_ADDR(0x000198bcu): goto L_198BC;
    case RC_ADDR(0x000198c0u): goto L_198C0;
    case RC_ADDR(0x000198c2u): goto L_198C2;
    case RC_ADDR(0x000198c6u): goto L_198C6;
    case RC_ADDR(0x000198cau): goto L_198CA;
    case RC_ADDR(0x000198ceu): goto L_198CE;
    case RC_ADDR(0x000198d0u): goto L_198D0;
    case RC_ADDR(0x000198d2u): goto L_198D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_198B0:
    /* 000198b0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000198b0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_198B4:
    /* 000198b4   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x000198b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_198B8:
    /* 000198b8   4  pea (00000005).l */
    c->pc = RC_ADDR(0x000198b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_198BC:
    /* 000198bc   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x000198bcu);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x000198c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237e6u);
    return;

L_198C0:
    /* 000198c0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000198c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_198C2:
    /* 000198c2   4  pea (00000016).l */
    c->pc = RC_ADDR(0x000198c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_198C6:
    /* 000198c6   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x000198c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_198CA:
    /* 000198ca   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000198cau);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000198ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_198CE:
    /* 000198ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000198ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_198D0:
    /* 000198d0   2  unlk A5 */
    c->pc = RC_ADDR(0x000198d0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_198D2:
    /* 000198d2   2  rts */
    c->pc = RC_ADDR(0x000198d2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
