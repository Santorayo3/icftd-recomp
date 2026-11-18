/* fn_0001d930 - 278 byte(s), 87 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d930(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d930u): goto L_1D930;
    case RC_ADDR(0x0001d934u): goto L_1D934;
    case RC_ADDR(0x0001d938u): goto L_1D938;
    case RC_ADDR(0x0001d93cu): goto L_1D93C;
    case RC_ADDR(0x0001d940u): goto L_1D940;
    case RC_ADDR(0x0001d944u): goto L_1D944;
    case RC_ADDR(0x0001d946u): goto L_1D946;
    case RC_ADDR(0x0001d948u): goto L_1D948;
    case RC_ADDR(0x0001d94cu): goto L_1D94C;
    case RC_ADDR(0x0001d94eu): goto L_1D94E;
    case RC_ADDR(0x0001d952u): goto L_1D952;
    case RC_ADDR(0x0001d954u): goto L_1D954;
    case RC_ADDR(0x0001d956u): goto L_1D956;
    case RC_ADDR(0x0001d958u): goto L_1D958;
    case RC_ADDR(0x0001d95au): goto L_1D95A;
    case RC_ADDR(0x0001d95eu): goto L_1D95E;
    case RC_ADDR(0x0001d962u): goto L_1D962;
    case RC_ADDR(0x0001d966u): goto L_1D966;
    case RC_ADDR(0x0001d96au): goto L_1D96A;
    case RC_ADDR(0x0001d96cu): goto L_1D96C;
    case RC_ADDR(0x0001d970u): goto L_1D970;
    case RC_ADDR(0x0001d974u): goto L_1D974;
    case RC_ADDR(0x0001d976u): goto L_1D976;
    case RC_ADDR(0x0001d97au): goto L_1D97A;
    case RC_ADDR(0x0001d97cu): goto L_1D97C;
    case RC_ADDR(0x0001d980u): goto L_1D980;
    case RC_ADDR(0x0001d984u): goto L_1D984;
    case RC_ADDR(0x0001d988u): goto L_1D988;
    case RC_ADDR(0x0001d98au): goto L_1D98A;
    case RC_ADDR(0x0001d98cu): goto L_1D98C;
    case RC_ADDR(0x0001d990u): goto L_1D990;
    case RC_ADDR(0x0001d992u): goto L_1D992;
    case RC_ADDR(0x0001d996u): goto L_1D996;
    case RC_ADDR(0x0001d99au): goto L_1D99A;
    case RC_ADDR(0x0001d99cu): goto L_1D99C;
    case RC_ADDR(0x0001d9a0u): goto L_1D9A0;
    case RC_ADDR(0x0001d9a4u): goto L_1D9A4;
    case RC_ADDR(0x0001d9a8u): goto L_1D9A8;
    case RC_ADDR(0x0001d9aau): goto L_1D9AA;
    case RC_ADDR(0x0001d9aeu): goto L_1D9AE;
    case RC_ADDR(0x0001d9b0u): goto L_1D9B0;
    case RC_ADDR(0x0001d9b4u): goto L_1D9B4;
    case RC_ADDR(0x0001d9b6u): goto L_1D9B6;
    case RC_ADDR(0x0001d9b8u): goto L_1D9B8;
    case RC_ADDR(0x0001d9bcu): goto L_1D9BC;
    case RC_ADDR(0x0001d9c0u): goto L_1D9C0;
    case RC_ADDR(0x0001d9c4u): goto L_1D9C4;
    case RC_ADDR(0x0001d9c8u): goto L_1D9C8;
    case RC_ADDR(0x0001d9cau): goto L_1D9CA;
    case RC_ADDR(0x0001d9ceu): goto L_1D9CE;
    case RC_ADDR(0x0001d9d0u): goto L_1D9D0;
    case RC_ADDR(0x0001d9d4u): goto L_1D9D4;
    case RC_ADDR(0x0001d9d8u): goto L_1D9D8;
    case RC_ADDR(0x0001d9dau): goto L_1D9DA;
    case RC_ADDR(0x0001d9deu): goto L_1D9DE;
    case RC_ADDR(0x0001d9e0u): goto L_1D9E0;
    case RC_ADDR(0x0001d9e4u): goto L_1D9E4;
    case RC_ADDR(0x0001d9e6u): goto L_1D9E6;
    case RC_ADDR(0x0001d9eau): goto L_1D9EA;
    case RC_ADDR(0x0001d9ecu): goto L_1D9EC;
    case RC_ADDR(0x0001d9eeu): goto L_1D9EE;
    case RC_ADDR(0x0001d9f0u): goto L_1D9F0;
    case RC_ADDR(0x0001d9f4u): goto L_1D9F4;
    case RC_ADDR(0x0001d9f8u): goto L_1D9F8;
    case RC_ADDR(0x0001d9fcu): goto L_1D9FC;
    case RC_ADDR(0x0001da00u): goto L_1DA00;
    case RC_ADDR(0x0001da02u): goto L_1DA02;
    case RC_ADDR(0x0001da06u): goto L_1DA06;
    case RC_ADDR(0x0001da08u): goto L_1DA08;
    case RC_ADDR(0x0001da0cu): goto L_1DA0C;
    case RC_ADDR(0x0001da10u): goto L_1DA10;
    case RC_ADDR(0x0001da12u): goto L_1DA12;
    case RC_ADDR(0x0001da16u): goto L_1DA16;
    case RC_ADDR(0x0001da18u): goto L_1DA18;
    case RC_ADDR(0x0001da1cu): goto L_1DA1C;
    case RC_ADDR(0x0001da22u): goto L_1DA22;
    case RC_ADDR(0x0001da26u): goto L_1DA26;
    case RC_ADDR(0x0001da2au): goto L_1DA2A;
    case RC_ADDR(0x0001da2eu): goto L_1DA2E;
    case RC_ADDR(0x0001da30u): goto L_1DA30;
    case RC_ADDR(0x0001da32u): goto L_1DA32;
    case RC_ADDR(0x0001da36u): goto L_1DA36;
    case RC_ADDR(0x0001da3au): goto L_1DA3A;
    case RC_ADDR(0x0001da3cu): goto L_1DA3C;
    case RC_ADDR(0x0001da40u): goto L_1DA40;
    case RC_ADDR(0x0001da42u): goto L_1DA42;
    case RC_ADDR(0x0001da44u): goto L_1DA44;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D930:
    /* 0001d930   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001d930u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1D934:
    /* 0001d934   4  move.l (2c3e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d934u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c3eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D938:
    /* 0001d938   4  move.w (7b0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d938u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D93C:
    /* 0001d93c   4  move.w (7ae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d93cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D940:
    /* 0001d940   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001d940u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001d944u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1D944:
    /* 0001d944   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d944u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D946:
    /* 0001d946   2  moveq #d,D0 */
    c->pc = RC_ADDR(0x0001d946u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000du;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D948:
    /* 0001d948   4  move.w (7a8,A4),D1 */
    c->pc = RC_ADDR(0x0001d948u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D94C:
    /* 0001d94c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001d94cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1D94E:
    /* 0001d94e   4  divs.w #3,D1 */
    c->pc = RC_ADDR(0x0001d94eu);
    rc_step(c, m, 162);
    t0 = 0x00000003u;
    rc_divs(c, m, 1, t0);

L_1D952:
    /* 0001d952   2  swap D1 */
    c->pc = RC_ADDR(0x0001d952u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D954:
    /* 0001d954   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0001d954u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D956:
    /* 0001d956   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d956u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D958:
    /* 0001d958   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d958u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D95A:
    /* 0001d95a   4  lea (2c16,A4),A0 */
    c->pc = RC_ADDR(0x0001d95au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2c16u);

L_1D95E:
    /* 0001d95e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001d95eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D962:
    /* 0001d962   4  move.w (7b0,A4),D0 */
    c->pc = RC_ADDR(0x0001d962u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D966:
    /* 0001d966   4  add.w #1b,D0 */
    c->pc = RC_ADDR(0x0001d966u);
    rc_step(c, m, 10);
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D96A:
    /* 0001d96a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d96au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D96C:
    /* 0001d96c   4  move.w (7ae,A4),D0 */
    c->pc = RC_ADDR(0x0001d96cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D970:
    /* 0001d970   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0001d970u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D974:
    /* 0001d974   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d974u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D976:
    /* 0001d976   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001d976u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001d97au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1D97A:
    /* 0001d97a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d97au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D97C:
    /* 0001d97c   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d97cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D980:
    /* 0001d980   4  move.w (7a8,A4),D0 */
    c->pc = RC_ADDR(0x0001d980u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D984:
    /* 0001d984   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d984u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D988:
    /* 0001d988   2  subq.w #4,D0 */
    c->pc = RC_ADDR(0x0001d988u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D98A:
    /* 0001d98a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d98au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D98C:
    /* 0001d98c   4  divs.w #3c,D0 */
    c->pc = RC_ADDR(0x0001d98cu);
    rc_step(c, m, 162);
    t0 = 0x0000003cu;
    rc_divs(c, m, 0, t0);

L_1D990:
    /* 0001d990   2  swap D0 */
    c->pc = RC_ADDR(0x0001d990u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D992:
    /* 0001d992   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d992u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D996:
    /* 0001d996   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d996u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D99A:
    /* 0001d99a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d99au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D99C:
    /* 0001d99c   4  divs.w #5,D0 */
    c->pc = RC_ADDR(0x0001d99cu);
    rc_step(c, m, 162);
    t0 = 0x00000005u;
    rc_divs(c, m, 0, t0);

L_1D9A0:
    /* 0001d9a0   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001d9a0u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1D9A4:
    /* 0001d9a4   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d9a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D9A8:
    /* 0001d9a8   2  bne 0001da18 */
    c->pc = RC_ADDR(0x0001d9a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DA18;

L_1D9AA:
    /* 0001d9aa   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d9aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9AE:
    /* 0001d9ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d9aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D9B0:
    /* 0001d9b0   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x0001d9b0u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_1D9B4:
    /* 0001d9b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d9b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D9B6:
    /* 0001d9b6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d9b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D9B8:
    /* 0001d9b8   4  lea (2c16,A4),A0 */
    c->pc = RC_ADDR(0x0001d9b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2c16u);

L_1D9BC:
    /* 0001d9bc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001d9bcu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9C0:
    /* 0001d9c0   4  move.w (7b0,A4),D0 */
    c->pc = RC_ADDR(0x0001d9c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9C4:
    /* 0001d9c4   4  add.w #a,D0 */
    c->pc = RC_ADDR(0x0001d9c4u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D9C8:
    /* 0001d9c8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d9c8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9CA:
    /* 0001d9ca   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d9cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9CE:
    /* 0001d9ce   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001d9ceu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1D9D0:
    /* 0001d9d0   4  add.w (7ae,A4),D0 */
    c->pc = RC_ADDR(0x0001d9d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D9D4:
    /* 0001d9d4   4  add.w #1f,D0 */
    c->pc = RC_ADDR(0x0001d9d4u);
    rc_step(c, m, 10);
    t0 = 0x0000001fu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D9D8:
    /* 0001d9d8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001d9d8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9DA:
    /* 0001d9da   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001d9dau);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001d9deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1D9DE:
    /* 0001d9de   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d9deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D9E0:
    /* 0001d9e0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d9e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9E4:
    /* 0001d9e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d9e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D9E6:
    /* 0001d9e6   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x0001d9e6u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_1D9EA:
    /* 0001d9ea   2  swap D0 */
    c->pc = RC_ADDR(0x0001d9eau);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D9EC:
    /* 0001d9ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d9ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D9EE:
    /* 0001d9ee   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d9eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D9F0:
    /* 0001d9f0   4  lea (2c16,A4),A0 */
    c->pc = RC_ADDR(0x0001d9f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2c16u);

L_1D9F4:
    /* 0001d9f4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001d9f4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D9F8:
    /* 0001d9f8   4  move.w (7b0,A4),D0 */
    c->pc = RC_ADDR(0x0001d9f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D9FC:
    /* 0001d9fc   4  add.w #a,D0 */
    c->pc = RC_ADDR(0x0001d9fcu);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA00:
    /* 0001da00   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001da00u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA02:
    /* 0001da02   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001da02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA06:
    /* 0001da06   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001da06u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1DA08:
    /* 0001da08   4  add.w (7ae,A4),D0 */
    c->pc = RC_ADDR(0x0001da08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA0C:
    /* 0001da0c   4  add.w #23,D0 */
    c->pc = RC_ADDR(0x0001da0cu);
    rc_step(c, m, 10);
    t0 = 0x00000023u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA10:
    /* 0001da10   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001da10u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA12:
    /* 0001da12   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001da12u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001da16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1DA16:
    /* 0001da16   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001da16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DA18:
    /* 0001da18   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001da18u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DA1C:
    /* 0001da1c   6  cmpi.w #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001da1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1DA22:
    /* 0001da22   4  ble 0001d980 */
    c->pc = RC_ADDR(0x0001da22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) { rc_tick(); goto L_1D980; }

L_1DA26:
    /* 0001da26   4  move.l (2c4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001da26u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DA2A:
    /* 0001da2a   4  move.w (7b0,A4),D0 */
    c->pc = RC_ADDR(0x0001da2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7b0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA2E:
    /* 0001da2e   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x0001da2eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA30:
    /* 0001da30   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001da30u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA32:
    /* 0001da32   4  move.w (7ae,A4),D0 */
    c->pc = RC_ADDR(0x0001da32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7aeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA36:
    /* 0001da36   4  add.w #18,D0 */
    c->pc = RC_ADDR(0x0001da36u);
    rc_step(c, m, 10);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA3A:
    /* 0001da3a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001da3au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA3C:
    /* 0001da3c   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001da3cu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001da40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1DA40:
    /* 0001da40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001da40u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DA42:
    /* 0001da42   2  unlk A5 */
    c->pc = RC_ADDR(0x0001da42u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DA44:
    /* 0001da44   2  rts */
    c->pc = RC_ADDR(0x0001da44u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
