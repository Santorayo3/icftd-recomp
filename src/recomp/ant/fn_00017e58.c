/* fn_00017e58 - 56 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017e58(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00017e58u): goto L_17E58;
    case RC_ADDR(0x00017e5cu): goto L_17E5C;
    case RC_ADDR(0x00017e60u): goto L_17E60;
    case RC_ADDR(0x00017e64u): goto L_17E64;
    case RC_ADDR(0x00017e68u): goto L_17E68;
    case RC_ADDR(0x00017e6au): goto L_17E6A;
    case RC_ADDR(0x00017e6eu): goto L_17E6E;
    case RC_ADDR(0x00017e72u): goto L_17E72;
    case RC_ADDR(0x00017e76u): goto L_17E76;
    case RC_ADDR(0x00017e78u): goto L_17E78;
    case RC_ADDR(0x00017e7cu): goto L_17E7C;
    case RC_ADDR(0x00017e80u): goto L_17E80;
    case RC_ADDR(0x00017e84u): goto L_17E84;
    case RC_ADDR(0x00017e88u): goto L_17E88;
    case RC_ADDR(0x00017e8cu): goto L_17E8C;
    case RC_ADDR(0x00017e8eu): goto L_17E8E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17E58:
    /* 00017e58   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00017e58u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_17E5C:
    /* 00017e5c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00017e5cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E60:
    /* 00017e60   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00017e60u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_17E64:
    /* 00017e64   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00017e64u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00017e68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_17E68:
    /* 00017e68   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017e68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17E6A:
    /* 00017e6a   4  pea (00000011).l */
    c->pc = RC_ADDR(0x00017e6au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000011u);

L_17E6E:
    /* 00017e6e   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x00017e6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E72:
    /* 00017e72   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00017e72u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_17E76:
    /* 00017e76   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00017e76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E78:
    /* 00017e78   4  pea (00000007).l */
    c->pc = RC_ADDR(0x00017e78u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000007u);

L_17E7C:
    /* 00017e7c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00017e7cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E80:
    /* 00017e80   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00017e80u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_17E84:
    /* 00017e84   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00017e84u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00017e88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_17E88:
    /* 00017e88   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00017e88u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_17E8C:
    /* 00017e8c   2  unlk A5 */
    c->pc = RC_ADDR(0x00017e8cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17E8E:
    /* 00017e8e   2  rts */
    c->pc = RC_ADDR(0x00017e8eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
