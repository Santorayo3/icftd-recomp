/* fn_0001075a - 76 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001075a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001075au): goto L_1075A;
    case RC_ADDR(0x0001075eu): goto L_1075E;
    case RC_ADDR(0x00010762u): goto L_10762;
    case RC_ADDR(0x00010764u): goto L_10764;
    case RC_ADDR(0x0001076au): goto L_1076A;
    case RC_ADDR(0x0001076eu): goto L_1076E;
    case RC_ADDR(0x00010770u): goto L_10770;
    case RC_ADDR(0x00010774u): goto L_10774;
    case RC_ADDR(0x00010776u): goto L_10776;
    case RC_ADDR(0x0001077au): goto L_1077A;
    case RC_ADDR(0x0001077cu): goto L_1077C;
    case RC_ADDR(0x0001077eu): goto L_1077E;
    case RC_ADDR(0x00010782u): goto L_10782;
    case RC_ADDR(0x00010784u): goto L_10784;
    case RC_ADDR(0x00010788u): goto L_10788;
    case RC_ADDR(0x0001078au): goto L_1078A;
    case RC_ADDR(0x0001078eu): goto L_1078E;
    case RC_ADDR(0x00010790u): goto L_10790;
    case RC_ADDR(0x00010794u): goto L_10794;
    case RC_ADDR(0x00010796u): goto L_10796;
    case RC_ADDR(0x0001079au): goto L_1079A;
    case RC_ADDR(0x0001079eu): goto L_1079E;
    case RC_ADDR(0x000107a2u): goto L_107A2;
    case RC_ADDR(0x000107a4u): goto L_107A4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1075A:
    /* 0001075a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001075au);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1075E:
    /* 0001075e   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x0001075eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_10762:
    /* 00010762   2  beq 0001079a */
    c->pc = RC_ADDR(0x00010762u);
    if (rc_cond(c, 7)) goto L_1079A;

L_10764:
    /* 00010764   6  move.w #1,(ffff83d0,A4) */
    c->pc = RC_ADDR(0x00010764u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1076A:
    /* 0001076a   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x0001076au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_1076E:
    /* 0001076e   2  beq 00010776 */
    c->pc = RC_ADDR(0x0001076eu);
    if (rc_cond(c, 7)) goto L_10776;

L_10770:
    /* 00010770   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00010770u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00010774u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_10774:
    /* 00010774   2  bra 0001076a */
    c->pc = RC_ADDR(0x00010774u);
    rc_tick();
    goto L_1076A;

L_10776:
    /* 00010776   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00010776u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1077A:
    /* 0001077a   2  bsr 00010736 */
    c->pc = RC_ADDR(0x0001077au);
    rc_push32(c, m, RC_ADDR(0x0001077cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010736u);
    return;

L_1077C:
    /* 0001077c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001077cu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1077E:
    /* 0001077e   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x0001077eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_10782:
    /* 00010782   2  bne 0001078a */
    c->pc = RC_ADDR(0x00010782u);
    if (rc_cond(c, 6)) goto L_1078A;

L_10784:
    /* 00010784   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00010784u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00010788u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_10788:
    /* 00010788   2  bra 0001077e */
    c->pc = RC_ADDR(0x00010788u);
    rc_tick();
    goto L_1077E;

L_1078A:
    /* 0001078a   4  tst.w (ffffb032,A4) */
    c->pc = RC_ADDR(0x0001078au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fceu));
    rc_set_nzvc(c, t0, RC_W);

L_1078E:
    /* 0001078e   2  beq 00010796 */
    c->pc = RC_ADDR(0x0001078eu);
    if (rc_cond(c, 7)) goto L_10796;

L_10790:
    /* 00010790   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00010790u);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00010794u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_10794:
    /* 00010794   2  bra 0001078a */
    c->pc = RC_ADDR(0x00010794u);
    rc_tick();
    goto L_1078A;

L_10796:
    /* 00010796   4  clr.w (ffff83d0,A4) */
    c->pc = RC_ADDR(0x00010796u);
    rc_wr16(c, m, (c->a[4] - 0x7c30u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1079A:
    /* 0001079a   4  clr.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x0001079au);
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1079E:
    /* 0001079e   4  clr.w (ffffce2e,A4) */
    c->pc = RC_ADDR(0x0001079eu);
    rc_wr16(c, m, (c->a[4] - 0x31d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_107A2:
    /* 000107a2   2  unlk A5 */
    c->pc = RC_ADDR(0x000107a2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_107A4:
    /* 000107a4   2  rts */
    c->pc = RC_ADDR(0x000107a4u);
    rc_ret(c, m);
    return;

}
