param(
    [string]$Pack = "assets\game.pak",
    [int]$Index = -1,
    [string]$Name = "",              # e.g. Desert2/BACKS/!B14 ; overrides -Index
    [string]$Out = "re\shot.png"
)
# Renders one picture from game.pak through the real game code path (pack reader ->
# palette -> blitter) and saves it as PNG.  Used to eyeball the pipeline and, later,
# to diff frames against WinUAE captures.
$ErrorActionPreference = 'Stop'

$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not (Test-Path $Pack)) { throw "pack not found: $Pack" }
    $exe = "bin\win32\icftd.exe"
    if (-not (Test-Path $exe)) { throw "exe not found: $exe (run src\game\build.ps1)" }

    if ($Name -ne "") {
        $line = & "src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe" pakinfo $Pack |
                Select-String -Pattern ([regex]::Escape($Name)) | Select-Object -First 1
        if (-not $line) { throw "no entry named '$Name' in $Pack" }
        $Index = [int](($line.Line -split '\s+')[1])
    }
    if ($Index -lt 0) { throw "give -Index or -Name" }

    $bmp = [System.IO.Path]::ChangeExtension($Out, '.bmp')
    & $exe --shot $Pack $Index $bmp
    if ($LASTEXITCODE -ne 0) { throw "render failed" }

    Add-Type -AssemblyName System.Drawing
    $img = [System.Drawing.Image]::FromFile((Get-Item -LiteralPath $bmp).FullName)
    # -Out may be absolute; Join-Path would happily glue two absolute paths together.
    $png = if ([System.IO.Path]::IsPathRooted($Out)) { $Out } else { Join-Path (Get-Location) $Out }
    $img.Save($png, [System.Drawing.Imaging.ImageFormat]::Png)
    $img.Dispose()
    Remove-Item -LiteralPath $bmp -Force
    Write-Host "wrote $png"
}
finally { Pop-Location }
