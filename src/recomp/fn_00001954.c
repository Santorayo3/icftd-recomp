/* fn_00001954 - 32 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001954(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001954u): goto L_1954;
    case RC_ADDR(0x00001958u): goto L_1958;
    case RC_ADDR(0x0000195cu): goto L_195C;
    case RC_ADDR(0x00001960u): goto L_1960;
    case RC_ADDR(0x00001964u): goto L_1964;
    case RC_ADDR(0x00001968u): goto L_1968;
    case RC_ADDR(0x0000196au): goto L_196A;
    case RC_ADDR(0x0000196cu): goto L_196C;
    case RC_ADDR(0x0000196eu): goto L_196E;
    case RC_ADDR(0x00001970u): goto L_1970;
    case RC_ADDR(0x00001972u): goto L_1972;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1954:
    /* 00001954   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001954u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1958:
    /* 00001958   4  move.w (ffffefe4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001958u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_195C:
    /* 0000195c   4  mulu.w #12,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000195cu);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_1960:
    /* 00001960   4  lea (ffff8588,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001960u);
    c->a[0] = (c->a[4] - 0x7a78u);

L_1964:
    /* 00001964   4  tst.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001964u);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1968:
    /* 00001968   2  beq 00001970 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001968u);
    if (rc_cond(c, 7)) goto L_1970;

L_196A:
    /* 0000196a   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000196au);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_196C:
    /* 0000196c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000196cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_196E:
    /* 0000196e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000196eu);
    rc_ret(c, m);
    return;

L_1970:
    /* 00001970   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001970u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1972:
    /* 00001972   2  bra 0000196c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00001972u);
    rc_tick();
    goto L_196C;

}
