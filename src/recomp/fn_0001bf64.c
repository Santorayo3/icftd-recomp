/* fn_0001bf64 - 96 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001bf64(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bf64u): goto L_1BF64;
    case RC_ADDR(0x0001bf68u): goto L_1BF68;
    case RC_ADDR(0x0001bf6cu): goto L_1BF6C;
    case RC_ADDR(0x0001bf6eu): goto L_1BF6E;
    case RC_ADDR(0x0001bf72u): goto L_1BF72;
    case RC_ADDR(0x0001bf74u): goto L_1BF74;
    case RC_ADDR(0x0001bf78u): goto L_1BF78;
    case RC_ADDR(0x0001bf7au): goto L_1BF7A;
    case RC_ADDR(0x0001bf7eu): goto L_1BF7E;
    case RC_ADDR(0x0001bf80u): goto L_1BF80;
    case RC_ADDR(0x0001bf84u): goto L_1BF84;
    case RC_ADDR(0x0001bf86u): goto L_1BF86;
    case RC_ADDR(0x0001bf8cu): goto L_1BF8C;
    case RC_ADDR(0x0001bf8eu): goto L_1BF8E;
    case RC_ADDR(0x0001bf94u): goto L_1BF94;
    case RC_ADDR(0x0001bf96u): goto L_1BF96;
    case RC_ADDR(0x0001bf9au): goto L_1BF9A;
    case RC_ADDR(0x0001bf9eu): goto L_1BF9E;
    case RC_ADDR(0x0001bfa0u): goto L_1BFA0;
    case RC_ADDR(0x0001bfa6u): goto L_1BFA6;
    case RC_ADDR(0x0001bfacu): goto L_1BFAC;
    case RC_ADDR(0x0001bfaeu): goto L_1BFAE;
    case RC_ADDR(0x0001bfb4u): goto L_1BFB4;
    case RC_ADDR(0x0001bfbau): goto L_1BFBA;
    case RC_ADDR(0x0001bfc0u): goto L_1BFC0;
    case RC_ADDR(0x0001bfc2u): goto L_1BFC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BF64:
    /* 0001bf64   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bf64u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BF68:
    /* 0001bf68   4  movea.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bf68u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_1BF6C:
    /* 0001bf6c   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x0001bf6cu);
    c->a[0] += 0x00000002u;

L_1BF6E:
    /* 0001bf6e   4  cmpi.w #ffff,(A0) */
    c->pc = RC_ADDR(0x0001bf6eu);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1BF72:
    /* 0001bf72   2  beq 0001bf96 */
    c->pc = RC_ADDR(0x0001bf72u);
    if (rc_cond(c, 7)) goto L_1BF96;

L_1BF74:
    /* 0001bf74   4  cmpi.w #ff00,(A0) */
    c->pc = RC_ADDR(0x0001bf74u);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000ff00u);

L_1BF78:
    /* 0001bf78   2  beq 0001bf80 */
    c->pc = RC_ADDR(0x0001bf78u);
    if (rc_cond(c, 7)) goto L_1BF80;

L_1BF7A:
    /* 0001bf7a   4  cmpi.w #fffe,(A0) */
    c->pc = RC_ADDR(0x0001bf7au);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_1BF7E:
    /* 0001bf7e   2  bne 0001bf6c */
    c->pc = RC_ADDR(0x0001bf7eu);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1BF6C; }

L_1BF80:
    /* 0001bf80   4  tst.w (22c2,A4) */
    c->pc = RC_ADDR(0x0001bf80u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22c2u));
    rc_set_nzvc(c, t0, RC_W);

L_1BF84:
    /* 0001bf84   2  beq 0001bf8e */
    c->pc = RC_ADDR(0x0001bf84u);
    if (rc_cond(c, 7)) goto L_1BF8E;

L_1BF86:
    /* 0001bf86   6  subi.b #a,(fffffffe,A0) */
    c->pc = RC_ADDR(0x0001bf86u);
    t3 = (c->a[0] - 0x2u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BF8C:
    /* 0001bf8c   2  bra 0001bf6c */
    c->pc = RC_ADDR(0x0001bf8cu);
    rc_tick();
    goto L_1BF6C;

L_1BF8E:
    /* 0001bf8e   6  addi.b #a,(fffffffe,A0) */
    c->pc = RC_ADDR(0x0001bf8eu);
    t3 = (c->a[0] - 0x2u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BF94:
    /* 0001bf94   2  bra 0001bf6c */
    c->pc = RC_ADDR(0x0001bf94u);
    rc_tick();
    goto L_1BF6C;

L_1BF96:
    /* 0001bf96   4  movea.l (a12,A4),A0 */
    c->pc = RC_ADDR(0x0001bf96u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa12u));
    c->a[0] = t0;

L_1BF9A:
    /* 0001bf9a   4  tst.w (22c2,A4) */
    c->pc = RC_ADDR(0x0001bf9au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22c2u));
    rc_set_nzvc(c, t0, RC_W);

L_1BF9E:
    /* 0001bf9e   2  beq 0001bfae */
    c->pc = RC_ADDR(0x0001bf9eu);
    if (rc_cond(c, 7)) goto L_1BFAE;

L_1BFA0:
    /* 0001bfa0   6  subi.b #a,(12,A0) */
    c->pc = RC_ADDR(0x0001bfa0u);
    t3 = (c->a[0] + 0x12u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BFA6:
    /* 0001bfa6   6  subi.b #a,(16,A0) */
    c->pc = RC_ADDR(0x0001bfa6u);
    t3 = (c->a[0] + 0x16u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BFAC:
    /* 0001bfac   2  bra 0001bfba */
    c->pc = RC_ADDR(0x0001bfacu);
    goto L_1BFBA;

L_1BFAE:
    /* 0001bfae   6  addi.b #a,(12,A0) */
    c->pc = RC_ADDR(0x0001bfaeu);
    t3 = (c->a[0] + 0x12u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BFB4:
    /* 0001bfb4   6  addi.b #a,(16,A0) */
    c->pc = RC_ADDR(0x0001bfb4u);
    t3 = (c->a[0] + 0x16u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1BFBA:
    /* 0001bfba   6  eori.w #1,(22c2,A4) */
    c->pc = RC_ADDR(0x0001bfbau);
    t3 = (c->a[4] + 0x22c2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 ^ 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1BFC0:
    /* 0001bfc0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bfc0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BFC2:
    /* 0001bfc2   2  rts */
    c->pc = RC_ADDR(0x0001bfc2u);
    rc_ret(c, m);
    return;

}
