/* fn_00005bfc - 68 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005bfc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00005bfcu): goto L_5BFC;
    case RC_ADDR(0x00005c00u): goto L_5C00;
    case RC_ADDR(0x00005c04u): goto L_5C04;
    case RC_ADDR(0x00005c08u): goto L_5C08;
    case RC_ADDR(0x00005c0cu): goto L_5C0C;
    case RC_ADDR(0x00005c0eu): goto L_5C0E;
    case RC_ADDR(0x00005c12u): goto L_5C12;
    case RC_ADDR(0x00005c14u): goto L_5C14;
    case RC_ADDR(0x00005c18u): goto L_5C18;
    case RC_ADDR(0x00005c1cu): goto L_5C1C;
    case RC_ADDR(0x00005c20u): goto L_5C20;
    case RC_ADDR(0x00005c24u): goto L_5C24;
    case RC_ADDR(0x00005c28u): goto L_5C28;
    case RC_ADDR(0x00005c2cu): goto L_5C2C;
    case RC_ADDR(0x00005c30u): goto L_5C30;
    case RC_ADDR(0x00005c34u): goto L_5C34;
    case RC_ADDR(0x00005c38u): goto L_5C38;
    case RC_ADDR(0x00005c3cu): goto L_5C3C;
    case RC_ADDR(0x00005c3eu): goto L_5C3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5BFC:
    /* 00005bfc   4  link.w A5,#ffffffce */
    c->pc = RC_ADDR(0x00005bfcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x32u;

L_5C00:
    /* 00005c00   4  move.l (ffffd5a4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005c00u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2a5cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5C04:
    /* 00005c04   4  move.w (ffff83e8,A4),-(A7) */
    c->pc = RC_ADDR(0x00005c04u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c18u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C08:
    /* 00005c08   4  move.w (ffffd5a2,A4),-(A7) */
    c->pc = RC_ADDR(0x00005c08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a5eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C0C:
    /* 00005c0c   2  moveq #f,D0 */
    c->pc = RC_ADDR(0x00005c0cu);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000fu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5C0E:
    /* 00005c0e   4  sub.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00005c0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5C12:
    /* 00005c12   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00005c12u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C14:
    /* 00005c14   4  pea (00005c40) */
    c->pc = RC_ADDR(0x00005c14u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00005c40u));

L_5C18:
    /* 00005c18   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00005c18u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_5C1C:
    /* 00005c1c   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x00005c1cu);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x00005c20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_5C20:
    /* 00005c20   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x00005c20u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_5C24:
    /* 00005c24   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005c24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C28:
    /* 00005c28   4  move.w (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00005c28u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C2C:
    /* 00005c2c   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005c2cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5C30:
    /* 00005c30   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00005c30u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_5C34:
    /* 00005c34   4  jsr (00005468) */
    c->pc = RC_ADDR(0x00005c34u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005c38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005468u);
    return;

L_5C38:
    /* 00005c38   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00005c38u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_5C3C:
    /* 00005c3c   2  unlk A5 */
    c->pc = RC_ADDR(0x00005c3cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5C3E:
    /* 00005c3e   2  rts */
    c->pc = RC_ADDR(0x00005c3eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
