/* Win32 platform layer: one 8-bit DIB section the size of the picture the core presents, one
 * logical palette, BitBlt to the window, 50 Hz pacing, keyboard and mouse.
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
#include "border.h"

/* waveOut lives in winmm; Watcom links a library through this pragma (the build scripts list no
 * libraries). */
#pragma library("winmm")
#pragma library("user32")

static HWND          g_hwnd;
static HDC           g_memdc;
static HBITMAP       g_dib;
static u8           *g_bits;
static HDC           g_frame_dc;      /* fullscreen: screen-sized compose buffer */
static HBITMAP       g_frame_dib;
static u32          *g_frame_bits;
static int           g_frame_w, g_frame_h;
static HPALETTE      g_pal;
static int           g_fb_w = SCREEN_W, g_fb_h = SCREEN_H;  /* the DIB, i.e. this frame's picture */
static int           g_quit;
static u32           g_fullscreen;
static u32           g_start_ms;
static u32           g_frame_ms = 20;    /* 50 Hz, the Amiga frame rate */
static u8            g_keys[KEY_COUNT];
static u8            g_pressed[KEY_COUNT];
static u8            g_dirHeld[4];        /* per direction: bit 0 the arrow key, bit 1 W/A/S/D */
static s16           g_mouse_x, g_mouse_y;
static u8            g_mouse_buttons;
static u32           g_mouse_motion;      /* WM_MOUSEMOVE messages seen, for "did it move" */
static u32           g_mouse_motion_seen; /* ... and the count the last plat_pump reported */
static u32           g_mouse_clicks;      /* WM_LBUTTONDOWN messages seen, for the press edge */
static u32           g_mouse_clicks_seen; /* ... and the count the last plat_pump reported */
static int           g_pic_x, g_pic_y, g_pic_w, g_pic_h;  /* fullscreen: where the picture is */
static int           g_cursorHidden;     /* ShowCursor(TRUE) calls owed to the desktop */

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

/* The game is keyboard-only, so while its window has the focus the pointer is hidden and confined
 * to the picture: a cursor sitting on top of the graphics is a piece of desktop in the middle of a
 * 1989 game, and one that can be dragged off the window makes the player find it again to click
 * back in. Both are undone when the focus leaves, so the mouse is a normal mouse everywhere else.
 *
 * ShowCursor is a counter, not a flag, and other code in the process may have moved it: ask until
 * the answer is negative (hidden) and remember how many calls that took, which is exactly the
 * number to give back. The clip rectangle is in screen coordinates. */
static void cursor_clip(void)
{
    RECT cr;

    if (g_cursorHidden == 0) return;
    if (GetClientRect(g_hwnd, &cr))
    {
        MapWindowPoints(g_hwnd, 0, (POINT *)&cr, 2);
        ClipCursor(&cr);
    }
}

static void cursor_capture(int on)
{
    if (on)
    {
        if (g_cursorHidden != 0) return;
        cursor_clip();
        for (;;)
        {
            int count = ShowCursor(FALSE);
            g_cursorHidden++;
            if (count < 0) break;
        }
        cursor_clip();
    }
    else
    {
        if (g_cursorHidden == 0) return;
        ClipCursor(0);
        while (g_cursorHidden > 0) { ShowCursor(TRUE); g_cursorHidden--; }
    }
}

/* The arrow cluster and W/A/S/D are the same four directions, so one direction can be held by two
 * physical keys at once: the logical key stays down until the last of them is released, and a
 * release of one must not report a release of the direction. */
static void dir_key(int dir, int wasd, int down)
{
    u8 bit = (u8)(wasd ? 2 : 1);

    if (down) g_dirHeld[dir] |= bit;
    else      g_dirHeld[dir] &= (u8)~bit;
    g_keys[KEY_UP + dir] = (u8)(g_dirHeld[dir] != 0);
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
    /* Focus decides who owns the pointer: the game hides and confines it while it is being played,
     * and gives it back the moment the window is not the one being used. */
    case WM_SETFOCUS:
        cursor_capture(1);
        return 0;
    case WM_KILLFOCUS:
        cursor_capture(0);
        /* A key-up that lands in another window never arrives here, so nothing may stay held: a
         * later W press would otherwise still be the cheat chord (src\host\cheat.c), and a
         * direction would stay down with no key to release it. */
        memset(g_keys, 0, sizeof g_keys);
        memset(g_dirHeld, 0, sizeof g_dirHeld);
        return 0;
    case WM_MOUSEMOVE:
        g_mouse_x = (s16)LOWORD(lp);
        g_mouse_y = (s16)HIWORD(lp);
        g_mouse_motion++;
        return 0;
    case WM_LBUTTONDOWN: g_mouse_buttons |= 1; g_mouse_clicks++; return 0;
    case WM_LBUTTONUP:   g_mouse_buttons &= (u8)~1; return 0;
    case WM_RBUTTONDOWN: g_mouse_buttons |= 2; return 0;
    case WM_RBUTTONUP:   g_mouse_buttons &= (u8)~2; return 0;
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE) g_keys[KEY_ESCAPE] = 1;
        if (wp == VK_UP)     dir_key(0, 0, 1);
        if (wp == VK_DOWN)   dir_key(1, 0, 1);
        if (wp == VK_LEFT)   dir_key(2, 0, 1);
        if (wp == VK_RIGHT)  dir_key(3, 0, 1);
        if (wp == 'W')       dir_key(0, 1, 1);
        if (wp == 'S')       dir_key(1, 1, 1);
        if (wp == 'A')       dir_key(2, 1, 1);
        if (wp == 'D')       dir_key(3, 1, 1);
        if (wp == VK_RETURN) g_keys[KEY_ENTER] = 1;
        if (wp == VK_SPACE)  g_keys[KEY_FIRE] = 1;
        if (wp == VK_F1)     g_keys[KEY_F1] = 1;
        if (wp == VK_F2)     g_keys[KEY_F2] = 1;
        if (wp == VK_F3)     g_keys[KEY_F3] = 1;
        if (wp == VK_F4)     g_keys[KEY_F4] = 1;
        if (wp == VK_F5)     g_keys[KEY_F5] = 1;
        if (wp >= '0' && wp <= '9') g_keys[KEY_0 + (int)(wp - '0')] = 1;
        if (wp == 'W')       g_keys[KEY_W] = 1;
        if (wp == 'C')       g_keys[KEY_C] = 1;
        if (wp == 'T')       g_keys[KEY_T] = 1;
        /* Left Control only: the extended bit (lParam bit 24) is set for the right-hand one. */
        if ((wp == VK_CONTROL || wp == VK_LCONTROL) && ((lp >> 24) & 1) == 0)
            g_keys[KEY_CTRL] = 1;
        return 0;
    case WM_KEYUP:
        if (wp == VK_ESCAPE) g_keys[KEY_ESCAPE] = 0;
        if (wp == VK_UP)     dir_key(0, 0, 0);
        if (wp == VK_DOWN)   dir_key(1, 0, 0);
        if (wp == VK_LEFT)   dir_key(2, 0, 0);
        if (wp == VK_RIGHT)  dir_key(3, 0, 0);
        if (wp == 'W')       dir_key(0, 1, 0);
        if (wp == 'S')       dir_key(1, 1, 0);
        if (wp == 'A')       dir_key(2, 1, 0);
        if (wp == 'D')       dir_key(3, 1, 0);
        if (wp == VK_RETURN) g_keys[KEY_ENTER] = 0;
        if (wp == VK_SPACE)  g_keys[KEY_FIRE] = 0;
        if (wp == VK_F1)     g_keys[KEY_F1] = 0;
        if (wp == VK_F2)     g_keys[KEY_F2] = 0;
        if (wp == VK_F3)     g_keys[KEY_F3] = 0;
        if (wp == VK_F4)     g_keys[KEY_F4] = 0;
        if (wp == VK_F5)     g_keys[KEY_F5] = 0;
        if (wp >= '0' && wp <= '9') g_keys[KEY_0 + (int)(wp - '0')] = 0;
        if (wp == 'W')       g_keys[KEY_W] = 0;
        if (wp == 'C')       g_keys[KEY_C] = 0;
        if (wp == 'T')       g_keys[KEY_T] = 0;
        if ((wp == VK_CONTROL || wp == VK_LCONTROL) && ((lp >> 24) & 1) == 0)
            g_keys[KEY_CTRL] = 0;
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
        r.right = g_fb_w; r.bottom = g_fb_h;
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

/* (Re)creates the DIB the core draws into, at exactly the size of the picture it presents. A DIB
 * row is padded to a longword, so the stride - not the width - is what the core copies row by row;
 * plat_set_framebuffer_size returns it. */
static int make_dib(int w, int h)
{
    BITMAPINFO *bi;
    HDC screen;
    HBITMAP dib;
    void *bits = 0;

    bi = (BITMAPINFO *)malloc(sizeof(BITMAPINFOHEADER) + PAL_ENTRIES * sizeof(RGBQUAD));
    if (!bi) return 0;
    memset(bi, 0, sizeof(BITMAPINFOHEADER) + PAL_ENTRIES * sizeof(RGBQUAD));
    bi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bi->bmiHeader.biWidth = w;
    bi->bmiHeader.biHeight = -h;                 /* top-down rows */
    bi->bmiHeader.biPlanes = 1;
    bi->bmiHeader.biBitCount = 8;
    bi->bmiHeader.biCompression = BI_RGB;

    if (!g_memdc) {
        screen = GetDC(g_hwnd);
        g_memdc = CreateCompatibleDC(screen);
        ReleaseDC(g_hwnd, screen);
        if (!g_memdc) { free(bi); return 0; }
    }

    dib = CreateDIBSection(g_memdc, bi, DIB_RGB_COLORS, &bits, 0, 0);
    free(bi);
    if (!dib) return 0;
    SelectObject(g_memdc, dib);              /* the previous bitmap is deselected by this */
    if (g_dib) DeleteObject(g_dib);
    g_dib = dib;
    g_bits = (u8 *)bits;
    g_fb_w = w;
    g_fb_h = h;
    return 1;
}

static int make_palette(void)
{
    LOGPALETTE *lp;
    unsigned int i;

    lp = (LOGPALETTE *)malloc(sizeof(LOGPALETTE) + PAL_ENTRIES * sizeof(PALETTEENTRY));
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
    return g_pal != 0;
}

u32 plat_init(const char *title)
{
    g_start_ms = 0;
    if (!make_window(title)) return 0;
    if (!make_dib(g_fb_w, g_fb_h)) return 0;
    if (!make_palette()) return 0;
    /* The window has the focus by now in the usual case; WM_SETFOCUS covers the rest. */
    cursor_capture(1);
    /* The frame period is counted on the performance counter: the millisecond timer's 15.6 ms
     * granularity cannot express the Amiga's 20 ms frame. */
    if (!QueryPerformanceFrequency((LARGE_INTEGER *)&g_qpcFreq)) g_qpcFreq = 0;
    frame_ticks_recalc();
    g_nextFrame = qpc_now();
    g_start_ms = GetTickCount();
    return 1;
}

/* Puts the window into the mode g_fullscreen names. make_window applies it while it creates the
 * window; this is the same change on a window that already exists, which is what the title's
 * settings menu needs: the toggle has to take effect at once, not on the next start.
 *
 * The style a SetWindowLong installs must carry WS_VISIBLE: the visible bit belongs to the style, so
 * a style without it hides the very window the game keeps drawing into - a player sees the picture
 * vanish and, on the taskbar, a game that "closed". SWP_SHOWWINDOW states it again, and the frame is
 * composed once here so the new client rectangle never shows what the old mode left in it. */
static void apply_window_mode(void)
{
    DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;

    if (g_hwnd == 0) return;
    if (g_fullscreen) {
        SetWindowLong(g_hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
        SetWindowPos(g_hwnd, HWND_TOP, 0, 0, GetSystemMetrics(SM_CXSCREEN),
                     GetSystemMetrics(SM_CYSCREEN), SWP_FRAMECHANGED | SWP_SHOWWINDOW);
        SetForegroundWindow(g_hwnd);
    } else {
        RECT r;
        int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);

        style |= WS_VISIBLE;
        r.left = 0; r.top = 0;
        r.right = g_fb_w; r.bottom = g_fb_h;
        SetWindowLong(g_hwnd, GWL_STYLE, style);
        AdjustWindowRect(&r, style, FALSE);
        SetWindowPos(g_hwnd, HWND_TOP, (sw - (r.right - r.left)) / 2, (sh - (r.bottom - r.top)) / 2,
                     r.right - r.left, r.bottom - r.top, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    }
    /* The picture's rectangle and the pointer's clip both depend on the mode. In windowed mode the
     * client is the picture 1:1 again, so nothing has to be mapped. */
    g_pic_w = g_pic_h = 0;
    plat_present();                      /* this frame, in the new mode, at once */
    cursor_clip();
}

void plat_set_fullscreen(u32 on)
{
    u32 want = on ? 1u : 0u;

    if (want == g_fullscreen) return;
    g_fullscreen = want;
    apply_window_mode();
}

u32 plat_has_fullscreen(void)
{
    return 1;                                    /* the windowed build has a mode to choose */
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
           "; false = window the size of the screen, one emulated pixel per desktop pixel\r\n"
           ";            (320x200, and the scene's own overscan size where it uses one);\r\n"
           "; true = fullscreen, the whole 4:3 picture scaled up to fit with the border art\r\n"
           ";            either side.\r\n"
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
    cursor_capture(0);
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

/* The picture is the screen the copper list programs, so the DIB takes its size. Windowed the
 * window follows it: the chicken race's narration page is 368 columns across (its text is laid out
 * over the overscan) and squeezing that into a 320-pixel window drops every eighth column, which
 * is exactly what turned its letters into noise. Fullscreen needs nothing here - plat_present
 * scales the whole DIB into the 4:3 area. */
u32 plat_set_framebuffer_size(u32 w, u32 h)
{
    int nw = (int)w, nh = (int)h;
    RECT r;
    DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;

    if (nw <= 0 || nh <= 0 || nw > 1024 || nh > 1024) return 0;
    if (nw != g_fb_w || nh != g_fb_h) {
        if (!make_dib(nw, nh)) return 0;
        if (!g_fullscreen) {
            r.left = 0; r.top = 0;
            r.right = nw; r.bottom = nh;
            AdjustWindowRect(&r, style, FALSE);
            SetWindowPos(g_hwnd, 0, 0, 0, r.right - r.left, r.bottom - r.top,
                         SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
        }
        cursor_clip();
    }
    /* A DIB row is padded to a longword: that, not the width, is the row the core copies. */
    return (u32)((nw + 3) & ~3);
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
    g_frame_bits = 0;
    g_frame_w = 0;
    g_frame_h = 0;
}

static int make_frame(int w, int h)
{
    BITMAPINFO bi;
    HDC screen;
    void *bits = 0;

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
    g_frame_bits = (u32 *)bits;
    g_frame_w = w;
    g_frame_h = h;
    /* The bars never change, so they are painted once and only the picture rect is rewritten.
     * They are the port's border art, not black: the picture is 4:3, so a widescreen window shows
     * the curtain either side of it (border.c). */
    border_paint(g_frame_bits, w, h);
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
         * largest 4:3 rectangle into the screen and leave the rest to the border art painted
         * under it. */
        w = ch * 4 / 3;
        if (w > cw) {
            w = cw;
            h = cw * 3 / 4;
        } else {
            h = ch;
        }
        x = (cw - w) / 2;
        y = (ch - h) / 2;
        g_pic_x = x; g_pic_y = y; g_pic_w = w; g_pic_h = h;
        SetStretchBltMode(g_frame_dc, COLORONCOLOR);
        StretchBlt(g_frame_dc, x, y, w, h, g_memdc, 0, 0, g_fb_w, g_fb_h, SRCCOPY);
        BitBlt(dc, 0, 0, cw, ch, g_frame_dc, 0, 0, SRCCOPY);
    } else {
        SelectPalette(dc, g_pal, FALSE);
        RealizePalette(dc);
        BitBlt(dc, 0, 0, g_fb_w, g_fb_h, g_memdc, 0, 0, SRCCOPY);
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
/* 512 frames is ~12 ms. The mixer hands over a frame's worth at each vblank, so the queue is the
 * only slack there is when a frame takes longer than a frame time: at 4 chunks (46 ms) a slow
 * stretch drops samples - measured ~16 % - and at 8 (93 ms) it drops none. Latency is 93 ms of
 * audio, which nothing in this game notices. */
#define AUDIO_FRAMES  512
#define AUDIO_QUEUE   8           /* chunks waiting for a free device buffer, ~93 ms */

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

/* Client point -> framebuffer pixel. Windowed the client is exactly the picture, so the point is
 * used as it is; fullscreen the picture is a 4:3 rectangle centred in the window, so the pointer
 * has to be mapped into it. It is clamped: a pointer on the border art then reads as the nearest
 * picture edge, which is what a map cursor pushed past its travel window needs (that is the
 * "scroll this way" input). */
static void mouse_to_fb(s16 *x, s16 *y)
{
    long fx = *x, fy = *y;

    if (g_fullscreen && g_pic_w > 0 && g_pic_h > 0) {
        fx = ((fx - g_pic_x) * g_fb_w) / g_pic_w;
        fy = ((fy - g_pic_y) * g_fb_h) / g_pic_h;
    }
    if (fx < 0) fx = 0;
    if (fy < 0) fy = 0;
    if (fx > g_fb_w - 1) fx = g_fb_w - 1;
    if (fy > g_fb_h - 1) fy = g_fb_h - 1;
    *x = (s16)fx;
    *y = (s16)fy;
}

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
    mouse_to_fb(&in->mouse_x, &in->mouse_y);
    in->mouse_left = (u8)(g_mouse_buttons & 1);
    in->mouse_right = (u8)(g_mouse_buttons & 2);
    in->mouse_left_pressed = (u8)(g_mouse_clicks != g_mouse_clicks_seen);
    g_mouse_clicks_seen = g_mouse_clicks;
    in->mouse_present = 1;
    in->mouse_moved = (u8)(g_mouse_motion != g_mouse_motion_seen);
    g_mouse_motion_seen = g_mouse_motion;
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

/* Every file directly in dir, for the first-start extraction's search for the floppy images. */
u32 plat_dir_files(const char *dir, plat_dir_visit visit, void *ctx)
{
    char pattern[288];
    WIN32_FIND_DATAA fd;
    HANDLE h;
    u32 n = 0;

    if (!dir || !*dir || !visit) return 0;
    if (strlen(dir) + 3 >= sizeof pattern) return 0;
    sprintf(pattern, "%s\\*", dir);
    h = FindFirstFileA(pattern, &fd);
    if (h == INVALID_HANDLE_VALUE) return 0;
    do {
        if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) continue;
        visit(fd.cFileName, (u32)fd.nFileSizeLow, ctx);
        n++;
    } while (FindNextFileA(h, &fd));
    FindClose(h);
    return n;
}

void plat_message(const char *title, const char *text)
{
    if (!text) return;
    MessageBoxA(0, text, title ? title : "", MB_OK | MB_ICONINFORMATION | MB_SETFOREGROUND);
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

