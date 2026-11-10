/* fn_00011eaa - 102 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011eaa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00011eaau: goto L_11EAA;
    case 0x00011eaeu: goto L_11EAE;
    case 0x00011eb2u: goto L_11EB2;
    case 0x00011eb8u: goto L_11EB8;
    case 0x00011ebcu: goto L_11EBC;
    case 0x00011ec0u: goto L_11EC0;
    case 0x00011ec2u: goto L_11EC2;
    case 0x00011ec6u: goto L_11EC6;
    case 0x00011ecau: goto L_11ECA;
    case 0x00011ed0u: goto L_11ED0;
    case 0x00011ed4u: goto L_11ED4;
    case 0x00011edau: goto L_11EDA;
    case 0x00011edeu: goto L_11EDE;
    case 0x00011ee2u: goto L_11EE2;
    case 0x00011ee6u: goto L_11EE6;
    case 0x00011eeau: goto L_11EEA;
    case 0x00011eeeu: goto L_11EEE;
    case 0x00011ef2u: goto L_11EF2;
    case 0x00011ef6u: goto L_11EF6;
    case 0x00011efau: goto L_11EFA;
    case 0x00011efeu: goto L_11EFE;
    case 0x00011f02u: goto L_11F02;
    case 0x00011f06u: goto L_11F06;
    case 0x00011f0au: goto L_11F0A;
    case 0x00011f0cu: goto L_11F0C;
    case 0x00011f0eu: goto L_11F0E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11EAA:
    /* 00011eaa   4  link.w A5,#0 */
    c->pc = 0x00011eaau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11EAE:
    /* 00011eae   4  move.l A4,(ffffce24,A4) */
    c->pc = 0x00011eaeu;
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31dcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EB2:
    /* 00011eb2   6  pea (00010001).l */
    c->pc = 0x00011eb2u;
    rc_push32(c, m, 0x00010001u);

L_11EB8:
    /* 00011eb8   4  pea (00000016).l */
    c->pc = 0x00011eb8u;
    rc_push32(c, m, 0x00000016u);

L_11EBC:
    /* 00011ebc   4  jsr (ffff8338,A4) */
    c->pc = 0x00011ebcu;
    /* vector 137: exec.library -198 */
    c->pc = 0x00011ec0u;
    rc_os_call(c, m, 0, -198);

L_11EC0:
    /* 00011ec0   2  addq.w #8,A7 */
    c->pc = 0x00011ec0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11EC2:
    /* 00011ec2   4  move.l D0,(e00,A4) */
    c->pc = 0x00011ec2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe00u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EC6:
    /* 00011ec6   4  movea.l (e00,A4),A0 */
    c->pc = 0x00011ec6u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_11ECA:
    /* 00011eca   6  move.b #2,(8,A0) */
    c->pc = 0x00011ecau;
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_11ED0:
    /* 00011ed0   4  movea.l (e00,A4),A0 */
    c->pc = 0x00011ed0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_11ED4:
    /* 00011ed4   6  move.b #c4,(9,A0) */
    c->pc = 0x00011ed4u;
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_11EDA:
    /* 00011eda   4  movea.l (e00,A4),A0 */
    c->pc = 0x00011edau;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[0] = t0;

L_11EDE:
    /* 00011ede   4  lea (00011f10),A1 */
    c->pc = 0x00011edeu;
    c->a[1] = 0x00011f10u;

L_11EE2:
    /* 00011ee2   4  move.l A1,(a,A0) */
    c->pc = 0x00011ee2u;
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EE6:
    /* 00011ee6   4  lea (ffffce24,A4),A0 */
    c->pc = 0x00011ee6u;
    c->a[0] = (c->a[4] - 0x31dcu);

L_11EEA:
    /* 00011eea   4  movea.l (e00,A4),A1 */
    c->pc = 0x00011eeau;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[1] = t0;

L_11EEE:
    /* 00011eee   4  move.l A0,(e,A1) */
    c->pc = 0x00011eeeu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EF2:
    /* 00011ef2   4  lea (00011e92),A0 */
    c->pc = 0x00011ef2u;
    c->a[0] = 0x00011e92u;

L_11EF6:
    /* 00011ef6   4  movea.l (e00,A4),A1 */
    c->pc = 0x00011ef6u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[1] = t0;

L_11EFA:
    /* 00011efa   4  move.l A0,(12,A1) */
    c->pc = 0x00011efau;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EFE:
    /* 00011efe   4  move.l (e00,A4),-(A7) */
    c->pc = 0x00011efeu;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F02:
    /* 00011f02   4  pea (00000005).l */
    c->pc = 0x00011f02u;
    rc_push32(c, m, 0x00000005u);

L_11F06:
    /* 00011f06   4  jsr (ffff832c,A4) */
    c->pc = 0x00011f06u;
    /* vector 135: exec.library -168 */
    c->pc = 0x00011f0au;
    rc_os_call(c, m, 0, -168);

L_11F0A:
    /* 00011f0a   2  addq.w #8,A7 */
    c->pc = 0x00011f0au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11F0C:
    /* 00011f0c   2  unlk A5 */
    c->pc = 0x00011f0cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11F0E:
    /* 00011f0e   2  rts */
    c->pc = 0x00011f0eu;
    rc_ret(c, m);
    return;

}
