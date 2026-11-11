/* Paula audio and the CIA timers. See audio.h for what is modelled and why. */
#include "audio.h"

#include <stdio.h>
#include <string.h>

#include "machine.h"
#include "platform.h"

/* PAL clocks. The 68000 runs at 7,093,790 Hz, the CIA E clock at a tenth of that, and the Paula
 * audio clock (the one AUDxPER counts) is half the CPU clock. */
#define CPU_CLOCK 7093790u
#define CPU_PER_E 10u

/* Sample emission is counted in thousandths of those clocks (the codebase has no 64-bit type, and
 * a frame's worth of cycles times the rate would not fit a u32): one host frame per
 * CPU_CLOCK/1000 ticks of `frac`, i.e. 44.1 kHz within 0.003 %. */
#define STEP_RATE (EMU_AUD_RATE / 1000u)
#define STEP_CPU  (CPU_CLOCK / 1000u)

/* --- audio --------------------------------------------------------------------------------- */

void rt_audio_init(rt_machine *m)
{
    memset(&m->audio, 0, sizeof(m->audio));
    m->audio.rate = EMU_AUD_RATE;
    m->audio.master = 1;            /* DMACON comes out of reset with DMAEN set */
    m->audio.soundGain = 100;
    m->audio.musicGain = 100;
}

void rt_audio_open(rt_machine *m, u32 rate)
{
    if (rate == 0) rate = EMU_AUD_RATE;
    m->audio.rate = rate;
    m->audio.frac = 0;
    m->audio.pcmFrames = 0;
    m->audio.on = 1;
    m->audio.device = plat_audio_open(rate) ? 1 : 0;
}

void rt_audio_render_only(rt_machine *m, u32 rate)
{
    if (rate == 0) rate = EMU_AUD_RATE;
    m->audio.rate = rate;
    m->audio.frac = 0;
    m->audio.pcmFrames = 0;
    m->audio.on = 1;
}

u32 rt_audio_capture(rt_machine *m, const char *path)
{
    FILE *f = fopen(path, "wb");
    if (f == 0) return 0;
    m->audio.capture = (void *)f;
    return 1;
}

void rt_audio_close(rt_machine *m)
{
    if (m->audio.on) {
        if (m->audio.pcmFrames > 0)
            plat_audio_write(m->audio.pcm, (u32)m->audio.pcmFrames);
    }
    if (m->audio.device) plat_audio_close();
    if (m->audio.capture != 0) fclose((FILE *)m->audio.capture);
    m->audio.capture = 0;
    m->audio.device = 0;
    m->audio.on = 0;
    m->audio.pcmFrames = 0;
}

void rt_audio_set_gain(rt_machine *m, int sound, int music)
{
    if (sound < 0) sound = 0;
    if (sound > 10) sound = 10;
    if (music < 0) music = 0;
    if (music > 10) music = 10;
    m->audio.soundGain = sound * 10;
    m->audio.musicGain = music * 10;
}

/* The hardware fetches from chip RAM; an address the machine does not have reads as silence
 * instead of counting as a bad access (nothing in the CPU is doing it). */
static u32 aud_read8(rt_machine *m, u32 addr)
{
    addr &= 0xFFFFFFu;
    if (addr >= m->mem.size) return 0;
    return rt_read8(&m->mem, addr);
}

static void aud_fetch(rt_machine *m, rt_aud_channel *c)
{
    c->sample = (int)(s8)(u8)aud_read8(m, c->ptr);
    c->ptr += 1;
    if (++c->pos >= c->len) {           /* end of the buffer: the DMA loops from AUDxLC */
        c->pos = 0;
        c->ptr = c->base;
    }
}

static void aud_flush(rt_machine *m)
{
    if (m->audio.pcmFrames <= 0) return;
    if (m->audio.device)
        plat_audio_write(m->audio.pcm, (u32)m->audio.pcmFrames);
    if (m->audio.capture != 0)
        fwrite(m->audio.pcm, 4, (u32)m->audio.pcmFrames, (FILE *)m->audio.capture);
    m->audio.pcmFrames = 0;
}

/* One host sample: advance every channel and mix it. */
static void aud_sample(rt_machine *m)
{
    rt_audio *a = &m->audio;
    int l = 0, r = 0;
    u32 i;

    for (i = 0; i < EMU_AUD_CHANNELS; i++) {
        rt_aud_channel *c = &a->ch[i];
        int gain;

        if (!a->master || (a->dma & (1u << i)) == 0 || c->per < EMU_AUD_MIN_PER || c->len == 0) {
            c->sample = 0;              /* DMA off or period too short: the channel is silent */
            continue;
        }
        c->phase += EMU_AUD_CLOCK;
        while (c->phase >= (u32)c->per * a->rate) {
            c->phase -= (u32)c->per * a->rate;
            aud_fetch(m, c);
        }
        gain = c->music ? a->musicGain : a->soundGain;
        if (i == 0 || i == 3) l += c->sample * (int)c->vol * gain;
        else                  r += c->sample * (int)c->vol * gain;
    }
    a->pcm[a->pcmFrames * 2 + 0] = (s16)(l / 100);
    a->pcm[a->pcmFrames * 2 + 1] = (s16)(r / 100);
    if (++a->pcmFrames >= EMU_AUD_CHUNK) aud_flush(m);
}

/* Renders `cycles` of 68000 time. */
static void aud_render(rt_machine *m, u32 cycles)
{
    rt_audio *a = &m->audio;

    if (!a->on) return;                 /* no device: only the registers are modelled */
    a->frac += (u32)cycles * STEP_RATE;
    while (a->frac >= STEP_CPU) {
        a->frac -= STEP_CPU;
        aud_sample(m);
    }
}

void rt_audio_dmacon(rt_machine *m, u16 v)
{
    rt_audio *a = &m->audio;
    u16 bits = (u16)(v & 0x7FFFu);

    if ((v & 0x8000u) != 0) { a->dma |= (bits & 0x000Fu); if (bits & 0x0200u) a->master = 1; }
    else                    { a->dma &= (u16)~(bits & 0x000Fu); if (bits & 0x0200u) a->master = 0; }
}

void rt_audio_write16(rt_machine *m, u16 reg, u16 v)
{
    rt_aud_channel *c;
    int ch, off;

    if (reg < 0x0A0u || reg > 0x0DEu) return;
    ch = (int)((reg - 0x0A0u) >> 4);
    off = (int)((reg - 0x0A0u) & 0x0Fu);
    c = &m->audio.ch[ch];
    switch (off) {
    case 0x0:                                   /* AUDxLCH */
        c->lcHi = v;
        break;
    case 0x2:                                   /* AUDxLCL */
        c->lcLo = v;
        break;
    case 0x4:                                   /* AUDxLEN, in words */
        c->len = (u32)v * 2u;
        c->pos = 0;
        break;
    case 0x6:                                   /* AUDxPER */
        c->per = v;
        break;
    case 0x8:                                   /* AUDxVOL */
        c->vol = v > 64u ? 64u : v;
        return;
    case 0xA:                                   /* AUDxDAT */
        /* A CPU-fed channel (DMA off, one byte per write) is NOT modelled: the engine never
         * writes AUDxDAT - measured, not one store in the whole program - so the only missing
         * case is one this game cannot reach. */
        return;
    default:
        return;
    }
    /* A new buffer starts at AUDxLC, and the channel is music when the audio interrupt set it
     * up (the engine plays its sound effects from ordinary code, slot 30/0x9B60). */
    c->base = (((u32)c->lcHi << 16) | (u32)c->lcLo) & 0xFFFFFFFEu;
    c->ptr = c->base;
    c->pos = 0;
    c->phase = 0;
    c->music = m->audio.inHandler != 0;
}

/* --- CIA timers ---------------------------------------------------------------------------- */

/* Registers are selected by address bits 8..11, on odd addresses only (PRA at $BFE001 is reg 0,
 * TALO $BFE401 is reg 4, CRA $BFEE01 is reg 14). */
enum { CIA_REG_TALO = 4, CIA_REG_TAHI = 5, CIA_REG_ICR = 13, CIA_REG_CRA = 14, CIA_REG_CRB = 15 };

static int cia_index(u32 addr)
{
    if (addr >= 0xBFE000u && addr <= 0xBFEFFFu) return 0;
    if (addr >= 0xBFD000u && addr <= 0xBFDFFFu) return 1;
    return -1;
}

u32 rt_cia_read8(rt_machine *m, u32 addr, u32 *value)
{
    int cia = cia_index(addr);
    u32 reg;
    rt_cia *c;

    if (cia < 0 || (addr & 1u) == 0) return 0;
    reg = (addr >> 8) & 0xFu;
    c = &m->cia[cia];
    switch (reg) {
    case CIA_REG_TALO: *value = c->count & 0xFFu; return 1;
    case CIA_REG_TAHI: *value = (c->count >> 8) & 0xFFu; return 1;
    case CIA_REG_ICR:
        /* Reading the ICR clears the flags it reports, and bit 7 says "one is pending". */
        *value = (u32)(c->icrMask & 0x1Fu) | (c->icrData != 0 ? 0x80u : 0u);
        c->icrData = 0;
        return 1;
    case CIA_REG_CRA:  *value = c->cra; return 1;
    case CIA_REG_CRB:  *value = 0; return 1;
    default:
        return 0;
    }
}

u32 rt_cia_write8(rt_machine *m, u32 addr, u32 v)
{
    int cia = cia_index(addr);
    u32 reg;
    rt_cia *c;

    if (cia < 0 || (addr & 1u) == 0) return 0;
    reg = (addr >> 8) & 0xFu;
    c = &m->cia[cia];
    switch (reg) {
    case CIA_REG_TALO:
        c->latch = (u16)((c->latch & 0xFF00u) | (v & 0xFFu));
        return 1;
    case CIA_REG_TAHI:
        c->latch = (u16)((c->latch & 0x00FFu) | ((v & 0xFFu) << 8));
        return 1;
    case CIA_REG_ICR:
        if ((v & 0x80u) != 0) c->icrMask |= (u16)(v & 0x1Fu);
        else                  c->icrMask &= (u16)~(v & 0x1Fu);
        return 1;
    case CIA_REG_CRA:
        c->cra = (u16)(v & 0xFFu);
        /* LOAD (bit 4) forces the latch into the counter; the audio driver writes 0x11 = START
         * + LOAD every time it reprograms the tempo, so the two always come together. */
        if ((v & 0x10u) != 0) c->count = c->latch;
        return 1;
    default:
        return 0;
    }
}

u32 rt_cia_able(rt_machine *m, u32 flags)
{
    rt_cia *c = &m->cia[0];
    u32 old = (u32)(c->icrMask & 0x1Fu);

    if ((flags & 0x80u) != 0) c->icrMask |= (u16)(flags & 0x1Fu);
    else                      c->icrMask &= (u16)~(flags & 0x1Fu);
    return old;
}

void rt_cia_add_vector(rt_machine *m, u32 bit, u32 code, u32 data)
{
    int i;

    if (code == 0 || bit > 4u) return;
    for (i = 0; i < m->icrCount; i++)
        if (m->icr[i].bit == bit && m->icr[i].cia == 0) {
            m->icr[i].code = code;
            m->icr[i].data = data;
            return;
        }
    if (m->icrCount >= EMU_MAX_ICR) return;
    m->icr[i].cia = 0;
    m->icr[i].bit = bit;
    m->icr[i].code = code;
    m->icr[i].data = data;
    m->icrCount++;
}

void rt_cia_remove_vector(rt_machine *m, u32 code)
{
    int i;

    for (i = 0; i < m->icrCount; i++)
        if (m->icr[i].code == code) {
            for (; i + 1 < m->icrCount; i++) m->icr[i] = m->icr[i + 1];
            m->icrCount--;
            return;
        }
}

/* One E-clock tick of both timers. Returns the handler's is_Code when a timer that has its ICR
 * bit enabled underflowed, 0 otherwise. */
static u32 cia_tick(rt_machine *m)
{
    u32 code = 0;
    int i;

    for (i = 0; i < 2; i++) {
        rt_cia *c = &m->cia[i];

        if ((c->cra & 0x01u) == 0) continue;             /* stopped */
        if (c->count != 0) { c->count--; continue; }
        c->count = c->latch;                            /* continuous mode reloads the latch */
        if ((c->cra & 0x08u) != 0) c->cra &= (u16)~0x01u; /* one-shot stops itself */
        c->icrData |= 0x01u;                            /* timer A */
        if ((c->icrMask & 0x01u) != 0 && code == 0) {
            int k;
            for (k = 0; k < m->icrCount; k++)
                if (m->icr[k].cia == (u32)i && m->icr[k].bit == 0) {
                    code = m->icr[k].code;
                    m->ciaData = m->icr[k].data;
                    break;
                }
            c->icrData = 0;                             /* serviced below, or no server at all */
        }
    }
    return code;
}
void rt_time_run(rt_machine *m, long cycles)
{
    int timers;

    if (cycles <= 0) return;
    timers = (m->cia[0].cra & 1) != 0 || (m->cia[1].cra & 1) != 0;
    if (!timers) {                                      /* nothing programming the E clock */
        aud_render(m, (u32)cycles);
        return;
    }
    while (cycles > 0) {
        long step = (long)CPU_PER_E - (long)m->eAcc;
        u32 code;

        if (step > cycles) {
            m->eAcc += (u32)cycles;
            aud_render(m, (u32)cycles);
            break;
        }
        m->eAcc = 0;
        cycles -= step;
        aud_render(m, (u32)step);
        code = cia_tick(m);
        /* One pending interrupt at a time: the handler runs with interrupts off (SR 0x2700),
         * so a second expiry inside it is picked up by the next service call. */
        if (code != 0 && !m->ciaPending) {
            m->ciaCode = code;
            m->ciaPending = 1;
        }
    }
}

void rt_cia_service(rt_machine *m)
{
    u32 code;

    if (!m->ciaPending || m->on_cia == 0 || m->audio.inHandler != 0) return;
    m->ciaPending = 0;
    code = m->ciaCode;
    m->audio.inHandler++;
    m->on_cia(m, code);
    m->audio.inHandler--;
}

void rt_time_idle(rt_machine *m)
{
    if (m->cyclesToTick > 0) rt_time_run(m, m->cyclesToTick);
    m->cyclesToTick = 0;
}
