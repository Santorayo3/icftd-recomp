# Measures how "noisy" the current decompiled C is - a baseline for improving the
# Ghidra pipeline (types, names, xrefs).
$files = Get-ChildItem re\decomp_all\dshell\functions\*.c
$all = ($files | ForEach-Object { Get-Content $_.FullName -Raw }) -join "`n"
$lines = ($all -split "`n").Count
function Count-Of([string]$pat) { return ([regex]::Matches($all, $pat)).Count }

"files:               {0}" -f $files.Count
"lines:               {0}" -f $lines
"lines per function:  {0}" -f [math]::Round($lines / $files.Count, 1)
"anonymous globals:   {0}  (DAT_0002...)" -f (Count-Of 'DAT_0002')
"unaff_ registers:    {0}" -f (Count-Of 'unaff_')
"in_D/in_A params:    {0}" -f (Count-Of 'in_D[0-7]|in_A[0-7]')
"broken arg reads:    {0}  (func_0x = unaligned stack long)" -f (Count-Of 'func_0x')
"CONCAT workarounds:  {0}" -f (Count-Of 'CONCAT')
"raw field casts:     {0}  (*(type *)(p + 0xNN))" -f (Count-Of '\*\(\s*\w+\s*\*\s*\)?\s*\(')
"named functions:     {0}  (not FUN_xxxxxx)" -f ($files | Where-Object { $_.Name -notmatch '_FUN_' }).Count
