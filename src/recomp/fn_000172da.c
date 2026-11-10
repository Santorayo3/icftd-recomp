/* fn_000172da - 66 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000172da(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000172dau): goto L_172DA;
    case RC_ADDR(0x000172deu): goto L_172DE;
    case RC_ADDR(0x000172e2u): goto L_172E2;
    case RC_ADDR(0x000172e6u): goto L_172E6;
    case RC_ADDR(0x000172e8u): goto L_172E8;
    case RC_ADDR(0x000172ecu): goto L_172EC;
    case RC_ADDR(0x000172eeu): goto L_172EE;
    case RC_ADDR(0x000172f0u): goto L_172F0;
    case RC_ADDR(0x000172f4u): goto L_172F4;
    case RC_ADDR(0x000172f8u): goto L_172F8;
    case RC_ADDR(0x000172fau): goto L_172FA;
    case RC_ADDR(0x000172feu): goto L_172FE;
    case RC_ADDR(0x00017300u): goto L_17300;
    case RC_ADDR(0x00017302u): goto L_17302;
    case RC_ADDR(0x00017304u): goto L_17304;
    case RC_ADDR(0x00017306u): goto L_17306;
    case RC_ADDR(0x0001730au): goto L_1730A;
    case RC_ADDR(0x0001730eu): goto L_1730E;
    case RC_ADDR(0x00017312u): goto L_17312;
    case RC_ADDR(0x00017316u): goto L_17316;
    case RC_ADDR(0x00017318u): goto L_17318;
    case RC_ADDR(0x0001731au): goto L_1731A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_172DA:
    /* 000172da   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172dau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_172DE:
    /* 000172de   4  move.w (fffffd8a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172deu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_172E2:
    /* 000172e2   4  sub.w #2526,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172e2u);
    t0 = 0x00002526u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_172E6:
    /* 000172e6   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172e6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172E8:
    /* 000172e8   4  jsr (ffff8170,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172e8u);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x000172ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012132u);
    return;

L_172EC:
    /* 000172ec   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172ecu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_172EE:
    /* 000172ee   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172eeu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172F0:
    /* 000172f0   4  move.w (fffffd8c,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172f0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_172F4:
    /* 000172f4   4  sub.w #178a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172f4u);
    t0 = 0x0000178au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_172F8:
    /* 000172f8   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172f8u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_172FA:
    /* 000172fa   4  jsr (ffff8170,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172fau);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x000172feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012132u);
    return;

L_172FE:
    /* 000172fe   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000172feu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17300:
    /* 00017300   2  move.w (A7)+,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017300u);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17302:
    /* 00017302   2  add.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017302u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_17304:
    /* 00017304   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017304u);
    rc_ext_l(c, 1);

L_17306:
    /* 00017306   4  divs.w #5,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017306u);
    t0 = 0x00000005u;
    rc_divs(c, m, 1, t0);

L_1730A:
    /* 0001730a   4  move.w D1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001730au);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1730E:
    /* 0001730e   4  move.w (fffffffe,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001730eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17312:
    /* 00017312   4  jsr (ffff807a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017312u);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x00017316u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000579cu);
    return;

L_17316:
    /* 00017316   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017316u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17318:
    /* 00017318   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00017318u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1731A:
    /* 0001731a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001731au);
    rc_ret(c, m);
    return;

}
