/* fn_00012148 - 116 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012148(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00012148u): goto L_12148;
    case RC_ADDR(0x0001214cu): goto L_1214C;
    case RC_ADDR(0x00012150u): goto L_12150;
    case RC_ADDR(0x00012154u): goto L_12154;
    case RC_ADDR(0x00012158u): goto L_12158;
    case RC_ADDR(0x0001215cu): goto L_1215C;
    case RC_ADDR(0x00012160u): goto L_12160;
    case RC_ADDR(0x00012164u): goto L_12164;
    case RC_ADDR(0x0001216au): goto L_1216A;
    case RC_ADDR(0x0001216eu): goto L_1216E;
    case RC_ADDR(0x00012172u): goto L_12172;
    case RC_ADDR(0x00012178u): goto L_12178;
    case RC_ADDR(0x0001217eu): goto L_1217E;
    case RC_ADDR(0x00012184u): goto L_12184;
    case RC_ADDR(0x0001218au): goto L_1218A;
    case RC_ADDR(0x00012190u): goto L_12190;
    case RC_ADDR(0x00012194u): goto L_12194;
    case RC_ADDR(0x00012198u): goto L_12198;
    case RC_ADDR(0x0001219au): goto L_1219A;
    case RC_ADDR(0x0001219eu): goto L_1219E;
    case RC_ADDR(0x000121a2u): goto L_121A2;
    case RC_ADDR(0x000121a6u): goto L_121A6;
    case RC_ADDR(0x000121aau): goto L_121AA;
    case RC_ADDR(0x000121aeu): goto L_121AE;
    case RC_ADDR(0x000121b2u): goto L_121B2;
    case RC_ADDR(0x000121b8u): goto L_121B8;
    case RC_ADDR(0x000121bau): goto L_121BA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12148:
    /* 00012148   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012148u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1214C:
    /* 0001214c   4  pea (fffffdb6,A4) */
    c->pc = RC_ADDR(0x0001214cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x24au));

L_12150:
    /* 00012150   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x00012150u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12154:
    /* 00012154   4  pea (000121bc) */
    c->pc = RC_ADDR(0x00012154u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000121bcu));

L_12158:
    /* 00012158   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x00012158u);
    rc_step(c, m, 18);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001215cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1215C:
    /* 0001215c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001215cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_12160:
    /* 00012160   4  clr.w (fffffdaa,A4) */
    c->pc = RC_ADDR(0x00012160u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x256u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12164:
    /* 00012164   6  move.w #1,(fffffdac,A4) */
    c->pc = RC_ADDR(0x00012164u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x254u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1216A:
    /* 0001216a   4  clr.w (fffffd92,A4) */
    c->pc = RC_ADDR(0x0001216au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x26eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1216E:
    /* 0001216e   4  clr.w (fffffd94,A4) */
    c->pc = RC_ADDR(0x0001216eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x26cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12172:
    /* 00012172   6  move.w #1,(fffffd96,A4) */
    c->pc = RC_ADDR(0x00012172u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12178:
    /* 00012178   6  move.w #a0,(fffffd98,A4) */
    c->pc = RC_ADDR(0x00012178u);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] - 0x268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1217E:
    /* 0001217e   6  move.w #5a,(fffffd9a,A4) */
    c->pc = RC_ADDR(0x0001217eu);
    rc_step(c, m, 16);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[4] - 0x266u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12184:
    /* 00012184   6  move.w #1,(fffffda0,A4) */
    c->pc = RC_ADDR(0x00012184u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x260u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1218A:
    /* 0001218a   6  move.w #1,(fffffd84,A4) */
    c->pc = RC_ADDR(0x0001218au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x27cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12190:
    /* 00012190   4  clr.w (fffffd88,A4) */
    c->pc = RC_ADDR(0x00012190u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12194:
    /* 00012194   4  move.w (fffff2fe,A4),D0 */
    c->pc = RC_ADDR(0x00012194u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd02u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12198:
    /* 00012198   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x00012198u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_1219A:
    /* 0001219a   4  add.w (fffffd98,A4),D0 */
    c->pc = RC_ADDR(0x0001219au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1219E:
    /* 0001219e   4  move.w D0,(fffffd8e,A4) */
    c->pc = RC_ADDR(0x0001219eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x272u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121A2:
    /* 000121a2   4  move.w (fffff2fc,A4),D0 */
    c->pc = RC_ADDR(0x000121a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd04u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_121A6:
    /* 000121a6   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000121a6u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_121AA:
    /* 000121aa   4  add.w (fffffd9a,A4),D0 */
    c->pc = RC_ADDR(0x000121aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_121AE:
    /* 000121ae   4  move.w D0,(fffffd90,A4) */
    c->pc = RC_ADDR(0x000121aeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x270u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121B2:
    /* 000121b2   6  move.w #1,(e4c,A4) */
    c->pc = RC_ADDR(0x000121b2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121B8:
    /* 000121b8   2  unlk A5 */
    c->pc = RC_ADDR(0x000121b8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_121BA:
    /* 000121ba   2  rts */
    c->pc = RC_ADDR(0x000121bau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
