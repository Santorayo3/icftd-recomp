/* fn_0001db40 - 70 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001db40(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001db40u): goto L_1DB40;
    case RC_ADDR(0x0001db44u): goto L_1DB44;
    case RC_ADDR(0x0001db48u): goto L_1DB48;
    case RC_ADDR(0x0001db4cu): goto L_1DB4C;
    case RC_ADDR(0x0001db4eu): goto L_1DB4E;
    case RC_ADDR(0x0001db50u): goto L_1DB50;
    case RC_ADDR(0x0001db52u): goto L_1DB52;
    case RC_ADDR(0x0001db56u): goto L_1DB56;
    case RC_ADDR(0x0001db58u): goto L_1DB58;
    case RC_ADDR(0x0001db5cu): goto L_1DB5C;
    case RC_ADDR(0x0001db5eu): goto L_1DB5E;
    case RC_ADDR(0x0001db60u): goto L_1DB60;
    case RC_ADDR(0x0001db62u): goto L_1DB62;
    case RC_ADDR(0x0001db66u): goto L_1DB66;
    case RC_ADDR(0x0001db6au): goto L_1DB6A;
    case RC_ADDR(0x0001db70u): goto L_1DB70;
    case RC_ADDR(0x0001db72u): goto L_1DB72;
    case RC_ADDR(0x0001db74u): goto L_1DB74;
    case RC_ADDR(0x0001db78u): goto L_1DB78;
    case RC_ADDR(0x0001db7eu): goto L_1DB7E;
    case RC_ADDR(0x0001db80u): goto L_1DB80;
    case RC_ADDR(0x0001db82u): goto L_1DB82;
    case RC_ADDR(0x0001db84u): goto L_1DB84;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DB40:
    /* 0001db40   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001db40u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1DB44:
    /* 0001db44   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001db44u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DB48:
    /* 0001db48   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001db48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB4C:
    /* 0001db4c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001db4cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DB4E:
    /* 0001db4e   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001db4eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1DB50:
    /* 0001db50   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001db50u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1DB52:
    /* 0001db52   4  lea (28ea,A4),A1 */
    c->pc = RC_ADDR(0x0001db52u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x28eau);

L_1DB56:
    /* 0001db56   2  adda.l A1,A0 */
    c->pc = RC_ADDR(0x0001db56u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[0] += t0;

L_1DB58:
    /* 0001db58   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001db58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB5C:
    /* 0001db5c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001db5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1DB5E:
    /* 0001db5e   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001db5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1DB60:
    /* 0001db60   2  movea.l D0,A1 */
    c->pc = RC_ADDR(0x0001db60u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_1DB62:
    /* 0001db62   4  movea.l (8,A5),A6 */
    c->pc = RC_ADDR(0x0001db62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[6] = t0;

L_1DB66:
    /* 0001db66   4  adda.l (38,A6),A1 */
    c->pc = RC_ADDR(0x0001db66u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[6] + 0x38u));
    c->a[1] += t0;

L_1DB6A:
    /* 0001db6a   6  adda.l #60,A1 */
    c->pc = RC_ADDR(0x0001db6au);
    rc_step(c, m, 16);
    t0 = 0x00000060u;
    c->a[1] += t0;

L_1DB70:
    /* 0001db70   2  move.l (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x0001db70u);
    rc_step(c, m, 20);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DB72:
    /* 0001db72   2  move.l (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x0001db72u);
    rc_step(c, m, 20);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DB74:
    /* 0001db74   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001db74u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DB78:
    /* 0001db78   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001db78u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1DB7E:
    /* 0001db7e   2  blt 0001db48 */
    c->pc = RC_ADDR(0x0001db7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DB48; }

L_1DB80:
    /* 0001db80   2  bsr 0001db1e */
    c->pc = RC_ADDR(0x0001db80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001db82u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db1eu);
    return;

L_1DB82:
    /* 0001db82   2  unlk A5 */
    c->pc = RC_ADDR(0x0001db82u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DB84:
    /* 0001db84   2  rts */
    c->pc = RC_ADDR(0x0001db84u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
