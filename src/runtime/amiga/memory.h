/* 68k address space for the emulator: 24 bits, big endian, one flat block.
 *
 * The DOS build cannot afford a static 16 MB array, so the size is a parameter and everything
 * is allocated through `plat_alloc`.
 */
#ifndef EMU_MEM_H
#define EMU_MEM_H

#include "types.h"

typedef struct rt_mem
{
    u8 *base;
    u32 size;
    u32 bad;                 /* count of accesses outside the block, for diagnostics */
} rt_mem;

int  rt_mem_init(rt_mem *m, u32 size);
void rt_mem_free(rt_mem *m);

u32  rt_read8(const rt_mem *m, u32 a);
u32  rt_read16(const rt_mem *m, u32 a);
u32  rt_read32(const rt_mem *m, u32 a);
void rt_write8(rt_mem *m, u32 a, u32 v);
void rt_write16(rt_mem *m, u32 a, u32 v);
void rt_write32(rt_mem *m, u32 a, u32 v);

/* Copies a block in/out, for the image loader and the framebuffer readback. */
int  rt_mem_load(rt_mem *m, u32 addr, const u8 *src, u32 len);
u32  rt_mem_checksum(const rt_mem *m, u32 addr, u32 len);

#endif
