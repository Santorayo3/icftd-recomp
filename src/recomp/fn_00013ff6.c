/* fn_00013ff6 - 48 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013ff6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00013ff6u): goto L_13FF6;
    case RC_ADDR(0x00013ffau): goto L_13FFA;
    case RC_ADDR(0x00013ffeu): goto L_13FFE;
    case RC_ADDR(0x00014002u): goto L_14002;
    case RC_ADDR(0x00014006u): goto L_14006;
    case RC_ADDR(0x0001400au): goto L_1400A;
    case RC_ADDR(0x0001400eu): goto L_1400E;
    case RC_ADDR(0x00014012u): goto L_14012;
    case RC_ADDR(0x00014016u): goto L_14016;
    case RC_ADDR(0x0001401au): goto L_1401A;
    case RC_ADDR(0x0001401eu): goto L_1401E;
    case RC_ADDR(0x00014022u): goto L_14022;
    case RC_ADDR(0x00014024u): goto L_14024;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13FF6:
    /* 00013ff6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013ff6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13FFA:
    /* 00013ffa   4  pea (10e4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013ffau);
    rc_push32(c, m, (c->a[4] + 0x10e4u));

L_13FFE:
    /* 00013ffe   4  move.w #d,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013ffeu);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14002:
    /* 00014002   4  pea (00014026) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014002u);
    rc_push32(c, m, RC_ADDR(0x00014026u));

L_14006:
    /* 00014006   4  jsr (ffff817c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014006u);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001400au));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1400A:
    /* 0001400a   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001400au);
    c->a[7] = (c->a[7] + 0xau);

L_1400E:
    /* 0001400e   4  pea (1088,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001400eu);
    rc_push32(c, m, (c->a[4] + 0x1088u));

L_14012:
    /* 00014012   4  move.w #c,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014012u);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14016:
    /* 00014016   4  pea (0001402b) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014016u);
    rc_push32(c, m, RC_ADDR(0x0001402bu));

L_1401A:
    /* 0001401a   4  jsr (ffff817c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001401au);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001401eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1401E:
    /* 0001401e   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001401eu);
    c->a[7] = (c->a[7] + 0xau);

L_14022:
    /* 00014022   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014022u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14024:
    /* 00014024   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00014024u);
    rc_ret(c, m);
    return;

}
