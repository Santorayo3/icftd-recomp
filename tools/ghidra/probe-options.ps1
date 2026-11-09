<#
.SYNOPSIS  Imports the dshell image into Ghidra and dumps the program option tree.
#>
param(
    [string]$GhidraHome = $(if ($env:GHIDRA_HOME) { $env:GHIDRA_HOME } else { "H:\Meine Programme\Ghidra" }),
    [string]$Out = "re\program-options.txt"
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
Push-Location $root
try {
    $gh = Join-Path $GhidraHome 'support\analyzeHeadless.bat'
    $img = (Resolve-Path 'export\code\dshell\dshell.img').Path
    $prj = Join-Path $root 're\ghidra'
    New-Item -ItemType Directory -Force -Path $prj | Out-Null
    $args1 = @(
        $prj, 'icftd-probe',
        '-import', $img,
        '-processor', '68000:BE:32:default',
        '-loader', 'BinaryLoader',
        '-loader-baseAddr', '0x0',
        '-loader-blockName', 'dshell',
        '-scriptPath', (Resolve-Path 'tools\ghidra\scripts').Path,
        '-postScript', 'DumpOptions.java', (Join-Path $root $Out),
        '-noanalysis', '-overwrite'
    )
    & $gh @args1
}
finally { Pop-Location }
