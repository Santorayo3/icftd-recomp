# The window's own size, and the picture scaling with it (a port feature): the platform's pixels.
#
#   powershell -ExecutionPolicy Bypass -File tools\window-check.ps1
#
# The original has no window, so there is nothing to diff this against; the feature has to hold on
# its own terms. Its claims, all measured on the live window (a desktop is needed, a headless
# machine SKIPs like tools\settings-check.ps1 does):
#
#   1. The windowed window has a resizable frame: a 320x200 client is resized to 960x400 and the
#      client really is 960x400 afterwards.
#   2. The picture is scaled by the client's *height* and keeps its aspect, and the bars beside it
#      are the port's border art: at 960x400 the picture is 640x400 in the middle - exactly the
#      1:1 frame of the same run, doubled with no smoothing and no dropped column - and every
#      pixel outside it is border.png point-sampled over the client (border.c, the frame the
#      fullscreen already paints).
#   3. Widening the window does not scale the picture: at 1280x400 the picture is still the same
#      640x400 at the same size (pixel for pixel the 960x400 one); only the bars got wider.
#   4. The size is kept: closing the window writes [VIDEO] window_width / window_height to
#      icftd.ini (Windows keeps no size for an application's own window) and the next windowed
#      start comes back at that client size.
#   5. A measurement run has no window and writes no window key (the seam is inert). It runs
#      first, on a pristine file, before the windowed runs touch it.
#   6. The window captures the pointer while it has the focus: the system cursor is hidden and the
#      pointer cannot be moved out of the picture. Losing the focus (Alt+Tab) gives it back, which is
#      how the frame is reached - and using the window again captures it.
#   7. The frame can be *dragged* - from the unfocused window the Alt+Tab leaves behind: a real
#      corner drag grows the window, and what the dragged window shows is still the picture at its
#      height scale with the border art either side. The system's sizing loop measures the drag from
#      the pointer, so a pointer confined to the shrinking client (which the fixed window's clip
#      did) runs the window down to its minimum size - that is the bug this claim was written
#      after, and SetWindowPos cannot see it.
#   8. Dragging in stops at the 160x120 minimum instead of running on below it.
#   9. A scene with a screen of its own - the chicken race's copper list programs a 368x216 display
#      window, 15% wider and 8% taller than the game's 320x200 - keeps the screen's pixel shape and
#      stays inside the screen's rectangle: the picture is the 368x216 raster fitted into that
#      rectangle (all of it, no column or row dropped), so it is the same shape as the rest of the
#      game and it does not grow over the border art either side. It used to be fitted by its own
#      height, which made it 6% bigger than every other scene and put it on top of the curtains.
#  10. The window closes from its own close box, clicked while it is not the one in use - Alt+Tab,
#      then the X. Taking the pointer for the picture while the click activated the window pulled it
#      out of the box before the press landed there, so the press became a click on the picture and
#      the run kept playing. Only the pointer *over the picture* is the game's; over the frame it
#      stays the desktop's.
#  11. The port's own overlay keeps its own colours over a scene: the OSD line is white in the
#      window, not a colour of the palette the scene loaded. The platform draws the overlay at
#      display rate and hands the device its palette range; a run that handed over the table's base
#      instead of the range's first entry loaded the scene's pens 0..31 into 224..255, and both the
#      OSD line and the arrow came out in the scene's colours - which is the bug this was written
#      after.
#  12. What the panel shows is the picture the presenter composed: --shot writes the raster the
#      platform built for the frame (the picture with the port's overlay on it) and the capture reads
#      the client the presented frame landed in, so on a still screen the two are the same picture,
#      pixel for pixel. The run's --displaystat line names the presenter measured - the true-colour
#      one, or the window-DC fallback where a machine has no Direct3D (docs\display-rate.md, phase 3).
#  13. The pointer is kept whole: the arrow is the only pointer the player sees (the system cursor is
#      hidden), so a tip past the picture's right edge must stop where the mark still fits instead of
#      sliding under the border curtain. Two title screens that differ only in a scripted x past that
#      limit show the same picture, and it is the one at the limit.
#
# The captures are PrintWindow(PW_CLIENTONLY), i.e. the platform's own WM_PRINTCLIENT answer: what
# the window is drawing into its client, not whatever the desktop composited on top of it. The
# run's --mouse script parks the pointer at one picture position, so the arrow the title draws
# under it lands in the same place in every capture (the platform's own pointer would move into
# the window as the client grows under it, and the arrow is part of the picture).
#
# Claims 6-8 drive the real pointer (SetCursorPos + mouse_event): the frame can only be measured by
# dragging it, because SetWindowPos bypasses the system's sizing loop - which is exactly the code
# that fought the fixed window's pointer clip and ran the window down to its minimum size. Claim 10
# clicks the close box the same way, with the window not in use: only a real press can tell whether
# the pointer was taken from the button.
param(
    [string]$Exe = 'bin\win32\icftd-recomp.exe',
    [string]$DataDir = 'export',
    [string]$Image = 'export\code\dshell4k\dshell.img',
    [string]$Art = 'assets\border.png',
    [string]$Work = 'out\window-check'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

if (-not (Test-Path $Exe))   { Write-Output "window: SKIP (no $Exe - build it with tools\build-host.ps1)"; exit 0 }
if (-not (Test-Path $Image)) { Write-Output "window: SKIP (no $Image - run tools\extract.ps1)"; exit 0 }
if (-not (Test-Path $Art))   { Write-Output "window: SKIP (no $Art)"; exit 0 }

New-Item -ItemType Directory -Force -Path $Work | Out-Null
Get-ChildItem $Work -Recurse -File -ErrorAction SilentlyContinue | Remove-Item -Force

$fail = 0
function Fail([string]$text) { Write-Output "window: FAIL - $text"; $script:fail++ }
function Ok([string]$text) { Write-Output "window: $text" }

$ini = Join-Path (Split-Path -Parent (Resolve-Path $Exe)) 'icftd.ini'
$backup = Join-Path $Work 'icftd.ini.backup'
$hadIni = Test-Path $ini
if ($hadIni) { Copy-Item $ini $backup -Force }

$src = @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;

public static class WindowCheck
{
    [StructLayout(LayoutKind.Sequential)]
    public struct RECT { public int Left, Top, Right, Bottom; }
    [StructLayout(LayoutKind.Sequential)]
    public struct POINT { public int X, Y; }
    [StructLayout(LayoutKind.Sequential)]
    public struct CURSORINFO { public int cbSize, flags; public IntPtr hCursor; public POINT pt; }

    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    public static extern IntPtr FindWindow(string cls, string title);
    [DllImport("user32.dll")]
    public static extern bool GetClientRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")]
    public static extern bool GetWindowRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")]
    public static extern int GetWindowLong(IntPtr h, int index);
    [DllImport("user32.dll")]
    public static extern bool AdjustWindowRect(ref RECT r, uint style, bool menu);
    [DllImport("user32.dll")]
    public static extern bool SetWindowPos(IntPtr h, IntPtr after, int x, int y, int cx, int cy,
                                           uint flags);
    [DllImport("user32.dll")]
    public static extern bool PostMessage(IntPtr h, uint msg, IntPtr wp, IntPtr lp);
    [DllImport("user32.dll")]
    public static extern IntPtr SendMessage(IntPtr h, uint msg, IntPtr wp, IntPtr lp);
    [DllImport("user32.dll")]
    public static extern bool PrintWindow(IntPtr h, IntPtr dc, uint flags);
    [DllImport("user32.dll")]
    public static extern bool SetForegroundWindow(IntPtr h);
    [DllImport("user32.dll")]
    public static extern bool SetCursorPos(int x, int y);
    [DllImport("user32.dll")]
    public static extern void mouse_event(uint flags, int dx, int dy, uint data, UIntPtr extra);
    [DllImport("user32.dll")]
    public static extern bool GetCursorInfo(ref CURSORINFO ci);
    [DllImport("user32.dll")]
    public static extern bool GetClipCursor(out RECT r);
    [DllImport("user32.dll")]
    public static extern IntPtr GetDesktopWindow();
    [DllImport("user32.dll")]
    public static extern int GetSystemMetrics(int index);
    [DllImport("user32.dll")]
    public static extern bool GetCursorPos(out POINT p);

    const int GWL_STYLE = -16;
    const uint WM_CLOSE = 0x0010;
    const uint WM_NCHITTEST = 0x0084;
    const int HTCLOSE = 20;
    const uint SWP_NOMOVE = 0x0002, SWP_NOZORDER = 0x0004, SWP_NOACTIVATE = 0x0010;
    const uint MOUSEEVENTF_MOVE = 0x0001, MOUSEEVENTF_LEFTDOWN = 0x0002, MOUSEEVENTF_LEFTUP = 0x0004;

    public static IntPtr Find() { return FindWindow("ICFTD", "It Came from the Desert (recomp)"); }

    public static void Close(IntPtr h) { PostMessage(h, WM_CLOSE, IntPtr.Zero, IntPtr.Zero); }

    /* The client size the window has now; -1,-1 when there is none. */
    public static int[] Client(IntPtr h)
    {
        RECT r;
        if (!GetClientRect(h, out r)) return new int[] { -1, -1 };
        return new int[] { r.Right - r.Left, r.Bottom - r.Top };
    }

    /* The outer window rect, frame included. */
    public static int[] Window(IntPtr h)
    {
        RECT r;
        if (!GetWindowRect(h, out r)) return new int[] { -1, -1, -1, -1 };
        return new int[] { r.Left, r.Top, r.Right, r.Bottom };
    }

    /* Asks for a client size, the way dragging the frame's corner does: the frame size that client
     * needs is what SetWindowPos gets. */
    public static void ResizeClient(IntPtr h, int w, int hh)
    {
        RECT r = new RECT();
        r.Right = w;
        r.Bottom = hh;
        AdjustWindowRect(ref r, (uint)GetWindowLong(h, GWL_STYLE), false);
        SetWindowPos(h, IntPtr.Zero, 0, 0, r.Right - r.Left, r.Bottom - r.Top,
                     SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }

    /* A real drag of the bottom-right corner of the frame, in steps like a hand, with the system's
     * own sizing loop doing the resizing - SetWindowPos would bypass the loop (and with it every
     * thing about the pointer the loop depends on). */
    public static void DragCorner(IntPtr h, int dx, int dy)
    {
        int[] w = Window(h);
        SetCursorPos(w[2] - 3, w[3] - 3);                /* inside the sizing border */
        System.Threading.Thread.Sleep(250);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, UIntPtr.Zero);
        System.Threading.Thread.Sleep(150);
        int mx = 0, my = 0;
        for (int k = 1; k <= 10; k++)
        {
            int wx = dx * k / 10, wy = dy * k / 10;
            mouse_event(MOUSEEVENTF_MOVE, wx - mx, wy - my, 0, UIntPtr.Zero);
            mx = wx;
            my = wy;
            System.Threading.Thread.Sleep(80);
        }
        System.Threading.Thread.Sleep(150);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, UIntPtr.Zero);
        System.Threading.Thread.Sleep(400);
    }

    /* "hidden" while the pointer is the game's, "visible" while it is the desktop's. */
    public static string Cursor()
    {
        CURSORINFO ci = new CURSORINFO();
        ci.cbSize = Marshal.SizeOf(typeof(CURSORINFO));
        if (!GetCursorInfo(ref ci)) return "?";
        return ci.flags == 0 ? "hidden" : "visible";
    }

    /* Where the pointer is. */
    public static int[] Pos()
    {
        POINT p;
        if (!GetCursorPos(out p)) return new int[] { -1, -1 };
        return new int[] { p.X, p.Y };
    }

    /* Pushes the pointer to the screen corner farthest from the window - as far outside it as the
     * screen allows - and does it the way a hand does: a burst of relative moves, not one jump. A
     * captured pointer stays in the picture; a free one goes. The jump alone is not the measurement:
     * ClipCursor holds a pointer it has clamped even a pixel past the clip's far edge, and only a
     * pointer that keeps being pushed there brings that out. */
    public static void PushFar(IntPtr h)
    {
        int[] w = Window(h);
        int[] c = ClientScreen(h);
        int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
        int dx = (w[0] + w[2]) / 2 < sw / 2 ? 20 : -20;
        int dy = (w[1] + w[3]) / 2 < sh / 2 ? 20 : -20;
        SetCursorPos((c[0] + c[2]) / 2, (c[1] + c[3]) / 2);
        System.Threading.Thread.Sleep(150);
        for (int i = 0; i < 120; i++) {
            mouse_event(MOUSEEVENTF_MOVE, dx, dy, 0, UIntPtr.Zero);
            System.Threading.Thread.Sleep(6);
        }
        System.Threading.Thread.Sleep(200);
    }

    /* Puts the pointer at a client point (or anywhere on screen with a client-relative offset). */
    public static void PointClient(IntPtr h, int x, int y)
    {
        RECT c;
        POINT p = new POINT();
        if (!GetClientRect(h, out c)) return;
        p.X = x;
        p.Y = y;
        MapWindowPoints(h, IntPtr.Zero, ref p, 1);
        SetCursorPos(p.X, p.Y);
    }

    /* The window's frame, a few pixels in from its bottom-right corner. */
    public static void PointFrameCorner(IntPtr h)
    {
        int[] w = Window(h);
        SetCursorPos(w[2] - 3, w[3] - 3);
    }
    /* The client rect in screen coordinates - what the confinement has to be. */
    public static int[] ClientScreen(IntPtr h)
    {
        RECT c;
        POINT p1 = new POINT(), p2 = new POINT();
        if (!GetClientRect(h, out c)) return new int[] { -1, -1, -1, -1 };
        p1.X = 0; p1.Y = 0;
        p2.X = c.Right; p2.Y = c.Bottom;
        MapWindowPoints(h, IntPtr.Zero, ref p1, 1);
        MapWindowPoints(h, IntPtr.Zero, ref p2, 1);
        return new int[] { p1.X, p1.Y, p2.X, p2.Y };
    }

    /* The system's cursor clip rectangle (the whole desktop when nothing confines it). */
    public static int[] Clip()
    {
        RECT r;
        if (!GetClipCursor(out r)) return new int[] { -1, -1, -1, -1 };
        return new int[] { r.Left, r.Top, r.Right, r.Bottom };
    }

    /* Hands the focus to the desktop, the Alt+Tab a player does to reach the window's frame. */
    public static void Unfocus() { SetForegroundWindow(GetDesktopWindow()); }

    /* A point on the window's own close box: the first hit test of HTCLOSE (20) in the caption's
     * rows. */
    public static int[] CloseBox(IntPtr h)
    {
        RECT r;
        if (!GetWindowRect(h, out r)) return null;
        for (int y = r.Top + 1; y < r.Top + 40; y++)
            for (int x = r.Right - 2; x > r.Right - 220; x--)
                if ((long)SendMessage(h, WM_NCHITTEST, IntPtr.Zero,
                                      (IntPtr)((y << 16) | (x & 0xFFFF))) == HTCLOSE)
                    return new int[] { x, y };
        return null;
    }

    /* A real click on that close box - the player's way out of a window he switched away from. */
    public static bool ClickCloseBox(IntPtr h)
    {
        int[] cb = CloseBox(h);
        if (cb == null) return false;
        SetCursorPos(cb[0], cb[1]);
        System.Threading.Thread.Sleep(250);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, UIntPtr.Zero);
        System.Threading.Thread.Sleep(150);            /* a hand's, not a synthesised pair */
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, UIntPtr.Zero);
        return true;
    }

    /* A click in the middle of the picture: it activates the window, and misses every menu button
     * (the four of them sit at x 230..302). */
    public static void ClickPicture(IntPtr h)
    {
        PointClient(h, 160, 100);
        System.Threading.Thread.Sleep(200);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, UIntPtr.Zero);
        System.Threading.Thread.Sleep(80);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, UIntPtr.Zero);
    }

    [DllImport("user32.dll")]
    static extern int MapWindowPoints(IntPtr from, IntPtr to, ref POINT p, int count);

    /* The client area the window draws into. PW_CLIENTONLY (1) keeps the frame out. */
    public static Bitmap Capture(IntPtr h)
    {
        int[] c = Client(h);
        if (c[0] <= 0 || c[1] <= 0) return null;
        Bitmap bmp = new Bitmap(c[0], c[1], PixelFormat.Format32bppArgb);
        using (Graphics g = Graphics.FromImage(bmp))
        {
            IntPtr dc = g.GetHdc();
            bool ok = PrintWindow(h, dc, 1);
            g.ReleaseHdc(dc);
            if (!ok) { bmp.Dispose(); return null; }
        }
        return bmp;
    }

    static int[] Pixels(Bitmap bmp, out int w, out int h)
    {
        w = bmp.Width;
        h = bmp.Height;
        BitmapData d = bmp.LockBits(new Rectangle(0, 0, w, h), ImageLockMode.ReadOnly,
                                    PixelFormat.Format32bppArgb);
        try
        {
            byte[] raw = new byte[d.Stride * h];
            Marshal.Copy(d.Scan0, raw, 0, raw.Length);
            int[] px = new int[w * h];
            for (int y = 0; y < h; y++)
                for (int x = 0; x < w; x++)
                {
                    int o = y * d.Stride + x * 4;
                    px[y * w + x] = (raw[o + 2] << 16) | (raw[o + 1] << 8) | raw[o];
                }
            return px;
        }
        finally { bmp.UnlockBits(d); }
    }

    /* Pixels outside the picture rect that are not the border art at that spot, and how many bar
     * pixels there are to begin with (0 -> the check would be vacuous). */
    public static int[] Bars(Bitmap shot, Bitmap art, int picX, int picY, int picW, int picH)
    {
        int w, h, aw, ah;
        int[] px = Pixels(shot, out w, out h);
        int[] a = Pixels(art, out aw, out ah);
        int bad = 0, bar = 0;
        for (int y = 0; y < h; y++)
        {
            int ay = y * ah / h;
            bool rowBar = y < picY || y >= picY + picH;
            for (int x = 0; x < w; x++)
            {
                if (!rowBar && x >= picX && x < picX + picW) continue;
                bar++;
                int want = a[ay * aw + x * aw / w];
                if (px[y * w + x] != want) bad++;
            }
        }
        return new int[] { bad, bar };
    }

    /* The picture region against the 1:1 frame it is a scaled copy of: framebuffer column fx lands
     * on client column picX + fx*picW/fbW (and the row likewise). Only framebuffer columns below
     * `columns` are compared. */
    public static int Scale(Bitmap shot, Bitmap frame, int picX, int picY, int picW, int picH,
                            int columns)
    {
        int w, h, fw, fh;
        int[] px = Pixels(shot, out w, out h);
        int[] fp = Pixels(frame, out fw, out fh);
        if (fw < columns) columns = fw;
        int bad = 0;
        for (int fy = 0; fy < fh; fy++)
        {
            int y = picY + fy * picH / fh;
            if (y < 0 || y >= h) continue;
            for (int fx = 0; fx < columns; fx++)
            {
                int x = picX + fx * picW / fw;
                if (x < 0 || x >= w) continue;
                if (px[y * w + x] != fp[fy * fw + fx]) bad++;
            }
        }
        return bad;
    }

    /* Two equally sized regions of two captures, pixel for pixel. */
    public static int Region(Bitmap a, int ax, int ay, Bitmap b, int bx, int by, int w, int h)
    {
        int aw, ah, bw, bh;
        int[] ap = Pixels(a, out aw, out ah);
        int[] bp = Pixels(b, out bw, out bh);
        int bad = 0;
        for (int y = 0; y < h; y++)
        {
            if (ay + y < 0 || ay + y >= ah || by + y < 0 || by + y >= bh) { bad++; continue; }
            for (int x = 0; x < w; x++)
            {
                if (ax + x < 0 || ax + x >= aw || bx + x < 0 || bx + x >= bw) { bad++; continue; }
                if (ap[(ay + y) * aw + ax + x] != bp[(by + y) * bw + bx + x]) bad++;
            }
        }
        return bad;
    }
}
'@
if (-not ('WindowCheck' -as [type])) {
    Add-Type -AssemblyName System.Drawing
    Add-Type -TypeDefinition $src -ReferencedAssemblies System.Drawing
}

# The settings the runs start from: a windowed game (the window size itself is what this check
# measures, so the file carries no window key at first and the window comes up at the 320x200 the
# picture is at 1:1).
$startIni = @'
; ICFTD runtime settings. Written with these defaults on the first start.
; Sections use [BRACKETS]; ';' or '#' at the start of a line is a comment.

[VIDEO]
; false = window, one emulated pixel per desktop pixel at first.
fullscreen=false

[AUDIO]
; Volume 0..10, 0 = off, 10 = full.
sound=10
music=10
'@

function Value([string]$path, [string]$key)
{
    $m = Select-String -Path $path -Pattern ('^\s*' + $key + '\s*=\s*(\S+)')
    if (-not $m) { return '<missing>' }
    return $m.Matches[0].Groups[1].Value
}

# The title screen is the still the captures are taken from: it is drawn from the picture at 1:1
# and does not animate, and its own line in the log says when it is up. It waits for input, so the
# run ends when the check closes the window - which is what writes the size back.
function StartGame([string]$name, [string[]]$Extra = @(), [string]$Wait = 'title: fire or 0 starts the game;')
{
    $log = Join-Path $Work "$name.log"
    $proc = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru -RedirectStandardOutput $log `
                -ArgumentList (@($Image, '9000000', '--data', $DataDir, '--window',
                                 '--mouse', (Join-Path $Work 'pointer.txt')) + $Extra)
    $script:running.Add($proc) | Out-Null
    $h = [IntPtr]::Zero
    for ($i = 0; $i -lt 150; $i++) {
        Start-Sleep -Milliseconds 100
        $h = [WindowCheck]::Find()
        if ($h -ne [IntPtr]::Zero) {
            $text = ''
            try { $text = Get-Content $log -Raw -ErrorAction SilentlyContinue } catch { }
            if ($text -match [regex]::Escape($Wait)) { break }
        }
        if ($proc.HasExited) { break }
    }
    return @{ proc = $proc; hwnd = $h; log = $log }
}

function StopGame($game)
{
    if ($game.hwnd -ne [IntPtr]::Zero) { [void][WindowCheck]::Close($game.hwnd) }
    if (-not $game.proc.WaitForExit(20000)) {
        try { $game.proc.Kill() } catch { }
        return $false
    }
    return $true
}

$running = New-Object System.Collections.Generic.List[object]

try {
    # The pointer the runs are given: one position, so the arrow under it is the same in every
    # capture (see the header).
    "0 100 120 0`n" | Set-Content -Encoding ascii (Join-Path $Work 'pointer.txt')

    # 5. A measurement run is inert: no window, and no window size written.
    $startIni | Set-Content -Encoding ascii $ini
    $null = & $Exe $Image 2000000 --data $DataDir 2>&1
    if ((Select-String -Path $ini -Pattern '^\s*window_(width|height)\s*=' -Quiet)) {
        Fail 'a measurement run added a window size to icftd.ini (the seam is not inert)'
    } else { Ok 'a measurement run has no window and writes no window size' }

    $game = StartGame 'run1'
    $bmpArt = [System.Drawing.Bitmap]::FromFile((Resolve-Path $Art).Path)
    if ($game.hwnd -eq [IntPtr]::Zero) {
        if (-not $game.proc.HasExited) { try { $game.proc.Kill() } catch { } }
        Ok 'the window is not measured (no desktop gave the game a window) - SKIP'
    } else {
        $startSize = [WindowCheck]::Client($game.hwnd)
        $shot0 = [WindowCheck]::Capture($game.hwnd)
        if ($startSize[0] -ne 320 -or $startSize[1] -ne 200) {
            Fail ("the windowed start is {0}x{1}, not the picture's 320x200" -f $startSize[0], $startSize[1])
        } elseif ($shot0 -eq $null) {
            Fail 'the window would not render its client area (PrintWindow)'
        } else {
            Ok 'a windowed start is the picture at 1:1, 320x200'

            # 6. The window captures the pointer while it has the focus: the system cursor is hidden
            #    and the pointer cannot be moved out of the picture. Losing the focus (Alt+Tab) gives
            #    it back - that is how the frame is reached, and the drag below uses exactly that
            #    path. (ClipCursor holds a pointer on the clip's far edge, and even a pixel past it,
            #    so a pixel either side of the picture counts as inside: a pointer that is *held*
            #    there is not a pointer that got out.)
            [WindowCheck]::ClickPicture($game.hwnd)
            Start-Sleep -Milliseconds 600
            $focused = [WindowCheck]::Cursor()
            $rect = [WindowCheck]::ClientScreen($game.hwnd)
            [WindowCheck]::PushFar($game.hwnd)
            $lost = [WindowCheck]::Pos()
            $held = ($lost[0] -ge $rect[0] - 1) -and ($lost[0] -le $rect[2] + 1) -and
                    ($lost[1] -ge $rect[1] - 1) -and ($lost[1] -le $rect[3] + 1)
            if ($focused -ne 'hidden') {
                Fail ("the system cursor is '{0}' while the window has the focus, not 'hidden'" -f $focused)
            } elseif (-not $held) {
                Fail ("the pointer left the focused window ({0},{1}); the picture is {2}..{3}, so it is not captured" -f
                      $lost[0], $lost[1], ($rect[0..1] -join ','), ($rect[2..3] -join ','))
            } else { Ok 'the focused window captures the pointer: hidden, and it cannot be moved out of the picture' }

            [void][WindowCheck]::Unfocus()
            Start-Sleep -Milliseconds 700
            $free = [WindowCheck]::Cursor()
            [WindowCheck]::PushFar($game.hwnd)
            $went = [WindowCheck]::Pos()
            $outside = ($went[0] -lt $rect[0] - 1) -or ($went[0] -gt $rect[2] + 1) -or
                       ($went[1] -lt $rect[1] - 1) -or ($went[1] -gt $rect[3] + 1)
            if ($free -ne 'visible') {
                Fail ("the system cursor is '{0}' once the window has lost the focus, not 'visible'" -f $free)
            } elseif (-not $outside) {
                Fail ("the pointer is still held inside the unfocused window ({0},{1})" -f $went[0], $went[1])
            } else { Ok 'losing the focus gives the pointer back (Alt+Tab, which is how the frame is reached)' }

            # 7. The frame can really be dragged. The system's own sizing loop resizes the window,
            #    and it measures the drag from the pointer: a pointer confined to the shrinking
            #    client (the fixed window's clip) ran the window down to its minimum track size.
            [WindowCheck]::DragCorner($game.hwnd, 200, 120)
            $size = [WindowCheck]::Client($game.hwnd)
            $shot1 = [WindowCheck]::Capture($game.hwnd)
            if ($size[0] -lt 420 -or $size[1] -lt 260) {
                Fail ("dragging the frame's corner 200,120 left a {0}x{1} client, not a bigger one - the sizing loop was fought" -f
                      $size[0], $size[1])
            } elseif ($shot1 -eq $null) {
                Fail 'the dragged window would not render its client area'
            } else {
                Ok ("dragging the frame's corner grows the window ({0}x{1} client)" -f $size[0], $size[1])
                $picW = $size[1] * 320 / 200
                $picX = ($size[0] - $picW) / 2
                $bars = [WindowCheck]::Bars($shot1, $bmpArt, $picX, 0, $picW, $size[1])
                if ($bars[1] -eq 0) {
                    Fail 'the dragged window has no bar pixels - the picture is being stretched'
                } elseif ($bars[0] -ne 0) {
                    Fail ("{0} of the {1} bar pixels after the drag are not the border art" -f $bars[0], $bars[1])
                } else { Ok 'the dragged window shows the picture at its height scale, border art either side' }
            }
            if ($shot1 -ne $null) { $shot1.Dispose() }

            # The pointer comes back inside the picture with the window still focused: hidden and
            # captured again, so playing after a resize is the game's pointer again.
            [WindowCheck]::ClickPicture($game.hwnd)
            Start-Sleep -Milliseconds 600
            $again = [WindowCheck]::Cursor()
            $rect2 = [WindowCheck]::ClientScreen($game.hwnd)
            [WindowCheck]::PushFar($game.hwnd)
            $back = [WindowCheck]::Pos()
            $againHeld = ($back[0] -ge $rect2[0] - 1) -and ($back[0] -le $rect2[2] + 1) -and
                         ($back[1] -ge $rect2[1] - 1) -and ($back[1] -le $rect2[3] + 1)
            if ($again -ne 'hidden' -or -not $againHeld) {
                Fail ("after the resize the pointer is '{0}' at {1},{2} with the window focused, not captured" -f
                      $again, $back[0], $back[1])
            } else { Ok 'the pointer is captured again once the window is used again' }

            # 8. Dragging in stops at the minimum, and does not run on below it. The pointer is
            #    captured again (step 6), so the frame is reached the same way a player reaches it:
            #    by letting the window lose the focus first.
            [void][WindowCheck]::Unfocus()
            Start-Sleep -Milliseconds 600
            [WindowCheck]::DragCorner($game.hwnd, -900, -700)
            $size = [WindowCheck]::Client($game.hwnd)
            if ($size[0] -ne 160 -or $size[1] -ne 120) {
                Fail ("dragging the frame in left a {0}x{1} client, not the 160x120 minimum" -f $size[0], $size[1])
            } else { Ok 'dragging the frame in stops at the 160x120 minimum' }

            [WindowCheck]::ResizeClient($game.hwnd, 320, 200)
            Start-Sleep -Milliseconds 400
            Ok 'the window is back at 320x200'

            # 1. The frame is resizable: a 960x400 client, and the window really has it.
            [WindowCheck]::ResizeClient($game.hwnd, 960, 400)
            Start-Sleep -Milliseconds 500
            $size = [WindowCheck]::Client($game.hwnd)
            $shot1 = if ($size[0] -eq 960 -and $size[1] -eq 400) { [WindowCheck]::Capture($game.hwnd) } else { $null }
            if ($size[0] -ne 960 -or $size[1] -ne 400) {
                Fail ("the window did not resize to a 960x400 client (it is {0}x{1}) - no resizable frame" -f
                      $size[0], $size[1])
            } elseif ($shot1 -eq $null) {
                Fail 'the resized window would not render its client area'
            } else {
                Ok 'the window takes a new client size (320x200 -> 960x400)'

                # 2. Height drives the scale: the picture is 640x400 in the middle, the 1:1 frame
                #    doubled, and the bars are the border art.
                $picW = 400 * 320 / 200
                $picX = (960 - $picW) / 2
                $bars = [WindowCheck]::Bars($shot1, $bmpArt, $picX, 0, $picW, 400)
                $scaled = [WindowCheck]::Scale($shot1, $shot0, $picX, 0, $picW, 400, 320)
                if ($bars[1] -eq 0) {
                    Fail 'the wider client has no bar pixels to measure - the picture is being stretched'
                } elseif ($bars[0] -ne 0) {
                    Fail ("{0} of the {1} bar pixels are not the border art (the bars are not painted)" -f
                          $bars[0], $bars[1])
                } else {
                    Ok ("the bars either side of the picture are border.png ({0} px)" -f $bars[1])
                }
                if ($scaled -ne 0) {
                    Fail ("{0} picture pixel(s) are not the 1:1 frame scaled by two (the scale is not by height)" -f $scaled)
                } else { Ok 'the picture is the 1:1 frame scaled by two, 640x400, centred' }

                # 3. Widening the window leaves the picture where it is.
                [WindowCheck]::ResizeClient($game.hwnd, 1280, 400)
                Start-Sleep -Milliseconds 500
                $size = [WindowCheck]::Client($game.hwnd)
                $shot2 = if ($size[0] -eq 1280 -and $size[1] -eq 400) { [WindowCheck]::Capture($game.hwnd) } else { $null }
                if ($shot2 -eq $null) {
                    Fail ("the window did not widen to a 1280x400 client (it is {0}x{1})" -f $size[0], $size[1])
                } else {
                    $wideX = (1280 - $picW) / 2
                    $bars2 = [WindowCheck]::Bars($shot2, $bmpArt, $wideX, 0, $picW, 400)
                    $same = [WindowCheck]::Region($shot1, $picX, 0, $shot2, $wideX, 0, $picW, 400)
                    if ($bars2[0] -ne 0) {
                        Fail ("{0} of the {1} bar pixels of the widened window are not the border art" -f
                              $bars2[0], $bars2[1])
                    } elseif ($same -ne 0) {
                        Fail ("{0} picture pixel(s) moved or rescaled when only the window's width changed" -f $same)
                    } else { Ok 'a wider window keeps the picture at the same size and only widens the bars' }
                }
            }
        }
        if ($shot0 -ne $null) { $shot0.Dispose() }
        if ($shot1 -ne $null) { $shot1.Dispose() }
        if ($shot2 -ne $null) { $shot2.Dispose() }

        # 4. The size is kept: closing the window writes it, and the next start comes back to it.
        if (-not (StopGame $game)) { Fail 'the windowed run did not close' }
        $ww = Value $ini 'window_width'
        $wh = Value $ini 'window_height'
        if ($ww -ne '1280' -or $wh -ne '400') {
            Fail ("closing the window wrote window_width={0}, window_height={1}, not the 1280x400 it was left at" -f
                  $ww, $wh)
        } else { Ok 'closing the window keeps its size in icftd.ini (1280x400)' }

        $game2 = StartGame 'run2'
        if ($game2.hwnd -eq [IntPtr]::Zero) {
            if (-not $game2.proc.HasExited) { try { $game2.proc.Kill() } catch { } }
            Fail 'the second start did not open a window'
        } else {
            $size = [WindowCheck]::Client($game2.hwnd)
            if ($size[0] -ne 1280 -or $size[1] -ne 400) {
                Fail ("the next windowed start is {0}x{1}, not the 1280x400 the last one was left at" -f
                      $size[0], $size[1])
            } else { Ok 'the next windowed start comes back at the size the window was left at' }

            # 10. The window closes from its own close box, clicked while it is not the one in use
            #     (Alt+Tab, then the X). Taking the pointer for the picture as the click activated
            #     the window pulled it out of the box before the press landed, so the press became a
            #     click on the picture and the run simply kept playing.
            [void][WindowCheck]::Unfocus()
            Start-Sleep -Milliseconds 700
            if (-not [WindowCheck]::ClickCloseBox($game2.hwnd)) {
                Fail 'the window has no close box to click'
                if (-not (StopGame $game2)) { Fail 'the second windowed run did not close' }
            } elseif (-not $game2.proc.WaitForExit(20000)) {
                Fail 'a click on the close box of the window that was not in use did not close the run'
                try { $game2.proc.Kill() } catch { }
            } else { Ok 'a click on the close box of the window that was not in use closes the run' }

            # 9. A scene whose screen is larger than the game's keeps the screen's pixel shape and
            #    stays inside the screen's rectangle. The chicken race is that scene (--titlekey 5
            #    starts it the way the title does); a 960x400 client is a 640x400 screen with the
            #    368x216 picture fitted inside it - 640x375, all of it - and everything outside that
            #    rectangle is the border art, which no scene may grow over.
            $game3 = StartGame 'chicken' @('--titlekey', '5') 'title: Chicken Race at frame'
            if ($game3.hwnd -eq [IntPtr]::Zero) {
                if (-not $game3.proc.HasExited) { try { $game3.proc.Kill() } catch { } }
                Fail 'the chicken race did not open a window'
            } else {
                Start-Sleep -Milliseconds 2500                  # the race, not the title it came from
                [WindowCheck]::ResizeClient($game3.hwnd, 960, 400)
                Start-Sleep -Milliseconds 700
                $size = [WindowCheck]::Client($game3.hwnd)
                $shot3 = if ($size[0] -eq 960 -and $size[1] -eq 400) { [WindowCheck]::Capture($game3.hwnd) } else { $null }
                if ($shot3 -eq $null) {
                    Fail ("the chicken run's window is {0}x{1} and would not render" -f $size[0], $size[1])
                } else {
                    # The screen the client is laid out for, and the picture fitted into it the way
                    # the present does: both axes by the one factor that fits, so its shape is the
                    # raster's and it stays inside the screen.
                    $screenW = [int][Math]::Floor(400 * 320 / 200)
                    $screenX = [int][Math]::Floor((960 - $screenW) / 2)
                    $picW = [int][Math]::Floor($screenW * 368 / 320)
                    $picH = [int][Math]::Floor(400 * 216 / 200)
                    if ($screenW * $picH -le 400 * $picW) {
                        $picH = [int][Math]::Floor($picH * $screenW / $picW); $picW = $screenW
                    } else {
                        $picW = [int][Math]::Floor($picW * 400 / $picH); $picH = 400
                    }
                    $picX = $screenX + [int][Math]::Floor(($screenW - $picW) / 2)
                    $picY = [int][Math]::Floor((400 - $picH) / 2)
                    $out = [WindowCheck]::Bars($shot3, $bmpArt, $picX, $picY, $picW, $picH)
                    $ring = [WindowCheck]::Bars($shot3, $bmpArt, $picX + 8, $picY + 8, $picW - 16, $picH - 16)
                    $ringPx = $ring[1] - $out[1]
                    $ringPic = $ring[0] - $out[0]
                    if ($out[0] -ne 0) {
                        Fail ("{0} pixel(s) outside the {1}x{2} picture are not the border art - the scene is drawn at a shape of its own" -f
                              $out[0], $picW, $picH)
                    } elseif ($ringPx -le 0) {
                        Fail 'the chicken picture leaves no edge to measure - it is smaller than the screen allows'
                    } elseif ($ringPic * 2 -lt $ringPx) {
                        Fail ("only {0} of the {1} pixels just inside the picture's rectangle are picture, not art - it is scaled down more than the screen asks for" -f
                              $ringPic, $ringPx)
                    } else {
                        Ok ("the chicken race keeps the screen's shape: its 368x216 picture is {0}x{1} inside the {2}x400 screen, border art around it" -f
                            $picW, $picH, $screenW)
                    }
                    $shot3.Dispose()
                }
                if (-not (StopGame $game3)) { Fail 'the chicken run did not close' }
            }

            # 11. The port's own overlay keeps its own colours over a scene. --osd arms the line on
            #     every present, the scene under it is the intro (--call enters it at frame 2500, so
            #     the title does not take the screen), and the line must be white in the window -
            #     the palette the scene loaded reaches the device through plat_set_palette, and the
            #     overlay's range has to be handed over from its own first entry or the scene's
            #     pens 0..31 land in 224..255 and colour the OSD line and the arrow.
            $log13 = Join-Path $Work 'overlay.log'
            $proc13 = Start-Process -FilePath (Resolve-Path $Exe).Path -PassThru -RedirectStandardOutput $log13 `
                -ArgumentList (@($Image, '9000000', '--data', $DataDir, '--window', '--osd', 'OSDTEST',
                                 '--call', '0x1C19A:2500'))
            $running.Add($proc13) | Out-Null
            $h13 = [IntPtr]::Zero
            for ($i = 0; $i -lt 100; $i++) {
                Start-Sleep -Milliseconds 100
                $h13 = [WindowCheck]::Find()
                if ($h13 -ne [IntPtr]::Zero -and $i -ge 30) { break }     # ~3 s of composed frames
                if ($proc13.HasExited) { break }
            }
            if ($h13 -eq [IntPtr]::Zero) {
                Fail 'the overlay run did not open a window'
            } else {
                [WindowCheck]::ResizeClient($h13, 320, 200)     # 1:1, so the line is at 2,2
                Start-Sleep -Milliseconds 500
                $shot13 = [WindowCheck]::Capture($h13)
                if ($shot13 -eq $null) {
                    Fail 'the overlay run would not render its client area'
                } else {
                    $white = 0
                    for ($y = 0; $y -lt [Math]::Min(12, $shot13.Height); $y++) {
                        for ($x = 0; $x -lt [Math]::Min(140, $shot13.Width); $x++) {
                            $c = $shot13.GetPixel($x, $y)
                            if ($c.R -gt 200 -and $c.G -gt 200 -and $c.B -gt 200) { $white++ }
                        }
                    }
                    if ($white -lt 20) {
                        Fail ("the OSD line is {0} pixel(s) of #FFFFFF in the window - the overlay's colours are taken from the scene's palette" -f $white)
                    } else {
                        Ok ("the OSD line keeps the port's own colour over a scene (white, {0} px)" -f $white)
                    }
                    $shot13.Dispose()
                }
                [void][WindowCheck]::Close($h13)
                if (-not $proc13.WaitForExit(20000)) { try { $proc13.Kill() } catch { } }
            }

            # 12. What the panel shows is the picture the presenter composed. --shot writes the raster
            #     the platform built for the frame (the picture with the port's overlay on it), and
            #     PrintWindow reads the client the presented frame landed in; on a still screen - the
            #     title they are both taken from - the two have to be the same picture, pixel for
            #     pixel. This is docs\display-rate.md, phase 3's claim that the screen is produced
            #     from the same gfx->fb/gfx->pal the 8-bit path composes (the run's own
            #     --displaystat line then says which presenter was measured).
            $shot12 = Join-Path $Work 'composed.bmp'
            if (Test-Path $shot12) { Remove-Item $shot12 -Force }
            $game12 = StartGame 'run12' @('--shot', $shot12, '--displaystat') 'title: menu'
            if ($game12.hwnd -eq [IntPtr]::Zero) {
                if (-not $game12.proc.HasExited) { try { $game12.proc.Kill() } catch { } }
                Fail 'the presented-picture run did not open a window'
            } else {
                [WindowCheck]::ResizeClient($game12.hwnd, 320, 200)     # 1:1, so the client *is* the picture
                Start-Sleep -Milliseconds 900
                $cap12 = [WindowCheck]::Capture($game12.hwnd)
                if (-not (StopGame $game12)) { Fail 'the presented-picture run did not close' }
                if ($cap12 -eq $null) {
                    Fail 'the presented-picture run would not render its client area'
                } elseif (-not (Test-Path $shot12)) {
                    Fail ("no composed raster was written ({0})" -f $shot12)
                } else {
                    $ref12 = $null
                    try {
                        $ref12 = [System.Drawing.Bitmap]::FromFile((Resolve-Path $shot12).Path)
                        $w12 = [Math]::Min($ref12.Width, $cap12.Width)
                        $h12 = [Math]::Min($ref12.Height, $cap12.Height)
                        $diff12 = [WindowCheck]::Region($cap12, 0, 0, $ref12, 0, 0, $w12, $h12)
                        $text12 = ''
                        try { $text12 = Get-Content $game12.log -Raw -ErrorAction SilentlyContinue } catch { }
                        $presenter = if ($text12 -match 'presenter (\w+)') { $Matches[1] } else { '?' }
                        if ($ref12.Width -ne 320 -or $ref12.Height -ne 200 -or
                            $cap12.Width -ne $ref12.Width -or $cap12.Height -ne $ref12.Height) {
                            Fail ("the composed raster is {0}x{1} and the client {2}x{3} - they cannot be compared" -f
                                  $ref12.Width, $ref12.Height, $cap12.Width, $cap12.Height)
                        } elseif ($diff12 -ne 0) {
                            Fail ("{0} pixel(s) of the {1} the window presents differ from the picture the presenter composed (presenter {2})" -f
                                  $diff12, ($w12 * $h12), $presenter)
                        } else {
                            Ok ("what the panel shows is the composed picture, pixel for pixel ({0} px, presenter {1})" -f ($w12 * $h12), $presenter)
                        }
                    } catch {
                        Fail ("the composed raster could not be read: {0}" -f $_)
                    } finally {
                        if ($ref12) { $ref12.Dispose() }
                        if ($cap12) { $cap12.Dispose() }
                    }
                }
            }

            # 13. The pointer is kept whole. The arrow is the only pointer the player sees - the
            #     window hides the system cursor - and the picture's right edge is where the border
            #     art begins, so a tip pushed further right used to slide the mark under the curtain.
            #     A title screen with the scripted pointer past that limit must be the same picture
            #     as one whose tip sits exactly at it: the arrow stops at 303 (320 - the 17-pixel
            #     sprite), whole, and moving further right changes nothing.
            function TitlePointerShot([string]$name, [int]$x)
            {
                "0 $x 100 0`n" | Set-Content -Encoding ascii (Join-Path $Work 'pointer.txt')
                $g = StartGame $name @() 'title: menu'
                if ($g.hwnd -eq [IntPtr]::Zero) { return $null }
                [WindowCheck]::ResizeClient($g.hwnd, 320, 200)
                Start-Sleep -Milliseconds 800
                $b = [WindowCheck]::Capture($g.hwnd)
                [void](StopGame $g)
                return $b
            }
            $atLimit = TitlePointerShot 'ptr-limit' 303
            $pastLimit = TitlePointerShot 'ptr-past' 319
            "0 100 120 0`n" | Set-Content -Encoding ascii (Join-Path $Work 'pointer.txt')
            if ($atLimit -eq $null -or $pastLimit -eq $null) {
                Fail 'the pointer runs would not render their client area'
            } else {
                $w13 = [Math]::Min($atLimit.Width, $pastLimit.Width)
                $h13 = [Math]::Min($atLimit.Height, $pastLimit.Height)
                $d13 = [WindowCheck]::Region($atLimit, 0, 0, $pastLimit, 0, 0, $w13, $h13)
                if ($w13 -ne 320 -or $h13 -ne 200) {
                    Fail ("the pointer screens are {0}x{1}, not the picture's 320x200" -f $w13, $h13)
                } elseif ($d13 -ne 0) {
                    Fail ("{0} pixel(s) differ between the pointer at x 303 and at x 319 - the arrow does not stop at the picture's edge" -f $d13)
                } else {
                    Ok 'the pointer stops where its arrow is still whole (x 319 draws what x 303 draws)'
                }
                $atLimit.Dispose()
                $pastLimit.Dispose()
            }
        }
    }
    if ($bmpArt -ne $null) { $bmpArt.Dispose() }
}
finally {
    foreach ($p in $running) { if (-not $p.HasExited) { try { $p.Kill() } catch { } } }
    if ($hadIni) { Copy-Item $backup $ini -Force }
    else { Remove-Item $ini -Force -ErrorAction SilentlyContinue }
}

if ($fail -ne 0) { Write-Output ("window: {0} check(s) failed" -f $fail); exit 1 }
Write-Output 'window: the picture scales with the window''s height, the border fills the bars, a scene with its own screen keeps the screen''s shape, and the size is kept'
exit 0
