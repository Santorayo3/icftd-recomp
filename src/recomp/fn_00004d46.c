/* fn_00004d46 - 48 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004d46(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004d46u): goto L_4D46;
    case RC_ADDR(0x00004d4au): goto L_4D4A;
    case RC_ADDR(0x00004d4eu): goto L_4D4E;
    case RC_ADDR(0x00004d50u): goto L_4D50;
    case RC_ADDR(0x00004d54u): goto L_4D54;
    case RC_ADDR(0x00004d58u): goto L_4D58;
    case RC_ADDR(0x00004d5au): goto L_4D5A;
    case RC_ADDR(0x00004d5eu): goto L_4D5E;
    case RC_ADDR(0x00004d62u): goto L_4D62;
    case RC_ADDR(0x00004d64u): goto L_4D64;
    case RC_ADDR(0x00004d68u): goto L_4D68;
    case RC_ADDR(0x00004d6cu): goto L_4D6C;
    case RC_ADDR(0x00004d6eu): goto L_4D6E;
    case RC_ADDR(0x00004d72u): goto L_4D72;
    case RC_ADDR(0x00004d74u): goto L_4D74;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4D46:
    /* 00004d46   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00004d46u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4D4A:
    /* 00004d4a   4  tst.l (ffff8570,A4) */
    c->pc = RC_ADDR(0x00004d4au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a90u));
    rc_set_nzvc(c, t0, RC_L);

L_4D4E:
    /* 00004d4e   2  beq 00004d5e */
    c->pc = RC_ADDR(0x00004d4eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_4D5E;

L_4D50:
    /* 00004d50   4  move.l (ffff8570,A4),-(A7) */
    c->pc = RC_ADDR(0x00004d50u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D54:
    /* 00004d54   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x00004d54u);
    rc_step(c, m);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x00004d58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_4D58:
    /* 00004d58   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004d58u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4D5A:
    /* 00004d5a   4  clr.l (ffff8570,A4) */
    c->pc = RC_ADDR(0x00004d5au);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x7a90u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4D5E:
    /* 00004d5e   4  tst.l (ffff8574,A4) */
    c->pc = RC_ADDR(0x00004d5eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a8cu));
    rc_set_nzvc(c, t0, RC_L);

L_4D62:
    /* 00004d62   2  beq 00004d72 */
    c->pc = RC_ADDR(0x00004d62u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_4D72;

L_4D64:
    /* 00004d64   4  move.l (ffff8574,A4),-(A7) */
    c->pc = RC_ADDR(0x00004d64u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D68:
    /* 00004d68   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00004d68u);
    rc_step(c, m);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00004d6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021db2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217c4u);
    return;

L_4D6C:
    /* 00004d6c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004d6cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4D6E:
    /* 00004d6e   4  clr.l (ffff8574,A4) */
    c->pc = RC_ADDR(0x00004d6eu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x7a8cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4D72:
    /* 00004d72   2  unlk A5 */
    c->pc = RC_ADDR(0x00004d72u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4D74:
    /* 00004d74   2  rts */
    c->pc = RC_ADDR(0x00004d74u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
