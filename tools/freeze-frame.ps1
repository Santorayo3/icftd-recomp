<#
.SYNOPSIS
    Grabs the client area of a window to a PNG/bitmap file.

.DESCRIPTION
    Used to take reference frames from WinUAE (or any other window) so the recompilation can be
    compared against the original.  The pixels are copied from the desktop, which is the only
    method that reliably works for DirectDraw/D3D windows.

    The window must be visible and unobstructed; the script brings it to the front first.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\freeze-frame.ps1 -Title WinUAE -Out ref\title.png

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\freeze-frame.ps1 -Process icftd -Out out\frame.png
#>
param(
    [string]$Title = "WinUAE",
    [string]$Process,
    [Parameter(Mandatory = $true)][string]$Out,
    [switch]$WholeWindow,
    [int]$WaitMs = 250
)
$ErrorActionPreference = 'Stop'

Add-Type -AssemblyName System.Drawing
Add-Type -AssemblyName System.Windows.Forms

if (-not ('Win32Frame' -as [type])) {
    Add-Type -Namespace Native -Name Win32Frame -MemberDefinition @'
[StructLayout(LayoutKind.Sequential)] public struct RECT { public int Left, Top, Right, Bottom; }
[StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
[DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
[DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
[DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
[DllImport("user32.dll")] public static extern int GetWindowTextLength(IntPtr h);
[DllImport("user32.dll", CharSet = CharSet.Unicode)] public static extern int GetWindowText(IntPtr h, System.Text.StringBuilder s, int max);
[DllImport("user32.dll")] public static extern IntPtr GetForegroundWindow();
'@
}

function Get-TopLevelWindows {
    $found = @()
    foreach ($p in [System.Diagnostics.Process]::GetProcesses()) {
        if ($p.MainWindowHandle -ne [IntPtr]::Zero) {
            $found += [pscustomobject]@{ Handle = $p.MainWindowHandle; Title = $p.MainWindowTitle; Name = $p.ProcessName }
        }
    }
    $found
}

$target = $null
if ($Process) {
    $target = Get-TopLevelWindows | Where-Object { $_.Name -like "*$Process*" } | Select-Object -First 1
}
if (-not $target) {
    $target = Get-TopLevelWindows | Where-Object { $_.Title -like "*$Title*" } | Select-Object -First 1
}
if (-not $target) {
    $list = (Get-TopLevelWindows | ForEach-Object { "  $($_.Name): $($_.Title)" }) -join "`n"
    throw "no window matched -Title '$Title' / -Process '$Process'. Visible windows:`n$list"
}

$h = $target.Handle
if (-not [Native.Win32Frame]::IsWindowVisible($h)) { throw "window '$($target.Title)' is not visible" }
[void][Native.Win32Frame]::SetForegroundWindow($h)
Start-Sleep -Milliseconds $WaitMs

if ($WholeWindow) {
    $r = New-Object Native.Win32Frame+RECT
    [void][Native.Win32Frame]::GetWindowRect($h, [ref]$r)
    $x = $r.Left; $y = $r.Top; $w = $r.Right - $r.Left; $hh = $r.Bottom - $r.Top
}
else {
    $cr = New-Object Native.Win32Frame+RECT
    [void][Native.Win32Frame]::GetClientRect($h, [ref]$cr)
    $pt = New-Object Native.Win32Frame+POINT
    $pt.X = 0; $pt.Y = 0
    [void][Native.Win32Frame]::ClientToScreen($h, [ref]$pt)
    $x = $pt.X; $y = $pt.Y; $w = $cr.Right - $cr.Left; $hh = $cr.Bottom - $cr.Top
}
if ($w -le 0 -or $hh -le 0) { throw "window '$($target.Title)' has an empty client area" }

$bmp = New-Object System.Drawing.Bitmap $w, $hh, ([System.Drawing.Imaging.PixelFormat]::Format32bppRgb)
$g = [System.Drawing.Graphics]::FromImage($bmp)
$g.CopyFromScreen($x, $y, 0, 0, (New-Object System.Drawing.Size $w, $hh))
$g.Dispose()

$dir = Split-Path -Parent $Out
if ($dir -and -not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }
$ext = [System.IO.Path]::GetExtension($Out).ToLowerInvariant()
if ($ext -eq '.bmp') { $bmp.Save($Out, [System.Drawing.Imaging.ImageFormat]::Bmp) }
else { $Out = [System.IO.Path]::ChangeExtension($Out, '.png'); $bmp.Save($Out, [System.Drawing.Imaging.ImageFormat]::Png) }
$bmp.Dispose()

"captured '$($target.Title)' ${w}x${hh} at ($x,$y) -> $Out"
