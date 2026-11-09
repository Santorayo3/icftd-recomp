<#
.SYNOPSIS
    Names the Amiga OS calls in the decompiled program.

.DESCRIPTION
    Reads re\disasm\dshell.asm and, for every "jsr/jmp (d16,A6)", works out which library
    base A6 holds at that point (the wrappers load it from an A4-relative global) and maps
    the LVO to a function name.

    The LVO order comes from the AROS .conf function lists, which keep the classic AmigaOS
    ABI order (verified against three independent facts in dshell: Text = -60,
    OwnBlitter = -456, dos Read = -42, exec AllocMem = -198 / FreeMem = -210,
    OldOpenLibrary = -408 and OpenLibrary = -552).

    Output: docs\os-calls.csv  (function,lvo,name) and a summary on stdout.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File tools\analyse-os-calls.ps1
#>
param(
    [string]$Listing = "re\disasm\dshell.asm",
    [string]$Out = "docs\os-calls.csv"
)
$ErrorActionPreference = 'Stop'

# LVO = -(30 + 6*index). '#' marks a hole (.skip) in the library's jump table.
$tables = @{
    exec = @'
Supervisor,ExitIntr,Schedule,Reschedule,Switch,Dispatch,Exception,InitCode,InitStruct,MakeLibrary,
MakeFunctions,FindResident,InitResident,Alert,Debug,Disable,Enable,Forbid,Permit,SetSR,SuperState,
UserState,SetIntVector,AddIntServer,RemIntServer,Cause,Allocate,Deallocate,AllocMem,AllocAbs,FreeMem,
AvailMem,AllocEntry,FreeEntry,Insert,AddHead,AddTail,Remove,RemHead,RemTail,Enqueue,FindName,AddTask,
RemTask,FindTask,SetTaskPri,SetSignal,SetExcept,Wait,Signal,AllocSignal,FreeSignal,AllocTrap,FreeTrap,
AddPort,RemPort,PutMsg,GetMsg,ReplyMsg,WaitPort,FindPort,AddLibrary,RemLibrary,OldOpenLibrary,
CloseLibrary,SetFunction,SumLibrary,AddDevice,RemDevice,OpenDevice,CloseDevice,DoIO,SendIO,CheckIO,
WaitIO,AbortIO,AddResource,RemResource,OpenResource,RawIOInit,RawMayGetChar,RawPutChar,RawDoFmt,GetCC,
TypeOfMem,Procure,Vacate,OpenLibrary
'@
    dos = @'
Open,Close,Read,Write,Input,Output,Seek,DeleteFile,Rename,Lock,UnLock,DupLock,Examine,ExNext,Info,
CreateDir,CurrentDir,IoErr,CreateProc,Exit,LoadSeg,UnLoadSeg,#,#,DeviceProc,SetComment,SetProtection,
DateStamp,Delay,WaitForChar,ParentDir,IsInteractive,Execute
'@
    graphics = @'
BltBitMap,BltTemplate,ClearEOL,ClearScreen,TextLength,Text,SetFont,OpenFont,CloseFont,AskSoftStyle,
SetSoftStyle,AddBob,AddVSprite,DoCollision,DrawGList,InitGels,InitMasks,RemIBob,RemVSprite,SetCollision,
SortGList,AddAnimOb,Animate,GetGBuffers,InitGMasks,DrawEllipse,AreaEllipse,LoadRGB4,InitRastPort,
InitVPort,MrgCop,MakeVPort,LoadView,WaitBlit,SetRast,Move,Draw,AreaMove,AreaDraw,AreaEnd,WaitTOF,QBlit,
InitArea,SetRGB4,QBSBlit,BltClear,RectFill,BltPattern,ReadPixel,WritePixel,Flood,PolyDraw,SetAPen,
SetBPen,SetDrMd,InitView,CBump,CMove,CWait,VBeamPos,InitBitMap,ScrollRaster,WaitBOVP,GetSprite,
FreeSprite,ChangeSprite,MoveSprite,LockLayerRom,UnlockLayerRom,SyncSBitMap,CopySBitMap,OwnBlitter,
DisownBlitter,InitTmpRas,AskFont,AddFont,RemFont,AllocRaster,FreeRaster,AndRectRegion,OrRectRegion,
NewRegion,ClearRectRegion,ClearRegion,DisposeRegion,FreeVPortCopLists,FreeCopList,ClipBlit,
XorRectRegion,FreeCprList,GetColorMap,FreeColorMap,GetRGB4,ScrollVPort,UCopperListInit,FreeGBuffers,
BltBitMapRastPort,OrRegionRegion,XorRegionRegion,AndRegionRegion,SetRGB4CM,BltMaskBitMapRastPort
'@
    intuition = @'
AddGadget,ClearDMRequest,ClearMenuStrip,ClearPointer,CloseScreen,CloseWindow,CloseWorkBench,
CurrentTime,DisplayAlert,DisplayBeep,DoubleClick,DrawBorder,DrawImage,EndRequest,GetDefPrefs,GetPrefs,
InitRequester,ItemAddress,ModifyIDCMP,ModifyProp,MoveScreen,MoveWindow,OffGadget,OffMenu,OnGadget,
OnMenu,OpenScreen,OpenWindow,OpenWorkBench,PrintIText,RefreshGadgets,RemoveGadget,ReportMouse,Request,
ScreenToBack,ScreenToFront,SetDMRequest,SetMenuStrip,SetPointer,SetWindowTitles,ShowTitle,SizeWindow,
ViewAddress,ViewPortAddress,WindowToBack,WindowToFront,WindowLimits,SetPrefs,IntuiTextLength
'@
}

# Resolve LVO -> name, separately per library: the same offset means different things.
$libLvo = @{}
foreach ($lib in $tables.Keys) {
    $names = ($tables[$lib] -split ',' | ForEach-Object { $_.Trim() } | Where-Object { $_ -ne '' })
    $map = @{}
    for ($i = 0; $i -lt $names.Count; $i++) {
        if ($names[$i] -eq '#') { continue }
        $map[-(30 + 6 * $i)] = $names[$i]
    }
    $libLvo[$lib] = $map
}
# Private library entry points shared by every base.
$special = @{ -6 = 'open'; -12 = 'close'; -18 = 'expunge'; -24 = 'reserved' }

# A4-relative globals that hold a library base (offsets verified from the startup code).
$bases = @{
    '-0x3460' = 'graphics'   # 0x265F6
    '-0x345c' = 'intuition'  # 0x265FA
    '-0x3458' = 'layers'     # 0x265FE
    '0x3af8'  = 'dos'        # 0x2D54E
    '0x3af4'  = 'exec'       # 0x2D54A
    '0x3b16'  = 'unknown/0x2d56c'
}

$raw = New-Object System.Collections.Generic.List[object]
$cur = '<none>'
$curAddr = 0
$base = '?'
foreach ($line in Get-Content $Listing) {
    if ($line -match '^; ---- ([0-9a-f]+) (\S+)') { $curAddr = [Convert]::ToInt32($Matches[1], 16); $cur = $Matches[2]; $base = '?' ; continue }
    foreach ($k in $bases.Keys) {
        if ($line -match [regex]::Escape($k) -and $line -match ',A6') { $base = $bases[$k] }
    }
    if ($line -match '(?:jmp|jsr) \(-0x([0-9a-f]+),A6\)') {
        $lvo = -[Convert]::ToInt32($Matches[1], 16)
        $name = '?'
        if ($libLvo.ContainsKey($base) -and $libLvo[$base].ContainsKey($lvo)) {
            $name = "$base.$($libLvo[$base][$lvo])"
        } elseif ($special.ContainsKey($lvo)) {
            $name = "$base.$($special[$lvo])"
        } else {
            # base not known here: report the offset and every library that defines it
            $hits = @()
            foreach ($lib in $libLvo.Keys) { if ($libLvo[$lib].ContainsKey($lvo)) { $hits += "$lib.$($libLvo[$lib][$lvo])" } }
            $name = if ($hits.Count -eq 1) { "$($hits[0])?" } else { '?(' + ($hits -join '|') + ')' }
        }
        $raw.Add([pscustomobject]@{ addr = $curAddr; fn = $cur; base = $base; lvo = $lvo; name = $name })
    }
}

# The wrappers sit in contiguous per-library blocks; a wrapper that gets the base from the
# stack is a generic call-through stub and is labelled from its neighbours.
$known = $raw | Where-Object { $_.base -ne '?' } | Sort-Object addr
foreach ($r in ($raw | Where-Object { $_.base -eq '?' })) {
    $prev = $known | Where-Object { $_.addr -lt $r.addr } | Select-Object -Last 1
    $next = $known | Where-Object { $_.addr -gt $r.addr } | Select-Object -First 1
    if ($prev -and ($r.addr - $prev.addr) -le 0x300) { $r.base = $prev.base + '~' }
    elseif ($next -and ($next.addr - $r.addr) -le 0x300) { $r.base = $next.base + '~' }
}
$rows = @('addr,function,base,lvo,name')
foreach ($r in ($raw | Sort-Object addr)) { $rows += ('0x{0:x},{1},{2},{3},{4}' -f $r.addr, $r.fn, $r.base, $r.lvo, $r.name) }
$rows | Set-Content -Path $Out -Encoding ASCII

"wrote $Out ($($rows.Count - 1) entries)"
"--- graphics calls in the program (wrapper address, lvo, name):"
$raw | Where-Object { $_.name -like 'graphics.*' } | Sort-Object lvo |
    ForEach-Object { "  0x{0:x} {1,6}  {2}" -f $_.addr, $_.lvo, $_.name }
