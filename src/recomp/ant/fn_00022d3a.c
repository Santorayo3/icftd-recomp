/* fn_00022d3a - 36 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022d3a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022d3au): goto L_22D3A;
    case RC_ADDR(0x00022d3eu): goto L_22D3E;
    case RC_ADDR(0x00022d42u): goto L_22D42;
    case RC_ADDR(0x00022d44u): goto L_22D44;
    case RC_ADDR(0x00022d46u): goto L_22D46;
    case RC_ADDR(0x00022d48u): goto L_22D48;
    case RC_ADDR(0x00022d4cu): goto L_22D4C;
    case RC_ADDR(0x00022d4eu): goto L_22D4E;
    case RC_ADDR(0x00022d50u): goto L_22D50;
    case RC_ADDR(0x00022d54u): goto L_22D54;
    case RC_ADDR(0x00022d56u): goto L_22D56;
    case RC_ADDR(0x00022d58u): goto L_22D58;
    case RC_ADDR(0x00022d5cu): goto L_22D5C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22D3A:
    /* 00022d3a   4  move.w (c,A7),D0 */
    c->pc = RC_ADDR(0x00022d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D3E:
    /* 00022d3e   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x00022d3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_22D42:
    /* 00022d42   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x00022d42u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_22D44:
    /* 00022d44   2  bne 00022d42 */
    c->pc = RC_ADDR(0x00022d44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_22D42; }

L_22D46:
    /* 00022d46   2  subq.w #1,A0 */
    c->pc = RC_ADDR(0x00022d46u);
    rc_step(c, m, 8);
    c->a[0] -= rc_ext(0x00000001u, RC_W);

L_22D48:
    /* 00022d48   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x00022d48u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_22D4C:
    /* 00022d4c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00022d4cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22D4E:
    /* 00022d4e   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00022d4eu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22D50:
    /* 00022d50   4  dbeq D0,00022d4e */
    c->pc = RC_ADDR(0x00022d50u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22D4E; }
    }

L_22D54:
    /* 00022d54   2  beq 00022d58 */
    c->pc = RC_ADDR(0x00022d54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22D58;

L_22D56:
    /* 00022d56   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00022d56u);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22D58:
    /* 00022d58   4  move.l (4,A7),D0 */
    c->pc = RC_ADDR(0x00022d58u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D5C:
    /* 00022d5c   2  rts */
    c->pc = RC_ADDR(0x00022d5cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
