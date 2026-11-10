/* fn_00006c4c - 38 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006c4c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00006c4cu): goto L_6C4C;
    case RC_ADDR(0x00006c50u): goto L_6C50;
    case RC_ADDR(0x00006c54u): goto L_6C54;
    case RC_ADDR(0x00006c56u): goto L_6C56;
    case RC_ADDR(0x00006c5au): goto L_6C5A;
    case RC_ADDR(0x00006c5eu): goto L_6C5E;
    case RC_ADDR(0x00006c62u): goto L_6C62;
    case RC_ADDR(0x00006c64u): goto L_6C64;
    case RC_ADDR(0x00006c66u): goto L_6C66;
    case RC_ADDR(0x00006c68u): goto L_6C68;
    case RC_ADDR(0x00006c6au): goto L_6C6A;
    case RC_ADDR(0x00006c6cu): goto L_6C6C;
    case RC_ADDR(0x00006c6eu): goto L_6C6E;
    case RC_ADDR(0x00006c70u): goto L_6C70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6C4C:
    /* 00006c4c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c4cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_6C50:
    /* 00006c50   4  tst.w (fffff26a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c50u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd96u));
    rc_set_nzvc(c, t0, RC_W);

L_6C54:
    /* 00006c54   2  beq 00006c6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c54u);
    if (rc_cond(c, 7)) goto L_6C6E;

L_6C56:
    /* 00006c56   4  pea (00006c72) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c56u);
    rc_push32(c, m, RC_ADDR(0x00006c72u));

L_6C5A:
    /* 00006c5a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c5au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C5E:
    /* 00006c5e   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c5eu);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00006c62u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_6C62:
    /* 00006c62   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c62u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6C64:
    /* 00006c64   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c64u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6C66:
    /* 00006c66   2  bne 00006c6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c66u);
    if (rc_cond(c, 6)) goto L_6C6E;

L_6C68:
    /* 00006c68   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c68u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6C6A:
    /* 00006c6a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c6au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6C6C:
    /* 00006c6c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c6cu);
    rc_ret(c, m);
    return;

L_6C6E:
    /* 00006c6e   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c6eu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6C70:
    /* 00006c70   2  bra 00006c6a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c70u);
    rc_tick();
    goto L_6C6A;

}
