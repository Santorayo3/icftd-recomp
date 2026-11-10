/* fn_0000176c - 132 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000176c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000176cu: goto L_176C;
    case 0x00001770u: goto L_1770;
    case 0x00001774u: goto L_1774;
    case 0x00001776u: goto L_1776;
    case 0x0000177au: goto L_177A;
    case 0x0000177eu: goto L_177E;
    case 0x00001782u: goto L_1782;
    case 0x00001788u: goto L_1788;
    case 0x0000178cu: goto L_178C;
    case 0x00001790u: goto L_1790;
    case 0x00001792u: goto L_1792;
    case 0x00001794u: goto L_1794;
    case 0x00001798u: goto L_1798;
    case 0x0000179eu: goto L_179E;
    case 0x000017a0u: goto L_17A0;
    case 0x000017a4u: goto L_17A4;
    case 0x000017a6u: goto L_17A6;
    case 0x000017aau: goto L_17AA;
    case 0x000017aeu: goto L_17AE;
    case 0x000017b0u: goto L_17B0;
    case 0x000017b2u: goto L_17B2;
    case 0x000017b6u: goto L_17B6;
    case 0x000017b8u: goto L_17B8;
    case 0x000017bau: goto L_17BA;
    case 0x000017beu: goto L_17BE;
    case 0x000017c0u: goto L_17C0;
    case 0x000017c4u: goto L_17C4;
    case 0x000017c8u: goto L_17C8;
    case 0x000017cau: goto L_17CA;
    case 0x000017ceu: goto L_17CE;
    case 0x000017d2u: goto L_17D2;
    case 0x000017d4u: goto L_17D4;
    case 0x000017d6u: goto L_17D6;
    case 0x000017dau: goto L_17DA;
    case 0x000017e0u: goto L_17E0;
    case 0x000017e4u: goto L_17E4;
    case 0x000017eau: goto L_17EA;
    case 0x000017ecu: goto L_17EC;
    case 0x000017eeu: goto L_17EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_176C:
    /* 0000176c   4  link.w A5,#fffffff6 */
    c->pc = 0x0000176cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1770:
    /* 00001770   4  movea.l (8,A5),A0 */
    c->pc = 0x00001770u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1774:
    /* 00001774   2  moveq #0,D0 */
    c->pc = 0x00001774u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1776:
    /* 00001776   4  move.b (27,A0),D0 */
    c->pc = 0x00001776u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x27u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_177A:
    /* 0000177a   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x0000177au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_177E:
    /* 0000177e   4  movea.l (8,A5),A0 */
    c->pc = 0x0000177eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1782:
    /* 00001782   6  move.l (28,A0),(fffffff6,A5) */
    c->pc = 0x00001782u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x28u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1788:
    /* 00001788   4  clr.w (fffffffc,A5) */
    c->pc = 0x00001788u;
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_178C:
    /* 0000178c   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x0000178cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1790:
    /* 00001790   2  ext.l D0 */
    c->pc = 0x00001790u;
    rc_ext_l(c, 0);

L_1792:
    /* 00001792   2  asl.l #1,D0 */
    c->pc = 0x00001792u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1794:
    /* 00001794   4  lea (ffffcf54,A4),A0 */
    c->pc = 0x00001794u;
    c->a[0] = (c->a[4] - 0x30acu);

L_1798:
    /* 00001798   6  cmpi.w #ffff,(0,A0,D0.w) */
    c->pc = 0x00001798u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_179E:
    /* 0000179e   2  beq 000017a6 */
    c->pc = 0x0000179eu;
    if (rc_cond(c, 7)) goto L_17A6;

L_17A0:
    /* 000017a0   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x000017a0u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17A4:
    /* 000017a4   2  bra 0000178c */
    c->pc = 0x000017a4u;
    rc_tick();
    goto L_178C;

L_17A6:
    /* 000017a6   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x000017a6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AA:
    /* 000017aa   4  subq.w #1,(fffffffe,A5) */
    c->pc = 0x000017aau;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17AE:
    /* 000017ae   2  tst.w D0 */
    c->pc = 0x000017aeu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17B0:
    /* 000017b0   2  beq 000017ec */
    c->pc = 0x000017b0u;
    if (rc_cond(c, 7)) goto L_17EC;

L_17B2:
    /* 000017b2   4  movea.l (fffffff6,A5),A0 */
    c->pc = 0x000017b2u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_17B6:
    /* 000017b6   2  addq.l #2,A0 */
    c->pc = 0x000017b6u;
    c->a[0] += 0x00000002u;

L_17B8:
    /* 000017b8   2  move.l A0,-(A7) */
    c->pc = 0x000017b8u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17BA:
    /* 000017ba   4  jsr (0000169a) */
    c->pc = 0x000017bau;
    rc_push32(c, m, 0x000017beu);
    rc_depth++;
    c->pc = 0x0000169au;
    return;

L_17BE:
    /* 000017be   2  addq.w #4,A7 */
    c->pc = 0x000017beu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17C0:
    /* 000017c0   4  move.w D0,(fffffffa,A5) */
    c->pc = 0x000017c0u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C4:
    /* 000017c4   4  tst.w (fffffffa,A5) */
    c->pc = 0x000017c4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_17C8:
    /* 000017c8   2  blt 000017e0 */
    c->pc = 0x000017c8u;
    if (rc_cond(c, 13)) goto L_17E0;

L_17CA:
    /* 000017ca   4  move.w (fffffffc,A5),D0 */
    c->pc = 0x000017cau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CE:
    /* 000017ce   4  addq.w #1,(fffffffc,A5) */
    c->pc = 0x000017ceu;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17D2:
    /* 000017d2   2  ext.l D0 */
    c->pc = 0x000017d2u;
    rc_ext_l(c, 0);

L_17D4:
    /* 000017d4   2  asl.l #1,D0 */
    c->pc = 0x000017d4u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_17D6:
    /* 000017d6   4  lea (ffffcf54,A4),A0 */
    c->pc = 0x000017d6u;
    c->a[0] = (c->a[4] - 0x30acu);

L_17DA:
    /* 000017da   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = 0x000017dau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E0:
    /* 000017e0   4  movea.l (fffffff6,A5),A0 */
    c->pc = 0x000017e0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_17E4:
    /* 000017e4   6  move.l (6,A0),(fffffff6,A5) */
    c->pc = 0x000017e4u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x6u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17EA:
    /* 000017ea   2  bra 000017a6 */
    c->pc = 0x000017eau;
    rc_tick();
    goto L_17A6;

L_17EC:
    /* 000017ec   2  unlk A5 */
    c->pc = 0x000017ecu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17EE:
    /* 000017ee   2  rts */
    c->pc = 0x000017eeu;
    rc_ret(c, m);
    return;

}
