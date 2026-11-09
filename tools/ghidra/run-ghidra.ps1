<#
.SYNOPSIS
    Imports the flattened dshell image into Ghidra, runs the full analysis and exports
    the decompiled C, the disassembly and the data listing.

.DESCRIPTION
    Pipeline:
      1. analyzeHeadless -import dshell.img   (68000 big endian, raw binary at base 0)
         pre-script ICFTDPrep.java            -> pointer data from the hunk relocations,
                                                 analyzer options tuned for detail
         full auto analysis                   -> Decompiler Parameter ID, aggressive
                                                 instruction finder, address tables
         post-scripts DecompileAll/DumpListing -> re\decomp_all, re\disasm
    Re-running with -PrepOnly stops after the import + prep script (no analysis);
    -Process runs the analysis on an already imported program.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\ghidra\run-ghidra.ps1
#>
param(
    [string]$Image = "export\code\dshell\dshell.img",
    [string]$Relocs = "export\code\dshell\dshell.rel",
    [string]$CodeEnd = "0x21A58",
    [string]$GhidraHome = $(if ($env:GHIDRA_HOME) { $env:GHIDRA_HOME } else { "H:\Meine Programme\Ghidra" }),
    [string]$ProjectDir = "re\ghidra",
    [string]$ProjectName = "icftd",
    [string]$OutRoot = "re",
    [int]$AnalysisTimeout = 3600,
    [switch]$PrepOnly,
    [switch]$ExportOnly,
    [switch]$ModelOnly,
    [switch]$Annotated,
    [switch]$KeepProject,
    [switch]$NoAnalysis
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
Push-Location $root
try {
    $gh = Join-Path $GhidraHome 'support\analyzeHeadless.bat'
    if (-not (Test-Path $gh)) { throw "analyzeHeadless.bat not found under $GhidraHome" }
    $img = (Resolve-Path $Image).Path
    $rel = (Resolve-Path $Relocs).Path
    $scripts = (Resolve-Path 'tools\ghidra\scripts').Path
    $prj = Join-Path $root $ProjectDir
    $out = Join-Path $root $OutRoot
    New-Item -ItemType Directory -Force -Path $prj, $out | Out-Null

    # The project is rebuilt from the flattened image on every run, so start clean unless
    # the caller wants to keep interactive annotations made in the Ghidra GUI.
    if (-not $KeepProject -and -not $ExportOnly -and -not $ModelOnly -and -not $Annotated) {
        Remove-Item (Join-Path $prj "$ProjectName.rep") -Recurse -Force -ErrorAction SilentlyContinue
        Remove-Item (Join-Path $prj "$ProjectName.rep*") -Recurse -Force -ErrorAction SilentlyContinue
        Remove-Item (Join-Path $prj "$ProjectName.gpr") -Force -ErrorAction SilentlyContinue
        Remove-Item (Join-Path $prj "$ProjectName.lock*") -Force -ErrorAction SilentlyContinue
    }

    $common = @(
        $prj, "$ProjectName",
        '-scriptPath', $scripts,
        '-analysisTimeoutPerFile', "$AnalysisTimeout"
    )

    if ($PrepOnly) {
        # Fast validation pass: import + prep script only, no analysis, no export.
        $args1 = @($common + @(
            '-import', $img,
            '-processor', '68000:BE:32:default',
            '-loader', 'BinaryLoader',
            '-loader-baseAddr', '0x0',
            '-loader-blockName', 'dshell',
            '-preScript', 'ICFTDPrep.java',
            $rel, $CodeEnd, (Join-Path $out 'icftd-prep-report.txt'),
            (Join-Path $out 'code-hunk-targets.txt'),
            '-noanalysis', '-overwrite'
        ))
        & $gh @args1
        exit $LASTEXITCODE
    }

    $prepReport = Join-Path $out 'icftd-prep-report.txt'
    $codeTargets = Join-Path $out 'code-hunk-targets.txt'
    $decompOut = Join-Path $out 'decomp_all\dshell'
    $asmOut = Join-Path $out 'disasm'
    $modelOut = Join-Path $out 'model'
    New-Item -ItemType Directory -Force -Path $asmOut, $modelOut | Out-Null

    $analysisFlag = @()
    if ($NoAnalysis) { $analysisFlag = @('-noanalysis') }

    if ($Annotated) {
        # Apply docs/structs.csv + docs/annotations.csv, then regenerate everything that
        # depends on the decompiler having types. No re-analysis: instant feedback.
        $structCsv = (Resolve-Path 'docs\structs.csv').Path
        $annotCsv = (Resolve-Path 'docs\annotations.csv').Path
        $args2 = @($common + @(
            '-process', 'dshell.img',
            '-postScript', 'ApplyAnnotations.java', $structCsv, $annotCsv,
            '-postScript', 'DecompileAll.java', $decompOut,
            '-postScript', 'ProgramStats.java', (Join-Path $out 'stats.txt'),
            '-postScript', 'ExportModel.java', $modelOut,
            '-postScript', 'FieldMap.java', $modelOut, '60',
            '-noanalysis'
        ))
        & $gh @args2
        if ($LASTEXITCODE -ne 0) { throw "analyzeHeadless failed with exit code $LASTEXITCODE" }
        Write-Host "annotated   : docs\annotations.csv, docs\structs.csv"
        Write-Host "decompiled  : $decompOut"
        Write-Host "model       : $modelOut"
        exit 0
    }

    if ($ModelOnly) {
        # Structured model of the analysed program: functions, xrefs, globals,
        # strings, types and the decompiler's field map. No analysis, no re-decompile.
        $modelOut = Join-Path $out 'model'
        New-Item -ItemType Directory -Force -Path $modelOut | Out-Null
        $args3 = @($common + @(
            '-process', 'dshell.img',
            '-postScript', 'ExportModel.java', $modelOut,
            '-postScript', 'FieldMap.java', $modelOut, '60',
            '-noanalysis'
        ))
        & $gh @args3
        if ($LASTEXITCODE -ne 0) { throw "analyzeHeadless failed with exit code $LASTEXITCODE" }
        Write-Host "model       : $modelOut"
        exit 0
    }

    if ($ExportOnly) {
        # Re-run only the export scripts on the already analysed program (fast).
        $args2 = @($common + @(
            '-process', 'dshell.img',
            '-postScript', 'FixOrphans.java', (Join-Path $out 'orphan-report.txt'),
            '-postScript', 'DecompileAll.java', $decompOut,
            '-postScript', 'DumpListing.java', (Join-Path $asmOut 'dshell.asm'), (Join-Path $asmOut 'dshell.data.txt'),
            '-postScript', 'ProgramStats.java', (Join-Path $out 'stats.txt'),
            '-noanalysis'
        ))
        & $gh @args2
        if ($LASTEXITCODE -ne 0) { throw "analyzeHeadless failed with exit code $LASTEXITCODE" }
        Write-Host "decompiled : $decompOut"
        Write-Host "disassembly: $asmOut"
        exit 0
    }

    # First run imports (or overwrite-imports) the image, sets up the pointers and analyses.
    $args1 = @($common + @(
        '-import', $img,
        '-processor', '68000:BE:32:default',
        '-loader', 'BinaryLoader',
        '-loader-baseAddr', '0x0',
        '-loader-blockName', 'dshell',
        '-preScript', 'ICFTDPrep.java',
        $rel, $CodeEnd, $prepReport, $codeTargets,
        '-postScript', 'FixOrphans.java', (Join-Path $out 'orphan-report.txt'),
        '-postScript', 'DecompileAll.java', $decompOut,
        '-postScript', 'DumpListing.java', (Join-Path $asmOut 'dshell.asm'), (Join-Path $asmOut 'dshell.data.txt'),
        '-postScript', 'ProgramStats.java', (Join-Path $out 'stats.txt'),
        '-postScript', 'ExportModel.java', $modelOut,
        '-postScript', 'FieldMap.java', $modelOut, '60',
        '-overwrite', '-okToDelete'
    ) + $analysisFlag)
    & $gh @args1
    if ($LASTEXITCODE -ne 0) { throw "analyzeHeadless failed with exit code $LASTEXITCODE" }

    Write-Host ''
    Write-Host "prep report : $prepReport"
    Write-Host "decompiled  : $decompOut"
    Write-Host "disassembly : $asmOut"
    Write-Host "model       : $modelOut"
}
finally {
    Pop-Location
}
