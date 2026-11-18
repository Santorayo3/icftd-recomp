/* fn_000018a8 - 40 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000018a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000018a8u): goto L_18A8;
    case RC_ADDR(0x000018acu): goto L_18AC;
    case RC_ADDR(0x000018b0u): goto L_18B0;
    case RC_ADDR(0x000018b4u): goto L_18B4;
    case RC_ADDR(0x000018b6u): goto L_18B6;
    case RC_ADDR(0x000018b8u): goto L_18B8;
    case RC_ADDR(0x000018bau): goto L_18BA;
    case RC_ADDR(0x000018beu): goto L_18BE;
    case RC_ADDR(0x000018c2u): goto L_18C2;
    case RC_ADDR(0x000018c6u): goto L_18C6;
    case RC_ADDR(0x000018cau): goto L_18CA;
    case RC_ADDR(0x000018ccu): goto L_18CC;
    case RC_ADDR(0x000018ceu): goto L_18CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18A8:
    /* 000018a8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000018a8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_18AC:
    /* 000018ac   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000018acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B0:
    /* 000018b0   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000018b0u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000018b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_18B4:
    /* 000018b4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000018b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18B6:
    /* 000018b6   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000018b6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_18B8:
    /* 000018b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000018b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18BA:
    /* 000018ba   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000018bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18BE:
    /* 000018be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000018beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18C2:
    /* 000018c2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000018c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18C6:
    /* 000018c6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000018c6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000018cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_18CA:
    /* 000018ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000018cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18CC:
    /* 000018cc   2  unlk A5 */
    c->pc = RC_ADDR(0x000018ccu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18CE:
    /* 000018ce   2  rts */
    c->pc = RC_ADDR(0x000018ceu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
