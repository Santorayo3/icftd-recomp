/* fn_0000a922 - 52 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a922(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a922u): goto L_A922;
    case RC_ADDR(0x0000a926u): goto L_A926;
    case RC_ADDR(0x0000a92cu): goto L_A92C;
    case RC_ADDR(0x0000a930u): goto L_A930;
    case RC_ADDR(0x0000a932u): goto L_A932;
    case RC_ADDR(0x0000a936u): goto L_A936;
    case RC_ADDR(0x0000a93au): goto L_A93A;
    case RC_ADDR(0x0000a93eu): goto L_A93E;
    case RC_ADDR(0x0000a944u): goto L_A944;
    case RC_ADDR(0x0000a948u): goto L_A948;
    case RC_ADDR(0x0000a94cu): goto L_A94C;
    case RC_ADDR(0x0000a950u): goto L_A950;
    case RC_ADDR(0x0000a952u): goto L_A952;
    case RC_ADDR(0x0000a954u): goto L_A954;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A922:
    /* 0000a922   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000a922u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_A926:
    /* 0000a926   6  move.w #4,(fffff85c,A4) */
    c->pc = RC_ADDR(0x0000a926u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x7a4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A92C:
    /* 0000a92c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a92cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A930:
    /* 0000a930   2  bra 0000a948 */
    c->pc = RC_ADDR(0x0000a930u);
    rc_step(c, m, 10);
    goto L_A948;

L_A932:
    /* 0000a932   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a932u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A936:
    /* 0000a936   4  add.w #f0,D0 */
    c->pc = RC_ADDR(0x0000a936u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A93A:
    /* 0000a93a   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x0000a93au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_A93E:
    /* 0000a93e   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a93eu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_A944:
    /* 0000a944   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a944u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A948:
    /* 0000a948   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a948u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A94C:
    /* 0000a94c   4  cmp.w (fffff85c,A4),D0 */
    c->pc = RC_ADDR(0x0000a94cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_A950:
    /* 0000a950   2  blt 0000a932 */
    c->pc = RC_ADDR(0x0000a950u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_A932; }

L_A952:
    /* 0000a952   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a952u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A954:
    /* 0000a954   2  rts */
    c->pc = RC_ADDR(0x0000a954u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
