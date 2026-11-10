/* fn_00019e30 - 108 byte(s), 38 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00019e30(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019e30u): goto L_19E30;
    case RC_ADDR(0x00019e34u): goto L_19E34;
    case RC_ADDR(0x00019e38u): goto L_19E38;
    case RC_ADDR(0x00019e3au): goto L_19E3A;
    case RC_ADDR(0x00019e3cu): goto L_19E3C;
    case RC_ADDR(0x00019e40u): goto L_19E40;
    case RC_ADDR(0x00019e42u): goto L_19E42;
    case RC_ADDR(0x00019e44u): goto L_19E44;
    case RC_ADDR(0x00019e46u): goto L_19E46;
    case RC_ADDR(0x00019e4au): goto L_19E4A;
    case RC_ADDR(0x00019e4eu): goto L_19E4E;
    case RC_ADDR(0x00019e50u): goto L_19E50;
    case RC_ADDR(0x00019e54u): goto L_19E54;
    case RC_ADDR(0x00019e56u): goto L_19E56;
    case RC_ADDR(0x00019e58u): goto L_19E58;
    case RC_ADDR(0x00019e5au): goto L_19E5A;
    case RC_ADDR(0x00019e5cu): goto L_19E5C;
    case RC_ADDR(0x00019e60u): goto L_19E60;
    case RC_ADDR(0x00019e62u): goto L_19E62;
    case RC_ADDR(0x00019e66u): goto L_19E66;
    case RC_ADDR(0x00019e68u): goto L_19E68;
    case RC_ADDR(0x00019e6au): goto L_19E6A;
    case RC_ADDR(0x00019e6eu): goto L_19E6E;
    case RC_ADDR(0x00019e70u): goto L_19E70;
    case RC_ADDR(0x00019e74u): goto L_19E74;
    case RC_ADDR(0x00019e76u): goto L_19E76;
    case RC_ADDR(0x00019e7au): goto L_19E7A;
    case RC_ADDR(0x00019e7cu): goto L_19E7C;
    case RC_ADDR(0x00019e7eu): goto L_19E7E;
    case RC_ADDR(0x00019e80u): goto L_19E80;
    case RC_ADDR(0x00019e84u): goto L_19E84;
    case RC_ADDR(0x00019e88u): goto L_19E88;
    case RC_ADDR(0x00019e8au): goto L_19E8A;
    case RC_ADDR(0x00019e90u): goto L_19E90;
    case RC_ADDR(0x00019e92u): goto L_19E92;
    case RC_ADDR(0x00019e94u): goto L_19E94;
    case RC_ADDR(0x00019e98u): goto L_19E98;
    case RC_ADDR(0x00019e9au): goto L_19E9A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19E30:
    /* 00019e30   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00019e30u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_19E34:
    /* 00019e34   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00019e34u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_19E38:
    /* 00019e38   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x00019e38u);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_19E3A:
    /* 00019e3a   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x00019e3au);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_19E3C:
    /* 00019e3c   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00019e3cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E40:
    /* 00019e40   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e40u);
    rc_ext_l(c, 0);

L_19E42:
    /* 00019e42   2  add.l D6,D0 */
    c->pc = RC_ADDR(0x00019e42u);
    t0 = rc_d_get(c, 6, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19E44:
    /* 00019e44   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e44u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19E46:
    /* 00019e46   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00019e46u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_19E4A:
    /* 00019e4a   4  move.w (0,A0,D0.w),D4 */
    c->pc = RC_ADDR(0x00019e4au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E4E:
    /* 00019e4e   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00019e4eu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E50:
    /* 00019e50   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x00019e50u);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_19E54:
    /* 00019e54   2  beq 00019e5a */
    c->pc = RC_ADDR(0x00019e54u);
    if (rc_cond(c, 7)) goto L_19E5A;

L_19E56:
    /* 00019e56   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x00019e56u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_19E58:
    /* 00019e58   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00019e58u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_19E5A:
    /* 00019e5a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00019e5au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E5C:
    /* 00019e5c   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x00019e5cu);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_19E60:
    /* 00019e60   2  beq 00019e68 */
    c->pc = RC_ADDR(0x00019e60u);
    if (rc_cond(c, 7)) goto L_19E68;

L_19E62:
    /* 00019e62   4  sub.w #10,D4 */
    c->pc = RC_ADDR(0x00019e62u);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_19E66:
    /* 00019e66   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00019e66u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_19E68:
    /* 00019e68   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00019e68u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E6A:
    /* 00019e6a   4  and.w #f00,D0 */
    c->pc = RC_ADDR(0x00019e6au);
    t0 = 0x00000f00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_19E6E:
    /* 00019e6e   2  beq 00019e76 */
    c->pc = RC_ADDR(0x00019e6eu);
    if (rc_cond(c, 7)) goto L_19E76;

L_19E70:
    /* 00019e70   4  sub.w #100,D4 */
    c->pc = RC_ADDR(0x00019e70u);
    t0 = 0x00000100u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_19E74:
    /* 00019e74   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00019e74u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_19E76:
    /* 00019e76   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00019e76u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E7A:
    /* 00019e7a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00019e7au);
    rc_ext_l(c, 0);

L_19E7C:
    /* 00019e7c   2  add.l D6,D0 */
    c->pc = RC_ADDR(0x00019e7cu);
    t0 = rc_d_get(c, 6, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19E7E:
    /* 00019e7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019e7eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19E80:
    /* 00019e80   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00019e80u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_19E84:
    /* 00019e84   4  move.w D4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019e84u);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E88:
    /* 00019e88   2  addq.l #2,D6 */
    c->pc = RC_ADDR(0x00019e88u);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_19E8A:
    /* 00019e8a   6  cmp.l #40,D6 */
    c->pc = RC_ADDR(0x00019e8au);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_19E90:
    /* 00019e90   2  blt 00019e3c */
    c->pc = RC_ADDR(0x00019e90u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19E3C; }

L_19E92:
    /* 00019e92   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00019e92u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19E94:
    /* 00019e94   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x00019e94u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_19E98:
    /* 00019e98   2  unlk A5 */
    c->pc = RC_ADDR(0x00019e98u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19E9A:
    /* 00019e9a   2  rts */
    c->pc = RC_ADDR(0x00019e9au);
    rc_ret(c, m);
    return;

}
