/* fn_00006a1a - 70 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006a1a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006a1au): goto L_6A1A;
    case RC_ADDR(0x00006a1eu): goto L_6A1E;
    case RC_ADDR(0x00006a22u): goto L_6A22;
    case RC_ADDR(0x00006a24u): goto L_6A24;
    case RC_ADDR(0x00006a26u): goto L_6A26;
    case RC_ADDR(0x00006a2au): goto L_6A2A;
    case RC_ADDR(0x00006a2eu): goto L_6A2E;
    case RC_ADDR(0x00006a32u): goto L_6A32;
    case RC_ADDR(0x00006a36u): goto L_6A36;
    case RC_ADDR(0x00006a38u): goto L_6A38;
    case RC_ADDR(0x00006a3au): goto L_6A3A;
    case RC_ADDR(0x00006a3eu): goto L_6A3E;
    case RC_ADDR(0x00006a42u): goto L_6A42;
    case RC_ADDR(0x00006a44u): goto L_6A44;
    case RC_ADDR(0x00006a46u): goto L_6A46;
    case RC_ADDR(0x00006a48u): goto L_6A48;
    case RC_ADDR(0x00006a4cu): goto L_6A4C;
    case RC_ADDR(0x00006a4eu): goto L_6A4E;
    case RC_ADDR(0x00006a50u): goto L_6A50;
    case RC_ADDR(0x00006a54u): goto L_6A54;
    case RC_ADDR(0x00006a5au): goto L_6A5A;
    case RC_ADDR(0x00006a5cu): goto L_6A5C;
    case RC_ADDR(0x00006a5eu): goto L_6A5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6A1A:
    /* 00006a1a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00006a1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_6A1E:
    /* 00006a1e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006a1eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A22:
    /* 00006a22   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00006a22u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_6A24:
    /* 00006a24   2  beq 00006a5c */
    c->pc = RC_ADDR(0x00006a24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6A5C;

L_6A26:
    /* 00006a26   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a26u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6A2A:
    /* 00006a2a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006a2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A2E:
    /* 00006a2e   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x00006a2eu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_6A32:
    /* 00006a32   4  lea (fffff1fa,A4),A0 */
    c->pc = RC_ADDR(0x00006a32u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe06u);

L_6A36:
    /* 00006a36   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00006a36u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6A38:
    /* 00006a38   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006a38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A3A:
    /* 00006a3a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006a3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A3E:
    /* 00006a3e   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00006a3eu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00006a42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_6A42:
    /* 00006a42   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006a42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6A44:
    /* 00006a44   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006a44u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6A46:
    /* 00006a46   2  bne 00006a50 */
    c->pc = RC_ADDR(0x00006a46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6A50;

L_6A48:
    /* 00006a48   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006a48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A4C:
    /* 00006a4c   2  unlk A5 */
    c->pc = RC_ADDR(0x00006a4cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6A4E:
    /* 00006a4e   2  rts */
    c->pc = RC_ADDR(0x00006a4eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_6A50:
    /* 00006a50   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a50u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6A54:
    /* 00006a54   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a54u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_6A5A:
    /* 00006a5a   2  blt 00006a2a */
    c->pc = RC_ADDR(0x00006a5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6A2A; }

L_6A5C:
    /* 00006a5c   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00006a5cu);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6A5E:
    /* 00006a5e   2  bra 00006a4c */
    c->pc = RC_ADDR(0x00006a5eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6A4C;

}
