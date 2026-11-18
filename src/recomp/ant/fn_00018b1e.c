/* fn_00018b1e - 196 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018b1e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018b1eu): goto L_18B1E;
    case RC_ADDR(0x00018b22u): goto L_18B22;
    case RC_ADDR(0x00018b28u): goto L_18B28;
    case RC_ADDR(0x00018b2cu): goto L_18B2C;
    case RC_ADDR(0x00018b2eu): goto L_18B2E;
    case RC_ADDR(0x00018b32u): goto L_18B32;
    case RC_ADDR(0x00018b36u): goto L_18B36;
    case RC_ADDR(0x00018b38u): goto L_18B38;
    case RC_ADDR(0x00018b3cu): goto L_18B3C;
    case RC_ADDR(0x00018b3eu): goto L_18B3E;
    case RC_ADDR(0x00018b40u): goto L_18B40;
    case RC_ADDR(0x00018b42u): goto L_18B42;
    case RC_ADDR(0x00018b44u): goto L_18B44;
    case RC_ADDR(0x00018b48u): goto L_18B48;
    case RC_ADDR(0x00018b4cu): goto L_18B4C;
    case RC_ADDR(0x00018b50u): goto L_18B50;
    case RC_ADDR(0x00018b54u): goto L_18B54;
    case RC_ADDR(0x00018b58u): goto L_18B58;
    case RC_ADDR(0x00018b5cu): goto L_18B5C;
    case RC_ADDR(0x00018b62u): goto L_18B62;
    case RC_ADDR(0x00018b64u): goto L_18B64;
    case RC_ADDR(0x00018b68u): goto L_18B68;
    case RC_ADDR(0x00018b6au): goto L_18B6A;
    case RC_ADDR(0x00018b6eu): goto L_18B6E;
    case RC_ADDR(0x00018b72u): goto L_18B72;
    case RC_ADDR(0x00018b76u): goto L_18B76;
    case RC_ADDR(0x00018b7au): goto L_18B7A;
    case RC_ADDR(0x00018b7eu): goto L_18B7E;
    case RC_ADDR(0x00018b82u): goto L_18B82;
    case RC_ADDR(0x00018b86u): goto L_18B86;
    case RC_ADDR(0x00018b8au): goto L_18B8A;
    case RC_ADDR(0x00018b8eu): goto L_18B8E;
    case RC_ADDR(0x00018b92u): goto L_18B92;
    case RC_ADDR(0x00018b96u): goto L_18B96;
    case RC_ADDR(0x00018b9au): goto L_18B9A;
    case RC_ADDR(0x00018ba0u): goto L_18BA0;
    case RC_ADDR(0x00018ba2u): goto L_18BA2;
    case RC_ADDR(0x00018ba4u): goto L_18BA4;
    case RC_ADDR(0x00018ba8u): goto L_18BA8;
    case RC_ADDR(0x00018baau): goto L_18BAA;
    case RC_ADDR(0x00018baeu): goto L_18BAE;
    case RC_ADDR(0x00018bb2u): goto L_18BB2;
    case RC_ADDR(0x00018bb4u): goto L_18BB4;
    case RC_ADDR(0x00018bb6u): goto L_18BB6;
    case RC_ADDR(0x00018bb8u): goto L_18BB8;
    case RC_ADDR(0x00018bbau): goto L_18BBA;
    case RC_ADDR(0x00018bbeu): goto L_18BBE;
    case RC_ADDR(0x00018bc2u): goto L_18BC2;
    case RC_ADDR(0x00018bc6u): goto L_18BC6;
    case RC_ADDR(0x00018bcau): goto L_18BCA;
    case RC_ADDR(0x00018bceu): goto L_18BCE;
    case RC_ADDR(0x00018bd2u): goto L_18BD2;
    case RC_ADDR(0x00018bd6u): goto L_18BD6;
    case RC_ADDR(0x00018bd8u): goto L_18BD8;
    case RC_ADDR(0x00018bdau): goto L_18BDA;
    case RC_ADDR(0x00018bdcu): goto L_18BDC;
    case RC_ADDR(0x00018bdeu): goto L_18BDE;
    case RC_ADDR(0x00018be0u): goto L_18BE0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18B1E:
    /* 00018b1e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00018b1eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_18B22:
    /* 00018b22   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00018b22u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B28:
    /* 00018b28   4  tst.w (9c6,A4) */
    c->pc = RC_ADDR(0x00018b28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c6u));
    rc_set_nzvc(c, t0, RC_W);

L_18B2C:
    /* 00018b2c   2  beq 00018b5c */
    c->pc = RC_ADDR(0x00018b2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18B5C;

L_18B2E:
    /* 00018b2e   4  pea (00018be2) */
    c->pc = RC_ADDR(0x00018b2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018be2u));

L_18B32:
    /* 00018b32   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00018b32u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00018b36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_18B36:
    /* 00018b36   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018b36u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18B38:
    /* 00018b38   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018b38u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B3C:
    /* 00018b3c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018b3cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18B3E:
    /* 00018b3e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018b3eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18B40:
    /* 00018b40   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018b40u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18B42:
    /* 00018b42   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018b42u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18B44:
    /* 00018b44   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018b44u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B48:
    /* 00018b48   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018b48u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B4C:
    /* 00018b4c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00018b4cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00018b50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_18B50:
    /* 00018b50   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00018b50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_18B54:
    /* 00018b54   4  clr.w (9c6,A4) */
    c->pc = RC_ADDR(0x00018b54u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18B58:
    /* 00018b58   4  clr.w (ffffd580,A4) */
    c->pc = RC_ADDR(0x00018b58u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18B5C:
    /* 00018b5c   6  cmpi.w #2f,(ffffd580,A4) */
    c->pc = RC_ADDR(0x00018b5cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a80u));
    rc_cmp(c, RC_W, t0, 0x0000002fu);

L_18B62:
    /* 00018b62   2  bne 00018b9a */
    c->pc = RC_ADDR(0x00018b62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18B9A;

L_18B64:
    /* 00018b64   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00018b64u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B68:
    /* 00018b68   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018b68u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18B6A:
    /* 00018b6a   4  move.l (1d8c,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B6E:
    /* 00018b6e   4  move.w (1d90,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B72:
    /* 00018b72   4  move.l (1d88,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b72u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B76:
    /* 00018b76   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00018b76u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00018b7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_18B7A:
    /* 00018b7a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00018b7au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_18B7E:
    /* 00018b7e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00018b7eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B82:
    /* 00018b82   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00018b82u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B86:
    /* 00018b86   4  move.l (1d8c,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B8A:
    /* 00018b8a   4  move.w (1d90,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d90u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18B8E:
    /* 00018b8e   4  move.l (1d88,A4),-(A7) */
    c->pc = RC_ADDR(0x00018b8eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18B92:
    /* 00018b92   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00018b92u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00018b96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_18B96:
    /* 00018b96   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00018b96u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_18B9A:
    /* 00018b9a   6  cmpi.w #31,(ffffd580,A4) */
    c->pc = RC_ADDR(0x00018b9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a80u));
    rc_cmp(c, RC_W, t0, 0x00000031u);

L_18BA0:
    /* 00018ba0   2  bne 00018bb4 */
    c->pc = RC_ADDR(0x00018ba0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18BB4;

L_18BA2:
    /* 00018ba2   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018ba2u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18BA4:
    /* 00018ba4   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x00018ba4u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x00018ba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_18BA8:
    /* 00018ba8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018ba8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18BAA:
    /* 00018baa   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00018baau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BAE:
    /* 00018bae   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x00018baeu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x00018bb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_18BB2:
    /* 00018bb2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018bb2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18BB4:
    /* 00018bb4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00018bb4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18BB6:
    /* 00018bb6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018bb6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18BB8:
    /* 00018bb8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018bb8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18BBA:
    /* 00018bba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00018bbau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_18BBE:
    /* 00018bbe   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00018bbeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18BC2:
    /* 00018bc2   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00018bc2u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00018bc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_18BC6:
    /* 00018bc6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00018bc6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_18BCA:
    /* 00018bca   4  move.w (ffffd580,A4),D0 */
    c->pc = RC_ADDR(0x00018bcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a80u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18BCE:
    /* 00018bce   4  addq.w #1,(ffffd580,A4) */
    c->pc = RC_ADDR(0x00018bceu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2a80u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18BD2:
    /* 00018bd2   4  cmp.w (1d86,A4),D0 */
    c->pc = RC_ADDR(0x00018bd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d86u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18BD6:
    /* 00018bd6   2  ble 00018bde */
    c->pc = RC_ADDR(0x00018bd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_18BDE;

L_18BD8:
    /* 00018bd8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00018bd8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18BDA:
    /* 00018bda   2  unlk A5 */
    c->pc = RC_ADDR(0x00018bdau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18BDC:
    /* 00018bdc   2  rts */
    c->pc = RC_ADDR(0x00018bdcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_18BDE:
    /* 00018bde   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00018bdeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18BE0:
    /* 00018be0   2  bra 00018bda */
    c->pc = RC_ADDR(0x00018be0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18BDA;

}
