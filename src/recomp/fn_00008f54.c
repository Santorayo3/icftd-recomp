/* fn_00008f54 - 64 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008f54(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00008f54u): goto L_8F54;
    case RC_ADDR(0x00008f58u): goto L_8F58;
    case RC_ADDR(0x00008f5cu): goto L_8F5C;
    case RC_ADDR(0x00008f5eu): goto L_8F5E;
    case RC_ADDR(0x00008f64u): goto L_8F64;
    case RC_ADDR(0x00008f66u): goto L_8F66;
    case RC_ADDR(0x00008f6au): goto L_8F6A;
    case RC_ADDR(0x00008f6eu): goto L_8F6E;
    case RC_ADDR(0x00008f70u): goto L_8F70;
    case RC_ADDR(0x00008f74u): goto L_8F74;
    case RC_ADDR(0x00008f78u): goto L_8F78;
    case RC_ADDR(0x00008f7cu): goto L_8F7C;
    case RC_ADDR(0x00008f80u): goto L_8F80;
    case RC_ADDR(0x00008f84u): goto L_8F84;
    case RC_ADDR(0x00008f86u): goto L_8F86;
    case RC_ADDR(0x00008f8au): goto L_8F8A;
    case RC_ADDR(0x00008f90u): goto L_8F90;
    case RC_ADDR(0x00008f92u): goto L_8F92;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8F54:
    /* 00008f54   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00008f54u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_8F58:
    /* 00008f58   4  tst.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008f58u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_set_nzvc(c, t0, RC_W);

L_8F5C:
    /* 00008f5c   2  beq 00008f90 */
    c->pc = RC_ADDR(0x00008f5cu);
    if (rc_cond(c, 7)) goto L_8F90;

L_8F5E:
    /* 00008f5e   6  cmpi.w #4,(fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008f5eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_8F64:
    /* 00008f64   2  blt 00008f70 */
    c->pc = RC_ADDR(0x00008f64u);
    if (rc_cond(c, 13)) goto L_8F70;

L_8F66:
    /* 00008f66   4  lea (00008f94),A0 */
    c->pc = RC_ADDR(0x00008f66u);
    c->a[0] = RC_ADDR(0x00008f94u);

L_8F6A:
    /* 00008f6a   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008f6au);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F6E:
    /* 00008f6e   2  bra 00008f78 */
    c->pc = RC_ADDR(0x00008f6eu);
    goto L_8F78;

L_8F70:
    /* 00008f70   4  lea (00008fd2),A0 */
    c->pc = RC_ADDR(0x00008f70u);
    c->a[0] = RC_ADDR(0x00008fd2u);

L_8F74:
    /* 00008f74   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008f74u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F78:
    /* 00008f78   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00008f78u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F7C:
    /* 00008f7c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00008f7cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F80:
    /* 00008f80   4  jsr (00002218) */
    c->pc = RC_ADDR(0x00008f80u);
    rc_push32(c, m, RC_ADDR(0x00008f84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00002218u);
    return;

L_8F84:
    /* 00008f84   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00008f84u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8F86:
    /* 00008f86   4  clr.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008f86u);
    rc_wr16(c, m, (c->a[4] - 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8F8A:
    /* 00008f8a   6  move.w #1,(fffff0fe,A4) */
    c->pc = RC_ADDR(0x00008f8au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xf02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8F90:
    /* 00008f90   2  unlk A5 */
    c->pc = RC_ADDR(0x00008f90u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8F92:
    /* 00008f92   2  rts */
    c->pc = RC_ADDR(0x00008f92u);
    rc_ret(c, m);
    return;

}
