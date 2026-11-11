/* fn_000044b2 - 104 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000044b2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000044b2u): goto L_44B2;
    case RC_ADDR(0x000044b6u): goto L_44B6;
    case RC_ADDR(0x000044bcu): goto L_44BC;
    case RC_ADDR(0x000044c2u): goto L_44C2;
    case RC_ADDR(0x000044c8u): goto L_44C8;
    case RC_ADDR(0x000044ceu): goto L_44CE;
    case RC_ADDR(0x000044d2u): goto L_44D2;
    case RC_ADDR(0x000044d6u): goto L_44D6;
    case RC_ADDR(0x000044dau): goto L_44DA;
    case RC_ADDR(0x000044dcu): goto L_44DC;
    case RC_ADDR(0x000044deu): goto L_44DE;
    case RC_ADDR(0x000044e2u): goto L_44E2;
    case RC_ADDR(0x000044e4u): goto L_44E4;
    case RC_ADDR(0x000044e6u): goto L_44E6;
    case RC_ADDR(0x000044eau): goto L_44EA;
    case RC_ADDR(0x000044eeu): goto L_44EE;
    case RC_ADDR(0x000044f2u): goto L_44F2;
    case RC_ADDR(0x000044f8u): goto L_44F8;
    case RC_ADDR(0x000044fau): goto L_44FA;
    case RC_ADDR(0x000044feu): goto L_44FE;
    case RC_ADDR(0x00004502u): goto L_4502;
    case RC_ADDR(0x00004506u): goto L_4506;
    case RC_ADDR(0x0000450au): goto L_450A;
    case RC_ADDR(0x00004510u): goto L_4510;
    case RC_ADDR(0x00004512u): goto L_4512;
    case RC_ADDR(0x00004516u): goto L_4516;
    case RC_ADDR(0x00004518u): goto L_4518;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_44B2:
    /* 000044b2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000044b2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_44B6:
    /* 000044b6   6  move.w #63,(fffff1c8,A4) */
    c->pc = RC_ADDR(0x000044b6u);
    rc_step(c, m, 16);
    t0 = 0x00000063u;
    rc_wr16(c, m, (c->a[4] - 0xe38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_44BC:
    /* 000044bc   6  move.w #28,(fffff1ca,A4) */
    c->pc = RC_ADDR(0x000044bcu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] - 0xe36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_44C2:
    /* 000044c2   6  move.w #3c,(fffff1cc,A4) */
    c->pc = RC_ADDR(0x000044c2u);
    rc_step(c, m, 16);
    t0 = 0x0000003cu;
    rc_wr16(c, m, (c->a[4] - 0xe34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_44C8:
    /* 000044c8   6  move.w #50,(fffff1ce,A4) */
    c->pc = RC_ADDR(0x000044c8u);
    rc_step(c, m, 16);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0xe32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_44CE:
    /* 000044ce   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000044ceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_44D2:
    /* 000044d2   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000044d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_44D6:
    /* 000044d6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000044d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_44DA:
    /* 000044da   2  ext.l D0 */
    c->pc = RC_ADDR(0x000044dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_44DC:
    /* 000044dc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000044dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_44DE:
    /* 000044de   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000044deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_44E2:
    /* 000044e2   2  ext.l D1 */
    c->pc = RC_ADDR(0x000044e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_44E4:
    /* 000044e4   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000044e4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_44E6:
    /* 000044e6   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x000044e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xefeu);

L_44EA:
    /* 000044ea   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000044eau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_44EE:
    /* 000044ee   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000044eeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_44F2:
    /* 000044f2   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000044f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_44F8:
    /* 000044f8   2  blt 000044d6 */
    c->pc = RC_ADDR(0x000044f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_44D6; }

L_44FA:
    /* 000044fa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000044fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_44FE:
    /* 000044fe   4  lea (fffff19e,A4),A0 */
    c->pc = RC_ADDR(0x000044feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe62u);

L_4502:
    /* 00004502   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004502u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_4506:
    /* 00004506   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004506u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_450A:
    /* 0000450a   6  cmpi.w #27,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000450au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4510:
    /* 00004510   2  blt 000044d2 */
    c->pc = RC_ADDR(0x00004510u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_44D2; }

L_4512:
    /* 00004512   4  clr.w (fffff1d0,A4) */
    c->pc = RC_ADDR(0x00004512u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xe30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4516:
    /* 00004516   2  unlk A5 */
    c->pc = RC_ADDR(0x00004516u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4518:
    /* 00004518   2  rts */
    c->pc = RC_ADDR(0x00004518u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
