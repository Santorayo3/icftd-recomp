/* fn_0001dd96 - 172 byte(s), 60 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dd96(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dd96u): goto L_1DD96;
    case RC_ADDR(0x0001dd9au): goto L_1DD9A;
    case RC_ADDR(0x0001dd9eu): goto L_1DD9E;
    case RC_ADDR(0x0001dda2u): goto L_1DDA2;
    case RC_ADDR(0x0001dda6u): goto L_1DDA6;
    case RC_ADDR(0x0001dda8u): goto L_1DDA8;
    case RC_ADDR(0x0001ddaau): goto L_1DDAA;
    case RC_ADDR(0x0001ddaeu): goto L_1DDAE;
    case RC_ADDR(0x0001ddb0u): goto L_1DDB0;
    case RC_ADDR(0x0001ddb2u): goto L_1DDB2;
    case RC_ADDR(0x0001ddb6u): goto L_1DDB6;
    case RC_ADDR(0x0001ddb8u): goto L_1DDB8;
    case RC_ADDR(0x0001ddbcu): goto L_1DDBC;
    case RC_ADDR(0x0001ddc0u): goto L_1DDC0;
    case RC_ADDR(0x0001ddc2u): goto L_1DDC2;
    case RC_ADDR(0x0001ddc4u): goto L_1DDC4;
    case RC_ADDR(0x0001ddc6u): goto L_1DDC6;
    case RC_ADDR(0x0001ddcau): goto L_1DDCA;
    case RC_ADDR(0x0001ddccu): goto L_1DDCC;
    case RC_ADDR(0x0001ddd0u): goto L_1DDD0;
    case RC_ADDR(0x0001ddd2u): goto L_1DDD2;
    case RC_ADDR(0x0001ddd6u): goto L_1DDD6;
    case RC_ADDR(0x0001ddd8u): goto L_1DDD8;
    case RC_ADDR(0x0001dddcu): goto L_1DDDC;
    case RC_ADDR(0x0001dddeu): goto L_1DDDE;
    case RC_ADDR(0x0001dde0u): goto L_1DDE0;
    case RC_ADDR(0x0001dde4u): goto L_1DDE4;
    case RC_ADDR(0x0001dde6u): goto L_1DDE6;
    case RC_ADDR(0x0001dde8u): goto L_1DDE8;
    case RC_ADDR(0x0001ddecu): goto L_1DDEC;
    case RC_ADDR(0x0001ddf0u): goto L_1DDF0;
    case RC_ADDR(0x0001ddf2u): goto L_1DDF2;
    case RC_ADDR(0x0001ddf6u): goto L_1DDF6;
    case RC_ADDR(0x0001ddf8u): goto L_1DDF8;
    case RC_ADDR(0x0001ddfcu): goto L_1DDFC;
    case RC_ADDR(0x0001ddfeu): goto L_1DDFE;
    case RC_ADDR(0x0001de00u): goto L_1DE00;
    case RC_ADDR(0x0001de04u): goto L_1DE04;
    case RC_ADDR(0x0001de06u): goto L_1DE06;
    case RC_ADDR(0x0001de08u): goto L_1DE08;
    case RC_ADDR(0x0001de0au): goto L_1DE0A;
    case RC_ADDR(0x0001de0cu): goto L_1DE0C;
    case RC_ADDR(0x0001de10u): goto L_1DE10;
    case RC_ADDR(0x0001de14u): goto L_1DE14;
    case RC_ADDR(0x0001de16u): goto L_1DE16;
    case RC_ADDR(0x0001de18u): goto L_1DE18;
    case RC_ADDR(0x0001de1au): goto L_1DE1A;
    case RC_ADDR(0x0001de1eu): goto L_1DE1E;
    case RC_ADDR(0x0001de20u): goto L_1DE20;
    case RC_ADDR(0x0001de24u): goto L_1DE24;
    case RC_ADDR(0x0001de26u): goto L_1DE26;
    case RC_ADDR(0x0001de28u): goto L_1DE28;
    case RC_ADDR(0x0001de2au): goto L_1DE2A;
    case RC_ADDR(0x0001de2eu): goto L_1DE2E;
    case RC_ADDR(0x0001de30u): goto L_1DE30;
    case RC_ADDR(0x0001de34u): goto L_1DE34;
    case RC_ADDR(0x0001de36u): goto L_1DE36;
    case RC_ADDR(0x0001de3au): goto L_1DE3A;
    case RC_ADDR(0x0001de3cu): goto L_1DE3C;
    case RC_ADDR(0x0001de3eu): goto L_1DE3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DD96:
    /* 0001dd96   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dd96u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DD9A:
    /* 0001dd9a   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001dd9au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1DD9E:
    /* 0001dd9e   4  move.b (11,A5),D4 */
    c->pc = RC_ADDR(0x0001dd9eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x11u));
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DDA2:
    /* 0001dda2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001dda2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDA6:
    /* 0001dda6   2  tst.l (A0) */
    c->pc = RC_ADDR(0x0001dda6u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_1DDA8:
    /* 0001dda8   2  bne 0001ddb2 */
    c->pc = RC_ADDR(0x0001dda8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DDB2;

L_1DDAA:
    /* 0001ddaa   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001ddaau);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1DDAE:
    /* 0001ddae   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ddaeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DDB0:
    /* 0001ddb0   2  rts */
    c->pc = RC_ADDR(0x0001ddb0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1DDB2:
    /* 0001ddb2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ddb2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDB6:
    /* 0001ddb6   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001ddb6u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDB8:
    /* 0001ddb8   4  movea.l (4,A1),A0 */
    c->pc = RC_ADDR(0x0001ddb8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[0] = t0;

L_1DDBC:
    /* 0001ddbc   4  cmpa.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001ddbcu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1DDC0:
    /* 0001ddc0   2  bne 0001de00 */
    c->pc = RC_ADDR(0x0001ddc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DE00;

L_1DDC2:
    /* 0001ddc2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ddc2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DDC4:
    /* 0001ddc4   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x0001ddc4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DDC6:
    /* 0001ddc6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ddc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDCA:
    /* 0001ddca   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001ddcau);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDCC:
    /* 0001ddcc   4  cmp.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0001ddccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DDD0:
    /* 0001ddd0   2  bne 0001de00 */
    c->pc = RC_ADDR(0x0001ddd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DE00;

L_1DDD2:
    /* 0001ddd2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ddd2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDD6:
    /* 0001ddd6   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001ddd6u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDD8:
    /* 0001ddd8   4  move.l (2c,A1),-(A7) */
    c->pc = RC_ADDR(0x0001ddd8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDDC:
    /* 0001dddc   2  bsr 0001de42 */
    c->pc = RC_ADDR(0x0001dddcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dddeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de42u);
    return;

L_1DDDE:
    /* 0001ddde   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001dddeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DDE0:
    /* 0001dde0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001dde0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDE4:
    /* 0001dde4   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001dde4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDE6:
    /* 0001dde6   2  movea.l (A1),A2 */
    c->pc = RC_ADDR(0x0001dde6u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[2] = t0;

L_1DDE8:
    /* 0001dde8   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001dde8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1DDEC:
    /* 0001ddec   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ddecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDF0:
    /* 0001ddf0   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001ddf0u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDF2:
    /* 0001ddf2   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001ddf2u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001ddf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1DDF6:
    /* 0001ddf6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ddf6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DDF8:
    /* 0001ddf8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ddf8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDFC:
    /* 0001ddfc   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x0001ddfcu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDFE:
    /* 0001ddfe   2  bra 0001de3e */
    c->pc = RC_ADDR(0x0001ddfeu);
    rc_step(c, m, 10);
    goto L_1DE3E;

L_1DE00:
    /* 0001de00   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001de00u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DE04:
    /* 0001de04   2  movea.l (A0),A2 */
    c->pc = RC_ADDR(0x0001de04u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[2] = t0;

L_1DE06:
    /* 0001de06   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001de06u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1DE08:
    /* 0001de08   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0001de08u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE0A:
    /* 0001de0a   2  beq 0001de3e */
    c->pc = RC_ADDR(0x0001de0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DE3E;

L_1DE0C:
    /* 0001de0c   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x0001de0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1DE10:
    /* 0001de10   4  cmpa.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001de10u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1DE14:
    /* 0001de14   2  bne 0001de3a */
    c->pc = RC_ADDR(0x0001de14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DE3A;

L_1DE16:
    /* 0001de16   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001de16u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DE18:
    /* 0001de18   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x0001de18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DE1A:
    /* 0001de1a   4  cmp.w (8,A3),D0 */
    c->pc = RC_ADDR(0x0001de1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DE1E:
    /* 0001de1e   2  bne 0001de3a */
    c->pc = RC_ADDR(0x0001de1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DE3A;

L_1DE20:
    /* 0001de20   4  move.l (2c,A3),-(A7) */
    c->pc = RC_ADDR(0x0001de20u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE24:
    /* 0001de24   2  bsr 0001de42 */
    c->pc = RC_ADDR(0x0001de24u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001de26u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de42u);
    return;

L_1DE26:
    /* 0001de26   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001de26u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DE28:
    /* 0001de28   2  move.l (A3),(A2) */
    c->pc = RC_ADDR(0x0001de28u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE2A:
    /* 0001de2a   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001de2au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1DE2E:
    /* 0001de2e   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x0001de2eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE30:
    /* 0001de30   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001de30u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001de34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1DE34:
    /* 0001de34   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001de34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DE36:
    /* 0001de36   4  bra 0001ddaa */
    c->pc = RC_ADDR(0x0001de36u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DDAA;

L_1DE3A:
    /* 0001de3a   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001de3au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1DE3C:
    /* 0001de3c   2  bra 0001de06 */
    c->pc = RC_ADDR(0x0001de3cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DE06;

L_1DE3E:
    /* 0001de3e   4  bra 0001ddaa */
    c->pc = RC_ADDR(0x0001de3eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DDAA;

}
