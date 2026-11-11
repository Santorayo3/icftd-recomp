/* fn_0001c230 - 54 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c230(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c230u): goto L_1C230;
    case RC_ADDR(0x0001c234u): goto L_1C234;
    case RC_ADDR(0x0001c238u): goto L_1C238;
    case RC_ADDR(0x0001c23cu): goto L_1C23C;
    case RC_ADDR(0x0001c240u): goto L_1C240;
    case RC_ADDR(0x0001c244u): goto L_1C244;
    case RC_ADDR(0x0001c246u): goto L_1C246;
    case RC_ADDR(0x0001c24au): goto L_1C24A;
    case RC_ADDR(0x0001c24eu): goto L_1C24E;
    case RC_ADDR(0x0001c252u): goto L_1C252;
    case RC_ADDR(0x0001c254u): goto L_1C254;
    case RC_ADDR(0x0001c258u): goto L_1C258;
    case RC_ADDR(0x0001c25cu): goto L_1C25C;
    case RC_ADDR(0x0001c260u): goto L_1C260;
    case RC_ADDR(0x0001c262u): goto L_1C262;
    case RC_ADDR(0x0001c264u): goto L_1C264;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C230:
    /* 0001c230   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c230u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C234:
    /* 0001c234   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x0001c234u);
    rc_step(c, m, 18);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0001c238u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009becu);
    return;

L_1C238:
    /* 0001c238   4  move.l (23a6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c238u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23a6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C23C:
    /* 0001c23c   4  move.l (2394,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c23cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2394u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C240:
    /* 0001c240   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001c240u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001c244u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1C244:
    /* 0001c244   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c244u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C246:
    /* 0001c246   4  move.l (23aa,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c246u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C24A:
    /* 0001c24a   4  move.l (2398,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c24au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2398u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C24E:
    /* 0001c24e   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001c24eu);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001c252u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1C252:
    /* 0001c252   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c252u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C254:
    /* 0001c254   4  move.l (23ae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c254u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C258:
    /* 0001c258   4  move.l (239c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c258u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x239cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C25C:
    /* 0001c25c   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001c25cu);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001c260u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1C260:
    /* 0001c260   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c260u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C262:
    /* 0001c262   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c262u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C264:
    /* 0001c264   2  rts */
    c->pc = RC_ADDR(0x0001c264u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
