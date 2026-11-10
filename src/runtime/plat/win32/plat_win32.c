/* Win32 platform layer: one fixed 320x200 8-bit DIB section, one logical palette,
 * BitBlt to the window, 50 Hz pacing, keyboard and mouse.
 *
 * Built with: wcl386 -bt=nt -5s -ox -i=..\core ..\core\main.c ..\core\gfx.c plat_win32.c
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "platform.h"

#define TIMER_RES_MS 1

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
static u32           g_next_frame_ms;
static u8            g_keys[KEY_COUNT];
static u8            g_pressed[KEY_COUNT];
static s16           g_mouse_x, g_mouse_y;
static u8            g_mouse_buttons;

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
        return 0;
    case WM_KEYUP:
        if (wp == VK_ESCAPE) g_keys[KEY_ESCAPE] = 0;
        if (wp == VK_UP)     g_keys[KEY_UP] = 0;
        if (wp == VK_DOWN)   g_keys[KEY_DOWN] = 0;
        if (wp == VK_LEFT)   g_keys[KEY_LEFT] = 0;
        if (wp == VK_RIGHT)  g_keys[KEY_RIGHT] = 0;
        if (wp == VK_RETURN) g_keys[KEY_ENTER] = 0;
        if (wp == VK_SPACE)  g_keys[KEY_FIRE] = 0;
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
    g_start_ms = GetTickCount();
    g_next_frame_ms = g_start_ms;
    return 1;
}

void plat_set_fullscreen(u32 on)
{
    g_fullscreen = on ? 1u : 0u;
}

u32 plat_fullscreen(void)
{
    return g_fullscreen;
}

void plat_shutdown(void)
{
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

static u32 g_frame_ms = 20;                /* 50 Hz, the Amiga frame rate */

void plat_set_frame_hz(u32 hz)
{
    if (hz == 0) hz = 50;
    g_frame_ms = (1000u + hz / 2u) / hz;
    if (g_frame_ms == 0) g_frame_ms = 1;
}

void plat_frame_sync(void)
{
    u32 now;
    g_next_frame_ms += g_frame_ms;
    for (;;) {
        now = GetTickCount();
        if ((s32)(now - g_next_frame_ms) >= 0) break;
        Sleep(TIMER_RES_MS);
    }
    /* Catch up if we fell far behind (cooperative multitasking). */
    now = GetTickCount();
    if ((s32)(now - g_next_frame_ms) > 100) g_next_frame_ms = now;
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
