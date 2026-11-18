/* fn_00012a5e - 408 byte(s), 122 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012a5e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012a5eu): goto L_12A5E;
    case RC_ADDR(0x00012a62u): goto L_12A62;
    case RC_ADDR(0x00012a64u): goto L_12A64;
    case RC_ADDR(0x00012a66u): goto L_12A66;
    case RC_ADDR(0x00012a68u): goto L_12A68;
    case RC_ADDR(0x00012a6cu): goto L_12A6C;
    case RC_ADDR(0x00012a6eu): goto L_12A6E;
    case RC_ADDR(0x00012a72u): goto L_12A72;
    case RC_ADDR(0x00012a76u): goto L_12A76;
    case RC_ADDR(0x00012a7au): goto L_12A7A;
    case RC_ADDR(0x00012a7eu): goto L_12A7E;
    case RC_ADDR(0x00012a82u): goto L_12A82;
    case RC_ADDR(0x00012a86u): goto L_12A86;
    case RC_ADDR(0x00012a8au): goto L_12A8A;
    case RC_ADDR(0x00012a8cu): goto L_12A8C;
    case RC_ADDR(0x00012a90u): goto L_12A90;
    case RC_ADDR(0x00012a92u): goto L_12A92;
    case RC_ADDR(0x00012a94u): goto L_12A94;
    case RC_ADDR(0x00012a98u): goto L_12A98;
    case RC_ADDR(0x00012a9au): goto L_12A9A;
    case RC_ADDR(0x00012a9cu): goto L_12A9C;
    case RC_ADDR(0x00012a9eu): goto L_12A9E;
    case RC_ADDR(0x00012aa0u): goto L_12AA0;
    case RC_ADDR(0x00012aa2u): goto L_12AA2;
    case RC_ADDR(0x00012aa6u): goto L_12AA6;
    case RC_ADDR(0x00012aaau): goto L_12AAA;
    case RC_ADDR(0x00012aacu): goto L_12AAC;
    case RC_ADDR(0x00012aaeu): goto L_12AAE;
    case RC_ADDR(0x00012ab0u): goto L_12AB0;
    case RC_ADDR(0x00012ab2u): goto L_12AB2;
    case RC_ADDR(0x00012ab4u): goto L_12AB4;
    case RC_ADDR(0x00012ab6u): goto L_12AB6;
    case RC_ADDR(0x00012abau): goto L_12ABA;
    case RC_ADDR(0x00012abcu): goto L_12ABC;
    case RC_ADDR(0x00012abeu): goto L_12ABE;
    case RC_ADDR(0x00012ac0u): goto L_12AC0;
    case RC_ADDR(0x00012ac6u): goto L_12AC6;
    case RC_ADDR(0x00012accu): goto L_12ACC;
    case RC_ADDR(0x00012ad0u): goto L_12AD0;
    case RC_ADDR(0x00012ad2u): goto L_12AD2;
    case RC_ADDR(0x00012ad6u): goto L_12AD6;
    case RC_ADDR(0x00012ad8u): goto L_12AD8;
    case RC_ADDR(0x00012adau): goto L_12ADA;
    case RC_ADDR(0x00012ae0u): goto L_12AE0;
    case RC_ADDR(0x00012ae4u): goto L_12AE4;
    case RC_ADDR(0x00012ae6u): goto L_12AE6;
    case RC_ADDR(0x00012aeau): goto L_12AEA;
    case RC_ADDR(0x00012aeeu): goto L_12AEE;
    case RC_ADDR(0x00012af0u): goto L_12AF0;
    case RC_ADDR(0x00012af2u): goto L_12AF2;
    case RC_ADDR(0x00012af4u): goto L_12AF4;
    case RC_ADDR(0x00012af8u): goto L_12AF8;
    case RC_ADDR(0x00012afau): goto L_12AFA;
    case RC_ADDR(0x00012afcu): goto L_12AFC;
    case RC_ADDR(0x00012b00u): goto L_12B00;
    case RC_ADDR(0x00012b02u): goto L_12B02;
    case RC_ADDR(0x00012b04u): goto L_12B04;
    case RC_ADDR(0x00012b0au): goto L_12B0A;
    case RC_ADDR(0x00012b10u): goto L_12B10;
    case RC_ADDR(0x00012b12u): goto L_12B12;
    case RC_ADDR(0x00012b14u): goto L_12B14;
    case RC_ADDR(0x00012b1cu): goto L_12B1C;
    case RC_ADDR(0x00012b24u): goto L_12B24;
    case RC_ADDR(0x00012b26u): goto L_12B26;
    case RC_ADDR(0x00012b2au): goto L_12B2A;
    case RC_ADDR(0x00012b2cu): goto L_12B2C;
    case RC_ADDR(0x00012b32u): goto L_12B32;
    case RC_ADDR(0x00012b38u): goto L_12B38;
    case RC_ADDR(0x00012b3cu): goto L_12B3C;
    case RC_ADDR(0x00012b3eu): goto L_12B3E;
    case RC_ADDR(0x00012b40u): goto L_12B40;
    case RC_ADDR(0x00012b42u): goto L_12B42;
    case RC_ADDR(0x00012b44u): goto L_12B44;
    case RC_ADDR(0x00012b48u): goto L_12B48;
    case RC_ADDR(0x00012b4au): goto L_12B4A;
    case RC_ADDR(0x00012b4eu): goto L_12B4E;
    case RC_ADDR(0x00012b50u): goto L_12B50;
    case RC_ADDR(0x00012b54u): goto L_12B54;
    case RC_ADDR(0x00012b56u): goto L_12B56;
    case RC_ADDR(0x00012b58u): goto L_12B58;
    case RC_ADDR(0x00012b5au): goto L_12B5A;
    case RC_ADDR(0x00012b5eu): goto L_12B5E;
    case RC_ADDR(0x00012b62u): goto L_12B62;
    case RC_ADDR(0x00012b64u): goto L_12B64;
    case RC_ADDR(0x00012b66u): goto L_12B66;
    case RC_ADDR(0x00012b6eu): goto L_12B6E;
    case RC_ADDR(0x00012b76u): goto L_12B76;
    case RC_ADDR(0x00012b78u): goto L_12B78;
    case RC_ADDR(0x00012b7au): goto L_12B7A;
    case RC_ADDR(0x00012b80u): goto L_12B80;
    case RC_ADDR(0x00012b84u): goto L_12B84;
    case RC_ADDR(0x00012b86u): goto L_12B86;
    case RC_ADDR(0x00012b8au): goto L_12B8A;
    case RC_ADDR(0x00012b8cu): goto L_12B8C;
    case RC_ADDR(0x00012b8eu): goto L_12B8E;
    case RC_ADDR(0x00012b92u): goto L_12B92;
    case RC_ADDR(0x00012b96u): goto L_12B96;
    case RC_ADDR(0x00012b98u): goto L_12B98;
    case RC_ADDR(0x00012b9au): goto L_12B9A;
    case RC_ADDR(0x00012b9eu): goto L_12B9E;
    case RC_ADDR(0x00012ba2u): goto L_12BA2;
    case RC_ADDR(0x00012ba4u): goto L_12BA4;
    case RC_ADDR(0x00012ba8u): goto L_12BA8;
    case RC_ADDR(0x00012baau): goto L_12BAA;
    case RC_ADDR(0x00012baeu): goto L_12BAE;
    case RC_ADDR(0x00012bb4u): goto L_12BB4;
    case RC_ADDR(0x00012bbau): goto L_12BBA;
    case RC_ADDR(0x00012bbcu): goto L_12BBC;
    case RC_ADDR(0x00012bbeu): goto L_12BBE;
    case RC_ADDR(0x00012bc4u): goto L_12BC4;
    case RC_ADDR(0x00012bc6u): goto L_12BC6;
    case RC_ADDR(0x00012bc8u): goto L_12BC8;
    case RC_ADDR(0x00012bceu): goto L_12BCE;
    case RC_ADDR(0x00012bd0u): goto L_12BD0;
    case RC_ADDR(0x00012bd2u): goto L_12BD2;
    case RC_ADDR(0x00012bd8u): goto L_12BD8;
    case RC_ADDR(0x00012bdeu): goto L_12BDE;
    case RC_ADDR(0x00012be4u): goto L_12BE4;
    case RC_ADDR(0x00012becu): goto L_12BEC;
    case RC_ADDR(0x00012beeu): goto L_12BEE;
    case RC_ADDR(0x00012bf2u): goto L_12BF2;
    case RC_ADDR(0x00012bf4u): goto L_12BF4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12A5E:
    /* 00012a5e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012a5eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12A62:
    /* 00012a62   2  clr.l D4 */
    c->pc = RC_ADDR(0x00012a62u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12A64:
    /* 00012a64   2  clr.l D5 */
    c->pc = RC_ADDR(0x00012a64u);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12A66:
    /* 00012a66   2  clr.l D6 */
    c->pc = RC_ADDR(0x00012a66u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12A68:
    /* 00012a68   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00012a68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_12A6C:
    /* 00012a6c   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00012a6cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A6E:
    /* 00012a6e   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00012a6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A72:
    /* 00012a72   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x00012a72u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_12A76:
    /* 00012a76   4  bgt 00012bf2 */
    c->pc = RC_ADDR(0x00012a76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12BF2;

L_12A7A:
    /* 00012a7a   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00012a7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12A7E:
    /* 00012a7e   4  beq 00012bf2 */
    c->pc = RC_ADDR(0x00012a7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12BF2;

L_12A82:
    /* 00012a82   4  bmi 00012bf2 */
    c->pc = RC_ADDR(0x00012a82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_12BF2;

L_12A86:
    /* 00012a86   4  cmp.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x00012a86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12A8A:
    /* 00012a8a   2  blt 00012a94 */
    c->pc = RC_ADDR(0x00012a8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12A94;

L_12A8C:
    /* 00012a8c   4  sub.w (fffffa78,A4),D0 */
    c->pc = RC_ADDR(0x00012a8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12A90:
    /* 00012a90   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x00012a90u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A92:
    /* 00012a92   2  bra 00012aa6 */
    c->pc = RC_ADDR(0x00012a92u);
    rc_step(c, m, 10);
    goto L_12AA6;

L_12A94:
    /* 00012a94   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00012a94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A98:
    /* 00012a98   2  bpl 00012aa6 */
    c->pc = RC_ADDR(0x00012a98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_12AA6;

L_12A9A:
    /* 00012a9a   2  neg.w D0 */
    c->pc = RC_ADDR(0x00012a9au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12A9C:
    /* 00012a9c   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x00012a9cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A9E:
    /* 00012a9e   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00012a9eu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_12AA0:
    /* 00012aa0   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00012aa0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AA2:
    /* 00012aa2   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x00012aa2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12AA6:
    /* 00012aa6   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x00012aa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AAA:
    /* 00012aaa   2  bpl 00012ae6 */
    c->pc = RC_ADDR(0x00012aaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_12AE6;

L_12AAC:
    /* 00012aac   2  neg.w D2 */
    c->pc = RC_ADDR(0x00012aacu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12AAE:
    /* 00012aae   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x00012aaeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AB0:
    /* 00012ab0   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00012ab0u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_12AB2:
    /* 00012ab2   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00012ab2u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_12AB4:
    /* 00012ab4   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x00012ab4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12AB6:
    /* 00012ab6   4  bge 00012bf2 */
    c->pc = RC_ADDR(0x00012ab6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_12BF2;

L_12ABA:
    /* 00012aba   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00012abau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12ABC:
    /* 00012abc   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x00012abcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_12ABE:
    /* 00012abe   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x00012abeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12AC0:
    /* 00012ac0   6  move.w D2,(00dff062).l */
    c->pc = RC_ADDR(0x00012ac0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AC6:
    /* 00012ac6   6  move.w D2,(00dff064).l */
    c->pc = RC_ADDR(0x00012ac6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ACC:
    /* 00012acc   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x00012accu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12AD0:
    /* 00012ad0   2  bne 00012ad8 */
    c->pc = RC_ADDR(0x00012ad0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12AD8;

L_12AD2:
    /* 00012ad2   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x00012ad2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12AD6:
    /* 00012ad6   2  bra 00012b24 */
    c->pc = RC_ADDR(0x00012ad6u);
    rc_step(c, m, 10);
    goto L_12B24;

L_12AD8:
    /* 00012ad8   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x00012ad8u);
    rc_step(c, m, 4);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_12ADA:
    /* 00012ada   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x00012adau);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12AE0:
    /* 00012ae0   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x00012ae0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12AE4:
    /* 00012ae4   2  bra 00012b24 */
    c->pc = RC_ADDR(0x00012ae4u);
    rc_step(c, m, 10);
    goto L_12B24;

L_12AE6:
    /* 00012ae6   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x00012ae6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_12AEA:
    /* 00012aea   4  bgt 00012bf2 */
    c->pc = RC_ADDR(0x00012aeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12BF2;

L_12AEE:
    /* 00012aee   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x00012aeeu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_12AF0:
    /* 00012af0   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x00012af0u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_12AF2:
    /* 00012af2   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x00012af2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12AF4:
    /* 00012af4   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x00012af4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_12AF8:
    /* 00012af8   2  ble 00012b14 */
    c->pc = RC_ADDR(0x00012af8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_12B14;

L_12AFA:
    /* 00012afa   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x00012afau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12AFC:
    /* 00012afc   4  sub.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x00012afcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12B00:
    /* 00012b00   2  neg.w D2 */
    c->pc = RC_ADDR(0x00012b00u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12B02:
    /* 00012b02   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x00012b02u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12B04:
    /* 00012b04   6  move.w D1,(00dff062).l */
    c->pc = RC_ADDR(0x00012b04u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B0A:
    /* 00012b0a   6  move.w D1,(00dff064).l */
    c->pc = RC_ADDR(0x00012b0au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B10:
    /* 00012b10   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x00012b10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B12:
    /* 00012b12   2  bra 00012b26 */
    c->pc = RC_ADDR(0x00012b12u);
    rc_step(c, m, 10);
    goto L_12B26;

L_12B14:
    /* 00012b14   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x00012b14u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B1C:
    /* 00012b1c   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x00012b1cu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B24:
    /* 00012b24   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00012b24u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12B26:
    /* 00012b26   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x00012b26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B2A:
    /* 00012b2a   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012b2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12B2C:
    /* 00012b2c   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012b2cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B32:
    /* 00012b32   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x00012b32u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B38:
    /* 00012b38   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00012b38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B3C:
    /* 00012b3c   2  sub.w D6,D2 */
    c->pc = RC_ADDR(0x00012b3cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12B3E:
    /* 00012b3e   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00012b3eu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_12B40:
    /* 00012b40   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00012b40u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_12B42:
    /* 00012b42   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00012b42u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_12B44:
    /* 00012b44   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x00012b44u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_12B48:
    /* 00012b48   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x00012b48u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_12B4A:
    /* 00012b4a   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00012b4au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_12B4E:
    /* 00012b4e   2  clr.l D1 */
    c->pc = RC_ADDR(0x00012b4eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12B50:
    /* 00012b50   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012b50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B54:
    /* 00012b54   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00012b54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B56:
    /* 00012b56   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00012b56u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_12B58:
    /* 00012b58   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00012b58u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_12B5A:
    /* 00012b5a   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00012b5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B5E:
    /* 00012b5e   4  mulu.w (fffffa76,A4),D1 */
    c->pc = RC_ADDR(0x00012b5eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_mulu(c, 1, t0);

L_12B62:
    /* 00012b62   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00012b62u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12B64:
    /* 00012b64   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x00012b64u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_12B66:
    /* 00012b66   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012b66u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B6E:
    /* 00012b6e   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x00012b6eu);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B76:
    /* 00012b76   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012b76u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12B78:
    /* 00012b78   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x00012b78u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12B7A:
    /* 00012b7a   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x00012b7au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12B80:
    /* 00012b80   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x00012b80u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12B84:
    /* 00012b84   2  clr.l D0 */
    c->pc = RC_ADDR(0x00012b84u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12B86:
    /* 00012b86   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00012b86u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12B8A:
    /* 00012b8a   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x00012b8au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_12B8C:
    /* 00012b8c   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00012b8cu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_12B8E:
    /* 00012b8e   4  move.l (18,A0),D6 */
    c->pc = RC_ADDR(0x00012b8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12B92:
    /* 00012b92   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x00012b92u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_12B96:
    /* 00012b96   2  move.b D6,D5 */
    c->pc = RC_ADDR(0x00012b96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12B98:
    /* 00012b98   2  lsr.l #4,D6 */
    c->pc = RC_ADDR(0x00012b98u);
    rc_step(c, m, 8);
    rc_d_set(c, 6, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 6, RC_L), RC_L));

L_12B9A:
    /* 00012b9a   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x00012b9au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_12B9E:
    /* 00012b9e   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x00012b9eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_12BA2:
    /* 00012ba2   2  blt 00012baa */
    c->pc = RC_ADDR(0x00012ba2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12BAA;

L_12BA4:
    /* 00012ba4   4  btst #0,D5 */
    c->pc = RC_ADDR(0x00012ba4u);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12BA8:
    /* 00012ba8   2  beq 00012bae */
    c->pc = RC_ADDR(0x00012ba8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12BAE;

L_12BAA:
    /* 00012baa   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x00012baau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12BAE:
    /* 00012bae   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x00012baeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BB4:
    /* 00012bb4   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x00012bb4u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BBA:
    /* 00012bba   2  move.l (A0)+,D5 */
    c->pc = RC_ADDR(0x00012bbau);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BBC:
    /* 00012bbc   2  bpl 00012bc6 */
    c->pc = RC_ADDR(0x00012bbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_12BC6;

L_12BBE:
    /* 00012bbe   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x00012bbeu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BC4:
    /* 00012bc4   2  bra 00012bce */
    c->pc = RC_ADDR(0x00012bc4u);
    rc_step(c, m, 10);
    goto L_12BCE;

L_12BC6:
    /* 00012bc6   2  add.l D4,D5 */
    c->pc = RC_ADDR(0x00012bc6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_12BC8:
    /* 00012bc8   6  move.l D5,(00dff04c).l */
    c->pc = RC_ADDR(0x00012bc8u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 5, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BCE:
    /* 00012bce   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x00012bceu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12BD0:
    /* 00012bd0   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x00012bd0u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_12BD2:
    /* 00012bd2   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x00012bd2u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BD8:
    /* 00012bd8   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00012bd8u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12BDE:
    /* 00012bde   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00012bdeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BE4:
    /* 00012be4   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012be4u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12BEC:
    /* 00012bec   2  bne 00012be4 */
    c->pc = RC_ADDR(0x00012becu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12BE4; }

L_12BEE:
    /* 00012bee   4  dbf D0,00012b92 */
    c->pc = RC_ADDR(0x00012beeu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12B92; }
    }

L_12BF2:
    /* 00012bf2   2  unlk A5 */
    c->pc = RC_ADDR(0x00012bf2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12BF4:
    /* 00012bf4   2  rts */
    c->pc = RC_ADDR(0x00012bf4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
