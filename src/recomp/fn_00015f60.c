/* fn_00015f60 - 102 byte(s), 33 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015f60(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00015f60u): goto L_15F60;
    case RC_ADDR(0x00015f64u): goto L_15F64;
    case RC_ADDR(0x00015f66u): goto L_15F66;
    case RC_ADDR(0x00015f6au): goto L_15F6A;
    case RC_ADDR(0x00015f6cu): goto L_15F6C;
    case RC_ADDR(0x00015f70u): goto L_15F70;
    case RC_ADDR(0x00015f72u): goto L_15F72;
    case RC_ADDR(0x00015f76u): goto L_15F76;
    case RC_ADDR(0x00015f78u): goto L_15F78;
    case RC_ADDR(0x00015f7cu): goto L_15F7C;
    case RC_ADDR(0x00015f7eu): goto L_15F7E;
    case RC_ADDR(0x00015f82u): goto L_15F82;
    case RC_ADDR(0x00015f84u): goto L_15F84;
    case RC_ADDR(0x00015f88u): goto L_15F88;
    case RC_ADDR(0x00015f8au): goto L_15F8A;
    case RC_ADDR(0x00015f8eu): goto L_15F8E;
    case RC_ADDR(0x00015f90u): goto L_15F90;
    case RC_ADDR(0x00015f94u): goto L_15F94;
    case RC_ADDR(0x00015f96u): goto L_15F96;
    case RC_ADDR(0x00015f9au): goto L_15F9A;
    case RC_ADDR(0x00015f9cu): goto L_15F9C;
    case RC_ADDR(0x00015fa0u): goto L_15FA0;
    case RC_ADDR(0x00015fa2u): goto L_15FA2;
    case RC_ADDR(0x00015fa6u): goto L_15FA6;
    case RC_ADDR(0x00015fa8u): goto L_15FA8;
    case RC_ADDR(0x00015facu): goto L_15FAC;
    case RC_ADDR(0x00015faeu): goto L_15FAE;
    case RC_ADDR(0x00015fb2u): goto L_15FB2;
    case RC_ADDR(0x00015fb4u): goto L_15FB4;
    case RC_ADDR(0x00015fb8u): goto L_15FB8;
    case RC_ADDR(0x00015fbau): goto L_15FBA;
    case RC_ADDR(0x00015fbeu): goto L_15FBE;
    case RC_ADDR(0x00015fc2u): goto L_15FC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15F60:
    /* 00015f60   4  cmpi.w #be,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f60u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_15F64:
    /* 00015f64   2  blt 00015fc2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f64u);
    if (rc_cond(c, 13)) goto L_15FC2;

L_15F66:
    /* 00015f66   4  cmpi.w #164,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f66u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000164u);

L_15F6A:
    /* 00015f6a   2  bne 00015f72 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f6au);
    if (rc_cond(c, 6)) goto L_15F72;

L_15F6C:
    /* 00015f6c   4  move.w #216,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f6cu);
    t0 = 0x00000216u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F70:
    /* 00015f70   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f70u);
    goto L_15FBE;

L_15F72:
    /* 00015f72   4  cmpi.w #165,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f72u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000165u);

L_15F76:
    /* 00015f76   2  bne 00015f7e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f76u);
    if (rc_cond(c, 6)) goto L_15F7E;

L_15F78:
    /* 00015f78   4  move.w #217,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f78u);
    t0 = 0x00000217u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F7C:
    /* 00015f7c   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f7cu);
    goto L_15FBE;

L_15F7E:
    /* 00015f7e   4  cmpi.w #176,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f7eu);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000176u);

L_15F82:
    /* 00015f82   2  bne 00015f8a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f82u);
    if (rc_cond(c, 6)) goto L_15F8A;

L_15F84:
    /* 00015f84   4  move.w #228,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f84u);
    t0 = 0x00000228u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F88:
    /* 00015f88   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f88u);
    goto L_15FBE;

L_15F8A:
    /* 00015f8a   4  cmpi.w #177,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f8au);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000177u);

L_15F8E:
    /* 00015f8e   2  bne 00015f96 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f8eu);
    if (rc_cond(c, 6)) goto L_15F96;

L_15F90:
    /* 00015f90   4  move.w #229,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f90u);
    t0 = 0x00000229u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F94:
    /* 00015f94   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f94u);
    goto L_15FBE;

L_15F96:
    /* 00015f96   4  cmpi.w #1a1,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f96u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a1u);

L_15F9A:
    /* 00015f9a   2  bne 00015fa2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f9au);
    if (rc_cond(c, 6)) goto L_15FA2;

L_15F9C:
    /* 00015f9c   4  move.w #1a6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015f9cu);
    t0 = 0x000001a6u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FA0:
    /* 00015fa0   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fa0u);
    goto L_15FBE;

L_15FA2:
    /* 00015fa2   4  cmpi.w #1a2,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fa2u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a2u);

L_15FA6:
    /* 00015fa6   2  bne 00015fae */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fa6u);
    if (rc_cond(c, 6)) goto L_15FAE;

L_15FA8:
    /* 00015fa8   4  move.w #1a7,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fa8u);
    t0 = 0x000001a7u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FAC:
    /* 00015fac   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015facu);
    goto L_15FBE;

L_15FAE:
    /* 00015fae   4  cmpi.w #1a3,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015faeu);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x000001a3u);

L_15FB2:
    /* 00015fb2   2  bne 00015fba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fb2u);
    if (rc_cond(c, 6)) goto L_15FBA;

L_15FB4:
    /* 00015fb4   4  move.w #1a8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fb4u);
    t0 = 0x000001a8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FB8:
    /* 00015fb8   2  bra 00015fbe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fb8u);
    goto L_15FBE;

L_15FBA:
    /* 00015fba   4  bsr 00015f1e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fbau);
    rc_push32(c, m, RC_ADDR(0x00015fbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f1eu);
    return;

L_15FBE:
    /* 00015fbe   4  move.w D0,(8,A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fbeu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[7] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15FC2:
    /* 00015fc2   4  jmp (000117f8) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00015fc2u);
    c->pc = RC_ADDR(0x000117f8u);
    return;

}
