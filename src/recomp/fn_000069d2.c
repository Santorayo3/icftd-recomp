/* fn_000069d2 - 72 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000069d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000069d2u): goto L_69D2;
    case RC_ADDR(0x000069d6u): goto L_69D6;
    case RC_ADDR(0x000069dau): goto L_69DA;
    case RC_ADDR(0x000069deu): goto L_69DE;
    case RC_ADDR(0x000069e2u): goto L_69E2;
    case RC_ADDR(0x000069e6u): goto L_69E6;
    case RC_ADDR(0x000069eau): goto L_69EA;
    case RC_ADDR(0x000069eeu): goto L_69EE;
    case RC_ADDR(0x000069f2u): goto L_69F2;
    case RC_ADDR(0x000069f4u): goto L_69F4;
    case RC_ADDR(0x000069f6u): goto L_69F6;
    case RC_ADDR(0x000069fau): goto L_69FA;
    case RC_ADDR(0x000069feu): goto L_69FE;
    case RC_ADDR(0x00006a02u): goto L_6A02;
    case RC_ADDR(0x00006a08u): goto L_6A08;
    case RC_ADDR(0x00006a0au): goto L_6A0A;
    case RC_ADDR(0x00006a0eu): goto L_6A0E;
    case RC_ADDR(0x00006a12u): goto L_6A12;
    case RC_ADDR(0x00006a16u): goto L_6A16;
    case RC_ADDR(0x00006a18u): goto L_6A18;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_69D2:
    /* 000069d2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000069d2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_69D6:
    /* 000069d6   4  clr.w (fffff25e,A4) */
    c->pc = RC_ADDR(0x000069d6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xda2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_69DA:
    /* 000069da   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000069dau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_69DE:
    /* 000069de   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000069deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_69E2:
    /* 000069e2   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000069e2u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_69E6:
    /* 000069e6   4  lea (fffff1fa,A4),A0 */
    c->pc = RC_ADDR(0x000069e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe06u);

L_69EA:
    /* 000069ea   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000069eau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_69EE:
    /* 000069ee   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000069eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_69F2:
    /* 000069f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000069f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_69F4:
    /* 000069f4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000069f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_69F6:
    /* 000069f6   4  lea (fffff1d2,A4),A0 */
    c->pc = RC_ADDR(0x000069f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xe2eu);

L_69FA:
    /* 000069fa   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000069fau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_69FE:
    /* 000069fe   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000069feu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6A02:
    /* 00006a02   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006a02u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_6A08:
    /* 00006a08   2  blt 000069de */
    c->pc = RC_ADDR(0x00006a08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_69DE; }

L_6A0A:
    /* 00006a0a   4  clr.w (fffff26e,A4) */
    c->pc = RC_ADDR(0x00006a0au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd92u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6A0E:
    /* 00006a0e   4  clr.w (fffff26a,A4) */
    c->pc = RC_ADDR(0x00006a0eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd96u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6A12:
    /* 00006a12   4  clr.l (fffff264,A4) */
    c->pc = RC_ADDR(0x00006a12u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0xd9cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6A16:
    /* 00006a16   2  unlk A5 */
    c->pc = RC_ADDR(0x00006a16u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6A18:
    /* 00006a18   2  rts */
    c->pc = RC_ADDR(0x00006a18u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
