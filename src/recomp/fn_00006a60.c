/* fn_00006a60 - 164 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006a60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006a60u): goto L_6A60;
    case RC_ADDR(0x00006a64u): goto L_6A64;
    case RC_ADDR(0x00006a68u): goto L_6A68;
    case RC_ADDR(0x00006a6cu): goto L_6A6C;
    case RC_ADDR(0x00006a70u): goto L_6A70;
    case RC_ADDR(0x00006a74u): goto L_6A74;
    case RC_ADDR(0x00006a78u): goto L_6A78;
    case RC_ADDR(0x00006a7au): goto L_6A7A;
    case RC_ADDR(0x00006a7cu): goto L_6A7C;
    case RC_ADDR(0x00006a7eu): goto L_6A7E;
    case RC_ADDR(0x00006a84u): goto L_6A84;
    case RC_ADDR(0x00006a88u): goto L_6A88;
    case RC_ADDR(0x00006a8au): goto L_6A8A;
    case RC_ADDR(0x00006a8cu): goto L_6A8C;
    case RC_ADDR(0x00006a90u): goto L_6A90;
    case RC_ADDR(0x00006a94u): goto L_6A94;
    case RC_ADDR(0x00006a96u): goto L_6A96;
    case RC_ADDR(0x00006a9au): goto L_6A9A;
    case RC_ADDR(0x00006a9eu): goto L_6A9E;
    case RC_ADDR(0x00006aa0u): goto L_6AA0;
    case RC_ADDR(0x00006aa6u): goto L_6AA6;
    case RC_ADDR(0x00006aaau): goto L_6AAA;
    case RC_ADDR(0x00006aaeu): goto L_6AAE;
    case RC_ADDR(0x00006ab2u): goto L_6AB2;
    case RC_ADDR(0x00006ab6u): goto L_6AB6;
    case RC_ADDR(0x00006ab8u): goto L_6AB8;
    case RC_ADDR(0x00006abcu): goto L_6ABC;
    case RC_ADDR(0x00006ac0u): goto L_6AC0;
    case RC_ADDR(0x00006ac2u): goto L_6AC2;
    case RC_ADDR(0x00006ac6u): goto L_6AC6;
    case RC_ADDR(0x00006ac8u): goto L_6AC8;
    case RC_ADDR(0x00006acau): goto L_6ACA;
    case RC_ADDR(0x00006aceu): goto L_6ACE;
    case RC_ADDR(0x00006ad2u): goto L_6AD2;
    case RC_ADDR(0x00006ad4u): goto L_6AD4;
    case RC_ADDR(0x00006ad8u): goto L_6AD8;
    case RC_ADDR(0x00006adcu): goto L_6ADC;
    case RC_ADDR(0x00006ae0u): goto L_6AE0;
    case RC_ADDR(0x00006ae4u): goto L_6AE4;
    case RC_ADDR(0x00006ae6u): goto L_6AE6;
    case RC_ADDR(0x00006ae8u): goto L_6AE8;
    case RC_ADDR(0x00006aecu): goto L_6AEC;
    case RC_ADDR(0x00006aeeu): goto L_6AEE;
    case RC_ADDR(0x00006af2u): goto L_6AF2;
    case RC_ADDR(0x00006af8u): goto L_6AF8;
    case RC_ADDR(0x00006afcu): goto L_6AFC;
    case RC_ADDR(0x00006b00u): goto L_6B00;
    case RC_ADDR(0x00006b02u): goto L_6B02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6A60:
    /* 00006a60   4  link.w A5,#ffffffec */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a60u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_6A64:
    /* 00006a64   4  tst.l (8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a64u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6A68:
    /* 00006a68   4  beq 00006b00 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a68u);
    if (rc_cond(c, 7)) goto L_6B00;

L_6A6C:
    /* 00006a6c   4  pea (00006b04) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a6cu);
    rc_push32(c, m, RC_ADDR(0x00006b04u));

L_6A70:
    /* 00006a70   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a70u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A74:
    /* 00006a74   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a74u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00006a78u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_6A78:
    /* 00006a78   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a78u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6A7A:
    /* 00006a7a   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a7au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6A7C:
    /* 00006a7c   2  bne 00006a84 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a7cu);
    if (rc_cond(c, 6)) goto L_6A84;

L_6A7E:
    /* 00006a7e   6  move.w #1,(fffff26a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a7eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd96u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A84:
    /* 00006a84   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a84u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6A88:
    /* 00006a88   2  bsr 00006a1a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a88u);
    rc_push32(c, m, RC_ADDR(0x00006a8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006a1au);
    return;

L_6A8A:
    /* 00006a8a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a8au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6A8C:
    /* 00006a8c   4  move.w D0,(fffff260,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a8cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xda0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6A90:
    /* 00006a90   4  tst.w (fffff260,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a90u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda0u));
    rc_set_nzvc(c, t0, RC_W);

L_6A94:
    /* 00006a94   2  bge 00006b00 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a94u);
    if (rc_cond(c, 12)) goto L_6B00;

L_6A96:
    /* 00006a96   4  pea (00006b08) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a96u);
    rc_push32(c, m, RC_ADDR(0x00006b08u));

L_6A9A:
    /* 00006a9a   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a9au);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006a9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_6A9E:
    /* 00006a9e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006a9eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6AA0:
    /* 00006aa0   6  move.b #21,(ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aa0u);
    t0 = 0x00000021u;
    rc_wr8(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_6AA6:
    /* 00006aa6   4  clr.b (ffffffed,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aa6u);
    rc_wr8(c, m, (c->a[5] - 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6AAA:
    /* 00006aaa   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aaau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AAE:
    /* 00006aae   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aaeu);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_6AB2:
    /* 00006ab2   4  jsr (ffff82c6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ab2u);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x00006ab6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020c92u);
    return;

L_6AB6:
    /* 00006ab6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ab6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6AB8:
    /* 00006ab8   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ab8u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_6ABC:
    /* 00006abc   4  jsr (ffff8230,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006abcu);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x00006ac0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_6AC0:
    /* 00006ac0   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ac0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6AC2:
    /* 00006ac2   4  move.w (fffff25e,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ac2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6AC6:
    /* 00006ac6   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ac6u);
    rc_ext_l(c, 1);

L_6AC8:
    /* 00006ac8   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ac8u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_6ACA:
    /* 00006aca   4  lea (fffff1d2,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006acau);
    c->a[0] = (c->a[4] - 0xe2eu);

L_6ACE:
    /* 00006ace   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aceu);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AD2:
    /* 00006ad2   2  beq 00006b00 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ad2u);
    if (rc_cond(c, 7)) goto L_6B00;

L_6AD4:
    /* 00006ad4   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ad4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AD8:
    /* 00006ad8   4  move.w (fffff25e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ad8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6ADC:
    /* 00006adc   4  muls.w #a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006adcu);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_6AE0:
    /* 00006ae0   4  lea (fffff1fa,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ae0u);
    c->a[0] = (c->a[4] - 0xe06u);

L_6AE4:
    /* 00006ae4   2  add.l A0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ae4u);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6AE6:
    /* 00006ae6   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ae6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AE8:
    /* 00006ae8   4  jsr (ffff82a8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ae8u);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00006aecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020810u);
    return;

L_6AEC:
    /* 00006aec   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aecu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6AEE:
    /* 00006aee   4  jsr (ffff8050,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006aeeu);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x00006af2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003532u);
    return;

L_6AF2:
    /* 00006af2   6  move.w (fffff25e,A4),(fffff260,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006af2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda2u));
    rc_wr16(c, m, (c->a[4] - 0xda0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6AF8:
    /* 00006af8   4  addq.w #1,(fffff25e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006af8u);
    t3 = (c->a[4] - 0xda2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6AFC:
    /* 00006afc   4  addq.w #1,(fffff268,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006afcu);
    t3 = (c->a[4] - 0xd98u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6B00:
    /* 00006b00   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b00u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6B02:
    /* 00006b02   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b02u);
    rc_ret(c, m);
    return;

}
