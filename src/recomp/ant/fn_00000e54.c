/* fn_00000e54 - 70 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000e54(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00000e54u): goto L_E54;
    case RC_ADDR(0x00000e58u): goto L_E58;
    case RC_ADDR(0x00000e5cu): goto L_E5C;
    case RC_ADDR(0x00000e5eu): goto L_E5E;
    case RC_ADDR(0x00000e62u): goto L_E62;
    case RC_ADDR(0x00000e66u): goto L_E66;
    case RC_ADDR(0x00000e68u): goto L_E68;
    case RC_ADDR(0x00000e6au): goto L_E6A;
    case RC_ADDR(0x00000e6cu): goto L_E6C;
    case RC_ADDR(0x00000e6eu): goto L_E6E;
    case RC_ADDR(0x00000e72u): goto L_E72;
    case RC_ADDR(0x00000e76u): goto L_E76;
    case RC_ADDR(0x00000e7au): goto L_E7A;
    case RC_ADDR(0x00000e7eu): goto L_E7E;
    case RC_ADDR(0x00000e80u): goto L_E80;
    case RC_ADDR(0x00000e84u): goto L_E84;
    case RC_ADDR(0x00000e88u): goto L_E88;
    case RC_ADDR(0x00000e8cu): goto L_E8C;
    case RC_ADDR(0x00000e8eu): goto L_E8E;
    case RC_ADDR(0x00000e92u): goto L_E92;
    case RC_ADDR(0x00000e96u): goto L_E96;
    case RC_ADDR(0x00000e98u): goto L_E98;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E54:
    /* 00000e54   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00000e54u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_E58:
    /* 00000e58   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000e58u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E5C:
    /* 00000e5c   2  bra 00000e84 */
    c->pc = RC_ADDR(0x00000e5cu);
    rc_step(c, m, 10);
    goto L_E84;

L_E5E:
    /* 00000e5e   4  movea.l (ffffd730,A4),A0 */
    c->pc = RC_ADDR(0x00000e5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[0] = t0;

L_E62:
    /* 00000e62   4  cmpa.l (ffffd734,A4),A0 */
    c->pc = RC_ADDR(0x00000e62u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28ccu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_E66:
    /* 00000e66   2  bls 00000e6e */
    c->pc = RC_ADDR(0x00000e66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_E6E;

L_E68:
    /* 00000e68   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000e68u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_E6A:
    /* 00000e6a   2  unlk A5 */
    c->pc = RC_ADDR(0x00000e6au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E6C:
    /* 00000e6c   2  rts */
    c->pc = RC_ADDR(0x00000e6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_E6E:
    /* 00000e6e   4  movea.l (ffffd730,A4),A0 */
    c->pc = RC_ADDR(0x00000e6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[0] = t0;

L_E72:
    /* 00000e72   4  addq.l #1,(ffffd730,A4) */
    c->pc = RC_ADDR(0x00000e72u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x28d0u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E76:
    /* 00000e76   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x00000e76u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_E7A:
    /* 00000e7a   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00000e7au);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E7E:
    /* 00000e7e   2  move.b (A0),(A1) */
    c->pc = RC_ADDR(0x00000e7eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_B);

L_E80:
    /* 00000e80   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000e80u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_E84:
    /* 00000e84   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00000e84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E88:
    /* 00000e88   4  cmp.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00000e88u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_E8C:
    /* 00000e8c   2  bcs 00000e5e */
    c->pc = RC_ADDR(0x00000e8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_E5E; }

L_E8E:
    /* 00000e8e   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00000e8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E92:
    /* 00000e92   4  add.l D0,(fffff73c,A4) */
    c->pc = RC_ADDR(0x00000e92u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x8c4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_E96:
    /* 00000e96   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00000e96u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_E98:
    /* 00000e98   2  bra 00000e6a */
    c->pc = RC_ADDR(0x00000e98u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_E6A;

}
