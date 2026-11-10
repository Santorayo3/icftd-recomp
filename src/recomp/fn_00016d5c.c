/* fn_00016d5c - 156 byte(s), 46 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016d5c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016d5cu): goto L_16D5C;
    case RC_ADDR(0x00016d60u): goto L_16D60;
    case RC_ADDR(0x00016d64u): goto L_16D64;
    case RC_ADDR(0x00016d68u): goto L_16D68;
    case RC_ADDR(0x00016d6au): goto L_16D6A;
    case RC_ADDR(0x00016d6eu): goto L_16D6E;
    case RC_ADDR(0x00016d72u): goto L_16D72;
    case RC_ADDR(0x00016d76u): goto L_16D76;
    case RC_ADDR(0x00016d78u): goto L_16D78;
    case RC_ADDR(0x00016d7cu): goto L_16D7C;
    case RC_ADDR(0x00016d80u): goto L_16D80;
    case RC_ADDR(0x00016d82u): goto L_16D82;
    case RC_ADDR(0x00016d86u): goto L_16D86;
    case RC_ADDR(0x00016d8au): goto L_16D8A;
    case RC_ADDR(0x00016d8eu): goto L_16D8E;
    case RC_ADDR(0x00016d90u): goto L_16D90;
    case RC_ADDR(0x00016d94u): goto L_16D94;
    case RC_ADDR(0x00016d98u): goto L_16D98;
    case RC_ADDR(0x00016d9au): goto L_16D9A;
    case RC_ADDR(0x00016d9eu): goto L_16D9E;
    case RC_ADDR(0x00016da2u): goto L_16DA2;
    case RC_ADDR(0x00016da6u): goto L_16DA6;
    case RC_ADDR(0x00016da8u): goto L_16DA8;
    case RC_ADDR(0x00016dacu): goto L_16DAC;
    case RC_ADDR(0x00016db0u): goto L_16DB0;
    case RC_ADDR(0x00016db2u): goto L_16DB2;
    case RC_ADDR(0x00016db6u): goto L_16DB6;
    case RC_ADDR(0x00016dbau): goto L_16DBA;
    case RC_ADDR(0x00016dbeu): goto L_16DBE;
    case RC_ADDR(0x00016dc0u): goto L_16DC0;
    case RC_ADDR(0x00016dc4u): goto L_16DC4;
    case RC_ADDR(0x00016dc8u): goto L_16DC8;
    case RC_ADDR(0x00016dcau): goto L_16DCA;
    case RC_ADDR(0x00016dceu): goto L_16DCE;
    case RC_ADDR(0x00016dd2u): goto L_16DD2;
    case RC_ADDR(0x00016dd6u): goto L_16DD6;
    case RC_ADDR(0x00016dd8u): goto L_16DD8;
    case RC_ADDR(0x00016ddcu): goto L_16DDC;
    case RC_ADDR(0x00016de0u): goto L_16DE0;
    case RC_ADDR(0x00016de2u): goto L_16DE2;
    case RC_ADDR(0x00016de6u): goto L_16DE6;
    case RC_ADDR(0x00016deau): goto L_16DEA;
    case RC_ADDR(0x00016deeu): goto L_16DEE;
    case RC_ADDR(0x00016df0u): goto L_16DF0;
    case RC_ADDR(0x00016df4u): goto L_16DF4;
    case RC_ADDR(0x00016df6u): goto L_16DF6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16D5C:
    /* 00016d5c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016d5cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16D60:
    /* 00016d60   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x00016d60u);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x00016d64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_16D64:
    /* 00016d64   4  tst.l (ffffb150,A4) */
    c->pc = RC_ADDR(0x00016d64u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    rc_set_nzvc(c, t0, RC_L);

L_16D68:
    /* 00016d68   2  beq 00016d7c */
    c->pc = RC_ADDR(0x00016d68u);
    if (rc_cond(c, 7)) goto L_16D7C;

L_16D6A:
    /* 00016d6a   4  move.l (2de,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d6au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D6E:
    /* 00016d6e   4  move.l (ffffb150,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d6eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D72:
    /* 00016d72   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016d72u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016d76u);
    rc_os_call(c, m, 0, -210);

L_16D76:
    /* 00016d76   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016d76u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16D78:
    /* 00016d78   4  clr.l (ffffb150,A4) */
    c->pc = RC_ADDR(0x00016d78u);
    rc_wr32(c, m, (c->a[4] - 0x4eb0u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16D7C:
    /* 00016d7c   4  tst.l (ffffb1d4,A4) */
    c->pc = RC_ADDR(0x00016d7cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e2cu));
    rc_set_nzvc(c, t0, RC_L);

L_16D80:
    /* 00016d80   2  beq 00016d94 */
    c->pc = RC_ADDR(0x00016d80u);
    if (rc_cond(c, 7)) goto L_16D94;

L_16D82:
    /* 00016d82   4  move.l (1198,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d82u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1198u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D86:
    /* 00016d86   4  move.l (ffffb1d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d86u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D8A:
    /* 00016d8a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016d8au);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016d8eu);
    rc_os_call(c, m, 0, -210);

L_16D8E:
    /* 00016d8e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016d8eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16D90:
    /* 00016d90   4  clr.l (ffffb1d4,A4) */
    c->pc = RC_ADDR(0x00016d90u);
    rc_wr32(c, m, (c->a[4] - 0x4e2cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16D94:
    /* 00016d94   4  tst.l (1292,A4) */
    c->pc = RC_ADDR(0x00016d94u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1292u));
    rc_set_nzvc(c, t0, RC_L);

L_16D98:
    /* 00016d98   2  beq 00016dac */
    c->pc = RC_ADDR(0x00016d98u);
    if (rc_cond(c, 7)) goto L_16DAC;

L_16D9A:
    /* 00016d9a   4  move.l (129e,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d9au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x129eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D9E:
    /* 00016d9e   4  move.l (1292,A4),-(A7) */
    c->pc = RC_ADDR(0x00016d9eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1292u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DA2:
    /* 00016da2   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016da2u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016da6u);
    rc_os_call(c, m, 0, -210);

L_16DA6:
    /* 00016da6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016da6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16DA8:
    /* 00016da8   4  clr.l (1292,A4) */
    c->pc = RC_ADDR(0x00016da8u);
    rc_wr32(c, m, (c->a[4] + 0x1292u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16DAC:
    /* 00016dac   4  tst.l (1296,A4) */
    c->pc = RC_ADDR(0x00016dacu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1296u));
    rc_set_nzvc(c, t0, RC_L);

L_16DB0:
    /* 00016db0   2  beq 00016dc4 */
    c->pc = RC_ADDR(0x00016db0u);
    if (rc_cond(c, 7)) goto L_16DC4;

L_16DB2:
    /* 00016db2   4  move.l (12a2,A4),-(A7) */
    c->pc = RC_ADDR(0x00016db2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x12a2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DB6:
    /* 00016db6   4  move.l (1296,A4),-(A7) */
    c->pc = RC_ADDR(0x00016db6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1296u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DBA:
    /* 00016dba   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016dbau);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016dbeu);
    rc_os_call(c, m, 0, -210);

L_16DBE:
    /* 00016dbe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016dbeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16DC0:
    /* 00016dc0   4  clr.l (1296,A4) */
    c->pc = RC_ADDR(0x00016dc0u);
    rc_wr32(c, m, (c->a[4] + 0x1296u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16DC4:
    /* 00016dc4   4  tst.l (fffffd4e,A4) */
    c->pc = RC_ADDR(0x00016dc4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b2u));
    rc_set_nzvc(c, t0, RC_L);

L_16DC8:
    /* 00016dc8   2  beq 00016ddc */
    c->pc = RC_ADDR(0x00016dc8u);
    if (rc_cond(c, 7)) goto L_16DDC;

L_16DCA:
    /* 00016dca   4  move.l (fffffd54,A4),-(A7) */
    c->pc = RC_ADDR(0x00016dcau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2acu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DCE:
    /* 00016dce   4  move.l (fffffd4e,A4),-(A7) */
    c->pc = RC_ADDR(0x00016dceu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DD2:
    /* 00016dd2   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016dd2u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016dd6u);
    rc_os_call(c, m, 0, -210);

L_16DD6:
    /* 00016dd6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016dd6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16DD8:
    /* 00016dd8   4  clr.l (fffffd4e,A4) */
    c->pc = RC_ADDR(0x00016dd8u);
    rc_wr32(c, m, (c->a[4] - 0x2b2u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16DDC:
    /* 00016ddc   4  tst.l (ffffb166,A4) */
    c->pc = RC_ADDR(0x00016ddcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e9au));
    rc_set_nzvc(c, t0, RC_L);

L_16DE0:
    /* 00016de0   2  beq 00016df4 */
    c->pc = RC_ADDR(0x00016de0u);
    if (rc_cond(c, 7)) goto L_16DF4;

L_16DE2:
    /* 00016de2   4  move.l (113a,A4),-(A7) */
    c->pc = RC_ADDR(0x00016de2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x113au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DE6:
    /* 00016de6   4  move.l (ffffb166,A4),-(A7) */
    c->pc = RC_ADDR(0x00016de6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DEA:
    /* 00016dea   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00016deau);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00016deeu);
    rc_os_call(c, m, 0, -210);

L_16DEE:
    /* 00016dee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016deeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16DF0:
    /* 00016df0   4  clr.l (ffffb166,A4) */
    c->pc = RC_ADDR(0x00016df0u);
    rc_wr32(c, m, (c->a[4] - 0x4e9au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16DF4:
    /* 00016df4   2  unlk A5 */
    c->pc = RC_ADDR(0x00016df4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16DF6:
    /* 00016df6   2  rts */
    c->pc = RC_ADDR(0x00016df6u);
    rc_ret(c, m);
    return;

}
