/* fn_00008cbc - 66 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008cbc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008cbcu): goto L_8CBC;
    case RC_ADDR(0x00008cc0u): goto L_8CC0;
    case RC_ADDR(0x00008cc4u): goto L_8CC4;
    case RC_ADDR(0x00008cc8u): goto L_8CC8;
    case RC_ADDR(0x00008cccu): goto L_8CCC;
    case RC_ADDR(0x00008cceu): goto L_8CCE;
    case RC_ADDR(0x00008cd0u): goto L_8CD0;
    case RC_ADDR(0x00008cd4u): goto L_8CD4;
    case RC_ADDR(0x00008cd8u): goto L_8CD8;
    case RC_ADDR(0x00008cdau): goto L_8CDA;
    case RC_ADDR(0x00008cdcu): goto L_8CDC;
    case RC_ADDR(0x00008ce0u): goto L_8CE0;
    case RC_ADDR(0x00008ce6u): goto L_8CE6;
    case RC_ADDR(0x00008ceau): goto L_8CEA;
    case RC_ADDR(0x00008cf0u): goto L_8CF0;
    case RC_ADDR(0x00008cf2u): goto L_8CF2;
    case RC_ADDR(0x00008cf8u): goto L_8CF8;
    case RC_ADDR(0x00008cfau): goto L_8CFA;
    case RC_ADDR(0x00008cfcu): goto L_8CFC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8CBC:
    /* 00008cbc   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cbcu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_8CC0:
    /* 00008cc0   4  clr.w (ffffcb20,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cc0u);
    rc_wr16(c, m, (c->a[4] - 0x34e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8CC4:
    /* 00008cc4   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cc4u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8CC8:
    /* 00008cc8   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cc8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CCC:
    /* 00008ccc   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cccu);
    rc_ext_l(c, 0);

L_8CCE:
    /* 00008cce   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cceu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_8CD0:
    /* 00008cd0   4  lea (282,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cd0u);
    c->a[0] = (c->a[4] + 0x282u);

L_8CD4:
    /* 00008cd4   4  move.w (fffffffe,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cd4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CD8:
    /* 00008cd8   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cd8u);
    rc_ext_l(c, 1);

L_8CDA:
    /* 00008cda   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cdau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_8CDC:
    /* 00008cdc   4  lea (fffff026,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cdcu);
    c->a[1] = (c->a[4] - 0xfdau);

L_8CE0:
    /* 00008ce0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008ce0u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CE6:
    /* 00008ce6   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008ce6u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8CEA:
    /* 00008cea   6  cmpi.w #20,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008ceau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_8CF0:
    /* 00008cf0   2  blt 00008cc8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cf0u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_8CC8; }

L_8CF2:
    /* 00008cf2   6  move.w #1,(ffffcb20,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cf2u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8CF8:
    /* 00008cf8   2  bsr 00008cfe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cf8u);
    rc_push32(c, m, RC_ADDR(0x00008cfau));
    rc_depth++;
    c->pc = RC_ADDR(0x00008cfeu);
    return;

L_8CFA:
    /* 00008cfa   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cfau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8CFC:
    /* 00008cfc   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008cfcu);
    rc_ret(c, m);
    return;

}
