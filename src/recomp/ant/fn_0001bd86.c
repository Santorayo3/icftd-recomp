/* fn_0001bd86 - 84 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001bd86(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bd86u): goto L_1BD86;
    case RC_ADDR(0x0001bd8au): goto L_1BD8A;
    case RC_ADDR(0x0001bd8eu): goto L_1BD8E;
    case RC_ADDR(0x0001bd92u): goto L_1BD92;
    case RC_ADDR(0x0001bd94u): goto L_1BD94;
    case RC_ADDR(0x0001bd96u): goto L_1BD96;
    case RC_ADDR(0x0001bd9au): goto L_1BD9A;
    case RC_ADDR(0x0001bd9eu): goto L_1BD9E;
    case RC_ADDR(0x0001bda0u): goto L_1BDA0;
    case RC_ADDR(0x0001bda2u): goto L_1BDA2;
    case RC_ADDR(0x0001bda6u): goto L_1BDA6;
    case RC_ADDR(0x0001bdacu): goto L_1BDAC;
    case RC_ADDR(0x0001bdb0u): goto L_1BDB0;
    case RC_ADDR(0x0001bdb2u): goto L_1BDB2;
    case RC_ADDR(0x0001bdb4u): goto L_1BDB4;
    case RC_ADDR(0x0001bdb8u): goto L_1BDB8;
    case RC_ADDR(0x0001bdbcu): goto L_1BDBC;
    case RC_ADDR(0x0001bdbeu): goto L_1BDBE;
    case RC_ADDR(0x0001bdc0u): goto L_1BDC0;
    case RC_ADDR(0x0001bdc4u): goto L_1BDC4;
    case RC_ADDR(0x0001bdcau): goto L_1BDCA;
    case RC_ADDR(0x0001bdceu): goto L_1BDCE;
    case RC_ADDR(0x0001bdd4u): goto L_1BDD4;
    case RC_ADDR(0x0001bdd6u): goto L_1BDD6;
    case RC_ADDR(0x0001bdd8u): goto L_1BDD8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BD86:
    /* 0001bd86   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001bd86u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1BD8A:
    /* 0001bd8a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001bd8au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BD8E:
    /* 0001bd8e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001bd8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD92:
    /* 0001bd92   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bd92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BD94:
    /* 0001bd94   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bd94u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BD96:
    /* 0001bd96   4  lea (ffffcdfe,A4),A0 */
    c->pc = RC_ADDR(0x0001bd96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3202u);

L_1BD9A:
    /* 0001bd9a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001bd9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD9E:
    /* 0001bd9e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001bd9eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1BDA0:
    /* 0001bda0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001bda0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1BDA2:
    /* 0001bda2   4  lea (26ea,A4),A1 */
    c->pc = RC_ADDR(0x0001bda2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26eau);

L_1BDA6:
    /* 0001bda6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001bda6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BDAC:
    /* 0001bdac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001bdacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BDB0:
    /* 0001bdb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001bdb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BDB2:
    /* 0001bdb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bdb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BDB4:
    /* 0001bdb4   4  lea (ffffce06,A4),A0 */
    c->pc = RC_ADDR(0x0001bdb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31fau);

L_1BDB8:
    /* 0001bdb8   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001bdb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BDBC:
    /* 0001bdbc   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001bdbcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1BDBE:
    /* 0001bdbe   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001bdbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1BDC0:
    /* 0001bdc0   4  lea (26ee,A4),A1 */
    c->pc = RC_ADDR(0x0001bdc0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x26eeu);

L_1BDC4:
    /* 0001bdc4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001bdc4u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BDCA:
    /* 0001bdca   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001bdcau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BDCE:
    /* 0001bdce   6  cmpi.w #2,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001bdceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1BDD4:
    /* 0001bdd4   2  blt 0001bd8e */
    c->pc = RC_ADDR(0x0001bdd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BD8E; }

L_1BDD6:
    /* 0001bdd6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bdd6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BDD8:
    /* 0001bdd8   2  rts */
    c->pc = RC_ADDR(0x0001bdd8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
