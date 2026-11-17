/* Paula audio and the two 6526 CIA timers.
 *
 * The game never writes AUDxDAT: it plays samples with the audio DMA (AUDxLC/AUDxLEN/AUDxPER/
 * AUDxVOL plus the DMACON channel bits), and its music driver runs from a CIA-A timer interrupt
 * (FUN_0000ed90 arms ciaa.resource, FUN_0000f286 programs the latch at $BFE401/$BFE501/$BFEE01).
 * Both are modelled here; the mixer renders into the platform's audio device.
 *
 * The interrupt handler itself is game code, so the front end runs it: rt_time_run() calls
 * m->on_cia for every timer expiry that the ICR mask has enabled.
 */
#ifndef ICFTD_AUDIO_H
#define ICFTD_AUDIO_H

#include "types.h"

struct rt_machine;

#define EMU_AUD_CHANNELS 4
#define EMU_AUD_RATE     44100u     /* host sample rate */
#define EMU_AUD_CHUNK    512        /* frames buffered before one plat_audio_write */
#define EMU_AUD_CLOCK    3546895u   /* PAL Paula audio clock (7,093,790 / 2) */
#define EMU_AUD_MIN_PER  124u       /* shorter periods are silenced by the hardware */

/* One Paula channel.  Pointers are Amiga byte addresses, always word aligned.
 *
 * AUDxLC/AUDxLEN are the *start* registers: the DMA keeps its own position and length and loads
 * them when the current buffer ends (that is how the engine queues the next sample while one
 * plays - FUN_00009bca "arms" the 2-word silence loop right after starting the narration, so the
 * voice plays to its end and the channel then goes quiet). To make a sample start immediately
 * the engine clears the channel's DMACON bit first, which freezes the DMA, and the 0 -> 1
 * transition loads the registers (FUN_00009b60 does exactly that). */
typedef struct rt_aud_channel
{
    u16 lcHi, lcLo;     /* AUDxLC as written (the start pointer) */
    u32 start;          /* (lcHi << 16) | lcLo, bit 0 clear */
    u32 ptr;            /* next byte to fetch */
    u32 len;            /* AUDxLEN in bytes: the start length */
    u32 workLen;        /* length the current buffer is being played with */
    u32 pos;            /* bytes fetched since the buffer started */
    u16 per;            /* AUDxPER: AUD clocks per byte */
    u16 vol;            /* AUDxVOL, 0..64 */
    int sample;         /* last byte fetched, signed */
    int music;          /* started from the audio interrupt: music, not a sound effect */
    u32 phase;          /* AUD clocks since the last fetch, scaled by the host rate */
} rt_aud_channel;

typedef struct rt_audio
{
    int on;             /* samples are rendered (a device, or a capture file) */
    int device;         /* a host audio device is open: flush to it */
    void *capture;      /* FILE*: raw interleaved s16 stereo, for --audiodump */
    u32 rate;           /* host frames per second */
    u32 frac;           /* CPU cycles * rate/1000, the "emit a sample" accumulator */
    u32 dma;            /* DMACON audio bits 0..3 */
    int master;         /* DMACON DMAEN (bit 9) */
    int soundGain;      /* percent, 0..100 */
    int musicGain;
    int inHandler;      /* the audio interrupt is running: AUDx writes are music */
    rt_aud_channel ch[EMU_AUD_CHANNELS];
    s16 pcm[EMU_AUD_CHUNK * 2];   /* interleaved, pending submission */
    int pcmFrames;
} rt_audio;

/* One CIA: timer A, its control register and the interrupt control register. */
typedef struct rt_cia
{
    u16 latch;          /* timer A latch (TALO/TAHI) */
    u16 count;
    u16 cra;            /* CRA: bit 0 START, bit 3 one-shot, bit 4 LOAD */
    u16 icrMask;        /* enabled interrupt bits (bits 0..4) */
    u16 icrData;        /* pending flags */
} rt_cia;

/* AddICRVector: one interrupt server attached to an ICR bit (bit 0 = CIA-A timer A). */
#define EMU_MAX_ICR 4
typedef struct rt_icr_vector
{
    u32 cia;            /* 0 = CIA-A, 1 = CIA-B */
    u32 bit;
    u32 code;           /* is_Code */
    u32 data;           /* is_Data, passed in A1 */
} rt_icr_vector;

void rt_audio_init(struct rt_machine *m);
/* Opens the host device and starts mixing. Without it the machine still tracks every register,
 * it just renders no samples - the game's own state never depends on the mixer. */
void rt_audio_open(struct rt_machine *m, u32 rate);
/* Mixes without a device (a headless run), e.g. when the output is captured to a file. */
void rt_audio_render_only(struct rt_machine *m, u32 rate);
/* Writes the mixed frames to `path` as raw interleaved s16 stereo (the development --audiodump). */
u32  rt_audio_capture(struct rt_machine *m, const char *path);
void rt_audio_close(struct rt_machine *m);
/* [AUDIO] sound/music, both 0..10. */
void rt_audio_set_gain(struct rt_machine *m, int sound, int music);

/* Chipset writes this module owns: $DFF0A0..$DFF0DE and DMACON. */
void rt_audio_write16(struct rt_machine *m, u16 reg, u16 v);
void rt_audio_dmacon(struct rt_machine *m, u16 v);

/* CIA registers, byte granularity. Both return 1 when the address belongs to this module. */
u32 rt_cia_read8(struct rt_machine *m, u32 addr, u32 *value);
u32 rt_cia_write8(struct rt_machine *m, u32 addr, u32 value);
void rt_cia_add_vector(struct rt_machine *m, u32 bit, u32 code, u32 data);
void rt_cia_remove_vector(struct rt_machine *m, u32 code);
/* AbleICR: bit 7 set = enable the flags in bits 0..6, clear = disable them. */
u32 rt_cia_able(struct rt_machine *m, u32 flags);

/* Device time: `cycles` of 68000 time for the audio mixer and the CIA timers. A timer that
 * expires with its ICR bit enabled becomes pending; rt_cia_service runs the registered handler,
 * and the front end calls it at the next instruction boundary - never from inside a bus write,
 * because the handler is game code. */
void rt_time_run(struct rt_machine *m, long cycles);
void rt_cia_service(struct rt_machine *m);
/* Cycles of 68000 time until the next CIA timer tick that would ask for a handler - the next point
 * at which rt_cia_service can run - and -1 when no timer can raise one. It is the same rule
 * cia_tick applies (a running timer with its ICR bit enabled and a server attached underflows
 * after `count` quiet ticks, on the next one), so a caller that advances the clock in one go can
 * stop before the boundary instead of running the handler in the wrong place. */
long rt_time_next_service(struct rt_machine *m);
/* A WaitTOF/WaitBOVP: the rest of the frame is idle CPU time, but the devices keep running. */
void rt_time_idle(struct rt_machine *m);

#endif /* ICFTD_AUDIO_H */
