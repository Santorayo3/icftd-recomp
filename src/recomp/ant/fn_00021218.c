/* fn_00021218 - 84 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021218(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021218u): goto L_21218;
    case RC_ADDR(0x0002121cu): goto L_2121C;
    case RC_ADDR(0x00021220u): goto L_21220;
    case RC_ADDR(0x00021222u): goto L_21222;
    case RC_ADDR(0x00021224u): goto L_21224;
    case RC_ADDR(0x00021228u): goto L_21228;
    case RC_ADDR(0x0002122cu): goto L_2122C;
    case RC_ADDR(0x00021232u): goto L_21232;
    case RC_ADDR(0x00021236u): goto L_21236;
    case RC_ADDR(0x00021238u): goto L_21238;
    case RC_ADDR(0x0002123cu): goto L_2123C;
    case RC_ADDR(0x00021240u): goto L_21240;
    case RC_ADDR(0x00021244u): goto L_21244;
    case RC_ADDR(0x00021248u): goto L_21248;
    case RC_ADDR(0x0002124au): goto L_2124A;
    case RC_ADDR(0x0002124cu): goto L_2124C;
    case RC_ADDR(0x0002124eu): goto L_2124E;
    case RC_ADDR(0x00021252u): goto L_21252;
    case RC_ADDR(0x00021254u): goto L_21254;
    case RC_ADDR(0x00021256u): goto L_21256;
    case RC_ADDR(0x0002125au): goto L_2125A;
    case RC_ADDR(0x0002125eu): goto L_2125E;
    case RC_ADDR(0x00021260u): goto L_21260;
    case RC_ADDR(0x00021264u): goto L_21264;
    case RC_ADDR(0x00021268u): goto L_21268;
    case RC_ADDR(0x0002126au): goto L_2126A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21218:
    /* 00021218   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00021218u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_2121C:
    /* 0002121c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002121cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21220:
    /* 00021220   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00021220u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_21222:
    /* 00021222   2  bne 0002122c */
    c->pc = RC_ADDR(0x00021222u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2122C;

L_21224:
    /* 00021224   4  lea (0002126c),A0 */
    c->pc = RC_ADDR(0x00021224u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0002126cu);

L_21228:
    /* 00021228   4  move.l A0,(8,A5) */
    c->pc = RC_ADDR(0x00021228u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2122C:
    /* 0002122c   6  move.l (ffffd46a,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002122cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b96u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21232:
    /* 00021232   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00021232u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21236:
    /* 00021236   2  beq 00021260 */
    c->pc = RC_ADDR(0x00021236u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21260;

L_21238:
    /* 00021238   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021238u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2123C:
    /* 0002123c   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0002123cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21240:
    /* 00021240   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00021240u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21244:
    /* 00021244   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00021244u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00021248u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_21248:
    /* 00021248   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021248u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2124A:
    /* 0002124a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0002124au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2124C:
    /* 0002124c   2  bne 00021256 */
    c->pc = RC_ADDR(0x0002124cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21256;

L_2124E:
    /* 0002124e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0002124eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21252:
    /* 00021252   2  unlk A5 */
    c->pc = RC_ADDR(0x00021252u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21254:
    /* 00021254   2  rts */
    c->pc = RC_ADDR(0x00021254u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21256:
    /* 00021256   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021256u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_2125A:
    /* 0002125a   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0002125au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2125E:
    /* 0002125e   2  bra 00021232 */
    c->pc = RC_ADDR(0x0002125eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21232;

L_21260:
    /* 00021260   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00021260u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21264:
    /* 00021264   4  jsr (0002116a) */
    c->pc = RC_ADDR(0x00021264u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021268u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002116au);
    return;

L_21268:
    /* 00021268   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021268u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2126A:
    /* 0002126a   2  bra 00021252 */
    c->pc = RC_ADDR(0x0002126au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21252;

}
