/* fn_0001cc2e - 358 byte(s), 100 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001cc2e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cc2eu): goto L_1CC2E;
    case RC_ADDR(0x0001cc32u): goto L_1CC32;
    case RC_ADDR(0x0001cc36u): goto L_1CC36;
    case RC_ADDR(0x0001cc38u): goto L_1CC38;
    case RC_ADDR(0x0001cc3au): goto L_1CC3A;
    case RC_ADDR(0x0001cc3cu): goto L_1CC3C;
    case RC_ADDR(0x0001cc3eu): goto L_1CC3E;
    case RC_ADDR(0x0001cc42u): goto L_1CC42;
    case RC_ADDR(0x0001cc46u): goto L_1CC46;
    case RC_ADDR(0x0001cc4au): goto L_1CC4A;
    case RC_ADDR(0x0001cc4eu): goto L_1CC4E;
    case RC_ADDR(0x0001cc52u): goto L_1CC52;
    case RC_ADDR(0x0001cc56u): goto L_1CC56;
    case RC_ADDR(0x0001cc58u): goto L_1CC58;
    case RC_ADDR(0x0001cc5cu): goto L_1CC5C;
    case RC_ADDR(0x0001cc5eu): goto L_1CC5E;
    case RC_ADDR(0x0001cc60u): goto L_1CC60;
    case RC_ADDR(0x0001cc62u): goto L_1CC62;
    case RC_ADDR(0x0001cc66u): goto L_1CC66;
    case RC_ADDR(0x0001cc6au): goto L_1CC6A;
    case RC_ADDR(0x0001cc6eu): goto L_1CC6E;
    case RC_ADDR(0x0001cc70u): goto L_1CC70;
    case RC_ADDR(0x0001cc76u): goto L_1CC76;
    case RC_ADDR(0x0001cc7au): goto L_1CC7A;
    case RC_ADDR(0x0001cc7cu): goto L_1CC7C;
    case RC_ADDR(0x0001cc7eu): goto L_1CC7E;
    case RC_ADDR(0x0001cc82u): goto L_1CC82;
    case RC_ADDR(0x0001cc88u): goto L_1CC88;
    case RC_ADDR(0x0001cc8cu): goto L_1CC8C;
    case RC_ADDR(0x0001cc8eu): goto L_1CC8E;
    case RC_ADDR(0x0001cc90u): goto L_1CC90;
    case RC_ADDR(0x0001cc94u): goto L_1CC94;
    case RC_ADDR(0x0001cc96u): goto L_1CC96;
    case RC_ADDR(0x0001cc98u): goto L_1CC98;
    case RC_ADDR(0x0001cc9cu): goto L_1CC9C;
    case RC_ADDR(0x0001cca0u): goto L_1CCA0;
    case RC_ADDR(0x0001cca4u): goto L_1CCA4;
    case RC_ADDR(0x0001cca6u): goto L_1CCA6;
    case RC_ADDR(0x0001ccacu): goto L_1CCAC;
    case RC_ADDR(0x0001ccb0u): goto L_1CCB0;
    case RC_ADDR(0x0001ccb4u): goto L_1CCB4;
    case RC_ADDR(0x0001ccb6u): goto L_1CCB6;
    case RC_ADDR(0x0001ccbcu): goto L_1CCBC;
    case RC_ADDR(0x0001ccc0u): goto L_1CCC0;
    case RC_ADDR(0x0001ccc4u): goto L_1CCC4;
    case RC_ADDR(0x0001ccc6u): goto L_1CCC6;
    case RC_ADDR(0x0001cccau): goto L_1CCCA;
    case RC_ADDR(0x0001ccd0u): goto L_1CCD0;
    case RC_ADDR(0x0001ccd4u): goto L_1CCD4;
    case RC_ADDR(0x0001ccd8u): goto L_1CCD8;
    case RC_ADDR(0x0001ccdcu): goto L_1CCDC;
    case RC_ADDR(0x0001ccdeu): goto L_1CCDE;
    case RC_ADDR(0x0001cce2u): goto L_1CCE2;
    case RC_ADDR(0x0001cce6u): goto L_1CCE6;
    case RC_ADDR(0x0001cceau): goto L_1CCEA;
    case RC_ADDR(0x0001ccf0u): goto L_1CCF0;
    case RC_ADDR(0x0001ccf4u): goto L_1CCF4;
    case RC_ADDR(0x0001ccf8u): goto L_1CCF8;
    case RC_ADDR(0x0001ccfcu): goto L_1CCFC;
    case RC_ADDR(0x0001ccfeu): goto L_1CCFE;
    case RC_ADDR(0x0001cd02u): goto L_1CD02;
    case RC_ADDR(0x0001cd06u): goto L_1CD06;
    case RC_ADDR(0x0001cd0au): goto L_1CD0A;
    case RC_ADDR(0x0001cd0cu): goto L_1CD0C;
    case RC_ADDR(0x0001cd10u): goto L_1CD10;
    case RC_ADDR(0x0001cd14u): goto L_1CD14;
    case RC_ADDR(0x0001cd16u): goto L_1CD16;
    case RC_ADDR(0x0001cd1au): goto L_1CD1A;
    case RC_ADDR(0x0001cd1eu): goto L_1CD1E;
    case RC_ADDR(0x0001cd22u): goto L_1CD22;
    case RC_ADDR(0x0001cd26u): goto L_1CD26;
    case RC_ADDR(0x0001cd2au): goto L_1CD2A;
    case RC_ADDR(0x0001cd2eu): goto L_1CD2E;
    case RC_ADDR(0x0001cd32u): goto L_1CD32;
    case RC_ADDR(0x0001cd36u): goto L_1CD36;
    case RC_ADDR(0x0001cd38u): goto L_1CD38;
    case RC_ADDR(0x0001cd3cu): goto L_1CD3C;
    case RC_ADDR(0x0001cd40u): goto L_1CD40;
    case RC_ADDR(0x0001cd46u): goto L_1CD46;
    case RC_ADDR(0x0001cd4au): goto L_1CD4A;
    case RC_ADDR(0x0001cd50u): goto L_1CD50;
    case RC_ADDR(0x0001cd54u): goto L_1CD54;
    case RC_ADDR(0x0001cd56u): goto L_1CD56;
    case RC_ADDR(0x0001cd58u): goto L_1CD58;
    case RC_ADDR(0x0001cd5cu): goto L_1CD5C;
    case RC_ADDR(0x0001cd60u): goto L_1CD60;
    case RC_ADDR(0x0001cd62u): goto L_1CD62;
    case RC_ADDR(0x0001cd66u): goto L_1CD66;
    case RC_ADDR(0x0001cd6au): goto L_1CD6A;
    case RC_ADDR(0x0001cd6cu): goto L_1CD6C;
    case RC_ADDR(0x0001cd72u): goto L_1CD72;
    case RC_ADDR(0x0001cd74u): goto L_1CD74;
    case RC_ADDR(0x0001cd78u): goto L_1CD78;
    case RC_ADDR(0x0001cd7cu): goto L_1CD7C;
    case RC_ADDR(0x0001cd80u): goto L_1CD80;
    case RC_ADDR(0x0001cd82u): goto L_1CD82;
    case RC_ADDR(0x0001cd88u): goto L_1CD88;
    case RC_ADDR(0x0001cd8au): goto L_1CD8A;
    case RC_ADDR(0x0001cd8eu): goto L_1CD8E;
    case RC_ADDR(0x0001cd90u): goto L_1CD90;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CC2E:
    /* 0001cc2e   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001cc2eu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1CC32:
    /* 0001cc32   4  tst.w (fffffe38,A4) */
    c->pc = RC_ADDR(0x0001cc32u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1c8u));
    rc_set_nzvc(c, t0, RC_W);

L_1CC36:
    /* 0001cc36   2  beq 0001cc3e */
    c->pc = RC_ADDR(0x0001cc36u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CC3E;

L_1CC38:
    /* 0001cc38   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001cc38u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CC3A:
    /* 0001cc3a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cc3au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CC3C:
    /* 0001cc3c   2  rts */
    c->pc = RC_ADDR(0x0001cc3cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1CC3E:
    /* 0001cc3e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001cc3eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC42:
    /* 0001cc42   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cc42u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC46:
    /* 0001cc46   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001cc46u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CC4A:
    /* 0001cc4a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001cc4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC4E:
    /* 0001cc4e   4  lea (ffffcae2,A4),A0 */
    c->pc = RC_ADDR(0x0001cc4eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x351eu);

L_1CC52:
    /* 0001cc52   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001cc52u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CC56:
    /* 0001cc56   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001cc56u);
    rc_step(c, m);
    rc_ext_w(c, 1);

L_1CC58:
    /* 0001cc58   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x0001cc58u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC5C:
    /* 0001cc5c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001cc5cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CC5E:
    /* 0001cc5e   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001cc5eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CC60:
    /* 0001cc60   2  bne 0001ccc6 */
    c->pc = RC_ADDR(0x0001cc60u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1CCC6;

L_1CC62:
    /* 0001cc62   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001cc62u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC66:
    /* 0001cc66   4  lea (26ae,A4),A0 */
    c->pc = RC_ADDR(0x0001cc66u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x26aeu);

L_1CC6A:
    /* 0001cc6a   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001cc6au);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1CC6E:
    /* 0001cc6e   2  bne 0001ccc6 */
    c->pc = RC_ADDR(0x0001cc6eu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1CCC6;

L_1CC70:
    /* 0001cc70   6  move.w (fffffffa,A5),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001cc70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC76:
    /* 0001cc76   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001cc76u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC7A:
    /* 0001cc7a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cc7au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1CC7C:
    /* 0001cc7c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001cc7cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1CC7E:
    /* 0001cc7e   4  lea (ffffcae8,A4),A0 */
    c->pc = RC_ADDR(0x0001cc7eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x3518u);

L_1CC82:
    /* 0001cc82   6  move.l (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001cc82u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CC88:
    /* 0001cc88   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001cc88u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1CC8C:
    /* 0001cc8c   2  tst.b (A0) */
    c->pc = RC_ADDR(0x0001cc8cu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1CC8E:
    /* 0001cc8e   2  beq 0001ccc6 */
    c->pc = RC_ADDR(0x0001cc8eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CCC6;

L_1CC90:
    /* 0001cc90   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001cc90u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1CC94:
    /* 0001cc94   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001cc94u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CC96:
    /* 0001cc96   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001cc96u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_1CC98:
    /* 0001cc98   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001cc98u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CC9C:
    /* 0001cc9c   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001cc9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCA0:
    /* 0001cca0   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001cca0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CCA4:
    /* 0001cca4   2  bne 0001ccac */
    c->pc = RC_ADDR(0x0001cca4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1CCAC;

L_1CCA6:
    /* 0001cca6   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001cca6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCAC:
    /* 0001ccac   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001ccacu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCB0:
    /* 0001ccb0   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001ccb0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CCB4:
    /* 0001ccb4   2  bne 0001ccbc */
    c->pc = RC_ADDR(0x0001ccb4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1CCBC;

L_1CCB6:
    /* 0001ccb6   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ccb6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCBC:
    /* 0001ccbc   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001ccbcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1CCC0:
    /* 0001ccc0   4  addq.l #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001ccc0u);
    rc_step(c, m);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1CCC4:
    /* 0001ccc4   2  bra 0001cc88 */
    c->pc = RC_ADDR(0x0001ccc4u);
    rc_step(c, m);
    rc_tick();
    goto L_1CC88;

L_1CCC6:
    /* 0001ccc6   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ccc6u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CCCA:
    /* 0001ccca   6  cmpi.w #6,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001cccau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_1CCD0:
    /* 0001ccd0   4  blt 0001cc4a */
    c->pc = RC_ADDR(0x0001ccd0u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1CC4A; }

L_1CCD4:
    /* 0001ccd4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001ccd4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCD8:
    /* 0001ccd8   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ccd8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCDC:
    /* 0001ccdc   2  eor.w D0,D1 */
    c->pc = RC_ADDR(0x0001ccdcu);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 ^ rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1CCDE:
    /* 0001ccde   4  beq 0001cd8e */
    c->pc = RC_ADDR(0x0001ccdeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CD8E;

L_1CCE2:
    /* 0001cce2   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001cce2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CCE6:
    /* 0001cce6   4  lea (26ae,A4),A0 */
    c->pc = RC_ADDR(0x0001cce6u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x26aeu);

L_1CCEA:
    /* 0001ccea   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001cceau);
    rc_step(c, m);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CCF0:
    /* 0001ccf0   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ccf0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CCF4:
    /* 0001ccf4   4  move.l (ffffcada,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ccf4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3526u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CCF8:
    /* 0001ccf8   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x0001ccf8u);
    rc_step(c, m);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0001ccfcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ab2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004328u);
    return;

L_1CCFC:
    /* 0001ccfc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ccfcu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CCFE:
    /* 0001ccfe   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ccfeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD02:
    /* 0001cd02   4  move.l (ffffcade,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cd02u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3522u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD06:
    /* 0001cd06   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x0001cd06u);
    rc_step(c, m);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0001cd0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ab2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004328u);
    return;

L_1CD0A:
    /* 0001cd0a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cd0au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CD0C:
    /* 0001cd0c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001cd0cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD10:
    /* 0001cd10   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x0001cd10u);
    rc_step(c, m);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x0001cd14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aacu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000353eu);
    return;

L_1CD14:
    /* 0001cd14   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001cd14u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1CD16:
    /* 0001cd16   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x0001cd16u);
    rc_step(c, m);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x0001cd1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_1CD1A:
    /* 0001cd1a   4  move.w (fffffdb0,A4),D0 */
    c->pc = RC_ADDR(0x0001cd1au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x250u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD1E:
    /* 0001cd1e   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0001cd1eu);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_1CD22:
    /* 0001cd22   4  add.w #78,D0 */
    c->pc = RC_ADDR(0x0001cd22u);
    rc_step(c, m);
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CD26:
    /* 0001cd26   4  move.w D0,(26aa,A4) */
    c->pc = RC_ADDR(0x0001cd26u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD2A:
    /* 0001cd2a   4  move.w (fffffdb0,A4),D0 */
    c->pc = RC_ADDR(0x0001cd2au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x250u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD2E:
    /* 0001cd2e   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0001cd2eu);
    rc_step(c, m);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_1CD32:
    /* 0001cd32   4  move.w #104,D1 */
    c->pc = RC_ADDR(0x0001cd32u);
    rc_step(c, m);
    t0 = 0x00000104u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD36:
    /* 0001cd36   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001cd36u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1CD38:
    /* 0001cd38   4  move.w D1,(26ac,A4) */
    c->pc = RC_ADDR(0x0001cd38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD3C:
    /* 0001cd3c   4  jsr (0001ba3e) */
    c->pc = RC_ADDR(0x0001cd3cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001cd40u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ba3eu);
    return;

L_1CD40:
    /* 0001cd40   6  move.w #1,(fffffe36,A4) */
    c->pc = RC_ADDR(0x0001cd40u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD46:
    /* 0001cd46   4  addq.w #1,(fffffdb0,A4) */
    c->pc = RC_ADDR(0x0001cd46u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x250u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CD4A:
    /* 0001cd4a   6  move.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x0001cd4au);
    rc_step(c, m);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD50:
    /* 0001cd50   4  tst.w (227e,A4) */
    c->pc = RC_ADDR(0x0001cd50u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227eu));
    rc_set_nzvc(c, t0, RC_W);

L_1CD54:
    /* 0001cd54   2  beq 0001cd5c */
    c->pc = RC_ADDR(0x0001cd54u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CD5C;

L_1CD56:
    /* 0001cd56   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001cd56u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CD58:
    /* 0001cd58   4  bra 0001cc3a */
    c->pc = RC_ADDR(0x0001cd58u);
    rc_step(c, m);
    rc_tick();
    goto L_1CC3A;

L_1CD5C:
    /* 0001cd5c   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001cd5cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1CD60:
    /* 0001cd60   2  beq 0001cd78 */
    c->pc = RC_ADDR(0x0001cd60u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CD78;

L_1CD62:
    /* 0001cd62   4  move.w #12c,-(A7) */
    c->pc = RC_ADDR(0x0001cd62u);
    rc_step(c, m);
    t0 = 0x0000012cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD66:
    /* 0001cd66   4  jsr (ffff807a,A4) */
    c->pc = RC_ADDR(0x0001cd66u);
    rc_step(c, m);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x0001cd6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000579cu);
    return;

L_1CD6A:
    /* 0001cd6a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001cd6au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1CD6C:
    /* 0001cd6c   6  move.w #17,(ffffefec,A4) */
    c->pc = RC_ADDR(0x0001cd6cu);
    rc_step(c, m);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x1014u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD72:
    /* 0001cd72   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001cd72u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CD74:
    /* 0001cd74   4  bra 0001cc3a */
    c->pc = RC_ADDR(0x0001cd74u);
    rc_step(c, m);
    rc_tick();
    goto L_1CC3A;

L_1CD78:
    /* 0001cd78   4  move.w #f6,-(A7) */
    c->pc = RC_ADDR(0x0001cd78u);
    rc_step(c, m);
    t0 = 0x000000f6u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD7C:
    /* 0001cd7c   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x0001cd7cu);
    rc_step(c, m);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x0001cd80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a9au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00002c92u);
    return;

L_1CD80:
    /* 0001cd80   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001cd80u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1CD82:
    /* 0001cd82   6  move.w #1d,(ffffefec,A4) */
    c->pc = RC_ADDR(0x0001cd82u);
    rc_step(c, m);
    t0 = 0x0000001du;
    rc_wr16(c, m, (c->a[4] - 0x1014u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD88:
    /* 0001cd88   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001cd88u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CD8A:
    /* 0001cd8a   4  bra 0001cc3a */
    c->pc = RC_ADDR(0x0001cd8au);
    rc_step(c, m);
    rc_tick();
    goto L_1CC3A;

L_1CD8E:
    /* 0001cd8e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001cd8eu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CD90:
    /* 0001cd90   4  bra 0001cc3a */
    c->pc = RC_ADDR(0x0001cd90u);
    rc_step(c, m);
    rc_tick();
    goto L_1CC3A;

}
