/* fn_00016e56 - 56 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016e56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016e56u): goto L_16E56;
    case RC_ADDR(0x00016e5au): goto L_16E5A;
    case RC_ADDR(0x00016e5eu): goto L_16E5E;
    case RC_ADDR(0x00016e62u): goto L_16E62;
    case RC_ADDR(0x00016e64u): goto L_16E64;
    case RC_ADDR(0x00016e6au): goto L_16E6A;
    case RC_ADDR(0x00016e6cu): goto L_16E6C;
    case RC_ADDR(0x00016e70u): goto L_16E70;
    case RC_ADDR(0x00016e76u): goto L_16E76;
    case RC_ADDR(0x00016e7au): goto L_16E7A;
    case RC_ADDR(0x00016e7eu): goto L_16E7E;
    case RC_ADDR(0x00016e80u): goto L_16E80;
    case RC_ADDR(0x00016e82u): goto L_16E82;
    case RC_ADDR(0x00016e84u): goto L_16E84;
    case RC_ADDR(0x00016e86u): goto L_16E86;
    case RC_ADDR(0x00016e8au): goto L_16E8A;
    case RC_ADDR(0x00016e8cu): goto L_16E8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16E56:
    /* 00016e56   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016e56u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16E5A:
    /* 00016e5a   4  pea (1358,A4) */
    c->pc = RC_ADDR(0x00016e5au);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x1358u));

L_16E5E:
    /* 00016e5e   4  jsr (ffff82fc,A4) */
    c->pc = RC_ADDR(0x00016e5eu);
    rc_step(c, m);
    /* vector 127 */
    rc_push32(c, m, RC_ADDR(0x00016e62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d52u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002141cu);
    return;

L_16E62:
    /* 00016e62   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016e62u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16E64:
    /* 00016e64   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x00016e64u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E6A:
    /* 00016e6a   2  swap D0 */
    c->pc = RC_ADDR(0x00016e6au);
    rc_step(c, m);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_16E6C:
    /* 00016e6c   4  move.w #1388,D1 */
    c->pc = RC_ADDR(0x00016e6cu);
    rc_step(c, m);
    t0 = 0x00001388u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E70:
    /* 00016e70   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x00016e70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, 0x00dff006u);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E76:
    /* 00016e76   4  dbf D1,00016e70 */
    c->pc = RC_ADDR(0x00016e76u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_16E70; }
    }

L_16E7A:
    /* 00016e7a   4  lea (1358,A4),A0 */
    c->pc = RC_ADDR(0x00016e7au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1358u);

L_16E7E:
    /* 00016e7e   2  move.l (A0)+,D1 */
    c->pc = RC_ADDR(0x00016e7eu);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E80:
    /* 00016e80   2  add.l (A0)+,D1 */
    c->pc = RC_ADDR(0x00016e80u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_16E82:
    /* 00016e82   2  add.l (A0)+,D1 */
    c->pc = RC_ADDR(0x00016e82u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_16E84:
    /* 00016e84   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016e84u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16E86:
    /* 00016e86   4  move.l D0,(ffffcc06,A4) */
    c->pc = RC_ADDR(0x00016e86u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x33fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E8A:
    /* 00016e8a   2  unlk A5 */
    c->pc = RC_ADDR(0x00016e8au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16E8C:
    /* 00016e8c   2  rts */
    c->pc = RC_ADDR(0x00016e8cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
