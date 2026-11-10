/* fn_0000be34 - 76 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000be34(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000be34u): goto L_BE34;
    case RC_ADDR(0x0000be38u): goto L_BE38;
    case RC_ADDR(0x0000be3cu): goto L_BE3C;
    case RC_ADDR(0x0000be40u): goto L_BE40;
    case RC_ADDR(0x0000be44u): goto L_BE44;
    case RC_ADDR(0x0000be46u): goto L_BE46;
    case RC_ADDR(0x0000be48u): goto L_BE48;
    case RC_ADDR(0x0000be4cu): goto L_BE4C;
    case RC_ADDR(0x0000be4eu): goto L_BE4E;
    case RC_ADDR(0x0000be50u): goto L_BE50;
    case RC_ADDR(0x0000be54u): goto L_BE54;
    case RC_ADDR(0x0000be56u): goto L_BE56;
    case RC_ADDR(0x0000be5au): goto L_BE5A;
    case RC_ADDR(0x0000be5cu): goto L_BE5C;
    case RC_ADDR(0x0000be60u): goto L_BE60;
    case RC_ADDR(0x0000be64u): goto L_BE64;
    case RC_ADDR(0x0000be66u): goto L_BE66;
    case RC_ADDR(0x0000be6au): goto L_BE6A;
    case RC_ADDR(0x0000be6eu): goto L_BE6E;
    case RC_ADDR(0x0000be72u): goto L_BE72;
    case RC_ADDR(0x0000be74u): goto L_BE74;
    case RC_ADDR(0x0000be78u): goto L_BE78;
    case RC_ADDR(0x0000be7cu): goto L_BE7C;
    case RC_ADDR(0x0000be7eu): goto L_BE7E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BE34:
    /* 0000be34   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000be34u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_BE38:
    /* 0000be38   4  clr.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000be38u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE3C:
    /* 0000be3c   4  clr.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x0000be3cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x1c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BE40:
    /* 0000be40   4  jsr (0000bd48) */
    c->pc = RC_ADDR(0x0000be40u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000be44u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000bd48u);
    return;

L_BE44:
    /* 0000be44   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000be44u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_BE46:
    /* 0000be46   2  bne 0000be50 */
    c->pc = RC_ADDR(0x0000be46u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_BE50;

L_BE48:
    /* 0000be48   4  move.w (fffffec8,A4),D0 */
    c->pc = RC_ADDR(0x0000be48u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE4C:
    /* 0000be4c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000be4cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BE4E:
    /* 0000be4e   2  rts */
    c->pc = RC_ADDR(0x0000be4eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_BE50:
    /* 0000be50   4  pea (0000b528) */
    c->pc = RC_ADDR(0x0000be50u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000b528u));

L_BE54:
    /* 0000be54   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000be54u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BE56:
    /* 0000be56   4  jsr (ffff81fa,A4) */
    c->pc = RC_ADDR(0x0000be56u);
    rc_step(c, m);
    /* vector 84 */
    rc_push32(c, m, RC_ADDR(0x0000be5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c50u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d2c6u);
    return;

L_BE5A:
    /* 0000be5a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000be5au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BE5C:
    /* 0000be5c   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0000be5cu);
    rc_step(c, m);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000be60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_BE60:
    /* 0000be60   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x0000be60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_BE64:
    /* 0000be64   2  bne 0000be74 */
    c->pc = RC_ADDR(0x0000be64u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_BE74;

L_BE66:
    /* 0000be66   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000be66u);
    rc_step(c, m);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BE6A:
    /* 0000be6a   4  pea (0000be80) */
    c->pc = RC_ADDR(0x0000be6au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000be80u));

L_BE6E:
    /* 0000be6e   4  jsr (000050ca) */
    c->pc = RC_ADDR(0x0000be6eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000be72u));
    rc_depth++;
    c->pc = RC_ADDR(0x000050cau);
    return;

L_BE72:
    /* 0000be72   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000be72u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_BE74:
    /* 0000be74   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x0000be74u);
    rc_step(c, m);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0000be78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009becu);
    return;

L_BE78:
    /* 0000be78   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0000be78u);
    rc_step(c, m);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0000be7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_BE7C:
    /* 0000be7c   2  bsr 0000be1e */
    c->pc = RC_ADDR(0x0000be7cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000be7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000be1eu);
    return;

L_BE7E:
    /* 0000be7e   2  bra 0000be4c */
    c->pc = RC_ADDR(0x0000be7eu);
    rc_step(c, m);
    rc_tick();
    goto L_BE4C;

}
