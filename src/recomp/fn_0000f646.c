/* fn_0000f646 - 76 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f646(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f646u): goto L_F646;
    case RC_ADDR(0x0000f64au): goto L_F64A;
    case RC_ADDR(0x0000f64cu): goto L_F64C;
    case RC_ADDR(0x0000f650u): goto L_F650;
    case RC_ADDR(0x0000f652u): goto L_F652;
    case RC_ADDR(0x0000f654u): goto L_F654;
    case RC_ADDR(0x0000f656u): goto L_F656;
    case RC_ADDR(0x0000f658u): goto L_F658;
    case RC_ADDR(0x0000f65cu): goto L_F65C;
    case RC_ADDR(0x0000f660u): goto L_F660;
    case RC_ADDR(0x0000f662u): goto L_F662;
    case RC_ADDR(0x0000f664u): goto L_F664;
    case RC_ADDR(0x0000f666u): goto L_F666;
    case RC_ADDR(0x0000f668u): goto L_F668;
    case RC_ADDR(0x0000f66au): goto L_F66A;
    case RC_ADDR(0x0000f66cu): goto L_F66C;
    case RC_ADDR(0x0000f66eu): goto L_F66E;
    case RC_ADDR(0x0000f672u): goto L_F672;
    case RC_ADDR(0x0000f674u): goto L_F674;
    case RC_ADDR(0x0000f678u): goto L_F678;
    case RC_ADDR(0x0000f67au): goto L_F67A;
    case RC_ADDR(0x0000f67eu): goto L_F67E;
    case RC_ADDR(0x0000f680u): goto L_F680;
    case RC_ADDR(0x0000f686u): goto L_F686;
    case RC_ADDR(0x0000f688u): goto L_F688;
    case RC_ADDR(0x0000f68cu): goto L_F68C;
    case RC_ADDR(0x0000f690u): goto L_F690;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F646:
    /* 0000f646   4  move.w (3c,A6),D0 */
    c->pc = RC_ADDR(0x0000f646u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F64A:
    /* 0000f64a   2  beq 0000f678 */
    c->pc = RC_ADDR(0x0000f64au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F678;

L_F64C:
    /* 0000f64c   4  mulu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x0000f64cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 0, t0);

L_F650:
    /* 0000f650   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f650u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F652:
    /* 0000f652   2  bcs 0000f67a */
    c->pc = RC_ADDR(0x0000f652u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_F67A;

L_F654:
    /* 0000f654   2  swap D0 */
    c->pc = RC_ADDR(0x0000f654u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F656:
    /* 0000f656   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x0000f656u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F658:
    /* 0000f658   4  move.w (38,A6),D1 */
    c->pc = RC_ADDR(0x0000f658u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F65C:
    /* 0000f65c   4  move.w (3a,A6),D2 */
    c->pc = RC_ADDR(0x0000f65cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F660:
    /* 0000f660   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000f660u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F662:
    /* 0000f662   2  bcc 0000f668 */
    c->pc = RC_ADDR(0x0000f662u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_F668;

L_F664:
    /* 0000f664   2  neg.w D3 */
    c->pc = RC_ADDR(0x0000f664u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_F666:
    /* 0000f666   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000f666u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_F668:
    /* 0000f668   2  cmp.w D2,D0 */
    c->pc = RC_ADDR(0x0000f668u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F66A:
    /* 0000f66a   2  bcc 0000f67a */
    c->pc = RC_ADDR(0x0000f66au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_F67A;

L_F66C:
    /* 0000f66c   2  add.w D3,D1 */
    c->pc = RC_ADDR(0x0000f66cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F66E:
    /* 0000f66e   4  move.w D1,(38,A6) */
    c->pc = RC_ADDR(0x0000f66eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F672:
    /* 0000f672   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x0000f672u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_F674:
    /* 0000f674   4  move.w D1,(0,A6) */
    c->pc = RC_ADDR(0x0000f674u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F678:
    /* 0000f678   2  rts */
    c->pc = RC_ADDR(0x0000f678u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_F67A:
    /* 0000f67a   4  move.w (3a,A6),D1 */
    c->pc = RC_ADDR(0x0000f67au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x3au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F67E:
    /* 0000f67e   2  bne 0000f68c */
    c->pc = RC_ADDR(0x0000f67eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F68C;

L_F680:
    /* 0000f680   6  bclr #0,(1c,A6) */
    c->pc = RC_ADDR(0x0000f680u);
    rc_step(c, m, 20);
    t3 = (c->a[6] + 0x1cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_wr8(c, m, t3, t2);

L_F686:
    /* 0000f686   2  beq 0000f68c */
    c->pc = RC_ADDR(0x0000f686u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F68C;

L_F688:
    /* 0000f688   4  bsr 0000f166 */
    c->pc = RC_ADDR(0x0000f688u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f68cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f166u);
    return;

L_F68C:
    /* 0000f68c   4  clr.w (3c,A6) */
    c->pc = RC_ADDR(0x0000f68cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F690:
    /* 0000f690   2  bra 0000f672 */
    c->pc = RC_ADDR(0x0000f690u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F672;

}
