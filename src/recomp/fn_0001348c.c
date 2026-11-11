/* fn_0001348c - 164 byte(s), 47 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001348c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001348cu): goto L_1348C;
    case RC_ADDR(0x00013490u): goto L_13490;
    case RC_ADDR(0x00013494u): goto L_13494;
    case RC_ADDR(0x00013498u): goto L_13498;
    case RC_ADDR(0x0001349cu): goto L_1349C;
    case RC_ADDR(0x000134a0u): goto L_134A0;
    case RC_ADDR(0x000134a2u): goto L_134A2;
    case RC_ADDR(0x000134a6u): goto L_134A6;
    case RC_ADDR(0x000134aau): goto L_134AA;
    case RC_ADDR(0x000134aeu): goto L_134AE;
    case RC_ADDR(0x000134b2u): goto L_134B2;
    case RC_ADDR(0x000134b6u): goto L_134B6;
    case RC_ADDR(0x000134bau): goto L_134BA;
    case RC_ADDR(0x000134beu): goto L_134BE;
    case RC_ADDR(0x000134c2u): goto L_134C2;
    case RC_ADDR(0x000134c6u): goto L_134C6;
    case RC_ADDR(0x000134cau): goto L_134CA;
    case RC_ADDR(0x000134ceu): goto L_134CE;
    case RC_ADDR(0x000134d2u): goto L_134D2;
    case RC_ADDR(0x000134d4u): goto L_134D4;
    case RC_ADDR(0x000134d8u): goto L_134D8;
    case RC_ADDR(0x000134dau): goto L_134DA;
    case RC_ADDR(0x000134deu): goto L_134DE;
    case RC_ADDR(0x000134e2u): goto L_134E2;
    case RC_ADDR(0x000134e6u): goto L_134E6;
    case RC_ADDR(0x000134e8u): goto L_134E8;
    case RC_ADDR(0x000134eau): goto L_134EA;
    case RC_ADDR(0x000134eeu): goto L_134EE;
    case RC_ADDR(0x000134f2u): goto L_134F2;
    case RC_ADDR(0x000134f6u): goto L_134F6;
    case RC_ADDR(0x000134f8u): goto L_134F8;
    case RC_ADDR(0x000134fau): goto L_134FA;
    case RC_ADDR(0x000134feu): goto L_134FE;
    case RC_ADDR(0x00013502u): goto L_13502;
    case RC_ADDR(0x00013506u): goto L_13506;
    case RC_ADDR(0x00013508u): goto L_13508;
    case RC_ADDR(0x0001350au): goto L_1350A;
    case RC_ADDR(0x0001350eu): goto L_1350E;
    case RC_ADDR(0x00013512u): goto L_13512;
    case RC_ADDR(0x00013516u): goto L_13516;
    case RC_ADDR(0x00013518u): goto L_13518;
    case RC_ADDR(0x0001351au): goto L_1351A;
    case RC_ADDR(0x0001351eu): goto L_1351E;
    case RC_ADDR(0x00013522u): goto L_13522;
    case RC_ADDR(0x00013526u): goto L_13526;
    case RC_ADDR(0x0001352cu): goto L_1352C;
    case RC_ADDR(0x0001352eu): goto L_1352E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1348C:
    /* 0001348c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001348cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13490:
    /* 00013490   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013490u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13494:
    /* 00013494   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013494u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13498:
    /* 00013498   4  lea (fffff38e,A4),A0 */
    c->pc = RC_ADDR(0x00013498u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc72u);

L_1349C:
    /* 0001349c   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001349cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_134A0:
    /* 000134a0   2  beq 000134d4 */
    c->pc = RC_ADDR(0x000134a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_134D4;

L_134A2:
    /* 000134a2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000134a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134A6:
    /* 000134a6   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000134a6u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_134AA:
    /* 000134aa   4  lea (fffff384,A4),A0 */
    c->pc = RC_ADDR(0x000134aau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc7cu);

L_134AE:
    /* 000134ae   4  move.w (fffffd8a,A4),D1 */
    c->pc = RC_ADDR(0x000134aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134B2:
    /* 000134b2   4  sub.w #f,D1 */
    c->pc = RC_ADDR(0x000134b2u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_134B6:
    /* 000134b6   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000134b6u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134BA:
    /* 000134ba   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000134bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134BE:
    /* 000134be   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000134beu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_134C2:
    /* 000134c2   4  lea (fffff386,A4),A0 */
    c->pc = RC_ADDR(0x000134c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc7au);

L_134C6:
    /* 000134c6   4  move.w (fffffd8c,A4),D1 */
    c->pc = RC_ADDR(0x000134c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134CA:
    /* 000134ca   4  sub.w #f,D1 */
    c->pc = RC_ADDR(0x000134cau);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_134CE:
    /* 000134ce   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000134ceu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_134D2:
    /* 000134d2   2  bra 0001352c */
    c->pc = RC_ADDR(0x000134d2u);
    rc_step(c, m, 10);
    goto L_1352C;

L_134D4:
    /* 000134d4   4  tst.w (af6,A4) */
    c->pc = RC_ADDR(0x000134d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf6u));
    rc_set_nzvc(c, t0, RC_W);

L_134D8:
    /* 000134d8   2  bne 0001352c */
    c->pc = RC_ADDR(0x000134d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1352C;

L_134DA:
    /* 000134da   4  move.w (fffffd8a,A4),D0 */
    c->pc = RC_ADDR(0x000134dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134DE:
    /* 000134de   4  sub.w #a0,D0 */
    c->pc = RC_ADDR(0x000134deu);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_134E2:
    /* 000134e2   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000134e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134E6:
    /* 000134e6   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000134e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_134E8:
    /* 000134e8   2  ble 0001352c */
    c->pc = RC_ADDR(0x000134e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1352C;

L_134EA:
    /* 000134ea   4  move.w (fffffd8a,A4),D0 */
    c->pc = RC_ADDR(0x000134eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134EE:
    /* 000134ee   4  add.w #a0,D0 */
    c->pc = RC_ADDR(0x000134eeu);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_134F2:
    /* 000134f2   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000134f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134F6:
    /* 000134f6   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000134f6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_134F8:
    /* 000134f8   2  bge 0001352c */
    c->pc = RC_ADDR(0x000134f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1352C;

L_134FA:
    /* 000134fa   4  move.w (fffffd8c,A4),D0 */
    c->pc = RC_ADDR(0x000134fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_134FE:
    /* 000134fe   4  sub.w #64,D0 */
    c->pc = RC_ADDR(0x000134feu);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13502:
    /* 00013502   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00013502u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13506:
    /* 00013506   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013506u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13508:
    /* 00013508   2  ble 0001352c */
    c->pc = RC_ADDR(0x00013508u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1352C;

L_1350A:
    /* 0001350a   4  move.w (fffffd8c,A4),D0 */
    c->pc = RC_ADDR(0x0001350au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1350E:
    /* 0001350e   4  add.w #64,D0 */
    c->pc = RC_ADDR(0x0001350eu);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13512:
    /* 00013512   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00013512u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13516:
    /* 00013516   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00013516u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13518:
    /* 00013518   2  bge 0001352c */
    c->pc = RC_ADDR(0x00013518u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1352C;

L_1351A:
    /* 0001351a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001351au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1351E:
    /* 0001351e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001351eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13522:
    /* 00013522   4  lea (fffff38e,A4),A0 */
    c->pc = RC_ADDR(0x00013522u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc72u);

L_13526:
    /* 00013526   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013526u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1352C:
    /* 0001352c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001352cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1352E:
    /* 0001352e   2  rts */
    c->pc = RC_ADDR(0x0001352eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
