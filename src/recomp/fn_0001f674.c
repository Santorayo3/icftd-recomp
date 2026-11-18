/* fn_0001f674 - 38 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f674(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f674u): goto L_1F674;
    case RC_ADDR(0x0001f676u): goto L_1F676;
    case RC_ADDR(0x0001f67au): goto L_1F67A;
    case RC_ADDR(0x0001f67cu): goto L_1F67C;
    case RC_ADDR(0x0001f680u): goto L_1F680;
    case RC_ADDR(0x0001f684u): goto L_1F684;
    case RC_ADDR(0x0001f688u): goto L_1F688;
    case RC_ADDR(0x0001f68cu): goto L_1F68C;
    case RC_ADDR(0x0001f690u): goto L_1F690;
    case RC_ADDR(0x0001f692u): goto L_1F692;
    case RC_ADDR(0x0001f696u): goto L_1F696;
    case RC_ADDR(0x0001f698u): goto L_1F698;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F674:
    /* 0001f674   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f674u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F676:
    /* 0001f676   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f676u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F67A:
    /* 0001f67a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f67au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F67C:
    /* 0001f67c   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f67cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F680:
    /* 0001f680   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f680u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F684:
    /* 0001f684   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f684u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F688:
    /* 0001f688   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f688u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f68cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F68C:
    /* 0001f68c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f68cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F690:
    /* 0001f690   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f690u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F692:
    /* 0001f692   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f692u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F696:
    /* 0001f696   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f696u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F698:
    /* 0001f698   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f698u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

    /* falls through into 0001f69a */
    c->pc = RC_ADDR(0x0001f69au);
    return;
}
