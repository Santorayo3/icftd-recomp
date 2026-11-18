# Re-runs every validated harness case and writes a PASS/FAIL summary.
$exe = 'src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe'
$results = New-Object System.Collections.Generic.List[string]

function Check([string]$name, [string[]]$argv, [string]$pattern) {
    $o = & $exe @argv 2>&1 | Out-String
    if ($o -match $pattern) { $script:results.Add("PASS $name") }
    else { $script:results.Add("FAIL $name") }
}

Check '2410 move.l -(A4),(d16,A2)' @('rcmp', '00002410') 'A4=00029a56[\s\S]*00030a00\s+4B\s+deadbeef'
Check '2cc4 move.w (d8,A0,D0.w),-(A1)' @('rcmp', '00002cc4') 'A1=00030ffe[\s\S]*3333'
Check '20698 unlk/rts' @('rcmp', '00020698') 'stop RTS after 2 instructions[\s\S]*A5=00012345'
Check 'f160 bclr.b #0' @('rcmp', '0000f160') '0002201c       1B  fe'
Check '1dcb0 empty list' @('rcmp', '0001dcb0') 'stop RTS after 41 instructions[\s\S]*D0=00040000'
Check '1dcb0 append' @('rcmp', '0001dcb0', '--fixture', 'ref\fixtures\0001dcb0-append.json') 'stop RTS after 50 instructions[\s\S]*00030501'
Check '1dcb0 prepend' @('rcmp', '0001dcb0', '--fixture', 'ref\fixtures\0001dcb0-prepend.json') 'stop RTS after 46 instructions[\s\S]*00040001'
Check '1ec42 Sms_Load' @('rcmp', '0001ec42') 'stop RTS after 5796 instructions[\s\S]*D0=00000001'
Check '1a47c abs16(-32768)' @('rcmp', '0001a47c', '--fixture', 'ref\fixtures\0001a47c-neg.json') 'D0=00008000'
Check '20820 strlen' @('rcmp', '00020820', '--fixture', 'ref\fixtures\00020820-strlen.json') 'D0=00000005'
Check '20810 strcpy' @('rcmp', '00020810', '--fixture', 'ref\fixtures\00020810-strcpy.json') 'D0=00030000[\s\S]*48656c6c6f'
Check '208a4 memset' @('rcmp', '000208a4', '--fixture', 'ref\fixtures\000208a4-memset.json') '00030000\s+4B\s+41414141'

# Opmode 4 is shared: ABCD/SBCD/ADDX/SUBX only when bits 5-4 are clear, otherwise the ordinary
# AND.B / OR.B / ADD.B / SUB.B Dn,<ea> form.  A byte of 0xF0 with D0.b = 0x0F gives 00, FF, FF,
# E1 - the mask builder in the hospital minigame depends on the AND/OR pair.
foreach ($case in @(
    @{ Name = '1ab60 and.b D0,(A0)';   Entry = '0001ab60'; Addr = '0x30000'; Want = '00' },
    @{ Name = '1ab84 or.b D0,(A0)';    Entry = '0001ab84'; Addr = '0x30000'; Want = 'ff' },
    @{ Name = '13ad0 add.b D0,(e,A0)'; Entry = '00013ad0'; Addr = '0x3000e'; Want = 'ff' },
    @{ Name = '4870 sub.b D0,(A0)';    Entry = '00004870'; Addr = '0x30000'; Want = 'e1' }))
{
    $script = "out\opmode4-$($case.Entry).steps"
    @(
        'set A0 0x30000'
        "patch $($case.Addr) f0"
        'set D0 0x0f'
        'step 1'
        "mem $($case.Addr) 1"
    ) | Set-Content $script -Encoding ascii
    $addrHex = ([Convert]::ToUInt32($case.Addr, 16)).ToString('x8')
    Check $case.Name @('rrun', $case.Entry, '--script', $script) ("${addrHex}\s+$($case.Want)\b")
}

# ADDX/SUBX share all three opmodes with the ordinary ADD/SUB Dn,<ea> form; bits 5-4 clear is the
# extend form and the size comes from bits 7-6. 0xD145 = addx.w D5,D0, 0xD381 = addx.l D1,D1: both
# were decoded as plain ADD, which loses the extend bit and (for 0xD145) the destination register.
foreach ($case in @(
    @{ Name = 'fbc0 addx.w D5,D0'; Entry = '0000fbc0'; Want = 'D0=aaaabaab'
       Steps = @('set SR 0x2710', 'set D0 0xaaaaaaaa', 'set D5 0x00001000', 'step 1', 'regs') },
    @{ Name = '21240 addx.l D1,D1'; Entry = '00021240'; Want = 'D1=00000003'
       Steps = @('set SR 0x2710', 'set D1 0x00000001', 'step 1', 'regs') }))
{
    $script = "out\addx-$($case.Entry).steps"
    $case.Steps | Set-Content $script -Encoding ascii
    Check $case.Name @('rrun', $case.Entry, '--script', $script) $case.Want
}

# CMPM names its destination in bits 11-9 and its source in bits 2-0, and its flags are
# destination - source. FUN_000208e8 is the engine's strcmp: at 0x2090e `bls` sends *smaller*
# destinations to `moveq #-1`, so reading the operands the way CMP does (bits 11-9 as the source)
# inverts every comparison of every string the engine looks up by name.
foreach ($case in @(
    @{ Name = '208e8 strcmp "a","b" = -1'; Dest = '61'; Src = '62'; Want = 'D0=ffffffff' },
    @{ Name = '208e8 strcmp "b","a" = +1'; Dest = '62'; Src = '61'; Want = 'D0=00000001' }))
{
    $script = "out\cmpm-$($case.Dest)$($case.Src).steps"
    @(
        'set A7 0x30080'
        "patch 0x30000 $($case.Dest)00"
        "patch 0x30010 $($case.Src)00"
        'patch 0x30084 00030000'
        'patch 0x30088 00030010'
        'until 0x2090e'
        'step 2'
        'regs'
    ) | Set-Content $script -Encoding ascii
    Check $case.Name @('rrun', '000208e8', '--script', $script) $case.Want
}

# The strongest case: engine plane bytes vs the C decoder, 680 bytes.
& $exe rcmp 0001ec42 --dump-mem 0x50000:0x2a8 > out\sms-planes.txt
& $exe smsfile ref\fixtures\sms\UANT.rec > out\sms-ref.txt
$lines = Get-Content out\sms-planes.txt | Where-Object { $_ -match '^0005[0-9a-f]{4}  [0-9a-f]+$' }
$engine = ($lines | ForEach-Object { ($_ -split '  ')[1] }) -join ''
$ref = (Get-Content out\sms-ref.txt | Where-Object { $_ -match '^plane\d ' } | ForEach-Object { ($_ -split ' ')[1] }) -join ''
$diff = 0
for ($i = 0; $i -lt [Math]::Min($engine.Length, $ref.Length); $i += 2) {
    if ($engine.Substring($i, 2) -ne $ref.Substring($i, 2)) { $diff++ }
}
if ($diff -eq 0 -and $engine.Length -eq $ref.Length) { $results.Add("PASS sms planes byte-identical ($($ref.Length / 2) bytes)") }
else { $results.Add("FAIL sms planes ($diff differing bytes)") }

$results | ForEach-Object { Write-Output $_ }
# Written explicitly as UTF-8 so the editor reads it back cleanly (a cmd redirect is UTF-16).
[System.IO.File]::WriteAllLines((Join-Path $PWD 'out\harness-check.txt'), $results,
    (New-Object System.Text.UTF8Encoding($false)))
