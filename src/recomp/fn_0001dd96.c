/* fn_0001dd96 - 172 byte(s), 60 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001dd96(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3;

    switch (c->pc)
    {
    case 0x0001dd96u: goto L_1DD96;
    case 0x0001dd9au: goto L_1DD9A;
    case 0x0001dd9eu: goto L_1DD9E;
    case 0x0001dda2u: goto L_1DDA2;
    case 0x0001dda6u: goto L_1DDA6;
    case 0x0001dda8u: goto L_1DDA8;
    case 0x0001ddaau: goto L_1DDAA;
    case 0x0001ddaeu: goto L_1DDAE;
    case 0x0001ddb0u: goto L_1DDB0;
    case 0x0001ddb2u: goto L_1DDB2;
    case 0x0001ddb6u: goto L_1DDB6;
    case 0x0001ddb8u: goto L_1DDB8;
    case 0x0001ddbcu: goto L_1DDBC;
    case 0x0001ddc0u: goto L_1DDC0;
    case 0x0001ddc2u: goto L_1DDC2;
    case 0x0001ddc4u: goto L_1DDC4;
    case 0x0001ddc6u: goto L_1DDC6;
    case 0x0001ddcau: goto L_1DDCA;
    case 0x0001ddccu: goto L_1DDCC;
    case 0x0001ddd0u: goto L_1DDD0;
    case 0x0001ddd2u: goto L_1DDD2;
    case 0x0001ddd6u: goto L_1DDD6;
    case 0x0001ddd8u: goto L_1DDD8;
    case 0x0001dddcu: goto L_1DDDC;
    case 0x0001dddeu: goto L_1DDDE;
    case 0x0001dde0u: goto L_1DDE0;
    case 0x0001dde4u: goto L_1DDE4;
    case 0x0001dde6u: goto L_1DDE6;
    case 0x0001dde8u: goto L_1DDE8;
    case 0x0001ddecu: goto L_1DDEC;
    case 0x0001ddf0u: goto L_1DDF0;
    case 0x0001ddf2u: goto L_1DDF2;
    case 0x0001ddf6u: goto L_1DDF6;
    case 0x0001ddf8u: goto L_1DDF8;
    case 0x0001ddfcu: goto L_1DDFC;
    case 0x0001ddfeu: goto L_1DDFE;
    case 0x0001de00u: goto L_1DE00;
    case 0x0001de04u: goto L_1DE04;
    case 0x0001de06u: goto L_1DE06;
    case 0x0001de08u: goto L_1DE08;
    case 0x0001de0au: goto L_1DE0A;
    case 0x0001de0cu: goto L_1DE0C;
    case 0x0001de10u: goto L_1DE10;
    case 0x0001de14u: goto L_1DE14;
    case 0x0001de16u: goto L_1DE16;
    case 0x0001de18u: goto L_1DE18;
    case 0x0001de1au: goto L_1DE1A;
    case 0x0001de1eu: goto L_1DE1E;
    case 0x0001de20u: goto L_1DE20;
    case 0x0001de24u: goto L_1DE24;
    case 0x0001de26u: goto L_1DE26;
    case 0x0001de28u: goto L_1DE28;
    case 0x0001de2au: goto L_1DE2A;
    case 0x0001de2eu: goto L_1DE2E;
    case 0x0001de30u: goto L_1DE30;
    case 0x0001de34u: goto L_1DE34;
    case 0x0001de36u: goto L_1DE36;
    case 0x0001de3au: goto L_1DE3A;
    case 0x0001de3cu: goto L_1DE3C;
    case 0x0001de3eu: goto L_1DE3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DD96:
    /* 0001dd96   4  link.w A5,#0 */
    c->pc = 0x0001dd96u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DD9A:
    /* 0001dd9a   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = 0x0001dd9au;
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
    c->pc = 0x0001dd9eu;
    t0 = rc_rd8(c, m, (c->a[5] + 0x11u));
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DDA2:
    /* 0001dda2   4  movea.l (8,A5),A0 */
    c->pc = 0x0001dda2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDA6:
    /* 0001dda6   2  tst.l (A0) */
    c->pc = 0x0001dda6u;
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_1DDA8:
    /* 0001dda8   2  bne 0001ddb2 */
    c->pc = 0x0001dda8u;
    if (rc_cond(c, 6)) goto L_1DDB2;

L_1DDAA:
    /* 0001ddaa   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = 0x0001ddaau;
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
    c->pc = 0x0001ddaeu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DDB0:
    /* 0001ddb0   2  rts */
    c->pc = 0x0001ddb0u;
    rc_ret(c, m);
    return;

L_1DDB2:
    /* 0001ddb2   4  movea.l (8,A5),A0 */
    c->pc = 0x0001ddb2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDB6:
    /* 0001ddb6   2  movea.l (A0),A1 */
    c->pc = 0x0001ddb6u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDB8:
    /* 0001ddb8   4  movea.l (4,A1),A0 */
    c->pc = 0x0001ddb8u;
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[0] = t0;

L_1DDBC:
    /* 0001ddbc   4  cmpa.l (c,A5),A0 */
    c->pc = 0x0001ddbcu;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1DDC0:
    /* 0001ddc0   2  bne 0001de00 */
    c->pc = 0x0001ddc0u;
    if (rc_cond(c, 6)) goto L_1DE00;

L_1DDC2:
    /* 0001ddc2   2  moveq #0,D0 */
    c->pc = 0x0001ddc2u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DDC4:
    /* 0001ddc4   2  move.b D4,D0 */
    c->pc = 0x0001ddc4u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DDC6:
    /* 0001ddc6   4  movea.l (8,A5),A0 */
    c->pc = 0x0001ddc6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDCA:
    /* 0001ddca   2  movea.l (A0),A1 */
    c->pc = 0x0001ddcau;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDCC:
    /* 0001ddcc   4  cmp.w (8,A1),D0 */
    c->pc = 0x0001ddccu;
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DDD0:
    /* 0001ddd0   2  bne 0001de00 */
    c->pc = 0x0001ddd0u;
    if (rc_cond(c, 6)) goto L_1DE00;

L_1DDD2:
    /* 0001ddd2   4  movea.l (8,A5),A0 */
    c->pc = 0x0001ddd2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDD6:
    /* 0001ddd6   2  movea.l (A0),A1 */
    c->pc = 0x0001ddd6u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDD8:
    /* 0001ddd8   4  move.l (2c,A1),-(A7) */
    c->pc = 0x0001ddd8u;
    t0 = rc_rd32(c, m, (c->a[1] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDDC:
    /* 0001dddc   2  bsr 0001de42 */
    c->pc = 0x0001dddcu;
    rc_push32(c, m, 0x0001dddeu);
    rc_depth++;
    c->pc = 0x0001de42u;
    return;

L_1DDDE:
    /* 0001ddde   2  addq.w #4,A7 */
    c->pc = 0x0001dddeu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DDE0:
    /* 0001dde0   4  movea.l (8,A5),A0 */
    c->pc = 0x0001dde0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDE4:
    /* 0001dde4   2  movea.l (A0),A1 */
    c->pc = 0x0001dde4u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1DDE6:
    /* 0001dde6   2  movea.l (A1),A2 */
    c->pc = 0x0001dde6u;
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[2] = t0;

L_1DDE8:
    /* 0001dde8   4  pea (0000003e).l */
    c->pc = 0x0001dde8u;
    rc_push32(c, m, 0x0000003eu);

L_1DDEC:
    /* 0001ddec   4  movea.l (8,A5),A0 */
    c->pc = 0x0001ddecu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDF0:
    /* 0001ddf0   2  move.l (A0),-(A7) */
    c->pc = 0x0001ddf0u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDF2:
    /* 0001ddf2   4  jsr (ffff8344,A4) */
    c->pc = 0x0001ddf2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001ddf6u;
    rc_os_call(c, m, 0, -210);

L_1DDF6:
    /* 0001ddf6   2  addq.w #8,A7 */
    c->pc = 0x0001ddf6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DDF8:
    /* 0001ddf8   4  movea.l (8,A5),A0 */
    c->pc = 0x0001ddf8u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DDFC:
    /* 0001ddfc   2  move.l A2,(A0) */
    c->pc = 0x0001ddfcu;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DDFE:
    /* 0001ddfe   2  bra 0001de3e */
    c->pc = 0x0001ddfeu;
    goto L_1DE3E;

L_1DE00:
    /* 0001de00   4  movea.l (8,A5),A0 */
    c->pc = 0x0001de00u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1DE04:
    /* 0001de04   2  movea.l (A0),A2 */
    c->pc = 0x0001de04u;
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[2] = t0;

L_1DE06:
    /* 0001de06   2  movea.l (A2),A3 */
    c->pc = 0x0001de06u;
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1DE08:
    /* 0001de08   2  move.l A3,D0 */
    c->pc = 0x0001de08u;
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE0A:
    /* 0001de0a   2  beq 0001de3e */
    c->pc = 0x0001de0au;
    if (rc_cond(c, 7)) goto L_1DE3E;

L_1DE0C:
    /* 0001de0c   4  movea.l (4,A3),A0 */
    c->pc = 0x0001de0cu;
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1DE10:
    /* 0001de10   4  cmpa.l (c,A5),A0 */
    c->pc = 0x0001de10u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1DE14:
    /* 0001de14   2  bne 0001de3a */
    c->pc = 0x0001de14u;
    if (rc_cond(c, 6)) goto L_1DE3A;

L_1DE16:
    /* 0001de16   2  moveq #0,D0 */
    c->pc = 0x0001de16u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DE18:
    /* 0001de18   2  move.b D4,D0 */
    c->pc = 0x0001de18u;
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DE1A:
    /* 0001de1a   4  cmp.w (8,A3),D0 */
    c->pc = 0x0001de1au;
    t0 = rc_rd16(c, m, (c->a[3] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DE1E:
    /* 0001de1e   2  bne 0001de3a */
    c->pc = 0x0001de1eu;
    if (rc_cond(c, 6)) goto L_1DE3A;

L_1DE20:
    /* 0001de20   4  move.l (2c,A3),-(A7) */
    c->pc = 0x0001de20u;
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE24:
    /* 0001de24   2  bsr 0001de42 */
    c->pc = 0x0001de24u;
    rc_push32(c, m, 0x0001de26u);
    rc_depth++;
    c->pc = 0x0001de42u;
    return;

L_1DE26:
    /* 0001de26   2  addq.w #4,A7 */
    c->pc = 0x0001de26u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DE28:
    /* 0001de28   2  move.l (A3),(A2) */
    c->pc = 0x0001de28u;
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE2A:
    /* 0001de2a   4  pea (0000003e).l */
    c->pc = 0x0001de2au;
    rc_push32(c, m, 0x0000003eu);

L_1DE2E:
    /* 0001de2e   2  move.l A3,-(A7) */
    c->pc = 0x0001de2eu;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DE30:
    /* 0001de30   4  jsr (ffff8344,A4) */
    c->pc = 0x0001de30u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001de34u;
    rc_os_call(c, m, 0, -210);

L_1DE34:
    /* 0001de34   2  addq.w #8,A7 */
    c->pc = 0x0001de34u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DE36:
    /* 0001de36   4  bra 0001ddaa */
    c->pc = 0x0001de36u;
    rc_tick();
    goto L_1DDAA;

L_1DE3A:
    /* 0001de3a   2  movea.l A3,A2 */
    c->pc = 0x0001de3au;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1DE3C:
    /* 0001de3c   2  bra 0001de06 */
    c->pc = 0x0001de3cu;
    rc_tick();
    goto L_1DE06;

L_1DE3E:
    /* 0001de3e   4  bra 0001ddaa */
    c->pc = 0x0001de3eu;
    rc_tick();
    goto L_1DDAA;

}
