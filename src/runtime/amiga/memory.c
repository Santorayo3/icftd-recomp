#include "memory.h"
#include "platform.h"

#include <stdio.h>
#include <string.h>

/* A bad pointer shows up as an avalanche of out-of-range accesses; the first few addresses say
 * which one. */
static int badLogged;

static void report_bad(const rt_mem *m, u32 a)
{
    if (badLogged >= 16) return;
    badLogged++;
    printf("emu: access outside RAM at %08lX (size %06lX)\n", (unsigned long)a,
           (unsigned long)m->size);
}

int rt_mem_init(rt_mem *m, u32 size)
{
    m->base = (u8 *)plat_alloc(size);
    m->size = size;
    m->bad = 0;
    if (m->base == 0) return 0;
    memset(m->base, 0, size);
    return 1;
}

void rt_mem_free(rt_mem *m)
{
    if (m->base != 0) plat_free(m->base);
    m->base = 0;
    m->size = 0;
}

u32 rt_read8(const rt_mem *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (a >= m->size) { ((rt_mem *)m)->bad++; return 0; }
    return m->base[a];
}

u32 rt_read16(const rt_mem *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (a + 1 >= m->size) { ((rt_mem *)m)->bad++; report_bad(m, a); return 0; }
    return ((u32)m->base[a] << 8) | m->base[a + 1];
}

u32 rt_read32(const rt_mem *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (a + 3 >= m->size) { ((rt_mem *)m)->bad++; report_bad(m, a); return 0; }
    return ((u32)m->base[a] << 24) | ((u32)m->base[a + 1] << 16) |
           ((u32)m->base[a + 2] << 8) | m->base[a + 3];
}

void rt_write8(rt_mem *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (a >= m->size) { m->bad++; return; }
    m->base[a] = (u8)v;
}

void rt_write16(rt_mem *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (a + 1 >= m->size) { m->bad++; report_bad(m, a); return; }
    m->base[a] = (u8)(v >> 8);
    m->base[a + 1] = (u8)v;
}

void rt_write32(rt_mem *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (a + 3 >= m->size) { m->bad++; return; }
    m->base[a] = (u8)(v >> 24);
    m->base[a + 1] = (u8)(v >> 16);
    m->base[a + 2] = (u8)(v >> 8);
    m->base[a + 3] = (u8)v;
}

int rt_mem_load(rt_mem *m, u32 addr, const u8 *src, u32 len)
{
    addr &= 0xFFFFFFu;
    if (addr + len > m->size) return 0;
    memcpy(m->base + addr, src, len);
    return 1;
}

u32 rt_mem_checksum(const rt_mem *m, u32 addr, u32 len)
{
    u32 h = 2166136261u, i;
    addr &= 0xFFFFFFu;
    for (i = 0; i < len && addr + i < m->size; i++)
    {
        h ^= m->base[addr + i];
        h *= 16777619u;
    }
    return h;
}
