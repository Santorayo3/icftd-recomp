/* fn_0001dcb0 - 190 byte(s), 58 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dcb0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dcb0u): goto L_1DCB0;
    case RC_ADDR(0x0001dcb4u): goto L_1DCB4;
    case RC_ADDR(0x0001dcb8u): goto L_1DCB8;
    case RC_ADDR(0x0001dcbeu): goto L_1DCBE;
    case RC_ADDR(0x0001dcc2u): goto L_1DCC2;
    case RC_ADDR(0x0001dcc6u): goto L_1DCC6;
    case RC_ADDR(0x0001dcc8u): goto L_1DCC8;
    case RC_ADDR(0x0001dccau): goto L_1DCCA;
    case RC_ADDR(0x0001dcccu): goto L_1DCCC;
    case RC_ADDR(0x0001dcceu): goto L_1DCCE;
    case RC_ADDR(0x0001dcd0u): goto L_1DCD0;
    case RC_ADDR(0x0001dcd4u): goto L_1DCD4;
    case RC_ADDR(0x0001dcd6u): goto L_1DCD6;
    case RC_ADDR(0x0001dcd8u): goto L_1DCD8;
    case RC_ADDR(0x0001dcdeu): goto L_1DCDE;
    case RC_ADDR(0x0001dce0u): goto L_1DCE0;
    case RC_ADDR(0x0001dce4u): goto L_1DCE4;
    case RC_ADDR(0x0001dce8u): goto L_1DCE8;
    case RC_ADDR(0x0001dceeu): goto L_1DCEE;
    case RC_ADDR(0x0001dcf2u): goto L_1DCF2;
    case RC_ADDR(0x0001dcf8u): goto L_1DCF8;
    case RC_ADDR(0x0001dcfau): goto L_1DCFA;
    case RC_ADDR(0x0001dcfeu): goto L_1DCFE;
    case RC_ADDR(0x0001dd02u): goto L_1DD02;
    case RC_ADDR(0x0001dd06u): goto L_1DD06;
    case RC_ADDR(0x0001dd0au): goto L_1DD0A;
    case RC_ADDR(0x0001dd0eu): goto L_1DD0E;
    case RC_ADDR(0x0001dd14u): goto L_1DD14;
    case RC_ADDR(0x0001dd18u): goto L_1DD18;
    case RC_ADDR(0x0001dd1cu): goto L_1DD1C;
    case RC_ADDR(0x0001dd22u): goto L_1DD22;
    case RC_ADDR(0x0001dd26u): goto L_1DD26;
    case RC_ADDR(0x0001dd28u): goto L_1DD28;
    case RC_ADDR(0x0001dd2au): goto L_1DD2A;
    case RC_ADDR(0x0001dd2cu): goto L_1DD2C;
    case RC_ADDR(0x0001dd30u): goto L_1DD30;
    case RC_ADDR(0x0001dd34u): goto L_1DD34;
    case RC_ADDR(0x0001dd36u): goto L_1DD36;
    case RC_ADDR(0x0001dd3cu): goto L_1DD3C;
    case RC_ADDR(0x0001dd3eu): goto L_1DD3E;
    case RC_ADDR(0x0001dd40u): goto L_1DD40;
    case RC_ADDR(0x0001dd42u): goto L_1DD42;
    case RC_ADDR(0x0001dd44u): goto L_1DD44;
    case RC_ADDR(0x0001dd48u): goto L_1DD48;
    case RC_ADDR(0x0001dd4cu): goto L_1DD4C;
    case RC_ADDR(0x0001dd4eu): goto L_1DD4E;
    case RC_ADDR(0x0001dd50u): goto L_1DD50;
    case RC_ADDR(0x0001dd52u): goto L_1DD52;
    case RC_ADDR(0x0001dd54u): goto L_1DD54;
    case RC_ADDR(0x0001dd56u): goto L_1DD56;
    case RC_ADDR(0x0001dd58u): goto L_1DD58;
    case RC_ADDR(0x0001dd5au): goto L_1DD5A;
    case RC_ADDR(0x0001dd5eu): goto L_1DD5E;
    case RC_ADDR(0x0001dd60u): goto L_1DD60;
    case RC_ADDR(0x0001dd62u): goto L_1DD62;
    case RC_ADDR(0x0001dd66u): goto L_1DD66;
    case RC_ADDR(0x0001dd68u): goto L_1DD68;
    case RC_ADDR(0x0001dd6au): goto L_1DD6A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DCB0:
    /* 0001dcb0   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcb0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DCB4:
    /* 0001dcb4   4  movem.l { D4 D5 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcb4u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1DCB8:
    /* 0001dcb8   6  pea (00010000).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcb8u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_1DCBE:
    /* 0001dcbe   4  pea (0000003e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcbeu);
    rc_push32(c, m, 0x0000003eu);

L_1DCC2:
    /* 0001dcc2   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcc2u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001dcc6u);
    rc_os_call(c, m, 0, -198);

L_1DCC6:
    /* 0001dcc6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcc6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DCC8:
    /* 0001dcc8   2  movea.l D0,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcc8u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1DCCA:
    /* 0001dcca   2  move.l A2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dccau);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCCC:
    /* 0001dccc   2  bne 0001dcd8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcccu);
    if (rc_cond(c, 6)) goto L_1DCD8;

L_1DCCE:
    /* 0001dcce   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcceu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DCD0:
    /* 0001dcd0   4  movem.l (SP)+,{ A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcd0u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1DCD4:
    /* 0001dcd4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcd4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DCD6:
    /* 0001dcd6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcd6u);
    rc_ret(c, m);
    return;

L_1DCD8:
    /* 0001dcd8   6  move.l (c,A5),(4,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcd8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DCDE:
    /* 0001dcde   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcdeu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DCE0:
    /* 0001dce0   4  move.b (11,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dce0u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DCE4:
    /* 0001dce4   4  move.w D0,(8,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dce4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCE8:
    /* 0001dce8   6  move.w (12,A5),(a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dce8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_wr16(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DCEE:
    /* 0001dcee   4  movea.l (c,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dceeu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1DCF2:
    /* 0001dcf2   6  btst #0,(b,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcf2u);
    t4 = 0x00000000u;
    t3 = (c->a[0] + 0xbu);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1DCF8:
    /* 0001dcf8   2  beq 0001dd22 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcf8u);
    if (rc_cond(c, 7)) goto L_1DD22;

L_1DCFA:
    /* 0001dcfa   4  movea.l (c,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcfau);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1DCFE:
    /* 0001dcfe   4  movea.l (c,A0),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dcfeu);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1DD02:
    /* 0001dd02   4  move.w (A1),(34,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd02u);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_wr16(c, m, (c->a[2] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD06:
    /* 0001dd06   4  movea.l (c,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd06u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1DD0A:
    /* 0001dd0a   4  movea.l (c,A0),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd0au);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1DD0E:
    /* 0001dd0e   6  move.w (2,A1),(36,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd0eu);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_wr16(c, m, (c->a[2] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD14:
    /* 0001dd14   4  movea.l (c,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd14u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1DD18:
    /* 0001dd18   4  movea.l (c,A0),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd18u);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1DD1C:
    /* 0001dd1c   6  move.l (34,A1),(38,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd1cu);
    t0 = rc_rd32(c, m, (c->a[1] + 0x34u));
    rc_wr32(c, m, (c->a[2] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD22:
    /* 0001dd22   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd22u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DD26:
    /* 0001dd26   2  movea.l (A0),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd26u);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_1DD28:
    /* 0001dd28   2  move.l A3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd28u);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD2A:
    /* 0001dd2a   2  beq 0001dd62 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd2au);
    if (rc_cond(c, 7)) goto L_1DD62;

L_1DD2C:
    /* 0001dd2c   4  move.w (a,A3),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd2cu);
    t0 = rc_rd16(c, m, (c->a[3] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD30:
    /* 0001dd30   4  cmp.w (a,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd30u);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DD34:
    /* 0001dd34   2  bgt 0001dd58 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd34u);
    if (rc_cond(c, 14)) goto L_1DD58;

L_1DD36:
    /* 0001dd36   6  cmpi.w #8000,(a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd36u);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00008000u);

L_1DD3C:
    /* 0001dd3c   2  ble 0001dd58 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd3cu);
    if (rc_cond(c, 15)) goto L_1DD58;

L_1DD3E:
    /* 0001dd3e   2  tst.l (A3) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd3eu);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_1DD40:
    /* 0001dd40   2  beq 0001dd52 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd40u);
    if (rc_cond(c, 7)) goto L_1DD52;

L_1DD42:
    /* 0001dd42   2  movea.l (A3),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd42u);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_1DD44:
    /* 0001dd44   4  move.w (a,A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd44u);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DD48:
    /* 0001dd48   4  cmp.w (a,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd48u);
    t0 = rc_rd16(c, m, (c->a[2] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DD4C:
    /* 0001dd4c   2  bgt 0001dd52 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd4cu);
    if (rc_cond(c, 14)) goto L_1DD52;

L_1DD4E:
    /* 0001dd4e   2  movea.l (A3),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd4eu);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_1DD50:
    /* 0001dd50   2  bra 0001dd3e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd50u);
    rc_tick();
    goto L_1DD3E;

L_1DD52:
    /* 0001dd52   2  move.l (A3),(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd52u);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD54:
    /* 0001dd54   2  move.l A2,(A3) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd54u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD56:
    /* 0001dd56   2  bra 0001dd60 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd56u);
    goto L_1DD60;

L_1DD58:
    /* 0001dd58   2  move.l A3,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd58u);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD5A:
    /* 0001dd5a   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd5au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DD5E:
    /* 0001dd5e   2  move.l A2,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd5eu);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD60:
    /* 0001dd60   2  bra 0001dd68 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd60u);
    goto L_1DD68;

L_1DD62:
    /* 0001dd62   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd62u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DD66:
    /* 0001dd66   2  move.l A2,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd66u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD68:
    /* 0001dd68   2  move.l A2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd68u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DD6A:
    /* 0001dd6a   4  bra 0001dcd0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001dd6au);
    rc_tick();
    goto L_1DCD0;

}
