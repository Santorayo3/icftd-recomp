/* fn_000161aa - 214 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000161aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000161aau): goto L_161AA;
    case RC_ADDR(0x000161aeu): goto L_161AE;
    case RC_ADDR(0x000161b2u): goto L_161B2;
    case RC_ADDR(0x000161b4u): goto L_161B4;
    case RC_ADDR(0x000161b8u): goto L_161B8;
    case RC_ADDR(0x000161bau): goto L_161BA;
    case RC_ADDR(0x000161c0u): goto L_161C0;
    case RC_ADDR(0x000161c2u): goto L_161C2;
    case RC_ADDR(0x000161c6u): goto L_161C6;
    case RC_ADDR(0x000161c8u): goto L_161C8;
    case RC_ADDR(0x000161ceu): goto L_161CE;
    case RC_ADDR(0x000161d2u): goto L_161D2;
    case RC_ADDR(0x000161d4u): goto L_161D4;
    case RC_ADDR(0x000161dau): goto L_161DA;
    case RC_ADDR(0x000161dcu): goto L_161DC;
    case RC_ADDR(0x000161e2u): goto L_161E2;
    case RC_ADDR(0x000161e4u): goto L_161E4;
    case RC_ADDR(0x000161e8u): goto L_161E8;
    case RC_ADDR(0x000161ecu): goto L_161EC;
    case RC_ADDR(0x000161f0u): goto L_161F0;
    case RC_ADDR(0x000161f6u): goto L_161F6;
    case RC_ADDR(0x000161f8u): goto L_161F8;
    case RC_ADDR(0x000161feu): goto L_161FE;
    case RC_ADDR(0x00016200u): goto L_16200;
    case RC_ADDR(0x00016204u): goto L_16204;
    case RC_ADDR(0x00016208u): goto L_16208;
    case RC_ADDR(0x0001620cu): goto L_1620C;
    case RC_ADDR(0x0001620eu): goto L_1620E;
    case RC_ADDR(0x00016212u): goto L_16212;
    case RC_ADDR(0x00016216u): goto L_16216;
    case RC_ADDR(0x0001621au): goto L_1621A;
    case RC_ADDR(0x0001621eu): goto L_1621E;
    case RC_ADDR(0x00016222u): goto L_16222;
    case RC_ADDR(0x00016226u): goto L_16226;
    case RC_ADDR(0x0001622cu): goto L_1622C;
    case RC_ADDR(0x0001622eu): goto L_1622E;
    case RC_ADDR(0x00016234u): goto L_16234;
    case RC_ADDR(0x0001623au): goto L_1623A;
    case RC_ADDR(0x0001623cu): goto L_1623C;
    case RC_ADDR(0x00016242u): goto L_16242;
    case RC_ADDR(0x00016248u): goto L_16248;
    case RC_ADDR(0x0001624au): goto L_1624A;
    case RC_ADDR(0x00016250u): goto L_16250;
    case RC_ADDR(0x00016256u): goto L_16256;
    case RC_ADDR(0x00016258u): goto L_16258;
    case RC_ADDR(0x0001625eu): goto L_1625E;
    case RC_ADDR(0x00016262u): goto L_16262;
    case RC_ADDR(0x00016266u): goto L_16266;
    case RC_ADDR(0x0001626au): goto L_1626A;
    case RC_ADDR(0x0001626cu): goto L_1626C;
    case RC_ADDR(0x00016270u): goto L_16270;
    case RC_ADDR(0x00016274u): goto L_16274;
    case RC_ADDR(0x00016276u): goto L_16276;
    case RC_ADDR(0x0001627au): goto L_1627A;
    case RC_ADDR(0x0001627cu): goto L_1627C;
    case RC_ADDR(0x0001627eu): goto L_1627E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_161AA:
    /* 000161aa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000161aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_161AE:
    /* 000161ae   4  tst.w (17ec,A4) */
    c->pc = RC_ADDR(0x000161aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17ecu));
    rc_set_nzvc(c, t0, RC_W);

L_161B2:
    /* 000161b2   2  bne 000161ba */
    c->pc = RC_ADDR(0x000161b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_161BA;

L_161B4:
    /* 000161b4   4  tst.w (17ee,A4) */
    c->pc = RC_ADDR(0x000161b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17eeu));
    rc_set_nzvc(c, t0, RC_W);

L_161B8:
    /* 000161b8   2  beq 000161c8 */
    c->pc = RC_ADDR(0x000161b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_161C8;

L_161BA:
    /* 000161ba   6  cmpi.w #a,(1b66,A4) */
    c->pc = RC_ADDR(0x000161bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b66u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_161C0:
    /* 000161c0   2  bge 000161c6 */
    c->pc = RC_ADDR(0x000161c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_161C6;

L_161C2:
    /* 000161c2   4  addq.w #1,(1b66,A4) */
    c->pc = RC_ADDR(0x000161c2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b66u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_161C6:
    /* 000161c6   2  bra 000161ce */
    c->pc = RC_ADDR(0x000161c6u);
    rc_step(c, m, 10);
    goto L_161CE;

L_161C8:
    /* 000161c8   6  move.w #1,(1b66,A4) */
    c->pc = RC_ADDR(0x000161c8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b66u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_161CE:
    /* 000161ce   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x000161ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_161D2:
    /* 000161d2   2  beq 0001620e */
    c->pc = RC_ADDR(0x000161d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1620E;

L_161D4:
    /* 000161d4   6  cmpi.w #a,(1b64,A4) */
    c->pc = RC_ADDR(0x000161d4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_161DA:
    /* 000161da   2  beq 000161e4 */
    c->pc = RC_ADDR(0x000161dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_161E4;

L_161DC:
    /* 000161dc   6  cmpi.w #b5,(1b64,A4) */
    c->pc = RC_ADDR(0x000161dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_161E2:
    /* 000161e2   2  bne 000161f0 */
    c->pc = RC_ADDR(0x000161e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_161F0;

L_161E4:
    /* 000161e4   4  move.w (17ec,A4),D0 */
    c->pc = RC_ADDR(0x000161e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17ecu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_161E8:
    /* 000161e8   4  mulu.w (1b66,A4),D0 */
    c->pc = RC_ADDR(0x000161e8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b66u));
    rc_mulu(c, 0, t0);

L_161EC:
    /* 000161ec   4  add.w D0,(1b62,A4) */
    c->pc = RC_ADDR(0x000161ecu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b62u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_161F0:
    /* 000161f0   6  cmpi.w #f,(1b62,A4) */
    c->pc = RC_ADDR(0x000161f0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_161F6:
    /* 000161f6   2  beq 00016200 */
    c->pc = RC_ADDR(0x000161f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16200;

L_161F8:
    /* 000161f8   6  cmpi.w #126,(1b62,A4) */
    c->pc = RC_ADDR(0x000161f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_161FE:
    /* 000161fe   2  bne 0001620c */
    c->pc = RC_ADDR(0x000161feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1620C;

L_16200:
    /* 00016200   4  move.w (17ee,A4),D0 */
    c->pc = RC_ADDR(0x00016200u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16204:
    /* 00016204   4  mulu.w (1b66,A4),D0 */
    c->pc = RC_ADDR(0x00016204u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b66u));
    rc_mulu(c, 0, t0);

L_16208:
    /* 00016208   4  add.w D0,(1b64,A4) */
    c->pc = RC_ADDR(0x00016208u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b64u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1620C:
    /* 0001620c   2  bra 00016226 */
    c->pc = RC_ADDR(0x0001620cu);
    rc_step(c, m, 10);
    goto L_16226;

L_1620E:
    /* 0001620e   4  move.w (17ec,A4),D0 */
    c->pc = RC_ADDR(0x0001620eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17ecu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16212:
    /* 00016212   4  mulu.w (1b66,A4),D0 */
    c->pc = RC_ADDR(0x00016212u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b66u));
    rc_mulu(c, 0, t0);

L_16216:
    /* 00016216   4  add.w D0,(1b62,A4) */
    c->pc = RC_ADDR(0x00016216u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b62u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1621A:
    /* 0001621a   4  move.w (17ee,A4),D0 */
    c->pc = RC_ADDR(0x0001621au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1621E:
    /* 0001621e   4  mulu.w (1b66,A4),D0 */
    c->pc = RC_ADDR(0x0001621eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b66u));
    rc_mulu(c, 0, t0);

L_16222:
    /* 00016222   4  add.w D0,(1b64,A4) */
    c->pc = RC_ADDR(0x00016222u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b64u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16226:
    /* 00016226   6  cmpi.w #f,(1b62,A4) */
    c->pc = RC_ADDR(0x00016226u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_1622C:
    /* 0001622c   2  bge 00016234 */
    c->pc = RC_ADDR(0x0001622cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16234;

L_1622E:
    /* 0001622e   6  move.w #f,(1b62,A4) */
    c->pc = RC_ADDR(0x0001622eu);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x1b62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16234:
    /* 00016234   6  cmpi.w #126,(1b62,A4) */
    c->pc = RC_ADDR(0x00016234u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_1623A:
    /* 0001623a   2  ble 00016242 */
    c->pc = RC_ADDR(0x0001623au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16242;

L_1623C:
    /* 0001623c   6  move.w #126,(1b62,A4) */
    c->pc = RC_ADDR(0x0001623cu);
    rc_step(c, m, 16);
    t0 = 0x00000126u;
    rc_wr16(c, m, (c->a[4] + 0x1b62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16242:
    /* 00016242   6  cmpi.w #a,(1b64,A4) */
    c->pc = RC_ADDR(0x00016242u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_16248:
    /* 00016248   2  bge 00016250 */
    c->pc = RC_ADDR(0x00016248u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16250;

L_1624A:
    /* 0001624a   6  move.w #a,(1b64,A4) */
    c->pc = RC_ADDR(0x0001624au);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x1b64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16250:
    /* 00016250   6  cmpi.w #b5,(1b64,A4) */
    c->pc = RC_ADDR(0x00016250u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_16256:
    /* 00016256   2  ble 0001625e */
    c->pc = RC_ADDR(0x00016256u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1625E;

L_16258:
    /* 00016258   6  move.w #b5,(1b64,A4) */
    c->pc = RC_ADDR(0x00016258u);
    rc_step(c, m, 16);
    t0 = 0x000000b5u;
    rc_wr16(c, m, (c->a[4] + 0x1b64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1625E:
    /* 0001625e   4  move.l (1b88,A4),-(A7) */
    c->pc = RC_ADDR(0x0001625eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1b88u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16262:
    /* 00016262   4  move.w (1b64,A4),D0 */
    c->pc = RC_ADDR(0x00016262u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b64u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16266:
    /* 00016266   4  add.w (fffffa28,A4),D0 */
    c->pc = RC_ADDR(0x00016266u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1626A:
    /* 0001626a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001626au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1626C:
    /* 0001626c   4  move.w (1b62,A4),D0 */
    c->pc = RC_ADDR(0x0001626cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16270:
    /* 00016270   4  sub.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x00016270u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16274:
    /* 00016274   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016274u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16276:
    /* 00016276   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00016276u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001627au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1627A:
    /* 0001627a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001627au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1627C:
    /* 0001627c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001627cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1627E:
    /* 0001627e   2  rts */
    c->pc = RC_ADDR(0x0001627eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
