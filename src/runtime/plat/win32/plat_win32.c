/* Win32 platform layer: one 8-bit DIB section the size of the picture the core presents, one
 * logical palette, BitBlt to the window, 50 Hz pacing, keyboard and mouse.
 *
 * The window has a resizable frame. The game's screen - 320x200 - scales with the client's *height*
 * (one scale for both axes when windowed, the 4:3 an Amiga monitor shows on when fullscreen), so a
 * wider window only widens the bars beside it, which the port's border art fills (border.c), and a
 * client narrower than the screen's shape shows the bars above and below instead of cropping it.
 * The picture is fitted into the screen's rectangle at the screen's own pixel shape (see
 * picture_rect), so a scene with its own, larger screen - the chicken race's 368x216 window - is the
 * same shape as the rest of the game instead of a shape of its own. Both go through one 32-bit
 * frame the picture is stretched into, blitted to the window in one BitBlt.
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
static int           g_pic_x, g_pic_y, g_pic_w, g_pic_h;  /* where the picture is, when scaled */
static int           g_cursorHidden;     /* ShowCursor(TRUE) calls owed to the desktop */
static int           g_inSizeMove;       /* a size/move loop owns the pointer while it runs */
static int           g_hasFocus;         /* the window owns the pointer while it has the focus */
static u32           g_win_w, g_win_h;   /* windowed client size to come back to (0 = the picture) */

/* The frame period is counted on the performance counter: the millisecond timer's 15.6 ms
 * granularity cannot express the Amiga's 20 ms frame. */
static __int64       g_qpcFreq;          /* QueryPerformanceFrequency, 0 = not available */
static __int64       g_nextFrame;        /* QPC tick of the next frame boundary */
static __int64       g_frame_ticks;      /* QPC ticks per frame */

static void present_dc(HDC dc);
static void journal_discard(void);        /* plat_shutdown: this run ended by itself */

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

/* While the window has the focus it owns the pointer, exactly as the fixed 320x200 window always
 * did: the system cursor is hidden - the game draws its own arrow where it needs one (display.c) -
 * and the pointer is confined to the picture, which also pulls it in when it was outside. Letting
 * the window lose the focus gives it back (Alt+Tab), and that is how the frame is reached: a frame
 * that can be grabbed while the game is playing is a frame the pointer has to be free for.
 *
 * Confining the pointer *during* a drag is what broke resizing in the first place - Windows
 * measures a dragged frame from the pointer, so a pointer held inside a client that the window is
 * itself shrinking follows the shrink, and the window runs down to its minimum tracking size
 * (measured: 336 -> 176 px clipped, 336 -> 465 px unclipped). A size or move loop therefore
 * releases the pointer for as long as it runs, and it is confined again once it is over.
 * A frame click also *activates* the window before the loop starts, so the pointer may not be
 * taken by the activation either: the same holds for every click on the frame, the close box and
 * the caption included (see WM_SETFOCUS and WM_NCLBUTTONDOWN, which decide it by what the pointer
 * is over - the picture, the only place the game owns it).
 *
 * ShowCursor is a counter, not a flag, and other code in the process may have moved it: ask until
 * the answer is negative (hidden) and remember how many calls that took, which is exactly the
 * number to give back. ClipCursor takes screen coordinates. */
static void cursor_clip(int on)
{
    RECT r;

    if (!on || g_hwnd == 0) { ClipCursor(0); return; }
    if (!GetClientRect(g_hwnd, &r)) { ClipCursor(0); return; }
    MapWindowPoints(g_hwnd, 0, (POINT *)&r, 2);
    ClipCursor(&r);
}

static void cursor_hide(void)
{
    if (g_cursorHidden != 0) return;
    for (;;)
    {
        int count = ShowCursor(FALSE);
        g_cursorHidden++;
        if (count < 0) break;
    }
}

static void cursor_release(void)
{
    ClipCursor(0);
    while (g_cursorHidden > 0) { ShowCursor(TRUE); g_cursorHidden--; }
}

/* Whether the pointer is over the picture, the client - the one place the game owns it. The clip
 * holds a pointer it has pulled in *on* the client's far edge, which is where the frame's own
 * border starts, so those two coordinates count as inside: a pointer the game's clip keeps there is
 * still the picture's (a hit test at that spot would say HTBOTTOMRIGHT). */
static int pointer_over_client(void)
{
    POINT p;
    RECT r;

    if (g_hwnd == 0 || !GetCursorPos(&p) || !ScreenToClient(g_hwnd, &p)) return 0;
    if (!GetClientRect(g_hwnd, &r)) return 0;
    return (int)p.x >= r.left && (int)p.x <= r.right && (int)p.y >= r.top && (int)p.y <= r.bottom;
}

/* The pointer's owner, decided by the focus: while the game is being played the pointer is the
 * game's (hidden and confined to the picture); a size or move loop, or the window not being the one
 * in use, makes it the desktop's again. */
static void cursor_update(void)
{
    if (g_hasFocus && !g_inSizeMove)
    {
        cursor_hide();
        cursor_clip(1);
    }
    else cursor_release();
}

/* The pointer over the picture is the game's, so a move or a press there takes it back if the
 * frame (a press on the caption or the close box), a size or move loop, or another window had it a
 * moment ago. Nothing is owed while it is the game's already - this runs on every mouse move. */
static void cursor_retake(void)
{
    if (g_hasFocus && !g_inSizeMove && g_cursorHidden == 0) cursor_update();
}

/* Re-asserts the capture where it is the game's to take - over the picture, or wherever it already
 * is the game's - and leaves the frame's own pointer alone otherwise: a gain of focus, a new client
 * size and a new picture all land while the player may be working the frame, and pulling the
 * pointer out of a button he is using is exactly what the close box must not do.
 *
 * A pointer the game's own clip holds is the game's, whatever the arithmetic says: ClipCursor lets
 * it rest a pixel past the clip's far edge (measured: 909,661 held by a clip of ../908,662), so
 * asking "is it inside the client?" of a pointer that is already captured can answer no - and
 * acting on that answer lets the pointer go exactly when the player pushes it into a corner. */
static void cursor_refresh(void)
{
    if (g_cursorHidden > 0 || (g_hasFocus && !g_inSizeMove && pointer_over_client()))
        cursor_update();
    else
        cursor_release();
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

/* The windowed frame: a caption, a close box, and the resizable border the picture is scaled
 * into. A maximized window is the same picture on a bigger scale, so it is allowed too. */
static DWORD window_style(void)
{
    return WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_THICKFRAME;
}

/* The window's own size, kept so that a switch to fullscreen and back does not lose it and so the
 * host can write it to icftd.ini: the player chose it, so nothing of the game may overwrite it
 * (a scene with its own overscan size used to resize the window; it does not any more). */
static void remember_window_size(void)
{
    RECT cr;

    if (g_hwnd == 0 || g_fullscreen) return;
    if (!GetClientRect(g_hwnd, &cr)) return;
    if (cr.right - cr.left <= 0 || cr.bottom - cr.top <= 0) return;
    g_win_w = (u32)(cr.right - cr.left);
    g_win_h = (u32)(cr.bottom - cr.top);
}

/* The client size a windowed mode uses: the size a previous run left behind, or the picture at one
 * emulated pixel per desktop pixel, and never more than the desktop's work area can show - a size
 * saved on a bigger monitor has to be shrunk to fit this one. */
static void window_client_size(int *w, int *h)
{
    RECT r, wa;
    int cw = g_win_w != 0 ? (int)g_win_w : SCREEN_W;
    int ch = g_win_h != 0 ? (int)g_win_h : SCREEN_H;

    r.left = 0; r.top = 0;
    r.right = cw; r.bottom = ch;
    AdjustWindowRect(&r, window_style(), FALSE);
    if (SystemParametersInfo(SPI_GETWORKAREA, 0, &wa, 0)) {
        int overW = (r.right - r.left) - (wa.right - wa.left);
        int overH = (r.bottom - r.top) - (wa.bottom - wa.top);

        if (overW > 0) cw -= overW;
        if (overH > 0) ch -= overH;
        if (cw < 64) cw = 64;
        if (ch < 64) ch = 64;
    }
    *w = cw;
    *h = ch;
}

/* The rectangle the picture takes in a cw x ch client. What the client is laid out for is the
 * game's own screen, 320x200: fullscreen shows it at the 4:3 an Amiga monitor shows it on, a window
 * at one emulated pixel per desktop pixel at scale 1, the height driving the scale, so a wider
 * client only widens the bars beside it and a client narrower than the screen's shape puts them
 * above and below instead of cropping it.
 *
 * The picture is then fitted *into* that screen's rectangle at the screen's own pixel shape, which
 * for every scene but one is the picture itself. The chicken race is the exception: its copper list
 * programs a DIW window of 368x216, its own overscan, 32 pixels left of the standard edge - 15%
 * wider than the screen and 8% taller. Taking that window as the shape of the display gave the
 * scene a pixel shape of its own: fullscreen squeezed it into the 4:3 (everything 6% narrower than
 * the rest of the game), and a window fitted it by its own height, which made it 6.5% wider and
 * 6.6% taller than the screen, over the border art. It is scaled down to fit the screen instead, so
 * every scene has the screen's pixel shape and the border stays where the other scenes leave it; no
 * column or row of the picture is dropped. */
static void picture_rect(int cw, int ch, int *px, int *py, int *pw, int *ph)
{
    int fx, fy, fw, fh;                  /* the 320x200 screen's rectangle */
    int w, h;                            /* the picture, at that screen's pixel size */

    if (g_fullscreen) {
        fw = ch * 4 / 3;
        if (fw > cw) { fw = cw; fh = cw * 3 / 4; } else fh = ch;
    } else {
        fw = ch * SCREEN_W / SCREEN_H;
        if (fw > cw) { fw = cw; fh = cw * SCREEN_H / SCREEN_W; } else fh = ch;
    }
    fx = (cw - fw) / 2;
    fy = (ch - fh) / 2;
    w = fw * g_fb_w / SCREEN_W;
    h = fh * g_fb_h / SCREEN_H;
    if (w <= 0) w = 1;
    if (h <= 0) h = 1;
    if (w > fw || h > fh) {
        /* One factor for both axes, so the picture keeps its shape: whichever axis overflows most
         * decides it. */
        if (fw * h <= fh * w) { h = h * fw / w; w = fw; }
        else { w = w * fh / h; h = fh; }
        if (w < 1) w = 1;
        if (h < 1) h = 1;
    }
    *px = fx + (fw - w) / 2;
    *py = fy + (fh - h) / 2;
    *pw = w;
    *ph = h;
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
    /* A window with a resizable frame: the client changed, so the picture is composed again at the
     * new size and the window repainted there and then - the game's own loop is inside Windows'
     * sizing loop meanwhile, and a frame nobody composed would leave the old picture in the new
     * client. WM_PAINT redraws the frame the last present composed (PrintWindow, and whatever else
     * invalidates part of the client); WM_PRINTCLIENT is how PrintWindow (tools\*-check.ps1) reads
     * the client area, so it answers with the same present instead of an empty bitmap. */
    case WM_GETMINMAXINFO: {
        MINMAXINFO *mm = (MINMAXINFO *)lp;
        RECT mr;

        mr.left = 0; mr.top = 0;
        mr.right = 160; mr.bottom = 120;             /* the smallest client worth showing */
        AdjustWindowRect(&mr, (DWORD)GetWindowLong(h, GWL_STYLE), FALSE);
        mm->ptMinTrackSize.x = mr.right - mr.left;
        mm->ptMinTrackSize.y = mr.bottom - mr.top;
        return 0;
    }
    case WM_SIZE:
        if (h != g_hwnd) return 0;                   /* the window is still being created */
        remember_window_size();
        cursor_refresh();                            /* the picture moved: re-confine, or release */
        plat_present();                              /* the new client, composed and blitted */
        return 0;
    /* The pointer is the game's while the window has the focus and it is over the picture; the
     * window's own frame takes it back on its press (WM_NCLBUTTONDOWN below) and the game takes it
     * again the moment the pointer is back over the picture (WM_MOUSEMOVE, WM_LBUTTONDOWN) - the
     * rule is an event, not a guess from the cursor message. All that is owed here is that no shape
     * is set while the pointer is the game's: the game draws its own arrow where it needs one. */
    case WM_SETCURSOR:
        if ((HWND)wp != g_hwnd) break;
        if (g_cursorHidden > 0) return TRUE;
        break;                                       /* DefWindowProc sets the shape */
    case WM_ENTERSIZEMOVE:
        /* The loop measures itself from the pointer: it may not be hidden or confined meanwhile. */
        g_inSizeMove = 1;
        cursor_update();
        return 0;
    case WM_EXITSIZEMOVE:
        g_inSizeMove = 0;
        cursor_refresh();                            /* a drag ends on the frame it dragged */
        return 0;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(h, &ps);

        present_dc(dc);
        EndPaint(h, &ps);
        return 0;
    }
    case WM_PRINTCLIENT:
        if (h == g_hwnd) present_dc((HDC)wp);
        return 0;
    /* The window captures the pointer while it has the focus (hidden and confined to the picture),
     * and gives it back the moment it is not the window being used. It takes it only over the
     * picture: a click on the window's own frame - the close box, the caption, the border -
     * activates the window with the pointer still over the frame, and confining it there pulled it
     * into the picture before the press reached the frame's own button (WM_NCLBUTTONDOWN below). */
    case WM_SETFOCUS:
        g_hasFocus = 1;
        cursor_refresh();
        return 0;
    case WM_KILLFOCUS:
        g_hasFocus = 0;
        cursor_release();
        /* A key-up that lands in another window never arrives here, so nothing may stay held: a
         * later W press would otherwise still be the cheat chord (src\host\cheat.c), and a
         * direction would stay down with no key to release it. */
        memset(g_keys, 0, sizeof g_keys);
        memset(g_dirHeld, 0, sizeof g_dirHeld);
        return 0;
    /* A press on the window's own frame is the frame's: the close box, the caption, the borders.
     * The pointer may not be confined to the picture while the system tracks that press, or it
     * pulls the pointer out of the box before the press is seen there and the click becomes a click
     * on the picture - the window would not close. The frame's own tracking (DefWindowProc) runs
     * untouched, and the pointer is the game's again over the picture (WM_MOUSEMOVE). */
    case WM_NCLBUTTONDOWN:
    case WM_NCRBUTTONDOWN:
    case WM_NCMBUTTONDOWN:
        cursor_release();
        break;
    case WM_MOUSEMOVE:
        g_mouse_x = (s16)LOWORD(lp);
        g_mouse_y = (s16)HIWORD(lp);
        g_mouse_motion++;
        cursor_retake();
        return 0;
    case WM_LBUTTONDOWN:
        g_mouse_buttons |= 1;
        g_mouse_clicks++;
        cursor_retake();
        return 0;
    case WM_LBUTTONUP:   g_mouse_buttons &= (u8)~1; return 0;
    case WM_RBUTTONDOWN: g_mouse_buttons |= 2; return 0;
    case WM_RBUTTONUP:   g_mouse_buttons &= (u8)~2; return 0;
    /* Alt+Enter arrives as a *system* key - WM_SYSKEYDOWN, never WM_KEYDOWN - and
     * DefWindowProc's default handling of it (and of the WM_SYSCHAR TranslateMessage makes from
     * it) is a beep. It is the port's own window-mode switch, read as an edge out of input_state
     * (KEY_FULLSCREEN) by whichever front-end loop is running, so it is answered here instead. */
    case WM_SYSKEYDOWN:
        if (wp == VK_RETURN && ((lp >> 29) & 1)) { g_keys[KEY_FULLSCREEN] = 1; return 0; }
        break;
    case WM_SYSKEYUP:
        if (wp == VK_RETURN) { g_keys[KEY_FULLSCREEN] = 0; return 0; }
        break;
    case WM_SYSCHAR:
        if (wp == VK_RETURN) return 0;
        break;
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
        if (wp == VK_RETURN) { g_keys[KEY_ENTER] = 0; g_keys[KEY_FULLSCREEN] = 0; }
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
    WNDCLASSEXA wc;
    RECT r;
    DWORD style = window_style();
    int x = CW_USEDEFAULT, y = CW_USEDEFAULT, w, h;

    memset(&wc, 0, sizeof wc);
    wc.cbSize = sizeof wc;
    wc.lpfnWndProc = wnd_proc;
    wc.hInstance = GetModuleHandle(0);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    /* The executable's own icon (src\runtime\plat\win32\icftd.rc, icon group 1), so the title bar
     * and Alt+Tab show the game's picture instead of the system default. A build without the
     * resource (the oracle) gets NULL here and keeps that default. */
    wc.hIcon = LoadIcon(wc.hInstance, MAKEINTRESOURCE(1));
    wc.hIconSm = (HICON)LoadImage(wc.hInstance, MAKEINTRESOURCE(1), IMAGE_ICON,
                                  GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), 0);
    wc.lpszClassName = "ICFTD";
    if (!RegisterClassExA(&wc)) return 0;

    if (g_fullscreen) {
        /* Borderless over the whole screen; plat_present scales the picture into it. */
        style = WS_POPUP;
        x = 0;
        y = 0;
        w = GetSystemMetrics(SM_CXSCREEN);
        h = GetSystemMetrics(SM_CYSCREEN);
    } else {
        int cw, ch;

        window_client_size(&cw, &ch);
        r.left = 0; r.top = 0;
        r.right = cw; r.bottom = ch;
        AdjustWindowRect(&r, style, FALSE);
        w = r.right - r.left;
        h = r.bottom - r.top;
    }

    g_hwnd = CreateWindow("ICFTD", title, style, x, y, w, h, 0, 0, wc.hInstance, 0);
    if (!g_hwnd) return 0;
    ShowWindow(g_hwnd, SW_SHOW);
    /* A game window starts as the window in use, fullscreen or not: the console the game was
     * started from (this is a console binary) can otherwise hold the foreground, and the pointer
     * would not be captured until the player clicked the picture. */
    SetForegroundWindow(g_hwnd);
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

/* --- the console ---------------------------------------------------------------------------
 * One executable is the game *and* every measurement: a run started from a terminal prints its log
 * there, and the check scripts read that same log through a redirected handle. Such a run keeps
 * its console. Started by a double click the process owns a console of its own instead - a black
 * window that exists only for this run and would sit beside the game until it closes - and that
 * one is hidden, so the release shows the game's window and nothing else. The host calls this as
 * soon as it knows it will show the window, so the first start's missing-disks notice is not
 * behind a console either.
 *
 * GetConsoleProcessList answers which case it is: one process attached means this run's own
 * console. Both entry points are looked up by name, because this Watcom build links against an
 * import library older than either (GetConsoleWindow is not in it at all, and GetConsoleProcessList
 * is Windows 2000's). */
void plat_console_hide_own(void)
{
    typedef DWORD (WINAPI *PROCLIST_FN)(DWORD *, DWORD);
    typedef HWND  (WINAPI *CONWIN_FN)(void);
    HMODULE kernel = GetModuleHandle("kernel32.dll");
    PROCLIST_FN proclist;
    CONWIN_FN conwin;
    DWORD attached[2];

    if (kernel == 0) return;
    proclist = (PROCLIST_FN)GetProcAddress(kernel, "GetConsoleProcessList");
    conwin = (CONWIN_FN)GetProcAddress(kernel, "GetConsoleWindow");
    if (proclist == 0 || conwin == 0) return;
    if (proclist(attached, 2) != 1) return;         /* a terminal's console: the log belongs there */
    ShowWindow(conwin(), SW_HIDE);
}

u32 plat_init(const char *title)
{
    g_start_ms = 0;
    if (!make_window(title)) return 0;
    if (!make_dib(g_fb_w, g_fb_h)) return 0;
    if (!make_palette()) return 0;
    /* Whether the window really has the focus (GetFocus answers for our own thread); WM_SETFOCUS and
     * WM_KILLFOCUS keep it current after that. */
    g_hasFocus = GetFocus() == g_hwnd;
    cursor_update();
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
    DWORD style = window_style();

    if (g_hwnd == 0) return;
    if (g_fullscreen) {
        SetWindowLong(g_hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
        SetWindowPos(g_hwnd, HWND_TOP, 0, 0, GetSystemMetrics(SM_CXSCREEN),
                     GetSystemMetrics(SM_CYSCREEN), SWP_FRAMECHANGED | SWP_SHOWWINDOW);
        SetForegroundWindow(g_hwnd);
    } else {
        RECT r;
        int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
        int cw, ch;

        window_client_size(&cw, &ch);       /* the size the player left it at */
        style |= WS_VISIBLE;
        r.left = 0; r.top = 0;
        r.right = cw; r.bottom = ch;
        SetWindowLong(g_hwnd, GWL_STYLE, style);
        AdjustWindowRect(&r, style, FALSE);
        SetWindowPos(g_hwnd, HWND_TOP, (sw - (r.right - r.left)) / 2, (sh - (r.bottom - r.top)) / 2,
                     r.right - r.left, r.bottom - r.top, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    }
    /* The picture's rectangle and the pointer both depend on the mode. */
    g_pic_w = g_pic_h = 0;
    plat_present();                      /* this frame, in the new mode, at once */
    cursor_update();
}

void plat_set_fullscreen(u32 on)
{
    u32 want = on ? 1u : 0u;

    if (want == g_fullscreen) return;
    /* Into fullscreen the client is about to become the screen; the window's own size is the one a
     * later windowed mode comes back to, so it is taken before the style changes. */
    if (want) remember_window_size();
    g_fullscreen = want;
    apply_window_mode();
}

u32 plat_has_fullscreen(void)
{
    return 1;                                    /* the windowed build has a mode to choose */
}

/* A size a previous run left behind, or none at all: make_window uses the picture at 1:1. */
void plat_set_window_size(u32 w, u32 h)
{
    if (w < 64 || h < 64 || w > 16384 || h > 16384) return;   /* a broken line in the ini */
    g_win_w = w;
    g_win_h = h;
}

u32 plat_window_size(u32 *w, u32 *h)
{
    int cw, ch;

    window_client_size(&cw, &ch);        /* also while fullscreen: the size a window returns to */
    if (w != 0) *w = (u32)cw;
    if (h != 0) *h = (u32)ch;
    return 1;
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

u32 plat_pit_per_second(void)
{
    return 0;
}

/* No 8254 here: the counter is a DOS measurement aid. */
void plat_clock_report(plat_clock_info *info)
{
    memset(info, 0, sizeof *info);
}

/* The windowed build has a video mode to choose, so its ini carries it. The window's own size is
 * written back by the host when the game closes (window_width/window_height, in desktop pixels):
 * Windows keeps no such thing for an application's own window. */
const char *plat_default_ini(void)
{
    return "; ICFTD runtime settings. Written with these defaults on the first start.\r\n"
           "; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.\r\n"
           "\r\n"
           "[VIDEO]\r\n"
           "; false = window, one emulated pixel per desktop pixel at first. The window has a\r\n"
           ";            resizable frame: the game's 320x200 screen scales with the window's height\r\n"
           ";            and keeps its shape, a wider window shows the border art either side, and\r\n"
           ";            the size the window was left at is written back as window_width /\r\n"
           ";            window_height below.\r\n"
           "; true = fullscreen, the whole 4:3 picture scaled up to fit with the border art\r\n"
           ";            either side (a scene with a screen of its own is letterboxed inside it).\r\n"
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
    cursor_release();
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
    /* The run ended by itself, so its journal has nothing to tell: what is left beside the
     * executable is the last run that did not end by itself (see the run journal below). */
    journal_discard();
    g_quit = 1;
}

u8 *plat_framebuffer(void)
{
    return g_bits;
}

/* The picture is the screen the copper list programs, so the DIB takes its size. The window does
 * not follow it: the client is the player's (it can be resized), and plat_present scales the
 * picture into it, so the chicken race's narration page - 368 columns across, its text laid out
 * over the overscan - is shown whole in the same window instead of moving the window. Squeezing
 * that page into the 320-column picture dropped every eighth column, which is what turned its
 * letters into noise; the scale is uniform, so no column is dropped. */
u32 plat_set_framebuffer_size(u32 w, u32 h)
{
    int nw = (int)w, nh = (int)h;

    if (nw <= 0 || nh <= 0 || nw > 1024 || nh > 1024) return 0;
    if (nw != g_fb_w || nh != g_fb_h) {
        if (!make_dib(nw, nh)) return 0;
        g_pic_w = g_pic_h = 0;               /* the picture's rectangle is this frame's */
        cursor_refresh();
    }
    /* A DIB row is padded to a longword: that, not the width, is the row the core copies. */
    return (u32)((nw + 3) & ~3);
}

/* The frame behind the picture: the border art over a client (or the whole screen), which the
 * picture is then stretched over. Composing into the buffer and blitting it to the window in one
 * go - rather than a FillRect followed by a StretchBlt on the window DC - is what keeps the
 * scaled picture from flickering: the window sees exactly one BitBlt per frame. */
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
    /* They are the port's border art, not black: a client wider than the screen shows the curtain
     * either side of it (border.c). present_dc paints them again whenever the picture's rectangle
     * moves, because a scene with a screen of its own leaves a different rectangle behind. */
    border_paint(g_frame_bits, w, h);
    return 1;
}

/* One frame into dc: the 8-bit picture as it is where it covers the client exactly (the 320x200
 * window, no bars, and the palette goes to the window as before), and the composed frame - border
 * art under the scaled picture - everywhere else. */
static void present_dc(HDC dc)
{
    RECT cr;
    int cw, ch, px, py, pw, ph;

    if (dc == 0 || g_hwnd == 0 || g_bits == 0 || g_memdc == 0) return;
    if (!GetClientRect(g_hwnd, &cr)) return;
    cw = cr.right - cr.left;
    ch = cr.bottom - cr.top;
    if (cw <= 0 || ch <= 0) return;
    /* The client is the picture and the picture is the screen: nothing is scaled, so the 8-bit DIB
     * goes to the window as it always did. */
    if (!g_fullscreen && cw == g_fb_w && ch == g_fb_h &&
        g_fb_w == SCREEN_W && g_fb_h == SCREEN_H) {
        g_pic_w = g_pic_h = 0;                   /* the client is the picture: nothing to map */
        SelectPalette(dc, g_pal, FALSE);
        RealizePalette(dc);
        BitBlt(dc, 0, 0, g_fb_w, g_fb_h, g_memdc, 0, 0, SRCCOPY);
        return;
    }
    picture_rect(cw, ch, &px, &py, &pw, &ph);
    /* The bars are painted with the client, not with the frame: a picture of another size - a scene
     * with its own screen - leaves the previous one in the bands it no longer covers, so the art is
     * painted again whenever the picture's rectangle moves, not only when the client does. */
    if (cw != g_frame_w || ch != g_frame_h || px != g_pic_x || py != g_pic_y ||
        pw != g_pic_w || ph != g_pic_h) {
        g_pic_x = px; g_pic_y = py; g_pic_w = pw; g_pic_h = ph;
        if (cw != g_frame_w || ch != g_frame_h) {
            if (!make_frame(cw, ch)) return;
        } else border_paint(g_frame_bits, cw, ch);
    }
    SetStretchBltMode(g_frame_dc, COLORONCOLOR);
    StretchBlt(g_frame_dc, g_pic_x, g_pic_y, g_pic_w, g_pic_h, g_memdc, 0, 0, g_fb_w, g_fb_h, SRCCOPY);
    BitBlt(dc, 0, 0, cw, ch, g_frame_dc, 0, 0, SRCCOPY);
}

void plat_present(void)
{
    HDC dc;

    if (g_hwnd == 0 || g_bits == 0) return;
    dc = GetDC(g_hwnd);
    if (dc == 0) return;
    present_dc(dc);
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
 * what absorbs a frame the emulation produced in a catch-up burst.
 *
 * A device is not guaranteed to keep playing. A default-endpoint change, another program taking
 * the endpoint in exclusive mode, or a driver that stops signalling completion leaves every buffer
 * "still playing" for ever - the queue fills, every later chunk is dropped, and the game runs on in
 * silence. There is no callback to notice it with (CALLBACK_NULL), so the writer watches the one
 * thing a playing device must do, complete a buffer, and treats a stretch with outstanding buffers
 * and no completion as a stopped device: waveOutReset returns the outstanding buffers and the queue
 * is written again. A handle that keeps refusing writes is reopened on the current default device.
 * The DOS layer has the same rule for a halted Sound Blaster transfer (sb_service).
 *
 * Those events - and nothing else - are appended to <exe>\audio-log.txt (audio_log below): a run
 * that never faults creates no file. The host adds one line when the game frees its score, so a
 * silence can be told apart as device-side or game-side from that one file. */

#define AUDIO_BUFFERS 8
/* 512 frames is ~12 ms. The mixer hands over a frame's worth at each vblank, so the queue is the
 * only slack there is when a frame takes longer than a frame time: at 4 chunks (46 ms) a slow
 * stretch drops samples - measured ~16 % - and at 8 (93 ms) it drops none. Latency is 93 ms of
 * audio, which nothing in this game notices. */
#define AUDIO_FRAMES  512
#define AUDIO_QUEUE   8           /* chunks waiting for a free device buffer, ~93 ms */
#define AUDIO_STALL_MS 300        /* outstanding buffers, no completion for this long: stopped */
#define AUDIO_WRITE_ERRORS 16     /* failed writes in a row before the handle is reopened */

static HWAVEOUT g_wave;
static WAVEHDR  g_hdr[AUDIO_BUFFERS];
static s16     *g_abuf[AUDIO_BUFFERS];
static s16      g_queue[AUDIO_QUEUE][AUDIO_FRAMES * 2];
static u32      g_qsize[AUDIO_QUEUE];
static int      g_qcount;
static int      g_aopen;
static int      g_anext;
static u32      g_adropped;
static u32      g_arate;                  /* the rate the handle was opened at */
static int      g_abusyMask;              /* buffers submitted and not seen done, one bit each */
static u32      g_aprogress;              /* GetTickCount() of the last completion seen */
static u32      g_astalls;                /* stopped devices reset */
static u32      g_areopens;               /* handles reopened after write errors */
static u32      g_areopenAt;              /* GetTickCount() of the last reopen attempt */
static int      g_awriteErrors;           /* failed writes in a row */
static int      g_alost;                  /* the handle refuses writes: reopen it */
static int      g_astallAt;               /* --audiostall: the device stops at this submission */
static int      g_asubmits;               /* submissions seen, for --audiostall */
static int      g_astalled;               /* --audiostall: the simulated stop is in effect */
static int      g_adropLogged;            /* the first drop of a session is worth one line */
static FILE    *g_alog;                   /* <exe>\audio-log.txt, opened by the first line written */
static int      g_alogTried;
static int      g_alogLines;              /* lines this session, against AUDIO_LOG_MAX_LINES */
/* What the machine did that explains a silence, kept in memory until a fault (or the end of the
 * run) writes it out. Only a run that opened a device records anything, so a headless measurement
 * run - which has no audio device at all - never writes this file. */
#define AUDIO_NOTES 16
#define AUDIO_NOTE_LEN 200
static char     g_anote[AUDIO_NOTES][AUDIO_NOTE_LEN];
static int      g_anoteNext;
static int      g_anoteCount;

/* One line in the audio fault log, stamped with the local time. The file is created by the first
 * line and appended to afterwards, so a session with nothing to report leaves nothing behind. It is
 * a diagnostic a player sends us, so it is strictly bounded: a device that keeps failing can log a
 * line every 300 ms for hours, and that must not fill a disk. */
#define AUDIO_LOG_MAX_BYTES 65536         /* rolled over (started fresh) when the file is this big */
#define AUDIO_LOG_MAX_LINES 200           /* one session writes at most this many lines */

static void audio_log_write(const char *text)
{
    SYSTEMTIME st;

    if (!g_alogTried) {
        char path[MAX_PATH];
        g_alogTried = 1;
        sprintf(path, "%s\\audio-log.txt", plat_exe_dir());
        g_alog = fopen(path, "a");
        /* An old log that has grown to the cap is replaced rather than appended to: the newest
         * session is the one a report is about. */
        if (g_alog != 0 && fseek(g_alog, 0, SEEK_END) == 0 &&
            ftell(g_alog) > AUDIO_LOG_MAX_BYTES) {
            fclose(g_alog);
            g_alog = fopen(path, "w");
        }
    }
    if (g_alog == 0) return;
    if (g_alogLines >= AUDIO_LOG_MAX_LINES) {
        if (g_alogLines++ == AUDIO_LOG_MAX_LINES) {
            fprintf(g_alog, "-- more than %d lines this session: logging stops here\n",
                    AUDIO_LOG_MAX_LINES);
            fflush(g_alog);
        }
        return;
    }
    g_alogLines++;
    GetLocalTime(&st);
    fprintf(g_alog, "%04u-%02u-%02u %02u:%02u:%02u  %s\n",
            (unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
            (unsigned)st.wHour, (unsigned)st.wMinute, (unsigned)st.wSecond, text);
    fflush(g_alog);
}

/* The notes before the fault, oldest first: a device that stopped right after the engine freed its
 * score and one that stopped in the middle of a scene look the same in the log otherwise. */
static void audio_note_flush(void)
{
    int i, at;

    if (g_anoteCount == 0) return;
    at = (g_anoteNext - g_anoteCount + AUDIO_NOTES) % AUDIO_NOTES;
    for (i = 0; i < g_anoteCount; i++)
        audio_log_write(g_anote[(at + i) % AUDIO_NOTES]);
    g_anoteCount = 0;
    g_anoteNext = 0;
}

/* A fault of the device itself: the notes lead up to it. */
static void audio_fault(const char *text)
{
    audio_note_flush();
    audio_log_write(text);
}

/* A note from the machine, written when a fault needs its context or when the run ends. */
void plat_audio_log(const char *text)
{
    char *dst;

    if (!g_aopen || text == 0) return;
    dst = g_anote[g_anoteNext];
    strncpy(dst, text, AUDIO_NOTE_LEN - 1);
    dst[AUDIO_NOTE_LEN - 1] = 0;
    g_anoteNext = (g_anoteNext + 1) % AUDIO_NOTES;
    if (g_anoteCount < AUDIO_NOTES) g_anoteCount++;
}

/* Opens the device and its buffers; the statistics and the queue belong to plat_audio_open. */
static void audio_device_close(void);

static int audio_device_open(u32 rate)
{
    WAVEFORMATEX wf;
    int i;

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
    g_arate = rate;
    for (i = 0; i < AUDIO_BUFFERS; i++) {
        g_abuf[i] = (s16 *)malloc(AUDIO_FRAMES * 4);
        if (g_abuf[i] == 0) { audio_device_close(); return 0; }
        memset(&g_hdr[i], 0, sizeof(g_hdr[i]));
        g_hdr[i].lpData = (LPSTR)g_abuf[i];
        g_hdr[i].dwBufferLength = AUDIO_FRAMES * 4;
        waveOutPrepareHeader(g_wave, &g_hdr[i], sizeof(WAVEHDR));
        g_hdr[i].dwFlags |= WHDR_DONE;      /* never queued yet: a free buffer */
    }
    g_anext = 0;
    g_abusyMask = 0;
    g_aprogress = GetTickCount();
    g_aopen = 1;
    return 1;
}

static void audio_device_close(void)
{
    int i;

    if (g_wave == 0) { g_aopen = 0; return; }
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
    g_aopen = 0;
    g_abusyMask = 0;
}

u32 plat_audio_open(u32 rate)
{
    if (g_aopen) return 1;
    if (rate == 0) return 0;
    g_adropped = 0;
    g_astalls = 0;
    g_areopens = 0;
    g_awriteErrors = 0;
    g_alost = 0;
    g_qcount = 0;
    g_arate = rate;
    g_astallAt = 0;
    g_astalled = 0;
    g_asubmits = 0;
    g_adropLogged = 0;
    return audio_device_open(rate) ? 1 : 0;
}

void plat_audio_close(void)
{
    audio_device_close();
    g_qcount = 0;
    /* The end of a played session: whatever the machine noted about its own score is worth keeping
     * beside the device's own lines, and nothing else writes this file. */
    audio_note_flush();
}

/* A handle that went away - the default device changed, or another program took the endpoint - is
 * reopened on whatever WAVE_MAPPER names now. At most one attempt a second, so a machine with no
 * endpoint at all does not spend the run in waveOutOpen and does not fill the log. */
static void audio_reopen(void)
{
    u32 now = GetTickCount();
    char msg[160];

    if ((u32)(now - g_areopenAt) < 1000u) return;
    g_areopenAt = now;
    audio_device_close();
    g_awriteErrors = 0;
    if (audio_device_open(g_arate)) {
        g_alost = 0;
        g_areopens++;
        sprintf(msg, "audio: device reopened at %lu Hz", (unsigned long)g_arate);
    } else {
        sprintf(msg, "audio: device reopen at %lu Hz failed", (unsigned long)g_arate);
    }
    audio_fault(msg);
}

/* The watchdog: a playing device completes a buffer. Outstanding buffers with no completion for
 * AUDIO_STALL_MS is a device that stopped, and waveOutReset hands the buffers back so the queue can
 * start it again. Runs only from a write, so a machine that is not producing audio (a paused run, a
 * scene with its sound off) never looks stopped. Completions are compared by buffer, not by count:
 * one buffer completing while another is handed over keeps the count the same. */
static void audio_watchdog(void)
{
    int i, busy = 0;
    u32 mask = 0, now = GetTickCount();
    char msg[160];

    for (i = 0; i < AUDIO_BUFFERS; i++)
        if ((g_hdr[i].dwFlags & WHDR_DONE) == 0) { mask |= 1u << i; busy++; }
    if ((g_abusyMask & ~mask) != 0) g_aprogress = now;   /* a buffer completed: it is playing */
    g_abusyMask = mask;
    if (busy == 0) { g_aprogress = now; return; }
    if ((u32)(now - g_aprogress) < AUDIO_STALL_MS) return;

    sprintf(msg, "audio: device stopped completing buffers (%d outstanding, no completion for %lu ms) - reset",
            busy, (unsigned long)(now - g_aprogress));
    audio_fault(msg);
    if (waveOutReset(g_wave) != MMSYSERR_NOERROR) {
        g_alost = 1;                            /* the handle itself is gone: reopen it */
        return;
    }
    for (i = 0; i < AUDIO_BUFFERS; i++) g_hdr[i].dwFlags |= WHDR_DONE;
    g_abusyMask = 0;
    g_astalled = 0;                             /* --audiostall: the one simulated stop is over */
    g_astalls++;
    g_aprogress = now;
    /* What was waiting for the device is now late by as much as it was stopped: it is dropped
     * rather than played as a burst of sound from the wrong moment. */
    for (i = 0; i < g_qcount; i++) g_adropped += g_qsize[i];
    g_qcount = 0;
}

void plat_audio_simulate_stall(u32 afterBuffers)
{
    g_astallAt = (int)afterBuffers;
    g_asubmits = 0;
    g_astalled = 0;
}

u32 plat_audio_stalls(void) { return g_astalls; }
u32 plat_audio_reopens(void) { return g_areopens; }

/* Hands queued chunks to whatever buffers the device has free, oldest first. Runs on every write,
 * so a queue that filled while the device was stopped drains again as soon as it is back: a full
 * queue must never be a one-way door. */
static void audio_drain(void)
{
    int i, slot, tries;

    if (g_astalled) return;
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
        if (g_astallAt > 0 && ++g_asubmits >= g_astallAt) {
            /* --audiostall: this buffer is taken and never played, and nothing is handed over
             * after it - the shape of a device that hung. The watchdog must recover it. */
            g_astallAt = 0;
            g_astalled = 1;
            g_adropped += g_qsize[i];
            i++;
            break;
        }
        if (waveOutWrite(g_wave, &g_hdr[slot], sizeof(WAVEHDR)) != MMSYSERR_NOERROR) {
            g_hdr[slot].dwFlags |= WHDR_DONE;
            g_adropped += g_qsize[i];
            if (++g_awriteErrors >= AUDIO_WRITE_ERRORS) {
                char msg[160];
                g_awriteErrors = 0;
                g_alost = 1;
                sprintf(msg, "audio: %d writes failed in a row - reopening the device",
                        AUDIO_WRITE_ERRORS);
                audio_fault(msg);
            }
        } else {
            g_awriteErrors = 0;
        }
        i++;
    }
    if (i > 0) {
        memmove(g_queue[0], g_queue[i], (u32)(g_qcount - i) * sizeof(g_queue[0]));
        memmove(g_qsize, g_qsize + i, (u32)(g_qcount - i) * sizeof(g_qsize[0]));
        g_qcount -= i;
    }
}

/* One chunk of mixed audio from the machine. The device gets what it can take; what does not fit is
 * kept for the next write and the oldest thing is lost only when the queue itself is full. The
 * draining runs every time, whether or not this chunk fitted: a queue that filled while the device
 * was stopped has to empty again once it is back, or the run would stay silent for good. */
void plat_audio_write(const s16 *frames, u32 count)
{
    if (count == 0 || frames == 0) return;
    if (g_alost) audio_reopen();
    if (!g_aopen) return;
    if (count > AUDIO_FRAMES) count = AUDIO_FRAMES;
    audio_watchdog();
    if (!g_aopen) return;
    if (g_qcount < AUDIO_QUEUE) {
        memcpy(g_queue[g_qcount], frames, count * 4);
        g_qsize[g_qcount] = count;
        g_qcount++;
    } else {
        if (!g_adropLogged) {
            char msg[160];
            int k, out = 0;
            for (k = 0; k < AUDIO_BUFFERS; k++)
                if ((g_hdr[k].dwFlags & WHDR_DONE) == 0) out++;
            g_adropLogged = 1;
            sprintf(msg, "audio: dropping chunks, queue full (%d held, %d buffer(s) outstanding, stalled %d, lost %d)",
                    g_qcount, out, g_astalled, g_alost);
            audio_fault(msg);
        }
        g_adropped += count;
    }
    audio_drain();
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

/* Client point -> framebuffer pixel. Where the picture is the client 1:1 the point is used as it
 * is; scaled (fullscreen, or a resized window) the picture is a rectangle centred in the client,
 * so the pointer has to be mapped into it. It is clamped: a pointer on the border art then reads
 * as the nearest picture edge, which is what a map cursor pushed past its travel window needs
 * (that is the "scroll this way" input). */
static void mouse_to_fb(s16 *x, s16 *y)
{
    long fx = *x, fy = *y;

    if (g_pic_w > 0 && g_pic_h > 0) {
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

/* --- the run journal -----------------------------------------------------------------------
 * A native crash takes the process down with no output, so the last machine state is written to
 * <exe dir>\game-log.txt every frame and flushed. An unhandled exception appends its code and
 * address to the same file, which makes "the window just closed" answerable after the fact.
 *
 * A run that ends by itself takes the file with it (plat_shutdown), so what is left beside the
 * executable is only ever the last run that did *not* end by itself - a crash, a hang, a process
 * killed from outside - and the file says which. */
#define CRASH_STATE_BYTES 2048
static FILE *g_crashFile;

static const char *journal_path(void)
{
    static char path[MAX_PATH];
    sprintf(path, "%s\\game-log.txt", plat_exe_dir());
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

/* The run ended by itself, so the journal has nothing to tell: the file is removed, and what is
 * left beside the executable is only ever the last run that did not end by itself. */
static void journal_discard(void)
{
    if (g_crashFile != 0) { fclose(g_crashFile); g_crashFile = 0; }
    DeleteFile(journal_path());
}

void plat_crash_state(const char *text)
{
    static char block[CRASH_STATE_BYTES];
    size_t n;

    if (text == 0) return;
    if (g_crashFile == 0)
    {
        g_crashFile = fopen(journal_path(), "wb+");
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

