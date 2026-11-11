/* fn_00001f44 - 64 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001f44(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00001f44u): goto L_1F44;
    case RC_ADDR(0x00001f48u): goto L_1F48;
    case RC_ADDR(0x00001f4cu): goto L_1F4C;
    case RC_ADDR(0x00001f4eu): goto L_1F4E;
    case RC_ADDR(0x00001f50u): goto L_1F50;
    case RC_ADDR(0x00001f52u): goto L_1F52;
    case RC_ADDR(0x00001f54u): goto L_1F54;
    case RC_ADDR(0x00001f5au): goto L_1F5A;
    case RC_ADDR(0x00001f5eu): goto L_1F5E;
    case RC_ADDR(0x00001f60u): goto L_1F60;
    case RC_ADDR(0x00001f64u): goto L_1F64;
    case RC_ADDR(0x00001f66u): goto L_1F66;
    case RC_ADDR(0x00001f68u): goto L_1F68;
    case RC_ADDR(0x00001f6cu): goto L_1F6C;
    case RC_ADDR(0x00001f6eu): goto L_1F6E;
    case RC_ADDR(0x00001f72u): goto L_1F72;
    case RC_ADDR(0x00001f74u): goto L_1F74;
    case RC_ADDR(0x00001f78u): goto L_1F78;
    case RC_ADDR(0x00001f7eu): goto L_1F7E;
    case RC_ADDR(0x00001f80u): goto L_1F80;
    case RC_ADDR(0x00001f82u): goto L_1F82;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F44:
    /* 00001f44   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00001f44u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F48:
    /* 00001f48   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00001f48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1F4C:
    /* 00001f4c   2  bge 00001f54 */
    c->pc = RC_ADDR(0x00001f4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1F54;

L_1F4E:
    /* 00001f4e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001f4eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F50:
    /* 00001f50   2  unlk A5 */
    c->pc = RC_ADDR(0x00001f50u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F52:
    /* 00001f52   2  rts */
    c->pc = RC_ADDR(0x00001f52u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F54:
    /* 00001f54   6  move.l (ffffef9c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001f54u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1064u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5A:
    /* 00001f5a   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00001f5au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F5E:
    /* 00001f5e   2  beq 00001f80 */
    c->pc = RC_ADDR(0x00001f5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F80;

L_1F60:
    /* 00001f60   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001f60u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F64:
    /* 00001f64   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001f64u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F66:
    /* 00001f66   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001f66u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1F68:
    /* 00001f68   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00001f68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F6C:
    /* 00001f6c   2  bne 00001f74 */
    c->pc = RC_ADDR(0x00001f6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F74;

L_1F6E:
    /* 00001f6e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00001f6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F72:
    /* 00001f72   2  bra 00001f50 */
    c->pc = RC_ADDR(0x00001f72u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F50;

L_1F74:
    /* 00001f74   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001f74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F78:
    /* 00001f78   6  move.l (e,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001f78u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0xeu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7E:
    /* 00001f7e   2  bra 00001f5a */
    c->pc = RC_ADDR(0x00001f7eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F5A;

L_1F80:
    /* 00001f80   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001f80u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F82:
    /* 00001f82   2  bra 00001f50 */
    c->pc = RC_ADDR(0x00001f82u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F50;

}
