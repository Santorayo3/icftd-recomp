/* fn_0001cd94 - 40 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001cd94(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cd94u): goto L_1CD94;
    case RC_ADDR(0x0001cd98u): goto L_1CD98;
    case RC_ADDR(0x0001cd9cu): goto L_1CD9C;
    case RC_ADDR(0x0001cd9eu): goto L_1CD9E;
    case RC_ADDR(0x0001cda2u): goto L_1CDA2;
    case RC_ADDR(0x0001cda6u): goto L_1CDA6;
    case RC_ADDR(0x0001cda8u): goto L_1CDA8;
    case RC_ADDR(0x0001cdacu): goto L_1CDAC;
    case RC_ADDR(0x0001cdaeu): goto L_1CDAE;
    case RC_ADDR(0x0001cdb2u): goto L_1CDB2;
    case RC_ADDR(0x0001cdb6u): goto L_1CDB6;
    case RC_ADDR(0x0001cdb8u): goto L_1CDB8;
    case RC_ADDR(0x0001cdbau): goto L_1CDBA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CD94:
    /* 0001cd94   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cd94u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CD98:
    /* 0001cd98   4  tst.w (227e,A4) */
    c->pc = RC_ADDR(0x0001cd98u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227eu));
    rc_set_nzvc(c, t0, RC_W);

L_1CD9C:
    /* 0001cd9c   2  beq 0001cda8 */
    c->pc = RC_ADDR(0x0001cd9cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CDA8;

L_1CD9E:
    /* 0001cd9e   4  pea (0001cdbc) */
    c->pc = RC_ADDR(0x0001cd9eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001cdbcu));

L_1CDA2:
    /* 0001cda2   4  jsr (0001cf48) */
    c->pc = RC_ADDR(0x0001cda2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001cda6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cf48u);
    return;

L_1CDA6:
    /* 0001cda6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001cda6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1CDA8:
    /* 0001cda8   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001cda8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1CDAC:
    /* 0001cdac   2  beq 0001cdb8 */
    c->pc = RC_ADDR(0x0001cdacu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1CDB8;

L_1CDAE:
    /* 0001cdae   4  pea (0001ce65) */
    c->pc = RC_ADDR(0x0001cdaeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001ce65u));

L_1CDB2:
    /* 0001cdb2   4  jsr (0001cf48) */
    c->pc = RC_ADDR(0x0001cdb2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001cdb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001cf48u);
    return;

L_1CDB6:
    /* 0001cdb6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001cdb6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1CDB8:
    /* 0001cdb8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cdb8u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CDBA:
    /* 0001cdba   2  rts */
    c->pc = RC_ADDR(0x0001cdbau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
