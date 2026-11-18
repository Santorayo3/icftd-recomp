/* fn_0000774a - 70 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000774a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000774au): goto L_774A;
    case RC_ADDR(0x0000774eu): goto L_774E;
    case RC_ADDR(0x00007752u): goto L_7752;
    case RC_ADDR(0x00007754u): goto L_7754;
    case RC_ADDR(0x00007756u): goto L_7756;
    case RC_ADDR(0x0000775au): goto L_775A;
    case RC_ADDR(0x0000775eu): goto L_775E;
    case RC_ADDR(0x00007762u): goto L_7762;
    case RC_ADDR(0x00007766u): goto L_7766;
    case RC_ADDR(0x00007768u): goto L_7768;
    case RC_ADDR(0x0000776au): goto L_776A;
    case RC_ADDR(0x0000776eu): goto L_776E;
    case RC_ADDR(0x00007772u): goto L_7772;
    case RC_ADDR(0x00007774u): goto L_7774;
    case RC_ADDR(0x00007776u): goto L_7776;
    case RC_ADDR(0x00007778u): goto L_7778;
    case RC_ADDR(0x0000777cu): goto L_777C;
    case RC_ADDR(0x0000777eu): goto L_777E;
    case RC_ADDR(0x00007780u): goto L_7780;
    case RC_ADDR(0x00007784u): goto L_7784;
    case RC_ADDR(0x0000778au): goto L_778A;
    case RC_ADDR(0x0000778cu): goto L_778C;
    case RC_ADDR(0x0000778eu): goto L_778E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_774A:
    /* 0000774a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000774au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_774E:
    /* 0000774e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000774eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7752:
    /* 00007752   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00007752u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_7754:
    /* 00007754   2  beq 0000778c */
    c->pc = RC_ADDR(0x00007754u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_778C;

L_7756:
    /* 00007756   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007756u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_775A:
    /* 0000775a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000775au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_775E:
    /* 0000775e   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0000775eu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_7762:
    /* 00007762   4  lea (fffff9a2,A4),A0 */
    c->pc = RC_ADDR(0x00007762u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x65eu);

L_7766:
    /* 00007766   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00007766u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7768:
    /* 00007768   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007768u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_776A:
    /* 0000776a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000776au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_776E:
    /* 0000776e   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x0000776eu);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007772u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7772:
    /* 00007772   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007772u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7774:
    /* 00007774   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007774u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7776:
    /* 00007776   2  bne 00007780 */
    c->pc = RC_ADDR(0x00007776u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7780;

L_7778:
    /* 00007778   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007778u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_777C:
    /* 0000777c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000777cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_777E:
    /* 0000777e   2  rts */
    c->pc = RC_ADDR(0x0000777eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_7780:
    /* 00007780   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007780u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7784:
    /* 00007784   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007784u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_778A:
    /* 0000778a   2  blt 0000775a */
    c->pc = RC_ADDR(0x0000778au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_775A; }

L_778C:
    /* 0000778c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000778cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_778E:
    /* 0000778e   2  bra 0000777c */
    c->pc = RC_ADDR(0x0000778eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_777C;

}
