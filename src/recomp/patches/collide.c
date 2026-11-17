/* Native collision probes: fn_0001aa04 - "is the pixel at (x,y) a solid colour?" - and the two
 * groups that call it, fn_0001a6fa (eight probes around a point) and fn_0001a7be (four along the
 * axes).
 *
 * They were a quarter of the hospital pass (docs\dos-hospital-perf.txt): a 36-instruction
 * translation of three memory reads and a shift, ~35 times a frame, and the groups re-derived the
 * row stride, the five plane bases and the pixel bit for every probe. Nothing in the original's
 * arithmetic changes here - the same 16-bit truncation after the multiply, the same bit order in
 * the colour index, the same tables, the same clamps to [-1,1] - and neither does the clock: each
 * group charges the cycles and the bus words of the 68000 instructions it replaces
 * (rc_step_words), so the frame budget, the pass cadence and the device timing stay where the
 * original put them.
 *
 * What a caller can observe of the original is only D0, the CCR a `moveq #0/#1` leaves, and the
 * two words of accumulated weight, and all three are produced here. The link/movem frame the
 * original writes below SP is not written any more: it is dead storage (the caller's arguments sit
 * above it and every later push overwrites it), and nothing reads it.
 */
#include "cpu.h"
#include "fn_table.h"

/* The generated bodies, for the frame-boundary fallback below. */
RC_DECL(0001a6fa);
RC_DECL(0001a7be);
RC_DECL(0001aa04);

/* How far the words and tables the probe uses sit from A4, in the directions the original's own
 * (d16,A4) addressing uses. The image offsets in the comments are what they are in the 0x4000
 * build; the machine code of the original reaches them the same way, so a different load address
 * or data hunk moves them with the program. */
#define COLL_STRIDE     0x0D32u     /* A4-: word, bytes per raster row         (0x28D24) */
#define COLL_PLANES     0x0CDAu     /* A4-: long[5], bitplane base addresses    (0x28D7C) */
#define COLL_ORIGIN_X   0x0470u     /* A4+: word, screen origin                 (0x29EC6) */
#define COLL_ORIGIN_Y   0x0472u     /* A4+: word                                (0x29EC8) */
#define COLL_ACC_X      0x070Cu     /* A4+: word, accumulated probe weight      (0x2A162) */
#define COLL_ACC_Y      0x070Eu     /* A4+: word                                (0x2A164) */

/* The groups' direction tables (word arrays) and the weights a hit accumulates. */
#define COLL_RING_DX    0x38EAu     /* A4-: 8 x multipliers, scaled by radius+1 (0x2616C) */
#define COLL_RING_DY    0x38DAu     /* A4-: 8 y multipliers, scaled by radius   (0x2617C) */
#define COLL_RING_WX    0x38CAu     /* A4-: 8 x weights                         (0x2618C) */
#define COLL_RING_WY    0x38BAu     /* A4-: 8 y weights                         (0x2619C) */
#define COLL_AXIS_DX    0x38AAu     /* A4-: 4 x multipliers, scaled by radius   (0x261AC) */
#define COLL_AXIS_DY    0x38A2u     /* A4-: 4 y multipliers                     (0x261B4) */

/* The mask both groups hand the probe: colours 0..10 and 15 count as solid. */
#define COLL_MASK       0xFFFF83FFu

/* What the original instruction stream charges, per path: the emitter's per-instruction cycle
 * literals summed over the instructions the path executes, and rt_bus_cycles[opcode] summed the
 * same way (tools\gen-buscycles.ps1's table, MOVEM counted from its mask).
 *
 *   path                                          cycles   bus words
 *   probe, x < 0                                      90          27
 *   probe, x >= 150                                  116          33
 *   probe, y < 0                                     148          38
 *   probe, y >= 200                                  174          43
 *   probe, on screen                                1278         270   +12/2 per set plane bit
 *   1a6fa/1a7be prologue (link..moveq)               108          24
 *   per probe, the group's own instructions      272 / 268   47 / 44   (includes the jsr)
 *   the accumulate block on a hit                    100          20
 *   tail (four cmpi/bcc, movem, unlk, rts)           144          31
 *   each clamp store                                  16           4
 */
#define PROBE_COST_X_NEG     90u
#define PROBE_WORD_X_NEG     27
#define PROBE_COST_X_HIGH   116u
#define PROBE_WORD_X_HIGH    33
#define PROBE_COST_Y_NEG    148u
#define PROBE_WORD_Y_NEG     38
#define PROBE_COST_Y_HIGH   174u
#define PROBE_WORD_Y_HIGH    43
#define PROBE_COST          1278u
#define PROBE_WORD           270
#define PROBE_COST_BIT        12u      /* the original's bset #5,D6, once per set plane bit */
#define PROBE_WORD_BIT         2
#define GROUP_COST          108u
#define GROUP_WORD           24
#define GROUP6_COST         272u
#define GROUP6_WORD          47
#define GROUP7_COST         268u
#define GROUP7_WORD          44
#define HIT_COST            100u
#define HIT_WORD             20
#define TAIL_COST           144u
#define TAIL_WORD            31
#define CLAMP_COST           16u
#define CLAMP_WORD            4

/* The bitmap the probes read - the five plane bases and the row stride, at the A4-relative words
 * the scene sets up at the start of a pass. Read per probe, exactly as the original does: the
 * scene's own interrupt server is free to move the planes underneath a group that is still
 * running, and a fallback to the generated body (below) may let a vblank through between two
 * probes. */
typedef struct collide_bmp
{
    u32 plane[5];
    u32 stride;
} collide_bmp;

/* The frame boundary is the one thing a collapsed charge cannot place exactly: the original takes
 * the vblank between two of a probe's instructions, a one-step charge takes it before the whole
 * probe. So when the budget is close enough that the boundary could fall inside the group, the
 * generated body runs instead - it is still linked, and it charges instruction by instruction
 * exactly as the 68000 does. Measured: a group starts inside the last ~19k cycles of a frame
 * about one time in eight, and without this a whole run drifts from the translation (the pass
 * straddles the boundary a frame earlier and every object's coordinates follow). */
static int budget_has_room(const rt_machine *m, u32 cost)
{
    return m->cyclesToTick >= (long)(cost + cost / 2u);   /* 1.5x: the contention a charge adds */
}

static void collide_read(cpu_t *c, rt_machine *m, collide_bmp *bmp)
{
    u32 a4 = c->a[4];
    int i;

    bmp->stride = rc_rd16(c, m, a4 - COLL_STRIDE);
    for (i = 0; i < 5; i++)
        bmp->plane[i] = rc_rd32(c, m, a4 - COLL_PLANES + (u32)i * 4u);
}

/* One probe's worth of the machine clock, charged before its reads like the instructions it
 * replaces; `cost`/`words` are the caller's own instructions for this probe (0 for a direct
 * call), so the whole group is charged in one step and a vblank can still fall between two
 * probes. */
static int collide_probe(cpu_t *c, rt_machine *m, s32 x, s32 y, u32 mask, u32 cost, int words)
{
    collide_bmp bmp;
    s16 cx = (s16)x, cy = (s16)y;
    u32 row, colour = 0;
    int i, bits = 0;

    /* tst.w / blt / cmpi.w #150 / blt, and the same pair for y. */
    if (cx < 0)      { rc_step_words(c, m, cost + PROBE_COST_X_NEG,  words + PROBE_WORD_X_NEG);  return 0; }
    if (cx >= 0x150) { rc_step_words(c, m, cost + PROBE_COST_X_HIGH, words + PROBE_WORD_X_HIGH); return 0; }
    if (cy < 0)      { rc_step_words(c, m, cost + PROBE_COST_Y_NEG,  words + PROBE_WORD_Y_NEG);  return 0; }
    if (cy >= 0xC8)  { rc_step_words(c, m, cost + PROBE_COST_Y_HIGH, words + PROBE_WORD_Y_HIGH); return 0; }

    collide_read(c, m, &bmp);

    /* D4 = stride*y + x/8 as the original builds it: muls.w leaves a 32-bit product, add.w keeps
     * the low word of the sum, ext.l sign-extends that word again. */
    {
        s32 prod = (s32)(s16)bmp.stride * (s32)cy;

        row = (u32)(s32)(s16)(u16)(prod + (s32)(cx >> 3));
    }

    /* Each plane contributes one bit, the first plane the *least* significant: the original sets
     * bit 5 of a shifting accumulator and shifts it right, so plane i ends up at bit i. */
    {
        u32 bit = 0x80u >> (u32)(cx & 7);

        for (i = 0; i < 5; i++)
        {
            if ((rc_rd8(c, m, bmp.plane[i] + row) & bit) != 0)
            {
                colour |= 1u << i;
                bits++;
            }
        }
    }

    rc_step_words(c, m, cost + PROBE_COST + PROBE_COST_BIT * (u32)bits,
                  words + PROBE_WORD + PROBE_WORD_BIT * bits);
    return (mask & (1u << colour)) != 0;
}

/* The original's clamp of one accumulated weight to [-1,1]:
 *   cmpi.w #-1 / bge / move.w #-1      cmpi.w #1 / ble / move.w #1
 * The last of those is what the function returns with in the CCR, so the flags are produced the
 * way the original produces them. */
static void collide_clamp(cpu_t *c, rt_machine *m, u32 addr)
{
    u32 v;

    v = rc_rd16(c, m, addr);
    rc_cmp(c, RC_W, v, 0xFFFFu);
    if (!rc_cond(c, 12))                    /* bge: the value was not below -1 */
    {
        rc_step_words(c, m, CLAMP_COST, CLAMP_WORD);
        rc_wr16(c, m, addr, 0xFFFFu);
        rc_set_nzvc(c, 0xFFFFu, RC_W);
    }
    v = rc_rd16(c, m, addr);
    rc_cmp(c, RC_W, v, 1u);
    if (!rc_cond(c, 15))                    /* ble: the value was not above 1 */
    {
        rc_step_words(c, m, CLAMP_COST, CLAMP_WORD);
        rc_wr16(c, m, addr, 1u);
        rc_set_nzvc(c, 1u, RC_W);
    }
}

/* The block a hit accumulates: add.w / sub.w of the direction table's weight into (70C,A4) and
 * (70E,A4). */
static void collide_accumulate(cpu_t *c, rt_machine *m, u32 index, int sub, u32 wx, u32 wy)
{
    u32 a4 = c->a[4];
    u32 step = index * 2u;
    u32 vx = rc_rd16(c, m, a4 - wx + step);
    u32 vy = rc_rd16(c, m, a4 - wy + step);
    u32 ax, ay;

    rc_step_words(c, m, HIT_COST, HIT_WORD);
    ax = rc_rd16(c, m, a4 + COLL_ACC_X);
    ay = rc_rd16(c, m, a4 + COLL_ACC_Y);
    if (sub)
    {
        ax -= vx;
        ay -= vy;
    }
    else
    {
        ax += vx;
        ay += vy;
    }
    rc_wr16(c, m, a4 + COLL_ACC_X, ax);
    rc_wr16(c, m, a4 + COLL_ACC_Y, ay);
}

/* The two groups' common shape: clear the sums, probe `count` points around the origin at the
 * caller's distance, accumulate a weight per hit, clamp both sums. Only the direction tables, the
 * count, the x scaling and the sign of the accumulation differ. */
static void collide_group(cpu_t *c, rt_machine *m,
                          u32 dx, u32 dy, u32 wx, u32 wy,
                          int count, int radius_bias, int sub, u32 cost, int words)
{
    u32 a4 = c->a[4], sp = c->a[7];
    s16 x0 = (s16)(u16)(rc_rd16(c, m, sp + 4u) - rc_rd16(c, m, a4 + COLL_ORIGIN_X));
    s16 y0 = (s16)(u16)(rc_rd16(c, m, sp + 6u) - rc_rd16(c, m, a4 + COLL_ORIGIN_Y));
    s16 radius = (s16)rc_rd16(c, m, sp + 8u);
    int i, hit = 0;

    rc_step_words(c, m, GROUP_COST, GROUP_WORD);        /* link, movem, origins, two clr.w, moveq */

    rc_wr16(c, m, a4 + COLL_ACC_Y, 0u);                 /* clr.w (70e,A4) */
    rc_wr16(c, m, a4 + COLL_ACC_X, 0u);                 /* clr.w (70c,A4) */

    for (i = 0; i < count; i++)
    {
        s32 px = (s32)x0 + (s32)(s16)((s32)(s16)(radius + radius_bias) *
                                      (s32)(s16)rc_rd16(c, m, a4 - dx + (u32)i * 2u));
        s32 py = (s32)y0 + (s32)(s16)((s32)radius *
                                      (s32)(s16)rc_rd16(c, m, a4 - dy + (u32)i * 2u));

        hit = collide_probe(c, m, px, py, COLL_MASK, cost, words);
        if (hit)
            collide_accumulate(c, m, (u32)i, sub, wx, wy);
    }

    /* D0 as the loop leaves it: the last probe's answer, or - on a hit - the table index the
     * accumulate block derived from D4. Nothing reads it, but a frame boundary can fall right
     * behind the call, so it is the original's value and not ours. */
    c->d[0] = hit ? (u32)(2 * (count - 1)) : 0u;

    rc_step_words(c, m, TAIL_COST, TAIL_WORD);
    collide_clamp(c, m, a4 + COLL_ACC_X);
    collide_clamp(c, m, a4 + COLL_ACC_Y);

    rc_ret(c, m);
}

/* fn_0001aa04(x, y, mask): x at 8(A5), y at 0xA(A5), the mask at 0xC(A5) - SP+4, SP+6, SP+8 now
 * that there is no link frame. */
static void native_1aa04(cpu_t *c, rt_machine *m)
{
    u32 mask, x, y;

    if (!budget_has_room(m, PROBE_COST + PROBE_COST_BIT * 5u))
    {
        fn_0001aa04(c, m);                  /* the boundary is this close: let the 68000 charge it */
        return;
    }
    mask = rc_rd32(c, m, c->a[7] + 8u);
    x = rc_rd16(c, m, c->a[7] + 4u);
    y = rc_rd16(c, m, c->a[7] + 6u);

    c->d[0] = (u32)collide_probe(c, m, (s32)(s16)x, (s32)(s16)y, mask, 0u, 0);
    rc_set_nzvc(c, c->d[0], RC_L);          /* the moveq #1/#0 every path returns through */
    rc_ret(c, m);
}

/* The whole group's worst case, for the frame-boundary test at the entry. */
#define GROUP6_REACH (GROUP_COST + 8u * (GROUP6_COST + PROBE_COST + PROBE_COST_BIT * 5u) + TAIL_COST)
#define GROUP7_REACH (GROUP_COST + 4u * (GROUP7_COST + PROBE_COST + PROBE_COST_BIT * 5u) + TAIL_COST)

/* fn_0001a6fa: eight probes around the point, x scaled by radius+1 - the screen's pixel aspect -
 * accumulating weights that steer around the obstacle. */
static void native_1a6fa(cpu_t *c, rt_machine *m)
{
    if (!budget_has_room(m, GROUP6_REACH))
    {
        fn_0001a6fa(c, m);                  /* the boundary is this close: let the 68000 charge it */
        return;
    }
    collide_group(c, m, COLL_RING_DX, COLL_RING_DY, COLL_RING_WX, COLL_RING_WY,
                  8, 1, 0, GROUP6_COST, GROUP6_WORD);
}

/* fn_0001a7be: four probes along the axes, the same shape with the weights subtracted. */
static void native_1a7be(cpu_t *c, rt_machine *m)
{
    if (!budget_has_room(m, GROUP7_REACH))
    {
        fn_0001a7be(c, m);                  /* the boundary is this close: let the 68000 charge it */
        return;
    }
    collide_group(c, m, COLL_AXIS_DX, COLL_AXIS_DY, COLL_AXIS_DX, COLL_AXIS_DY,
                  4, 0, 1, GROUP7_COST, GROUP7_WORD);
}

const rc_native rc_native_fns[] =
{
    { RC_ADDR(0x0001a6fau), native_1a6fa },
    { RC_ADDR(0x0001a7beu), native_1a7be },
    { RC_ADDR(0x0001aa04u), native_1aa04 },
    { 0u, 0 }
};
