/* fn_00008ab4 - 60 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008ab4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00008ab4u): goto L_8AB4;
    case RC_ADDR(0x00008ab8u): goto L_8AB8;
    case RC_ADDR(0x00008abcu): goto L_8ABC;
    case RC_ADDR(0x00008ac0u): goto L_8AC0;
    case RC_ADDR(0x00008ac4u): goto L_8AC4;
    case RC_ADDR(0x00008ac6u): goto L_8AC6;
    case RC_ADDR(0x00008acau): goto L_8ACA;
    case RC_ADDR(0x00008aceu): goto L_8ACE;
    case RC_ADDR(0x00008ad2u): goto L_8AD2;
    case RC_ADDR(0x00008ad4u): goto L_8AD4;
    case RC_ADDR(0x00008adau): goto L_8ADA;
    case RC_ADDR(0x00008adcu): goto L_8ADC;
    case RC_ADDR(0x00008ae0u): goto L_8AE0;
    case RC_ADDR(0x00008ae2u): goto L_8AE2;
    case RC_ADDR(0x00008ae6u): goto L_8AE6;
    case RC_ADDR(0x00008ae8u): goto L_8AE8;
    case RC_ADDR(0x00008aecu): goto L_8AEC;
    case RC_ADDR(0x00008aeeu): goto L_8AEE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8AB4:
    /* 00008ab4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00008ab4u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8AB8:
    /* 00008ab8   4  move.l (27a,A4),-(A7) */
    c->pc = RC_ADDR(0x00008ab8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x27au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8ABC:
    /* 00008abc   4  move.l (26e,A4),-(A7) */
    c->pc = RC_ADDR(0x00008abcu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8AC0:
    /* 00008ac0   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00008ac0u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00008ac4u);
    rc_os_call(c, m, 0, -210);

L_8AC4:
    /* 00008ac4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00008ac4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8AC6:
    /* 00008ac6   4  move.l (27e,A4),-(A7) */
    c->pc = RC_ADDR(0x00008ac6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x27eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8ACA:
    /* 00008aca   4  move.l (272,A4),-(A7) */
    c->pc = RC_ADDR(0x00008acau);
    t0 = rc_rd32(c, m, (c->a[4] + 0x272u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8ACE:
    /* 00008ace   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00008aceu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00008ad2u);
    rc_os_call(c, m, 0, -210);

L_8AD2:
    /* 00008ad2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00008ad2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8AD4:
    /* 00008ad4   6  cmpi.w #6,(ffff84f8,A4) */
    c->pc = RC_ADDR(0x00008ad4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b08u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_8ADA:
    /* 00008ada   2  ble 00008aec */
    c->pc = RC_ADDR(0x00008adau);
    if (rc_cond(c, 15)) goto L_8AEC;

L_8ADC:
    /* 00008adc   4  tst.w (fffffec8,A4) */
    c->pc = RC_ADDR(0x00008adcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x138u));
    rc_set_nzvc(c, t0, RC_W);

L_8AE0:
    /* 00008ae0   2  beq 00008aec */
    c->pc = RC_ADDR(0x00008ae0u);
    if (rc_cond(c, 7)) goto L_8AEC;

L_8AE2:
    /* 00008ae2   4  tst.w (fffffeca,A4) */
    c->pc = RC_ADDR(0x00008ae2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x136u));
    rc_set_nzvc(c, t0, RC_W);

L_8AE6:
    /* 00008ae6   2  bne 00008aec */
    c->pc = RC_ADDR(0x00008ae6u);
    if (rc_cond(c, 6)) goto L_8AEC;

L_8AE8:
    /* 00008ae8   4  subq.w #2,(ffff84f8,A4) */
    c->pc = RC_ADDR(0x00008ae8u);
    t3 = (c->a[4] - 0x7b08u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8AEC:
    /* 00008aec   2  unlk A5 */
    c->pc = RC_ADDR(0x00008aecu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8AEE:
    /* 00008aee   2  rts */
    c->pc = RC_ADDR(0x00008aeeu);
    rc_ret(c, m);
    return;

}
