/* fn_0001e036 - 282 byte(s), 75 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e036(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e036u): goto L_1E036;
    case RC_ADDR(0x0001e03au): goto L_1E03A;
    case RC_ADDR(0x0001e03eu): goto L_1E03E;
    case RC_ADDR(0x0001e042u): goto L_1E042;
    case RC_ADDR(0x0001e044u): goto L_1E044;
    case RC_ADDR(0x0001e048u): goto L_1E048;
    case RC_ADDR(0x0001e04cu): goto L_1E04C;
    case RC_ADDR(0x0001e04eu): goto L_1E04E;
    case RC_ADDR(0x0001e052u): goto L_1E052;
    case RC_ADDR(0x0001e056u): goto L_1E056;
    case RC_ADDR(0x0001e058u): goto L_1E058;
    case RC_ADDR(0x0001e05cu): goto L_1E05C;
    case RC_ADDR(0x0001e060u): goto L_1E060;
    case RC_ADDR(0x0001e064u): goto L_1E064;
    case RC_ADDR(0x0001e068u): goto L_1E068;
    case RC_ADDR(0x0001e06cu): goto L_1E06C;
    case RC_ADDR(0x0001e06eu): goto L_1E06E;
    case RC_ADDR(0x0001e072u): goto L_1E072;
    case RC_ADDR(0x0001e076u): goto L_1E076;
    case RC_ADDR(0x0001e07au): goto L_1E07A;
    case RC_ADDR(0x0001e07eu): goto L_1E07E;
    case RC_ADDR(0x0001e082u): goto L_1E082;
    case RC_ADDR(0x0001e084u): goto L_1E084;
    case RC_ADDR(0x0001e088u): goto L_1E088;
    case RC_ADDR(0x0001e08cu): goto L_1E08C;
    case RC_ADDR(0x0001e090u): goto L_1E090;
    case RC_ADDR(0x0001e094u): goto L_1E094;
    case RC_ADDR(0x0001e098u): goto L_1E098;
    case RC_ADDR(0x0001e09au): goto L_1E09A;
    case RC_ADDR(0x0001e09eu): goto L_1E09E;
    case RC_ADDR(0x0001e0a2u): goto L_1E0A2;
    case RC_ADDR(0x0001e0a6u): goto L_1E0A6;
    case RC_ADDR(0x0001e0aau): goto L_1E0AA;
    case RC_ADDR(0x0001e0aeu): goto L_1E0AE;
    case RC_ADDR(0x0001e0b2u): goto L_1E0B2;
    case RC_ADDR(0x0001e0b6u): goto L_1E0B6;
    case RC_ADDR(0x0001e0bau): goto L_1E0BA;
    case RC_ADDR(0x0001e0beu): goto L_1E0BE;
    case RC_ADDR(0x0001e0c2u): goto L_1E0C2;
    case RC_ADDR(0x0001e0c6u): goto L_1E0C6;
    case RC_ADDR(0x0001e0cau): goto L_1E0CA;
    case RC_ADDR(0x0001e0ceu): goto L_1E0CE;
    case RC_ADDR(0x0001e0d2u): goto L_1E0D2;
    case RC_ADDR(0x0001e0d6u): goto L_1E0D6;
    case RC_ADDR(0x0001e0dau): goto L_1E0DA;
    case RC_ADDR(0x0001e0deu): goto L_1E0DE;
    case RC_ADDR(0x0001e0e2u): goto L_1E0E2;
    case RC_ADDR(0x0001e0e6u): goto L_1E0E6;
    case RC_ADDR(0x0001e0eau): goto L_1E0EA;
    case RC_ADDR(0x0001e0eeu): goto L_1E0EE;
    case RC_ADDR(0x0001e0f2u): goto L_1E0F2;
    case RC_ADDR(0x0001e0f6u): goto L_1E0F6;
    case RC_ADDR(0x0001e0fau): goto L_1E0FA;
    case RC_ADDR(0x0001e0feu): goto L_1E0FE;
    case RC_ADDR(0x0001e102u): goto L_1E102;
    case RC_ADDR(0x0001e106u): goto L_1E106;
    case RC_ADDR(0x0001e10au): goto L_1E10A;
    case RC_ADDR(0x0001e10eu): goto L_1E10E;
    case RC_ADDR(0x0001e112u): goto L_1E112;
    case RC_ADDR(0x0001e116u): goto L_1E116;
    case RC_ADDR(0x0001e11au): goto L_1E11A;
    case RC_ADDR(0x0001e11cu): goto L_1E11C;
    case RC_ADDR(0x0001e120u): goto L_1E120;
    case RC_ADDR(0x0001e124u): goto L_1E124;
    case RC_ADDR(0x0001e128u): goto L_1E128;
    case RC_ADDR(0x0001e12cu): goto L_1E12C;
    case RC_ADDR(0x0001e130u): goto L_1E130;
    case RC_ADDR(0x0001e134u): goto L_1E134;
    case RC_ADDR(0x0001e138u): goto L_1E138;
    case RC_ADDR(0x0001e13cu): goto L_1E13C;
    case RC_ADDR(0x0001e140u): goto L_1E140;
    case RC_ADDR(0x0001e144u): goto L_1E144;
    case RC_ADDR(0x0001e148u): goto L_1E148;
    case RC_ADDR(0x0001e14cu): goto L_1E14C;
    case RC_ADDR(0x0001e14eu): goto L_1E14E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E036:
    /* 0001e036   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e036u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E03A:
    /* 0001e03a   4  pea (0001e150) */
    c->pc = RC_ADDR(0x0001e03au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e150u));

L_1E03E:
    /* 0001e03e   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0001e03eu);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0001e042u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_1E042:
    /* 0001e042   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e042u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E044:
    /* 0001e044   4  pea (0001e15e) */
    c->pc = RC_ADDR(0x0001e044u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e15eu));

L_1E048:
    /* 0001e048   4  jsr (00018400) */
    c->pc = RC_ADDR(0x0001e048u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e04cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00018400u);
    return;

L_1E04C:
    /* 0001e04c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e04cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E04E:
    /* 0001e04e   4  move.l D0,(2db6,A4) */
    c->pc = RC_ADDR(0x0001e04eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2db6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E052:
    /* 0001e052   4  pea (2d72,A4) */
    c->pc = RC_ADDR(0x0001e052u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d72u));

L_1E056:
    /* 0001e056   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e056u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E058:
    /* 0001e058   4  pea (0001e163) */
    c->pc = RC_ADDR(0x0001e058u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e163u));

L_1E05C:
    /* 0001e05c   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001e05cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e060u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_1E060:
    /* 0001e060   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e060u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E064:
    /* 0001e064   4  move.l D0,(2dba,A4) */
    c->pc = RC_ADDR(0x0001e064u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2dbau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E068:
    /* 0001e068   4  pea (2d32,A4) */
    c->pc = RC_ADDR(0x0001e068u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d32u));

L_1E06C:
    /* 0001e06c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e06cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E06E:
    /* 0001e06e   4  pea (0001e168) */
    c->pc = RC_ADDR(0x0001e06eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e168u));

L_1E072:
    /* 0001e072   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001e072u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e076u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_1E076:
    /* 0001e076   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e076u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E07A:
    /* 0001e07a   4  move.l D0,(2cc4,A4) */
    c->pc = RC_ADDR(0x0001e07au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E07E:
    /* 0001e07e   4  pea (2d32,A4) */
    c->pc = RC_ADDR(0x0001e07eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2d32u));

L_1E082:
    /* 0001e082   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e082u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E084:
    /* 0001e084   4  pea (0001e16e) */
    c->pc = RC_ADDR(0x0001e084u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e16eu));

L_1E088:
    /* 0001e088   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001e088u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e08cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_1E08C:
    /* 0001e08c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e08cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E090:
    /* 0001e090   4  move.l D0,(2cc0,A4) */
    c->pc = RC_ADDR(0x0001e090u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E094:
    /* 0001e094   4  pea (2cf2,A4) */
    c->pc = RC_ADDR(0x0001e094u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2cf2u));

L_1E098:
    /* 0001e098   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001e098u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E09A:
    /* 0001e09a   4  pea (0001e173) */
    c->pc = RC_ADDR(0x0001e09au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e173u));

L_1E09E:
    /* 0001e09e   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001e09eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e0a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_1E0A2:
    /* 0001e0a2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e0a2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E0A6:
    /* 0001e0a6   4  move.l D0,(2db2,A4) */
    c->pc = RC_ADDR(0x0001e0a6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2db2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0AA:
    /* 0001e0aa   4  jsr (0001e86e) */
    c->pc = RC_ADDR(0x0001e0aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e0aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e86eu);
    return;

L_1E0AE:
    /* 0001e0ae   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0001e0aeu);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0001e0b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_1E0B2:
    /* 0001e0b2   4  jsr (0001e2d8) */
    c->pc = RC_ADDR(0x0001e0b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e0b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e2d8u);
    return;

L_1E0B6:
    /* 0001e0b6   4  jsr (0001e3a4) */
    c->pc = RC_ADDR(0x0001e0b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e0bau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e3a4u);
    return;

L_1E0BA:
    /* 0001e0ba   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001e0bau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E0BE:
    /* 0001e0be   4  pea (0001e184) */
    c->pc = RC_ADDR(0x0001e0beu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e184u));

L_1E0C2:
    /* 0001e0c2   4  pea (0001e178) */
    c->pc = RC_ADDR(0x0001e0c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e178u));

L_1E0C6:
    /* 0001e0c6   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001e0c6u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001e0cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1E0CA:
    /* 0001e0ca   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001e0cau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1E0CE:
    /* 0001e0ce   4  pea (2dd4,A4) */
    c->pc = RC_ADDR(0x0001e0ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dd4u));

L_1E0D2:
    /* 0001e0d2   4  pea (2dce,A4) */
    c->pc = RC_ADDR(0x0001e0d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dceu));

L_1E0D6:
    /* 0001e0d6   4  pea (0001e18d) */
    c->pc = RC_ADDR(0x0001e0d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e18du));

L_1E0DA:
    /* 0001e0da   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001e0dau);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001e0deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1E0DE:
    /* 0001e0de   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e0deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E0E2:
    /* 0001e0e2   4  move.l D0,(2dc2,A4) */
    c->pc = RC_ADDR(0x0001e0e2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2dc2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0E6:
    /* 0001e0e6   4  pea (2dd8,A4) */
    c->pc = RC_ADDR(0x0001e0e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dd8u));

L_1E0EA:
    /* 0001e0ea   4  pea (2dd0,A4) */
    c->pc = RC_ADDR(0x0001e0eau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dd0u));

L_1E0EE:
    /* 0001e0ee   4  pea (0001e196) */
    c->pc = RC_ADDR(0x0001e0eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e196u));

L_1E0F2:
    /* 0001e0f2   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001e0f2u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001e0f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1E0F6:
    /* 0001e0f6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e0f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E0FA:
    /* 0001e0fa   4  move.l D0,(2dc6,A4) */
    c->pc = RC_ADDR(0x0001e0fau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2dc6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E0FE:
    /* 0001e0fe   4  pea (2ddc,A4) */
    c->pc = RC_ADDR(0x0001e0feu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2ddcu));

L_1E102:
    /* 0001e102   4  pea (2dd2,A4) */
    c->pc = RC_ADDR(0x0001e102u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2dd2u));

L_1E106:
    /* 0001e106   4  pea (0001e19f) */
    c->pc = RC_ADDR(0x0001e106u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e19fu));

L_1E10A:
    /* 0001e10a   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001e10au);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001e10eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1E10E:
    /* 0001e10e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e10eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E112:
    /* 0001e112   4  move.l D0,(2dca,A4) */
    c->pc = RC_ADDR(0x0001e112u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2dcau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E116:
    /* 0001e116   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e116u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E11A:
    /* 0001e11a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001e11au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E11C:
    /* 0001e11c   4  move.l (2dd8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e11cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E120:
    /* 0001e120   4  move.w (2dd0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e120u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E124:
    /* 0001e124   4  move.l (2dc6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e124u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E128:
    /* 0001e128   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e128u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e12cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E12C:
    /* 0001e12c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e12cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E130:
    /* 0001e130   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e130u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E134:
    /* 0001e134   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001e134u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E138:
    /* 0001e138   4  move.l (2dd8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e138u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E13C:
    /* 0001e13c   4  move.w (2dd0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e13cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E140:
    /* 0001e140   4  move.l (2dc6,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e140u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E144:
    /* 0001e144   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e144u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e148u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E148:
    /* 0001e148   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e148u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E14C:
    /* 0001e14c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e14cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E14E:
    /* 0001e14e   2  rts */
    c->pc = RC_ADDR(0x0001e14eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
