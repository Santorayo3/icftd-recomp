/* fn_000056a0 - 202 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000056a0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000056a0u): goto L_56A0;
    case RC_ADDR(0x000056a4u): goto L_56A4;
    case RC_ADDR(0x000056a6u): goto L_56A6;
    case RC_ADDR(0x000056aau): goto L_56AA;
    case RC_ADDR(0x000056acu): goto L_56AC;
    case RC_ADDR(0x000056aeu): goto L_56AE;
    case RC_ADDR(0x000056b4u): goto L_56B4;
    case RC_ADDR(0x000056bau): goto L_56BA;
    case RC_ADDR(0x000056beu): goto L_56BE;
    case RC_ADDR(0x000056c0u): goto L_56C0;
    case RC_ADDR(0x000056c6u): goto L_56C6;
    case RC_ADDR(0x000056c8u): goto L_56C8;
    case RC_ADDR(0x000056ceu): goto L_56CE;
    case RC_ADDR(0x000056d2u): goto L_56D2;
    case RC_ADDR(0x000056d6u): goto L_56D6;
    case RC_ADDR(0x000056dau): goto L_56DA;
    case RC_ADDR(0x000056dcu): goto L_56DC;
    case RC_ADDR(0x000056e0u): goto L_56E0;
    case RC_ADDR(0x000056e4u): goto L_56E4;
    case RC_ADDR(0x000056eau): goto L_56EA;
    case RC_ADDR(0x000056eeu): goto L_56EE;
    case RC_ADDR(0x000056f2u): goto L_56F2;
    case RC_ADDR(0x000056f8u): goto L_56F8;
    case RC_ADDR(0x000056fcu): goto L_56FC;
    case RC_ADDR(0x00005700u): goto L_5700;
    case RC_ADDR(0x00005702u): goto L_5702;
    case RC_ADDR(0x00005706u): goto L_5706;
    case RC_ADDR(0x00005708u): goto L_5708;
    case RC_ADDR(0x0000570cu): goto L_570C;
    case RC_ADDR(0x00005710u): goto L_5710;
    case RC_ADDR(0x00005712u): goto L_5712;
    case RC_ADDR(0x00005716u): goto L_5716;
    case RC_ADDR(0x00005718u): goto L_5718;
    case RC_ADDR(0x0000571cu): goto L_571C;
    case RC_ADDR(0x0000571eu): goto L_571E;
    case RC_ADDR(0x00005722u): goto L_5722;
    case RC_ADDR(0x00005724u): goto L_5724;
    case RC_ADDR(0x00005726u): goto L_5726;
    case RC_ADDR(0x0000572au): goto L_572A;
    case RC_ADDR(0x0000572cu): goto L_572C;
    case RC_ADDR(0x0000572eu): goto L_572E;
    case RC_ADDR(0x00005732u): goto L_5732;
    case RC_ADDR(0x00005736u): goto L_5736;
    case RC_ADDR(0x0000573cu): goto L_573C;
    case RC_ADDR(0x0000573eu): goto L_573E;
    case RC_ADDR(0x00005744u): goto L_5744;
    case RC_ADDR(0x00005748u): goto L_5748;
    case RC_ADDR(0x0000574cu): goto L_574C;
    case RC_ADDR(0x00005750u): goto L_5750;
    case RC_ADDR(0x00005752u): goto L_5752;
    case RC_ADDR(0x00005756u): goto L_5756;
    case RC_ADDR(0x0000575au): goto L_575A;
    case RC_ADDR(0x0000575eu): goto L_575E;
    case RC_ADDR(0x00005762u): goto L_5762;
    case RC_ADDR(0x00005764u): goto L_5764;
    case RC_ADDR(0x00005766u): goto L_5766;
    case RC_ADDR(0x00005768u): goto L_5768;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_56A0:
    /* 000056a0   4  link.w A5,#fffffffa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056a0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_56A4:
    /* 000056a4   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056a4u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_56A6:
    /* 000056a6   4  tst.w (ffffce2e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056a6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d2u));
    rc_set_nzvc(c, t0, RC_W);

L_56AA:
    /* 000056aa   2  beq 000056ae */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056aau);
    if (rc_cond(c, 7)) goto L_56AE;

L_56AC:
    /* 000056ac   2  bra 000056a6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056acu);
    rc_tick();
    goto L_56A6;

L_56AE:
    /* 000056ae   6  move.w #1,(ffff83d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056aeu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56B4:
    /* 000056b4   6  move.l (fffff278,A4),(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056b4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd88u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56BA:
    /* 000056ba   4  tst.w (fffff0be,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056bau);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf42u));
    rc_set_nzvc(c, t0, RC_W);

L_56BE:
    /* 000056be   2  beq 000056c8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056beu);
    if (rc_cond(c, 7)) goto L_56C8;

L_56C0:
    /* 000056c0   6  move.w #8,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056c0u);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56C6:
    /* 000056c6   2  bra 000056ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056c6u);
    goto L_56CE;

L_56C8:
    /* 000056c8   6  move.w #1b,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056c8u);
    t0 = 0x0000001bu;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_56CE:
    /* 000056ce   4  move.w (fffffffe,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056ceu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_56D2:
    /* 000056d2   4  pea (0000576a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056d2u);
    rc_push32(c, m, RC_ADDR(0x0000576au));

L_56D6:
    /* 000056d6   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056d6u);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x000056dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_56DA:
    /* 000056da   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056dau);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_56DC:
    /* 000056dc   4  jsr (ffff8224,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056dcu);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000056e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d7c4u);
    return;

L_56E0:
    /* 000056e0   4  movea.l (ffffcbbc,A4),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056e0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[2] = t0;

L_56E4:
    /* 000056e4   6  move.l (ffffcbb8,A4),(ffffcbbc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056e4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56EA:
    /* 000056ea   4  move.l A2,(ffffcbb8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056eau);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56EE:
    /* 000056ee   4  movea.l (ffffcb10,A4),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056eeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[2] = t0;

L_56F2:
    /* 000056f2   6  move.l (ffffcb0c,A4),(ffffcb10,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056f2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    rc_wr32(c, m, (c->a[4] - 0x34f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56F8:
    /* 000056f8   4  move.l A2,(ffffcb0c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056f8u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_56FC:
    /* 000056fc   4  tst.w (ffffcb2c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000056fcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34d4u));
    rc_set_nzvc(c, t0, RC_W);

L_5700:
    /* 00005700   2  beq 00005708 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005700u);
    if (rc_cond(c, 7)) goto L_5708;

L_5702:
    /* 00005702   4  jsr (ffff83b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005702u);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x00005706u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002195cu);
    return;

L_5706:
    /* 00005706   2  bra 000056fc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005706u);
    rc_tick();
    goto L_56FC;

L_5708:
    /* 00005708   4  move.l (ffffcb0c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005708u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_570C:
    /* 0000570c   4  jsr (ffff8374,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000570cu);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x00005710u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021898u);
    return;

L_5710:
    /* 00005710   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005710u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5712:
    /* 00005712   4  movea.l (ffffcb10,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005712u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[0] = t0;

L_5716:
    /* 00005716   2  move.l (A0),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005716u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5718:
    /* 00005718   4  jsr (ffff83b0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005718u);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0000571cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021950u);
    return;

L_571C:
    /* 0000571c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000571cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_571E:
    /* 0000571e   4  tst.w (ffffce2e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000571eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d2u));
    rc_set_nzvc(c, t0, RC_W);

L_5722:
    /* 00005722   2  bne 00005726 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005722u);
    if (rc_cond(c, 6)) goto L_5726;

L_5724:
    /* 00005724   2  bra 0000571e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005724u);
    rc_tick();
    goto L_571E;

L_5726:
    /* 00005726   4  tst.w (ffffce2e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005726u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d2u));
    rc_set_nzvc(c, t0, RC_W);

L_572A:
    /* 0000572a   2  beq 0000572e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000572au);
    if (rc_cond(c, 7)) goto L_572E;

L_572C:
    /* 0000572c   2  bra 00005726 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000572cu);
    rc_tick();
    goto L_5726;

L_572E:
    /* 0000572e   4  clr.w (ffff83d2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000572eu);
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5732:
    /* 00005732   4  clr.w (ffff83d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005732u);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5736:
    /* 00005736   6  cmpi.w #c7,(ffffcbc2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005736u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_573C:
    /* 0000573c   2  bge 00005764 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000573cu);
    if (rc_cond(c, 12)) goto L_5764;

L_573E:
    /* 0000573e   6  move.l (fffffffa,A5),(fffff278,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000573eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_wr32(c, m, (c->a[4] - 0xd88u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5744:
    /* 00005744   4  move.w (fffffffe,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005744u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5748:
    /* 00005748   4  move.l (fffff278,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005748u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_574C:
    /* 0000574c   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000574cu);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00005750u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_5750:
    /* 00005750   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005750u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5752:
    /* 00005752   4  jsr (ffff81ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005752u);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00005756u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_5756:
    /* 00005756   4  move.w (fffffffe,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005756u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_575A:
    /* 0000575a   4  move.l (fffff278,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000575au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_575E:
    /* 0000575e   4  jsr (ffff806e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000575eu);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00005762u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_5762:
    /* 00005762   2  addq.w #6,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005762u);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_5764:
    /* 00005764   2  movea.l (A7)+,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005764u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_5766:
    /* 00005766   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005766u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5768:
    /* 00005768   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005768u);
    rc_ret(c, m);
    return;

}
