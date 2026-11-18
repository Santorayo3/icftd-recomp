/* fn_00021f66 - 84 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021f66(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021f66u): goto L_21F66;
    case RC_ADDR(0x00021f6au): goto L_21F6A;
    case RC_ADDR(0x00021f6eu): goto L_21F6E;
    case RC_ADDR(0x00021f72u): goto L_21F72;
    case RC_ADDR(0x00021f76u): goto L_21F76;
    case RC_ADDR(0x00021f78u): goto L_21F78;
    case RC_ADDR(0x00021f7au): goto L_21F7A;
    case RC_ADDR(0x00021f7eu): goto L_21F7E;
    case RC_ADDR(0x00021f84u): goto L_21F84;
    case RC_ADDR(0x00021f86u): goto L_21F86;
    case RC_ADDR(0x00021f88u): goto L_21F88;
    case RC_ADDR(0x00021f8au): goto L_21F8A;
    case RC_ADDR(0x00021f8eu): goto L_21F8E;
    case RC_ADDR(0x00021f90u): goto L_21F90;
    case RC_ADDR(0x00021f92u): goto L_21F92;
    case RC_ADDR(0x00021f94u): goto L_21F94;
    case RC_ADDR(0x00021f96u): goto L_21F96;
    case RC_ADDR(0x00021f9au): goto L_21F9A;
    case RC_ADDR(0x00021f9cu): goto L_21F9C;
    case RC_ADDR(0x00021f9eu): goto L_21F9E;
    case RC_ADDR(0x00021fa0u): goto L_21FA0;
    case RC_ADDR(0x00021fa4u): goto L_21FA4;
    case RC_ADDR(0x00021fa6u): goto L_21FA6;
    case RC_ADDR(0x00021fa8u): goto L_21FA8;
    case RC_ADDR(0x00021faau): goto L_21FAA;
    case RC_ADDR(0x00021facu): goto L_21FAC;
    case RC_ADDR(0x00021faeu): goto L_21FAE;
    case RC_ADDR(0x00021fb0u): goto L_21FB0;
    case RC_ADDR(0x00021fb2u): goto L_21FB2;
    case RC_ADDR(0x00021fb4u): goto L_21FB4;
    case RC_ADDR(0x00021fb6u): goto L_21FB6;
    case RC_ADDR(0x00021fb8u): goto L_21FB8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21F66:
    /* 00021f66   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021f66u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21F6A:
    /* 00021f6a   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021f6au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21F6E:
    /* 00021f6e   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021f6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21F72:
    /* 00021f72   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x00021f72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_21F76:
    /* 00021f76   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x00021f76u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21F78:
    /* 00021f78   2  beq 00021fb6 */
    c->pc = RC_ADDR(0x00021f78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21FB6;

L_21F7A:
    /* 00021f7a   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x00021f7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_21F7E:
    /* 00021f7e   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00021f7eu);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21F84:
    /* 00021f84   2  beq 00021fa0 */
    c->pc = RC_ADDR(0x00021f84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21FA0;

L_21F86:
    /* 00021f86   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00021f86u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21F88:
    /* 00021f88   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021f88u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21F8A:
    /* 00021f8a   4  jsr (00021ef0) */
    c->pc = RC_ADDR(0x00021f8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021f8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ef0u);
    return;

L_21F8E:
    /* 00021f8e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021f8eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21F90:
    /* 00021f90   2  tst.w D0 */
    c->pc = RC_ADDR(0x00021f90u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21F92:
    /* 00021f92   2  beq 00021f9e */
    c->pc = RC_ADDR(0x00021f92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21F9E;

L_21F94:
    /* 00021f94   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021f94u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F96:
    /* 00021f96   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021f96u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21F9A:
    /* 00021f9a   2  unlk A5 */
    c->pc = RC_ADDR(0x00021f9au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21F9C:
    /* 00021f9c   2  rts */
    c->pc = RC_ADDR(0x00021f9cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21F9E:
    /* 00021f9e   2  bra 00021fb2 */
    c->pc = RC_ADDR(0x00021f9eu);
    rc_step(c, m, 10);
    goto L_21FB2;

L_21FA0:
    /* 00021fa0   4  move.l (2c,A3),-(A7) */
    c->pc = RC_ADDR(0x00021fa0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FA4:
    /* 00021fa4   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021fa4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FA6:
    /* 00021fa6   2  bsr 00021f66 */
    c->pc = RC_ADDR(0x00021fa6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021fa8u));
    rc_depth++;
    goto L_21F66;

L_21FA8:
    /* 00021fa8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021fa8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21FAA:
    /* 00021faa   2  tst.w D0 */
    c->pc = RC_ADDR(0x00021faau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21FAC:
    /* 00021fac   2  beq 00021fb2 */
    c->pc = RC_ADDR(0x00021facu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21FB2;

L_21FAE:
    /* 00021fae   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021faeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21FB0:
    /* 00021fb0   2  bra 00021f96 */
    c->pc = RC_ADDR(0x00021fb0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F96;

L_21FB2:
    /* 00021fb2   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x00021fb2u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_21FB4:
    /* 00021fb4   2  bra 00021f76 */
    c->pc = RC_ADDR(0x00021fb4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F76;

L_21FB6:
    /* 00021fb6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021fb6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21FB8:
    /* 00021fb8   2  bra 00021f96 */
    c->pc = RC_ADDR(0x00021fb8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F96;

}
