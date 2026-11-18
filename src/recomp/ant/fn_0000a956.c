/* fn_0000a956 - 44 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a956(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a956u): goto L_A956;
    case RC_ADDR(0x0000a95au): goto L_A95A;
    case RC_ADDR(0x0000a95eu): goto L_A95E;
    case RC_ADDR(0x0000a960u): goto L_A960;
    case RC_ADDR(0x0000a964u): goto L_A964;
    case RC_ADDR(0x0000a968u): goto L_A968;
    case RC_ADDR(0x0000a96au): goto L_A96A;
    case RC_ADDR(0x0000a96eu): goto L_A96E;
    case RC_ADDR(0x0000a970u): goto L_A970;
    case RC_ADDR(0x0000a974u): goto L_A974;
    case RC_ADDR(0x0000a978u): goto L_A978;
    case RC_ADDR(0x0000a97cu): goto L_A97C;
    case RC_ADDR(0x0000a97eu): goto L_A97E;
    case RC_ADDR(0x0000a980u): goto L_A980;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A956:
    /* 0000a956   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000a956u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_A95A:
    /* 0000a95a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a95au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A95E:
    /* 0000a95e   2  bra 0000a974 */
    c->pc = RC_ADDR(0x0000a95eu);
    rc_step(c, m, 10);
    goto L_A974;

L_A960:
    /* 0000a960   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a960u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A964:
    /* 0000a964   4  add.w #f0,D0 */
    c->pc = RC_ADDR(0x0000a964u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A968:
    /* 0000a968   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000a968u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A96A:
    /* 0000a96a   4  jsr (00008054) */
    c->pc = RC_ADDR(0x0000a96au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a96eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_A96E:
    /* 0000a96e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a96eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A970:
    /* 0000a970   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a970u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A974:
    /* 0000a974   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a974u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A978:
    /* 0000a978   4  cmp.w (fffff85c,A4),D0 */
    c->pc = RC_ADDR(0x0000a978u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_A97C:
    /* 0000a97c   2  blt 0000a960 */
    c->pc = RC_ADDR(0x0000a97cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_A960; }

L_A97E:
    /* 0000a97e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a97eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A980:
    /* 0000a980   2  rts */
    c->pc = RC_ADDR(0x0000a980u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
