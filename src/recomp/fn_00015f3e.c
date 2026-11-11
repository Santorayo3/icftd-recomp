/* fn_00015f3e - 34 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015f3e(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015f3eu): goto L_15F3E;
    case RC_ADDR(0x00015f40u): goto L_15F40;
    case RC_ADDR(0x00015f44u): goto L_15F44;
    case RC_ADDR(0x00015f48u): goto L_15F48;
    case RC_ADDR(0x00015f4au): goto L_15F4A;
    case RC_ADDR(0x00015f4eu): goto L_15F4E;
    case RC_ADDR(0x00015f50u): goto L_15F50;
    case RC_ADDR(0x00015f54u): goto L_15F54;
    case RC_ADDR(0x00015f56u): goto L_15F56;
    case RC_ADDR(0x00015f5au): goto L_15F5A;
    case RC_ADDR(0x00015f5cu): goto L_15F5C;
    case RC_ADDR(0x00015f5eu): goto L_15F5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15F3E:
    /* 00015f3e   2  clr.l D3 */
    c->pc = RC_ADDR(0x00015f3eu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_15F40:
    /* 00015f40   4  move.w (12ac,A4),D3 */
    c->pc = RC_ADDR(0x00015f40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12acu));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F44:
    /* 00015f44   4  cmpi.w #be,D3 */
    c->pc = RC_ADDR(0x00015f44u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_15F48:
    /* 00015f48   2  blt 00015f56 */
    c->pc = RC_ADDR(0x00015f48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_15F56;

L_15F4A:
    /* 00015f4a   4  divu.w #12,D3 */
    c->pc = RC_ADDR(0x00015f4au);
    rc_step(c, m, 144);
    t0 = 0x00000012u;
    rc_divu(c, m, 3, t0);

L_15F4E:
    /* 00015f4e   2  swap D3 */
    c->pc = RC_ADDR(0x00015f4eu);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_15F50:
    /* 00015f50   4  bclr #0,D3 */
    c->pc = RC_ADDR(0x00015f50u);
    rc_step(c, m, 14);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 3, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 3, RC_L, t2);

L_15F54:
    /* 00015f54   2  rts */
    c->pc = RC_ADDR(0x00015f54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_15F56:
    /* 00015f56   4  divu.w #12,D3 */
    c->pc = RC_ADDR(0x00015f56u);
    rc_step(c, m, 144);
    t0 = 0x00000012u;
    rc_divu(c, m, 3, t0);

L_15F5A:
    /* 00015f5a   2  swap D3 */
    c->pc = RC_ADDR(0x00015f5au);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_15F5C:
    /* 00015f5c   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x00015f5cu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W));

L_15F5E:
    /* 00015f5e   2  rts */
    c->pc = RC_ADDR(0x00015f5eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
