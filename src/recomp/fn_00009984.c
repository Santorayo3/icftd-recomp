/* fn_00009984 - 328 byte(s), 91 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009984(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00009984u): goto L_9984;
    case RC_ADDR(0x00009988u): goto L_9988;
    case RC_ADDR(0x0000998cu): goto L_998C;
    case RC_ADDR(0x00009990u): goto L_9990;
    case RC_ADDR(0x00009994u): goto L_9994;
    case RC_ADDR(0x00009996u): goto L_9996;
    case RC_ADDR(0x0000999au): goto L_999A;
    case RC_ADDR(0x0000999eu): goto L_999E;
    case RC_ADDR(0x000099a2u): goto L_99A2;
    case RC_ADDR(0x000099a6u): goto L_99A6;
    case RC_ADDR(0x000099aau): goto L_99AA;
    case RC_ADDR(0x000099aeu): goto L_99AE;
    case RC_ADDR(0x000099b2u): goto L_99B2;
    case RC_ADDR(0x000099b6u): goto L_99B6;
    case RC_ADDR(0x000099bau): goto L_99BA;
    case RC_ADDR(0x000099beu): goto L_99BE;
    case RC_ADDR(0x000099c0u): goto L_99C0;
    case RC_ADDR(0x000099c2u): goto L_99C2;
    case RC_ADDR(0x000099c6u): goto L_99C6;
    case RC_ADDR(0x000099cau): goto L_99CA;
    case RC_ADDR(0x000099ceu): goto L_99CE;
    case RC_ADDR(0x000099d2u): goto L_99D2;
    case RC_ADDR(0x000099d6u): goto L_99D6;
    case RC_ADDR(0x000099dau): goto L_99DA;
    case RC_ADDR(0x000099deu): goto L_99DE;
    case RC_ADDR(0x000099e2u): goto L_99E2;
    case RC_ADDR(0x000099e6u): goto L_99E6;
    case RC_ADDR(0x000099eau): goto L_99EA;
    case RC_ADDR(0x000099eeu): goto L_99EE;
    case RC_ADDR(0x000099f2u): goto L_99F2;
    case RC_ADDR(0x000099f6u): goto L_99F6;
    case RC_ADDR(0x000099fau): goto L_99FA;
    case RC_ADDR(0x000099fcu): goto L_99FC;
    case RC_ADDR(0x000099feu): goto L_99FE;
    case RC_ADDR(0x00009a02u): goto L_9A02;
    case RC_ADDR(0x00009a06u): goto L_9A06;
    case RC_ADDR(0x00009a0au): goto L_9A0A;
    case RC_ADDR(0x00009a0eu): goto L_9A0E;
    case RC_ADDR(0x00009a10u): goto L_9A10;
    case RC_ADDR(0x00009a14u): goto L_9A14;
    case RC_ADDR(0x00009a18u): goto L_9A18;
    case RC_ADDR(0x00009a1cu): goto L_9A1C;
    case RC_ADDR(0x00009a20u): goto L_9A20;
    case RC_ADDR(0x00009a24u): goto L_9A24;
    case RC_ADDR(0x00009a28u): goto L_9A28;
    case RC_ADDR(0x00009a2cu): goto L_9A2C;
    case RC_ADDR(0x00009a30u): goto L_9A30;
    case RC_ADDR(0x00009a34u): goto L_9A34;
    case RC_ADDR(0x00009a38u): goto L_9A38;
    case RC_ADDR(0x00009a3cu): goto L_9A3C;
    case RC_ADDR(0x00009a40u): goto L_9A40;
    case RC_ADDR(0x00009a44u): goto L_9A44;
    case RC_ADDR(0x00009a46u): goto L_9A46;
    case RC_ADDR(0x00009a4au): goto L_9A4A;
    case RC_ADDR(0x00009a4eu): goto L_9A4E;
    case RC_ADDR(0x00009a52u): goto L_9A52;
    case RC_ADDR(0x00009a56u): goto L_9A56;
    case RC_ADDR(0x00009a5au): goto L_9A5A;
    case RC_ADDR(0x00009a60u): goto L_9A60;
    case RC_ADDR(0x00009a64u): goto L_9A64;
    case RC_ADDR(0x00009a66u): goto L_9A66;
    case RC_ADDR(0x00009a6au): goto L_9A6A;
    case RC_ADDR(0x00009a6cu): goto L_9A6C;
    case RC_ADDR(0x00009a70u): goto L_9A70;
    case RC_ADDR(0x00009a72u): goto L_9A72;
    case RC_ADDR(0x00009a76u): goto L_9A76;
    case RC_ADDR(0x00009a78u): goto L_9A78;
    case RC_ADDR(0x00009a7cu): goto L_9A7C;
    case RC_ADDR(0x00009a80u): goto L_9A80;
    case RC_ADDR(0x00009a84u): goto L_9A84;
    case RC_ADDR(0x00009a88u): goto L_9A88;
    case RC_ADDR(0x00009a8au): goto L_9A8A;
    case RC_ADDR(0x00009a8eu): goto L_9A8E;
    case RC_ADDR(0x00009a90u): goto L_9A90;
    case RC_ADDR(0x00009a94u): goto L_9A94;
    case RC_ADDR(0x00009a98u): goto L_9A98;
    case RC_ADDR(0x00009a9au): goto L_9A9A;
    case RC_ADDR(0x00009a9cu): goto L_9A9C;
    case RC_ADDR(0x00009aa0u): goto L_9AA0;
    case RC_ADDR(0x00009aa6u): goto L_9AA6;
    case RC_ADDR(0x00009aaau): goto L_9AAA;
    case RC_ADDR(0x00009aaeu): goto L_9AAE;
    case RC_ADDR(0x00009ab2u): goto L_9AB2;
    case RC_ADDR(0x00009ab6u): goto L_9AB6;
    case RC_ADDR(0x00009abau): goto L_9ABA;
    case RC_ADDR(0x00009abcu): goto L_9ABC;
    case RC_ADDR(0x00009abeu): goto L_9ABE;
    case RC_ADDR(0x00009ac2u): goto L_9AC2;
    case RC_ADDR(0x00009ac6u): goto L_9AC6;
    case RC_ADDR(0x00009ac8u): goto L_9AC8;
    case RC_ADDR(0x00009acau): goto L_9ACA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9984:
    /* 00009984   4  link.w A5,#ffffffe0 */
    c->pc = RC_ADDR(0x00009984u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x20u;

L_9988:
    /* 00009988   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00009988u);
    rc_step(c, m);
    rc_push32(c, m, 0x000003edu);

L_998C:
    /* 0000998c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000998cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9990:
    /* 00009990   4  jsr (ffff8290,A4) */
    c->pc = RC_ADDR(0x00009990u);
    rc_step(c, m);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x00009994u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020476u);
    return;

L_9994:
    /* 00009994   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009994u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9996:
    /* 00009996   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009996u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_999A:
    /* 0000999a   4  beq 00009ac8 */
    c->pc = RC_ADDR(0x0000999au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_9AC8;

L_999E:
    /* 0000999e   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000999eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_99A2:
    /* 000099a2   4  move.l (ffff9304,A4),-(A7) */
    c->pc = RC_ADDR(0x000099a2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cfcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99A6:
    /* 000099a6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000099a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99AA:
    /* 000099aa   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000099aau);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000099aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_99AE:
    /* 000099ae   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000099aeu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_99B2:
    /* 000099b2   4  pea (00009acc) */
    c->pc = RC_ADDR(0x000099b2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009accu));

L_99B6:
    /* 000099b6   4  move.l (ffff9304,A4),-(A7) */
    c->pc = RC_ADDR(0x000099b6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cfcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99BA:
    /* 000099ba   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x000099bau);
    rc_step(c, m);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000099beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d10u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_99BE:
    /* 000099be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000099beu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_99C0:
    /* 000099c0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000099c0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_99C2:
    /* 000099c2   4  bne 00009abe */
    c->pc = RC_ADDR(0x000099c2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_9ABE;

L_99C6:
    /* 000099c6   4  pea (00000004).l */
    c->pc = RC_ADDR(0x000099c6u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_99CA:
    /* 000099ca   4  move.l (ffff9304,A4),-(A7) */
    c->pc = RC_ADDR(0x000099cau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cfcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99CE:
    /* 000099ce   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000099ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99D2:
    /* 000099d2   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000099d2u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000099d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_99D6:
    /* 000099d6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000099d6u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_99DA:
    /* 000099da   4  pea (00000004).l */
    c->pc = RC_ADDR(0x000099dau);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_99DE:
    /* 000099de   4  move.l (ffff9304,A4),-(A7) */
    c->pc = RC_ADDR(0x000099deu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cfcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99E2:
    /* 000099e2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000099e2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99E6:
    /* 000099e6   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x000099e6u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x000099eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_99EA:
    /* 000099ea   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000099eau);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_99EE:
    /* 000099ee   4  pea (00009ad1) */
    c->pc = RC_ADDR(0x000099eeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009ad1u));

L_99F2:
    /* 000099f2   4  move.l (ffff9304,A4),-(A7) */
    c->pc = RC_ADDR(0x000099f2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cfcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_99F6:
    /* 000099f6   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x000099f6u);
    rc_step(c, m);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x000099fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d10u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_99FA:
    /* 000099fa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000099fau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_99FC:
    /* 000099fc   2  tst.w D0 */
    c->pc = RC_ADDR(0x000099fcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_99FE:
    /* 000099fe   4  bne 00009abe */
    c->pc = RC_ADDR(0x000099feu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_9ABE;

L_9A02:
    /* 00009a02   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a02u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A06:
    /* 00009a06   4  pea (00009ad6) */
    c->pc = RC_ADDR(0x00009a06u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009ad6u));

L_9A0A:
    /* 00009a0a   4  jsr (00009ae0) */
    c->pc = RC_ADDR(0x00009a0au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009a0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009ae0u);
    return;

L_9A0E:
    /* 00009a0e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009a0eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9A10:
    /* 00009a10   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00009a10u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_9A14:
    /* 00009a14   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x00009a14u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_9A18:
    /* 00009a18   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a18u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A1C:
    /* 00009a1c   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009a1cu);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009a20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9A20:
    /* 00009a20   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009a20u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9A24:
    /* 00009a24   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00009a24u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000014u);

L_9A28:
    /* 00009a28   4  pea (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00009a28u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x1cu));

L_9A2C:
    /* 00009a2c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a2cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A30:
    /* 00009a30   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009a30u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009a34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9A34:
    /* 00009a34   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009a34u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9A38:
    /* 00009a38   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a38u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A3C:
    /* 00009a3c   4  pea (00009adb) */
    c->pc = RC_ADDR(0x00009a3cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009adbu));

L_9A40:
    /* 00009a40   4  jsr (00009ae0) */
    c->pc = RC_ADDR(0x00009a40u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00009a44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009ae0u);
    return;

L_9A44:
    /* 00009a44   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009a44u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9A46:
    /* 00009a46   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00009a46u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_9A4A:
    /* 00009a4a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a4au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A4E:
    /* 00009a4e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a4eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A52:
    /* 00009a52   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009a52u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009a56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9A56:
    /* 00009a56   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009a56u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9A5A:
    /* 00009a5a   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00009a5au);
    rc_step(c, m);
    rc_push32(c, m, 0x00010002u);

L_9A60:
    /* 00009a60   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00009a60u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_9A64:
    /* 00009a64   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00009a64u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A66:
    /* 00009a66   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00009a66u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00009a6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_9A6A:
    /* 00009a6a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009a6au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9A6C:
    /* 00009a6c   4  move.l D0,(ffffffe0,A5) */
    c->pc = RC_ADDR(0x00009a6cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A70:
    /* 00009a70   2  beq 00009a8a */
    c->pc = RC_ADDR(0x00009a70u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_9A8A;

L_9A72:
    /* 00009a72   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00009a72u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_9A76:
    /* 00009a76   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00009a76u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A78:
    /* 00009a78   4  move.l (ffffffe0,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a78u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A7C:
    /* 00009a7c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A80:
    /* 00009a80   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009a80u);
    rc_step(c, m);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009a84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9A84:
    /* 00009a84   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009a84u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_9A88:
    /* 00009a88   2  bra 00009a90 */
    c->pc = RC_ADDR(0x00009a88u);
    rc_step(c, m);
    goto L_9A90;

L_9A8A:
    /* 00009a8a   4  movea.l (10,A5),A0 */
    c->pc = RC_ADDR(0x00009a8au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[0] = t0;

L_9A8E:
    /* 00009a8e   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00009a8eu);
    rc_step(c, m);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9A90:
    /* 00009a90   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009a90u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9A94:
    /* 00009a94   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00009a94u);
    rc_step(c, m);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009a98u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cecu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020490u);
    return;

L_9A98:
    /* 00009a98   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009a98u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9A9A:
    /* 00009a9a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00009a9au);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_9A9C:
    /* 00009a9c   4  move.w (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x00009a9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AA0:
    /* 00009aa0   6  move.l #369e99,D0 */
    c->pc = RC_ADDR(0x00009aa0u);
    rc_step(c, m);
    t0 = 0x00369e99u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AA6:
    /* 00009aa6   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00009aa6u);
    rc_step(c, m);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00009aaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d34u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000211fau);
    return;

L_9AAA:
    /* 00009aaa   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00009aaau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AAE:
    /* 00009aae   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00009aaeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_9AB2:
    /* 00009ab2   4  move.w (fffffffa,A5),(A0) */
    c->pc = RC_ADDR(0x00009ab2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9AB6:
    /* 00009ab6   4  move.l (ffffffe0,A5),D0 */
    c->pc = RC_ADDR(0x00009ab6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9ABA:
    /* 00009aba   2  unlk A5 */
    c->pc = RC_ADDR(0x00009abau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9ABC:
    /* 00009abc   2  rts */
    c->pc = RC_ADDR(0x00009abcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_9ABE:
    /* 00009abe   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009abeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AC2:
    /* 00009ac2   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00009ac2u);
    rc_step(c, m);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00009ac6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cecu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020490u);
    return;

L_9AC6:
    /* 00009ac6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009ac6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9AC8:
    /* 00009ac8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00009ac8u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9ACA:
    /* 00009aca   2  bra 00009aba */
    c->pc = RC_ADDR(0x00009acau);
    rc_step(c, m);
    rc_tick();
    goto L_9ABA;

}
