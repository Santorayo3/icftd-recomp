/* fn_000222a6 - 66 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000222a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000222a6u): goto L_222A6;
    case RC_ADDR(0x000222aau): goto L_222AA;
    case RC_ADDR(0x000222acu): goto L_222AC;
    case RC_ADDR(0x000222b0u): goto L_222B0;
    case RC_ADDR(0x000222b4u): goto L_222B4;
    case RC_ADDR(0x000222b6u): goto L_222B6;
    case RC_ADDR(0x000222b8u): goto L_222B8;
    case RC_ADDR(0x000222bau): goto L_222BA;
    case RC_ADDR(0x000222bcu): goto L_222BC;
    case RC_ADDR(0x000222beu): goto L_222BE;
    case RC_ADDR(0x000222c0u): goto L_222C0;
    case RC_ADDR(0x000222c2u): goto L_222C2;
    case RC_ADDR(0x000222c6u): goto L_222C6;
    case RC_ADDR(0x000222c8u): goto L_222C8;
    case RC_ADDR(0x000222ccu): goto L_222CC;
    case RC_ADDR(0x000222ceu): goto L_222CE;
    case RC_ADDR(0x000222d0u): goto L_222D0;
    case RC_ADDR(0x000222d2u): goto L_222D2;
    case RC_ADDR(0x000222d6u): goto L_222D6;
    case RC_ADDR(0x000222d8u): goto L_222D8;
    case RC_ADDR(0x000222dcu): goto L_222DC;
    case RC_ADDR(0x000222deu): goto L_222DE;
    case RC_ADDR(0x000222e0u): goto L_222E0;
    case RC_ADDR(0x000222e2u): goto L_222E2;
    case RC_ADDR(0x000222e4u): goto L_222E4;
    case RC_ADDR(0x000222e6u): goto L_222E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_222A6:
    /* 000222a6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000222a6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_222AA:
    /* 000222aa   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000222aau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_222AC:
    /* 000222ac   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000222acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_222B0:
    /* 000222b0   4  movea.l (c,A5),A1 */
    c->pc = RC_ADDR(0x000222b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_222B4:
    /* 000222b4   2  move.b (A0)+,D1 */
    c->pc = RC_ADDR(0x000222b4u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_222B6:
    /* 000222b6   2  move.b (A1)+,D2 */
    c->pc = RC_ADDR(0x000222b6u);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_222B8:
    /* 000222b8   2  beq 000222de */
    c->pc = RC_ADDR(0x000222b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_222DE;

L_222BA:
    /* 000222ba   2  cmp.b D1,D2 */
    c->pc = RC_ADDR(0x000222bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_222BC:
    /* 000222bc   2  beq 000222b4 */
    c->pc = RC_ADDR(0x000222bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_222B4; }

L_222BE:
    /* 000222be   2  tst.b D1 */
    c->pc = RC_ADDR(0x000222beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_222C0:
    /* 000222c0   2  bmi 000222de */
    c->pc = RC_ADDR(0x000222c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_222DE;

L_222C2:
    /* 000222c2   4  cmpi.b #60,D1 */
    c->pc = RC_ADDR(0x000222c2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000060u);

L_222C6:
    /* 000222c6   2  bgt 000222ce */
    c->pc = RC_ADDR(0x000222c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_222CE;

L_222C8:
    /* 000222c8   4  addi.b #20,D1 */
    c->pc = RC_ADDR(0x000222c8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_B);
    t2 = t1 + 0x00000020u;
    rc_flags_add(c, RC_B, t1, 0x00000020u, t2, 0);
    rc_d_set(c, 1, RC_B, t2);

L_222CC:
    /* 000222cc   2  bra 000222ba */
    c->pc = RC_ADDR(0x000222ccu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_222BA;

L_222CE:
    /* 000222ce   2  tst.b D2 */
    c->pc = RC_ADDR(0x000222ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_222D0:
    /* 000222d0   2  bmi 000222de */
    c->pc = RC_ADDR(0x000222d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_222DE;

L_222D2:
    /* 000222d2   4  cmpi.b #60,D2 */
    c->pc = RC_ADDR(0x000222d2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000060u);

L_222D6:
    /* 000222d6   2  bgt 000222de */
    c->pc = RC_ADDR(0x000222d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_222DE;

L_222D8:
    /* 000222d8   4  addi.b #20,D2 */
    c->pc = RC_ADDR(0x000222d8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_B);
    t2 = t1 + 0x00000020u;
    rc_flags_add(c, RC_B, t1, 0x00000020u, t2, 0);
    rc_d_set(c, 2, RC_B, t2);

L_222DC:
    /* 000222dc   2  bra 000222ba */
    c->pc = RC_ADDR(0x000222dcu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_222BA;

L_222DE:
    /* 000222de   2  cmp.b D1,D2 */
    c->pc = RC_ADDR(0x000222deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_222E0:
    /* 000222e0   2  beq 000222e4 */
    c->pc = RC_ADDR(0x000222e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_222E4;

L_222E2:
    /* 000222e2   2  clr.l D0 */
    c->pc = RC_ADDR(0x000222e2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_222E4:
    /* 000222e4   2  unlk A5 */
    c->pc = RC_ADDR(0x000222e4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_222E6:
    /* 000222e6   2  rts */
    c->pc = RC_ADDR(0x000222e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
