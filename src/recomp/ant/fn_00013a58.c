/* fn_00013a58 - 398 byte(s), 104 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013a58(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013a58u): goto L_13A58;
    case RC_ADDR(0x00013a5cu): goto L_13A5C;
    case RC_ADDR(0x00013a5eu): goto L_13A5E;
    case RC_ADDR(0x00013a62u): goto L_13A62;
    case RC_ADDR(0x00013a66u): goto L_13A66;
    case RC_ADDR(0x00013a6au): goto L_13A6A;
    case RC_ADDR(0x00013a6eu): goto L_13A6E;
    case RC_ADDR(0x00013a72u): goto L_13A72;
    case RC_ADDR(0x00013a76u): goto L_13A76;
    case RC_ADDR(0x00013a7au): goto L_13A7A;
    case RC_ADDR(0x00013a7eu): goto L_13A7E;
    case RC_ADDR(0x00013a84u): goto L_13A84;
    case RC_ADDR(0x00013a8au): goto L_13A8A;
    case RC_ADDR(0x00013a8cu): goto L_13A8C;
    case RC_ADDR(0x00013a90u): goto L_13A90;
    case RC_ADDR(0x00013a92u): goto L_13A92;
    case RC_ADDR(0x00013a96u): goto L_13A96;
    case RC_ADDR(0x00013a98u): goto L_13A98;
    case RC_ADDR(0x00013a9eu): goto L_13A9E;
    case RC_ADDR(0x00013aa0u): goto L_13AA0;
    case RC_ADDR(0x00013aa6u): goto L_13AA6;
    case RC_ADDR(0x00013aa8u): goto L_13AA8;
    case RC_ADDR(0x00013aaeu): goto L_13AAE;
    case RC_ADDR(0x00013ab0u): goto L_13AB0;
    case RC_ADDR(0x00013ab6u): goto L_13AB6;
    case RC_ADDR(0x00013ab8u): goto L_13AB8;
    case RC_ADDR(0x00013abeu): goto L_13ABE;
    case RC_ADDR(0x00013ac0u): goto L_13AC0;
    case RC_ADDR(0x00013ac6u): goto L_13AC6;
    case RC_ADDR(0x00013ac8u): goto L_13AC8;
    case RC_ADDR(0x00013aceu): goto L_13ACE;
    case RC_ADDR(0x00013ad0u): goto L_13AD0;
    case RC_ADDR(0x00013ad4u): goto L_13AD4;
    case RC_ADDR(0x00013aecu): goto L_13AEC;
    case RC_ADDR(0x00013af2u): goto L_13AF2;
    case RC_ADDR(0x00013af4u): goto L_13AF4;
    case RC_ADDR(0x00013af6u): goto L_13AF6;
    case RC_ADDR(0x00013afau): goto L_13AFA;
    case RC_ADDR(0x00013afeu): goto L_13AFE;
    case RC_ADDR(0x00013b02u): goto L_13B02;
    case RC_ADDR(0x00013b04u): goto L_13B04;
    case RC_ADDR(0x00013b08u): goto L_13B08;
    case RC_ADDR(0x00013b0au): goto L_13B0A;
    case RC_ADDR(0x00013b0eu): goto L_13B0E;
    case RC_ADDR(0x00013b12u): goto L_13B12;
    case RC_ADDR(0x00013b16u): goto L_13B16;
    case RC_ADDR(0x00013b1au): goto L_13B1A;
    case RC_ADDR(0x00013b1eu): goto L_13B1E;
    case RC_ADDR(0x00013b22u): goto L_13B22;
    case RC_ADDR(0x00013b26u): goto L_13B26;
    case RC_ADDR(0x00013b2au): goto L_13B2A;
    case RC_ADDR(0x00013b2eu): goto L_13B2E;
    case RC_ADDR(0x00013b32u): goto L_13B32;
    case RC_ADDR(0x00013b36u): goto L_13B36;
    case RC_ADDR(0x00013b3au): goto L_13B3A;
    case RC_ADDR(0x00013b3eu): goto L_13B3E;
    case RC_ADDR(0x00013b42u): goto L_13B42;
    case RC_ADDR(0x00013b46u): goto L_13B46;
    case RC_ADDR(0x00013b4cu): goto L_13B4C;
    case RC_ADDR(0x00013b4eu): goto L_13B4E;
    case RC_ADDR(0x00013b54u): goto L_13B54;
    case RC_ADDR(0x00013b5au): goto L_13B5A;
    case RC_ADDR(0x00013b5cu): goto L_13B5C;
    case RC_ADDR(0x00013b62u): goto L_13B62;
    case RC_ADDR(0x00013b68u): goto L_13B68;
    case RC_ADDR(0x00013b6au): goto L_13B6A;
    case RC_ADDR(0x00013b70u): goto L_13B70;
    case RC_ADDR(0x00013b76u): goto L_13B76;
    case RC_ADDR(0x00013b78u): goto L_13B78;
    case RC_ADDR(0x00013b7eu): goto L_13B7E;
    case RC_ADDR(0x00013b84u): goto L_13B84;
    case RC_ADDR(0x00013b8au): goto L_13B8A;
    case RC_ADDR(0x00013b8eu): goto L_13B8E;
    case RC_ADDR(0x00013b92u): goto L_13B92;
    case RC_ADDR(0x00013b94u): goto L_13B94;
    case RC_ADDR(0x00013b96u): goto L_13B96;
    case RC_ADDR(0x00013b9au): goto L_13B9A;
    case RC_ADDR(0x00013b9cu): goto L_13B9C;
    case RC_ADDR(0x00013ba0u): goto L_13BA0;
    case RC_ADDR(0x00013ba4u): goto L_13BA4;
    case RC_ADDR(0x00013ba6u): goto L_13BA6;
    case RC_ADDR(0x00013baau): goto L_13BAA;
    case RC_ADDR(0x00013bacu): goto L_13BAC;
    case RC_ADDR(0x00013bb0u): goto L_13BB0;
    case RC_ADDR(0x00013bb2u): goto L_13BB2;
    case RC_ADDR(0x00013bb8u): goto L_13BB8;
    case RC_ADDR(0x00013bbeu): goto L_13BBE;
    case RC_ADDR(0x00013bc0u): goto L_13BC0;
    case RC_ADDR(0x00013bc4u): goto L_13BC4;
    case RC_ADDR(0x00013bc6u): goto L_13BC6;
    case RC_ADDR(0x00013bcau): goto L_13BCA;
    case RC_ADDR(0x00013bceu): goto L_13BCE;
    case RC_ADDR(0x00013bd0u): goto L_13BD0;
    case RC_ADDR(0x00013bd4u): goto L_13BD4;
    case RC_ADDR(0x00013bd8u): goto L_13BD8;
    case RC_ADDR(0x00013bdcu): goto L_13BDC;
    case RC_ADDR(0x00013be0u): goto L_13BE0;
    case RC_ADDR(0x00013be2u): goto L_13BE2;
    case RC_ADDR(0x00013be8u): goto L_13BE8;
    case RC_ADDR(0x00013beau): goto L_13BEA;
    case RC_ADDR(0x00013bf0u): goto L_13BF0;
    case RC_ADDR(0x00013bf2u): goto L_13BF2;
    case RC_ADDR(0x00013bf8u): goto L_13BF8;
    case RC_ADDR(0x00013bfau): goto L_13BFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13A58:
    /* 00013a58   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00013a58u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_13A5C:
    /* 00013a5c   2  bsr 00013a18 */
    c->pc = RC_ADDR(0x00013a5cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013a5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013a18u);
    return;

L_13A5E:
    /* 00013a5e   4  jsr (00013bfc) */
    c->pc = RC_ADDR(0x00013a5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013a62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013bfcu);
    return;

L_13A62:
    /* 00013a62   4  clr.w (704,A4) */
    c->pc = RC_ADDR(0x00013a62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x704u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13A66:
    /* 00013a66   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x00013a66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_13A6A:
    /* 00013a6a   4  beq 00013afe */
    c->pc = RC_ADDR(0x00013a6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13AFE;

L_13A6E:
    /* 00013a6e   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00013a6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A72:
    /* 00013a72   4  cmp.w (fffffa34,A4),D0 */
    c->pc = RC_ADDR(0x00013a72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ccu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13A76:
    /* 00013a76   4  beq 00013afe */
    c->pc = RC_ADDR(0x00013a76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13AFE;

L_13A7A:
    /* 00013a7a   4  clr.w (6f8,A4) */
    c->pc = RC_ADDR(0x00013a7au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6f8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13A7E:
    /* 00013a7e   6  move.w #1,(6fa,A4) */
    c->pc = RC_ADDR(0x00013a7eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6fau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A84:
    /* 00013a84   6  move.w (ffffb250,A4),(fffffa34,A4) */
    c->pc = RC_ADDR(0x00013a84u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A8A:
    /* 00013a8a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00013a8au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13A8C:
    /* 00013a8c   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x00013a8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A90:
    /* 00013a90   2  bra 00013aec */
    c->pc = RC_ADDR(0x00013a90u);
    rc_step(c, m, 10);
    goto L_13AEC;

L_13A92:
    /* 00013a92   4  clr.w (6f6,A4) */
    c->pc = RC_ADDR(0x00013a92u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6f6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13A96:
    /* 00013a96   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013a96u);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13A98:
    /* 00013a98   6  move.w #4,(6f6,A4) */
    c->pc = RC_ADDR(0x00013a98u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A9E:
    /* 00013a9e   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013a9eu);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AA0:
    /* 00013aa0   6  move.w #8,(6f6,A4) */
    c->pc = RC_ADDR(0x00013aa0u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AA6:
    /* 00013aa6   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013aa6u);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AA8:
    /* 00013aa8   6  move.w #c,(6f6,A4) */
    c->pc = RC_ADDR(0x00013aa8u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AAE:
    /* 00013aae   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013aaeu);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AB0:
    /* 00013ab0   6  move.w #10,(6f6,A4) */
    c->pc = RC_ADDR(0x00013ab0u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AB6:
    /* 00013ab6   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013ab6u);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AB8:
    /* 00013ab8   6  move.w #14,(6f6,A4) */
    c->pc = RC_ADDR(0x00013ab8u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13ABE:
    /* 00013abe   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013abeu);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AC0:
    /* 00013ac0   6  move.w #18,(6f6,A4) */
    c->pc = RC_ADDR(0x00013ac0u);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AC6:
    /* 00013ac6   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013ac6u);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AC8:
    /* 00013ac8   6  move.w #1c,(6f6,A4) */
    c->pc = RC_ADDR(0x00013ac8u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    rc_wr16(c, m, (c->a[4] + 0x6f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13ACE:
    /* 00013ace   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013aceu);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AD0:
    /* 00013ad0   4  clr.w (6f6,A4) */
    c->pc = RC_ADDR(0x00013ad0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6f6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13AD4:
    /* 00013ad4   2  bra 00013afe */
    c->pc = RC_ADDR(0x00013ad4u);
    rc_step(c, m, 10);
    goto L_13AFE;

L_13AEC:
    /* 00013aec   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00013aecu);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_13AF2:
    /* 00013af2   2  bcc 00013ad0 */
    c->pc = RC_ADDR(0x00013af2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_13AD0; }

L_13AF4:
    /* 00013af4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013af4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13AF6:
    /* 00013af6   4  move.w (00013ad6),D0 */
    c->pc = RC_ADDR(0x00013af6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00013ad6u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13AFA:
    /* 00013afa   4  jmp (00013afc) */
    c->pc = RC_ADDR(0x00013afau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00013afcu) + t4);
    c->pc = t3;
    return;

L_13AFE:
    /* 00013afe   4  pea (ffffface,A4) */
    c->pc = RC_ADDR(0x00013afeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x532u));

L_13B02:
    /* 00013b02   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00013b02u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13B04:
    /* 00013b04   4  move.w (6f6,A4),D0 */
    c->pc = RC_ADDR(0x00013b04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B08:
    /* 00013b08   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00013b08u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_13B0A:
    /* 00013b0a   4  lea (71a,A4),A0 */
    c->pc = RC_ADDR(0x00013b0au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x71au);

L_13B0E:
    /* 00013b0e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00013b0eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13B12:
    /* 00013b12   4  move.w (6fe,A4),-(A7) */
    c->pc = RC_ADDR(0x00013b12u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B16:
    /* 00013b16   4  move.w (6fc,A4),-(A7) */
    c->pc = RC_ADDR(0x00013b16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B1A:
    /* 00013b1a   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00013b1au);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00013b1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_13B1E:
    /* 00013b1e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00013b1eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_13B22:
    /* 00013b22   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x00013b22u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13B26:
    /* 00013b26   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x00013b26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_13B2A:
    /* 00013b2a   4  beq 00013bf8 */
    c->pc = RC_ADDR(0x00013b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13BF8;

L_13B2E:
    /* 00013b2e   4  move.w (ffffb24a,A4),D2 */
    c->pc = RC_ADDR(0x00013b2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B32:
    /* 00013b32   4  move.w (ffffb24c,A4),D3 */
    c->pc = RC_ADDR(0x00013b32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B36:
    /* 00013b36   4  mulu.w (fffffa2e,A4),D2 */
    c->pc = RC_ADDR(0x00013b36u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d2u));
    rc_mulu(c, 2, t0);

L_13B3A:
    /* 00013b3a   4  mulu.w (fffffa30,A4),D3 */
    c->pc = RC_ADDR(0x00013b3au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d0u));
    rc_mulu(c, 3, t0);

L_13B3E:
    /* 00013b3e   4  add.w D2,(6fc,A4) */
    c->pc = RC_ADDR(0x00013b3eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13B42:
    /* 00013b42   4  add.w D3,(6fe,A4) */
    c->pc = RC_ADDR(0x00013b42u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13B46:
    /* 00013b46   6  cmpi.w #f0,(6fc,A4) */
    c->pc = RC_ADDR(0x00013b46u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_13B4C:
    /* 00013b4c   2  blt 00013b54 */
    c->pc = RC_ADDR(0x00013b4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_13B54;

L_13B4E:
    /* 00013b4e   6  ori.w #1,(700,A4) */
    c->pc = RC_ADDR(0x00013b4eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13B54:
    /* 00013b54   6  cmpi.w #50,(6fc,A4) */
    c->pc = RC_ADDR(0x00013b54u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_cmp(c, RC_W, t0, 0x00000050u);

L_13B5A:
    /* 00013b5a   2  bgt 00013b62 */
    c->pc = RC_ADDR(0x00013b5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13B62;

L_13B5C:
    /* 00013b5c   6  ori.w #2,(700,A4) */
    c->pc = RC_ADDR(0x00013b5cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000002u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13B62:
    /* 00013b62   6  cmpi.w #8c,(6fe,A4) */
    c->pc = RC_ADDR(0x00013b62u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x0000008cu);

L_13B68:
    /* 00013b68   2  blt 00013b70 */
    c->pc = RC_ADDR(0x00013b68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_13B70;

L_13B6A:
    /* 00013b6a   6  ori.w #4,(700,A4) */
    c->pc = RC_ADDR(0x00013b6au);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000004u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13B70:
    /* 00013b70   6  cmpi.w #3c,(6fe,A4) */
    c->pc = RC_ADDR(0x00013b70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_cmp(c, RC_W, t0, 0x0000003cu);

L_13B76:
    /* 00013b76   2  bgt 00013b7e */
    c->pc = RC_ADDR(0x00013b76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13B7E;

L_13B78:
    /* 00013b78   6  ori.w #8,(700,A4) */
    c->pc = RC_ADDR(0x00013b78u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x700u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000008u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13B7E:
    /* 00013b7e   6  move.w #2,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00013b7eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B84:
    /* 00013b84   6  move.w #2,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00013b84u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B8A:
    /* 00013b8a   4  move.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x00013b8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B8E:
    /* 00013b8e   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x00013b8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B92:
    /* 00013b92   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x00013b92u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13B94:
    /* 00013b94   2  addq.w #3,D1 */
    c->pc = RC_ADDR(0x00013b94u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13B96:
    /* 00013b96   4  bsr 000176c4 */
    c->pc = RC_ADDR(0x00013b96u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013b9au));
    rc_depth++;
    c->pc = RC_ADDR(0x000176c4u);
    return;

L_13B9A:
    /* 00013b9a   2  beq 00013bd0 */
    c->pc = RC_ADDR(0x00013b9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13BD0;

L_13B9C:
    /* 00013b9c   4  andi.b #7f,D0 */
    c->pc = RC_ADDR(0x00013b9cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 & 0x0000007fu;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_13BA0:
    /* 00013ba0   4  cmpi.b #4,D0 */
    c->pc = RC_ADDR(0x00013ba0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_13BA4:
    /* 00013ba4   2  beq 00013bc0 */
    c->pc = RC_ADDR(0x00013ba4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13BC0;

L_13BA6:
    /* 00013ba6   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x00013ba6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_13BAA:
    /* 00013baa   2  bgt 00013bd0 */
    c->pc = RC_ADDR(0x00013baau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13BD0;

L_13BAC:
    /* 00013bac   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x00013bacu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_13BB0:
    /* 00013bb0   2  beq 00013bc0 */
    c->pc = RC_ADDR(0x00013bb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13BC0;

L_13BB2:
    /* 00013bb2   6  move.w #1,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00013bb2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BB8:
    /* 00013bb8   6  move.w #1,(fffffa30,A4) */
    c->pc = RC_ADDR(0x00013bb8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BBE:
    /* 00013bbe   2  bra 00013bd4 */
    c->pc = RC_ADDR(0x00013bbeu);
    rc_step(c, m, 10);
    goto L_13BD4;

L_13BC0:
    /* 00013bc0   4  tst.w (1846,A4) */
    c->pc = RC_ADDR(0x00013bc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1846u));
    rc_set_nzvc(c, t0, RC_W);

L_13BC4:
    /* 00013bc4   2  bne 00013bb2 */
    c->pc = RC_ADDR(0x00013bc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13BB2; }

L_13BC6:
    /* 00013bc6   4  sub.w D2,(6fc,A4) */
    c->pc = RC_ADDR(0x00013bc6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 2, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13BCA:
    /* 00013bca   4  sub.w D3,(6fe,A4) */
    c->pc = RC_ADDR(0x00013bcau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 3, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13BCE:
    /* 00013bce   2  bra 00013bf8 */
    c->pc = RC_ADDR(0x00013bceu);
    rc_step(c, m, 10);
    goto L_13BF8;

L_13BD0:
    /* 00013bd0   4  clr.w (1846,A4) */
    c->pc = RC_ADDR(0x00013bd0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1846u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13BD4:
    /* 00013bd4   4  move.w (6fa,A4),D0 */
    c->pc = RC_ADDR(0x00013bd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BD8:
    /* 00013bd8   4  add.w D0,(6f6,A4) */
    c->pc = RC_ADDR(0x00013bd8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6f6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13BDC:
    /* 00013bdc   4  add.w D0,(6f8,A4) */
    c->pc = RC_ADDR(0x00013bdcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6f8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_13BE0:
    /* 00013be0   2  bne 00013bea */
    c->pc = RC_ADDR(0x00013be0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13BEA;

L_13BE2:
    /* 00013be2   6  move.w #1,(6fa,A4) */
    c->pc = RC_ADDR(0x00013be2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6fau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BE8:
    /* 00013be8   2  bra 00013bf8 */
    c->pc = RC_ADDR(0x00013be8u);
    rc_step(c, m, 10);
    goto L_13BF8;

L_13BEA:
    /* 00013bea   6  cmpi.w #3,(6f8,A4) */
    c->pc = RC_ADDR(0x00013beau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f8u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_13BF0:
    /* 00013bf0   2  bne 00013bf8 */
    c->pc = RC_ADDR(0x00013bf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_13BF8;

L_13BF2:
    /* 00013bf2   6  move.w #ffff,(6fa,A4) */
    c->pc = RC_ADDR(0x00013bf2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x6fau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BF8:
    /* 00013bf8   2  unlk A5 */
    c->pc = RC_ADDR(0x00013bf8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13BFA:
    /* 00013bfa   2  rts */
    c->pc = RC_ADDR(0x00013bfau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
