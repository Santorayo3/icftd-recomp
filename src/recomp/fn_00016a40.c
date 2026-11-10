/* fn_00016a40 - 76 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016a40(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016a40u): goto L_16A40;
    case RC_ADDR(0x00016a44u): goto L_16A44;
    case RC_ADDR(0x00016a46u): goto L_16A46;
    case RC_ADDR(0x00016a4au): goto L_16A4A;
    case RC_ADDR(0x00016a4eu): goto L_16A4E;
    case RC_ADDR(0x00016a52u): goto L_16A52;
    case RC_ADDR(0x00016a56u): goto L_16A56;
    case RC_ADDR(0x00016a5au): goto L_16A5A;
    case RC_ADDR(0x00016a5cu): goto L_16A5C;
    case RC_ADDR(0x00016a62u): goto L_16A62;
    case RC_ADDR(0x00016a64u): goto L_16A64;
    case RC_ADDR(0x00016a66u): goto L_16A66;
    case RC_ADDR(0x00016a68u): goto L_16A68;
    case RC_ADDR(0x00016a6au): goto L_16A6A;
    case RC_ADDR(0x00016a6eu): goto L_16A6E;
    case RC_ADDR(0x00016a70u): goto L_16A70;
    case RC_ADDR(0x00016a74u): goto L_16A74;
    case RC_ADDR(0x00016a78u): goto L_16A78;
    case RC_ADDR(0x00016a7cu): goto L_16A7C;
    case RC_ADDR(0x00016a7eu): goto L_16A7E;
    case RC_ADDR(0x00016a82u): goto L_16A82;
    case RC_ADDR(0x00016a86u): goto L_16A86;
    case RC_ADDR(0x00016a88u): goto L_16A88;
    case RC_ADDR(0x00016a8au): goto L_16A8A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16A40:
    /* 00016a40   4  link.w A5,#ffffffc2 */
    c->pc = RC_ADDR(0x00016a40u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3eu;

L_16A44:
    /* 00016a44   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00016a44u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16A46:
    /* 00016a46   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x00016a46u);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_16A4A:
    /* 00016a4a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00016a4au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A4E:
    /* 00016a4e   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00016a4eu);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00016a52u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec42u);
    return;

L_16A52:
    /* 00016a52   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016a52u);
    c->a[7] = (c->a[7] + 0xau);

L_16A56:
    /* 00016a56   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00016a56u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A5A:
    /* 00016a5a   2  beq 00016a8a */
    c->pc = RC_ADDR(0x00016a5au);
    if (rc_cond(c, 7)) goto L_16A8A;

L_16A5C:
    /* 00016a5c   6  cmpi.w #3039,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00016a5cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_16A62:
    /* 00016a62   2  bne 00016a6a */
    c->pc = RC_ADDR(0x00016a62u);
    if (rc_cond(c, 6)) goto L_16A6A;

L_16A64:
    /* 00016a64   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016a64u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16A66:
    /* 00016a66   2  unlk A5 */
    c->pc = RC_ADDR(0x00016a66u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16A68:
    /* 00016a68   2  rts */
    c->pc = RC_ADDR(0x00016a68u);
    rc_ret(c, m);
    return;

L_16A6A:
    /* 00016a6a   4  tst.l (10,A5) */
    c->pc = RC_ADDR(0x00016a6au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_L);

L_16A6E:
    /* 00016a6e   2  beq 00016a7e */
    c->pc = RC_ADDR(0x00016a6eu);
    if (rc_cond(c, 7)) goto L_16A7E;

L_16A70:
    /* 00016a70   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00016a70u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A74:
    /* 00016a74   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00016a74u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16A78:
    /* 00016a78   4  jsr (00016b78) */
    c->pc = RC_ADDR(0x00016a78u);
    rc_push32(c, m, RC_ADDR(0x00016a7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016b78u);
    return;

L_16A7C:
    /* 00016a7c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016a7cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16A7E:
    /* 00016a7e   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x00016a7eu);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_16A82:
    /* 00016a82   4  jsr (00016978) */
    c->pc = RC_ADDR(0x00016a82u);
    rc_push32(c, m, RC_ADDR(0x00016a86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016978u);
    return;

L_16A86:
    /* 00016a86   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016a86u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16A88:
    /* 00016a88   2  bra 00016a66 */
    c->pc = RC_ADDR(0x00016a88u);
    rc_tick();
    goto L_16A66;

L_16A8A:
    /* 00016a8a   2  bra 00016a66 */
    c->pc = RC_ADDR(0x00016a8au);
    rc_tick();
    goto L_16A66;

}
