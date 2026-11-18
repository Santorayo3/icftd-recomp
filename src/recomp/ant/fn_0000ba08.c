/* fn_0000ba08 - 170 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ba08(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ba08u): goto L_BA08;
    case RC_ADDR(0x0000ba0cu): goto L_BA0C;
    case RC_ADDR(0x0000ba10u): goto L_BA10;
    case RC_ADDR(0x0000ba14u): goto L_BA14;
    case RC_ADDR(0x0000ba1au): goto L_BA1A;
    case RC_ADDR(0x0000ba1eu): goto L_BA1E;
    case RC_ADDR(0x0000ba20u): goto L_BA20;
    case RC_ADDR(0x0000ba26u): goto L_BA26;
    case RC_ADDR(0x0000ba2au): goto L_BA2A;
    case RC_ADDR(0x0000ba2cu): goto L_BA2C;
    case RC_ADDR(0x0000ba32u): goto L_BA32;
    case RC_ADDR(0x0000ba34u): goto L_BA34;
    case RC_ADDR(0x0000ba36u): goto L_BA36;
    case RC_ADDR(0x0000ba38u): goto L_BA38;
    case RC_ADDR(0x0000ba3cu): goto L_BA3C;
    case RC_ADDR(0x0000ba3eu): goto L_BA3E;
    case RC_ADDR(0x0000ba44u): goto L_BA44;
    case RC_ADDR(0x0000ba48u): goto L_BA48;
    case RC_ADDR(0x0000ba4au): goto L_BA4A;
    case RC_ADDR(0x0000ba50u): goto L_BA50;
    case RC_ADDR(0x0000ba56u): goto L_BA56;
    case RC_ADDR(0x0000ba5au): goto L_BA5A;
    case RC_ADDR(0x0000ba5cu): goto L_BA5C;
    case RC_ADDR(0x0000ba60u): goto L_BA60;
    case RC_ADDR(0x0000ba62u): goto L_BA62;
    case RC_ADDR(0x0000ba68u): goto L_BA68;
    case RC_ADDR(0x0000ba6eu): goto L_BA6E;
    case RC_ADDR(0x0000ba70u): goto L_BA70;
    case RC_ADDR(0x0000ba74u): goto L_BA74;
    case RC_ADDR(0x0000ba76u): goto L_BA76;
    case RC_ADDR(0x0000ba7au): goto L_BA7A;
    case RC_ADDR(0x0000ba7cu): goto L_BA7C;
    case RC_ADDR(0x0000ba7eu): goto L_BA7E;
    case RC_ADDR(0x0000ba82u): goto L_BA82;
    case RC_ADDR(0x0000ba84u): goto L_BA84;
    case RC_ADDR(0x0000ba88u): goto L_BA88;
    case RC_ADDR(0x0000ba8cu): goto L_BA8C;
    case RC_ADDR(0x0000ba8eu): goto L_BA8E;
    case RC_ADDR(0x0000ba90u): goto L_BA90;
    case RC_ADDR(0x0000ba94u): goto L_BA94;
    case RC_ADDR(0x0000ba96u): goto L_BA96;
    case RC_ADDR(0x0000ba9au): goto L_BA9A;
    case RC_ADDR(0x0000ba9eu): goto L_BA9E;
    case RC_ADDR(0x0000baa0u): goto L_BAA0;
    case RC_ADDR(0x0000baa4u): goto L_BAA4;
    case RC_ADDR(0x0000baa8u): goto L_BAA8;
    case RC_ADDR(0x0000baaau): goto L_BAAA;
    case RC_ADDR(0x0000baaeu): goto L_BAAE;
    case RC_ADDR(0x0000bab0u): goto L_BAB0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BA08:
    /* 0000ba08   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ba08u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_BA0C:
    /* 0000ba0c   4  clr.w (ffffd5c4,A4) */
    c->pc = RC_ADDR(0x0000ba0cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BA10:
    /* 0000ba10   4  clr.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x0000ba10u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BA14:
    /* 0000ba14   6  move.w (00dff00c).l,D0 */
    c->pc = RC_ADDR(0x0000ba14u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, 0x00dff00cu);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA1A:
    /* 0000ba1a   4  btst #1,D0 */
    c->pc = RC_ADDR(0x0000ba1au);
    rc_step(c, m, 10);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_BA1E:
    /* 0000ba1e   2  beq 0000ba26 */
    c->pc = RC_ADDR(0x0000ba1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA26;

L_BA20:
    /* 0000ba20   6  move.w #1,(ffffd5c4,A4) */
    c->pc = RC_ADDR(0x0000ba20u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA26:
    /* 0000ba26   4  btst #9,D0 */
    c->pc = RC_ADDR(0x0000ba26u);
    rc_step(c, m, 10);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_BA2A:
    /* 0000ba2a   2  beq 0000ba32 */
    c->pc = RC_ADDR(0x0000ba2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA32;

L_BA2C:
    /* 0000ba2c   6  move.w #ffff,(ffffd5c4,A4) */
    c->pc = RC_ADDR(0x0000ba2cu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x2a3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA32:
    /* 0000ba32   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0000ba32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA34:
    /* 0000ba34   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000ba34u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_BA36:
    /* 0000ba36   2  eor.w D1,D0 */
    c->pc = RC_ADDR(0x0000ba36u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_BA38:
    /* 0000ba38   4  btst #0,D0 */
    c->pc = RC_ADDR(0x0000ba38u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_BA3C:
    /* 0000ba3c   2  beq 0000ba44 */
    c->pc = RC_ADDR(0x0000ba3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA44;

L_BA3E:
    /* 0000ba3e   6  move.w #1,(ffffd5c6,A4) */
    c->pc = RC_ADDR(0x0000ba3eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a3au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA44:
    /* 0000ba44   4  btst #8,D0 */
    c->pc = RC_ADDR(0x0000ba44u);
    rc_step(c, m, 10);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_BA48:
    /* 0000ba48   2  beq 0000ba50 */
    c->pc = RC_ADDR(0x0000ba48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA50;

L_BA4A:
    /* 0000ba4a   6  move.w #ffff,(ffffd5c6,A4) */
    c->pc = RC_ADDR(0x0000ba4au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x2a3au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA50:
    /* 0000ba50   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x0000ba50u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfe001u);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_BA56:
    /* 0000ba56   4  btst #7,D0 */
    c->pc = RC_ADDR(0x0000ba56u);
    rc_step(c, m, 10);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_BA5A:
    /* 0000ba5a   2  bne 0000ba70 */
    c->pc = RC_ADDR(0x0000ba5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BA70;

L_BA5C:
    /* 0000ba5c   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000ba5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_BA60:
    /* 0000ba60   2  bne 0000ba74 */
    c->pc = RC_ADDR(0x0000ba60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BA74;

L_BA62:
    /* 0000ba62   6  move.w #1,(ffffd5ca,A4) */
    c->pc = RC_ADDR(0x0000ba62u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA68:
    /* 0000ba68   6  move.w #1,(ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000ba68u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA6E:
    /* 0000ba6e   2  bra 0000ba74 */
    c->pc = RC_ADDR(0x0000ba6eu);
    rc_step(c, m, 10);
    goto L_BA74;

L_BA70:
    /* 0000ba70   4  clr.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000ba70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BA74:
    /* 0000ba74   2  clr.b D1 */
    c->pc = RC_ADDR(0x0000ba74u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_BA76:
    /* 0000ba76   4  move.w (ffffd5c4,A4),D0 */
    c->pc = RC_ADDR(0x0000ba76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA7A:
    /* 0000ba7a   2  beq 0000ba88 */
    c->pc = RC_ADDR(0x0000ba7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA88;

L_BA7C:
    /* 0000ba7c   2  bmi 0000ba84 */
    c->pc = RC_ADDR(0x0000ba7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_BA84;

L_BA7E:
    /* 0000ba7e   4  bset #3,D1 */
    c->pc = RC_ADDR(0x0000ba7eu);
    rc_step(c, m, 12);
    t4 = 0x00000003u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BA82:
    /* 0000ba82   2  bra 0000ba88 */
    c->pc = RC_ADDR(0x0000ba82u);
    rc_step(c, m, 10);
    goto L_BA88;

L_BA84:
    /* 0000ba84   4  bset #2,D1 */
    c->pc = RC_ADDR(0x0000ba84u);
    rc_step(c, m, 12);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BA88:
    /* 0000ba88   4  move.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x0000ba88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA8C:
    /* 0000ba8c   2  beq 0000ba9a */
    c->pc = RC_ADDR(0x0000ba8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA9A;

L_BA8E:
    /* 0000ba8e   2  bmi 0000ba96 */
    c->pc = RC_ADDR(0x0000ba8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_BA96;

L_BA90:
    /* 0000ba90   4  bset #1,D1 */
    c->pc = RC_ADDR(0x0000ba90u);
    rc_step(c, m, 12);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BA94:
    /* 0000ba94   2  bra 0000ba9a */
    c->pc = RC_ADDR(0x0000ba94u);
    rc_step(c, m, 10);
    goto L_BA9A;

L_BA96:
    /* 0000ba96   4  bset #0,D1 */
    c->pc = RC_ADDR(0x0000ba96u);
    rc_step(c, m, 12);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BA9A:
    /* 0000ba9a   4  move.w (ffffd5c8,A4),D0 */
    c->pc = RC_ADDR(0x0000ba9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA9E:
    /* 0000ba9e   2  beq 0000baa4 */
    c->pc = RC_ADDR(0x0000ba9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BAA4;

L_BAA0:
    /* 0000baa0   4  bset #4,D1 */
    c->pc = RC_ADDR(0x0000baa0u);
    rc_step(c, m, 12);
    t4 = 0x00000004u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BAA4:
    /* 0000baa4   4  move.w (ffffd5ca,A4),D0 */
    c->pc = RC_ADDR(0x0000baa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAA8:
    /* 0000baa8   2  beq 0000baae */
    c->pc = RC_ADDR(0x0000baa8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BAAE;

L_BAAA:
    /* 0000baaa   4  bset #5,D1 */
    c->pc = RC_ADDR(0x0000baaau);
    rc_step(c, m, 12);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_BAAE:
    /* 0000baae   2  unlk A5 */
    c->pc = RC_ADDR(0x0000baaeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BAB0:
    /* 0000bab0   2  rts */
    c->pc = RC_ADDR(0x0000bab0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
