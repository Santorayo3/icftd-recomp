/* fn_0001f604 - 54 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f604(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f604u): goto L_1F604;
    case RC_ADDR(0x0001f606u): goto L_1F606;
    case RC_ADDR(0x0001f60au): goto L_1F60A;
    case RC_ADDR(0x0001f60cu): goto L_1F60C;
    case RC_ADDR(0x0001f610u): goto L_1F610;
    case RC_ADDR(0x0001f614u): goto L_1F614;
    case RC_ADDR(0x0001f618u): goto L_1F618;
    case RC_ADDR(0x0001f61cu): goto L_1F61C;
    case RC_ADDR(0x0001f620u): goto L_1F620;
    case RC_ADDR(0x0001f622u): goto L_1F622;
    case RC_ADDR(0x0001f626u): goto L_1F626;
    case RC_ADDR(0x0001f628u): goto L_1F628;
    case RC_ADDR(0x0001f62au): goto L_1F62A;
    case RC_ADDR(0x0001f62eu): goto L_1F62E;
    case RC_ADDR(0x0001f630u): goto L_1F630;
    case RC_ADDR(0x0001f636u): goto L_1F636;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F604:
    /* 0001f604   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f604u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F606:
    /* 0001f606   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f606u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F60A:
    /* 0001f60a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f60au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F60C:
    /* 0001f60c   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f60cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F610:
    /* 0001f610   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f610u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F614:
    /* 0001f614   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f614u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F618:
    /* 0001f618   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f618u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f61cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F61C:
    /* 0001f61c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f61cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F620:
    /* 0001f620   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f620u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F622:
    /* 0001f622   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f622u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F626:
    /* 0001f626   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f626u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F628:
    /* 0001f628   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f628u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F62A:
    /* 0001f62a   4  move.w D0,(3c,A2) */
    c->pc = RC_ADDR(0x0001f62au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F62E:
    /* 0001f62e   2  bne 0001f636 */
    c->pc = RC_ADDR(0x0001f62eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F636;

L_1F630:
    /* 0001f630   6  move.w #1,(3c,A2) */
    c->pc = RC_ADDR(0x0001f630u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F636:
    /* 0001f636   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f636u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
