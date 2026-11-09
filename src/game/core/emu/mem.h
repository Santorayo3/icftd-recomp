/* 68k address space for the emulator: 24 bits, big endian, one flat block.
 *
 * The DOS build cannot afford a static 16 MB array, so the size is a parameter and everything
 * is allocated through `plat_alloc`.
 */
#ifndef EMU_MEM_H
#define EMU_MEM_H

#include "types.h"

typedef struct emu_mem
{
    u8 *base;
    u32 size;
    u32 bad;                 /* count of accesses outside the block, for diagnostics */
} emu_mem;

int  emu_mem_init(emu_mem *m, u32 size);
void emu_mem_free(emu_mem *m);

u32  emu_read8(const emu_mem *m, u32 a);
u32  emu_read16(const emu_mem *m, u32 a);
u32  emu_read32(const emu_mem *m, u32 a);
void emu_write8(emu_mem *m, u32 a, u32 v);
void emu_write16(emu_mem *m, u32 a, u32 v);
void emu_write32(emu_mem *m, u32 a, u32 v);

/* Copies a block in/out, for the image loader and the framebuffer readback. */
int  emu_mem_load(emu_mem *m, u32 addr, const u8 *src, u32 len);
u32  emu_mem_checksum(const emu_mem *m, u32 addr, u32 len);

#endif
