/* fn_000219b6 - 72 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000219b6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000219b6u): goto L_219B6;
    case RC_ADDR(0x000219bau): goto L_219BA;
    case RC_ADDR(0x000219beu): goto L_219BE;
    case RC_ADDR(0x000219c0u): goto L_219C0;
    case RC_ADDR(0x000219c2u): goto L_219C2;
    case RC_ADDR(0x000219c4u): goto L_219C4;
    case RC_ADDR(0x000219c6u): goto L_219C6;
    case RC_ADDR(0x000219cau): goto L_219CA;
    case RC_ADDR(0x000219ccu): goto L_219CC;
    case RC_ADDR(0x000219ceu): goto L_219CE;
    case RC_ADDR(0x000219d0u): goto L_219D0;
    case RC_ADDR(0x000219d2u): goto L_219D2;
    case RC_ADDR(0x000219d6u): goto L_219D6;
    case RC_ADDR(0x000219d8u): goto L_219D8;
    case RC_ADDR(0x000219dau): goto L_219DA;
    case RC_ADDR(0x000219dcu): goto L_219DC;
    case RC_ADDR(0x000219deu): goto L_219DE;
    case RC_ADDR(0x000219e0u): goto L_219E0;
    case RC_ADDR(0x000219e4u): goto L_219E4;
    case RC_ADDR(0x000219e6u): goto L_219E6;
    case RC_ADDR(0x000219eau): goto L_219EA;
    case RC_ADDR(0x000219eeu): goto L_219EE;
    case RC_ADDR(0x000219f0u): goto L_219F0;
    case RC_ADDR(0x000219f2u): goto L_219F2;
    case RC_ADDR(0x000219f6u): goto L_219F6;
    case RC_ADDR(0x000219fau): goto L_219FA;
    case RC_ADDR(0x000219fcu): goto L_219FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_219B6:
    /* 000219b6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000219b6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_219BA:
    /* 000219ba   4  move.w (14,A5),D0 */
    c->pc = RC_ADDR(0x000219bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_219BE:
    /* 000219be   2  ext.l D0 */
    c->pc = RC_ADDR(0x000219beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_219C0:
    /* 000219c0   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000219c0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_219C2:
    /* 000219c2   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000219c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_219C4:
    /* 000219c4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000219c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219C6:
    /* 000219c6   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x000219c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_219CA:
    /* 000219ca   2  ext.l D0 */
    c->pc = RC_ADDR(0x000219cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_219CC:
    /* 000219cc   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000219ccu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_219CE:
    /* 000219ce   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000219ceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_219D0:
    /* 000219d0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000219d0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219D2:
    /* 000219d2   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x000219d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_219D6:
    /* 000219d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000219d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_219D8:
    /* 000219d8   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000219d8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_219DA:
    /* 000219da   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000219dau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_219DC:
    /* 000219dc   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000219dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219DE:
    /* 000219de   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000219deu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_219E0:
    /* 000219e0   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000219e0u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_219E4:
    /* 000219e4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000219e4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_219E6:
    /* 000219e6   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000219e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_219EA:
    /* 000219ea   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x000219eau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_219EE:
    /* 000219ee   2  ext.w D0 */
    c->pc = RC_ADDR(0x000219eeu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_219F0:
    /* 000219f0   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000219f0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_219F2:
    /* 000219f2   4  jsr (00021350) */
    c->pc = RC_ADDR(0x000219f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021350u);
    return;

L_219F6:
    /* 000219f6   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000219f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_219FA:
    /* 000219fa   2  unlk A5 */
    c->pc = RC_ADDR(0x000219fau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_219FC:
    /* 000219fc   2  rts */
    c->pc = RC_ADDR(0x000219fcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
