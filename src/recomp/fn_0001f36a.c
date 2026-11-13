/* fn_0001f36a - 32 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f36a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f36au): goto L_1F36A;
    case RC_ADDR(0x0001f36cu): goto L_1F36C;
    case RC_ADDR(0x0001f370u): goto L_1F370;
    case RC_ADDR(0x0001f372u): goto L_1F372;
    case RC_ADDR(0x0001f376u): goto L_1F376;
    case RC_ADDR(0x0001f37au): goto L_1F37A;
    case RC_ADDR(0x0001f37eu): goto L_1F37E;
    case RC_ADDR(0x0001f382u): goto L_1F382;
    case RC_ADDR(0x0001f386u): goto L_1F386;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F36A:
    /* 0001f36a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f36au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F36C:
    /* 0001f36c   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f36cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F370:
    /* 0001f370   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f370u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F372:
    /* 0001f372   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f372u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F376:
    /* 0001f376   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f376u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F37A:
    /* 0001f37a   4  pea (2c,A0) */
    c->pc = RC_ADDR(0x0001f37au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x2cu));

L_1F37E:
    /* 0001f37e   4  jsr (0001dd96) */
    c->pc = RC_ADDR(0x0001f37eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f382u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dd96u);
    return;

L_1F382:
    /* 0001f382   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f382u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F386:
    /* 0001f386   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f386u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
