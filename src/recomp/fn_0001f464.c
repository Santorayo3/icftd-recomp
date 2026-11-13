/* fn_0001f464 - 50 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f464(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f464u): goto L_1F464;
    case RC_ADDR(0x0001f466u): goto L_1F466;
    case RC_ADDR(0x0001f46au): goto L_1F46A;
    case RC_ADDR(0x0001f46cu): goto L_1F46C;
    case RC_ADDR(0x0001f470u): goto L_1F470;
    case RC_ADDR(0x0001f474u): goto L_1F474;
    case RC_ADDR(0x0001f478u): goto L_1F478;
    case RC_ADDR(0x0001f47cu): goto L_1F47C;
    case RC_ADDR(0x0001f480u): goto L_1F480;
    case RC_ADDR(0x0001f482u): goto L_1F482;
    case RC_ADDR(0x0001f484u): goto L_1F484;
    case RC_ADDR(0x0001f486u): goto L_1F486;
    case RC_ADDR(0x0001f48cu): goto L_1F48C;
    case RC_ADDR(0x0001f492u): goto L_1F492;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F464:
    /* 0001f464   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f464u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F466:
    /* 0001f466   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f466u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F46A:
    /* 0001f46a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f46au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F46C:
    /* 0001f46c   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f46cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F470:
    /* 0001f470   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f470u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F474:
    /* 0001f474   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f474u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F478:
    /* 0001f478   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f478u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f47cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F47C:
    /* 0001f47c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f47cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F480:
    /* 0001f480   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f480u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F482:
    /* 0001f482   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f482u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F484:
    /* 0001f484   2  beq 0001f492 */
    c->pc = RC_ADDR(0x0001f484u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F492;

L_1F486:
    /* 0001f486   6  move.l (10,A5),(20,A2) */
    c->pc = RC_ADDR(0x0001f486u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F48C:
    /* 0001f48c   6  move.l (14,A5),(24,A2) */
    c->pc = RC_ADDR(0x0001f48cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F492:
    /* 0001f492   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f492u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
