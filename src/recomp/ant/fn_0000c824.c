/* fn_0000c824 - 190 byte(s), 54 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c824(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c824u): goto L_C824;
    case RC_ADDR(0x0000c828u): goto L_C828;
    case RC_ADDR(0x0000c82cu): goto L_C82C;
    case RC_ADDR(0x0000c830u): goto L_C830;
    case RC_ADDR(0x0000c834u): goto L_C834;
    case RC_ADDR(0x0000c838u): goto L_C838;
    case RC_ADDR(0x0000c83cu): goto L_C83C;
    case RC_ADDR(0x0000c840u): goto L_C840;
    case RC_ADDR(0x0000c844u): goto L_C844;
    case RC_ADDR(0x0000c848u): goto L_C848;
    case RC_ADDR(0x0000c84cu): goto L_C84C;
    case RC_ADDR(0x0000c850u): goto L_C850;
    case RC_ADDR(0x0000c854u): goto L_C854;
    case RC_ADDR(0x0000c858u): goto L_C858;
    case RC_ADDR(0x0000c85cu): goto L_C85C;
    case RC_ADDR(0x0000c860u): goto L_C860;
    case RC_ADDR(0x0000c864u): goto L_C864;
    case RC_ADDR(0x0000c868u): goto L_C868;
    case RC_ADDR(0x0000c86cu): goto L_C86C;
    case RC_ADDR(0x0000c870u): goto L_C870;
    case RC_ADDR(0x0000c872u): goto L_C872;
    case RC_ADDR(0x0000c876u): goto L_C876;
    case RC_ADDR(0x0000c87au): goto L_C87A;
    case RC_ADDR(0x0000c87eu): goto L_C87E;
    case RC_ADDR(0x0000c882u): goto L_C882;
    case RC_ADDR(0x0000c886u): goto L_C886;
    case RC_ADDR(0x0000c88au): goto L_C88A;
    case RC_ADDR(0x0000c88cu): goto L_C88C;
    case RC_ADDR(0x0000c890u): goto L_C890;
    case RC_ADDR(0x0000c894u): goto L_C894;
    case RC_ADDR(0x0000c898u): goto L_C898;
    case RC_ADDR(0x0000c89cu): goto L_C89C;
    case RC_ADDR(0x0000c8a0u): goto L_C8A0;
    case RC_ADDR(0x0000c8a4u): goto L_C8A4;
    case RC_ADDR(0x0000c8a6u): goto L_C8A6;
    case RC_ADDR(0x0000c8aau): goto L_C8AA;
    case RC_ADDR(0x0000c8aeu): goto L_C8AE;
    case RC_ADDR(0x0000c8b2u): goto L_C8B2;
    case RC_ADDR(0x0000c8b6u): goto L_C8B6;
    case RC_ADDR(0x0000c8bau): goto L_C8BA;
    case RC_ADDR(0x0000c8beu): goto L_C8BE;
    case RC_ADDR(0x0000c8c0u): goto L_C8C0;
    case RC_ADDR(0x0000c8c4u): goto L_C8C4;
    case RC_ADDR(0x0000c8c8u): goto L_C8C8;
    case RC_ADDR(0x0000c8cau): goto L_C8CA;
    case RC_ADDR(0x0000c8ceu): goto L_C8CE;
    case RC_ADDR(0x0000c8d2u): goto L_C8D2;
    case RC_ADDR(0x0000c8d4u): goto L_C8D4;
    case RC_ADDR(0x0000c8d6u): goto L_C8D6;
    case RC_ADDR(0x0000c8d8u): goto L_C8D8;
    case RC_ADDR(0x0000c8dau): goto L_C8DA;
    case RC_ADDR(0x0000c8dcu): goto L_C8DC;
    case RC_ADDR(0x0000c8deu): goto L_C8DE;
    case RC_ADDR(0x0000c8e0u): goto L_C8E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C824:
    /* 0000c824   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c824u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C828:
    /* 0000c828   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c828u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C82C:
    /* 0000c82c   4  pea (0000c8ee) */
    c->pc = RC_ADDR(0x0000c82cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c8eeu));

L_C830:
    /* 0000c830   4  pea (0000c8e2) */
    c->pc = RC_ADDR(0x0000c830u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c8e2u));

L_C834:
    /* 0000c834   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000c834u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000c838u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_C838:
    /* 0000c838   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000c838u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_C83C:
    /* 0000c83c   4  pea (e00,A4) */
    c->pc = RC_ADDR(0x0000c83cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe00u));

L_C840:
    /* 0000c840   4  pea (df6,A4) */
    c->pc = RC_ADDR(0x0000c840u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xdf6u));

L_C844:
    /* 0000c844   4  pea (0000c8f4) */
    c->pc = RC_ADDR(0x0000c844u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c8f4u));

L_C848:
    /* 0000c848   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000c848u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000c84cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_C84C:
    /* 0000c84c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000c84cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_C850:
    /* 0000c850   4  move.l D0,(de2,A4) */
    c->pc = RC_ADDR(0x0000c850u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xde2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C854:
    /* 0000c854   4  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c854u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C858:
    /* 0000c858   4  pea (e04,A4) */
    c->pc = RC_ADDR(0x0000c858u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe04u));

L_C85C:
    /* 0000c85c   4  pea (df8,A4) */
    c->pc = RC_ADDR(0x0000c85cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xdf8u));

L_C860:
    /* 0000c860   4  pea (0000c8fa) */
    c->pc = RC_ADDR(0x0000c860u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c8fau));

L_C864:
    /* 0000c864   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000c864u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000c868u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_C868:
    /* 0000c868   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000c868u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_C86C:
    /* 0000c86c   4  move.l D0,(de6,A4) */
    c->pc = RC_ADDR(0x0000c86cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xde6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C870:
    /* 0000c870   2  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c870u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C872:
    /* 0000c872   4  pea (e08,A4) */
    c->pc = RC_ADDR(0x0000c872u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe08u));

L_C876:
    /* 0000c876   4  pea (dfa,A4) */
    c->pc = RC_ADDR(0x0000c876u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xdfau));

L_C87A:
    /* 0000c87a   4  pea (0000c900) */
    c->pc = RC_ADDR(0x0000c87au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c900u));

L_C87E:
    /* 0000c87e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000c87eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000c882u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_C882:
    /* 0000c882   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000c882u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_C886:
    /* 0000c886   4  move.l D0,(dea,A4) */
    c->pc = RC_ADDR(0x0000c886u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xdeau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C88A:
    /* 0000c88a   2  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c88au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C88C:
    /* 0000c88c   4  pea (e0c,A4) */
    c->pc = RC_ADDR(0x0000c88cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe0cu));

L_C890:
    /* 0000c890   4  pea (dfc,A4) */
    c->pc = RC_ADDR(0x0000c890u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xdfcu));

L_C894:
    /* 0000c894   4  pea (0000c906) */
    c->pc = RC_ADDR(0x0000c894u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c906u));

L_C898:
    /* 0000c898   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000c898u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000c89cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_C89C:
    /* 0000c89c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000c89cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_C8A0:
    /* 0000c8a0   4  move.l D0,(dee,A4) */
    c->pc = RC_ADDR(0x0000c8a0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xdeeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C8A4:
    /* 0000c8a4   2  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c8a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C8A6:
    /* 0000c8a6   4  pea (e10,A4) */
    c->pc = RC_ADDR(0x0000c8a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe10u));

L_C8AA:
    /* 0000c8aa   4  pea (dfe,A4) */
    c->pc = RC_ADDR(0x0000c8aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xdfeu));

L_C8AE:
    /* 0000c8ae   4  pea (0000c90c) */
    c->pc = RC_ADDR(0x0000c8aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c90cu));

L_C8B2:
    /* 0000c8b2   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000c8b2u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000c8b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_C8B6:
    /* 0000c8b6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000c8b6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_C8BA:
    /* 0000c8ba   4  move.l D0,(df2,A4) */
    c->pc = RC_ADDR(0x0000c8bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xdf2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C8BE:
    /* 0000c8be   2  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c8beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C8C0:
    /* 0000c8c0   4  pea (0000c913) */
    c->pc = RC_ADDR(0x0000c8c0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c913u));

L_C8C4:
    /* 0000c8c4   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000c8c4u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000c8c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_C8C8:
    /* 0000c8c8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000c8c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C8CA:
    /* 0000c8ca   4  pea (0000c921) */
    c->pc = RC_ADDR(0x0000c8cau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c921u));

L_C8CE:
    /* 0000c8ce   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x0000c8ceu);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x0000c8d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_C8D2:
    /* 0000c8d2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000c8d2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C8D4:
    /* 0000c8d4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000c8d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C8D6:
    /* 0000c8d6   2  beq 0000c8de */
    c->pc = RC_ADDR(0x0000c8d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C8DE;

L_C8D8:
    /* 0000c8d8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000c8d8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_C8DA:
    /* 0000c8da   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c8dau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C8DC:
    /* 0000c8dc   2  rts */
    c->pc = RC_ADDR(0x0000c8dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_C8DE:
    /* 0000c8de   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000c8deu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_C8E0:
    /* 0000c8e0   2  bra 0000c8da */
    c->pc = RC_ADDR(0x0000c8e0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_C8DA;

}
