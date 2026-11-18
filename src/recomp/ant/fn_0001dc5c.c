/* fn_0001dc5c - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dc5c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dc5cu): goto L_1DC5C;
    case RC_ADDR(0x0001dc60u): goto L_1DC60;
    case RC_ADDR(0x0001dc64u): goto L_1DC64;
    case RC_ADDR(0x0001dc68u): goto L_1DC68;
    case RC_ADDR(0x0001dc6cu): goto L_1DC6C;
    case RC_ADDR(0x0001dc6eu): goto L_1DC6E;
    case RC_ADDR(0x0001dc72u): goto L_1DC72;
    case RC_ADDR(0x0001dc76u): goto L_1DC76;
    case RC_ADDR(0x0001dc7au): goto L_1DC7A;
    case RC_ADDR(0x0001dc7cu): goto L_1DC7C;
    case RC_ADDR(0x0001dc7eu): goto L_1DC7E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DC5C:
    /* 0001dc5c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dc5cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DC60:
    /* 0001dc60   4  move.l (2cae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dc60u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC64:
    /* 0001dc64   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001dc64u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_1DC68:
    /* 0001dc68   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x0001dc68u);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x0001dc6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237e6u);
    return;

L_1DC6C:
    /* 0001dc6c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001dc6cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DC6E:
    /* 0001dc6e   4  pea (00000016).l */
    c->pc = RC_ADDR(0x0001dc6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_1DC72:
    /* 0001dc72   4  move.l (2cae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dc72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC76:
    /* 0001dc76   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001dc76u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001dc7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1DC7A:
    /* 0001dc7a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001dc7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DC7C:
    /* 0001dc7c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dc7cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DC7E:
    /* 0001dc7e   2  rts */
    c->pc = RC_ADDR(0x0001dc7eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
