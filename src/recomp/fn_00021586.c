/* fn_00021586 - 70 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021586(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021586u): goto L_21586;
    case RC_ADDR(0x0002158au): goto L_2158A;
    case RC_ADDR(0x0002158cu): goto L_2158C;
    case RC_ADDR(0x00021590u): goto L_21590;
    case RC_ADDR(0x00021594u): goto L_21594;
    case RC_ADDR(0x00021596u): goto L_21596;
    case RC_ADDR(0x00021598u): goto L_21598;
    case RC_ADDR(0x0002159cu): goto L_2159C;
    case RC_ADDR(0x0002159eu): goto L_2159E;
    case RC_ADDR(0x000215a4u): goto L_215A4;
    case RC_ADDR(0x000215acu): goto L_215AC;
    case RC_ADDR(0x000215aeu): goto L_215AE;
    case RC_ADDR(0x000215b2u): goto L_215B2;
    case RC_ADDR(0x000215b4u): goto L_215B4;
    case RC_ADDR(0x000215b8u): goto L_215B8;
    case RC_ADDR(0x000215bcu): goto L_215BC;
    case RC_ADDR(0x000215beu): goto L_215BE;
    case RC_ADDR(0x000215c2u): goto L_215C2;
    case RC_ADDR(0x000215c6u): goto L_215C6;
    case RC_ADDR(0x000215c8u): goto L_215C8;
    case RC_ADDR(0x000215cau): goto L_215CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21586:
    /* 00021586   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021586u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2158A:
    /* 0002158a   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002158au);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2158C:
    /* 0002158c   4  movea.l (8,A5),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002158cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21590:
    /* 00021590   4  tst.l (a,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021590u);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_21594:
    /* 00021594   2  beq 0002159e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021594u);
    if (rc_cond(c, 7)) goto L_2159E;

L_21596:
    /* 00021596   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021596u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21598:
    /* 00021598   4  jsr (00021752) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021598u);
    /* exec.library -360 */
    c->pc = RC_ADDR(0x0002159cu);
    rc_os_call(c, m, 0, -360);

L_2159C:
    /* 0002159c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002159cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2159E:
    /* 0002159e   6  move.b #ff,(8,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002159eu);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_215A4:
    /* 000215a4   8  move.l #ffffffff,(14,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215a4u);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_215AC:
    /* 000215ac   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215acu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_215AE:
    /* 000215ae   4  move.b (f,A2),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215aeu);
    t0 = rc_rd8(c, m, (c->a[2] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_215B2:
    /* 000215b2   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215b2u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_215B4:
    /* 000215b4   4  jsr (000216e0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215b4u);
    /* exec.library -336 */
    c->pc = RC_ADDR(0x000215b8u);
    rc_os_call(c, m, 0, -336);

L_215B8:
    /* 000215b8   4  pea (00000022).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215b8u);
    rc_push32(c, m, 0x00000022u);

L_215BC:
    /* 000215bc   2  move.l A2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215bcu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_215BE:
    /* 000215be   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215beu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x000215c2u);
    rc_os_call(c, m, 0, -210);

L_215C2:
    /* 000215c2   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215c2u);
    c->a[7] = (c->a[7] + 0xcu);

L_215C6:
    /* 000215c6   2  movea.l (A7)+,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215c6u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_215C8:
    /* 000215c8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215c8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_215CA:
    /* 000215ca   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000215cau);
    rc_ret(c, m);
    return;

}
