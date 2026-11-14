# Incremental-build helper shared by tools\build-host.ps1, tools\build-recomp.ps1 and
# tools\build-dos.ps1. Dot-source it and call Select-StaleSources; -Full on those scripts restores
# the old behaviour (wipe the object directory, compile everything).
#
# The decision is deliberately coarse: an object is rebuilt when
#   * it is missing,
#   * it is older than its own source, or
#   * it is older than *any* header under the source trees it is compiled against.
# A header change therefore recompiles everything. That is safe, takes seconds, and is far cheaper
# than the bug a missed rebuild would cause; there is no Watcom depfile system here on purpose.
#
# Everything below is about the *objects*. The link list is built from the source list, never from
# a wildcard over the object directory, so a deleted source takes its object with it.

# Records the compiler command line an object directory was built for. A different stamp - or none
# at all, which is what the first run after this file appeared sees - wipes the directory. That is
# what keeps -Base (RC_BASE), -bt=nt/-bt=dos and the DOS define from sharing stale objects.
$script:BuildStampName = '.build-stamp'
# Filesystem timestamps are coarse (2 s on FAT) and a source written in the same second as the
# object it should have invalidated would otherwise be missed, so the comparison leans towards
# rebuilding.
$script:BuildTimeSlackSeconds = 1

# Newest write time of a *.h anywhere under $Roots (MinValue when there is none).
function Get-BuildHeaderStamp {
    param([string[]]$Roots = @())

    $newest = [datetime]::MinValue
    foreach ($r in $Roots) {
        if (-not (Test-Path -LiteralPath $r)) { continue }
        foreach ($h in Get-ChildItem -LiteralPath $r -Recurse -File -Filter *.h -ErrorAction SilentlyContinue) {
            if ($h.LastWriteTimeUtc -gt $newest) { $newest = $h.LastWriteTimeUtc }
        }
    }
    return $newest
}

# Decides what has to be compiled, cleans the object directory when the configuration changed or
# -Full was asked for, and drops objects whose source is gone.
#
#   ObjDir        the object directory (wiped on a stamp mismatch)
#   Sources       absolute source paths, in link order
#   ObjectOf      scriptblock: source path -> absolute object path (the scripts differ in layout)
#   HeaderRoots   directories whose *.h invalidate every object
#   Stamp         the compiler command line, compared with the one recorded in ObjDir
#   Full          wipe and recompile everything
#
# Returns Wipe (the directory was wiped), Stale (sources to compile), Objects (all expected objects,
# in link order), Orphans (objects removed) and HeaderStamp.
function Select-StaleSources {
    param(
        [Parameter(Mandatory)][string]$ObjDir,
        [Parameter(Mandatory)][string[]]$Sources,
        [Parameter(Mandatory)][scriptblock]$ObjectOf,
        [string[]]$HeaderRoots = @(),
        [string]$Stamp = '',
        [switch]$Full
    )

    $stampFile = Join-Path $ObjDir $script:BuildStampName
    # The scripts list fn_table.c explicitly *and* glob fn_*.c, which matches it too. Harmless when
    # everything is recompiled every time; with kept objects the same file would be compiled twice
    # per run, so the list is de-duplicated here (order is kept).
    $Sources = @($Sources | Select-Object -Unique)
    $wipe = [bool]$Full
    if (-not $wipe) {
        $have = if (Test-Path -LiteralPath $stampFile) {
            (Get-Content -LiteralPath $stampFile -Raw).TrimEnd()
        } else {
            ''
        }
        if ($have -ne $Stamp) { $wipe = $true }
    }
    if ($wipe -and (Test-Path -LiteralPath $ObjDir)) { Remove-Item -LiteralPath $ObjDir -Recurse -Force }
    # The stamp is removed now and rewritten only by Set-BuildStamp after a successful link, so an
    # interrupted or failed build leaves no stamp behind and the next run wipes the directory
    # instead of trusting a half-written object.
    if (Test-Path -LiteralPath $stampFile) { Remove-Item -LiteralPath $stampFile -Force }
    New-Item -ItemType Directory -Force -Path $ObjDir | Out-Null

    $header = Get-BuildHeaderStamp -Roots $HeaderRoots
    $slack = $script:BuildTimeSlackSeconds
    $objects = New-Object System.Collections.Generic.List[string]
    $stale = New-Object System.Collections.Generic.List[string]

    foreach ($src in $Sources) {
        $obj = & $ObjectOf $src
        $objects.Add($obj)
        New-Item -ItemType Directory -Force -Path (Split-Path -Parent $obj) | Out-Null

        $need = $wipe -or -not (Test-Path -LiteralPath $obj)
        if (-not $need) {
            $objTime = (Get-Item -LiteralPath $obj).LastWriteTimeUtc
            $need = (Get-Item -LiteralPath $src).LastWriteTimeUtc -ge $objTime.AddSeconds(-$slack)
            if (-not $need -and $header -ne [datetime]::MinValue) {
                $need = $header -ge $objTime.AddSeconds(-$slack)
            }
        }
        if ($need) { $stale.Add($src) }
    }

    $known = @{}
    foreach ($o in $objects) { $known[$o] = $true }
    $orphans = 0
    foreach ($o in @(Get-ChildItem -LiteralPath $ObjDir -Recurse -File -Filter *.obj -ErrorAction SilentlyContinue)) {
        if (-not $known.ContainsKey($o.FullName)) {
            Remove-Item -LiteralPath $o.FullName -Force
            $orphans++
        }
    }

    return [pscustomobject]@{
        Wipe        = $wipe
        Stale       = $stale.ToArray()
        Objects     = $objects.ToArray()
        Orphans     = $orphans
        HeaderStamp = $header
    }
}

# Records the configuration a successful build left behind. Call it after the link, never before:
# a failed build must not leave an "up to date" stamp.
function Set-BuildStamp {
    param(
        [Parameter(Mandatory)][string]$ObjDir,
        [string]$Stamp = ''
    )

    New-Item -ItemType Directory -Force -Path $ObjDir | Out-Null
    [System.IO.File]::WriteAllText((Join-Path $ObjDir $script:BuildStampName), $Stamp + "`r`n",
        (New-Object System.Text.UTF8Encoding($false)))
}

# wcl386 drops one <module>.err next to the object it compiled. The object directory is kept
# between runs now, so they would pile up; a successful build has nothing to say through them.
# (A failed build returns before this and leaves them in place for the diagnosis.)
function Clear-BuildErrors {
    param([Parameter(Mandatory)][string]$ObjDir)

    foreach ($e in @(Get-ChildItem -LiteralPath $ObjDir -Recurse -File -Filter *.err -ErrorAction SilentlyContinue)) {
        Remove-Item -LiteralPath $e.FullName -Force
    }
}

# Did anything change since the last successful build? The link is skipped when nothing was
# compiled, the linker input is complete, and the binary is still there - which is what leaves a
# no-op rebuild's binary byte-for-byte untouched.
function Test-BuildNeeded {
    param(
        [Parameter(Mandatory)]$Plan,
        [Parameter(Mandatory)][string]$Output
    )

    return $Plan.Wipe -or $Plan.Stale.Count -gt 0 -or $Plan.Orphans -gt 0 -or
           -not (Test-Path -LiteralPath $Output)
}
