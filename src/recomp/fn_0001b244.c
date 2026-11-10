/* fn_0001b244 - 82 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b244(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b244u): goto L_1B244;
    case RC_ADDR(0x0001b248u): goto L_1B248;
    case RC_ADDR(0x0001b24cu): goto L_1B24C;
    case RC_ADDR(0x0001b250u): goto L_1B250;
    case RC_ADDR(0x0001b252u): goto L_1B252;
    case RC_ADDR(0x0001b256u): goto L_1B256;
    case RC_ADDR(0x0001b258u): goto L_1B258;
    case RC_ADDR(0x0001b25cu): goto L_1B25C;
    case RC_ADDR(0x0001b260u): goto L_1B260;
    case RC_ADDR(0x0001b264u): goto L_1B264;
    case RC_ADDR(0x0001b268u): goto L_1B268;
    case RC_ADDR(0x0001b26cu): goto L_1B26C;
    case RC_ADDR(0x0001b270u): goto L_1B270;
    case RC_ADDR(0x0001b274u): goto L_1B274;
    case RC_ADDR(0x0001b276u): goto L_1B276;
    case RC_ADDR(0x0001b27au): goto L_1B27A;
    case RC_ADDR(0x0001b27eu): goto L_1B27E;
    case RC_ADDR(0x0001b282u): goto L_1B282;
    case RC_ADDR(0x0001b286u): goto L_1B286;
    case RC_ADDR(0x0001b28au): goto L_1B28A;
    case RC_ADDR(0x0001b28eu): goto L_1B28E;
    case RC_ADDR(0x0001b292u): goto L_1B292;
    case RC_ADDR(0x0001b294u): goto L_1B294;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B244:
    /* 0001b244   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001b244u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B248:
    /* 0001b248   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x0001b248u);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B24C:
    /* 0001b24c   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001b24cu);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001b250u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_1B250:
    /* 0001b250   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001b250u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B252:
    /* 0001b252   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x0001b252u);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B256:
    /* 0001b256   2  bge 0001b276 */
    c->pc = RC_ADDR(0x0001b256u);
    if (rc_cond(c, 12)) goto L_1B276;

L_1B258:
    /* 0001b258   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001b258u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B25C:
    /* 0001b25c   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001b25cu);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B260:
    /* 0001b260   4  move.l (2258,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b260u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2258u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B264:
    /* 0001b264   4  move.w (224c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b264u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x224cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B268:
    /* 0001b268   4  move.l (2234,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b268u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2234u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B26C:
    /* 0001b26c   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001b26cu);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001b270u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_1B270:
    /* 0001b270   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001b270u);
    c->a[7] = (c->a[7] + 0xeu);

L_1B274:
    /* 0001b274   2  bra 0001b292 */
    c->pc = RC_ADDR(0x0001b274u);
    goto L_1B292;

L_1B276:
    /* 0001b276   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001b276u);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B27A:
    /* 0001b27a   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001b27au);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B27E:
    /* 0001b27e   4  move.l (225c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b27eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x225cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B282:
    /* 0001b282   4  move.w (224e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b282u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x224eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B286:
    /* 0001b286   4  move.l (2238,A4),-(A7) */
    c->pc = RC_ADDR(0x0001b286u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2238u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B28A:
    /* 0001b28a   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001b28au);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0001b28eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009c3cu);
    return;

L_1B28E:
    /* 0001b28e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001b28eu);
    c->a[7] = (c->a[7] + 0xeu);

L_1B292:
    /* 0001b292   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b292u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B294:
    /* 0001b294   2  rts */
    c->pc = RC_ADDR(0x0001b294u);
    rc_ret(c, m);
    return;

}
