# Re-runs every validated harness case and writes a PASS/FAIL summary.
$exe = 'src\assetExport\bin\Debug\net10.0\ICFTD.AmigaExport.exe'
$results = New-Object System.Collections.Generic.List[string]

function Check([string]$name, [string[]]$argv, [string]$pattern) {
    $o = & $exe @argv 2>&1 | Out-String
    if ($o -match $pattern) { $script:results.Add("PASS $name") }
    else { $script:results.Add("FAIL $name") }
}

Check '2410 move.l -(A4),(d16,A2)' @('rcmp', '00002410') 'A4=00029a52[\s\S]*deadbeef'
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
