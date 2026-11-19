/* Fixed-width types shared by every module.
 *
 * Two rules keep the same sources valid for Watcom 16-bit DOS and 32-bit Windows:
 *   - never use plain int for a quantity that can exceed 32767 (int is 16 bit on DOS)
 *   - use u32/s32 for anything that is a counter, size or address
 */
#ifndef ICFTD_TYPES_H
#define ICFTD_TYPES_H

typedef unsigned char  u8;
typedef signed char    s8;
typedef unsigned short u16;
typedef signed short   s16;
typedef unsigned long  u32;
typedef signed long    s32;
/* Microseconds on a monotonic clock (platform.h, plat_now_us). Watcom compiles it for both
 * targets; keep arithmetic on it to add/subtract/compare, which both backends do natively. */
typedef unsigned long long u64;

#define SCREEN_W      320
#define SCREEN_H      200
#define SCREEN_PIXELS (SCREEN_W * SCREEN_H)   /* 64000: fits one 16-bit segment */
#define PAL_ENTRIES   256

#define NULLP ((void *)0)

#endif /* ICFTD_TYPES_H */
