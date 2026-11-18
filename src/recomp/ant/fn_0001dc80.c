/* fn_0001dc80 - 422 byte(s), 119 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dc80(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dc80u): goto L_1DC80;
    case RC_ADDR(0x0001dc84u): goto L_1DC84;
    case RC_ADDR(0x0001dc88u): goto L_1DC88;
    case RC_ADDR(0x0001dc8cu): goto L_1DC8C;
    case RC_ADDR(0x0001dc8eu): goto L_1DC8E;
    case RC_ADDR(0x0001dc92u): goto L_1DC92;
    case RC_ADDR(0x0001dc96u): goto L_1DC96;
    case RC_ADDR(0x0001dc9au): goto L_1DC9A;
    case RC_ADDR(0x0001dc9eu): goto L_1DC9E;
    case RC_ADDR(0x0001dca0u): goto L_1DCA0;
    case RC_ADDR(0x0001dca4u): goto L_1DCA4;
    case RC_ADDR(0x0001dca6u): goto L_1DCA6;
    case RC_ADDR(0x0001dca8u): goto L_1DCA8;
    case RC_ADDR(0x0001dcaau): goto L_1DCAA;
    case RC_ADDR(0x0001dcacu): goto L_1DCAC;
    case RC_ADDR(0x0001dcb0u): goto L_1DCB0;
    case RC_ADDR(0x0001dcb4u): goto L_1DCB4;
    case RC_ADDR(0x0001dcb8u): goto L_1DCB8;
    case RC_ADDR(0x0001dcbcu): goto L_1DCBC;
    case RC_ADDR(0x0001dcc0u): goto L_1DCC0;
    case RC_ADDR(0x0001dcc2u): goto L_1DCC2;
    case RC_ADDR(0x0001dcc6u): goto L_1DCC6;
    case RC_ADDR(0x0001dcc8u): goto L_1DCC8;
    case RC_ADDR(0x0001dcccu): goto L_1DCCC;
    case RC_ADDR(0x0001dcd0u): goto L_1DCD0;
    case RC_ADDR(0x0001dcd4u): goto L_1DCD4;
    case RC_ADDR(0x0001dcd8u): goto L_1DCD8;
    case RC_ADDR(0x0001dcdau): goto L_1DCDA;
    case RC_ADDR(0x0001dcdcu): goto L_1DCDC;
    case RC_ADDR(0x0001dcdeu): goto L_1DCDE;
    case RC_ADDR(0x0001dce0u): goto L_1DCE0;
    case RC_ADDR(0x0001dce4u): goto L_1DCE4;
    case RC_ADDR(0x0001dce6u): goto L_1DCE6;
    case RC_ADDR(0x0001dceau): goto L_1DCEA;
    case RC_ADDR(0x0001dceeu): goto L_1DCEE;
    case RC_ADDR(0x0001dcf0u): goto L_1DCF0;
    case RC_ADDR(0x0001dcf4u): goto L_1DCF4;
    case RC_ADDR(0x0001dcf6u): goto L_1DCF6;
    case RC_ADDR(0x0001dcf8u): goto L_1DCF8;
    case RC_ADDR(0x0001dcfcu): goto L_1DCFC;
    case RC_ADDR(0x0001dcfeu): goto L_1DCFE;
    case RC_ADDR(0x0001dd00u): goto L_1DD00;
    case RC_ADDR(0x0001dd04u): goto L_1DD04;
    case RC_ADDR(0x0001dd08u): goto L_1DD08;
    case RC_ADDR(0x0001dd0au): goto L_1DD0A;
    case RC_ADDR(0x0001dd0eu): goto L_1DD0E;
    case RC_ADDR(0x0001dd10u): goto L_1DD10;
    case RC_ADDR(0x0001dd12u): goto L_1DD12;
    case RC_ADDR(0x0001dd16u): goto L_1DD16;
    case RC_ADDR(0x0001dd18u): goto L_1DD18;
    case RC_ADDR(0x0001dd1au): goto L_1DD1A;
    case RC_ADDR(0x0001dd1eu): goto L_1DD1E;
    case RC_ADDR(0x0001dd20u): goto L_1DD20;
    case RC_ADDR(0x0001dd22u): goto L_1DD22;
    case RC_ADDR(0x0001dd26u): goto L_1DD26;
    case RC_ADDR(0x0001dd2au): goto L_1DD2A;
    case RC_ADDR(0x0001dd2cu): goto L_1DD2C;
    case RC_ADDR(0x0001dd2eu): goto L_1DD2E;
    case RC_ADDR(0x0001dd32u): goto L_1DD32;
    case RC_ADDR(0x0001dd36u): goto L_1DD36;
    case RC_ADDR(0x0001dd3au): goto L_1DD3A;
    case RC_ADDR(0x0001dd40u): goto L_1DD40;
    case RC_ADDR(0x0001dd44u): goto L_1DD44;
    case RC_ADDR(0x0001dd48u): goto L_1DD48;
    case RC_ADDR(0x0001dd4au): goto L_1DD4A;
    case RC_ADDR(0x0001dd4eu): goto L_1DD4E;
    case RC_ADDR(0x0001dd52u): goto L_1DD52;
    case RC_ADDR(0x0001dd56u): goto L_1DD56;
    case RC_ADDR(0x0001dd58u): goto L_1DD58;
    case RC_ADDR(0x0001dd5cu): goto L_1DD5C;
    case RC_ADDR(0x0001dd60u): goto L_1DD60;
    case RC_ADDR(0x0001dd64u): goto L_1DD64;
    case RC_ADDR(0x0001dd66u): goto L_1DD66;
    case RC_ADDR(0x0001dd6au): goto L_1DD6A;
    case RC_ADDR(0x0001dd6eu): goto L_1DD6E;
    case RC_ADDR(0x0001dd72u): goto L_1DD72;
    case RC_ADDR(0x0001dd78u): goto L_1DD78;
    case RC_ADDR(0x0001dd7au): goto L_1DD7A;
    case RC_ADDR(0x0001dd80u): goto L_1DD80;
    case RC_ADDR(0x0001dd84u): goto L_1DD84;
    case RC_ADDR(0x0001dd88u): goto L_1DD88;
    case RC_ADDR(0x0001dd8cu): goto L_1DD8C;
    case RC_ADDR(0x0001dd92u): goto L_1DD92;
    case RC_ADDR(0x0001dd96u): goto L_1DD96;
    case RC_ADDR(0x0001dd9au): goto L_1DD9A;
    case RC_ADDR(0x0001dd9eu): goto L_1DD9E;
    case RC_ADDR(0x0001dda2u): goto L_1DDA2;
    case RC_ADDR(0x0001dda4u): goto L_1DDA4;
    case RC_ADDR(0x0001dda8u): goto L_1DDA8;
    case RC_ADDR(0x0001ddaeu): goto L_1DDAE;
    case RC_ADDR(0x0001ddb4u): goto L_1DDB4;
    case RC_ADDR(0x0001ddb8u): goto L_1DDB8;
    case RC_ADDR(0x0001ddbcu): goto L_1DDBC;
    case RC_ADDR(0x0001ddc2u): goto L_1DDC2;
    case RC_ADDR(0x0001ddc4u): goto L_1DDC4;
    case RC_ADDR(0x0001ddc8u): goto L_1DDC8;
    case RC_ADDR(0x0001ddccu): goto L_1DDCC;
    case RC_ADDR(0x0001ddd0u): goto L_1DDD0;
    case RC_ADDR(0x0001ddd6u): goto L_1DDD6;
    case RC_ADDR(0x0001dddau): goto L_1DDDA;
    case RC_ADDR(0x0001dddeu): goto L_1DDDE;
    case RC_ADDR(0x0001dde0u): goto L_1DDE0;
    case RC_ADDR(0x0001dde2u): goto L_1DDE2;
    case RC_ADDR(0x0001dde8u): goto L_1DDE8;
    case RC_ADDR(0x0001ddecu): goto L_1DDEC;
    case RC_ADDR(0x0001ddf0u): goto L_1DDF0;
    case RC_ADDR(0x0001ddf4u): goto L_1DDF4;
    case RC_ADDR(0x0001ddfau): goto L_1DDFA;
    case RC_ADDR(0x0001ddfeu): goto L_1DDFE;
    case RC_ADDR(0x0001de02u): goto L_1DE02;
    case RC_ADDR(0x0001de06u): goto L_1DE06;
    case RC_ADDR(0x0001de0au): goto L_1DE0A;
    case RC_ADDR(0x0001de0cu): goto L_1DE0C;
    case RC_ADDR(0x0001de0eu): goto L_1DE0E;
    case RC_ADDR(0x0001de12u): goto L_1DE12;
    case RC_ADDR(0x0001de18u): goto L_1DE18;
    case RC_ADDR(0x0001de1cu): goto L_1DE1C;
    case RC_ADDR(0x0001de20u): goto L_1DE20;
    case RC_ADDR(0x0001de24u): goto L_1DE24;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DC80:
    /* 0001dc80   4  tst.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x0001dc80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_1DC84:
    /* 0001dc84   4  beq 0001de24 */
    c->pc = RC_ADDR(0x0001dc84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DE24;

L_1DC88:
    /* 0001dc88   4  tst.w (2ca2,A4) */
    c->pc = RC_ADDR(0x0001dc88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_set_nzvc(c, t0, RC_W);

L_1DC8C:
    /* 0001dc8c   2  beq 0001dc92 */
    c->pc = RC_ADDR(0x0001dc8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DC92;

L_1DC8E:
    /* 0001dc8e   4  bsr 0001dfd6 */
    c->pc = RC_ADDR(0x0001dc8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dc92u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dfd6u);
    return;

L_1DC92:
    /* 0001dc92   4  lea (fffffae2,A4),A0 */
    c->pc = RC_ADDR(0x0001dc92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x51eu);

L_1DC96:
    /* 0001dc96   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001dc96u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_1DC9A:
    /* 0001dc9a   4  lea (2cc8,A4),A2 */
    c->pc = RC_ADDR(0x0001dc9au);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] + 0x2cc8u);

L_1DC9E:
    /* 0001dc9e   2  addq.l #8,A2 */
    c->pc = RC_ADDR(0x0001dc9eu);
    rc_step(c, m, 8);
    c->a[2] += 0x00000008u;

L_1DCA0:
    /* 0001dca0   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001dca0u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCA4:
    /* 0001dca4   2  move.l (A0),D1 */
    c->pc = RC_ADDR(0x0001dca4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCA6:
    /* 0001dca6   2  move.l (A1),(A0)+ */
    c->pc = RC_ADDR(0x0001dca6u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[1]);
    t3 = c->a[0];
    c->a[0] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCA8:
    /* 0001dca8   2  move.l D1,(A1)+ */
    c->pc = RC_ADDR(0x0001dca8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCAA:
    /* 0001dcaa   2  move.l D1,(A2)+ */
    c->pc = RC_ADDR(0x0001dcaau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    t3 = c->a[2];
    c->a[2] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCAC:
    /* 0001dcac   4  dbf D0,0001dca4 */
    c->pc = RC_ADDR(0x0001dcacu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DCA4; }
    }

L_1DCB0:
    /* 0001dcb0   4  movea.l (2cb8,A4),A0 */
    c->pc = RC_ADDR(0x0001dcb0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cb8u));
    c->a[0] = t0;

L_1DCB4:
    /* 0001dcb4   4  adda.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001dcb4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] += t0;

L_1DCB8:
    /* 0001dcb8   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x0001dcb8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_1DCBC:
    /* 0001dcbc   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x0001dcbcu);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCC0:
    /* 0001dcc0   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001dcc0u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCC2:
    /* 0001dcc2   4  move.w (A1)+,(4,A0) */
    c->pc = RC_ADDR(0x0001dcc2u);
    rc_step(c, m, 16);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCC6:
    /* 0001dcc6   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001dcc6u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1DCC8:
    /* 0001dcc8   4  dbf D0,0001dcc0 */
    c->pc = RC_ADDR(0x0001dcc8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DCC0; }
    }

L_1DCCC:
    /* 0001dccc   4  tst.w (2ca4,A4) */
    c->pc = RC_ADDR(0x0001dcccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca4u));
    rc_set_nzvc(c, t0, RC_W);

L_1DCD0:
    /* 0001dcd0   4  beq 0001dd5c */
    c->pc = RC_ADDR(0x0001dcd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DD5C;

L_1DCD4:
    /* 0001dcd4   4  move.w (2ca4,A4),D2 */
    c->pc = RC_ADDR(0x0001dcd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCD8:
    /* 0001dcd8   2  neg.w D2 */
    c->pc = RC_ADDR(0x0001dcd8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1DCDA:
    /* 0001dcda   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0001dcdau);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_1DCDC:
    /* 0001dcdc   2  clr.w D3 */
    c->pc = RC_ADDR(0x0001dcdcu);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DCDE:
    /* 0001dcde   2  clr.w D4 */
    c->pc = RC_ADDR(0x0001dcdeu);
    rc_step(c, m, 4);
    rc_d_set(c, 4, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DCE0:
    /* 0001dce0   4  move.w (2cb2,A4),D0 */
    c->pc = RC_ADDR(0x0001dce0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCE4:
    /* 0001dce4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001dce4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCE6:
    /* 0001dce6   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x0001dce6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1DCEA:
    /* 0001dcea   4  andi.w #f0,D1 */
    c->pc = RC_ADDR(0x0001dceau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x000000f0u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1DCEE:
    /* 0001dcee   2  add.w D2,D0 */
    c->pc = RC_ADDR(0x0001dceeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DCF0:
    /* 0001dcf0   4  cmpi.w #10,D0 */
    c->pc = RC_ADDR(0x0001dcf0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1DCF4:
    /* 0001dcf4   2  blt 0001dcfc */
    c->pc = RC_ADDR(0x0001dcf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1DCFC;

L_1DCF6:
    /* 0001dcf6   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001dcf6u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DCF8:
    /* 0001dcf8   4  move.w #fffe,D3 */
    c->pc = RC_ADDR(0x0001dcf8u);
    rc_step(c, m, 8);
    t0 = 0x0000fffeu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCFC:
    /* 0001dcfc   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001dcfcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1DCFE:
    /* 0001dcfe   2  bpl 0001dd08 */
    c->pc = RC_ADDR(0x0001dcfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1DD08;

L_1DD00:
    /* 0001dd00   4  move.w #f,D0 */
    c->pc = RC_ADDR(0x0001dd00u);
    rc_step(c, m, 8);
    t0 = 0x0000000fu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD04:
    /* 0001dd04   4  move.w #2,D3 */
    c->pc = RC_ADDR(0x0001dd04u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD08:
    /* 0001dd08   2  lsr.w #4,D1 */
    c->pc = RC_ADDR(0x0001dd08u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1DD0A:
    /* 0001dd0a   4  move.w (2ca4,A4),D2 */
    c->pc = RC_ADDR(0x0001dd0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD0E:
    /* 0001dd0e   2  neg.w D2 */
    c->pc = RC_ADDR(0x0001dd0eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1DD10:
    /* 0001dd10   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x0001dd10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1DD12:
    /* 0001dd12   4  cmpi.w #10,D1 */
    c->pc = RC_ADDR(0x0001dd12u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1DD16:
    /* 0001dd16   2  blt 0001dd1e */
    c->pc = RC_ADDR(0x0001dd16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1DD1E;

L_1DD18:
    /* 0001dd18   2  clr.w D1 */
    c->pc = RC_ADDR(0x0001dd18u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DD1A:
    /* 0001dd1a   4  move.w #fffe,D4 */
    c->pc = RC_ADDR(0x0001dd1au);
    rc_step(c, m, 8);
    t0 = 0x0000fffeu;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD1E:
    /* 0001dd1e   2  tst.w D1 */
    c->pc = RC_ADDR(0x0001dd1eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1DD20:
    /* 0001dd20   2  bpl 0001dd2a */
    c->pc = RC_ADDR(0x0001dd20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1DD2A;

L_1DD22:
    /* 0001dd22   4  move.w #f,D1 */
    c->pc = RC_ADDR(0x0001dd22u);
    rc_step(c, m, 8);
    t0 = 0x0000000fu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD26:
    /* 0001dd26   4  move.w #2,D4 */
    c->pc = RC_ADDR(0x0001dd26u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD2A:
    /* 0001dd2a   2  lsl.w #4,D1 */
    c->pc = RC_ADDR(0x0001dd2au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1DD2C:
    /* 0001dd2c   2  or.w D1,D0 */
    c->pc = RC_ADDR(0x0001dd2cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1DD2E:
    /* 0001dd2e   4  move.w D0,(2cb2,A4) */
    c->pc = RC_ADDR(0x0001dd2eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2cb2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD32:
    /* 0001dd32   4  movea.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001dd32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] = t0;

L_1DD36:
    /* 0001dd36   4  adda.l (2cbc,A4),A0 */
    c->pc = RC_ADDR(0x0001dd36u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cbcu));
    c->a[0] += t0;

L_1DD3A:
    /* 0001dd3a   6  move.w (2cb2,A4),(30,A0) */
    c->pc = RC_ADDR(0x0001dd3au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb2u));
    rc_wr16(c, m, (c->a[0] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD40:
    /* 0001dd40   4  move.w #2,D0 */
    c->pc = RC_ADDR(0x0001dd40u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD44:
    /* 0001dd44   4  add.w D3,(4,A0) */
    c->pc = RC_ADDR(0x0001dd44u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DD48:
    /* 0001dd48   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001dd48u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1DD4A:
    /* 0001dd4a   4  dbf D0,0001dd44 */
    c->pc = RC_ADDR(0x0001dd4au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DD44; }
    }

L_1DD4E:
    /* 0001dd4e   4  move.w #1,D0 */
    c->pc = RC_ADDR(0x0001dd4eu);
    rc_step(c, m, 8);
    t0 = 0x00000001u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD52:
    /* 0001dd52   4  add.w D4,(4,A0) */
    c->pc = RC_ADDR(0x0001dd52u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 4, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 4, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DD56:
    /* 0001dd56   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0001dd56u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_1DD58:
    /* 0001dd58   4  dbf D0,0001dd52 */
    c->pc = RC_ADDR(0x0001dd58u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DD52; }
    }

L_1DD5C:
    /* 0001dd5c   4  move.w (ffffb24c,A4),D0 */
    c->pc = RC_ADDR(0x0001dd5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD60:
    /* 0001dd60   4  sub.w D0,(2cb6,A4) */
    c->pc = RC_ADDR(0x0001dd60u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2cb6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DD64:
    /* 0001dd64   2  bpl 0001dd6a */
    c->pc = RC_ADDR(0x0001dd64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1DD6A;

L_1DD66:
    /* 0001dd66   4  clr.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001dd66u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cb6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DD6A:
    /* 0001dd6a   4  tst.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001dd6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_set_nzvc(c, t0, RC_W);

L_1DD6E:
    /* 0001dd6e   4  beq 0001de20 */
    c->pc = RC_ADDR(0x0001dd6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DE20;

L_1DD72:
    /* 0001dd72   6  cmpi.w #9,(2cb6,A4) */
    c->pc = RC_ADDR(0x0001dd72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_1DD78:
    /* 0001dd78   2  blt 0001dd80 */
    c->pc = RC_ADDR(0x0001dd78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1DD80;

L_1DD7A:
    /* 0001dd7a   6  move.w #9,(2cb6,A4) */
    c->pc = RC_ADDR(0x0001dd7au);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x2cb6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD80:
    /* 0001dd80   4  move.w (2cb6,A4),D3 */
    c->pc = RC_ADDR(0x0001dd80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD84:
    /* 0001dd84   4  movea.l (2cb8,A4),A0 */
    c->pc = RC_ADDR(0x0001dd84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cb8u));
    c->a[0] = t0;

L_1DD88:
    /* 0001dd88   4  adda.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001dd88u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] += t0;

L_1DD8C:
    /* 0001dd8c   6  adda.l #a6,A0 */
    c->pc = RC_ADDR(0x0001dd8cu);
    rc_step(c, m, 16);
    t0 = 0x000000a6u;
    c->a[0] += t0;

L_1DD92:
    /* 0001dd92   4  lea (0001de26),A1 */
    c->pc = RC_ADDR(0x0001dd92u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0001de26u);

L_1DD96:
    /* 0001dd96   4  move.w (2cb4,A4),D0 */
    c->pc = RC_ADDR(0x0001dd96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD9A:
    /* 0001dd9a   4  move.w #b,D1 */
    c->pc = RC_ADDR(0x0001dd9au);
    rc_step(c, m, 8);
    t0 = 0x0000000bu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD9E:
    /* 0001dd9e   4  tst.b (0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001dd9eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1DDA2:
    /* 0001dda2   2  beq 0001dda8 */
    c->pc = RC_ADDR(0x0001dda2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DDA8;

L_1DDA4:
    /* 0001dda4   4  addi.b #1,(A0) */
    c->pc = RC_ADDR(0x0001dda4u);
    rc_step(c, m, 16);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_1DDA8:
    /* 0001dda8   6  adda.l #14,A0 */
    c->pc = RC_ADDR(0x0001dda8u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    c->a[0] += t0;

L_1DDAE:
    /* 0001ddae   6  adda.l #10,A1 */
    c->pc = RC_ADDR(0x0001ddaeu);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[1] += t0;

L_1DDB4:
    /* 0001ddb4   4  dbf D1,0001dd9e */
    c->pc = RC_ADDR(0x0001ddb4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DD9E; }
    }

L_1DDB8:
    /* 0001ddb8   4  addq.w #1,(2cb4,A4) */
    c->pc = RC_ADDR(0x0001ddb8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2cb4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DDBC:
    /* 0001ddbc   6  cmpi.w #10,(2cb4,A4) */
    c->pc = RC_ADDR(0x0001ddbcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb4u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_1DDC2:
    /* 0001ddc2   2  blt 0001de1c */
    c->pc = RC_ADDR(0x0001ddc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1DE1C;

L_1DDC4:
    /* 0001ddc4   4  clr.w (2cb4,A4) */
    c->pc = RC_ADDR(0x0001ddc4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cb4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DDC8:
    /* 0001ddc8   4  movea.l (2cb8,A4),A0 */
    c->pc = RC_ADDR(0x0001ddc8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cb8u));
    c->a[0] = t0;

L_1DDCC:
    /* 0001ddcc   4  adda.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001ddccu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] += t0;

L_1DDD0:
    /* 0001ddd0   6  adda.l #a6,A0 */
    c->pc = RC_ADDR(0x0001ddd0u);
    rc_step(c, m, 16);
    t0 = 0x000000a6u;
    c->a[0] += t0;

L_1DDD6:
    /* 0001ddd6   4  lea (0001dee6),A1 */
    c->pc = RC_ADDR(0x0001ddd6u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0001dee6u);

L_1DDDA:
    /* 0001ddda   4  move.w #b,D0 */
    c->pc = RC_ADDR(0x0001dddau);
    rc_step(c, m, 8);
    t0 = 0x0000000bu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DDDE:
    /* 0001ddde   2  move.b (A1)+,D1 */
    c->pc = RC_ADDR(0x0001dddeu);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DDE0:
    /* 0001dde0   2  sub.b D1,(A0) */
    c->pc = RC_ADDR(0x0001dde0u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_B);
    rc_flags_sub(c, RC_B, t1, rc_d_get(c, 1, RC_B), t2, 0);
    rc_wr8(c, m, t3, t2);

L_1DDE2:
    /* 0001dde2   6  adda.l #14,A0 */
    c->pc = RC_ADDR(0x0001dde2u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    c->a[0] += t0;

L_1DDE8:
    /* 0001dde8   4  dbf D0,0001ddde */
    c->pc = RC_ADDR(0x0001dde8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DDDE; }
    }

L_1DDEC:
    /* 0001ddec   4  movea.l (2cb8,A4),A0 */
    c->pc = RC_ADDR(0x0001ddecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2cb8u));
    c->a[0] = t0;

L_1DDF0:
    /* 0001ddf0   4  adda.l (140c,A4),A0 */
    c->pc = RC_ADDR(0x0001ddf0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[0] += t0;

L_1DDF4:
    /* 0001ddf4   6  adda.l #ac,A0 */
    c->pc = RC_ADDR(0x0001ddf4u);
    rc_step(c, m, 16);
    t0 = 0x000000acu;
    c->a[0] += t0;

L_1DDFA:
    /* 0001ddfa   4  move.w #5,D0 */
    c->pc = RC_ADDR(0x0001ddfau);
    rc_step(c, m, 8);
    t0 = 0x00000005u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DDFE:
    /* 0001ddfe   4  move.w #2,D1 */
    c->pc = RC_ADDR(0x0001ddfeu);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE02:
    /* 0001de02   4  move.w (14,A0),D2 */
    c->pc = RC_ADDR(0x0001de02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x14u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE06:
    /* 0001de06   4  move.w (A0),(14,A0) */
    c->pc = RC_ADDR(0x0001de06u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE0A:
    /* 0001de0a   2  move.w D2,(A0) */
    c->pc = RC_ADDR(0x0001de0au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DE0C:
    /* 0001de0c   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001de0cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1DE0E:
    /* 0001de0e   4  dbf D1,0001de02 */
    c->pc = RC_ADDR(0x0001de0eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DE02; }
    }

L_1DE12:
    /* 0001de12   6  adda.l #1c,A0 */
    c->pc = RC_ADDR(0x0001de12u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    c->a[0] += t0;

L_1DE18:
    /* 0001de18   4  dbf D0,0001ddfe */
    c->pc = RC_ADDR(0x0001de18u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DDFE; }
    }

L_1DE1C:
    /* 0001de1c   4  dbf D3,0001dd84 */
    c->pc = RC_ADDR(0x0001de1cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DD84; }
    }

L_1DE20:
    /* 0001de20   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x0001de20u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DE24:
    /* 0001de24   2  rts */
    c->pc = RC_ADDR(0x0001de24u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
