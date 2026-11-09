<#
.SYNOPSIS
    Runs WinUAE unattended and grabs a timed series of reference frames.

.DESCRIPTION
    Launches a fixed WinUAE configuration (tools\make-winuae-config.ps1), optionally clicks the
    left mouse button at given times to get past the game's waits, and copies the window's client
    area to PNG files.  A manifest.csv records when each frame was taken, so a frame can be tied
    to an emulated moment afterwards.

    The client area is grabbed from the desktop, which is the only method that works for
    DirectDraw/D3D windows.  The window is raised before each grab, so it must stay unobstructed.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\winuae-capture.ps1 -DurationMs 60000 -ClickAtMs 15000,30000
#>
param(
    [string]$Config = "tools\icftd.uae",
    [string]$OutDir = "out\capture",
    [int]$WarmupMs = 12000,           # emulator boot + kickstart + game load
    [int]$DurationMs = 40000,
    [int]$IntervalMs = 500,
    [int[]]$ClickAtMs = @(),          # left mouse button at the window centre
    [int[]]$KeyAtMs = @(),            # space bar
    [switch]$NoKill,
    [string]$WinUAE = "E:\Meine Programme\WinUAE"
)
$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.Drawing

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not (Test-Path -LiteralPath $Config)) { throw "config not found: $Config (run tools\make-winuae-config.ps1)" }
    $cfg = (Get-Item -LiteralPath $Config).FullName
    $exe = Join-Path $WinUAE 'winuae64.exe'
    if (-not (Test-Path -LiteralPath $exe)) { throw "winuae64.exe not found in $WinUAE" }

    if (-not ('Win32Cap' -as [type])) {
        Add-Type -Namespace Native -Name Win32Cap -MemberDefinition @'
[StructLayout(LayoutKind.Sequential)] public struct RECT { public int Left, Top, Right, Bottom; }
[StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
[DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
[DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
[DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int cmd);
[DllImport("user32.dll")] public static extern bool IsIconic(IntPtr h);
[DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
[DllImport("user32.dll")] public static extern void mouse_event(uint flags, uint dx, uint dy, uint data, IntPtr extra);
[DllImport("user32.dll")] public static extern void keybd_event(byte vk, byte scan, uint flags, IntPtr extra);
'@
    }
    $MK_LBUTTON_DOWN = 0x0002
    $MK_LBUTTON_UP = 0x0004
    $SW_RESTORE = 9
    $VK_SPACE = 0x20
    $KEYEVENTF_KEYUP = 0x0002

    New-Item -ItemType Directory -Force -Path $OutDir | Out-Null
    Get-ChildItem -LiteralPath $OutDir -Filter 'f*.png' | Remove-Item -Force -ErrorAction SilentlyContinue

    "starting $exe -f `"$cfg`""
    $proc = Start-Process -FilePath $exe -ArgumentList @('-f', "`"$cfg`"") -PassThru

    # The window only exists after the GUI-less start-up has created it.
    $h = [IntPtr]::Zero
    for ($i = 0; $i -lt 200; $i++) {
        Start-Sleep -Milliseconds 100
        $proc.Refresh()
        if ($proc.HasExited) { throw "WinUAE exited early (code $($proc.ExitCode)) - check the config" }
        if ($proc.MainWindowHandle -ne [IntPtr]::Zero) { $h = $proc.MainWindowHandle; break }
    }
    if ($h -eq [IntPtr]::Zero) { throw "WinUAE window did not appear" }

    function Raise {
        if ([Native.Win32Cap]::IsIconic($h)) { [void][Native.Win32Cap]::ShowWindow($h, $SW_RESTORE) }
        [void][Native.Win32Cap]::SetForegroundWindow($h)
    }

    function Get-ClientBox {
        # WinUAE recreates its window when the Amiga screen mode changes, which leaves the
        # handle grabbed at start-up dangling - re-resolve it instead of giving up.
        if ($script:h -ne [IntPtr]::Zero) {
            $cr = New-Object Native.Win32Cap+RECT
            [void][Native.Win32Cap]::GetClientRect($script:h, [ref]$cr)
            if ($cr.Right -le 0 -or $cr.Bottom -le 0) { $script:h = [IntPtr]::Zero }
        }
        if ($script:h -eq [IntPtr]::Zero) {
            for ($i = 0; $i -lt 50; $i++) {
                $proc.Refresh()
                if ($proc.HasExited) { throw "WinUAE exited (code $($proc.ExitCode))" }
                if ($proc.MainWindowHandle -ne [IntPtr]::Zero) { $script:h = $proc.MainWindowHandle; break }
                Start-Sleep -Milliseconds 100
            }
        }
        $cr = New-Object Native.Win32Cap+RECT
        [void][Native.Win32Cap]::GetClientRect($script:h, [ref]$cr)
        $pt = New-Object Native.Win32Cap+POINT
        $pt.X = 0; $pt.Y = 0
        [void][Native.Win32Cap]::ClientToScreen($script:h, [ref]$pt)
        [pscustomobject]@{ X = $pt.X; Y = $pt.Y; W = $cr.Right - $cr.Left; H = $cr.Bottom - $cr.Top }
    }

    function Save-Frame($path) {
        $b = Get-ClientBox
        if ($b.W -le 0 -or $b.H -le 0) { throw "empty client area" }
        $bmp = New-Object System.Drawing.Bitmap $b.W, $b.H, ([System.Drawing.Imaging.PixelFormat]::Format32bppRgb)
        $g = [System.Drawing.Graphics]::FromImage($bmp)
        $g.CopyFromScreen($b.X, $b.Y, 0, 0, (New-Object System.Drawing.Size $b.W, $b.H))
        $g.Dispose()
        $bmp.Save($path, [System.Drawing.Imaging.ImageFormat]::Png)
        $bmp.Dispose()
        $b
    }

    Raise
    Start-Sleep -Milliseconds $WarmupMs
    $box = Get-ClientBox
    "client area $($box.W)x$($box.H) at ($($box.X),$($box.Y))"

    $manifest = New-Object System.Collections.Generic.List[string]
    $manifest.Add('index,elapsed_ms,file,event')

    $sw = [System.Diagnostics.Stopwatch]::StartNew()
    $next = 0
    $n = 0
    $clicks = @{}; foreach ($c in $ClickAtMs) { $clicks[$c] = $false }
    $keys = @{};   foreach ($k in $KeyAtMs) { $keys[$k] = $false }
    $centre = @{ X = $box.X + [int]($box.W / 2); Y = $box.Y + [int]($box.H / 2) }

    while ($sw.ElapsedMilliseconds -lt $DurationMs) {
        $t = [int]$sw.ElapsedMilliseconds
        $event = ''

        foreach ($c in @($clicks.Keys)) {
            if (-not $clicks[$c] -and $t -ge $c) {
                $clicks[$c] = $true
                [void][Native.Win32Cap]::SetCursorPos($centre.X, $centre.Y)
                [Native.Win32Cap]::mouse_event($MK_LBUTTON_DOWN, 0, 0, 0, [IntPtr]::Zero)
                Start-Sleep -Milliseconds 60
                [Native.Win32Cap]::mouse_event($MK_LBUTTON_UP, 0, 0, 0, [IntPtr]::Zero)
                $event = 'click'
            }
        }
        foreach ($k in @($keys.Keys)) {
            if (-not $keys[$k] -and $t -ge $k) {
                $keys[$k] = $true
                [Native.Win32Cap]::keybd_event($VK_SPACE, 0, 0, [IntPtr]::Zero)
                Start-Sleep -Milliseconds 40
                [Native.Win32Cap]::keybd_event($VK_SPACE, 0, $KEYEVENTF_KEYUP, [IntPtr]::Zero)
                $event = if ($event) { "$event+key" } else { 'key' }
            }
        }

        if ($t -ge $next) {
            Raise
            $file = 'f{0:D5}.png' -f $n
            [void](Save-Frame (Join-Path $OutDir $file))
            $manifest.Add("$n,$t,$file,$event")
            $n++
            $next = $t + $IntervalMs
        }
        Start-Sleep -Milliseconds 20
    }

    $manifest | Set-Content -Path (Join-Path $OutDir 'manifest.csv') -Encoding ASCII
    "captured $n frames -> $OutDir"

    if (-not $NoKill) {
        # Kill can race with WinUAE exiting on its own; that is not an error.
        try { if (-not $proc.HasExited) { $proc.Kill(); [void]$proc.WaitForExit(5000) } } catch { }
    }
}
finally {
    if ($proc -and -not $NoKill -and -not $proc.HasExited) { try { $proc.Kill() } catch { } }
    Pop-Location
}
