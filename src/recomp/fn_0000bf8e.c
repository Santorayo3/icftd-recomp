/* fn_0000bf8e - 60 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000bf8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000bf8eu): goto L_BF8E;
    case RC_ADDR(0x0000bf92u): goto L_BF92;
    case RC_ADDR(0x0000bf96u): goto L_BF96;
    case RC_ADDR(0x0000bf9au): goto L_BF9A;
    case RC_ADDR(0x0000bf9cu): goto L_BF9C;
    case RC_ADDR(0x0000bfa0u): goto L_BFA0;
    case RC_ADDR(0x0000bfa4u): goto L_BFA4;
    case RC_ADDR(0x0000bfa8u): goto L_BFA8;
    case RC_ADDR(0x0000bfaau): goto L_BFAA;
    case RC_ADDR(0x0000bfaeu): goto L_BFAE;
    case RC_ADDR(0x0000bfb2u): goto L_BFB2;
    case RC_ADDR(0x0000bfb4u): goto L_BFB4;
    case RC_ADDR(0x0000bfb6u): goto L_BFB6;
    case RC_ADDR(0x0000bfbau): goto L_BFBA;
    case RC_ADDR(0x0000bfbeu): goto L_BFBE;
    case RC_ADDR(0x0000bfc0u): goto L_BFC0;
    case RC_ADDR(0x0000bfc2u): goto L_BFC2;
    case RC_ADDR(0x0000bfc6u): goto L_BFC6;
    case RC_ADDR(0x0000bfc8u): goto L_BFC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BF8E:
    /* 0000bf8e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000bf8eu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_BF92:
    /* 0000bf92   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000bf92u);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF96:
    /* 0000bf96   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000bf96u);
    rc_step(c, m);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000bf9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_BF9A:
    /* 0000bf9a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000bf9au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_BF9C:
    /* 0000bf9c   4  move.w D0,(fffff376,A4) */
    c->pc = RC_ADDR(0x0000bf9cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xc8au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFA0:
    /* 0000bfa0   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000bfa0u);
    rc_step(c, m);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFA4:
    /* 0000bfa4   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000bfa4u);
    rc_step(c, m);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000bfa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_BFA8:
    /* 0000bfa8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000bfa8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_BFAA:
    /* 0000bfaa   4  move.w D0,(fffff378,A4) */
    c->pc = RC_ADDR(0x0000bfaau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xc88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFAE:
    /* 0000bfae   4  cmp.w (fffff376,A4),D0 */
    c->pc = RC_ADDR(0x0000bfaeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xc8au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_BFB2:
    /* 0000bfb2   2  bne 0000bfb6 */
    c->pc = RC_ADDR(0x0000bfb2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_BFB6;

L_BFB4:
    /* 0000bfb4   2  bra 0000bfa0 */
    c->pc = RC_ADDR(0x0000bfb4u);
    rc_step(c, m);
    rc_tick();
    goto L_BFA0;

L_BFB6:
    /* 0000bfb6   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000bfb6u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFBA:
    /* 0000bfba   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000bfbau);
    rc_step(c, m);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000bfbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_BFBE:
    /* 0000bfbe   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000bfbeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_BFC0:
    /* 0000bfc0   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x0000bfc0u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BFC2:
    /* 0000bfc2   4  move.w D0,(fffff37a,A4) */
    c->pc = RC_ADDR(0x0000bfc2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xc86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFC6:
    /* 0000bfc6   2  unlk A5 */
    c->pc = RC_ADDR(0x0000bfc6u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BFC8:
    /* 0000bfc8   2  rts */
    c->pc = RC_ADDR(0x0000bfc8u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
