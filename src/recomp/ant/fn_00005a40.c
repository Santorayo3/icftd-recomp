/* fn_00005a40 - 196 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005a40(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005a40u): goto L_5A40;
    case RC_ADDR(0x00005a44u): goto L_5A44;
    case RC_ADDR(0x00005a48u): goto L_5A48;
    case RC_ADDR(0x00005a4cu): goto L_5A4C;
    case RC_ADDR(0x00005a50u): goto L_5A50;
    case RC_ADDR(0x00005a56u): goto L_5A56;
    case RC_ADDR(0x00005a58u): goto L_5A58;
    case RC_ADDR(0x00005a5cu): goto L_5A5C;
    case RC_ADDR(0x00005a60u): goto L_5A60;
    case RC_ADDR(0x00005a64u): goto L_5A64;
    case RC_ADDR(0x00005a68u): goto L_5A68;
    case RC_ADDR(0x00005a6au): goto L_5A6A;
    case RC_ADDR(0x00005a6eu): goto L_5A6E;
    case RC_ADDR(0x00005a74u): goto L_5A74;
    case RC_ADDR(0x00005a78u): goto L_5A78;
    case RC_ADDR(0x00005a7eu): goto L_5A7E;
    case RC_ADDR(0x00005a80u): goto L_5A80;
    case RC_ADDR(0x00005a84u): goto L_5A84;
    case RC_ADDR(0x00005a88u): goto L_5A88;
    case RC_ADDR(0x00005a8eu): goto L_5A8E;
    case RC_ADDR(0x00005a90u): goto L_5A90;
    case RC_ADDR(0x00005a96u): goto L_5A96;
    case RC_ADDR(0x00005a9au): goto L_5A9A;
    case RC_ADDR(0x00005aa0u): goto L_5AA0;
    case RC_ADDR(0x00005aa6u): goto L_5AA6;
    case RC_ADDR(0x00005aaau): goto L_5AAA;
    case RC_ADDR(0x00005aaeu): goto L_5AAE;
    case RC_ADDR(0x00005ab2u): goto L_5AB2;
    case RC_ADDR(0x00005ab6u): goto L_5AB6;
    case RC_ADDR(0x00005ab8u): goto L_5AB8;
    case RC_ADDR(0x00005abeu): goto L_5ABE;
    case RC_ADDR(0x00005ac4u): goto L_5AC4;
    case RC_ADDR(0x00005ac6u): goto L_5AC6;
    case RC_ADDR(0x00005accu): goto L_5ACC;
    case RC_ADDR(0x00005aceu): goto L_5ACE;
    case RC_ADDR(0x00005ad4u): goto L_5AD4;
    case RC_ADDR(0x00005ad6u): goto L_5AD6;
    case RC_ADDR(0x00005adau): goto L_5ADA;
    case RC_ADDR(0x00005adeu): goto L_5ADE;
    case RC_ADDR(0x00005ae2u): goto L_5AE2;
    case RC_ADDR(0x00005ae6u): goto L_5AE6;
    case RC_ADDR(0x00005aeau): goto L_5AEA;
    case RC_ADDR(0x00005aecu): goto L_5AEC;
    case RC_ADDR(0x00005af0u): goto L_5AF0;
    case RC_ADDR(0x00005af4u): goto L_5AF4;
    case RC_ADDR(0x00005af8u): goto L_5AF8;
    case RC_ADDR(0x00005afau): goto L_5AFA;
    case RC_ADDR(0x00005b00u): goto L_5B00;
    case RC_ADDR(0x00005b02u): goto L_5B02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5A40:
    /* 00005a40   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005a40u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5A44:
    /* 00005a44   4  tst.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x00005a44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c16u));
    rc_set_nzvc(c, t0, RC_W);

L_5A48:
    /* 00005a48   4  bne 00005b00 */
    c->pc = RC_ADDR(0x00005a48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5B00;

L_5A4C:
    /* 00005a4c   4  addq.w #1,(ffff83e8,A4) */
    c->pc = RC_ADDR(0x00005a4cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c18u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5A50:
    /* 00005a50   6  cmpi.w #3b,(ffff83e8,A4) */
    c->pc = RC_ADDR(0x00005a50u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c18u));
    rc_cmp(c, RC_W, t0, 0x0000003bu);

L_5A56:
    /* 00005a56   2  ble 00005ab8 */
    c->pc = RC_ADDR(0x00005a56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_5AB8;

L_5A58:
    /* 00005a58   4  jsr (0000a5d8) */
    c->pc = RC_ADDR(0x00005a58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005a5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a5d8u);
    return;

L_5A5C:
    /* 00005a5c   4  jsr (0000a8d8) */
    c->pc = RC_ADDR(0x00005a5cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005a60u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a8d8u);
    return;

L_5A60:
    /* 00005a60   4  move.w #35,-(A7) */
    c->pc = RC_ADDR(0x00005a60u);
    rc_step(c, m, 12);
    t0 = 0x00000035u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5A64:
    /* 00005a64   4  jsr (00008054) */
    c->pc = RC_ADDR(0x00005a64u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005a68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_5A68:
    /* 00005a68   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00005a68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_5A6A:
    /* 00005a6a   4  jsr (000050e2) */
    c->pc = RC_ADDR(0x00005a6au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005a6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000050e2u);
    return;

L_5A6E:
    /* 00005a6e   6  subi.w #3c,(ffff83e8,A4) */
    c->pc = RC_ADDR(0x00005a6eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x7c18u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000003cu;
    rc_flags_sub(c, RC_W, t1, 0x0000003cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5A74:
    /* 00005a74   4  addq.w #1,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005a74u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5A78:
    /* 00005a78   6  cmpi.w #18,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005a78u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_5A7E:
    /* 00005a7e   2  bne 00005ab6 */
    c->pc = RC_ADDR(0x00005a7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5AB6;

L_5A80:
    /* 00005a80   4  jsr (0000527a) */
    c->pc = RC_ADDR(0x00005a80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005a84u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000527au);
    return;

L_5A84:
    /* 00005a84   4  subq.w #1,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00005a84u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c1eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5A88:
    /* 00005a88   6  cmpi.w #5,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00005a88u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_5A8E:
    /* 00005a8e   2  bge 00005a9a */
    c->pc = RC_ADDR(0x00005a8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5A9A;

L_5A90:
    /* 00005a90   6  move.w #3,(ffff9582,A4) */
    c->pc = RC_ADDR(0x00005a90u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5A96:
    /* 00005a96   4  clr.w (ffff83e2,A4) */
    c->pc = RC_ADDR(0x00005a96u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c1eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5A9A:
    /* 00005a9a   6  move.w #1,(ffff83de,A4) */
    c->pc = RC_ADDR(0x00005a9au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c22u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5AA0:
    /* 00005aa0   6  move.w #1,(ffffd5b4,A4) */
    c->pc = RC_ADDR(0x00005aa0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5AA6:
    /* 00005aa6   4  clr.w (ffff858a,A4) */
    c->pc = RC_ADDR(0x00005aa6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5AAA:
    /* 00005aaa   4  jsr (0000677a) */
    c->pc = RC_ADDR(0x00005aaau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005aaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000677au);
    return;

L_5AAE:
    /* 00005aae   4  jsr (00008226) */
    c->pc = RC_ADDR(0x00005aaeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005ab2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008226u);
    return;

L_5AB2:
    /* 00005ab2   4  clr.w (ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005ab2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5AB6:
    /* 00005ab6   2  bra 00005a50 */
    c->pc = RC_ADDR(0x00005ab6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5A50;

L_5AB8:
    /* 00005ab8   6  move.w (ffff83e6,A4),(ffffd5a2,A4) */
    c->pc = RC_ADDR(0x00005ab8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_wr16(c, m, (c->a[4] - 0x2a5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5ABE:
    /* 00005abe   6  cmpi.w #c,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005abeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_5AC4:
    /* 00005ac4   2  blt 00005aec */
    c->pc = RC_ADDR(0x00005ac4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5AEC;

L_5AC6:
    /* 00005ac6   6  cmpi.w #18,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005ac6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_5ACC:
    /* 00005acc   2  bge 00005aec */
    c->pc = RC_ADDR(0x00005accu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5AEC;

L_5ACE:
    /* 00005ace   6  cmpi.w #c,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00005aceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_5AD4:
    /* 00005ad4   2  ble 00005ae2 */
    c->pc = RC_ADDR(0x00005ad4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_5AE2;

L_5AD6:
    /* 00005ad6   4  move.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00005ad6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5ADA:
    /* 00005ada   4  sub.w #c,D0 */
    c->pc = RC_ADDR(0x00005adau);
    rc_step(c, m, 10);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5ADE:
    /* 00005ade   4  move.w D0,(ffffd5a2,A4) */
    c->pc = RC_ADDR(0x00005adeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2a5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5AE2:
    /* 00005ae2   4  lea (00005b04),A0 */
    c->pc = RC_ADDR(0x00005ae2u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00005b04u);

L_5AE6:
    /* 00005ae6   4  move.l A0,(ffffd5a4,A4) */
    c->pc = RC_ADDR(0x00005ae6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a5cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AEA:
    /* 00005aea   2  bra 00005b00 */
    c->pc = RC_ADDR(0x00005aeau);
    rc_step(c, m, 10);
    goto L_5B00;

L_5AEC:
    /* 00005aec   4  lea (00005b09),A0 */
    c->pc = RC_ADDR(0x00005aecu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00005b09u);

L_5AF0:
    /* 00005af0   4  move.l A0,(ffffd5a4,A4) */
    c->pc = RC_ADDR(0x00005af0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a5cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5AF4:
    /* 00005af4   4  tst.w (ffffd5a2,A4) */
    c->pc = RC_ADDR(0x00005af4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a5eu));
    rc_set_nzvc(c, t0, RC_W);

L_5AF8:
    /* 00005af8   2  bne 00005b00 */
    c->pc = RC_ADDR(0x00005af8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5B00;

L_5AFA:
    /* 00005afa   6  move.w #c,(ffffd5a2,A4) */
    c->pc = RC_ADDR(0x00005afau);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] - 0x2a5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5B00:
    /* 00005b00   2  unlk A5 */
    c->pc = RC_ADDR(0x00005b00u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5B02:
    /* 00005b02   2  rts */
    c->pc = RC_ADDR(0x00005b02u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
