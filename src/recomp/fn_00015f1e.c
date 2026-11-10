/* fn_00015f1e - 32 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015f1e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00015f1eu: goto L_15F1E;
    case 0x00015f20u: goto L_15F20;
    case 0x00015f24u: goto L_15F24;
    case 0x00015f2au: goto L_15F2A;
    case 0x00015f2eu: goto L_15F2E;
    case 0x00015f30u: goto L_15F30;
    case 0x00015f32u: goto L_15F32;
    case 0x00015f36u: goto L_15F36;
    case 0x00015f3au: goto L_15F3A;
    case 0x00015f3cu: goto L_15F3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15F1E:
    /* 00015f1e   2  move.l A0,-(A7) */
    c->pc = 0x00015f1eu;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15F20:
    /* 00015f20   4  jsr (00016e8e) */
    c->pc = 0x00015f20u;
    rc_push32(c, m, 0x00015f24u);
    rc_depth++;
    c->pc = 0x00016e8eu;
    return;

L_15F24:
    /* 00015f24   6  andi.l #ffff,D0 */
    c->pc = 0x00015f24u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15F2A:
    /* 00015f2a   4  divu.w #f,D0 */
    c->pc = 0x00015f2au;
    t0 = 0x0000000fu;
    rc_divu(c, m, 0, t0);

L_15F2E:
    /* 00015f2e   2  swap D0 */
    c->pc = 0x00015f2eu;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15F30:
    /* 00015f30   2  lsl.w #1,D0 */
    c->pc = 0x00015f30u;
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15F32:
    /* 00015f32   4  lea (ffffb30a,A4),A0 */
    c->pc = 0x00015f32u;
    c->a[0] = (c->a[4] - 0x4cf6u);

L_15F36:
    /* 00015f36   4  move.w (0,A0,D0.w),D0 */
    c->pc = 0x00015f36u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F3A:
    /* 00015f3a   2  movea.l (A7)+,A0 */
    c->pc = 0x00015f3au;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_15F3C:
    /* 00015f3c   2  rts */
    c->pc = 0x00015f3cu;
    rc_ret(c, m);
    return;

}
