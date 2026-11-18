/* fn_0001dfd6 - 96 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dfd6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dfd6u): goto L_1DFD6;
    case RC_ADDR(0x0001dfdau): goto L_1DFDA;
    case RC_ADDR(0x0001dfdeu): goto L_1DFDE;
    case RC_ADDR(0x0001dfe0u): goto L_1DFE0;
    case RC_ADDR(0x0001dfe4u): goto L_1DFE4;
    case RC_ADDR(0x0001dfe6u): goto L_1DFE6;
    case RC_ADDR(0x0001dfeau): goto L_1DFEA;
    case RC_ADDR(0x0001dfecu): goto L_1DFEC;
    case RC_ADDR(0x0001dff0u): goto L_1DFF0;
    case RC_ADDR(0x0001dff2u): goto L_1DFF2;
    case RC_ADDR(0x0001dff6u): goto L_1DFF6;
    case RC_ADDR(0x0001dff8u): goto L_1DFF8;
    case RC_ADDR(0x0001dffeu): goto L_1DFFE;
    case RC_ADDR(0x0001e000u): goto L_1E000;
    case RC_ADDR(0x0001e006u): goto L_1E006;
    case RC_ADDR(0x0001e008u): goto L_1E008;
    case RC_ADDR(0x0001e00cu): goto L_1E00C;
    case RC_ADDR(0x0001e010u): goto L_1E010;
    case RC_ADDR(0x0001e012u): goto L_1E012;
    case RC_ADDR(0x0001e018u): goto L_1E018;
    case RC_ADDR(0x0001e01eu): goto L_1E01E;
    case RC_ADDR(0x0001e020u): goto L_1E020;
    case RC_ADDR(0x0001e026u): goto L_1E026;
    case RC_ADDR(0x0001e02cu): goto L_1E02C;
    case RC_ADDR(0x0001e032u): goto L_1E032;
    case RC_ADDR(0x0001e034u): goto L_1E034;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DFD6:
    /* 0001dfd6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dfd6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DFDA:
    /* 0001dfda   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001dfdau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_1DFDE:
    /* 0001dfde   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x0001dfdeu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_1DFE0:
    /* 0001dfe0   4  cmpi.w #ffff,(A0) */
    c->pc = RC_ADDR(0x0001dfe0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1DFE4:
    /* 0001dfe4   2  beq 0001e008 */
    c->pc = RC_ADDR(0x0001dfe4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E008;

L_1DFE6:
    /* 0001dfe6   4  cmpi.w #ff00,(A0) */
    c->pc = RC_ADDR(0x0001dfe6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000ff00u);

L_1DFEA:
    /* 0001dfea   2  beq 0001dff2 */
    c->pc = RC_ADDR(0x0001dfeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DFF2;

L_1DFEC:
    /* 0001dfec   4  cmpi.w #fffe,(A0) */
    c->pc = RC_ADDR(0x0001dfecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_1DFF0:
    /* 0001dff0   2  bne 0001dfde */
    c->pc = RC_ADDR(0x0001dff0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1DFDE; }

L_1DFF2:
    /* 0001dff2   4  tst.w (2cf0,A4) */
    c->pc = RC_ADDR(0x0001dff2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cf0u));
    rc_set_nzvc(c, t0, RC_W);

L_1DFF6:
    /* 0001dff6   2  beq 0001e000 */
    c->pc = RC_ADDR(0x0001dff6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E000;

L_1DFF8:
    /* 0001dff8   6  subi.b #a,(fffffffe,A0) */
    c->pc = RC_ADDR(0x0001dff8u);
    rc_step(c, m, 20);
    t3 = (c->a[0] - 0x2u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1DFFE:
    /* 0001dffe   2  bra 0001dfde */
    c->pc = RC_ADDR(0x0001dffeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DFDE;

L_1E000:
    /* 0001e000   6  addi.b #a,(fffffffe,A0) */
    c->pc = RC_ADDR(0x0001e000u);
    rc_step(c, m, 20);
    t3 = (c->a[0] - 0x2u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1E006:
    /* 0001e006   2  bra 0001dfde */
    c->pc = RC_ADDR(0x0001e006u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DFDE;

L_1E008:
    /* 0001e008   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001e008u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_1E00C:
    /* 0001e00c   4  tst.w (2cf0,A4) */
    c->pc = RC_ADDR(0x0001e00cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cf0u));
    rc_set_nzvc(c, t0, RC_W);

L_1E010:
    /* 0001e010   2  beq 0001e020 */
    c->pc = RC_ADDR(0x0001e010u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E020;

L_1E012:
    /* 0001e012   6  subi.b #a,(12,A0) */
    c->pc = RC_ADDR(0x0001e012u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x12u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1E018:
    /* 0001e018   6  subi.b #a,(16,A0) */
    c->pc = RC_ADDR(0x0001e018u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x16u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1E01E:
    /* 0001e01e   2  bra 0001e02c */
    c->pc = RC_ADDR(0x0001e01eu);
    rc_step(c, m, 10);
    goto L_1E02C;

L_1E020:
    /* 0001e020   6  addi.b #a,(12,A0) */
    c->pc = RC_ADDR(0x0001e020u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x12u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1E026:
    /* 0001e026   6  addi.b #a,(16,A0) */
    c->pc = RC_ADDR(0x0001e026u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0x16u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x0000000au;
    rc_flags_add(c, RC_B, t1, 0x0000000au, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1E02C:
    /* 0001e02c   6  eori.w #1,(2cf0,A4) */
    c->pc = RC_ADDR(0x0001e02cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x2cf0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 ^ 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1E032:
    /* 0001e032   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e032u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E034:
    /* 0001e034   2  rts */
    c->pc = RC_ADDR(0x0001e034u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
