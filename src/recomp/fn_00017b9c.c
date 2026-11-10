/* fn_00017b9c - 336 byte(s), 90 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017b9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017b9cu): goto L_17B9C;
    case RC_ADDR(0x00017ba0u): goto L_17BA0;
    case RC_ADDR(0x00017ba4u): goto L_17BA4;
    case RC_ADDR(0x00017ba6u): goto L_17BA6;
    case RC_ADDR(0x00017ba8u): goto L_17BA8;
    case RC_ADDR(0x00017baau): goto L_17BAA;
    case RC_ADDR(0x00017baeu): goto L_17BAE;
    case RC_ADDR(0x00017bb2u): goto L_17BB2;
    case RC_ADDR(0x00017bb6u): goto L_17BB6;
    case RC_ADDR(0x00017bbau): goto L_17BBA;
    case RC_ADDR(0x00017bbeu): goto L_17BBE;
    case RC_ADDR(0x00017bc2u): goto L_17BC2;
    case RC_ADDR(0x00017bc8u): goto L_17BC8;
    case RC_ADDR(0x00017bccu): goto L_17BCC;
    case RC_ADDR(0x00017bd2u): goto L_17BD2;
    case RC_ADDR(0x00017bd6u): goto L_17BD6;
    case RC_ADDR(0x00017bdcu): goto L_17BDC;
    case RC_ADDR(0x00017be0u): goto L_17BE0;
    case RC_ADDR(0x00017be6u): goto L_17BE6;
    case RC_ADDR(0x00017beau): goto L_17BEA;
    case RC_ADDR(0x00017beeu): goto L_17BEE;
    case RC_ADDR(0x00017bf2u): goto L_17BF2;
    case RC_ADDR(0x00017bf6u): goto L_17BF6;
    case RC_ADDR(0x00017bf8u): goto L_17BF8;
    case RC_ADDR(0x00017bfau): goto L_17BFA;
    case RC_ADDR(0x00017bfeu): goto L_17BFE;
    case RC_ADDR(0x00017c02u): goto L_17C02;
    case RC_ADDR(0x00017c06u): goto L_17C06;
    case RC_ADDR(0x00017c0au): goto L_17C0A;
    case RC_ADDR(0x00017c0cu): goto L_17C0C;
    case RC_ADDR(0x00017c10u): goto L_17C10;
    case RC_ADDR(0x00017c14u): goto L_17C14;
    case RC_ADDR(0x00017c16u): goto L_17C16;
    case RC_ADDR(0x00017c1au): goto L_17C1A;
    case RC_ADDR(0x00017c1cu): goto L_17C1C;
    case RC_ADDR(0x00017c22u): goto L_17C22;
    case RC_ADDR(0x00017c24u): goto L_17C24;
    case RC_ADDR(0x00017c28u): goto L_17C28;
    case RC_ADDR(0x00017c2au): goto L_17C2A;
    case RC_ADDR(0x00017c2eu): goto L_17C2E;
    case RC_ADDR(0x00017c32u): goto L_17C32;
    case RC_ADDR(0x00017c36u): goto L_17C36;
    case RC_ADDR(0x00017c38u): goto L_17C38;
    case RC_ADDR(0x00017c3cu): goto L_17C3C;
    case RC_ADDR(0x00017c3eu): goto L_17C3E;
    case RC_ADDR(0x00017c42u): goto L_17C42;
    case RC_ADDR(0x00017c44u): goto L_17C44;
    case RC_ADDR(0x00017c48u): goto L_17C48;
    case RC_ADDR(0x00017c4cu): goto L_17C4C;
    case RC_ADDR(0x00017c4eu): goto L_17C4E;
    case RC_ADDR(0x00017c52u): goto L_17C52;
    case RC_ADDR(0x00017c56u): goto L_17C56;
    case RC_ADDR(0x00017c5au): goto L_17C5A;
    case RC_ADDR(0x00017c5cu): goto L_17C5C;
    case RC_ADDR(0x00017c5eu): goto L_17C5E;
    case RC_ADDR(0x00017c62u): goto L_17C62;
    case RC_ADDR(0x00017c66u): goto L_17C66;
    case RC_ADDR(0x00017c68u): goto L_17C68;
    case RC_ADDR(0x00017c6cu): goto L_17C6C;
    case RC_ADDR(0x00017c70u): goto L_17C70;
    case RC_ADDR(0x00017c74u): goto L_17C74;
    case RC_ADDR(0x00017c76u): goto L_17C76;
    case RC_ADDR(0x00017c78u): goto L_17C78;
    case RC_ADDR(0x00017c7eu): goto L_17C7E;
    case RC_ADDR(0x00017c84u): goto L_17C84;
    case RC_ADDR(0x00017c8au): goto L_17C8A;
    case RC_ADDR(0x00017c8eu): goto L_17C8E;
    case RC_ADDR(0x00017c90u): goto L_17C90;
    case RC_ADDR(0x00017c96u): goto L_17C96;
    case RC_ADDR(0x00017c9cu): goto L_17C9C;
    case RC_ADDR(0x00017c9eu): goto L_17C9E;
    case RC_ADDR(0x00017ca2u): goto L_17CA2;
    case RC_ADDR(0x00017ca8u): goto L_17CA8;
    case RC_ADDR(0x00017caau): goto L_17CAA;
    case RC_ADDR(0x00017cb0u): goto L_17CB0;
    case RC_ADDR(0x00017cb2u): goto L_17CB2;
    case RC_ADDR(0x00017cb6u): goto L_17CB6;
    case RC_ADDR(0x00017cbau): goto L_17CBA;
    case RC_ADDR(0x00017cbeu): goto L_17CBE;
    case RC_ADDR(0x00017cc0u): goto L_17CC0;
    case RC_ADDR(0x00017cc4u): goto L_17CC4;
    case RC_ADDR(0x00017cc8u): goto L_17CC8;
    case RC_ADDR(0x00017cceu): goto L_17CCE;
    case RC_ADDR(0x00017cd4u): goto L_17CD4;
    case RC_ADDR(0x00017cd6u): goto L_17CD6;
    case RC_ADDR(0x00017cdcu): goto L_17CDC;
    case RC_ADDR(0x00017cdeu): goto L_17CDE;
    case RC_ADDR(0x00017ce2u): goto L_17CE2;
    case RC_ADDR(0x00017ce4u): goto L_17CE4;
    case RC_ADDR(0x00017ce8u): goto L_17CE8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17B9C:
    /* 00017b9c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00017b9cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_17BA0:
    /* 00017ba0   4  tst.w (13c6,A4) */
    c->pc = RC_ADDR(0x00017ba0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13c6u));
    rc_set_nzvc(c, t0, RC_W);

L_17BA4:
    /* 00017ba4   2  beq 00017baa */
    c->pc = RC_ADDR(0x00017ba4u);
    if (rc_cond(c, 7)) goto L_17BAA;

L_17BA6:
    /* 00017ba6   2  unlk A5 */
    c->pc = RC_ADDR(0x00017ba6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17BA8:
    /* 00017ba8   2  rts */
    c->pc = RC_ADDR(0x00017ba8u);
    rc_ret(c, m);
    return;

L_17BAA:
    /* 00017baa   4  move.w (ffffb458,A4),D0 */
    c->pc = RC_ADDR(0x00017baau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BAE:
    /* 00017bae   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00017baeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17BB2:
    /* 00017bb2   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017bb2u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BB6:
    /* 00017bb6   4  move.w (ffffb45a,A4),D0 */
    c->pc = RC_ADDR(0x00017bb6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BBA:
    /* 00017bba   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00017bbau);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17BBE:
    /* 00017bbe   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00017bbeu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BC2:
    /* 00017bc2   6  cmpi.w #ffe0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017bc2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000ffe0u);

L_17BC8:
    /* 00017bc8   4  ble 00017ce8 */
    c->pc = RC_ADDR(0x00017bc8u);
    if (rc_cond(c, 15)) goto L_17CE8;

L_17BCC:
    /* 00017bcc   6  cmpi.w #140,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017bccu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_17BD2:
    /* 00017bd2   4  bge 00017ce8 */
    c->pc = RC_ADDR(0x00017bd2u);
    if (rc_cond(c, 12)) goto L_17CE8;

L_17BD6:
    /* 00017bd6   6  cmpi.w #ffe0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00017bd6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000ffe0u);

L_17BDC:
    /* 00017bdc   4  ble 00017ce8 */
    c->pc = RC_ADDR(0x00017bdcu);
    if (rc_cond(c, 15)) goto L_17CE8;

L_17BE0:
    /* 00017be0   6  cmpi.w #c8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00017be0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_17BE6:
    /* 00017be6   4  bge 00017ce8 */
    c->pc = RC_ADDR(0x00017be6u);
    if (rc_cond(c, 12)) goto L_17CE8;

L_17BEA:
    /* 00017bea   4  tst.w (13c0,A4) */
    c->pc = RC_ADDR(0x00017beau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13c0u));
    rc_set_nzvc(c, t0, RC_W);

L_17BEE:
    /* 00017bee   4  bne 00017ce4 */
    c->pc = RC_ADDR(0x00017beeu);
    if (rc_cond(c, 6)) goto L_17CE4;

L_17BF2:
    /* 00017bf2   4  move.w (13bc,A4),D0 */
    c->pc = RC_ADDR(0x00017bf2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13bcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17BF6:
    /* 00017bf6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017bf6u);
    rc_ext_l(c, 0);

L_17BF8:
    /* 00017bf8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00017bf8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_17BFA:
    /* 00017bfa   4  lea (1398,A4),A0 */
    c->pc = RC_ADDR(0x00017bfau);
    c->a[0] = (c->a[4] + 0x1398u);

L_17BFE:
    /* 00017bfe   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00017bfeu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17C02:
    /* 00017c02   4  move.w (ffffb45a,A4),D0 */
    c->pc = RC_ADDR(0x00017c02u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C06:
    /* 00017c06   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00017c06u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17C0A:
    /* 00017c0a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c0au);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C0C:
    /* 00017c0c   4  move.w (ffffb458,A4),D0 */
    c->pc = RC_ADDR(0x00017c0cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C10:
    /* 00017c10   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00017c10u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17C14:
    /* 00017c14   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00017c14u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C16:
    /* 00017c16   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00017c16u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00017c1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_17C1A:
    /* 00017c1a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017c1au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17C1C:
    /* 00017c1c   6  cmpi.w #4,(13bc,A4) */
    c->pc = RC_ADDR(0x00017c1cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13bcu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_17C22:
    /* 00017c22   2  bne 00017c8a */
    c->pc = RC_ADDR(0x00017c22u);
    if (rc_cond(c, 6)) goto L_17C8A;

L_17C24:
    /* 00017c24   4  tst.w (13c4,A4) */
    c->pc = RC_ADDR(0x00017c24u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13c4u));
    rc_set_nzvc(c, t0, RC_W);

L_17C28:
    /* 00017c28   2  beq 00017c32 */
    c->pc = RC_ADDR(0x00017c28u);
    if (rc_cond(c, 7)) goto L_17C32;

L_17C2A:
    /* 00017c2a   4  jsr (00013114) */
    c->pc = RC_ADDR(0x00017c2au);
    rc_push32(c, m, RC_ADDR(0x00017c2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013114u);
    return;

L_17C2E:
    /* 00017c2e   4  clr.w (13c4,A4) */
    c->pc = RC_ADDR(0x00017c2eu);
    rc_wr16(c, m, (c->a[4] + 0x13c4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17C32:
    /* 00017c32   4  tst.w (af6,A4) */
    c->pc = RC_ADDR(0x00017c32u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_17C36:
    /* 00017c36   2  bne 00017c8a */
    c->pc = RC_ADDR(0x00017c36u);
    if (rc_cond(c, 6)) goto L_17C8A;

L_17C38:
    /* 00017c38   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x00017c38u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_17C3C:
    /* 00017c3c   2  bne 00017c8a */
    c->pc = RC_ADDR(0x00017c3cu);
    if (rc_cond(c, 6)) goto L_17C8A;

L_17C3E:
    /* 00017c3e   4  tst.w (13c2,A4) */
    c->pc = RC_ADDR(0x00017c3eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13c2u));
    rc_set_nzvc(c, t0, RC_W);

L_17C42:
    /* 00017c42   2  beq 00017c8a */
    c->pc = RC_ADDR(0x00017c42u);
    if (rc_cond(c, 7)) goto L_17C8A;

L_17C44:
    /* 00017c44   4  move.w (fffffd8a,A4),D0 */
    c->pc = RC_ADDR(0x00017c44u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C48:
    /* 00017c48   4  cmp.w (ffffb458,A4),D0 */
    c->pc = RC_ADDR(0x00017c48u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17C4C:
    /* 00017c4c   2  ble 00017c8a */
    c->pc = RC_ADDR(0x00017c4cu);
    if (rc_cond(c, 15)) goto L_17C8A;

L_17C4E:
    /* 00017c4e   4  move.w (ffffb458,A4),D0 */
    c->pc = RC_ADDR(0x00017c4eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C52:
    /* 00017c52   4  add.w #14,D0 */
    c->pc = RC_ADDR(0x00017c52u);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17C56:
    /* 00017c56   4  move.w (fffffd8a,A4),D1 */
    c->pc = RC_ADDR(0x00017c56u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C5A:
    /* 00017c5a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00017c5au);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17C5C:
    /* 00017c5c   2  bge 00017c8a */
    c->pc = RC_ADDR(0x00017c5cu);
    if (rc_cond(c, 12)) goto L_17C8A;

L_17C5E:
    /* 00017c5e   4  move.w (fffffd8c,A4),D0 */
    c->pc = RC_ADDR(0x00017c5eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C62:
    /* 00017c62   4  cmp.w (ffffb45a,A4),D0 */
    c->pc = RC_ADDR(0x00017c62u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17C66:
    /* 00017c66   2  ble 00017c8a */
    c->pc = RC_ADDR(0x00017c66u);
    if (rc_cond(c, 15)) goto L_17C8A;

L_17C68:
    /* 00017c68   4  move.w (ffffb45a,A4),D0 */
    c->pc = RC_ADDR(0x00017c68u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4ba6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C6C:
    /* 00017c6c   4  add.w #14,D0 */
    c->pc = RC_ADDR(0x00017c6cu);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17C70:
    /* 00017c70   4  move.w (fffffd8c,A4),D1 */
    c->pc = RC_ADDR(0x00017c70u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C74:
    /* 00017c74   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00017c74u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_17C76:
    /* 00017c76   2  bge 00017c8a */
    c->pc = RC_ADDR(0x00017c76u);
    if (rc_cond(c, 12)) goto L_17C8A;

L_17C78:
    /* 00017c78   6  move.w #1,(afc,A4) */
    c->pc = RC_ADDR(0x00017c78u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xafcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C7E:
    /* 00017c7e   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x00017c7eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C84:
    /* 00017c84   6  move.w #1,(fffffec8,A4) */
    c->pc = RC_ADDR(0x00017c84u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C8A:
    /* 00017c8a   4  tst.w (13be,A4) */
    c->pc = RC_ADDR(0x00017c8au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13beu));
    rc_set_nzvc(c, t0, RC_W);

L_17C8E:
    /* 00017c8e   2  bne 00017cde */
    c->pc = RC_ADDR(0x00017c8eu);
    if (rc_cond(c, 6)) goto L_17CDE;

L_17C90:
    /* 00017c90   6  move.w #2,(13be,A4) */
    c->pc = RC_ADDR(0x00017c90u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x13beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17C96:
    /* 00017c96   6  cmpi.w #7,(13bc,A4) */
    c->pc = RC_ADDR(0x00017c96u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13bcu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_17C9C:
    /* 00017c9c   2  bge 00017cb2 */
    c->pc = RC_ADDR(0x00017c9cu);
    if (rc_cond(c, 12)) goto L_17CB2;

L_17C9E:
    /* 00017c9e   4  addq.w #1,(13bc,A4) */
    c->pc = RC_ADDR(0x00017c9eu);
    t3 = (c->a[4] + 0x13bcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CA2:
    /* 00017ca2   6  cmpi.w #4,(13bc,A4) */
    c->pc = RC_ADDR(0x00017ca2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13bcu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_17CA8:
    /* 00017ca8   2  bne 00017cb0 */
    c->pc = RC_ADDR(0x00017ca8u);
    if (rc_cond(c, 6)) goto L_17CB0;

L_17CAA:
    /* 00017caa   6  move.w (13c2,A4),(13be,A4) */
    c->pc = RC_ADDR(0x00017caau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x13c2u));
    rc_wr16(c, m, (c->a[4] + 0x13beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CB0:
    /* 00017cb0   2  bra 00017cdc */
    c->pc = RC_ADDR(0x00017cb0u);
    goto L_17CDC;

L_17CB2:
    /* 00017cb2   4  clr.w (13bc,A4) */
    c->pc = RC_ADDR(0x00017cb2u);
    rc_wr16(c, m, (c->a[4] + 0x13bcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17CB6:
    /* 00017cb6   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x00017cb6u);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CBA:
    /* 00017cba   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00017cbau);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00017cbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_17CBE:
    /* 00017cbe   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017cbeu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17CC0:
    /* 00017cc0   4  add.w (fffffd82,A4),D0 */
    c->pc = RC_ADDR(0x00017cc0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x27eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17CC4:
    /* 00017cc4   4  move.w D0,(13c0,A4) */
    c->pc = RC_ADDR(0x00017cc4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x13c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CC8:
    /* 00017cc8   6  move.w #1,(13c4,A4) */
    c->pc = RC_ADDR(0x00017cc8u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x13c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CCE:
    /* 00017cce   6  cmpi.w #8,(fffffd7e,A4) */
    c->pc = RC_ADDR(0x00017cceu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x282u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_17CD4:
    /* 00017cd4   2  ble 00017cdc */
    c->pc = RC_ADDR(0x00017cd4u);
    if (rc_cond(c, 15)) goto L_17CDC;

L_17CD6:
    /* 00017cd6   6  move.w #1,(13c6,A4) */
    c->pc = RC_ADDR(0x00017cd6u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x13c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17CDC:
    /* 00017cdc   2  bra 00017ce2 */
    c->pc = RC_ADDR(0x00017cdcu);
    goto L_17CE2;

L_17CDE:
    /* 00017cde   4  subq.w #1,(13be,A4) */
    c->pc = RC_ADDR(0x00017cdeu);
    t3 = (c->a[4] + 0x13beu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CE2:
    /* 00017ce2   2  bra 00017ce8 */
    c->pc = RC_ADDR(0x00017ce2u);
    goto L_17CE8;

L_17CE4:
    /* 00017ce4   4  subq.w #1,(13c0,A4) */
    c->pc = RC_ADDR(0x00017ce4u);
    t3 = (c->a[4] + 0x13c0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17CE8:
    /* 00017ce8   4  bra 00017ba6 */
    c->pc = RC_ADDR(0x00017ce8u);
    rc_tick();
    goto L_17BA6;

}
