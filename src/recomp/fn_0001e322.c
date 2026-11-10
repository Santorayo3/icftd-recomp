/* fn_0001e322 - 100 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e322(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001e322u: goto L_1E322;
    case 0x0001e326u: goto L_1E326;
    case 0x0001e32au: goto L_1E32A;
    case 0x0001e32cu: goto L_1E32C;
    case 0x0001e330u: goto L_1E330;
    case 0x0001e336u: goto L_1E336;
    case 0x0001e33au: goto L_1E33A;
    case 0x0001e33eu: goto L_1E33E;
    case 0x0001e342u: goto L_1E342;
    case 0x0001e346u: goto L_1E346;
    case 0x0001e34au: goto L_1E34A;
    case 0x0001e34cu: goto L_1E34C;
    case 0x0001e350u: goto L_1E350;
    case 0x0001e354u: goto L_1E354;
    case 0x0001e356u: goto L_1E356;
    case 0x0001e35au: goto L_1E35A;
    case 0x0001e35cu: goto L_1E35C;
    case 0x0001e360u: goto L_1E360;
    case 0x0001e364u: goto L_1E364;
    case 0x0001e366u: goto L_1E366;
    case 0x0001e36au: goto L_1E36A;
    case 0x0001e36cu: goto L_1E36C;
    case 0x0001e370u: goto L_1E370;
    case 0x0001e374u: goto L_1E374;
    case 0x0001e376u: goto L_1E376;
    case 0x0001e37au: goto L_1E37A;
    case 0x0001e37eu: goto L_1E37E;
    case 0x0001e382u: goto L_1E382;
    case 0x0001e384u: goto L_1E384;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E322:
    /* 0001e322   4  link.w A5,#0 */
    c->pc = 0x0001e322u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E326:
    /* 0001e326   4  tst.w (ffffcb40,A4) */
    c->pc = 0x0001e326u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x34c0u));
    rc_set_nzvc(c, t0, RC_W);

L_1E32A:
    /* 0001e32a   2  beq 0001e356 */
    c->pc = 0x0001e32au;
    if (rc_cond(c, 7)) goto L_1E356;

L_1E32C:
    /* 0001e32c   4  movea.l (ffffcb42,A4),A0 */
    c->pc = 0x0001e32cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[0] = t0;

L_1E330:
    /* 0001e330   6  move.w #a,(1c,A0) */
    c->pc = 0x0001e330u;
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[0] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E336:
    /* 0001e336   4  lea (ffffcb4a,A4),A0 */
    c->pc = 0x0001e336u;
    c->a[0] = (c->a[4] - 0x34b6u);

L_1E33A:
    /* 0001e33a   4  movea.l (ffffcb42,A4),A1 */
    c->pc = 0x0001e33au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[1] = t0;

L_1E33E:
    /* 0001e33e   4  move.l A0,(28,A1) */
    c->pc = 0x0001e33eu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E342:
    /* 0001e342   4  move.l (ffffcb42,A4),-(A7) */
    c->pc = 0x0001e342u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E346:
    /* 0001e346   4  jsr (0002169e) */
    c->pc = 0x0001e346u;
    rc_push32(c, m, 0x0001e34au);
    rc_depth++;
    c->pc = 0x0002169eu;
    return;

L_1E34A:
    /* 0001e34a   2  addq.w #4,A7 */
    c->pc = 0x0001e34au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E34C:
    /* 0001e34c   4  move.l (ffffcb42,A4),-(A7) */
    c->pc = 0x0001e34cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E350:
    /* 0001e350   4  jsr (000214de) */
    c->pc = 0x0001e350u;
    /* exec.library -450 */
    c->pc = 0x0001e354u;
    rc_os_call(c, m, 0, -450);

L_1E354:
    /* 0001e354   2  addq.w #4,A7 */
    c->pc = 0x0001e354u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E356:
    /* 0001e356   4  tst.l (ffffcb42,A4) */
    c->pc = 0x0001e356u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    rc_set_nzvc(c, t0, RC_L);

L_1E35A:
    /* 0001e35a   2  beq 0001e366 */
    c->pc = 0x0001e35au;
    if (rc_cond(c, 7)) goto L_1E366;

L_1E35C:
    /* 0001e35c   4  move.l (ffffcb42,A4),-(A7) */
    c->pc = 0x0001e35cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34beu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E360:
    /* 0001e360   4  jsr (000215fa) */
    c->pc = 0x0001e360u;
    rc_push32(c, m, 0x0001e364u);
    rc_depth++;
    c->pc = 0x000215fau;
    return;

L_1E364:
    /* 0001e364   2  addq.w #4,A7 */
    c->pc = 0x0001e364u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E366:
    /* 0001e366   4  tst.l (ffffcb46,A4) */
    c->pc = 0x0001e366u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34bau));
    rc_set_nzvc(c, t0, RC_L);

L_1E36A:
    /* 0001e36a   2  beq 0001e376 */
    c->pc = 0x0001e36au;
    if (rc_cond(c, 7)) goto L_1E376;

L_1E36C:
    /* 0001e36c   4  move.l (ffffcb46,A4),-(A7) */
    c->pc = 0x0001e36cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34bau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E370:
    /* 0001e370   4  jsr (00021586) */
    c->pc = 0x0001e370u;
    rc_push32(c, m, 0x0001e374u);
    rc_depth++;
    c->pc = 0x00021586u;
    return;

L_1E374:
    /* 0001e374   2  addq.w #4,A7 */
    c->pc = 0x0001e374u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E376:
    /* 0001e376   4  clr.w (ffffcb40,A4) */
    c->pc = 0x0001e376u;
    rc_wr16(c, m, (c->a[4] - 0x34c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E37A:
    /* 0001e37a   4  clr.l (ffffcb46,A4) */
    c->pc = 0x0001e37au;
    rc_wr32(c, m, (c->a[4] - 0x34bau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E37E:
    /* 0001e37e   4  clr.l (ffffcb42,A4) */
    c->pc = 0x0001e37eu;
    rc_wr32(c, m, (c->a[4] - 0x34beu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E382:
    /* 0001e382   2  unlk A5 */
    c->pc = 0x0001e382u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E384:
    /* 0001e384   2  rts */
    c->pc = 0x0001e384u;
    rc_ret(c, m);
    return;

}
