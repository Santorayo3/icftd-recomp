/* fn_0001b5aa - 96 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b5aa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b5aau): goto L_1B5AA;
    case RC_ADDR(0x0001b5aeu): goto L_1B5AE;
    case RC_ADDR(0x0001b5b2u): goto L_1B5B2;
    case RC_ADDR(0x0001b5b6u): goto L_1B5B6;
    case RC_ADDR(0x0001b5bau): goto L_1B5BA;
    case RC_ADDR(0x0001b5beu): goto L_1B5BE;
    case RC_ADDR(0x0001b5c0u): goto L_1B5C0;
    case RC_ADDR(0x0001b5c4u): goto L_1B5C4;
    case RC_ADDR(0x0001b5c8u): goto L_1B5C8;
    case RC_ADDR(0x0001b5ccu): goto L_1B5CC;
    case RC_ADDR(0x0001b5ceu): goto L_1B5CE;
    case RC_ADDR(0x0001b5d2u): goto L_1B5D2;
    case RC_ADDR(0x0001b5d6u): goto L_1B5D6;
    case RC_ADDR(0x0001b5dau): goto L_1B5DA;
    case RC_ADDR(0x0001b5dcu): goto L_1B5DC;
    case RC_ADDR(0x0001b5e0u): goto L_1B5E0;
    case RC_ADDR(0x0001b5e4u): goto L_1B5E4;
    case RC_ADDR(0x0001b5e8u): goto L_1B5E8;
    case RC_ADDR(0x0001b5eau): goto L_1B5EA;
    case RC_ADDR(0x0001b5eeu): goto L_1B5EE;
    case RC_ADDR(0x0001b5f2u): goto L_1B5F2;
    case RC_ADDR(0x0001b5f6u): goto L_1B5F6;
    case RC_ADDR(0x0001b5f8u): goto L_1B5F8;
    case RC_ADDR(0x0001b5fcu): goto L_1B5FC;
    case RC_ADDR(0x0001b600u): goto L_1B600;
    case RC_ADDR(0x0001b604u): goto L_1B604;
    case RC_ADDR(0x0001b606u): goto L_1B606;
    case RC_ADDR(0x0001b608u): goto L_1B608;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B5AA:
    /* 0001b5aa   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5aau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B5AE:
    /* 0001b5ae   4  jsr (ffff80c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5aeu);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0001b5b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_1B5B2:
    /* 0001b5b2   4  move.l (2258,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5b2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2258u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5B6:
    /* 0001b5b6   4  move.l (2234,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5b6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2234u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5BA:
    /* 0001b5ba   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5bau);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b5beu);
    rc_os_call(c, m, 0, -210);

L_1B5BE:
    /* 0001b5be   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5beu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B5C0:
    /* 0001b5c0   4  move.l (225c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5c0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x225cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5C4:
    /* 0001b5c4   4  move.l (2238,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5c4u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2238u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5C8:
    /* 0001b5c8   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5c8u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b5ccu);
    rc_os_call(c, m, 0, -210);

L_1B5CC:
    /* 0001b5cc   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5ccu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B5CE:
    /* 0001b5ce   4  move.l (2260,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5ceu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2260u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5D2:
    /* 0001b5d2   4  move.l (223c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5d2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x223cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5D6:
    /* 0001b5d6   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5d6u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b5dau);
    rc_os_call(c, m, 0, -210);

L_1B5DA:
    /* 0001b5da   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5dau);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B5DC:
    /* 0001b5dc   4  move.l (2264,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5dcu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2264u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5E0:
    /* 0001b5e0   4  move.l (2240,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5e0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2240u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5E4:
    /* 0001b5e4   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5e4u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b5e8u);
    rc_os_call(c, m, 0, -210);

L_1B5E8:
    /* 0001b5e8   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5e8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B5EA:
    /* 0001b5ea   4  move.l (2268,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5eau);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2268u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5EE:
    /* 0001b5ee   4  move.l (2244,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5eeu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2244u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5F2:
    /* 0001b5f2   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5f2u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b5f6u);
    rc_os_call(c, m, 0, -210);

L_1B5F6:
    /* 0001b5f6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5f6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B5F8:
    /* 0001b5f8   4  move.l (226c,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5f8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x226cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B5FC:
    /* 0001b5fc   4  move.l (2248,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b5fcu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2248u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B600:
    /* 0001b600   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b600u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b604u);
    rc_os_call(c, m, 0, -210);

L_1B604:
    /* 0001b604   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b604u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B606:
    /* 0001b606   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b606u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B608:
    /* 0001b608   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b608u);
    rc_ret(c, m);
    return;

}
