/* fn_0001ba3e - 284 byte(s), 76 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001ba3e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ba3eu): goto L_1BA3E;
    case RC_ADDR(0x0001ba42u): goto L_1BA42;
    case RC_ADDR(0x0001ba46u): goto L_1BA46;
    case RC_ADDR(0x0001ba4au): goto L_1BA4A;
    case RC_ADDR(0x0001ba4eu): goto L_1BA4E;
    case RC_ADDR(0x0001ba52u): goto L_1BA52;
    case RC_ADDR(0x0001ba56u): goto L_1BA56;
    case RC_ADDR(0x0001ba5au): goto L_1BA5A;
    case RC_ADDR(0x0001ba5eu): goto L_1BA5E;
    case RC_ADDR(0x0001ba62u): goto L_1BA62;
    case RC_ADDR(0x0001ba66u): goto L_1BA66;
    case RC_ADDR(0x0001ba6au): goto L_1BA6A;
    case RC_ADDR(0x0001ba6eu): goto L_1BA6E;
    case RC_ADDR(0x0001ba72u): goto L_1BA72;
    case RC_ADDR(0x0001ba76u): goto L_1BA76;
    case RC_ADDR(0x0001ba7au): goto L_1BA7A;
    case RC_ADDR(0x0001ba7eu): goto L_1BA7E;
    case RC_ADDR(0x0001ba82u): goto L_1BA82;
    case RC_ADDR(0x0001ba86u): goto L_1BA86;
    case RC_ADDR(0x0001ba8au): goto L_1BA8A;
    case RC_ADDR(0x0001ba8cu): goto L_1BA8C;
    case RC_ADDR(0x0001ba92u): goto L_1BA92;
    case RC_ADDR(0x0001ba94u): goto L_1BA94;
    case RC_ADDR(0x0001ba9au): goto L_1BA9A;
    case RC_ADDR(0x0001ba9cu): goto L_1BA9C;
    case RC_ADDR(0x0001baa2u): goto L_1BAA2;
    case RC_ADDR(0x0001baa6u): goto L_1BAA6;
    case RC_ADDR(0x0001baa8u): goto L_1BAA8;
    case RC_ADDR(0x0001baacu): goto L_1BAAC;
    case RC_ADDR(0x0001bab0u): goto L_1BAB0;
    case RC_ADDR(0x0001bab4u): goto L_1BAB4;
    case RC_ADDR(0x0001bab6u): goto L_1BAB6;
    case RC_ADDR(0x0001babcu): goto L_1BABC;
    case RC_ADDR(0x0001bac2u): goto L_1BAC2;
    case RC_ADDR(0x0001bac4u): goto L_1BAC4;
    case RC_ADDR(0x0001bac8u): goto L_1BAC8;
    case RC_ADDR(0x0001baccu): goto L_1BACC;
    case RC_ADDR(0x0001baceu): goto L_1BACE;
    case RC_ADDR(0x0001bad2u): goto L_1BAD2;
    case RC_ADDR(0x0001bad6u): goto L_1BAD6;
    case RC_ADDR(0x0001bad8u): goto L_1BAD8;
    case RC_ADDR(0x0001badau): goto L_1BADA;
    case RC_ADDR(0x0001badeu): goto L_1BADE;
    case RC_ADDR(0x0001bae0u): goto L_1BAE0;
    case RC_ADDR(0x0001bae6u): goto L_1BAE6;
    case RC_ADDR(0x0001bae8u): goto L_1BAE8;
    case RC_ADDR(0x0001baeeu): goto L_1BAEE;
    case RC_ADDR(0x0001baf0u): goto L_1BAF0;
    case RC_ADDR(0x0001baf4u): goto L_1BAF4;
    case RC_ADDR(0x0001baf6u): goto L_1BAF6;
    case RC_ADDR(0x0001bafcu): goto L_1BAFC;
    case RC_ADDR(0x0001bb00u): goto L_1BB00;
    case RC_ADDR(0x0001bb04u): goto L_1BB04;
    case RC_ADDR(0x0001bb08u): goto L_1BB08;
    case RC_ADDR(0x0001bb0cu): goto L_1BB0C;
    case RC_ADDR(0x0001bb10u): goto L_1BB10;
    case RC_ADDR(0x0001bb14u): goto L_1BB14;
    case RC_ADDR(0x0001bb1au): goto L_1BB1A;
    case RC_ADDR(0x0001bb1eu): goto L_1BB1E;
    case RC_ADDR(0x0001bb20u): goto L_1BB20;
    case RC_ADDR(0x0001bb22u): goto L_1BB22;
    case RC_ADDR(0x0001bb26u): goto L_1BB26;
    case RC_ADDR(0x0001bb2au): goto L_1BB2A;
    case RC_ADDR(0x0001bb2eu): goto L_1BB2E;
    case RC_ADDR(0x0001bb32u): goto L_1BB32;
    case RC_ADDR(0x0001bb36u): goto L_1BB36;
    case RC_ADDR(0x0001bb3au): goto L_1BB3A;
    case RC_ADDR(0x0001bb3eu): goto L_1BB3E;
    case RC_ADDR(0x0001bb40u): goto L_1BB40;
    case RC_ADDR(0x0001bb44u): goto L_1BB44;
    case RC_ADDR(0x0001bb46u): goto L_1BB46;
    case RC_ADDR(0x0001bb4au): goto L_1BB4A;
    case RC_ADDR(0x0001bb4eu): goto L_1BB4E;
    case RC_ADDR(0x0001bb52u): goto L_1BB52;
    case RC_ADDR(0x0001bb56u): goto L_1BB56;
    case RC_ADDR(0x0001bb58u): goto L_1BB58;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BA3E:
    /* 0001ba3e   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001ba3eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1BA42:
    /* 0001ba42   4  jsr (0001c384) */
    c->pc = RC_ADDR(0x0001ba42u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba46u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c384u);
    return;

L_1BA46:
    /* 0001ba46   4  jsr (0001bfc4) */
    c->pc = RC_ADDR(0x0001ba46u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba4au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bfc4u);
    return;

L_1BA4A:
    /* 0001ba4a   4  jsr (0001c496) */
    c->pc = RC_ADDR(0x0001ba4au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c496u);
    return;

L_1BA4E:
    /* 0001ba4e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba4eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA52:
    /* 0001ba52   4  clr.w (fffff28a,A4) */
    c->pc = RC_ADDR(0x0001ba52u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA56:
    /* 0001ba56   4  clr.w (227a,A4) */
    c->pc = RC_ADDR(0x0001ba56u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x227au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA5A:
    /* 0001ba5a   4  jsr (0001be80) */
    c->pc = RC_ADDR(0x0001ba5au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001be80u);
    return;

L_1BA5E:
    /* 0001ba5e   4  jsr (0001bb72) */
    c->pc = RC_ADDR(0x0001ba5eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba62u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bb72u);
    return;

L_1BA62:
    /* 0001ba62   4  clr.w (2278,A4) */
    c->pc = RC_ADDR(0x0001ba62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA66:
    /* 0001ba66   4  clr.w (2276,A4) */
    c->pc = RC_ADDR(0x0001ba66u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2276u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA6A:
    /* 0001ba6a   4  clr.w (2274,A4) */
    c->pc = RC_ADDR(0x0001ba6au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2274u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BA6E:
    /* 0001ba6e   4  jsr (0001c4d2) */
    c->pc = RC_ADDR(0x0001ba6eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba72u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c4d2u);
    return;

L_1BA72:
    /* 0001ba72   4  jsr (0001c838) */
    c->pc = RC_ADDR(0x0001ba72u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba76u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c838u);
    return;

L_1BA76:
    /* 0001ba76   4  tst.w (227a,A4) */
    c->pc = RC_ADDR(0x0001ba76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227au));
    rc_set_nzvc(c, t0, RC_W);

L_1BA7A:
    /* 0001ba7a   4  bne 0001bb2e */
    c->pc = RC_ADDR(0x0001ba7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BB2E;

L_1BA7E:
    /* 0001ba7e   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0001ba7eu);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001ba82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_1BA82:
    /* 0001ba82   4  jsr (0001c132) */
    c->pc = RC_ADDR(0x0001ba82u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001ba86u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c132u);
    return;

L_1BA86:
    /* 0001ba86   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_1BA8A:
    /* 0001ba8a   2  beq 0001ba94 */
    c->pc = RC_ADDR(0x0001ba8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BA94;

L_1BA8C:
    /* 0001ba8c   6  move.w #ffff,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0001ba8cu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x4fd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA92:
    /* 0001ba92   2  bra 0001baa2 */
    c->pc = RC_ADDR(0x0001ba92u);
    rc_step(c, m, 10);
    goto L_1BAA2;

L_1BA94:
    /* 0001ba94   6  cmpi.w #ffff,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0001ba94u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1BA9A:
    /* 0001ba9a   2  bne 0001baa2 */
    c->pc = RC_ADDR(0x0001ba9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BAA2;

L_1BA9C:
    /* 0001ba9c   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba9cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAA2:
    /* 0001baa2   4  tst.w (2274,A4) */
    c->pc = RC_ADDR(0x0001baa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_set_nzvc(c, t0, RC_W);

L_1BAA6:
    /* 0001baa6   2  beq 0001bada */
    c->pc = RC_ADDR(0x0001baa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BADA;

L_1BAA8:
    /* 0001baa8   4  move.w (2278,A4),D0 */
    c->pc = RC_ADDR(0x0001baa8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAAC:
    /* 0001baac   4  addq.w #1,(2278,A4) */
    c->pc = RC_ADDR(0x0001baacu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2278u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BAB0:
    /* 0001bab0   4  cmp.w #3c,D0 */
    c->pc = RC_ADDR(0x0001bab0u);
    rc_step(c, m, 8);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1BAB4:
    /* 0001bab4   2  bne 0001babc */
    c->pc = RC_ADDR(0x0001bab4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BABC;

L_1BAB6:
    /* 0001bab6   6  move.w #1,(227a,A4) */
    c->pc = RC_ADDR(0x0001bab6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x227au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BABC:
    /* 0001babc   6  cmpi.w #3,(2278,A4) */
    c->pc = RC_ADDR(0x0001babcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1BAC2:
    /* 0001bac2   2  bne 0001bad8 */
    c->pc = RC_ADDR(0x0001bac2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BAD8;

L_1BAC4:
    /* 0001bac4   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001bac4u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAC8:
    /* 0001bac8   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001bac8u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001baccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1BACC:
    /* 0001bacc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001baccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1BACE:
    /* 0001bace   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001baceu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAD2:
    /* 0001bad2   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001bad2u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001bad6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1BAD6:
    /* 0001bad6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001bad6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1BAD8:
    /* 0001bad8   2  bra 0001bb14 */
    c->pc = RC_ADDR(0x0001bad8u);
    rc_step(c, m, 10);
    goto L_1BB14;

L_1BADA:
    /* 0001bada   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0001badau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_1BADE:
    /* 0001bade   2  beq 0001bb14 */
    c->pc = RC_ADDR(0x0001badeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BB14;

L_1BAE0:
    /* 0001bae0   6  cmpi.w #2,(227c,A4) */
    c->pc = RC_ADDR(0x0001bae0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1BAE6:
    /* 0001bae6   2  ble 0001bb14 */
    c->pc = RC_ADDR(0x0001bae6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1BB14;

L_1BAE8:
    /* 0001bae8   6  cmpi.w #12,(227c,A4) */
    c->pc = RC_ADDR(0x0001bae8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_cmp(c, RC_W, t0, 0x00000012u);

L_1BAEE:
    /* 0001baee   2  bge 0001bb14 */
    c->pc = RC_ADDR(0x0001baeeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BB14;

L_1BAF0:
    /* 0001baf0   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001baf0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_1BAF4:
    /* 0001baf4   2  bne 0001bafc */
    c->pc = RC_ADDR(0x0001baf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BAFC;

L_1BAF6:
    /* 0001baf6   6  move.w #1,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001baf6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAFC:
    /* 0001bafc   4  move.w (ffffb02a,A4),D0 */
    c->pc = RC_ADDR(0x0001bafcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB00:
    /* 0001bb00   4  muls.w #f,D0 */
    c->pc = RC_ADDR(0x0001bb00u);
    rc_step(c, m, 42);
    t0 = 0x0000000fu;
    rc_muls(c, 0, t0);

L_1BB04:
    /* 0001bb04   4  move.w D0,(2276,A4) */
    c->pc = RC_ADDR(0x0001bb04u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2276u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB08:
    /* 0001bb08   4  move.w D0,(2274,A4) */
    c->pc = RC_ADDR(0x0001bb08u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2274u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB0C:
    /* 0001bb0c   4  clr.w (2278,A4) */
    c->pc = RC_ADDR(0x0001bb0cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2278u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BB10:
    /* 0001bb10   4  jsr (0001c174) */
    c->pc = RC_ADDR(0x0001bb10u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb14u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c174u);
    return;

L_1BB14:
    /* 0001bb14   6  move.w #1,(fffff28a,A4) */
    c->pc = RC_ADDR(0x0001bb14u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BB1A:
    /* 0001bb1a   4  tst.w (fffff28a,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0001bb1au), 12,
                RC_ADDR(0x0001bb1eu), 10, 7,
                RC_ADDR(0x0001bb20u), 10,
                (c->a[4] - 0xd76u), RC_W))
        goto L_1BB22;
    c->pc = RC_ADDR(0x0001bb1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_1BB1E:
    /* 0001bb1e   2  beq 0001bb22 */
    c->pc = RC_ADDR(0x0001bb1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BB22;

L_1BB20:
    /* 0001bb20   2  bra 0001bb1a */
    c->pc = RC_ADDR(0x0001bb20u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BB1A;

L_1BB22:
    /* 0001bb22   4  jsr (0001c4d2) */
    c->pc = RC_ADDR(0x0001bb22u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb26u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c4d2u);
    return;

L_1BB26:
    /* 0001bb26   4  jsr (0001c838) */
    c->pc = RC_ADDR(0x0001bb26u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb2au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c838u);
    return;

L_1BB2A:
    /* 0001bb2a   4  bra 0001ba76 */
    c->pc = RC_ADDR(0x0001bb2au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BA76;

L_1BB2E:
    /* 0001bb2e   4  jsr (0001cd94) */
    c->pc = RC_ADDR(0x0001bb2eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb32u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cd94u);
    return;

L_1BB32:
    /* 0001bb32   4  jsr (0001bbea) */
    c->pc = RC_ADDR(0x0001bb32u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb36u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bbeau);
    return;

L_1BB36:
    /* 0001bb36   4  jsr (0001bf26) */
    c->pc = RC_ADDR(0x0001bb36u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb3au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001bf26u);
    return;

L_1BB3A:
    /* 0001bb3a   4  tst.w (227e,A4) */
    c->pc = RC_ADDR(0x0001bb3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227eu));
    rc_set_nzvc(c, t0, RC_W);

L_1BB3E:
    /* 0001bb3e   2  bne 0001bb4a */
    c->pc = RC_ADDR(0x0001bb3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BB4A;

L_1BB40:
    /* 0001bb40   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001bb40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1BB44:
    /* 0001bb44   2  bne 0001bb4a */
    c->pc = RC_ADDR(0x0001bb44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BB4A;

L_1BB46:
    /* 0001bb46   4  jsr (0001c1c6) */
    c->pc = RC_ADDR(0x0001bb46u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb4au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c1c6u);
    return;

L_1BB4A:
    /* 0001bb4a   4  jsr (0001c230) */
    c->pc = RC_ADDR(0x0001bb4au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c230u);
    return;

L_1BB4E:
    /* 0001bb4e   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001bb4eu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001bb52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bccu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016b34u);
    return;

L_1BB52:
    /* 0001bb52   4  jsr (0001c478) */
    c->pc = RC_ADDR(0x0001bb52u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bb56u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c478u);
    return;

L_1BB56:
    /* 0001bb56   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bb56u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BB58:
    /* 0001bb58   2  rts */
    c->pc = RC_ADDR(0x0001bb58u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
