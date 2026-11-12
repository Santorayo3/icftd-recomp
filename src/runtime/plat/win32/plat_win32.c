/* Win32 platform layer: one fixed 320x200 8-bit DIB section, one logical palette,
 * BitBlt to the window, 50 Hz pacing, keyboard and mouse.
 *
 * Built with: wcl386 -bt=nt -5s -ox -i=..\core ..\core\main.c ..\core\gfx.c plat_win32.c
 */
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "platform.h"

/* waveOut lives in winmm; Watcom links a library through this pragma (the build scripts list no
 * libraries). */
#pragma library("winmm")

static HWND          g_hwnd;
static HDC           g_memdc;
static HBITMAP       g_dib;
static u8           *g_bits;
static HDC           g_frame_dc;      /* fullscreen: screen-sized compose buffer */
static HBITMAP       g_frame_dib;
static int           g_frame_w, g_frame_h;
static HPALETTE      g_pal;
static int           g_quit;
static u32           g_fullscreen;
static u32           g_start_ms;
static u32           g_frame_ms = 20;    /* 50 Hz, the Amiga frame rate */
static u8            g_keys[KEY_COUNT];
static u8            g_pressed[KEY_COUNT];
static s16           g_mouse_x, g_mouse_y;
static u8            g_mouse_buttons;

/* The frame period is counted on the performance counter: the millisecond timer's 15.6 ms
 * granularity cannot express the Amiga's 20 ms frame. */
static __int64       g_qpcFreq;          /* QueryPerformanceFrequency, 0 = not available */
static __int64       g_nextFrame;        /* QPC tick of the next frame boundary */
static __int64       g_frame_ticks;      /* QPC ticks per frame */

static __int64 qpc_now(void)
{
    LARGE_INTEGER t;
    QueryPerformanceCounter(&t);
    return t.QuadPart;
}

static void frame_ticks_recalc(void)
{
    if (g_qpcFreq <= 0) { g_frame_ticks = 0; return; }
    /* 50 Hz gives g_frame_ms = 20, so the period is exactly freq/50 - the same product a --speed
     * fraction lands on, without rounding the frequency away. */
    g_frame_ticks = g_qpcFreq * (__int64)g_frame_ms / 1000;
}

static LRESULT CALLBACK wnd_proc(HWND h, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
    case WM_CLOSE:
    case WM_DESTROY:
        g_quit = 1;
        return 0;
    case WM_ERASEBKGND:
        return 1;
    case WM_MOUSEMOVE:
        g_mouse_x = (s16)LOWORD(lp);
        g_mouse_y = (s16)HIWORD(lp);
        return 0;
    case WM_LBUTTONDOWN: g_mouse_buttons |= 1; return 0;
    case WM_LBUTTONUP:   g_mouse_buttons &= (u8)~1; return 0;
    case WM_RBUTTONDOWN: g_mouse_buttons |= 2; return 0;
    case WM_RBUTTONUP:   g_mouse_buttons &= (u8)~2; return 0;
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE) g_keys[KEY_ESCAPE] = 1;
        if (wp == VK_UP)     g_keys[KEY_UP] = 1;
        if (wp == VK_DOWN)   g_keys[KEY_DOWN] = 1;
        if (wp == VK_LEFT)   g_keys[KEY_LEFT] = 1;
        if (wp == VK_RIGHT)  g_keys[KEY_RIGHT] = 1;
        if (wp == VK_RETURN) g_keys[KEY_ENTER] = 1;
        if (wp == VK_SPACE)  g_keys[KEY_FIRE] = 1;
        if (wp == VK_F1)     g_keys[KEY_F1] = 1;
        if (wp == VK_F2)     g_keys[KEY_F2] = 1;
        if (wp == VK_F3)     g_keys[KEY_F3] = 1;
        if (wp == VK_F4)     g_keys[KEY_F4] = 1;
        if (wp == VK_F5)     g_keys[KEY_F5] = 1;
        return 0;
    case WM_KEYUP:
        if (wp == VK_ESCAPE) g_keys[KEY_ESCAPE] = 0;
        if (wp == VK_UP)     g_keys[KEY_UP] = 0;
        if (wp == VK_DOWN)   g_keys[KEY_DOWN] = 0;
        if (wp == VK_LEFT)   g_keys[KEY_LEFT] = 0;
        if (wp == VK_RIGHT)  g_keys[KEY_RIGHT] = 0;
        if (wp == VK_RETURN) g_keys[KEY_ENTER] = 0;
        if (wp == VK_SPACE)  g_keys[KEY_FIRE] = 0;
        if (wp == VK_F1)     g_keys[KEY_F1] = 0;
        if (wp == VK_F2)     g_keys[KEY_F2] = 0;
        if (wp == VK_F3)     g_keys[KEY_F3] = 0;
        if (wp == VK_F4)     g_keys[KEY_F4] = 0;
        if (wp == VK_F5)     g_keys[KEY_F5] = 0;
        return 0;
    }
    return DefWindowProc(h, msg, wp, lp);
}

static int make_window(const char *title)
{
    WNDCLASS wc;
    RECT r;
    DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;
    int x = CW_USEDEFAULT, y = CW_USEDEFAULT, w, h;

    memset(&wc, 0, sizeof wc);
    wc.lpfnWndProc = wnd_proc;
    wc.hInstance = GetModuleHandle(0);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.lpszClassName = "ICFTD";
    if (!RegisterClass(&wc)) return 0;

    if (g_fullscreen) {
        /* Borderless over the whole screen; plat_present scales the picture into it. */
        style = WS_POPUP;
        x = 0;
        y = 0;
        w = GetSystemMetrics(SM_CXSCREEN);
        h = GetSystemMetrics(SM_CYSCREEN);
    } else {
        r.left = 0; r.top = 0;
        r.right = SCREEN_W; r.bottom = SCREEN_H;
        AdjustWindowRect(&r, style, FALSE);
        w = r.right - r.left;
        h = r.bottom - r.top;
    }

    g_hwnd = CreateWindow("ICFTD", title, style, x, y, w, h, 0, 0, wc.hInstance, 0);
    if (!g_hwnd) return 0;
    ShowWindow(g_hwnd, SW_SHOW);
    if (g_fullscreen) SetForegroundWindow(g_hwnd);
    UpdateWindow(g_hwnd);
    return 1;
}

static int make_dib(void)
{
    BITMAPINFO *bi;
    HDC screen;
    unsigned int i;
    void *bits = 0;
    int ok;

    bi = (BITMAPINFO *)malloc(sizeof(BITMAPINFOHEADER) + PAL_ENTRIES * sizeof(RGBQUAD));
    if (!bi) return 0;
    memset(bi, 0, sizeof(BITMAPINFOHEADER) + PAL_ENTRIES * sizeof(RGBQUAD));
    bi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bi->bmiHeader.biWidth = SCREEN_W;
    bi->bmiHeader.biHeight = -SCREEN_H;          /* top-down rows */
    bi->bmiHeader.biPlanes = 1;
    bi->bmiHeader.biBitCount = 8;
    bi->bmiHeader.biCompression = BI_RGB;
    for (i = 0; i < PAL_ENTRIES; i++) {
        bi->bmiColors[i].rgbRed = 0;
        bi->bmiColors[i].rgbGreen = 0;
        bi->bmiColors[i].rgbBlue = 0;
        bi->bmiColors[i].rgbReserved = 0;
    }

    screen = GetDC(g_hwnd);
    g_memdc = CreateCompatibleDC(screen);
    ReleaseDC(g_hwnd, screen);

    g_dib = CreateDIBSection(g_memdc, bi, DIB_RGB_COLORS, &bits, 0, 0);
    free(bi);
    if (!g_dib) return 0;
    g_bits = (u8 *)bits;
    SelectObject(g_memdc, g_dib);

    {
        LOGPALETTE *lp = (LOGPALETTE *)malloc(sizeof(LOGPALETTE) + PAL_ENTRIES * sizeof(PALETTEENTRY));
        if (!lp) return 0;
        lp->palVersion = 0x300;
        lp->palNumEntries = PAL_ENTRIES;
        for (i = 0; i < PAL_ENTRIES; i++) {
            lp->palPalEntry[i].peRed = 0;
            lp->palPalEntry[i].peGreen = 0;
            lp->palPalEntry[i].peBlue = 0;
            lp->palPalEntry[i].peFlags = 0;
        }
        g_pal = CreatePalette(lp);
        free(lp);
    }
    ok = g_pal != 0;
    return ok;
}

u32 plat_init(const char *title)
{
    g_start_ms = 0;
    if (!make_window(title)) return 0;
    if (!make_dib()) return 0;
    /* The frame period is counted on the performance counter: the millisecond timer's 15.6 ms
     * granularity cannot express the Amiga's 20 ms frame. */
    if (!QueryPerformanceFrequency((LARGE_INTEGER *)&g_qpcFreq)) g_qpcFreq = 0;
    frame_ticks_recalc();
    g_nextFrame = qpc_now();
    g_start_ms = GetTickCount();
    return 1;
}

void plat_set_fullscreen(u32 on)
{
    g_fullscreen = on ? 1u : 0u;
}

/* GetModuleFileName knows the executable's path, so the argument is not needed here. */
void plat_set_program(const char *argv0)
{
    (void)argv0;
}

/* The DOS clock the front end measures frames with; nothing on Win32 uses it. */
u32 plat_pit_now(void)
{
    return 0;
}

/* The windowed build has a video mode to choose, so its ini carries it. */
const char *plat_default_ini(void)
{
    return "; ICFTD runtime settings. Written with these defaults on the first start.\r\n"
           "; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.\r\n"
           "\r\n"
           "[VIDEO]\r\n"
           "; false = window at the original 320x200; true = fullscreen, picture scaled up to fit.\r\n"
           "fullscreen=true\r\n"
           "\r\n"
           "[AUDIO]\r\n"
           "; Volume 0..10, 0 = off, 10 = full.\r\n"
           "sound=10\r\n"
           "music=10\r\n";
}

u32 plat_fullscreen(void)
{
    return g_fullscreen;
}

void plat_shutdown(void)
{
    plat_audio_close();
    if (g_frame_dib) DeleteObject(g_frame_dib);
    if (g_frame_dc) DeleteDC(g_frame_dc);
    g_frame_dib = 0;
    g_frame_dc = 0;
    g_frame_w = g_frame_h = 0;
    if (g_pal) DeleteObject(g_pal);
    if (g_dib) DeleteObject(g_dib);
    if (g_memdc) DeleteDC(g_memdc);
    if (g_hwnd) DestroyWindow(g_hwnd);
    g_hwnd = 0;
    g_quit = 1;
}

u8 *plat_framebuffer(void)
{
    return g_bits;
}

/* Fullscreen composes into its own screen-sized buffer: a FillRect followed by a StretchBlt on the
 * window DC lets the display show the black fill between the two, which is the one-frame black
 * flash that made the scaled picture flicker. Here the window sees exactly one BitBlt per frame. */
static void free_frame(void)
{
    if (g_frame_dib) DeleteObject(g_frame_dib);
    if (g_frame_dc) DeleteDC(g_frame_dc);
    g_frame_dib = 0;
    g_frame_dc = 0;
    g_frame_w = 0;
    g_frame_h = 0;
}

static int make_frame(int w, int h)
{
    BITMAPINFO bi;
    HDC screen;
    void *bits = 0;
    RECT all;

    free_frame();
    memset(&bi, 0, sizeof bi);
    bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bi.bmiHeader.biWidth = w;
    bi.bmiHeader.biHeight = -h;                  /* top-down rows */
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    bi.bmiHeader.biCompression = BI_RGB;

    screen = GetDC(g_hwnd);
    g_frame_dc = CreateCompatibleDC(screen);
    ReleaseDC(g_hwnd, screen);
    if (!g_frame_dc) return 0;
    g_frame_dib = CreateDIBSection(g_frame_dc, &bi, DIB_RGB_COLORS, &bits, 0, 0);
    if (!g_frame_dib) {
        free_frame();
        return 0;
    }
    SelectObject(g_frame_dc, g_frame_dib);
    /* The bars never change, so they are painted once and only the picture rect is rewritten. */
    all.left = 0; all.top = 0; all.right = w; all.bottom = h;
    FillRect(g_frame_dc, &all, (HBRUSH)GetStockObject(BLACK_BRUSH));
    g_frame_w = w;
    g_frame_h = h;
    return 1;
}

void plat_present(void)
{
    HDC dc;
    if (!g_hwnd || !g_bits) return;
    dc = GetDC(g_hwnd);
    if (g_fullscreen) {
        RECT cr;
        int cw, ch, w, h, x, y;

        GetClientRect(g_hwnd, &cr);
        cw = cr.right - cr.left;
        ch = cr.bottom - cr.top;
        if (cw <= 0 || ch <= 0) {
            ReleaseDC(g_hwnd, dc);
            return;
        }
        if (cw != g_frame_w || ch != g_frame_h) {
            if (!make_frame(cw, ch)) {
                ReleaseDC(g_hwnd, dc);
                return;
            }
        }
        /* 320x200 is a 4:3 picture with non-square pixels, as on an Amiga monitor: fit the
         * largest 4:3 rectangle into the screen and keep the rest black. */
        w = ch * 4 / 3;
        if (w > cw) {
            w = cw;
            h = cw * 3 / 4;
        } else {
            h = ch;
        }
        x = (cw - w) / 2;
        y = (ch - h) / 2;
        SetStretchBltMode(g_frame_dc, COLORONCOLOR);
        StretchBlt(g_frame_dc, x, y, w, h, g_memdc, 0, 0, SCREEN_W, SCREEN_H, SRCCOPY);
        BitBlt(dc, 0, 0, cw, ch, g_frame_dc, 0, 0, SRCCOPY);
    } else {
        SelectPalette(dc, g_pal, FALSE);
        RealizePalette(dc);
        BitBlt(dc, 0, 0, SCREEN_W, SCREEN_H, g_memdc, 0, 0, SRCCOPY);
    }
    ReleaseDC(g_hwnd, dc);
}

void plat_set_palette(u32 first, u32 count, const u8 *rgb)
{
    u32 i;
    PALETTEENTRY pe[PAL_ENTRIES];
    RGBQUAD q[PAL_ENTRIES];
    HDC dc;

    if (!g_pal || first >= PAL_ENTRIES) return;
    if (first + count > PAL_ENTRIES) count = PAL_ENTRIES - first;
    for (i = 0; i < count; i++) {
        pe[i].peRed = rgb[i * 3 + 0];
        pe[i].peGreen = rgb[i * 3 + 1];
        pe[i].peBlue = rgb[i * 3 + 2];
        pe[i].peFlags = 0;
        q[i].rgbRed = rgb[i * 3 + 0];
        q[i].rgbGreen = rgb[i * 3 + 1];
        q[i].rgbBlue = rgb[i * 3 + 2];
        q[i].rgbReserved = 0;
    }
    SetPaletteEntries(g_pal, first, count, pe);
    /* A DIB section is blitted through its own colour table, not through the
     * HPALETTE, so both have to be updated or the window shows greys. */
    if (g_memdc) SetDIBColorTable(g_memdc, first, count, q);
    dc = GetDC(g_hwnd);
    SelectPalette(dc, g_pal, FALSE);
    RealizePalette(dc);
    ReleaseDC(g_hwnd, dc);
}

/* --- audio ----------------------------------------------------------------------------------
 * waveOut with a ring of small buffers plus a short waiting queue. The runtime renders emulated
 * time ahead of the device, so a write only hands a chunk over; a chunk that finds every buffer
 * still playing waits in the queue (up to AUDIO_QUEUE of them) instead of being lost, which is
 * what absorbs a frame the emulation produced in a catch-up burst. */

#define AUDIO_BUFFERS 8
/* 512 frames is ~12 ms; eight of them queue 93 ms. The mixer hands over a whole frame's worth at
 * each vblank and catches up back to back after a slow frame, so a 46 ms queue (4) dropped ~16 %
 * of the samples where eight drop none (measured). */
#define AUDIO_FRAMES  512
#define AUDIO_QUEUE   4           /* chunks waiting for a free device buffer, ~46 ms */

static HWAVEOUT g_wave;
static WAVEHDR  g_hdr[AUDIO_BUFFERS];
static s16     *g_abuf[AUDIO_BUFFERS];
static s16      g_queue[AUDIO_QUEUE][AUDIO_FRAMES * 2];
static u32      g_qsize[AUDIO_QUEUE];
static int      g_qcount;
static int      g_aopen;
static int      g_anext;
static u32      g_adropped;

u32 plat_audio_open(u32 rate)
{
    WAVEFORMATEX wf;
    int i;

    if (g_aopen) return 1;
    if (rate == 0) return 0;
    memset(&wf, 0, sizeof(wf));
    wf.wFormatTag = WAVE_FORMAT_PCM;
    wf.nChannels = 2;
    wf.nSamplesPerSec = rate;
    wf.wBitsPerSample = 16;
    wf.nBlockAlign = 4;
    wf.nAvgBytesPerSec = rate * 4;
    if (waveOutOpen(&g_wave, WAVE_MAPPER, &wf, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
        g_wave = 0;
        return 0;
    }
    for (i = 0; i < AUDIO_BUFFERS; i++) {
        g_abuf[i] = (s16 *)malloc(AUDIO_FRAMES * 4);
        if (g_abuf[i] == 0) { plat_audio_close(); return 0; }
        memset(&g_hdr[i], 0, sizeof(g_hdr[i]));
        g_hdr[i].lpData = (LPSTR)g_abuf[i];
        g_hdr[i].dwBufferLength = AUDIO_FRAMES * 4;
        waveOutPrepareHeader(g_wave, &g_hdr[i], sizeof(WAVEHDR));
        g_hdr[i].dwFlags |= WHDR_DONE;      /* never queued yet: a free buffer */
    }
    g_anext = 0;
    g_qcount = 0;
    g_adropped = 0;
    g_aopen = 1;
    return 1;
}

void plat_audio_close(void)
{
    int i;

    if (!g_aopen) return;
    waveOutReset(g_wave);
    for (i = 0; i < AUDIO_BUFFERS; i++) {
        if (g_abuf[i] != 0) {
            waveOutUnprepareHeader(g_wave, &g_hdr[i], sizeof(WAVEHDR));
            free(g_abuf[i]);
            g_abuf[i] = 0;
        }
    }
    waveOutClose(g_wave);
    g_wave = 0;
    g_qcount = 0;
    g_aopen = 0;
}

void plat_audio_write(const s16 *frames, u32 count)
{
    int i, slot, tries;

    if (!g_aopen || frames == 0 || count == 0) return;
    if (count > AUDIO_FRAMES) count = AUDIO_FRAMES;
    if (g_qcount >= AUDIO_QUEUE) { g_adropped += count; return; }
    memcpy(g_queue[g_qcount], frames, count * 4);
    g_qsize[g_qcount] = count;
    g_qcount++;
    /* Hand over whatever the device can take now, oldest chunk first. */
    for (i = 0; i < g_qcount; ) {
        slot = -1;
        for (tries = 0; tries < AUDIO_BUFFERS; tries++) {
            int k = (g_anext + tries) % AUDIO_BUFFERS;
            if ((g_hdr[k].dwFlags & WHDR_DONE) != 0) { slot = k; break; }
        }
        if (slot < 0) break;                           /* every buffer still playing */
        g_anext = (slot + 1) % AUDIO_BUFFERS;
        memcpy(g_abuf[slot], g_queue[i], g_qsize[i] * 4);
        g_hdr[slot].dwBufferLength = g_qsize[i] * 4;
        g_hdr[slot].dwFlags &= ~WHDR_DONE;
        if (waveOutWrite(g_wave, &g_hdr[slot], sizeof(WAVEHDR)) != MMSYSERR_NOERROR) {
            g_hdr[slot].dwFlags |= WHDR_DONE;
            g_adropped += g_qsize[i];
        }
        i++;
    }
    if (i > 0) {
        memmove(g_queue[0], g_queue[i], (u32)(g_qcount - i) * sizeof(g_queue[0]));
        memmove(g_qsize, g_qsize + i, (u32)(g_qcount - i) * sizeof(g_qsize[0]));
        g_qcount -= i;
    }
}

u32 plat_audio_dropped(void)
{
    u32 n = g_adropped;
    g_adropped = 0;
    return n;
}

u32 plat_audio_played(void)
{
    return 0;                          /* waveOut keeps its own clock; nothing to report */
}

u32 plat_audio_starved(void) { return 0; }

u32 plat_rtc_elapsed_ms(void)
{
    return 0;                          /* the host clock is already real time */
}

u32 plat_emulated_ms(void)
{
    return 0;                          /* no emulated clock under the host's own scheduler */
}

u32 plat_free_base_kb(void) { return 0; }
u32 plat_base_total_kb(void) { return 0; }

u32 plat_pump(input_state *in)
{
    MSG msg;
    u32 i;
    static u8 prev[KEY_COUNT];

    while (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) g_quit = 1;
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    for (i = 0; i < KEY_COUNT; i++) {
        in->down[i] = g_keys[i];
        g_pressed[i] = (u8)(g_keys[i] && !prev[i]);
        in->pressed[i] = g_pressed[i];
        prev[i] = g_keys[i];
    }
    in->mouse_x = g_mouse_x;
    in->mouse_y = g_mouse_y;
    in->mouse_left = (u8)(g_mouse_buttons & 1);
    in->mouse_right = (u8)(g_mouse_buttons & 2);
    return (u32)(!g_quit);
}

void plat_set_frame_hz(u32 hz)
{
    if (hz == 0) hz = 50;
    g_frame_ms = (1000u + hz / 2u) / hz;
    if (g_frame_ms == 0) g_frame_ms = 1;
    frame_ticks_recalc();
}

void plat_frame_sync(void)
{
    __int64 now;

    /* The emulated frame is 141,875 of 7,093,790 clocks, i.e. exactly 20 ms, and the period is
     * counted on the performance counter rather than on GetTickCount - the 15.6 ms tick cannot
     * express 20 ms, so the old loop alternated 15/31 ms and the picture paced unevenly. */
    if (g_frame_ticks == 0) { Sleep(g_frame_ms); return; }
    g_nextFrame += g_frame_ticks;
    for (;;) {
        __int64 remain;
        now = qpc_now();
        remain = g_nextFrame - now;
        if (remain <= 0) break;
        /* Sleep while there is more than a millisecond to go, then spin with Sleep(0) (yield to
         * whoever else wants the CPU): spinning the last millisecond keeps the cadence exact. */
        if (remain > g_qpcFreq / 1000) Sleep(1);
        else Sleep(0);
    }
    /* Catch up if we fell far behind (cooperative multitasking, a debugger break). */
    now = qpc_now();
    if (now - g_nextFrame > g_qpcFreq / 10) g_nextFrame = now;
}

u32 plat_ticks_ms(void)
{
    return GetTickCount() - g_start_ms;
}

/* --- files ---------------------------------------------------------------- */

struct plat_file {
    HANDLE h;
    u32    size;
};

plat_file *plat_open(const char *path)
{
    HANDLE h;
    plat_file *f;

    h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING,
                    FILE_ATTRIBUTE_NORMAL | FILE_FLAG_RANDOM_ACCESS, 0);
    if (h == INVALID_HANDLE_VALUE) return NULLP;
    f = (plat_file *)malloc(sizeof(plat_file));
    if (!f) { CloseHandle(h); return NULLP; }
    f->h = h;
    f->size = GetFileSize(h, 0);
    return f;
}

void plat_close(plat_file *f)
{
    if (!f) return;
    CloseHandle(f->h);
    free(f);
}

u32 plat_size(const plat_file *f)
{
    return f ? f->size : 0;
}

u32 plat_read(const plat_file *f, u32 offset, void *dst, u32 len)
{
    DWORD got = 0;
    if (!f || !dst || len == 0) return 0;
    if (offset > f->size) return 0;
    if (len > f->size - offset) len = f->size - offset;
    if (SetFilePointer(f->h, (LONG)offset, 0, FILE_BEGIN) == INVALID_SET_FILE_POINTER) return 0;
    if (!ReadFile(f->h, dst, len, &got, 0)) return 0;
    return (u32)got;
}

plat_file *plat_create(const char *path)
{
    HANDLE h;
    plat_file *f;

    h = CreateFileA(path, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (h == INVALID_HANDLE_VALUE) return NULLP;
    f = (plat_file *)malloc(sizeof(plat_file));
    if (!f) { CloseHandle(h); return NULLP; }
    f->h = h;
    f->size = 0;
    return f;
}

u32 plat_write(plat_file *f, u32 offset, const void *src, u32 len)
{
    DWORD put = 0;
    if (!f || !src || len == 0) return 0;
    if (SetFilePointer(f->h, (LONG)offset, 0, FILE_BEGIN) == INVALID_SET_FILE_POINTER) return 0;
    if (!WriteFile(f->h, src, len, &put, 0)) return 0;
    if (offset + put > f->size) f->size = offset + put;
    return (u32)put;
}

void *plat_alloc(u32 bytes)
{
    return malloc(bytes);
}

void plat_free(void *p)
{
    if (p) free(p);
}

/* --- startup -------------------------------------------------------------- */

const char *plat_exe_dir(void)
{
    static char dir[MAX_PATH];
    static int ready;
    DWORD n;

    if (ready) return dir;
    ready = 1;
    n = GetModuleFileNameA(0, dir, (DWORD)sizeof dir);
    if (n == 0 || n >= sizeof dir) { dir[0] = '.'; dir[1] = 0; return dir; }
    while (n > 0 && (dir[n - 1] == '\\' || dir[n - 1] == '/')) dir[--n] = 0;
    while (n > 0 && dir[n - 1] != '\\' && dir[n - 1] != '/') dir[--n] = 0;
    if (n > 3) dir[n - 1] = 0;              /* drop the separator, keep "C:\" */
    return dir;
}

u32 plat_path_kind(const char *path)
{
    DWORD attr;

    if (!path || !*path) return PLAT_PATH_MISSING;
    attr = GetFileAttributesA(path);
    if (attr == INVALID_FILE_ATTRIBUTES) return PLAT_PATH_MISSING;
    return (attr & FILE_ATTRIBUTE_DIRECTORY) ? PLAT_PATH_DIR : PLAT_PATH_FILE;
}

u32 plat_mkdir(const char *path)
{
    if (!path || !*path) return 0;
    if (CreateDirectoryA(path, 0)) return 1;
    return plat_path_kind(path) == PLAT_PATH_DIR;
}

/* A save slot is a directory the engine writes its save file into, so "no file in it" is what an
 * unused slot looks like. A missing directory counts as empty. */
u32 plat_dir_empty(const char *path)
{
    char pattern[288];
    WIN32_FIND_DATAA fd;
    HANDLE h;

    if (!path || !*path) return 1;
    if (strlen(path) + 3 >= sizeof pattern) return 1;
    sprintf(pattern, "%s\\*", path);
    h = FindFirstFileA(pattern, &fd);
    if (h == INVALID_HANDLE_VALUE) return 1;
    do {
        if (strcmp(fd.cFileName, ".") == 0 || strcmp(fd.cFileName, "..") == 0) continue;
        if ((fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0) { FindClose(h); return 0; }
    } while (FindNextFileA(h, &fd));
    FindClose(h);
    return 1;
}

s32 plat_spawn(const char *exe, const char *args)
{
    STARTUPINFOA si;
    PROCESS_INFORMATION pi;
    DWORD code = 0;
    char cmd[1024];

    if (!exe || !*exe) return -1;
    if (strlen(exe) + (args ? strlen(args) : 0) + 4 >= sizeof cmd) return -1;
    sprintf(cmd, "\"%s\"%s%s", exe, (args && *args) ? " " : "", args ? args : "");

    memset(&si, 0, sizeof si);
    si.cb = sizeof si;
    memset(&pi, 0, sizeof pi);
    if (!CreateProcessA(exe, cmd, 0, 0, TRUE, 0, 0, 0, &si, &pi)) return -1;

    WaitForSingleObject(pi.hProcess, INFINITE);
    GetExitCodeProcess(pi.hProcess, &code);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    return (s32)code;
}

void plat_set_title(const char *text)
{
    if (g_hwnd && text) SetWindowText(g_hwnd, text);
}

/* --- crash journal -------------------------------------------------------------------------
 * A native crash takes the process down with no output, so the last machine state is written to
 * <exe dir>\recomp-crash.txt every frame and flushed. An unhandled exception appends its code and
 * address to the same file, which makes "the window just closed" answerable after the fact. */
#define CRASH_STATE_BYTES 2048
static FILE *g_crashFile;

static const char *crash_path(void)
{
    static char path[MAX_PATH];
    sprintf(path, "%s\\recomp-crash.txt", plat_exe_dir());
    return path;
}

static LONG CALLBACK crash_filter(EXCEPTION_POINTERS *ep)
{
    if (g_crashFile != 0)
    {
        char line[320];
        u32 base = (u32)(ULONG_PTR)GetModuleHandle(0);
        u32 at = (u32)(ULONG_PTR)ep->ExceptionRecord->ExceptionAddress;
        u32 info = (ep->ExceptionRecord->NumberParameters > 0)
                       ? (u32)ep->ExceptionRecord->ExceptionInformation[0] : 0u;
        sprintf(line, "\n** crash: exception %08lX at %08lX (module+%08lX) info %08lX **\n",
                (unsigned long)ep->ExceptionRecord->ExceptionCode,
                (unsigned long)at, (unsigned long)(at - base), (unsigned long)info);
        fseek(g_crashFile, 0, SEEK_END);
        fwrite(line, 1, strlen(line), g_crashFile);
        fflush(g_crashFile);
    }
    return EXCEPTION_EXECUTE_HANDLER;
}

void plat_crash_state(const char *text)
{
    static char block[CRASH_STATE_BYTES];
    size_t n;

    if (text == 0) return;
    if (g_crashFile == 0)
    {
        g_crashFile = fopen(crash_path(), "wb+");
        if (g_crashFile == 0) return;
        SetUnhandledExceptionFilter(crash_filter);
    }
    /* Fixed-size block, so the file always has the same length and no stale tail survives. */
    memset(block, ' ', sizeof block);
    n = strlen(text);
    if (n > sizeof block - 1) n = sizeof block - 1;
    memcpy(block, text, n);
    block[n] = 0;
    fseek(g_crashFile, 0, SEEK_SET);
    fwrite(block, 1, sizeof block, g_crashFile);
    fflush(g_crashFile);
}

