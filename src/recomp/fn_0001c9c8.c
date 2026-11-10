/* fn_0001c9c8 - 194 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c9c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c9c8u): goto L_1C9C8;
    case RC_ADDR(0x0001c9ccu): goto L_1C9CC;
    case RC_ADDR(0x0001c9d2u): goto L_1C9D2;
    case RC_ADDR(0x0001c9d4u): goto L_1C9D4;
    case RC_ADDR(0x0001c9dau): goto L_1C9DA;
    case RC_ADDR(0x0001c9dcu): goto L_1C9DC;
    case RC_ADDR(0x0001c9e0u): goto L_1C9E0;
    case RC_ADDR(0x0001c9e4u): goto L_1C9E4;
    case RC_ADDR(0x0001c9e6u): goto L_1C9E6;
    case RC_ADDR(0x0001c9eau): goto L_1C9EA;
    case RC_ADDR(0x0001c9eeu): goto L_1C9EE;
    case RC_ADDR(0x0001c9f0u): goto L_1C9F0;
    case RC_ADDR(0x0001c9f6u): goto L_1C9F6;
    case RC_ADDR(0x0001c9fau): goto L_1C9FA;
    case RC_ADDR(0x0001c9feu): goto L_1C9FE;
    case RC_ADDR(0x0001ca00u): goto L_1CA00;
    case RC_ADDR(0x0001ca04u): goto L_1CA04;
    case RC_ADDR(0x0001ca08u): goto L_1CA08;
    case RC_ADDR(0x0001ca0au): goto L_1CA0A;
    case RC_ADDR(0x0001ca0cu): goto L_1CA0C;
    case RC_ADDR(0x0001ca10u): goto L_1CA10;
    case RC_ADDR(0x0001ca16u): goto L_1CA16;
    case RC_ADDR(0x0001ca18u): goto L_1CA18;
    case RC_ADDR(0x0001ca1cu): goto L_1CA1C;
    case RC_ADDR(0x0001ca20u): goto L_1CA20;
    case RC_ADDR(0x0001ca24u): goto L_1CA24;
    case RC_ADDR(0x0001ca28u): goto L_1CA28;
    case RC_ADDR(0x0001ca2au): goto L_1CA2A;
    case RC_ADDR(0x0001ca2eu): goto L_1CA2E;
    case RC_ADDR(0x0001ca30u): goto L_1CA30;
    case RC_ADDR(0x0001ca34u): goto L_1CA34;
    case RC_ADDR(0x0001ca36u): goto L_1CA36;
    case RC_ADDR(0x0001ca3au): goto L_1CA3A;
    case RC_ADDR(0x0001ca3cu): goto L_1CA3C;
    case RC_ADDR(0x0001ca40u): goto L_1CA40;
    case RC_ADDR(0x0001ca42u): goto L_1CA42;
    case RC_ADDR(0x0001ca46u): goto L_1CA46;
    case RC_ADDR(0x0001ca48u): goto L_1CA48;
    case RC_ADDR(0x0001ca4au): goto L_1CA4A;
    case RC_ADDR(0x0001ca4eu): goto L_1CA4E;
    case RC_ADDR(0x0001ca50u): goto L_1CA50;
    case RC_ADDR(0x0001ca52u): goto L_1CA52;
    case RC_ADDR(0x0001ca56u): goto L_1CA56;
    case RC_ADDR(0x0001ca58u): goto L_1CA58;
    case RC_ADDR(0x0001ca5au): goto L_1CA5A;
    case RC_ADDR(0x0001ca5eu): goto L_1CA5E;
    case RC_ADDR(0x0001ca62u): goto L_1CA62;
    case RC_ADDR(0x0001ca66u): goto L_1CA66;
    case RC_ADDR(0x0001ca6au): goto L_1CA6A;
    case RC_ADDR(0x0001ca6eu): goto L_1CA6E;
    case RC_ADDR(0x0001ca72u): goto L_1CA72;
    case RC_ADDR(0x0001ca78u): goto L_1CA78;
    case RC_ADDR(0x0001ca7au): goto L_1CA7A;
    case RC_ADDR(0x0001ca7eu): goto L_1CA7E;
    case RC_ADDR(0x0001ca80u): goto L_1CA80;
    case RC_ADDR(0x0001ca86u): goto L_1CA86;
    case RC_ADDR(0x0001ca88u): goto L_1CA88;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C9C8:
    /* 0001c9c8   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001c9c8u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1C9CC:
    /* 0001c9cc   6  cmpi.w #1,(26a2,A4) */
    c->pc = RC_ADDR(0x0001c9ccu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C9D2:
    /* 0001c9d2   2  ble 0001ca00 */
    c->pc = RC_ADDR(0x0001c9d2u);
    if (rc_cond(c, 15)) goto L_1CA00;

L_1C9D4:
    /* 0001c9d4   6  cmpi.w #3,(26a2,A4) */
    c->pc = RC_ADDR(0x0001c9d4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1C9DA:
    /* 0001c9da   2  bne 0001c9f0 */
    c->pc = RC_ADDR(0x0001c9dau);
    if (rc_cond(c, 6)) goto L_1C9F0;

L_1C9DC:
    /* 0001c9dc   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001c9dcu);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9E0:
    /* 0001c9e0   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001c9e0u);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c9e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C9E4:
    /* 0001c9e4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c9e4u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C9E6:
    /* 0001c9e6   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001c9e6u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9EA:
    /* 0001c9ea   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001c9eau);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c9eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C9EE:
    /* 0001c9ee   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c9eeu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C9F0:
    /* 0001c9f0   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c9f0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9F6:
    /* 0001c9f6   4  move.w (26a8,A4),D0 */
    c->pc = RC_ADDR(0x0001c9f6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9FA:
    /* 0001c9fa   4  add.w D0,(26a8,A4) */
    c->pc = RC_ADDR(0x0001c9fau);
    t3 = (c->a[4] + 0x26a8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C9FE:
    /* 0001c9fe   2  bra 0001ca04 */
    c->pc = RC_ADDR(0x0001c9feu);
    goto L_1CA04;

L_1CA00:
    /* 0001ca00   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ca00u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1CA04:
    /* 0001ca04   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001ca04u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA08:
    /* 0001ca08   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ca08u);
    rc_ext_l(c, 0);

L_1CA0A:
    /* 0001ca0a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ca0au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1CA0C:
    /* 0001ca0c   4  lea (2694,A4),A0 */
    c->pc = RC_ADDR(0x0001ca0cu);
    c->a[0] = (c->a[4] + 0x2694u);

L_1CA10:
    /* 0001ca10   6  move.l (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ca10u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA16:
    /* 0001ca16   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ca16u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CA18:
    /* 0001ca18   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ca18u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1CA1C:
    /* 0001ca1c   4  move.l (24,A0),-(A7) */
    c->pc = RC_ADDR(0x0001ca1cu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA20:
    /* 0001ca20   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ca20u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1CA24:
    /* 0001ca24   4  move.l (20,A0),-(A7) */
    c->pc = RC_ADDR(0x0001ca24u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA28:
    /* 0001ca28   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ca28u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CA2A:
    /* 0001ca2a   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ca2au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1CA2E:
    /* 0001ca2e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ca2eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CA30:
    /* 0001ca30   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001ca30u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA34:
    /* 0001ca34   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ca34u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA36:
    /* 0001ca36   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ca36u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1CA3A:
    /* 0001ca3a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ca3au);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1CA3C:
    /* 0001ca3c   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0001ca3cu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1CA40:
    /* 0001ca40   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ca40u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA42:
    /* 0001ca42   4  move.w (26a6,A4),D0 */
    c->pc = RC_ADDR(0x0001ca42u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA46:
    /* 0001ca46   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ca46u);
    rc_ext_l(c, 0);

L_1CA48:
    /* 0001ca48   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ca48u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA4A:
    /* 0001ca4a   4  move.w (26a4,A4),D0 */
    c->pc = RC_ADDR(0x0001ca4au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA4E:
    /* 0001ca4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ca4eu);
    rc_ext_l(c, 0);

L_1CA50:
    /* 0001ca50   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001ca50u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA52:
    /* 0001ca52   4  pea (229a,A4) */
    c->pc = RC_ADDR(0x0001ca52u);
    rc_push32(c, m, (c->a[4] + 0x229au));

L_1CA56:
    /* 0001ca56   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ca56u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CA58:
    /* 0001ca58   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ca58u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1CA5A:
    /* 0001ca5a   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ca5au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CA5E:
    /* 0001ca5e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0001ca5eu);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0001ca62u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_1CA62:
    /* 0001ca62   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001ca62u);
    c->a[7] = (c->a[7] + 0x30u);

L_1CA66:
    /* 0001ca66   4  move.w (26a8,A4),D0 */
    c->pc = RC_ADDR(0x0001ca66u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA6A:
    /* 0001ca6a   4  add.w D0,(26a4,A4) */
    c->pc = RC_ADDR(0x0001ca6au);
    t3 = (c->a[4] + 0x26a4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CA6E:
    /* 0001ca6e   4  addq.w #1,(26a2,A4) */
    c->pc = RC_ADDR(0x0001ca6eu);
    t3 = (c->a[4] + 0x26a2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1CA72:
    /* 0001ca72   6  cmpi.w #c,(26a2,A4) */
    c->pc = RC_ADDR(0x0001ca72u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1CA78:
    /* 0001ca78   2  bgt 0001ca80 */
    c->pc = RC_ADDR(0x0001ca78u);
    if (rc_cond(c, 14)) goto L_1CA80;

L_1CA7A:
    /* 0001ca7a   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001ca7au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1CA7E:
    /* 0001ca7e   2  beq 0001ca86 */
    c->pc = RC_ADDR(0x0001ca7eu);
    if (rc_cond(c, 7)) goto L_1CA86;

L_1CA80:
    /* 0001ca80   6  move.w #1,(227a,A4) */
    c->pc = RC_ADDR(0x0001ca80u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x227au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CA86:
    /* 0001ca86   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ca86u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CA88:
    /* 0001ca88   2  rts */
    c->pc = RC_ADDR(0x0001ca88u);
    rc_ret(c, m);
    return;

}
