/* fn_00015980 - 82 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00015980(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00015980u): goto L_15980;
    case RC_ADDR(0x00015984u): goto L_15984;
    case RC_ADDR(0x00015988u): goto L_15988;
    case RC_ADDR(0x0001598au): goto L_1598A;
    case RC_ADDR(0x00015990u): goto L_15990;
    case RC_ADDR(0x00015992u): goto L_15992;
    case RC_ADDR(0x00015994u): goto L_15994;
    case RC_ADDR(0x00015996u): goto L_15996;
    case RC_ADDR(0x0001599au): goto L_1599A;
    case RC_ADDR(0x0001599cu): goto L_1599C;
    case RC_ADDR(0x000159a0u): goto L_159A0;
    case RC_ADDR(0x000159a4u): goto L_159A4;
    case RC_ADDR(0x000159a8u): goto L_159A8;
    case RC_ADDR(0x000159aau): goto L_159AA;
    case RC_ADDR(0x000159aeu): goto L_159AE;
    case RC_ADDR(0x000159b2u): goto L_159B2;
    case RC_ADDR(0x000159b4u): goto L_159B4;
    case RC_ADDR(0x000159b8u): goto L_159B8;
    case RC_ADDR(0x000159bcu): goto L_159BC;
    case RC_ADDR(0x000159c0u): goto L_159C0;
    case RC_ADDR(0x000159c2u): goto L_159C2;
    case RC_ADDR(0x000159c6u): goto L_159C6;
    case RC_ADDR(0x000159cau): goto L_159CA;
    case RC_ADDR(0x000159ceu): goto L_159CE;
    case RC_ADDR(0x000159d0u): goto L_159D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15980:
    /* 00015980   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00015980u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_15984:
    /* 00015984   4  tst.w (1b38,A4) */
    c->pc = RC_ADDR(0x00015984u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b38u));
    rc_set_nzvc(c, t0, RC_W);

L_15988:
    /* 00015988   2  beq 000159ce */
    c->pc = RC_ADDR(0x00015988u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_159CE;

L_1598A:
    /* 0001598a   6  cmpi.w #7,(1b28,A4) */
    c->pc = RC_ADDR(0x0001598au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b28u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_15990:
    /* 00015990   2  bge 000159c2 */
    c->pc = RC_ADDR(0x00015990u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_159C2;

L_15992:
    /* 00015992   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00015992u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15994:
    /* 00015994   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00015994u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15996:
    /* 00015996   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00015996u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1599A:
    /* 0001599a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001599au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1599C:
    /* 0001599c   4  move.w #6,-(A7) */
    c->pc = RC_ADDR(0x0001599cu);
    rc_step(c, m, 12);
    t0 = 0x00000006u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159A0:
    /* 000159a0   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x000159a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159A4:
    /* 000159a4   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x000159a4u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_159A8:
    /* 000159a8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000159a8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159AA:
    /* 000159aa   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x000159aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_159AE:
    /* 000159ae   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x000159aeu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_159B2:
    /* 000159b2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000159b2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_159B4:
    /* 000159b4   4  jsr (00013d4a) */
    c->pc = RC_ADDR(0x000159b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000159b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d4au);
    return;

L_159B8:
    /* 000159b8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000159b8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_159BC:
    /* 000159bc   4  addq.w #1,(1b28,A4) */
    c->pc = RC_ADDR(0x000159bcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b28u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_159C0:
    /* 000159c0   2  bra 000159ce */
    c->pc = RC_ADDR(0x000159c0u);
    rc_step(c, m, 10);
    goto L_159CE;

L_159C2:
    /* 000159c2   4  clr.w (1b38,A4) */
    c->pc = RC_ADDR(0x000159c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_159C6:
    /* 000159c6   4  clr.w (1b28,A4) */
    c->pc = RC_ADDR(0x000159c6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_159CA:
    /* 000159ca   4  subq.w #1,(1b2a,A4) */
    c->pc = RC_ADDR(0x000159cau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b2au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_159CE:
    /* 000159ce   2  unlk A5 */
    c->pc = RC_ADDR(0x000159ceu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_159D0:
    /* 000159d0   2  rts */
    c->pc = RC_ADDR(0x000159d0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
