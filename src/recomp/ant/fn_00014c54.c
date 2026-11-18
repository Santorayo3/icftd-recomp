/* fn_00014c54 - 92 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014c54(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014c54u): goto L_14C54;
    case RC_ADDR(0x00014c58u): goto L_14C58;
    case RC_ADDR(0x00014c5cu): goto L_14C5C;
    case RC_ADDR(0x00014c60u): goto L_14C60;
    case RC_ADDR(0x00014c62u): goto L_14C62;
    case RC_ADDR(0x00014c66u): goto L_14C66;
    case RC_ADDR(0x00014c68u): goto L_14C68;
    case RC_ADDR(0x00014c6cu): goto L_14C6C;
    case RC_ADDR(0x00014c70u): goto L_14C70;
    case RC_ADDR(0x00014c74u): goto L_14C74;
    case RC_ADDR(0x00014c78u): goto L_14C78;
    case RC_ADDR(0x00014c7cu): goto L_14C7C;
    case RC_ADDR(0x00014c80u): goto L_14C80;
    case RC_ADDR(0x00014c82u): goto L_14C82;
    case RC_ADDR(0x00014c86u): goto L_14C86;
    case RC_ADDR(0x00014c8au): goto L_14C8A;
    case RC_ADDR(0x00014c8eu): goto L_14C8E;
    case RC_ADDR(0x00014c92u): goto L_14C92;
    case RC_ADDR(0x00014c96u): goto L_14C96;
    case RC_ADDR(0x00014c9au): goto L_14C9A;
    case RC_ADDR(0x00014c9eu): goto L_14C9E;
    case RC_ADDR(0x00014ca2u): goto L_14CA2;
    case RC_ADDR(0x00014ca6u): goto L_14CA6;
    case RC_ADDR(0x00014cacu): goto L_14CAC;
    case RC_ADDR(0x00014caeu): goto L_14CAE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14C54:
    /* 00014c54   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014c54u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14C58:
    /* 00014c58   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00014c58u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C5C:
    /* 00014c5c   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00014c5cu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00014c60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_14C60:
    /* 00014c60   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014c60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14C62:
    /* 00014c62   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x00014c62u);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14C66:
    /* 00014c66   2  bge 00014c82 */
    c->pc = RC_ADDR(0x00014c66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14C82;

L_14C68:
    /* 00014c68   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014c68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C6C:
    /* 00014c6c   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014c6cu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14C70:
    /* 00014c70   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014c70u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_14C74:
    /* 00014c74   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014c74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C78:
    /* 00014c78   4  add.w #32,D1 */
    c->pc = RC_ADDR(0x00014c78u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14C7C:
    /* 00014c7c   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014c7cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C80:
    /* 00014c80   2  bra 00014c9a */
    c->pc = RC_ADDR(0x00014c80u);
    rc_step(c, m, 10);
    goto L_14C9A;

L_14C82:
    /* 00014c82   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014c82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C86:
    /* 00014c86   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014c86u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14C8A:
    /* 00014c8a   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014c8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_14C8E:
    /* 00014c8e   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014c8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C92:
    /* 00014c92   4  sub.w #32,D1 */
    c->pc = RC_ADDR(0x00014c92u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14C96:
    /* 00014c96   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014c96u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C9A:
    /* 00014c9a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014c9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C9E:
    /* 00014c9e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014c9eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14CA2:
    /* 00014ca2   4  lea (fffffb38,A4),A0 */
    c->pc = RC_ADDR(0x00014ca2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c8u);

L_14CA6:
    /* 00014ca6   6  move.b #14,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014ca6u);
    rc_step(c, m, 18);
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14CAC:
    /* 00014cac   2  unlk A5 */
    c->pc = RC_ADDR(0x00014cacu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14CAE:
    /* 00014cae   2  rts */
    c->pc = RC_ADDR(0x00014caeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
