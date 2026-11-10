/* fn_0000beda - 180 byte(s), 55 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000beda(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000bedau): goto L_BEDA;
    case RC_ADDR(0x0000bedeu): goto L_BEDE;
    case RC_ADDR(0x0000bee2u): goto L_BEE2;
    case RC_ADDR(0x0000bee8u): goto L_BEE8;
    case RC_ADDR(0x0000beeau): goto L_BEEA;
    case RC_ADDR(0x0000beeeu): goto L_BEEE;
    case RC_ADDR(0x0000bef0u): goto L_BEF0;
    case RC_ADDR(0x0000bef4u): goto L_BEF4;
    case RC_ADDR(0x0000bef8u): goto L_BEF8;
    case RC_ADDR(0x0000befcu): goto L_BEFC;
    case RC_ADDR(0x0000befeu): goto L_BEFE;
    case RC_ADDR(0x0000bf02u): goto L_BF02;
    case RC_ADDR(0x0000bf06u): goto L_BF06;
    case RC_ADDR(0x0000bf08u): goto L_BF08;
    case RC_ADDR(0x0000bf0cu): goto L_BF0C;
    case RC_ADDR(0x0000bf0eu): goto L_BF0E;
    case RC_ADDR(0x0000bf12u): goto L_BF12;
    case RC_ADDR(0x0000bf16u): goto L_BF16;
    case RC_ADDR(0x0000bf1au): goto L_BF1A;
    case RC_ADDR(0x0000bf1cu): goto L_BF1C;
    case RC_ADDR(0x0000bf20u): goto L_BF20;
    case RC_ADDR(0x0000bf22u): goto L_BF22;
    case RC_ADDR(0x0000bf26u): goto L_BF26;
    case RC_ADDR(0x0000bf2au): goto L_BF2A;
    case RC_ADDR(0x0000bf2cu): goto L_BF2C;
    case RC_ADDR(0x0000bf30u): goto L_BF30;
    case RC_ADDR(0x0000bf34u): goto L_BF34;
    case RC_ADDR(0x0000bf38u): goto L_BF38;
    case RC_ADDR(0x0000bf3cu): goto L_BF3C;
    case RC_ADDR(0x0000bf40u): goto L_BF40;
    case RC_ADDR(0x0000bf44u): goto L_BF44;
    case RC_ADDR(0x0000bf48u): goto L_BF48;
    case RC_ADDR(0x0000bf4cu): goto L_BF4C;
    case RC_ADDR(0x0000bf4eu): goto L_BF4E;
    case RC_ADDR(0x0000bf50u): goto L_BF50;
    case RC_ADDR(0x0000bf52u): goto L_BF52;
    case RC_ADDR(0x0000bf56u): goto L_BF56;
    case RC_ADDR(0x0000bf5au): goto L_BF5A;
    case RC_ADDR(0x0000bf5eu): goto L_BF5E;
    case RC_ADDR(0x0000bf60u): goto L_BF60;
    case RC_ADDR(0x0000bf64u): goto L_BF64;
    case RC_ADDR(0x0000bf66u): goto L_BF66;
    case RC_ADDR(0x0000bf68u): goto L_BF68;
    case RC_ADDR(0x0000bf6cu): goto L_BF6C;
    case RC_ADDR(0x0000bf6eu): goto L_BF6E;
    case RC_ADDR(0x0000bf70u): goto L_BF70;
    case RC_ADDR(0x0000bf74u): goto L_BF74;
    case RC_ADDR(0x0000bf76u): goto L_BF76;
    case RC_ADDR(0x0000bf78u): goto L_BF78;
    case RC_ADDR(0x0000bf7cu): goto L_BF7C;
    case RC_ADDR(0x0000bf7eu): goto L_BF7E;
    case RC_ADDR(0x0000bf80u): goto L_BF80;
    case RC_ADDR(0x0000bf84u): goto L_BF84;
    case RC_ADDR(0x0000bf88u): goto L_BF88;
    case RC_ADDR(0x0000bf8cu): goto L_BF8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BEDA:
    /* 0000beda   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0000bedau);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_BEDE:
    /* 0000bede   4  movea.l (ffffcb14,A4),A0 */
    c->pc = RC_ADDR(0x0000bedeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_BEE2:
    /* 0000bee2   6  move.l (ffffcbbc,A4),(4,A0) */
    c->pc = RC_ADDR(0x0000bee2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BEE8:
    /* 0000bee8   2  moveq #f,D0 */
    c->pc = RC_ADDR(0x0000bee8u);
    rc_step(c, m);
    c->d[0] = 0x0000000fu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BEEA:
    /* 0000beea   4  sub.w (fffff27e,A4),D0 */
    c->pc = RC_ADDR(0x0000beeau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BEEE:
    /* 0000beee   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000beeeu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_BEF0:
    /* 0000bef0   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000bef0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BEF4:
    /* 0000bef4   4  move.w (fffff280,A4),D0 */
    c->pc = RC_ADDR(0x0000bef4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BEF8:
    /* 0000bef8   4  add.w #b8,D0 */
    c->pc = RC_ADDR(0x0000bef8u);
    rc_step(c, m);
    t0 = 0x000000b8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BEFC:
    /* 0000befc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000befcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_BEFE:
    /* 0000befe   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000befeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF02:
    /* 0000bf02   4  move.w (738,A4),D0 */
    c->pc = RC_ADDR(0x0000bf02u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x738u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BF06:
    /* 0000bf06   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bf06u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_BF08:
    /* 0000bf08   4  divs.w #3,D0 */
    c->pc = RC_ADDR(0x0000bf08u);
    rc_step(c, m);
    t0 = 0x00000003u;
    rc_divs(c, m, 0, t0);

L_BF0C:
    /* 0000bf0c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bf0cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_BF0E:
    /* 0000bf0e   4  add.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000bf0eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF12:
    /* 0000bf12   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000bf12u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF16:
    /* 0000bf16   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000bf16u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF1A:
    /* 0000bf1a   2  addq.l #5,D0 */
    c->pc = RC_ADDR(0x0000bf1au);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF1C:
    /* 0000bf1c   4  move.l D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000bf1cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF20:
    /* 0000bf20   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000bf20u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BF22:
    /* 0000bf22   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bf22u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF26:
    /* 0000bf26   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x0000bf26u);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0000bf2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_BF2A:
    /* 0000bf2a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000bf2au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BF2C:
    /* 0000bf2c   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf2cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF30:
    /* 0000bf30   4  pea (00000130).l */
    c->pc = RC_ADDR(0x0000bf30u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000130u);

L_BF34:
    /* 0000bf34   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf34u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF38:
    /* 0000bf38   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000bf38u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF3C:
    /* 0000bf3c   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bf3cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF40:
    /* 0000bf40   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x0000bf40u);
    rc_step(c, m);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000bf44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_BF44:
    /* 0000bf44   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000bf44u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_BF48:
    /* 0000bf48   4  tst.w (738,A4) */
    c->pc = RC_ADDR(0x0000bf48u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x738u));
    rc_set_nzvc(c, t0, RC_W);

L_BF4C:
    /* 0000bf4c   2  bne 0000bf52 */
    c->pc = RC_ADDR(0x0000bf4cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_BF52;

L_BF4E:
    /* 0000bf4e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000bf4eu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BF50:
    /* 0000bf50   2  rts */
    c->pc = RC_ADDR(0x0000bf50u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_BF52:
    /* 0000bf52   4  pea (00000006).l */
    c->pc = RC_ADDR(0x0000bf52u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000006u);

L_BF56:
    /* 0000bf56   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bf56u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF5A:
    /* 0000bf5a   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x0000bf5au);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0000bf5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_BF5E:
    /* 0000bf5e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000bf5eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BF60:
    /* 0000bf60   4  move.l (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0000bf60u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF64:
    /* 0000bf64   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000bf64u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF66:
    /* 0000bf66   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000bf66u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF68:
    /* 0000bf68   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000bf68u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF6C:
    /* 0000bf6c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000bf6cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF6E:
    /* 0000bf6e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000bf6eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF70:
    /* 0000bf70   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000bf70u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF74:
    /* 0000bf74   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000bf74u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF76:
    /* 0000bf76   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000bf76u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF78:
    /* 0000bf78   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000bf78u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF7C:
    /* 0000bf7c   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000bf7cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_BF7E:
    /* 0000bf7e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000bf7eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF80:
    /* 0000bf80   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bf80u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BF84:
    /* 0000bf84   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x0000bf84u);
    rc_step(c, m);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000bf88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_BF88:
    /* 0000bf88   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000bf88u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_BF8C:
    /* 0000bf8c   2  bra 0000bf4e */
    c->pc = RC_ADDR(0x0000bf8cu);
    rc_step(c, m);
    rc_tick();
    goto L_BF4E;

}
