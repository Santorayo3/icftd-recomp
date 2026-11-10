/* fn_00004e2e - 86 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004e2e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00004e2eu): goto L_4E2E;
    case RC_ADDR(0x00004e32u): goto L_4E32;
    case RC_ADDR(0x00004e36u): goto L_4E36;
    case RC_ADDR(0x00004e3au): goto L_4E3A;
    case RC_ADDR(0x00004e3cu): goto L_4E3C;
    case RC_ADDR(0x00004e3eu): goto L_4E3E;
    case RC_ADDR(0x00004e42u): goto L_4E42;
    case RC_ADDR(0x00004e46u): goto L_4E46;
    case RC_ADDR(0x00004e4au): goto L_4E4A;
    case RC_ADDR(0x00004e4eu): goto L_4E4E;
    case RC_ADDR(0x00004e52u): goto L_4E52;
    case RC_ADDR(0x00004e56u): goto L_4E56;
    case RC_ADDR(0x00004e5au): goto L_4E5A;
    case RC_ADDR(0x00004e5eu): goto L_4E5E;
    case RC_ADDR(0x00004e60u): goto L_4E60;
    case RC_ADDR(0x00004e64u): goto L_4E64;
    case RC_ADDR(0x00004e68u): goto L_4E68;
    case RC_ADDR(0x00004e6cu): goto L_4E6C;
    case RC_ADDR(0x00004e70u): goto L_4E70;
    case RC_ADDR(0x00004e74u): goto L_4E74;
    case RC_ADDR(0x00004e78u): goto L_4E78;
    case RC_ADDR(0x00004e7cu): goto L_4E7C;
    case RC_ADDR(0x00004e80u): goto L_4E80;
    case RC_ADDR(0x00004e82u): goto L_4E82;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4E2E:
    /* 00004e2e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00004e2eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_4E32:
    /* 00004e32   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e32u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E36:
    /* 00004e36   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00004e36u);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00004e3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_4E3A:
    /* 00004e3a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004e3au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4E3C:
    /* 00004e3c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004e3cu);
    rc_ext_l(c, 0);

L_4E3E:
    /* 00004e3e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004e3eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E42:
    /* 00004e42   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e42u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E46:
    /* 00004e46   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e46u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E4A:
    /* 00004e4a   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00004e4au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E4E:
    /* 00004e4e   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00004e4eu);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00004e52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021934u);
    return;

L_4E52:
    /* 00004e52   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00004e52u);
    c->a[7] = (c->a[7] + 0xcu);

L_4E56:
    /* 00004e56   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004e56u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E5A:
    /* 00004e5a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00004e5au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E5E:
    /* 00004e5e   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00004e5eu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_4E60:
    /* 00004e60   4  sub.w D0,(c,A5) */
    c->pc = RC_ADDR(0x00004e60u);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4E64:
    /* 00004e64   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e64u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E68:
    /* 00004e68   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e68u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E6C:
    /* 00004e6c   4  move.w (e,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e6cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E70:
    /* 00004e70   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e70u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E74:
    /* 00004e74   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004e74u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E78:
    /* 00004e78   4  jsr (00004d76) */
    c->pc = RC_ADDR(0x00004e78u);
    rc_push32(c, m, RC_ADDR(0x00004e7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004d76u);
    return;

L_4E7C:
    /* 00004e7c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00004e7cu);
    c->a[7] = (c->a[7] + 0xeu);

L_4E80:
    /* 00004e80   2  unlk A5 */
    c->pc = RC_ADDR(0x00004e80u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4E82:
    /* 00004e82   2  rts */
    c->pc = RC_ADDR(0x00004e82u);
    rc_ret(c, m);
    return;

}
