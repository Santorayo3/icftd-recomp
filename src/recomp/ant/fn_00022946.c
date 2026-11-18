/* fn_00022946 - 20 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022946(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022946u): goto L_22946;
    case RC_ADDR(0x0002294au): goto L_2294A;
    case RC_ADDR(0x00022950u): goto L_22950;
    case RC_ADDR(0x00022952u): goto L_22952;
    case RC_ADDR(0x00022954u): goto L_22954;
    case RC_ADDR(0x00022958u): goto L_22958;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22946:
    /* 00022946   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00022946u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2294A:
    /* 0002294a   6  movem.w (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x0002294au);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd16(c, m, t3);
    t0 = rc_ext(t0, RC_W);
    c->d[0] = t0;
    t3 += 2u;
    t0 = rc_rd16(c, m, t3);
    t0 = rc_ext(t0, RC_W);
    c->d[1] = t0;
    t3 += 2u;

L_22950:
    /* 00022950   2  bra 00022954 */
    c->pc = RC_ADDR(0x00022950u);
    rc_step(c, m, 10);
    goto L_22954;

L_22952:
    /* 00022952   2  move.b D1,(A0)+ */
    c->pc = RC_ADDR(0x00022952u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_B);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22954:
    /* 00022954   4  dbf D0,00022952 */
    c->pc = RC_ADDR(0x00022954u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22952; }
    }

L_22958:
    /* 00022958   2  rts */
    c->pc = RC_ADDR(0x00022958u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
