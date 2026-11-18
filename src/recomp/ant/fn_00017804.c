/* fn_00017804 - 102 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017804(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00017804u): goto L_17804;
    case RC_ADDR(0x00017808u): goto L_17808;
    case RC_ADDR(0x0001780au): goto L_1780A;
    case RC_ADDR(0x0001780eu): goto L_1780E;
    case RC_ADDR(0x00017810u): goto L_17810;
    case RC_ADDR(0x00017814u): goto L_17814;
    case RC_ADDR(0x00017816u): goto L_17816;
    case RC_ADDR(0x0001781au): goto L_1781A;
    case RC_ADDR(0x0001781cu): goto L_1781C;
    case RC_ADDR(0x00017820u): goto L_17820;
    case RC_ADDR(0x00017822u): goto L_17822;
    case RC_ADDR(0x00017826u): goto L_17826;
    case RC_ADDR(0x00017828u): goto L_17828;
    case RC_ADDR(0x0001782cu): goto L_1782C;
    case RC_ADDR(0x0001782eu): goto L_1782E;
    case RC_ADDR(0x00017832u): goto L_17832;
    case RC_ADDR(0x00017834u): goto L_17834;
    case RC_ADDR(0x00017838u): goto L_17838;
    case RC_ADDR(0x0001783au): goto L_1783A;
    case RC_ADDR(0x0001783eu): goto L_1783E;
    case RC_ADDR(0x00017840u): goto L_17840;
    case RC_ADDR(0x00017844u): goto L_17844;
    case RC_ADDR(0x00017846u): goto L_17846;
    case RC_ADDR(0x0001784au): goto L_1784A;
    case RC_ADDR(0x0001784cu): goto L_1784C;
    case RC_ADDR(0x00017850u): goto L_17850;
    case RC_ADDR(0x00017852u): goto L_17852;
    case RC_ADDR(0x00017856u): goto L_17856;
    case RC_ADDR(0x00017858u): goto L_17858;
    case RC_ADDR(0x0001785cu): goto L_1785C;
    case RC_ADDR(0x0001785eu): goto L_1785E;
    case RC_ADDR(0x00017862u): goto L_17862;
    case RC_ADDR(0x00017866u): goto L_17866;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17804:
    /* 00017804   4  cmpi.w #be,D2 */
    c->pc = RC_ADDR(0x00017804u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_17808:
    /* 00017808   2  blt 00017866 */
    c->pc = RC_ADDR(0x00017808u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_17866;

L_1780A:
    /* 0001780a   4  cmpi.w #164,D2 */
    c->pc = RC_ADDR(0x0001780au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000164u);

L_1780E:
    /* 0001780e   2  bne 00017816 */
    c->pc = RC_ADDR(0x0001780eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17816;

L_17810:
    /* 00017810   4  move.w #216,D0 */
    c->pc = RC_ADDR(0x00017810u);
    rc_step(c, m, 8);
    t0 = 0x00000216u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17814:
    /* 00017814   2  bra 00017862 */
    c->pc = RC_ADDR(0x00017814u);
    rc_step(c, m, 10);
    goto L_17862;

L_17816:
    /* 00017816   4  cmpi.w #165,D2 */
    c->pc = RC_ADDR(0x00017816u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000165u);

L_1781A:
    /* 0001781a   2  bne 00017822 */
    c->pc = RC_ADDR(0x0001781au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17822;

L_1781C:
    /* 0001781c   4  move.w #217,D0 */
    c->pc = RC_ADDR(0x0001781cu);
    rc_step(c, m, 8);
    t0 = 0x00000217u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17820:
    /* 00017820   2  bra 00017862 */
    c->pc = RC_ADDR(0x00017820u);
    rc_step(c, m, 10);
    goto L_17862;

L_17822:
    /* 00017822   4  cmpi.w #176,D2 */
    c->pc = RC_ADDR(0x00017822u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000176u);

L_17826:
    /* 00017826   2  bne 0001782e */
    c->pc = RC_ADDR(0x00017826u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1782E;

L_17828:
    /* 00017828   4  move.w #228,D0 */
    c->pc = RC_ADDR(0x00017828u);
    rc_step(c, m, 8);
    t0 = 0x00000228u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1782C:
    /* 0001782c   2  bra 00017862 */
    c->pc = RC_ADDR(0x0001782cu);
    rc_step(c, m, 10);
    goto L_17862;

L_1782E:
    /* 0001782e   4  cmpi.w #177,D2 */
    c->pc = RC_ADDR(0x0001782eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000177u);

L_17832:
    /* 00017832   2  bne 0001783a */
    c->pc = RC_ADDR(0x00017832u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1783A;

L_17834:
    /* 00017834   4  move.w #229,D0 */
    c->pc = RC_ADDR(0x00017834u);
    rc_step(c, m, 8);
    t0 = 0x00000229u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17838:
    /* 00017838   2  bra 00017862 */
    c->pc = RC_ADDR(0x00017838u);
    rc_step(c, m, 10);
    goto L_17862;

L_1783A:
    /* 0001783a   4  cmpi.w #1a1,D2 */
    c->pc = RC_ADDR(0x0001783au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a1u);

L_1783E:
    /* 0001783e   2  bne 00017846 */
    c->pc = RC_ADDR(0x0001783eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17846;

L_17840:
    /* 00017840   4  move.w #1a6,D0 */
    c->pc = RC_ADDR(0x00017840u);
    rc_step(c, m, 8);
    t0 = 0x000001a6u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17844:
    /* 00017844   2  bra 00017862 */
    c->pc = RC_ADDR(0x00017844u);
    rc_step(c, m, 10);
    goto L_17862;

L_17846:
    /* 00017846   4  cmpi.w #1a2,D2 */
    c->pc = RC_ADDR(0x00017846u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a2u);

L_1784A:
    /* 0001784a   2  bne 00017852 */
    c->pc = RC_ADDR(0x0001784au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17852;

L_1784C:
    /* 0001784c   4  move.w #1a7,D0 */
    c->pc = RC_ADDR(0x0001784cu);
    rc_step(c, m, 8);
    t0 = 0x000001a7u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17850:
    /* 00017850   2  bra 00017862 */
    c->pc = RC_ADDR(0x00017850u);
    rc_step(c, m, 10);
    goto L_17862;

L_17852:
    /* 00017852   4  cmpi.w #1a3,D2 */
    c->pc = RC_ADDR(0x00017852u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a3u);

L_17856:
    /* 00017856   2  bne 0001785e */
    c->pc = RC_ADDR(0x00017856u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1785E;

L_17858:
    /* 00017858   4  move.w #1a8,D0 */
    c->pc = RC_ADDR(0x00017858u);
    rc_step(c, m, 8);
    t0 = 0x000001a8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1785C:
    /* 0001785c   2  bra 00017862 */
    c->pc = RC_ADDR(0x0001785cu);
    rc_step(c, m, 10);
    goto L_17862;

L_1785E:
    /* 0001785e   4  bsr 000177c2 */
    c->pc = RC_ADDR(0x0001785eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017862u));
    rc_depth++;
    c->pc = RC_ADDR(0x000177c2u);
    return;

L_17862:
    /* 00017862   4  move.w D0,(8,A7) */
    c->pc = RC_ADDR(0x00017862u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[7] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17866:
    /* 00017866   4  jmp (0001304e) */
    c->pc = RC_ADDR(0x00017866u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001304eu);
    return;

}
