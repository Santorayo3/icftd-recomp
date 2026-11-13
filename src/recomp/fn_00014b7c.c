/* fn_00014b7c - 558 byte(s), 164 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014b7c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014b7cu): goto L_14B7C;
    case RC_ADDR(0x00014b80u): goto L_14B80;
    case RC_ADDR(0x00014b84u): goto L_14B84;
    case RC_ADDR(0x00014b86u): goto L_14B86;
    case RC_ADDR(0x00014b8au): goto L_14B8A;
    case RC_ADDR(0x00014b8eu): goto L_14B8E;
    case RC_ADDR(0x00014b92u): goto L_14B92;
    case RC_ADDR(0x00014b94u): goto L_14B94;
    case RC_ADDR(0x00014b98u): goto L_14B98;
    case RC_ADDR(0x00014b9cu): goto L_14B9C;
    case RC_ADDR(0x00014ba0u): goto L_14BA0;
    case RC_ADDR(0x00014ba2u): goto L_14BA2;
    case RC_ADDR(0x00014ba6u): goto L_14BA6;
    case RC_ADDR(0x00014ba8u): goto L_14BA8;
    case RC_ADDR(0x00014bacu): goto L_14BAC;
    case RC_ADDR(0x00014baeu): goto L_14BAE;
    case RC_ADDR(0x00014bb4u): goto L_14BB4;
    case RC_ADDR(0x00014bb8u): goto L_14BB8;
    case RC_ADDR(0x00014bbau): goto L_14BBA;
    case RC_ADDR(0x00014bbeu): goto L_14BBE;
    case RC_ADDR(0x00014bc2u): goto L_14BC2;
    case RC_ADDR(0x00014bc6u): goto L_14BC6;
    case RC_ADDR(0x00014bc8u): goto L_14BC8;
    case RC_ADDR(0x00014bccu): goto L_14BCC;
    case RC_ADDR(0x00014bceu): goto L_14BCE;
    case RC_ADDR(0x00014bd0u): goto L_14BD0;
    case RC_ADDR(0x00014bd6u): goto L_14BD6;
    case RC_ADDR(0x00014bd8u): goto L_14BD8;
    case RC_ADDR(0x00014bdeu): goto L_14BDE;
    case RC_ADDR(0x00014be0u): goto L_14BE0;
    case RC_ADDR(0x00014be6u): goto L_14BE6;
    case RC_ADDR(0x00014be8u): goto L_14BE8;
    case RC_ADDR(0x00014becu): goto L_14BEC;
    case RC_ADDR(0x00014beeu): goto L_14BEE;
    case RC_ADDR(0x00014bf4u): goto L_14BF4;
    case RC_ADDR(0x00014bf6u): goto L_14BF6;
    case RC_ADDR(0x00014bfcu): goto L_14BFC;
    case RC_ADDR(0x00014bfeu): goto L_14BFE;
    case RC_ADDR(0x00014c04u): goto L_14C04;
    case RC_ADDR(0x00014c06u): goto L_14C06;
    case RC_ADDR(0x00014c0cu): goto L_14C0C;
    case RC_ADDR(0x00014c0eu): goto L_14C0E;
    case RC_ADDR(0x00014c26u): goto L_14C26;
    case RC_ADDR(0x00014c2cu): goto L_14C2C;
    case RC_ADDR(0x00014c2eu): goto L_14C2E;
    case RC_ADDR(0x00014c30u): goto L_14C30;
    case RC_ADDR(0x00014c34u): goto L_14C34;
    case RC_ADDR(0x00014c38u): goto L_14C38;
    case RC_ADDR(0x00014c3cu): goto L_14C3C;
    case RC_ADDR(0x00014c40u): goto L_14C40;
    case RC_ADDR(0x00014c44u): goto L_14C44;
    case RC_ADDR(0x00014c48u): goto L_14C48;
    case RC_ADDR(0x00014c4au): goto L_14C4A;
    case RC_ADDR(0x00014c4cu): goto L_14C4C;
    case RC_ADDR(0x00014c50u): goto L_14C50;
    case RC_ADDR(0x00014c52u): goto L_14C52;
    case RC_ADDR(0x00014c56u): goto L_14C56;
    case RC_ADDR(0x00014c58u): goto L_14C58;
    case RC_ADDR(0x00014c5cu): goto L_14C5C;
    case RC_ADDR(0x00014c5eu): goto L_14C5E;
    case RC_ADDR(0x00014c60u): goto L_14C60;
    case RC_ADDR(0x00014c64u): goto L_14C64;
    case RC_ADDR(0x00014c66u): goto L_14C66;
    case RC_ADDR(0x00014c6au): goto L_14C6A;
    case RC_ADDR(0x00014c6cu): goto L_14C6C;
    case RC_ADDR(0x00014c70u): goto L_14C70;
    case RC_ADDR(0x00014c72u): goto L_14C72;
    case RC_ADDR(0x00014c74u): goto L_14C74;
    case RC_ADDR(0x00014c78u): goto L_14C78;
    case RC_ADDR(0x00014c7cu): goto L_14C7C;
    case RC_ADDR(0x00014c7eu): goto L_14C7E;
    case RC_ADDR(0x00014c80u): goto L_14C80;
    case RC_ADDR(0x00014c84u): goto L_14C84;
    case RC_ADDR(0x00014c88u): goto L_14C88;
    case RC_ADDR(0x00014c8cu): goto L_14C8C;
    case RC_ADDR(0x00014c90u): goto L_14C90;
    case RC_ADDR(0x00014c94u): goto L_14C94;
    case RC_ADDR(0x00014c96u): goto L_14C96;
    case RC_ADDR(0x00014c98u): goto L_14C98;
    case RC_ADDR(0x00014c9cu): goto L_14C9C;
    case RC_ADDR(0x00014ca0u): goto L_14CA0;
    case RC_ADDR(0x00014ca2u): goto L_14CA2;
    case RC_ADDR(0x00014ca4u): goto L_14CA4;
    case RC_ADDR(0x00014ca8u): goto L_14CA8;
    case RC_ADDR(0x00014cacu): goto L_14CAC;
    case RC_ADDR(0x00014cb0u): goto L_14CB0;
    case RC_ADDR(0x00014cb4u): goto L_14CB4;
    case RC_ADDR(0x00014cb8u): goto L_14CB8;
    case RC_ADDR(0x00014cbcu): goto L_14CBC;
    case RC_ADDR(0x00014cbeu): goto L_14CBE;
    case RC_ADDR(0x00014cc0u): goto L_14CC0;
    case RC_ADDR(0x00014cc4u): goto L_14CC4;
    case RC_ADDR(0x00014cc8u): goto L_14CC8;
    case RC_ADDR(0x00014cccu): goto L_14CCC;
    case RC_ADDR(0x00014cceu): goto L_14CCE;
    case RC_ADDR(0x00014cd0u): goto L_14CD0;
    case RC_ADDR(0x00014cd4u): goto L_14CD4;
    case RC_ADDR(0x00014cd8u): goto L_14CD8;
    case RC_ADDR(0x00014cdcu): goto L_14CDC;
    case RC_ADDR(0x00014cdeu): goto L_14CDE;
    case RC_ADDR(0x00014ce2u): goto L_14CE2;
    case RC_ADDR(0x00014ce4u): goto L_14CE4;
    case RC_ADDR(0x00014ce6u): goto L_14CE6;
    case RC_ADDR(0x00014ceau): goto L_14CEA;
    case RC_ADDR(0x00014ceeu): goto L_14CEE;
    case RC_ADDR(0x00014cf2u): goto L_14CF2;
    case RC_ADDR(0x00014cf4u): goto L_14CF4;
    case RC_ADDR(0x00014cf8u): goto L_14CF8;
    case RC_ADDR(0x00014cfcu): goto L_14CFC;
    case RC_ADDR(0x00014d00u): goto L_14D00;
    case RC_ADDR(0x00014d04u): goto L_14D04;
    case RC_ADDR(0x00014d08u): goto L_14D08;
    case RC_ADDR(0x00014d0cu): goto L_14D0C;
    case RC_ADDR(0x00014d10u): goto L_14D10;
    case RC_ADDR(0x00014d14u): goto L_14D14;
    case RC_ADDR(0x00014d18u): goto L_14D18;
    case RC_ADDR(0x00014d1au): goto L_14D1A;
    case RC_ADDR(0x00014d1cu): goto L_14D1C;
    case RC_ADDR(0x00014d20u): goto L_14D20;
    case RC_ADDR(0x00014d24u): goto L_14D24;
    case RC_ADDR(0x00014d28u): goto L_14D28;
    case RC_ADDR(0x00014d2au): goto L_14D2A;
    case RC_ADDR(0x00014d2cu): goto L_14D2C;
    case RC_ADDR(0x00014d30u): goto L_14D30;
    case RC_ADDR(0x00014d34u): goto L_14D34;
    case RC_ADDR(0x00014d38u): goto L_14D38;
    case RC_ADDR(0x00014d3au): goto L_14D3A;
    case RC_ADDR(0x00014d3cu): goto L_14D3C;
    case RC_ADDR(0x00014d40u): goto L_14D40;
    case RC_ADDR(0x00014d44u): goto L_14D44;
    case RC_ADDR(0x00014d48u): goto L_14D48;
    case RC_ADDR(0x00014d4au): goto L_14D4A;
    case RC_ADDR(0x00014d4eu): goto L_14D4E;
    case RC_ADDR(0x00014d50u): goto L_14D50;
    case RC_ADDR(0x00014d52u): goto L_14D52;
    case RC_ADDR(0x00014d56u): goto L_14D56;
    case RC_ADDR(0x00014d5cu): goto L_14D5C;
    case RC_ADDR(0x00014d5eu): goto L_14D5E;
    case RC_ADDR(0x00014d62u): goto L_14D62;
    case RC_ADDR(0x00014d64u): goto L_14D64;
    case RC_ADDR(0x00014d66u): goto L_14D66;
    case RC_ADDR(0x00014d6au): goto L_14D6A;
    case RC_ADDR(0x00014d70u): goto L_14D70;
    case RC_ADDR(0x00014d72u): goto L_14D72;
    case RC_ADDR(0x00014d76u): goto L_14D76;
    case RC_ADDR(0x00014d78u): goto L_14D78;
    case RC_ADDR(0x00014d7au): goto L_14D7A;
    case RC_ADDR(0x00014d7eu): goto L_14D7E;
    case RC_ADDR(0x00014d84u): goto L_14D84;
    case RC_ADDR(0x00014d86u): goto L_14D86;
    case RC_ADDR(0x00014d8au): goto L_14D8A;
    case RC_ADDR(0x00014d8cu): goto L_14D8C;
    case RC_ADDR(0x00014d8eu): goto L_14D8E;
    case RC_ADDR(0x00014d92u): goto L_14D92;
    case RC_ADDR(0x00014d98u): goto L_14D98;
    case RC_ADDR(0x00014d9au): goto L_14D9A;
    case RC_ADDR(0x00014da0u): goto L_14DA0;
    case RC_ADDR(0x00014da4u): goto L_14DA4;
    case RC_ADDR(0x00014da8u): goto L_14DA8;
    case RC_ADDR(0x00014dacu): goto L_14DAC;
    case RC_ADDR(0x00014db0u): goto L_14DB0;
    case RC_ADDR(0x00014db6u): goto L_14DB6;
    case RC_ADDR(0x00014dbcu): goto L_14DBC;
    case RC_ADDR(0x00014dbeu): goto L_14DBE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14B7C:
    /* 00014b7c   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x00014b7cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_14B80:
    /* 00014b80   4  tst.w (1192,A4) */
    c->pc = RC_ADDR(0x00014b80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1192u));
    rc_set_nzvc(c, t0, RC_W);

L_14B84:
    /* 00014b84   2  bne 00014b8e */
    c->pc = RC_ADDR(0x00014b84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14B8E;

L_14B86:
    /* 00014b86   4  jsr (000149dc) */
    c->pc = RC_ADDR(0x00014b86u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014b8au));
    rc_depth++;
    c->pc = RC_ADDR(0x000149dcu);
    return;

L_14B8A:
    /* 00014b8a   4  bra 00014dbc */
    c->pc = RC_ADDR(0x00014b8au);
    rc_step(c, m, 10);
    goto L_14DBC;

L_14B8E:
    /* 00014b8e   4  tst.w (1194,A4) */
    c->pc = RC_ADDR(0x00014b8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1194u));
    rc_set_nzvc(c, t0, RC_W);

L_14B92:
    /* 00014b92   2  beq 00014ba2 */
    c->pc = RC_ADDR(0x00014b92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14BA2;

L_14B94:
    /* 00014b94   4  clr.w (1194,A4) */
    c->pc = RC_ADDR(0x00014b94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1194u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14B98:
    /* 00014b98   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00014b98u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B9C:
    /* 00014b9c   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00014b9cu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00014ba0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_14BA0:
    /* 00014ba0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014ba0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14BA2:
    /* 00014ba2   4  tst.w (df8,A4) */
    c->pc = RC_ADDR(0x00014ba2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf8u));
    rc_set_nzvc(c, t0, RC_W);

L_14BA6:
    /* 00014ba6   2  beq 00014bbe */
    c->pc = RC_ADDR(0x00014ba6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14BBE;

L_14BA8:
    /* 00014ba8   4  tst.w (ffffb1d8,A4) */
    c->pc = RC_ADDR(0x00014ba8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4e28u));
    rc_set_nzvc(c, t0, RC_W);

L_14BAC:
    /* 00014bac   2  bne 00014bba */
    c->pc = RC_ADDR(0x00014bacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14BBA;

L_14BAE:
    /* 00014bae   6  move.w #1,(ffffb1d8,A4) */
    c->pc = RC_ADDR(0x00014baeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4e28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BB4:
    /* 00014bb4   4  jsr (00014b24) */
    c->pc = RC_ADDR(0x00014bb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014bb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014b24u);
    return;

L_14BB8:
    /* 00014bb8   2  bra 00014bbe */
    c->pc = RC_ADDR(0x00014bb8u);
    rc_step(c, m, 10);
    goto L_14BBE;

L_14BBA:
    /* 00014bba   4  clr.w (ffffb1d8,A4) */
    c->pc = RC_ADDR(0x00014bbau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4e28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BBE:
    /* 00014bbe   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014bbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BC2:
    /* 00014bc2   4  cmp.w (1156,A4),D0 */
    c->pc = RC_ADDR(0x00014bc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1156u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14BC6:
    /* 00014bc6   2  beq 00014c38 */
    c->pc = RC_ADDR(0x00014bc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14C38;

L_14BC8:
    /* 00014bc8   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014bc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BCC:
    /* 00014bcc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014bccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14BCE:
    /* 00014bce   2  bra 00014c26 */
    c->pc = RC_ADDR(0x00014bceu);
    rc_step(c, m, 10);
    goto L_14C26;

L_14BD0:
    /* 00014bd0   6  move.w #2,(114e,A4) */
    c->pc = RC_ADDR(0x00014bd0u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BD6:
    /* 00014bd6   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014bd6u);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BD8:
    /* 00014bd8   6  move.w #3,(114e,A4) */
    c->pc = RC_ADDR(0x00014bd8u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BDE:
    /* 00014bde   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014bdeu);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BE0:
    /* 00014be0   6  move.w #1,(114e,A4) */
    c->pc = RC_ADDR(0x00014be0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BE6:
    /* 00014be6   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014be6u);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BE8:
    /* 00014be8   4  clr.w (114e,A4) */
    c->pc = RC_ADDR(0x00014be8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x114eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14BEC:
    /* 00014bec   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014becu);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BEE:
    /* 00014bee   6  move.w #6,(114e,A4) */
    c->pc = RC_ADDR(0x00014beeu);
    rc_step(c, m, 16);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BF4:
    /* 00014bf4   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014bf4u);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BF6:
    /* 00014bf6   6  move.w #4,(114e,A4) */
    c->pc = RC_ADDR(0x00014bf6u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14BFC:
    /* 00014bfc   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014bfcu);
    rc_step(c, m, 10);
    goto L_14C38;

L_14BFE:
    /* 00014bfe   6  move.w #7,(114e,A4) */
    c->pc = RC_ADDR(0x00014bfeu);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C04:
    /* 00014c04   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014c04u);
    rc_step(c, m, 10);
    goto L_14C38;

L_14C06:
    /* 00014c06   6  move.w #5,(114e,A4) */
    c->pc = RC_ADDR(0x00014c06u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x114eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C0C:
    /* 00014c0c   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014c0cu);
    rc_step(c, m, 10);
    goto L_14C38;

L_14C0E:
    /* 00014c0e   2  bra 00014c38 */
    c->pc = RC_ADDR(0x00014c0eu);
    rc_step(c, m, 10);
    goto L_14C38;

L_14C26:
    /* 00014c26   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00014c26u);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_14C2C:
    /* 00014c2c   2  bcc 00014c38 */
    c->pc = RC_ADDR(0x00014c2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_14C38;

L_14C2E:
    /* 00014c2e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014c2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14C30:
    /* 00014c30   4  move.w (00014c10),D0 */
    c->pc = RC_ADDR(0x00014c30u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00014c10u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C34:
    /* 00014c34   4  jmp (00014c36) */
    c->pc = RC_ADDR(0x00014c34u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00014c36u) + t4);
    c->pc = t3;
    return;

L_14C38:
    /* 00014c38   4  clr.w (afa,A4) */
    c->pc = RC_ADDR(0x00014c38u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xafau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14C3C:
    /* 00014c3c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014c3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14C40:
    /* 00014c40   4  bra 00014d00 */
    c->pc = RC_ADDR(0x00014c40u);
    rc_step(c, m, 10);
    goto L_14D00;

L_14C44:
    /* 00014c44   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014c44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C48:
    /* 00014c48   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c48u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C4A:
    /* 00014c4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014c4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14C4C:
    /* 00014c4c   4  lea (1158,A4),A0 */
    c->pc = RC_ADDR(0x00014c4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1158u);

L_14C50:
    /* 00014c50   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00014c50u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_14C52:
    /* 00014c52   4  move.w (1150,A4),D0 */
    c->pc = RC_ADDR(0x00014c52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1150u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C56:
    /* 00014c56   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00014c56u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14C58:
    /* 00014c58   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014c58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C5C:
    /* 00014c5c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C5E:
    /* 00014c5e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014c5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14C60:
    /* 00014c60   4  lea (115e,A4),A0 */
    c->pc = RC_ADDR(0x00014c60u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x115eu);

L_14C64:
    /* 00014c64   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00014c64u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_14C66:
    /* 00014c66   4  move.w (1152,A4),D0 */
    c->pc = RC_ADDR(0x00014c66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1152u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C6A:
    /* 00014c6a   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00014c6au);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14C6C:
    /* 00014c6c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014c6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C70:
    /* 00014c70   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c70u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C72:
    /* 00014c72   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014c72u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14C74:
    /* 00014c74   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00014c74u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_14C78:
    /* 00014c78   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00014c78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C7C:
    /* 00014c7c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014c7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_14C7E:
    /* 00014c7e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014c7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_14C80:
    /* 00014c80   4  lea (1158,A4),A1 */
    c->pc = RC_ADDR(0x00014c80u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1158u);

L_14C84:
    /* 00014c84   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00014c84u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C88:
    /* 00014c88   4  sub.w (dfa,A4),D2 */
    c->pc = RC_ADDR(0x00014c88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_14C8C:
    /* 00014c8c   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014c8cu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C90:
    /* 00014c90   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014c90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14C94:
    /* 00014c94   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014c94u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14C96:
    /* 00014c96   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014c96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14C98:
    /* 00014c98   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00014c98u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_14C9C:
    /* 00014c9c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00014c9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CA0:
    /* 00014ca0   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014ca0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_14CA2:
    /* 00014ca2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014ca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_14CA4:
    /* 00014ca4   4  lea (115e,A4),A1 */
    c->pc = RC_ADDR(0x00014ca4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x115eu);

L_14CA8:
    /* 00014ca8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00014ca8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CAC:
    /* 00014cac   4  sub.w (dfc,A4),D2 */
    c->pc = RC_ADDR(0x00014cacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_14CB0:
    /* 00014cb0   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014cb0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CB4:
    /* 00014cb4   4  move.w #17,-(A7) */
    c->pc = RC_ADDR(0x00014cb4u);
    rc_step(c, m, 12);
    t0 = 0x00000017u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CB8:
    /* 00014cb8   4  move.w (114e,A4),D0 */
    c->pc = RC_ADDR(0x00014cb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CBC:
    /* 00014cbc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014cbcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14CBE:
    /* 00014cbe   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014cbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14CC0:
    /* 00014cc0   4  lea (116e,A4),A0 */
    c->pc = RC_ADDR(0x00014cc0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x116eu);

L_14CC4:
    /* 00014cc4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014cc4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14CC8:
    /* 00014cc8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014cc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CCC:
    /* 00014ccc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014cccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14CCE:
    /* 00014cce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014cceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14CD0:
    /* 00014cd0   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00014cd0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_14CD4:
    /* 00014cd4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014cd4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CD8:
    /* 00014cd8   4  add.w #23,D1 */
    c->pc = RC_ADDR(0x00014cd8u);
    rc_step(c, m, 10);
    t0 = 0x00000023u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14CDC:
    /* 00014cdc   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014cdcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CDE:
    /* 00014cde   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014cdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CE2:
    /* 00014ce2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014ce2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14CE4:
    /* 00014ce4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014ce4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14CE6:
    /* 00014ce6   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00014ce6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_14CEA:
    /* 00014cea   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014ceau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CEE:
    /* 00014cee   4  add.w #3c,D1 */
    c->pc = RC_ADDR(0x00014ceeu);
    rc_step(c, m, 10);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14CF2:
    /* 00014cf2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00014cf2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CF4:
    /* 00014cf4   4  jsr (000113a0) */
    c->pc = RC_ADDR(0x00014cf4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014cf8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000113a0u);
    return;

L_14CF8:
    /* 00014cf8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00014cf8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_14CFC:
    /* 00014cfc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014cfcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14D00:
    /* 00014d00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D04:
    /* 00014d04   4  cmp.w (1164,A4),D0 */
    c->pc = RC_ADDR(0x00014d04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1164u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14D08:
    /* 00014d08   4  blt 00014c44 */
    c->pc = RC_ADDR(0x00014d08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14C44; }

L_14D0C:
    /* 00014d0c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00014d0cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14D10:
    /* 00014d10   4  bra 00014da4 */
    c->pc = RC_ADDR(0x00014d10u);
    rc_step(c, m, 10);
    goto L_14DA4;

L_14D14:
    /* 00014d14   4  move.w (114e,A4),D0 */
    c->pc = RC_ADDR(0x00014d14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D18:
    /* 00014d18   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d18u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D1A:
    /* 00014d1a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00014d1au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_14D1C:
    /* 00014d1c   4  lea (116e,A4),A0 */
    c->pc = RC_ADDR(0x00014d1cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x116eu);

L_14D20:
    /* 00014d20   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014d20u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14D24:
    /* 00014d24   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D28:
    /* 00014d28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D2A:
    /* 00014d2a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D2C:
    /* 00014d2c   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00014d2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_14D30:
    /* 00014d30   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014d30u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D34:
    /* 00014d34   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D38:
    /* 00014d38   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D3A:
    /* 00014d3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d3au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D3C:
    /* 00014d3c   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00014d3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_14D40:
    /* 00014d40   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00014d40u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D44:
    /* 00014d44   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00014d44u);
    rc_step(c, m, 18);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00014d48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021baeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011208u);
    return;

L_14D48:
    /* 00014d48   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00014d48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_14D4A:
    /* 00014d4a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d4au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D4E:
    /* 00014d4e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d4eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D50:
    /* 00014d50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d50u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D52:
    /* 00014d52   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00014d52u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_14D56:
    /* 00014d56   6  cmpi.w #ff9c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d56u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_14D5C:
    /* 00014d5c   2  ble 00014da0 */
    c->pc = RC_ADDR(0x00014d5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14DA0;

L_14D5E:
    /* 00014d5e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D62:
    /* 00014d62   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d62u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D64:
    /* 00014d64   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d64u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D66:
    /* 00014d66   4  lea (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00014d66u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x8u);

L_14D6A:
    /* 00014d6a   6  cmpi.w #190,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d6au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_14D70:
    /* 00014d70   2  bge 00014da0 */
    c->pc = RC_ADDR(0x00014d70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14DA0;

L_14D72:
    /* 00014d72   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D76:
    /* 00014d76   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d76u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D78:
    /* 00014d78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D7A:
    /* 00014d7a   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00014d7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_14D7E:
    /* 00014d7e   6  cmpi.w #ff9c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d7eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000ff9cu);

L_14D84:
    /* 00014d84   2  ble 00014da0 */
    c->pc = RC_ADDR(0x00014d84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14DA0;

L_14D86:
    /* 00014d86   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014d86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D8A:
    /* 00014d8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014d8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_14D8C:
    /* 00014d8c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014d8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_14D8E:
    /* 00014d8e   4  lea (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00014d8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0xeu);

L_14D92:
    /* 00014d92   6  cmpi.w #12c,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d92u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000012cu);

L_14D98:
    /* 00014d98   2  bge 00014da0 */
    c->pc = RC_ADDR(0x00014d98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14DA0;

L_14D9A:
    /* 00014d9a   6  move.w #1,(afa,A4) */
    c->pc = RC_ADDR(0x00014d9au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xafau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DA0:
    /* 00014da0   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00014da0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14DA4:
    /* 00014da4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00014da4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DA8:
    /* 00014da8   4  cmp.w (1164,A4),D0 */
    c->pc = RC_ADDR(0x00014da8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1164u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14DAC:
    /* 00014dac   4  blt 00014d14 */
    c->pc = RC_ADDR(0x00014dacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14D14; }

L_14DB0:
    /* 00014db0   6  move.w (1154,A4),(1156,A4) */
    c->pc = RC_ADDR(0x00014db0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_wr16(c, m, (c->a[4] + 0x1156u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DB6:
    /* 00014db6   6  move.w (afa,A4),(ffffb034,A4) */
    c->pc = RC_ADDR(0x00014db6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xafau));
    rc_wr16(c, m, (c->a[4] - 0x4fccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14DBC:
    /* 00014dbc   2  unlk A5 */
    c->pc = RC_ADDR(0x00014dbcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14DBE:
    /* 00014dbe   2  rts */
    c->pc = RC_ADDR(0x00014dbeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
