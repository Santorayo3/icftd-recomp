/* fn_00018be8 - 66 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018be8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018be8u): goto L_18BE8;
    case RC_ADDR(0x00018becu): goto L_18BEC;
    case RC_ADDR(0x00018bf0u): goto L_18BF0;
    case RC_ADDR(0x00018bf4u): goto L_18BF4;
    case RC_ADDR(0x00018bf6u): goto L_18BF6;
    case RC_ADDR(0x00018bfau): goto L_18BFA;
    case RC_ADDR(0x00018bfcu): goto L_18BFC;
    case RC_ADDR(0x00018bfeu): goto L_18BFE;
    case RC_ADDR(0x00018c02u): goto L_18C02;
    case RC_ADDR(0x00018c06u): goto L_18C06;
    case RC_ADDR(0x00018c08u): goto L_18C08;
    case RC_ADDR(0x00018c0cu): goto L_18C0C;
    case RC_ADDR(0x00018c0eu): goto L_18C0E;
    case RC_ADDR(0x00018c10u): goto L_18C10;
    case RC_ADDR(0x00018c12u): goto L_18C12;
    case RC_ADDR(0x00018c14u): goto L_18C14;
    case RC_ADDR(0x00018c18u): goto L_18C18;
    case RC_ADDR(0x00018c1cu): goto L_18C1C;
    case RC_ADDR(0x00018c20u): goto L_18C20;
    case RC_ADDR(0x00018c24u): goto L_18C24;
    case RC_ADDR(0x00018c26u): goto L_18C26;
    case RC_ADDR(0x00018c28u): goto L_18C28;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18BE8:
    /* 00018be8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00018be8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_18BEC:
    /* 00018bec   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x00018becu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BF0:
    /* 00018bf0   4  sub.w #2526,D0 */
    c->pc = RC_ADDR(0x00018bf0u);
    rc_step(c, m, 10);
    t0 = 0x00002526u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18BF4:
    /* 00018bf4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018bf4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BF6:
    /* 00018bf6   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00018bf6u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00018bfau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_18BFA:
    /* 00018bfa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018bfau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18BFC:
    /* 00018bfc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018bfcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BFE:
    /* 00018bfe   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00018bfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C02:
    /* 00018c02   4  sub.w #178a,D0 */
    c->pc = RC_ADDR(0x00018c02u);
    rc_step(c, m, 10);
    t0 = 0x0000178au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18C06:
    /* 00018c06   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00018c06u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C08:
    /* 00018c08   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x00018c08u);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x00018c0cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013988u);
    return;

L_18C0C:
    /* 00018c0c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018c0cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18C0E:
    /* 00018c0e   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x00018c0eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C10:
    /* 00018c10   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00018c10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18C12:
    /* 00018c12   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018c12u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_18C14:
    /* 00018c14   4  divs.w #5,D1 */
    c->pc = RC_ADDR(0x00018c14u);
    rc_step(c, m, 162);
    t0 = 0x00000005u;
    rc_divs(c, m, 1, t0);

L_18C18:
    /* 00018c18   4  move.w D1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018c18u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C1C:
    /* 00018c1c   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00018c1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C20:
    /* 00018c20   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x00018c20u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00018c24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_18C24:
    /* 00018c24   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018c24u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18C26:
    /* 00018c26   2  unlk A5 */
    c->pc = RC_ADDR(0x00018c26u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18C28:
    /* 00018c28   2  rts */
    c->pc = RC_ADDR(0x00018c28u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
