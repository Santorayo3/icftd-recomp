/* fn_00022d5e - 34 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022d5e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022d5eu): goto L_22D5E;
    case RC_ADDR(0x00022d64u): goto L_22D64;
    case RC_ADDR(0x00022d66u): goto L_22D66;
    case RC_ADDR(0x00022d6au): goto L_22D6A;
    case RC_ADDR(0x00022d6cu): goto L_22D6C;
    case RC_ADDR(0x00022d6eu): goto L_22D6E;
    case RC_ADDR(0x00022d72u): goto L_22D72;
    case RC_ADDR(0x00022d74u): goto L_22D74;
    case RC_ADDR(0x00022d76u): goto L_22D76;
    case RC_ADDR(0x00022d78u): goto L_22D78;
    case RC_ADDR(0x00022d7au): goto L_22D7A;
    case RC_ADDR(0x00022d7eu): goto L_22D7E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22D5E:
    /* 00022d5e   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00022d5eu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_22D64:
    /* 00022d64   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x00022d64u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D66:
    /* 00022d66   4  move.w (c,A7),D1 */
    c->pc = RC_ADDR(0x00022d66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D6A:
    /* 00022d6a   2  bra 00022d6e */
    c->pc = RC_ADDR(0x00022d6au);
    rc_step(c, m, 10);
    goto L_22D6E;

L_22D6C:
    /* 00022d6c   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x00022d6cu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_22D6E:
    /* 00022d6e   4  dbeq D1,00022d6c */
    c->pc = RC_ADDR(0x00022d6eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22D6C; }
    }

L_22D72:
    /* 00022d72   2  beq 00022d7a */
    c->pc = RC_ADDR(0x00022d72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22D7A;

L_22D74:
    /* 00022d74   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x00022d74u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_22D76:
    /* 00022d76   2  bra 00022d7a */
    c->pc = RC_ADDR(0x00022d76u);
    rc_step(c, m, 10);
    goto L_22D7A;

L_22D78:
    /* 00022d78   2  clr.b (A0)+ */
    c->pc = RC_ADDR(0x00022d78u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_22D7A:
    /* 00022d7a   4  dbf D1,00022d78 */
    c->pc = RC_ADDR(0x00022d7au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_22D78; }
    }

L_22D7E:
    /* 00022d7e   2  rts */
    c->pc = RC_ADDR(0x00022d7eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
