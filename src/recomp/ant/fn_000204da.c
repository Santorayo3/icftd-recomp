/* fn_000204da - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000204da(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000204dau): goto L_204DA;
    case RC_ADDR(0x000204deu): goto L_204DE;
    case RC_ADDR(0x000204e2u): goto L_204E2;
    case RC_ADDR(0x000204e6u): goto L_204E6;
    case RC_ADDR(0x000204eau): goto L_204EA;
    case RC_ADDR(0x000204ecu): goto L_204EC;
    case RC_ADDR(0x000204eeu): goto L_204EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_204DA:
    /* 000204da   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000204dau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_204DE:
    /* 000204de   4  pea (ffffd582,A4) */
    c->pc = RC_ADDR(0x000204deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2a7eu));

L_204E2:
    /* 000204e2   4  pea (00000005).l */
    c->pc = RC_ADDR(0x000204e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_204E6:
    /* 000204e6   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x000204e6u);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x000204eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237e6u);
    return;

L_204EA:
    /* 000204ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000204eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_204EC:
    /* 000204ec   2  unlk A5 */
    c->pc = RC_ADDR(0x000204ecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_204EE:
    /* 000204ee   2  rts */
    c->pc = RC_ADDR(0x000204eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
